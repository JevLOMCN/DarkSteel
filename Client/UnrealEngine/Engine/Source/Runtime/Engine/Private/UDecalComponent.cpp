// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 50

// StaticClass @ 147889750

UClass * __cdecl UDecalComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDecalComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DecalComponent",
               &Z_Registration_Info_UClass_UDecalComponent.InnerSingleton,
               StaticRegisterNativesUDecalComponent,0x2c0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDecalComponent>,
               InternalVTableHelperCtorCaller<UDecalComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDecalComponent.InnerSingleton;
}

// UDecalComponent @ 1478a85f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDecalComponent * __thiscall
UDecalComponent::UDecalComponent(UDecalComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->DecalMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->DecalColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  this->LatestPSOPrecacheJobSetCompleted = (atomic<int>)0x0;
  this->LatestPSOPrecacheJobSet = 0;
  (this->TimerHandle_DestroyDecalComponent).Handle = 0;
  return this;
}

// UDecalComponent @ 1478a8660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDecalComponent * __thiscall
UDecalComponent::UDecalComponent(UDecalComponent *this,FObjectInitializer *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->FadeScreenSize = 0.01;
  this->FadeStartDelay = 0.0;
  this->bDestroyOwnerAfterFade = '\x01';
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->DecalSize).field0_0x0._s_0.X = 128.0;
  (this->DecalSize).field0_0x0._s_0.Y = 256.0;
  (this->DecalSize).field0_0x0._s_0.Z = 256.0;
  (this->DecalMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->FadeDuration = 0.0;
  (this->DecalColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  this->LatestPSOPrecacheJobSetCompleted = (atomic<int>)0x0;
  this->LatestPSOPrecacheJobSet = 0;
  (this->TimerHandle_DestroyDecalComponent).Handle = 0;
  return this;
}

// ~UDecalComponent @ 1478abab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::~UDecalComponent(UDecalComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// AdditionalStatObject @ 1478b3570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall UDecalComponent::AdditionalStatObject(UDecalComponent *this)

{
  return (UObject *)(this->DecalMaterial).field0_0x0.DebugPtr;
}

// BeginPlay @ 1478b6610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::BeginPlay(UDecalComponent *this)

{
  UActorComponent::BeginPlay((UActorComponent *)this);
  SetLifeSpan(this,this->FadeDuration + this->FadeStartDelay);
  return;
}

// CalcBounds @ 1478b7500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UDecalComponent::CalcBounds
          (UDecalComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  TVector<double>_u_0 local_c8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined8 local_98;
  TMatrix<double> local_88;
  
  local_b0 = (this->DecalSize).field0_0x0._s_0.X;
  dStack_a8 = (this->DecalSize).field0_0x0._s_0.Y;
  dVar1 = (this->DecalSize).field0_0x0._s_0.Z;
  local_c8._s_0.Z = 0.0;
  local_c8._s_0.X = 0.0;
  local_c8._s_0.Y = 0.0;
  local_a0 = (this->DecalSize).field0_0x0._s_0.Z;
  dVar2 = (this->DecalSize).field0_0x0._s_0.Y;
  dVar3 = (this->DecalSize).field0_0x0._s_0.X;
  auVar4._0_8_ = dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1;
  auVar4._8_8_ = 0;
  auVar4 = sqrtpd(auVar4,auVar4);
  local_98 = auVar4._0_8_;
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_88);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy
            ((TBoxSphereBounds<double,double> *)&local_c8._s_0,__return_storage_ptr__,&local_88);
  return __return_storage_ptr__;
}

// CreateDynamicMaterialInstance @ 1478c0e70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMaterialInstanceDynamic * __thiscall
UDecalComponent::CreateDynamicMaterialInstance(UDecalComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  UMaterialInterface *pUVar4;
  
  pUVar4 = (this->DecalMaterial).field0_0x0.DebugPtr;
  if (pUVar4 != (UMaterialInterface *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pUVar4 = *(UMaterialInterface **)&pUVar4[1].SubsurfaceProfiles.ArrayNum;
    }
  }
  pUVar3 = UMaterialInstanceDynamic::Create(pUVar4,(UObject *)this,(FName)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->DecalMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)pUVar3;
  (**(code **)(*(longlong *)this + 0x378))(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return pUVar3;
}

// CreateRenderState_Concurrent @ 1478c1980

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
UDecalComponent::CreateRenderState_Concurrent
          (UDecalComponent *this,FRegisterComponentContext *param_1)

{
  bool bVar1;
  UWorld *pUVar2;
  
  UActorComponent::CreateRenderState_Concurrent((UActorComponent *)this,param_1);
  bVar1 = USceneComponent::ShouldComponentAddToScene((USceneComponent *)this);
  if (bVar1) {
    bVar1 = USceneComponent::ShouldRender((USceneComponent *)this);
    if (bVar1) {
      pUVar2 = *(UWorld **)&this->field_0xb0;
      if (pUVar2 == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
                    /* WARNING: Could not recover jumptable at 0x0001478c19cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pUVar2->Scene->_padding_ + 0x128))(pUVar2->Scene,this);
      return;
    }
  }
  return;
}

// CreateSceneProxy @ 1478c1e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDeferredDecalProxy * __thiscall UDecalComponent::CreateSceneProxy(UDecalComponent *this)

{
  EPSOPrecacheProxyCreationStrategy EVar1;
  FDeferredDecalProxy *pFVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,SceneRender,false,None,Default,true);
  FMemScope::FMemScope(local_res10,SceneRender,true);
  if (this->LatestPSOPrecacheJobSetCompleted == (atomic<int>)this->LatestPSOPrecacheJobSet) {
LAB_1478c1e4c:
    pFVar2 = ::operator_new(0xe0);
    if (pFVar2 != (FDeferredDecalProxy *)0x0) {
      pFVar2 = FDeferredDecalProxy::FDeferredDecalProxy(pFVar2,this);
      goto LAB_1478c1e6d;
    }
  }
  else {
    EVar1 = GetPSOPrecacheProxyCreationStrategy();
    if (EVar1 != DelayUntilPSOPrecached) goto LAB_1478c1e4c;
  }
  pFVar2 = (FDeferredDecalProxy *)0x0;
LAB_1478c1e6d:
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar2;
}

// DestroyRenderState_Concurrent @ 1478c31f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::DestroyRenderState_Concurrent(UDecalComponent *this)

{
  UWorld *pUVar1;
  
  UActorComponent::DestroyRenderState_Concurrent((UActorComponent *)this);
  pUVar1 = *(UWorld **)&this->field_0xb0;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
                    /* WARNING: Could not recover jumptable at 0x0001478c3224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->Scene->_padding_ + 0x130))(pUVar1->Scene,this);
  return;
}

// GetDecalMaterial @ 1478d0f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMaterialInterface * __thiscall UDecalComponent::GetDecalMaterial(UDecalComponent *this)

{
  return (this->DecalMaterial).field0_0x0.DebugPtr;
}

// GetFadeDuration @ 1478d46f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UDecalComponent::GetFadeDuration(UDecalComponent *this)

{
  return this->FadeDuration;
}

// GetFadeInDuration @ 1478d4700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UDecalComponent::GetFadeInDuration(UDecalComponent *this)

{
  return this->FadeInDuration;
}

// GetFadeInStartDelay @ 1478d4710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UDecalComponent::GetFadeInStartDelay(UDecalComponent *this)

{
  return this->FadeInStartDelay;
}

// GetFadeStartDelay @ 1478d4730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UDecalComponent::GetFadeStartDelay(UDecalComponent *this)

{
  return this->FadeStartDelay;
}

// GetMaterial @ 1478d5c50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMaterialInterface * __thiscall UDecalComponent::GetMaterial(UDecalComponent *this,int param_1)

{
  UMaterialInterface *pUVar1;
  
  if (param_1 == 0) {
    pUVar1 = (this->DecalMaterial).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UMaterialInterface *)0x0;
}

// GetNumMaterials @ 1478d66b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall UDecalComponent::GetNumMaterials(UDecalComponent *this)

{
  return 1;
}

// GetPrivateStaticClass @ 1478d8db0

UClass * __cdecl UDecalComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDecalComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DecalComponent",
               &Z_Registration_Info_UClass_UDecalComponent.InnerSingleton,
               StaticRegisterNativesUDecalComponent,0x2c0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDecalComponent>,
               InternalVTableHelperCtorCaller<UDecalComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDecalComponent.InnerSingleton;
}

// GetUsedMaterials @ 1478ddd80

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
UDecalComponent::GetUsedMaterials
          (UDecalComponent *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  TObjectPtr<UMaterialInterface>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UMaterialInterface>_u_0 local_18 [2];
  
  local_18[0] = (this->DecalMaterial).field0_0x0;
  pTVar1 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
  if ((pTVar1 <= local_18) && (local_18 < pTVar1 + param_1->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  return;
}

// IsPostLoadThreadSafe @ 1478e1700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UDecalComponent::IsPostLoadThreadSafe(UDecalComponent *this)

{
  return true;
}

// LifeSpanCallback @ 1478e1bc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::LifeSpanCallback(UDecalComponent *this)

{
  (**(code **)(*(longlong *)this + 0x4a0))();
  if ((this->bDestroyOwnerAfterFade != 0) &&
     (((0.0 < this->FadeDuration || (0.0 < this->FadeStartDelay)) &&
      (*(AActor **)&this->field_0xa8 != (AActor *)0x0)))) {
    AActor::Destroy(*(AActor **)&this->field_0xa8,false,true);
    return;
  }
  return;
}

// OnRegister @ 1478e5e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::OnRegister(UDecalComponent *this)

{
  char cVar1;
  UWorld *pUVar2;
  ULevel *pUVar3;
  FLevelCollection *pFVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId846,"USceneComponent::OnRegister",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
               ,0x34e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId846);
  }
  pFVar4 = (FLevelCollection *)0x0;
  if ((*(longlong *)&this->field_0xd0 != 0) &&
     (cVar1 = (**(code **)(*(longlong *)this + 0x508))
                        (this,*(longlong *)&this->field_0xd0,
                         &FAttachmentTransformRules::KeepRelativeTransform,
                         *(undefined8 *)&this->field_0xd8), cVar1 == '\0')) {
    *(undefined8 *)&this->field_0xd0 = 0;
    this->field_0x1a8 = this->field_0x1a8 & 0x3f;
    this->field_0x1a9 = this->field_0x1a9 & 0xfc;
    *(undefined8 *)&this->field_0xd8 = 0;
  }
  if ((*(longlong *)&this->field_0xb0 != 0) ||
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 != (UWorld *)0x0)
     ) {
    pUVar3 = UActorComponent::GetComponentLevel((UActorComponent *)this);
    if (pUVar3 != (ULevel *)0x0) {
      pFVar4 = pUVar3->CachedLevelCollection;
    }
    *(FLevelCollection **)&this->field_0xc0 = pFVar4;
  }
  UActorComponent::OnRegister((UActorComponent *)this);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PostLoad @ 1478e7560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::PostLoad(UDecalComponent *this)

{
  UActorComponent::PostLoad((UActorComponent *)this);
                    /* WARNING: Could not recover jumptable at 0x0001478e7579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x378))(this);
  return;
}

// PrecachePSOs @ 1478e7c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UDecalComponent::PrecachePSOs(UDecalComponent *this)

{
  atomic<unsigned_int> *paVar1;
  uchar *puVar2;
  atomic<unsigned_int> aVar3;
  UMaterialInterface *pUVar4;
  code *pcVar5;
  bool bVar6;
  EPSOPrecacheProxyCreationStrategy EVar7;
  int iVar8;
  atomic<int> aVar9;
  FTaskBase *this_00;
  wchar_t *pwVar10;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar11;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  FTaskBase *this_01;
  undefined1 auStackY_108 [32];
  EExtendedTaskPriority local_b8;
  ETaskPriority local_b7 [7];
  ulonglong local_b0;
  undefined1 local_a8 [16];
  void *local_98;
  uchar local_90 [8];
  ForElementType<FPSOPrecacheVertexFactoryData> local_88;
  ForElementType<FPSOPrecacheVertexFactoryData> local_80;
  int local_58;
  int local_54;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_50;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar10 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar10,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) &&
      ((bVar6 = IsComponentPSOPrecachingEnabled(), bVar6 &&
       (pUVar4 = (this->DecalMaterial).field0_0x0.DebugPtr, pUVar4 != (UMaterialInterface *)0x0))))
     && (((uint)pUVar4->_padding_ >> 0xc & 1) == 0)) {
    this_01 = (FTaskBase *)0x0;
    local_54 = 2;
    local_b0 = (ulonglong)((uint)local_b0 & 0x8000) | 0x13c00;
    local_80.SecondaryData = (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
    local_58 = 0;
    local_a8._0_8_ = &FLocalVertexFactory::StaticType;
    local_a8[8] = '\0';
    local_a8[9] = '\0';
    local_a8[10] = '\0';
    local_a8[0xb] = '\0';
    local_a8[0xc] = '\0';
    local_a8[0xd] = '\0';
    local_a8[0xe] = '\0';
    local_a8[0xf] = '\0';
    iVar8 = 0;
    if ((&local_80 <= (ForElementType<FPSOPrecacheVertexFactoryData> *)local_a8) &&
       (local_a8 < &local_80.SecondaryData)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = local_58;
      if (local_58 == local_54) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                          (0x810,&local_80,&local_54);
      }
    }
    local_58 = iVar8 + 1;
    FVar11 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_80;
    if (local_80.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
      FVar11 = local_80.SecondaryData;
    }
    puVar2 = (uchar *)((longlong)FVar11 + (longlong)iVar8 * 0x10);
    *(undefined4 *)puVar2 = local_a8._0_4_;
    *(undefined4 *)(puVar2 + 4) = local_a8._4_4_;
    *(undefined4 *)(puVar2 + 8) = local_a8._8_4_;
    *(undefined4 *)(puVar2 + 0xc) = local_a8._12_4_;
    pUVar4 = (this->DecalMaterial).field0_0x0.DebugPtr;
    local_98 = (void *)0x0;
    local_90[0] = '\0';
    local_90[1] = '\0';
    local_90[2] = '\0';
    local_90[3] = '\0';
    local_90[4] = '\0';
    local_90[5] = '\0';
    local_90[6] = '\0';
    local_90[7] = '\0';
    (**(code **)(pUVar4->_padding_ + 0x3b0))(pUVar4,&local_50,&local_80,&local_b0);
    EVar7 = GetPSOPrecacheProxyCreationStrategy();
    if (EVar7 != AlwaysCreate) {
      aVar9 = (atomic<int>)(this->LatestPSOPrecacheJobSet + 1);
      this->LatestPSOPrecacheJobSet = (int)aVar9;
      if (local_50.ArrayNum < 1) {
        LOCK();
        this->LatestPSOPrecacheJobSetCompleted = aVar9;
        UNLOCK();
      }
      else {
        this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
        if (this_00 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,&local_50);
          this_00->_padding_ =
               (longlong)
               &TGraphTask<`UDecalComponent::PrecachePSOs'::`11'::FPSODecalPrecacheFinishedTask>::
                _vftable_;
          this_01 = this_00;
        }
        iVar8 = this->LatestPSOPrecacheJobSet;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        this_01[1]._padding_ = 0;
        local_88 = (ForElementType<FPSOPrecacheVertexFactoryData>)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(this_01 + 1),(FObjectPtr)&local_88);
        *(int *)&this_01[1]._padding_ = iVar8;
        UE::Tasks::Private::TranslatePriority(GameThread,local_b7,&local_b8);
        UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_b7[0],local_b8,None);
        if (this_01 == (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0xe8);
        }
        else {
          LOCK();
          this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0xe8);
          LOCK();
          paVar1 = &this_01->RefCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_01->_padding_)(this_01,1);
          }
        }
      }
    }
    FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_50;
    if (local_50.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar12 = local_50.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar12,local_50.ArrayNum);
    if (local_50.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
    }
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
    if (local_80.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
      FMemory::Free((void *)local_80.SecondaryData);
    }
  }
  return;
}

// PushSelectionToProxy @ 1478e8710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::PushSelectionToProxy(UDecalComponent *this)

{
  return;
}

// SendRenderTransform_Concurrent @ 1478ed880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::SendRenderTransform_Concurrent(UDecalComponent *this)

{
  bool bVar1;
  UWorld *pUVar2;
  
  bVar1 = USceneComponent::ShouldComponentAddToScene((USceneComponent *)this);
  if (bVar1) {
    bVar1 = USceneComponent::ShouldRender((USceneComponent *)this);
    if (bVar1) {
      pUVar2 = *(UWorld **)&this->field_0xb0;
      if (pUVar2 == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      (**(code **)(pUVar2->Scene->_padding_ + 0x138))(pUVar2->Scene,this);
    }
  }
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  return;
}

// Serialize @ 1478ede30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::Serialize(UDecalComponent *this,FArchive *param_1)

{
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  if (*(int *)&param_1->field_0x40 < 0x1e3) {
    (this->DecalSize).field0_0x0._s_0.X = 1.0;
    (this->DecalSize).field0_0x0._s_0.Y = 1.0;
    (this->DecalSize).field0_0x0._s_0.Z = 1.0;
  }
  return;
}

// Serialize @ 1478ede80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::Serialize(UDecalComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  USceneComponent::Serialize((USceneComponent *)this,pFVar1);
  if (*(int *)&pFVar1->field_0x40 < 0x1e3) {
    (this->DecalSize).field0_0x0._s_0.X = 1.0;
    (this->DecalSize).field0_0x0._s_0.Y = 1.0;
    (this->DecalSize).field0_0x0._s_0.Z = 1.0;
  }
  return;
}

// SetDecalColor @ 1478f1870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::SetDecalColor(UDecalComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->DecalColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->DecalColor).field0_0x0 + 8) = uVar1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetDecalMaterial @ 1478f1890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::SetDecalMaterial(UDecalComponent *this,UMaterialInterface *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->DecalMaterial).field0_0x0.DebugPtr = param_1;
  (**(code **)(*(longlong *)this + 0x378))(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetFadeIn @ 1478f23c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::SetFadeIn(UDecalComponent *this,float param_1,float param_2)

{
  UWorld *pUVar1;
  
  this->FadeInStartDelay = param_1;
  this->FadeInDuration = param_2;
  if (this->SceneProxy != (FDeferredDecalProxy *)0x0) {
    pUVar1 = *(UWorld **)&this->field_0xb0;
    if (pUVar1 == (UWorld *)0x0) {
      pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
                    /* WARNING: Could not recover jumptable at 0x0001478f2406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->Scene->_padding_ + 0x148))(pUVar1->Scene,this);
    return;
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetFadeOut @ 1478f2420

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
UDecalComponent::SetFadeOut(UDecalComponent *this,float param_1,float param_2,bool param_3)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  UWorld *pUVar4;
  float fVar5;
  
  pTVar2 = CVarDecalFadeDurationScale.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  fVar5 = pTVar2->ShadowedValue[0];
  if (fVar5 <= __real_322bcc77) {
    fVar5 = 0.0;
  }
  this->bDestroyOwnerAfterFade = '\0';
  this->field_0x270 = this->field_0x270 | param_3;
  this->FadeDuration = fVar5 * param_2;
  this->FadeStartDelay = fVar5 * param_1;
  SetLifeSpan(this,fVar5 * param_2 + fVar5 * param_1);
  if (this->SceneProxy == (FDeferredDecalProxy *)0x0) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  else {
    pUVar4 = *(UWorld **)&this->field_0xb0;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    (**(code **)(pUVar4->Scene->_padding_ + 0x140))(pUVar4->Scene,this);
  }
  return;
}

// SetFadeScreenSize @ 1478f2530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::SetFadeScreenSize(UDecalComponent *this,float param_1)

{
  this->FadeScreenSize = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetLifeSpan @ 1478f30e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::SetLifeSpan(UDecalComponent *this,float param_1)

{
  UWorld *this_00;
  FTimerManager *pFVar1;
  FTimerData *pFVar2;
  code *local_28;
  undefined8 uStack_20;
  
  this_00 = *(UWorld **)&this->field_0xb0;
  if (0.0 < param_1) {
    if (this_00 == (UWorld *)0x0) {
      this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pFVar1 = UWorld::GetTimerManager(this_00);
    uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
    local_28 = _vcall__1608__flat______;
    FTimerManager::SetTimer<UDecalComponent>
              (pFVar1,&this->TimerHandle_DestroyDecalComponent,this,(pmf_38da4c31 *)&local_28,
               param_1,false,__real_bf800000);
    return;
  }
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pFVar1 = UWorld::GetTimerManager(this_00);
  pFVar2 = FTimerManager::FindTimer(pFVar1,&this->TimerHandle_DestroyDecalComponent);
  if (pFVar2 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer
              (pFVar1,(FTimerHandle)(this->TimerHandle_DestroyDecalComponent).Handle);
  }
  (this->TimerHandle_DestroyDecalComponent).Handle = 0;
  return;
}

// SetMaterial @ 1478f3a00

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
UDecalComponent::SetMaterial(UDecalComponent *this,int param_1,UMaterialInterface *param_2)

{
  if (param_1 == 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (this->DecalMaterial).field0_0x0.DebugPtr = param_2;
    (**(code **)(*(longlong *)this + 0x378))(this);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetSortOrder @ 1478f5350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDecalComponent::SetSortOrder(UDecalComponent *this,int param_1)

{
  this->SortOrder = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// StaticRegisterNativesUDecalComponent @ 1478f7d70

void __cdecl UDecalComponent::StaticRegisterNativesUDecalComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UDecalComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateDynamicMaterialInstance @ 147902670

void __cdecl
UDecalComponent::execCreateDynamicMaterialInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x640))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetDecalMaterial @ 1479036a0

void __cdecl UDecalComponent::execGetDecalMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xe].field_0x20;
  return;
}

// execGetFadeDuration @ 147903850

void __cdecl UDecalComponent::execGetFadeDuration(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xf].field_0xc;
  return;
}

// execGetFadeInDuration @ 147903880

void __cdecl UDecalComponent::execGetFadeInDuration(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xf].field_0x10;
  return;
}

// execGetFadeInStartDelay @ 1479038b0

void __cdecl
UDecalComponent::execGetFadeInStartDelay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xf].field_0x14;
  return;
}

// execGetFadeStartDelay @ 1479038e0

void __cdecl UDecalComponent::execGetFadeStartDelay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xf].field_0x8;
  return;
}

// execSetDecalColor @ 14790b1a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UDecalComponent::execSetDecalColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar17 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar17[1];
  uVar3 = puVar17[2];
  uVar4 = puVar17[3];
  uVar5 = puVar17[4];
  uVar6 = puVar17[5];
  uVar7 = puVar17[6];
  uVar8 = puVar17[7];
  uVar9 = puVar17[8];
  uVar10 = puVar17[9];
  uVar11 = puVar17[10];
  uVar12 = puVar17[0xb];
  uVar13 = puVar17[0xc];
  uVar14 = puVar17[0xd];
  uVar15 = puVar17[0xe];
  uVar16 = puVar17[0xf];
  param_1[0x10].field_0x10 = puVar17[0];
  param_1[0x10].field_0x11 = uVar2;
  param_1[0x10].field_0x12 = uVar3;
  param_1[0x10].field_0x13 = uVar4;
  param_1[0x10].field_0x14 = uVar5;
  param_1[0x10].field_0x15 = uVar6;
  param_1[0x10].field_0x16 = uVar7;
  param_1[0x10].field_0x17 = uVar8;
  param_1[0x10].field_0x18 = uVar9;
  param_1[0x10].field_0x19 = uVar10;
  param_1[0x10].field_0x1a = uVar11;
  param_1[0x10].field_0x1b = uVar12;
  param_1[0x10].field_0x1c = uVar13;
  param_1[0x10].field_0x1d = uVar14;
  param_1[0x10].field_0x1e = uVar15;
  param_1[0x10].field_0x1f = uVar16;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetDecalMaterial @ 14790b240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UDecalComponent::execSetDecalMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[0xe].field_0x20 = pUVar2;
  (**(code **)(*(longlong *)param_1 + 0x378))(param_1);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetFadeIn @ 14790c730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UDecalComponent::execSetFadeIn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  UWorld *pUVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)(param_1 + 0x11);
  *(undefined4 *)&param_1[0xf].field_0x14 = local_res8[0];
  *(undefined4 *)&param_1[0xf].field_0x10 = local_res10[0];
  if (lVar2 != 0) {
    pUVar3 = *(UWorld **)&param_1[4].field_0x10;
    if (pUVar3 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    (**(code **)(pUVar3->Scene->_padding_ + 0x148))(pUVar3->Scene,param_1);
    return;
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetFadeOut @ 14790c850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UDecalComponent::execSetFadeOut(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  TConsoleVariableData<float> *pTVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  UWorld *pUVar8;
  bool bVar9;
  float fVar10;
  int local_res8 [2];
  float local_res10 [4];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar6 = local_res20[0];
  fVar5 = local_res10[0];
  bVar9 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar4 = CVarDecalFadeDurationScale.Ref;
  bVar7 = IsInParallelGameThread();
  if (!bVar7) {
    bVar7 = IsInGameThread();
    if (!bVar7) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  fVar10 = pTVar4->ShadowedValue[0];
  if (fVar10 <= __real_322bcc77) {
    fVar10 = 0.0;
  }
  param_1[0xf].field_0x18 = param_1[0xf].field_0x18 & 0xfe;
  param_1[0xf].field_0x18 = param_1[0xf].field_0x18 | bVar9;
  *(float *)&param_1[0xf].field_0xc = fVar10 * fVar5;
  *(float *)&param_1[0xf].field_0x8 = fVar10 * fVar6;
  SetLifeSpan((UDecalComponent *)param_1,fVar10 * fVar5 + fVar10 * fVar6);
  if (*(longlong *)(param_1 + 0x11) == 0) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  else {
    pUVar8 = *(UWorld **)&param_1[4].field_0x10;
    if (pUVar8 == (UWorld *)0x0) {
      pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    (**(code **)(pUVar8->Scene->_padding_ + 0x140))(pUVar8->Scene,param_1);
  }
  return;
}

// execSetFadeScreenSize @ 14790ca60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UDecalComponent::execSetFadeScreenSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0xf].field_0x4 = local_res8[0];
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetSortOrder @ 147911f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UDecalComponent::execSetSortOrder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
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
  *(undefined4 *)(param_1 + 0xf) = local_res8[0];
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

