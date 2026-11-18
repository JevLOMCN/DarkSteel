// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// FPreviewScene @ 14834b520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FPreviewScene * __thiscall
FPreviewScene::FPreviewScene(FPreviewScene *this,ConstructionValues *param_1)

{
  TObjectPtr<UWorld> *pTVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  TObjectPtr<UClass>_u_0 TVar5;
  UGameInstance *pUVar6;
  code *pcVar7;
  bool bVar8;
  UPackage *pUVar9;
  UClass *pUVar10;
  UWorld *pUVar11;
  FWorldContext *pFVar12;
  UGameViewportClient *pUVar13;
  UClass *pUVar14;
  FPreviewScene *pFVar15;
  UDirectionalLightComponent *pUVar16;
  TQuat<double> *pTVar17;
  USkyLightComponent *pUVar18;
  ULineBatchComponent *pUVar19;
  longlong *plVar20;
  uint uVar21;
  undefined1 auStackY_3a8 [32];
  TObjectPtr<UWorld>_u_0 *local_360;
  FWorldInitializationValues local_358;
  undefined1 local_348 [32];
  ForAnyElementType local_328;
  ULineBatchComponent *local_310;
  void *local_300;
  FString *local_2f0;
  int local_2e8;
  void *local_2e0;
  TQuat<double> local_2c8;
  undefined1 local_2a8 [128];
  undefined1 local_228 [128];
  undefined1 local_1a8 [128];
  undefined1 local_128 [128];
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FPreviewScene__6B_;
  pTVar1 = &this->PreviewWorld;
  this->DirectionalLight = (UDirectionalLightComponent *)0x0;
  this->SkyLight = (USkyLightComponent *)0x0;
  (this->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Components).ArrayNum = 0;
  (this->Components).ArrayMax = 0;
  (pTVar1->field0_0x0).DebugPtr = (UWorld *)0x0;
  this->LineBatcher = (ULineBatchComponent *)0x0;
  this->bForceAllUsedMipsResident = param_1->bForceMipsResident;
  uVar21 = *(uint *)&param_1->field_0x20;
  pUVar9 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar9,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_2a8,pUVar10);
  local_2a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_2a8._56_8_ = (UPackage *)0x0;
  local_2a8._16_4_ = 0;
  local_2a8._20_4_ = 0;
  local_2a8._40_8_ = (UObject *)0x0;
  local_2a8[0x20] = false;
  local_2a8._8_8_ = pUVar9;
  local_2a8._24_4_ = uVar21 >> 2 & RF_Transactional;
  pUVar11 = (UWorld *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2a8);
  if (local_2a8._64_8_ != 0) {
    plVar20 = (longlong *)(local_2a8 + 0x50);
    if ((longlong *)local_2a8._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_2a8._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (pTVar1->field0_0x0).DebugPtr = pUVar11;
  (pUVar11->WorldType).Value = ~param_1->bEditor & 1 | 4;
  pFVar12 = UEngine::CreateNewWorldContext
                      (GEngine,(uint)(((pTVar1->field0_0x0).DebugPtr)->WorldType).Value);
  FWorldContext::SetCurrentWorld(pFVar12,(pTVar1->field0_0x0).DebugPtr);
  uVar3 = *(undefined4 *)&param_1->field_0x20;
  pUVar11 = (pTVar1->field0_0x0).DebugPtr;
  TVar5 = (TObjectPtr<UClass>_u_0)(param_1->DefaultGameMode).Class.field0_0x0.DebugPtr;
  uVar21 = (((uint)uVar3 >> 1 & 0xff) * 2 ^ 0x167f) & 2 ^ 0x167f;
  uVar21 = (ZPULL(uVar3,6,1) << 2 ^
           ((((uint)uVar3 >> 3 & 0xff) << 3 ^ uVar21) & 8 ^ uVar21) & 0xfffffffb) & 0xffffffcf;
  uVar21 = (((uint)uVar3 >> 4 & 0xff) << 6 ^ uVar21) & 0x40 ^ uVar21;
  uVar21 = (((uint)uVar3 >> 5 & 0xff) << 9 ^ uVar21) & 0x200 ^ uVar21;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar5.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar5.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
  }
  local_358._0_4_ = (uVar21 ^ local_358._0_4_) & 1 ^ local_358._0_4_;
  local_358._0_4_ = (uVar21 ^ local_358._0_4_) & 2 ^ local_358._0_4_;
  local_358._0_4_ = (uVar21 ^ local_358._0_4_) & 4 ^ local_358._0_4_;
  local_358._0_4_ = ((uVar21 ^ local_358._0_4_) & 8 ^ local_358._0_4_) & 0xffffffcf;
  local_358._0_4_ = (uVar21 ^ local_358._0_4_) & 0x40 ^ local_358._0_4_;
  local_358._0_4_ = local_358._0_4_ & 0x80 ^ local_358._0_4_;
  local_358._0_4_ =
       ((*(uint *)&param_1->field_0x20 >> 7 & 0xff) << 8 ^ local_358._0_4_) & 0x100 ^
       local_358._0_4_;
  local_358._0_4_ = (uVar21 ^ local_358._0_4_) & 0x200 ^ local_358._0_4_;
  local_358._0_4_ = (uVar21 ^ local_358._0_4_) & 0x400 ^ local_358._0_4_;
  local_358._0_4_ = local_358._0_4_ & 0x800 ^ local_358._0_4_;
  local_358._0_4_ = (uVar21 ^ local_358._0_4_) & 0x1000 ^ local_358._0_4_;
  local_358.DefaultGameMode.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>)TVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar5.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
  }
  UWorld::InitializeNewWorld(pUVar11,&local_358,false);
  FURL::FURL((FURL *)(local_348 + 0x10),(wchar_t *)0x0);
  pUVar6 = param_1->OwningGameInstance;
  if ((pUVar6 != (UGameInstance *)0x0) &&
     (pUVar11 = (pTVar1->field0_0x0).DebugPtr, (pUVar11->WorldType).Value == '\x05')) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (pUVar11->OwningGameInstance).field0_0x0.DebugPtr = pUVar6;
    pFVar12 = UEngine::GetWorldContextFromWorldChecked(GEngine,(pTVar1->field0_0x0).DebugPtr);
    pUVar6 = param_1->OwningGameInstance;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UGameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (pFVar12->OwningGameInstance).field0_0x0.DebugPtr = pUVar6;
    pUVar13 = UGameInstance::GetGameViewportClient(param_1->OwningGameInstance);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UGameViewportClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (pFVar12->GameViewport).field0_0x0.DebugPtr = pUVar13;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 = (pFVar12->ThisCurrentWorld).field0_0x0.DebugPtr, pUVar11 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    pTVar1->field0_0x0 = (pFVar12->ThisCurrentWorld).field0_0x0;
    local_360 = &pTVar1->field0_0x0;
    TArray<TObjectPtr<UWorld>_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UWorld>_*>
              (&pFVar12->ExternalReferences,(TObjectPtr<UWorld> **)&local_360);
    pUVar10 = (param_1->DefaultGameMode).Class.field0_0x0.DebugPtr;
    if ((pUVar10 != (UClass *)0x0) &&
       (pUVar14 = Z_Construct_UClass_AGameModeBase_NoRegister(), pUVar14 != (UClass *)0x0)) {
      iVar4 = (int)pUVar14->_padding_;
      if (((int)pUVar10->_padding_ < iVar4) ||
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar4 * 8) !=
          &pUVar14->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((((bVar8) && ((param_1->DefaultGameMode).Class.field0_0x0.DebugPtr != (UClass *)0x0)) &&
          (UWorld::SetGameMode((pTVar1->field0_0x0).DebugPtr,(FURL *)(local_348 + 0x10)),
          (((pTVar1->field0_0x0).DebugPtr)->AuthorityGameMode).field0_0x0.DebugPtr ==
          (AGameModeBase *)0x0)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3536338310450380732>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PreviewScene.cpp"
                             ,0x44,"Mode"), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar15 = (FPreviewScene *)(*pcVar7)();
        return pFVar15;
      }
    }
  }
  UWorld::InitializeActorsForPlay
            ((pTVar1->field0_0x0).DebugPtr,(FURL *)(local_348 + 0x10),true,
             (FRegisterComponentContext *)0x0);
  if (param_1->bDefaultLighting != 0) {
    pUVar9 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar9,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_228,pUVar10);
    local_228._48_8_ = (FObjectInstancingGraph *)0x0;
    local_228._56_8_ = (UPackage *)0x0;
    local_228._16_4_ = 0;
    local_228._20_4_ = 0;
    local_228._24_4_ = RF_Transient;
    local_228._40_8_ = (UObject *)0x0;
    local_228[0x20] = false;
    local_228._8_8_ = pUVar9;
    pUVar16 = (UDirectionalLightComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_228);
    if (local_228._64_8_ != 0) {
      plVar20 = (longlong *)(local_228 + 0x50);
      if ((longlong *)local_228._104_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_228._104_8_;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    this->DirectionalLight = pUVar16;
    *(float *)((longlong)&pUVar16->_padding_ + 4) = param_1->LightBrightness;
    *(FColor_u_0 *)&this->DirectionalLight->_padding_ = (FColor_u_0_s_0)FColor::White.field0_0x0;
    puVar2 = (uint *)((longlong)&this->DirectionalLight->_padding_ + 4);
    *puVar2 = *puVar2 | 0x20;
    pTVar17 = UE::Math::TRotator<double>::Quaternion(&param_1->LightRotation,&local_2c8);
    local_a8.Rotation.ZW.m128d_f64[0] = pTVar17->Z;
    local_a8.Rotation.ZW.m128d_f64[1] = pTVar17->W;
    local_a8.Rotation.XY.m128d_f64[0] = pTVar17->X;
    local_a8.Rotation.XY.m128d_f64[1] = pTVar17->Y;
    local_a8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_a8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    AddComponent(this,(UActorComponent *)this->DirectionalLight,&local_a8,false);
    pUVar9 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar9,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_USkyLightComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1a8,pUVar10);
    local_1a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_1a8._56_8_ = (UPackage *)0x0;
    local_1a8._16_4_ = 0;
    local_1a8._20_4_ = 0;
    local_1a8._24_4_ = RF_Transient;
    local_1a8._40_8_ = (UObject *)0x0;
    local_1a8[0x20] = false;
    local_1a8._8_8_ = pUVar9;
    pUVar18 = (USkyLightComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
    if (local_1a8._64_8_ != 0) {
      plVar20 = (longlong *)(local_1a8 + 0x50);
      if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_1a8._104_8_;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    this->SkyLight = pUVar18;
    pUVar18->bLowerHemisphereIsBlack = false;
    (this->SkyLight->SourceType).Value = '\x01';
    *(float *)((longlong)&this->SkyLight->_padding_ + 4) = param_1->SkyBrightness;
    *(undefined1 *)((longlong)&this->SkyLight->_padding_ + 3) = 2;
    AddComponent(this,(UActorComponent *)this->SkyLight,&UE::Math::TTransform<double>::Identity,
                 false);
    pUVar9 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar9,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_ULineBatchComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_128,pUVar10);
    local_128._8_8_ = pUVar9;
    pUVar19 = (ULineBatchComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
    if (local_128._64_8_ != 0) {
      plVar20 = (longlong *)(local_128 + 0x50);
      if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_128._104_8_;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    this->LineBatcher = pUVar19;
    pUVar19->bCalculateAccurateBounds = 0;
    AddComponent(this,(UActorComponent *)this->LineBatcher,&UE::Math::TTransform<double>::Identity,
                 false);
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FPreviewScene>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEnginePreExit,(FPreviewScene *)local_348,(pmf_7a525fdc)this);
  if (local_2e0 != (void *)0x0) {
    FMemory::Free(local_2e0);
  }
  DestructItems<FString,int>(local_2f0,local_2e8);
  if (local_2f0 != (FString *)0x0) {
    FMemory::Free(local_2f0);
  }
  if (local_300 != (void *)0x0) {
    FMemory::Free(local_300);
  }
  if (local_310 != (ULineBatchComponent *)0x0) {
    FMemory::Free(local_310);
  }
  if (local_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data);
  }
  if ((UDirectionalLightComponent *)local_348._16_8_ != (UDirectionalLightComponent *)0x0) {
    FMemory::Free((void *)local_348._16_8_);
  }
  return this;
}

// ~FPreviewScene @ 14834da10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPreviewScene::~FPreviewScene(FPreviewScene *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPreviewScene__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEnginePreExit,
             this);
  Uninitialize(this);
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// AddComponent @ 1483531c0

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
FPreviewScene::AddComponent
          (FPreviewScene *this,UActorComponent *param_1,TTransform<double> *param_2,bool param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  FSceneInterface *pFVar4;
  UClass *pUVar5;
  TObjectPtr<UActorComponent>_u_0 local_res8;
  
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    TArray<TObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UActorComponent>_>
              (&this->Components,(TObjectPtr<UActorComponent> *)&local_res8.ObjectPtr);
  }
  else {
    TArray<TObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UActorComponent>_>
              (&this->Components,(TObjectPtr<UActorComponent> *)&local_res8.ObjectPtr);
    if (param_1 == (UActorComponent *)0x0) goto LAB_148353268;
  }
  pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
  iVar2 = (int)pUVar5->_padding_;
  if (((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
       == &pUVar5->_padding_)) && (param_1[1]._padding_ == 0)) {
    USceneComponent::SetRelativeTransform
              ((USceneComponent *)param_1,param_2,false,(FHitResult *)0x0,None);
  }
LAB_148353268:
  UActorComponent::RegisterComponentWithWorld
            (param_1,(this->PreviewWorld).field0_0x0.DebugPtr,(FRegisterComponentContext *)0x0);
  if (param_1 != (UActorComponent *)0x0) {
    if (this->bForceAllUsedMipsResident != false) {
      pUVar5 = Z_Construct_UClass_UMeshComponent_NoRegister();
      lVar3 = param_1->_padding_;
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(lVar3 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        (**(code **)(param_1->_padding_ + 0xab8))(param_1,CONCAT71((int7)((ulonglong)lVar3 >> 8),1))
        ;
      }
    }
    pUVar5 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      pbVar1 = (byte *)((longlong)&param_1[7].ComponentTags.AllocatorInstance.Data + 4);
      *pbVar1 = *pbVar1 | 0x28;
    }
  }
  pFVar4 = ((this->PreviewWorld).field0_0x0.DebugPtr)->Scene;
                    /* WARNING: Could not recover jumptable at 0x000148353301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar4->_padding_ + 0x3c0))(pFVar4,0);
  return;
}

// AddReferencedObjects @ 1483555b0

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
FPreviewScene::AddReferencedObjects(FPreviewScene *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->Components).AllocatorInstance.Data,(this->Components).ArrayNum,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001483555fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->PreviewWorld,0,0);
  return;
}

// ClearLineBatcher @ 148363840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPreviewScene::ClearLineBatcher(FPreviewScene *this)

{
  int *piVar1;
  ULineBatchComponent *this_00;
  
  this_00 = this->LineBatcher;
  if (this_00 == (ULineBatchComponent *)0x0) {
    return;
  }
  if (((0 < (this_00->BatchedLines).ArrayNum) || (0 < (this_00->BatchedPoints).ArrayNum)) ||
     (0 < (this_00->BatchedMeshes).ArrayNum)) {
    piVar1 = &(this_00->BatchedLines).ArrayMax;
    (this_00->BatchedLines).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&(this_00->BatchedLines).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this_00->BatchedPoints).ArrayMax;
    (this_00->BatchedPoints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this_00->BatchedPoints).AllocatorInstance,0,piVar1);
    }
    DestructItems<FBatchedMesh,int>
              ((FBatchedMesh *)(this_00->BatchedMeshes).AllocatorInstance.Data,
               (this_00->BatchedMeshes).ArrayNum);
    piVar1 = &(this_00->BatchedMeshes).ArrayMax;
    (this_00->BatchedMeshes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this_00->BatchedMeshes).AllocatorInstance,0,piVar1);
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this_00);
  }
  return;
}

// GetBackgroundColor @ 14837eb90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLinearColor * __thiscall
FPreviewScene::GetBackgroundColor(FPreviewScene *this,FLinearColor *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.R = 0.05;
  (__return_storage_ptr__->field0_0x0)._s_0.G = 0.05;
  (__return_storage_ptr__->field0_0x0)._s_0.B = 0.05;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  return __return_storage_ptr__;
}

// GetLightDirection @ 148383b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TRotator<double> * __thiscall
FPreviewScene::GetLightDirection(FPreviewScene *this,TRotator<double> *__return_storage_ptr__)

{
  UDirectionalLightComponent *pUVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  TVector<double>_u_0 local_68 [4];
  
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  pUVar1 = this->DirectionalLight;
  if (pUVar1 != (UDirectionalLightComponent *)0x0) {
    auVar13._0_8_ = pUVar1->_padding_;
    auVar13._8_8_ = pUVar1->_padding_;
    auVar5._0_8_ = pUVar1->_padding_;
    auVar5._8_8_ = pUVar1->_padding_;
    dVar4 = (double)pUVar1->_padding_;
    dVar17 = __xmm_00000000000000003ff0000000000000._8_8_;
    auVar7 = blendpd(auVar5,auVar13,2);
    auVar15._0_8_ =
         dVar17 * (double)auVar5._0_8_ -
         (double)auVar5._8_8_ * (double)__xmm_00000000000000003ff0000000000000;
    auVar15._8_8_ = (double)auVar5._8_8_ * 0.0 - (double)auVar13._0_8_ * dVar17;
    auVar5 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
    auVar9._0_8_ = auVar5._0_8_ * (double)auVar13._0_8_ - auVar7._0_8_ * 0.0;
    auVar9._8_8_ = auVar5._8_8_ * (double)auVar13._8_8_ - auVar7._8_8_ * 0.0;
    auVar7._0_8_ = pUVar1->_padding_;
    auVar7._8_8_ = pUVar1->_padding_;
    auVar5 = blendpd(auVar15,auVar9,2);
    dVar2 = auVar15._8_8_ + auVar15._8_8_;
    dVar3 = auVar9._0_8_ + auVar9._0_8_;
    uVar14 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar16._0_8_ = auVar5._0_8_ + auVar5._0_8_;
    auVar16._8_8_ = auVar5._8_8_ + auVar5._8_8_;
    auVar11._8_4_ = SUB84(dVar3,0);
    auVar11._0_8_ = dVar2;
    auVar11._12_4_ = uVar14;
    auVar8._8_4_ = SUB84(dVar3,0);
    auVar8._0_8_ = dVar2;
    auVar8._12_4_ = uVar14;
    auVar9 = blendpd(auVar8,auVar16,2);
    auVar12._0_8_ = auVar11._8_8_ * (double)auVar7._0_8_ - (double)auVar7._8_8_ * dVar2;
    auVar12._8_8_ = auVar16._0_8_ * (double)auVar7._8_8_ - (double)auVar13._0_8_ * dVar3;
    auVar5 = blendpd(auVar7,auVar13,2);
    auVar6._8_4_ = SUB84(auVar12._8_8_,0);
    auVar6._0_8_ = auVar12._0_8_;
    auVar6._12_4_ = (int)((ulonglong)auVar12._8_8_ >> 0x20);
    auVar10._0_8_ = auVar9._0_8_ * (double)auVar13._0_8_ - auVar5._0_8_ * auVar16._0_8_;
    auVar10._8_8_ = auVar9._8_8_ * (double)auVar13._8_8_ - auVar5._8_8_ * auVar16._8_8_;
    auVar13 = blendpd(auVar12,auVar10,2);
    dVar3 = dVar3 * dVar4 + dVar17 + auVar10._0_8_;
    local_68[0]._16_8_ = auVar16._0_8_ * dVar4 + auVar13._0_8_;
    local_68[0]._8_4_ = SUB84(dVar3,0);
    local_68[0]._0_8_ =
         dVar2 * dVar4 + (double)__xmm_00000000000000003ff0000000000000 + auVar6._8_8_;
    local_68[0]._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    UE::Math::TVector<double>::ToOrientationRotator
              ((TVector<double> *)&local_68[0]._s_0,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return __return_storage_ptr__;
}

// GetReferencerName @ 1483876a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FPreviewScene::GetReferencerName(FPreviewScene *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FPreviewScene");
  return __return_storage_ptr__;
}

// LoadSettings @ 148394790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPreviewScene::LoadSettings(FPreviewScene *this,wchar_t *param_1)

{
  bool bVar1;
  TRotator<double> local_48;
  TRotator<double> local_28;
  
  bVar1 = FConfigCacheIni::GetRotator(GConfig,param_1,L"LightDir",&local_48,&GEditorPerProjectIni);
  if ((bVar1) && (this->DirectionalLight != (UDirectionalLightComponent *)0x0)) {
    USceneComponent::SetAbsolute((USceneComponent *)this->DirectionalLight,true,true,true);
    local_28.Pitch = local_48.Pitch;
    local_28.Yaw = local_48.Yaw;
    local_28.Roll = local_48.Roll;
    USceneComponent::SetRelativeRotation
              ((USceneComponent *)this->DirectionalLight,&local_28,false,(FHitResult *)0x0,None);
  }
  return;
}

// RemoveComponent @ 14839fae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPreviewScene::RemoveComponent(FPreviewScene *this,UActorComponent *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UActorComponent *pUVar5;
  UClass *pUVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UActorComponent *local_38 [2];
  
  UActorComponent::UnregisterComponent(param_1);
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Components).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Components).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->Components).ArrayNum;
  if (iVar1 != 0) {
    iVar10 = 0;
    pFVar2 = (this->Components).AllocatorInstance.Data;
    bVar4 = *(UActorComponent **)pFVar2 != local_38[0];
    lVar7 = 0;
    pUVar5 = local_38[0];
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar4 == (*(UActorComponent **)(pFVar2 + lVar7 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar10 != iVar8) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                  (longlong)(iVar9 - iVar8) << 3);
          pUVar5 = local_38[0];
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < iVar1);
    (this->Components).ArrayNum = iVar10;
  }
  if ((this->bForceAllUsedMipsResident != false) && (param_1 != (UActorComponent *)0x0)) {
    pUVar6 = Z_Construct_UClass_UMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      (**(code **)(param_1->_padding_ + 0xab8))(param_1,0);
    }
  }
  return;
}

// SaveSettings @ 1483a2950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPreviewScene::SaveSettings(FPreviewScene *this,wchar_t *param_1)

{
  TRotator<double> *pTVar1;
  TRotator<double> local_48;
  TRotator<double> local_28;
  
  pTVar1 = GetLightDirection(this,&local_28);
  local_48.Pitch = pTVar1->Pitch;
  local_48.Yaw = pTVar1->Yaw;
  local_48.Roll = pTVar1->Roll;
  FConfigCacheIni::SetRotator(GConfig,param_1,L"LightDir",&local_48,&GEditorPerProjectIni);
  return;
}

// SetLightBrightness @ 1483a9260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPreviewScene::SetLightBrightness(FPreviewScene *this,float param_1)

{
  if (this->DirectionalLight != (UDirectionalLightComponent *)0x0) {
    *(float *)((longlong)&this->DirectionalLight->_padding_ + 4) = param_1;
  }
  return;
}

// SetLightColor @ 1483a9280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPreviewScene::SetLightColor(FPreviewScene *this,FColor *param_1)

{
  if (this->DirectionalLight != (UDirectionalLightComponent *)0x0) {
    *(FColor_u_0 *)&this->DirectionalLight->_padding_ = (FColor_u_0_s_0)param_1->field0_0x0;
  }
  return;
}

// SetLightDirection @ 1483a92a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPreviewScene::SetLightDirection(FPreviewScene *this,TRotator<double> *param_1)

{
  TRotator<double> local_28;
  
  if (this->DirectionalLight != (UDirectionalLightComponent *)0x0) {
    USceneComponent::SetAbsolute((USceneComponent *)this->DirectionalLight,true,true,true);
    local_28.Pitch = param_1->Pitch;
    local_28.Yaw = param_1->Yaw;
    local_28.Roll = param_1->Roll;
    USceneComponent::SetRelativeRotation
              ((USceneComponent *)this->DirectionalLight,&local_28,false,(FHitResult *)0x0,None);
  }
  return;
}

// SetSkyBrightness @ 1483ab3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPreviewScene::SetSkyBrightness(FPreviewScene *this,float param_1)

{
  USkyLightComponent *this_00;
  bool bVar1;
  
  this_00 = this->SkyLight;
  if (this_00 == (USkyLightComponent *)0x0) {
    return;
  }
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this_00);
  if ((((bVar1) || ((this_00->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this_00->_padding_ + 3) != '\0')) &&
     (param_1 != *(float *)((longlong)&this_00->_padding_ + 4))) {
    *(float *)((longlong)&this_00->_padding_ + 4) = param_1;
    USkyLightComponent::UpdateLimitedRenderingStateFast(this_00);
  }
  return;
}

// SetSkyCubemap @ 1483ab3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPreviewScene::SetSkyCubemap(FPreviewScene *this,UTextureCube *param_1)

{
  UTextureCube *pUVar1;
  USkyLightComponent *this_00;
  bool bVar2;
  
  this_00 = this->SkyLight;
  if (this_00 == (USkyLightComponent *)0x0) {
    return;
  }
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this_00);
  if (((bVar2) || ((this_00->_padding_ & 1) == 0)) ||
     (*(char *)((longlong)&this_00->_padding_ + 3) != '\0')) {
    pUVar1 = (this_00->Cubemap).field0_0x0.DebugPtr;
    if (pUVar1 == (UTextureCube *)0x0) {
      bVar2 = param_1 == (UTextureCube *)0x0;
    }
    else {
      bVar2 = pUVar1 == param_1;
    }
    if (!bVar2) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTextureCube *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this_00->Cubemap).field0_0x0.DebugPtr = param_1;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this_00);
      USkyLightComponent::SetCaptureIsDirty(this_00);
    }
  }
  return;
}

// Uninitialize @ 1483b2950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPreviewScene::Uninitialize(FPreviewScene *this)

{
  int iVar1;
  UWorld *pUVar2;
  UActorComponent *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  uint uVar7;
  longlong lVar8;
  FAudioDeviceHandle local_28;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pUVar2 = (this->PreviewWorld).field0_0x0.DebugPtr, pUVar2 != (UWorld *)0x0)) {
    UWorld::GetAudioDevice(pUVar2,&local_28);
    bVar4 = FAudioDeviceHandle::IsValid(&local_28);
    if (bVar4) {
      bVar4 = FAudioDeviceHandle::IsValid(&local_28);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                             ,0x60,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FAudioDevice::Flush(local_28.Device,(this->PreviewWorld).field0_0x0.DebugPtr,false);
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  }
  uVar7 = 0;
  if (0 < (this->Components).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Components).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(UActorComponent **)((this->Components).AllocatorInstance.Data + lVar8);
      if ((this->bForceAllUsedMipsResident != false) && (this_00 != (UActorComponent *)0x0)) {
        pUVar6 = Z_Construct_UClass_UMeshComponent_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar6->_padding_)) {
          (**(code **)(this_00->_padding_ + 0xab8))(this_00,0);
        }
      }
      UActorComponent::UnregisterComponent(this_00);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->Components).ArrayNum);
  }
  (this->Components).ArrayNum = 0;
  if ((this->Components).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Components).AllocatorInstance,0,&(this->Components).ArrayMax);
  }
  pUVar2 = (this->PreviewWorld).field0_0x0.DebugPtr;
  (this->PreviewWorld).field0_0x0.DebugPtr = (UWorld *)0x0;
  if ((pUVar2 != (UWorld *)0x0) && (GEngine != (UEngine *)0x0)) {
    UWorld::CleanupWorld(pUVar2,true,true,(UWorld *)0x0);
    (**(code **)(GEngine->_padding_ + 0x530))(GEngine,pUVar2);
    UWorld::ReleasePhysicsScene(pUVar2);
    UEngine::ForceGarbageCollection(GEngine,true);
    return;
  }
  return;
}

// UpdateCaptureContents @ 1483b4db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPreviewScene::UpdateCaptureContents(FPreviewScene *this)

{
  USkyLightComponent::UpdateSkyCaptureContents((this->PreviewWorld).field0_0x0.DebugPtr);
  UReflectionCaptureComponent::UpdateReflectionCaptureContents
            ((this->PreviewWorld).field0_0x0.DebugPtr,(wchar_t *)0x0,false,false,true);
  return;
}

