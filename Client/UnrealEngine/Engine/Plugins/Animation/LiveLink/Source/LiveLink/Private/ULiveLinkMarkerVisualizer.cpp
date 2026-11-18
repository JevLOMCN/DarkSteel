// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 11

// StaticClass @ 14cff2aa0

UClass * __cdecl ULiveLinkMarkerVisualizer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkMarkerVisualizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkMarkerVisualizer",
               &Z_Registration_Info_UClass_ULiveLinkMarkerVisualizer.InnerSingleton,
               StaticRegisterNativesULiveLinkMarkerVisualizer,0xa40,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkMarkerVisualizer>,
               InternalVTableHelperCtorCaller<ULiveLinkMarkerVisualizer>,local_res8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkMarkerVisualizer.InnerSingleton;
}

// ULiveLinkMarkerVisualizer @ 14d013db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ULiveLinkMarkerVisualizer * __thiscall
ULiveLinkMarkerVisualizer::ULiveLinkMarkerVisualizer
          (ULiveLinkMarkerVisualizer *this,FVTableHelper *param_1)

{
  UInstancedStaticMeshComponent::UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7ULiveLinkMarkerVisualizer__6B_;
  (this->DynamicMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->LiveLinkSubject).Name = (FName)0x0;
  (this->MarkerLocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerLocations).ArrayNum = 0;
  (this->MarkerLocations).ArrayMax = 0;
  (this->MarkerLabels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerLabels).ArrayNum = 0;
  (this->MarkerLabels).ArrayMax = 0;
  return this;
}

// ULiveLinkMarkerVisualizer @ 14d013e60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ULiveLinkMarkerVisualizer * __thiscall
ULiveLinkMarkerVisualizer::ULiveLinkMarkerVisualizer
          (ULiveLinkMarkerVisualizer *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UInstancedStaticMeshComponent::UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this,pFVar1);
  this->field_0x42 = this->field_0x42 | 2;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7ULiveLinkMarkerVisualizer__6B_;
  this->field_0x99 = this->field_0x99 | 0x80;
  (this->DynamicMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->LiveLinkSubject).Name = (FName)0x0;
  (this->MarkerLocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerLocations).ArrayNum = 0;
  (this->MarkerLocations).ArrayMax = 0;
  (this->MarkerLabels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerLabels).ArrayNum = 0;
  (this->MarkerLabels).ArrayMax = 0;
  this->bDrawLabels = false;
  this->XAxisSign = Positive;
  this->YAxisSign = Positive;
  this->field_0x40 = 5;
  this->bEvaluateLiveLink = true;
  return this;
}

// ~ULiveLinkMarkerVisualizer @ 14d017220

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ULiveLinkMarkerVisualizer::~ULiveLinkMarkerVisualizer(ULiveLinkMarkerVisualizer *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7ULiveLinkMarkerVisualizer__6B_;
  pFVar1 = (this->MarkerLabels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarkerLocations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInstancedStaticMeshComponent::~UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this);
  return;
}

// DrawLabels @ 14d03aa50

void __cdecl
ULiveLinkMarkerVisualizer::DrawLabels(TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// GetMarkerTransforms @ 14d04f140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
ULiveLinkMarkerVisualizer::GetMarkerTransforms
          (ULiveLinkMarkerVisualizer *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  float fVar2;
  AActor *this_00;
  code *pcVar3;
  USceneComponent *pUVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  IModularFeatures *pIVar11;
  longlong lVar12;
  longlong lVar13;
  AActor *pAVar14;
  UClass *pUVar15;
  longlong *plVar16;
  UClass *pUVar17;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar18;
  TQuat<double> *pTVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  TTransform<double> *pTVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStackY_718 [32];
  FStructOnScope local_6a8;
  FStructOnScope local_680;
  undefined1 local_658 [8];
  undefined1 local_650 [8];
  TRotator<double> local_648;
  TRotator<double> local_630;
  TRotator<double> local_618;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  TQuat<double> local_598;
  TQuat<double> local_578;
  TQuat<double> local_558;
  TTransform<double> local_538;
  TTransform<double> local_4d8;
  TTransform<double> local_478;
  TTransform<double> local_418;
  TTransform<double> local_3b8;
  TTransform<double> local_358;
  TTransform<double> local_2f8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_718;
  FStructOnScope::FStructOnScope(&local_6a8);
  FStructOnScope::FStructOnScope(&local_680);
  pIVar11 = IModularFeatures::Get();
  lVar12 = (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,ILiveLinkClient::ModularFeatureName,0);
  plVar16 = (longlong *)(lVar12 + -8);
  if (lVar12 == 0) {
    plVar16 = (longlong *)0x0;
  }
  lVar12 = *plVar16;
  (**(code **)(lVar12 + 0xd0))(plVar16,local_658,(this->LiveLinkSubject).Name);
  (**(code **)(lVar12 + 0x198))(plVar16,(this->LiveLinkSubject).Name);
  lVar12 = (**(code **)(local_680._padding_ + 0x18))(&local_680);
  lVar13 = (**(code **)(local_6a8._padding_ + 0x18))(&local_6a8);
  if (lVar12 == 0) {
LAB_14d050021:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar9 = (this->MarkerLocations).ArrayNum;
    pFVar23 = (this->MarkerLocations).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar9;
    if (iVar9 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
      goto LAB_14d05007d;
    }
  }
  else {
    if (*(int *)(lVar13 + 8) == *(int *)(lVar12 + 0x78)) {
      pTVar18 = &this->MarkerLocations;
      (this->MarkerLocations).ArrayNum = 0;
      piVar1 = &(this->MarkerLocations).ArrayMax;
      if ((this->MarkerLocations).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,&pTVar18->AllocatorInstance,0,piVar1);
      }
      uVar26 = (undefined4)__real_3ff0000000000000;
      uVar27 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      uVar25 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
      uVar28 = uVar26;
      uVar29 = uVar27;
      if ((this->XAxisSign != Positive) && (this->XAxisSign == Negative)) {
        uVar28 = (int)__real_bff0000000000000;
        uVar29 = uVar25;
      }
      if ((this->YAxisSign != Positive) && (this->YAxisSign == Negative)) {
        uVar26 = (int)__real_bff0000000000000;
        uVar27 = uVar25;
      }
      this_00 = *(AActor **)&this->field_0xa8;
      local_538.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_538.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_538.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_538.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_538.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_538.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_538.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_538.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_538.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_538.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_538.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_538.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_538.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_538.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_538.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_538.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_538.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_538.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      pAVar14 = AActor::GetAttachParentActor(this_00);
      pcVar3 = *(code **)(*plVar16 + 0xd0);
      pUVar15 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
      plVar16 = (longlong *)(*pcVar3)(plVar16,local_650,(this->LiveLinkSubject).Name);
      lVar13 = *plVar16;
      if ((lVar13 == 0) ||
         (pUVar17 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar17 == (UClass *)0x0)) {
LAB_14d04f3c4:
        pUVar17 = (UClass *)0x0;
      }
      else {
        iVar9 = (int)pUVar17->_padding_;
        if ((*(int *)(lVar13 + 0x38) < iVar9) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar17->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (!bVar8) goto LAB_14d04f3c4;
        pUVar17 = (UClass *)*plVar16;
      }
      dVar7 = _UNK_150689518;
      dVar6 = ___xmm_00000000000000003ff0000000000000;
      if (pUVar17 == pUVar15) {
        if (0 < *(int *)(lVar12 + 0x78)) {
          lVar13 = 4;
          uVar22 = 1;
          do {
            uVar21 = 0;
            if ((int)(uVar22 + 1) < *(int *)(lVar12 + 0x78)) {
              uVar21 = ~(uVar22 + 1) >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              pTVar18 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar18;
            }
            fVar2 = *(float *)(lVar13 + 4 + *(longlong *)(lVar12 + 0x70));
            uVar21 = 0;
            if ((int)uVar22 < *(int *)(lVar12 + 0x78)) {
              uVar21 = ~uVar22 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              pTVar18 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar18;
            }
            dVar5 = (double)*(float *)(lVar13 + *(longlong *)(lVar12 + 0x70));
            uVar21 = 0;
            if ((int)(uVar22 - 1) < *(int *)(lVar12 + 0x78)) {
              uVar21 = ~(uVar22 - 1) >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              pTVar18 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar18;
            }
            local_298.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_298.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_298.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_298.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_298.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_298.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_648.Roll = 0.0;
            local_298.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
            local_298.Translation.XY.m128d_f64[0] =
                 (double)*(float *)(lVar13 + -4 + *(longlong *)(lVar12 + 0x70));
            local_298.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
            local_298.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_298.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_298.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_298.Translation.ZW.m128d_f64[1] = 0.0;
            local_298.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_298.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_298.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            local_648.Pitch = 0.0;
            local_648.Yaw = 0.0;
            local_298.Translation.ZW.m128d_f64[0] = (double)fVar2;
            pTVar19 = UE::Math::TRotator<double>::Quaternion(&local_648,&local_598);
            local_5f8 = pTVar19->X;
            dStack_5f0 = pTVar19->Y;
            local_5e8 = pTVar19->Z;
            dStack_5e0 = pTVar19->W;
            local_4d8.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_4d8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_4d8.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_4d8.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_4d8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_4d8.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_4d8.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_4d8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_4d8.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_4d8.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_4d8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_4d8.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_2f8.Translation.XY.m128d_f64[0] = 0.0;
            local_2f8.Translation.XY.m128d_f64[1] = 0.0;
            local_4d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_4d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_4d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            local_2f8.Translation.ZW.m128d_f64[0] = 0.0;
            local_2f8.Translation.ZW.m128d_f64[1] = 0.0;
            local_2f8.Scale3D.ZW.m128d_f64[0] = dVar6;
            local_2f8.Scale3D.ZW.m128d_f64[1] = dVar7;
            local_4d8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_4d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_4d8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_2f8.Rotation.XY.m128d_f64[0] = local_5f8;
            local_2f8.Rotation.XY.m128d_f64[1] = dStack_5f0;
            local_2f8.Rotation.ZW.m128d_f64[0] = local_5e8;
            local_2f8.Rotation.ZW.m128d_f64[1] = dStack_5e0;
            local_2f8.Scale3D.XY.m128d_f64[0]._0_4_ = uVar28;
            local_2f8.Scale3D.XY.m128d_f64[0]._4_4_ = uVar29;
            local_2f8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar26;
            local_2f8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar27;
            UE::Math::TTransform<double>::Multiply(&local_4d8,&local_298,&local_2f8);
            local_538.Rotation.XY.m128d_f64[0] = local_4d8.Rotation.XY.m128d_f64[0];
            local_538.Rotation.XY.m128d_f64[1] = local_4d8.Rotation.XY.m128d_f64[1];
            local_538.Rotation.ZW.m128d_f64[0] = local_4d8.Rotation.ZW.m128d_f64[0];
            local_538.Rotation.ZW.m128d_f64[1] = local_4d8.Rotation.ZW.m128d_f64[1];
            local_538.Translation.XY.m128d_f64[0] = local_4d8.Translation.XY.m128d_f64[0];
            local_538.Translation.XY.m128d_f64[1] = local_4d8.Translation.XY.m128d_f64[1];
            local_538.Translation.ZW.m128d_f64[0] = local_4d8.Translation.ZW.m128d_f64[0];
            local_538.Translation.ZW.m128d_f64[1] = local_4d8.Translation.ZW.m128d_f64[1];
            local_538.Scale3D.XY.m128d_f64[0] = local_4d8.Scale3D.XY.m128d_f64[0];
            local_538.Scale3D.XY.m128d_f64[1] = local_4d8.Scale3D.XY.m128d_f64[1];
            local_538.Scale3D.ZW.m128d_f64[0] = local_4d8.Scale3D.ZW.m128d_f64[0];
            local_538.Scale3D.ZW.m128d_f64[1] = local_4d8.Scale3D.ZW.m128d_f64[1];
            pUVar4 = (this_00->RootComponent).field0_0x0.DebugPtr;
            if (pUVar4 == (USceneComponent *)0x0) {
              pTVar24 = &UE::Math::TTransform<double>::Identity;
            }
            else {
              pTVar24 = &pUVar4->ComponentToWorld;
            }
            local_478.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_478.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_478.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_478.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_478.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_478.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_478.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_478.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_478.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_478.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_478.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_478.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_478.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_478.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_478.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_478.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_478.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_478.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_478,&local_538,pTVar24);
            pTVar24 = (TTransform<double> *)(pTVar18->AllocatorInstance).Data;
            local_538.Rotation.XY.m128d_f64[0] = local_478.Rotation.XY.m128d_f64[0];
            local_538.Rotation.XY.m128d_f64[1] = local_478.Rotation.XY.m128d_f64[1];
            local_538.Rotation.ZW.m128d_f64[0] = local_478.Rotation.ZW.m128d_f64[0];
            local_538.Rotation.ZW.m128d_f64[1] = local_478.Rotation.ZW.m128d_f64[1];
            local_538.Translation.XY.m128d_f64[0] = local_478.Translation.XY.m128d_f64[0];
            local_538.Translation.XY.m128d_f64[1] = local_478.Translation.XY.m128d_f64[1];
            local_538.Translation.ZW.m128d_f64[0] = local_478.Translation.ZW.m128d_f64[0];
            local_538.Translation.ZW.m128d_f64[1] = local_478.Translation.ZW.m128d_f64[1];
            local_538.Scale3D.XY.m128d_f64[0] = local_478.Scale3D.XY.m128d_f64[0];
            local_538.Scale3D.XY.m128d_f64[1] = local_478.Scale3D.XY.m128d_f64[1];
            local_538.Scale3D.ZW.m128d_f64[0] = local_478.Scale3D.ZW.m128d_f64[0];
            local_538.Scale3D.ZW.m128d_f64[1] = local_478.Scale3D.ZW.m128d_f64[1];
            if (((pTVar24 <= &local_538) && (&local_538 < pTVar24 + *piVar1)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar3 = (code *)swi(3);
              pTVar18 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar18;
            }
            iVar9 = (this->MarkerLocations).ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1060,&pTVar18->AllocatorInstance,piVar1);
            }
            (this->MarkerLocations).ArrayNum = iVar9 + 1;
            lVar13 = lVar13 + 0xc;
            pFVar23 = (pTVar18->AllocatorInstance).Data;
            lVar20 = (longlong)iVar9 * 0x60;
            *(double *)(pFVar23 + lVar20) = local_538.Rotation.XY.m128d_f64[0];
            *(double *)(pFVar23 + lVar20 + 8) = local_538.Rotation.XY.m128d_f64[1];
            *(double *)(pFVar23 + lVar20 + 0x10) = local_538.Rotation.ZW.m128d_f64[0];
            *(double *)(pFVar23 + lVar20 + 0x10 + 8) = local_538.Rotation.ZW.m128d_f64[1];
            *(double *)(pFVar23 + lVar20 + 0x20) = local_538.Translation.XY.m128d_f64[0];
            *(double *)(pFVar23 + lVar20 + 0x20 + 8) = local_538.Translation.XY.m128d_f64[1];
            *(double *)(pFVar23 + lVar20 + 0x30) = local_538.Translation.ZW.m128d_f64[0];
            *(double *)(pFVar23 + lVar20 + 0x30 + 8) = local_538.Translation.ZW.m128d_f64[1];
            *(double *)(pFVar23 + lVar20 + 0x40) = local_538.Scale3D.XY.m128d_f64[0];
            *(double *)(pFVar23 + lVar20 + 0x40 + 8) = local_538.Scale3D.XY.m128d_f64[1];
            *(double *)(pFVar23 + lVar20 + 0x50) = local_538.Scale3D.ZW.m128d_f64[0];
            *(double *)(pFVar23 + lVar20 + 0x50 + 8) = local_538.Scale3D.ZW.m128d_f64[1];
            iVar9 = uVar22 + 2;
            uVar22 = uVar22 + 3;
          } while (iVar9 < *(int *)(lVar12 + 0x78));
        }
      }
      else if (0 < *(int *)(lVar12 + 0x78)) {
        lVar13 = 4;
        uVar22 = 1;
        do {
          uVar21 = uVar22 + 1;
          if (pAVar14 == (AActor *)0x0) {
            uVar10 = 0;
            if ((int)uVar21 < *(int *)(lVar12 + 0x78)) {
              uVar10 = ~uVar21 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              pTVar18 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar18;
            }
            fVar2 = *(float *)(*(longlong *)(lVar12 + 0x70) + 4 + lVar13);
            uVar21 = 0;
            if ((int)uVar22 < *(int *)(lVar12 + 0x78)) {
              uVar21 = ~uVar22 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              pTVar18 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar18;
            }
            dVar5 = (double)*(float *)(*(longlong *)(lVar12 + 0x70) + lVar13);
            uVar21 = 0;
            if ((int)(uVar22 - 1) < *(int *)(lVar12 + 0x78)) {
              uVar21 = ~(uVar22 - 1) >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              pTVar18 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar18;
            }
            local_118.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_118.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_118.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_118.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_618.Roll = 0.0;
            local_118.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
            local_118.Translation.XY.m128d_f64[0] =
                 (double)*(float *)(*(longlong *)(lVar12 + 0x70) + -4 + lVar13);
            local_118.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
            local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_118.Translation.ZW.m128d_f64[1] = 0.0;
            local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            local_618.Pitch = 0.0;
            local_618.Yaw = 0.0;
            local_118.Translation.ZW.m128d_f64[0] = (double)fVar2;
            pTVar19 = UE::Math::TRotator<double>::Quaternion(&local_618,&local_558);
            local_5b8 = pTVar19->X;
            dStack_5b0 = pTVar19->Y;
            local_5a8 = pTVar19->Z;
            dStack_5a0 = pTVar19->W;
            local_358.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_358.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_358.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_358.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_358.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_358.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_358.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_358.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_358.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_358.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_358.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_358.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_178.Translation.XY.m128d_f64[0] = 0.0;
            local_178.Translation.XY.m128d_f64[1] = 0.0;
            local_358.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_358.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_358.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            local_178.Translation.ZW.m128d_f64[0] = 0.0;
            local_178.Translation.ZW.m128d_f64[1] = 0.0;
            local_178.Scale3D.ZW.m128d_f64[0] = dVar6;
            local_178.Scale3D.ZW.m128d_f64[1] = dVar7;
            local_358.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_358.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_358.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_178.Rotation.XY.m128d_f64[0] = local_5b8;
            local_178.Rotation.XY.m128d_f64[1] = dStack_5b0;
            local_178.Rotation.ZW.m128d_f64[0] = local_5a8;
            local_178.Rotation.ZW.m128d_f64[1] = dStack_5a0;
            local_178.Scale3D.XY.m128d_f64[0]._0_4_ = uVar28;
            local_178.Scale3D.XY.m128d_f64[0]._4_4_ = uVar29;
            local_178.Scale3D.XY.m128d_f64[1]._0_4_ = uVar26;
            local_178.Scale3D.XY.m128d_f64[1]._4_4_ = uVar27;
            UE::Math::TTransform<double>::Multiply(&local_358,&local_118,&local_178);
            local_538.Rotation.XY.m128d_f64[0] = local_358.Rotation.XY.m128d_f64[0];
            local_538.Rotation.XY.m128d_f64[1] = local_358.Rotation.XY.m128d_f64[1];
            local_538.Rotation.ZW.m128d_f64[0] = local_358.Rotation.ZW.m128d_f64[0];
            local_538.Rotation.ZW.m128d_f64[1] = local_358.Rotation.ZW.m128d_f64[1];
            local_538.Translation.XY.m128d_f64[0] = local_358.Translation.XY.m128d_f64[0];
            local_538.Translation.XY.m128d_f64[1] = local_358.Translation.XY.m128d_f64[1];
            local_538.Translation.ZW.m128d_f64[0] = local_358.Translation.ZW.m128d_f64[0];
            local_538.Translation.ZW.m128d_f64[1] = local_358.Translation.ZW.m128d_f64[1];
            local_538.Scale3D.XY.m128d_f64[0]._0_4_ = local_358.Scale3D.XY.m128d_f64[0]._0_4_;
            local_538.Scale3D.XY.m128d_f64[0]._4_4_ = local_358.Scale3D.XY.m128d_f64[0]._4_4_;
            local_538.Scale3D.XY.m128d_f64[1]._0_4_ = local_358.Scale3D.XY.m128d_f64[1]._0_4_;
            local_538.Scale3D.XY.m128d_f64[1]._4_4_ = local_358.Scale3D.XY.m128d_f64[1]._4_4_;
            local_538.Scale3D.ZW.m128d_f64[0]._0_4_ = local_358.Scale3D.ZW.m128d_f64[0]._0_4_;
            local_538.Scale3D.ZW.m128d_f64[0]._4_4_ = local_358.Scale3D.ZW.m128d_f64[0]._4_4_;
            local_538.Scale3D.ZW.m128d_f64[1]._0_4_ = local_358.Scale3D.ZW.m128d_f64[1]._0_4_;
            local_538.Scale3D.ZW.m128d_f64[1]._4_4_ = local_358.Scale3D.ZW.m128d_f64[1]._4_4_;
          }
          else {
            uVar10 = 0;
            if ((int)uVar21 < *(int *)(lVar12 + 0x78)) {
              uVar10 = ~uVar21 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              pTVar18 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar18;
            }
            fVar2 = *(float *)(*(longlong *)(lVar12 + 0x70) + 4 + lVar13);
            uVar21 = 0;
            if ((int)uVar22 < *(int *)(lVar12 + 0x78)) {
              uVar21 = ~uVar22 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              pTVar18 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar18;
            }
            dVar5 = (double)*(float *)(*(longlong *)(lVar12 + 0x70) + lVar13);
            uVar21 = 0;
            if ((int)(uVar22 - 1) < *(int *)(lVar12 + 0x78)) {
              uVar21 = ~(uVar22 - 1) >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              pTVar18 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar18;
            }
            local_1d8.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_1d8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_1d8.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_1d8.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_1d8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_1d8.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_630.Roll = 0.0;
            local_1d8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
            local_1d8.Translation.XY.m128d_f64[0] =
                 (double)*(float *)(*(longlong *)(lVar12 + 0x70) + -4 + lVar13);
            local_1d8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
            local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_1d8.Translation.ZW.m128d_f64[1] = 0.0;
            local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            local_630.Pitch = 0.0;
            local_630.Yaw = 0.0;
            local_1d8.Translation.ZW.m128d_f64[0] = (double)fVar2;
            pTVar19 = UE::Math::TRotator<double>::Quaternion(&local_630,&local_578);
            local_5d8 = pTVar19->X;
            dStack_5d0 = pTVar19->Y;
            local_5c8 = pTVar19->Z;
            dStack_5c0 = pTVar19->W;
            local_418.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_418.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_418.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_418.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_418.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_418.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_418.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_418.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_418.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_418.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_418.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_418.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_238.Translation.XY.m128d_f64[0] = 0.0;
            local_238.Translation.XY.m128d_f64[1] = 0.0;
            local_418.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_418.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_418.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            local_238.Translation.ZW.m128d_f64[0] = 0.0;
            local_238.Translation.ZW.m128d_f64[1] = 0.0;
            local_238.Scale3D.ZW.m128d_f64[0] = dVar6;
            local_238.Scale3D.ZW.m128d_f64[1] = dVar7;
            local_418.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_418.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_418.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_238.Rotation.XY.m128d_f64[0] = local_5d8;
            local_238.Rotation.XY.m128d_f64[1] = dStack_5d0;
            local_238.Rotation.ZW.m128d_f64[0] = local_5c8;
            local_238.Rotation.ZW.m128d_f64[1] = dStack_5c0;
            local_238.Scale3D.XY.m128d_f64[0]._0_4_ = uVar28;
            local_238.Scale3D.XY.m128d_f64[0]._4_4_ = uVar29;
            local_238.Scale3D.XY.m128d_f64[1]._0_4_ = uVar26;
            local_238.Scale3D.XY.m128d_f64[1]._4_4_ = uVar27;
            UE::Math::TTransform<double>::Multiply(&local_418,&local_1d8,&local_238);
            local_538.Rotation.XY.m128d_f64[0] = local_418.Rotation.XY.m128d_f64[0];
            local_538.Rotation.XY.m128d_f64[1] = local_418.Rotation.XY.m128d_f64[1];
            local_538.Rotation.ZW.m128d_f64[0] = local_418.Rotation.ZW.m128d_f64[0];
            local_538.Rotation.ZW.m128d_f64[1] = local_418.Rotation.ZW.m128d_f64[1];
            local_538.Translation.XY.m128d_f64[0] = local_418.Translation.XY.m128d_f64[0];
            local_538.Translation.XY.m128d_f64[1] = local_418.Translation.XY.m128d_f64[1];
            local_538.Translation.ZW.m128d_f64[0] = local_418.Translation.ZW.m128d_f64[0];
            local_538.Translation.ZW.m128d_f64[1] = local_418.Translation.ZW.m128d_f64[1];
            local_538.Scale3D.XY.m128d_f64[0] = local_418.Scale3D.XY.m128d_f64[0];
            local_538.Scale3D.XY.m128d_f64[1] = local_418.Scale3D.XY.m128d_f64[1];
            local_538.Scale3D.ZW.m128d_f64[0] = local_418.Scale3D.ZW.m128d_f64[0];
            local_538.Scale3D.ZW.m128d_f64[1] = local_418.Scale3D.ZW.m128d_f64[1];
            pUVar4 = (pAVar14->RootComponent).field0_0x0.DebugPtr;
            if (pUVar4 == (USceneComponent *)0x0) {
              pTVar24 = &UE::Math::TTransform<double>::Identity;
            }
            else {
              pTVar24 = &pUVar4->ComponentToWorld;
            }
            local_3b8.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_3b8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_3b8.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_3b8.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_3b8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_3b8.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_3b8.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_3b8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_3b8.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_3b8.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_3b8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_3b8.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_3b8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_3b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_3b8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_3b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_3b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_3b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_3b8,&local_538,pTVar24);
            local_538.Rotation.XY.m128d_f64[0] = local_3b8.Rotation.XY.m128d_f64[0];
            local_538.Rotation.XY.m128d_f64[1] = local_3b8.Rotation.XY.m128d_f64[1];
            local_538.Rotation.ZW.m128d_f64[0] = local_3b8.Rotation.ZW.m128d_f64[0];
            local_538.Rotation.ZW.m128d_f64[1] = local_3b8.Rotation.ZW.m128d_f64[1];
            local_538.Translation.XY.m128d_f64[0] = local_3b8.Translation.XY.m128d_f64[0];
            local_538.Translation.XY.m128d_f64[1] = local_3b8.Translation.XY.m128d_f64[1];
            local_538.Translation.ZW.m128d_f64[0] = local_3b8.Translation.ZW.m128d_f64[0];
            local_538.Translation.ZW.m128d_f64[1] = local_3b8.Translation.ZW.m128d_f64[1];
            local_538.Scale3D.XY.m128d_f64[0]._0_4_ = local_3b8.Scale3D.XY.m128d_f64[0]._0_4_;
            local_538.Scale3D.XY.m128d_f64[0]._4_4_ = local_3b8.Scale3D.XY.m128d_f64[0]._4_4_;
            local_538.Scale3D.XY.m128d_f64[1]._0_4_ = local_3b8.Scale3D.XY.m128d_f64[1]._0_4_;
            local_538.Scale3D.XY.m128d_f64[1]._4_4_ = local_3b8.Scale3D.XY.m128d_f64[1]._4_4_;
            local_538.Scale3D.ZW.m128d_f64[0]._0_4_ = local_3b8.Scale3D.ZW.m128d_f64[0]._0_4_;
            local_538.Scale3D.ZW.m128d_f64[0]._4_4_ = local_3b8.Scale3D.ZW.m128d_f64[0]._4_4_;
            local_538.Scale3D.ZW.m128d_f64[1]._0_4_ = local_3b8.Scale3D.ZW.m128d_f64[1]._0_4_;
            local_538.Scale3D.ZW.m128d_f64[1]._4_4_ = local_3b8.Scale3D.ZW.m128d_f64[1]._4_4_;
          }
          pTVar24 = (TTransform<double> *)(pTVar18->AllocatorInstance).Data;
          if (((pTVar24 <= &local_538) && (&local_538 < pTVar24 + *piVar1)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            pTVar18 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar18;
          }
          iVar9 = (this->MarkerLocations).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1060,&pTVar18->AllocatorInstance,piVar1);
          }
          (this->MarkerLocations).ArrayNum = iVar9 + 1;
          lVar13 = lVar13 + 0xc;
          pFVar23 = (pTVar18->AllocatorInstance).Data;
          lVar20 = (longlong)iVar9 * 0x60;
          *(double *)(pFVar23 + lVar20) = local_538.Rotation.XY.m128d_f64[0];
          *(double *)(pFVar23 + lVar20 + 8) = local_538.Rotation.XY.m128d_f64[1];
          *(double *)(pFVar23 + lVar20 + 0x10) = local_538.Rotation.ZW.m128d_f64[0];
          *(double *)(pFVar23 + lVar20 + 0x10 + 8) = local_538.Rotation.ZW.m128d_f64[1];
          *(double *)(pFVar23 + lVar20 + 0x20) = local_538.Translation.XY.m128d_f64[0];
          *(double *)(pFVar23 + lVar20 + 0x20 + 8) = local_538.Translation.XY.m128d_f64[1];
          *(double *)(pFVar23 + lVar20 + 0x30) = local_538.Translation.ZW.m128d_f64[0];
          *(double *)(pFVar23 + lVar20 + 0x30 + 8) = local_538.Translation.ZW.m128d_f64[1];
          *(double *)(pFVar23 + lVar20 + 0x40) = local_538.Scale3D.XY.m128d_f64[0];
          *(double *)(pFVar23 + lVar20 + 0x40 + 8) = local_538.Scale3D.XY.m128d_f64[1];
          *(double *)(pFVar23 + lVar20 + 0x50) = local_538.Scale3D.ZW.m128d_f64[0];
          *(double *)(pFVar23 + lVar20 + 0x50 + 8) = local_538.Scale3D.ZW.m128d_f64[1];
          iVar9 = uVar22 + 2;
          uVar22 = uVar22 + 3;
        } while (iVar9 < *(int *)(lVar12 + 0x78));
      }
      goto LAB_14d050021;
    }
    if (2 < (byte)LogLiveLink._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar9 = (this->MarkerLocations).ArrayNum;
    pFVar23 = (this->MarkerLocations).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar9;
    if (iVar9 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
      goto LAB_14d05007d;
    }
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,0x10,iVar9,0,&__return_storage_ptr__->AllocatorInstance,iVar9,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar23,(longlong)iVar9 * 0x60);
LAB_14d05007d:
  FStructOnScope::~FStructOnScope(&local_680);
  FStructOnScope::~FStructOnScope(&local_6a8);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d052670

UClass * __cdecl ULiveLinkMarkerVisualizer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkMarkerVisualizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkMarkerVisualizer",
               &Z_Registration_Info_UClass_ULiveLinkMarkerVisualizer.InnerSingleton,
               StaticRegisterNativesULiveLinkMarkerVisualizer,0xa40,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkMarkerVisualizer>,
               InternalVTableHelperCtorCaller<ULiveLinkMarkerVisualizer>,local_res8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkMarkerVisualizer.InnerSingleton;
}

// OnRegister @ 14d06ad10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall ULiveLinkMarkerVisualizer::OnRegister(ULiveLinkMarkerVisualizer *this)

{
  code *pcVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  void *local_28 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_18;
  
  UInstancedStaticMeshComponent::OnRegister((UInstancedStaticMeshComponent *)this);
  pcVar1 = *(code **)(*(longlong *)this + 3000);
  pTVar2 = GetMarkerTransforms(this,&local_18);
  (*pcVar1)(this,local_28,pTVar2,1,1,0);
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// OnUnregister @ 14d06bd20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall ULiveLinkMarkerVisualizer::OnUnregister(ULiveLinkMarkerVisualizer *this)

{
  UInstancedStaticMeshComponent::OnUnregister((UInstancedStaticMeshComponent *)this);
                    /* WARNING: Could not recover jumptable at 0x00014d06bd39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xc38))(this);
  return;
}

// StaticRegisterNativesULiveLinkMarkerVisualizer @ 14d0807a0

void __cdecl ULiveLinkMarkerVisualizer::StaticRegisterNativesULiveLinkMarkerVisualizer(void)

{
  return;
}

// TickComponent @ 14d082ed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ULiveLinkMarkerVisualizer::TickComponent
          (ULiveLinkMarkerVisualizer *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  code *pcVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  uint in_stack_ffffffffffffffc0;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_18;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  iVar2 = UInstancedStaticMeshComponent::GetInstanceCount((UInstancedStaticMeshComponent *)this);
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(longlong *)this + 3000);
    pTVar3 = GetMarkerTransforms(this,&local_18);
    in_stack_ffffffffffffffc0 = in_stack_ffffffffffffffc0 & 0xffffff00;
    (*pcVar1)(this,&local_28,pTVar3,1,1,in_stack_ffffffffffffffc0);
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  if (this->bEvaluateLiveLink != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0xc08);
    pTVar3 = GetMarkerTransforms(this,&local_18);
    (*pcVar1)(this,0,pTVar3,1,1,in_stack_ffffffffffffffc0 & 0xffffff00);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  if (this->bDrawLabels != false) {
    local_20 = (this->MarkerLabels).ArrayNum;
    lVar4 = (longlong)local_20;
    _Src = (this->MarkerLabels).AllocatorInstance.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    if (local_20 == 0) {
      local_1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_20,0,&local_28,local_20,&local_1c);
      memcpy(local_28.Data,_Src,lVar4 << 3);
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return;
}

