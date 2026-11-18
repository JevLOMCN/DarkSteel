// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 11

// StaticClass @ 146e30830

UClass * __cdecl USplineNavModifierComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineNavModifierComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"SplineNavModifierComponent",
               &Z_Registration_Info_UClass_USplineNavModifierComponent.InnerSingleton,
               StaticRegisterNativesUSplineNavModifierComponent,0x270,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<USplineNavModifierComponent>,
               InternalVTableHelperCtorCaller<USplineNavModifierComponent>,local_res8,
               UNavModifierComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineNavModifierComponent.InnerSingleton;
}

// USplineNavModifierComponent @ 146e36fb0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

USplineNavModifierComponent * __thiscall
USplineNavModifierComponent::USplineNavModifierComponent
          (USplineNavModifierComponent *this,FObjectInitializer *param_1)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_res8 [4];
  
  UNavModifierComponent::UNavModifierComponent((UNavModifierComponent *)this,param_1);
  this->bUpdateNavDataOnSplineChange = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this_00 = &(this->AttachedSpline).OtherActor;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7USplineNavModifierComponent__6B_;
  (this->AttachedSpline)._padding_ = 0;
  (this->AttachedSpline)._padding_ = 0;
  (this->AttachedSpline)._padding_ = 0;
  (this->AttachedSpline)._padding_ = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)local_res8);
  this->SubdivisionLOD = Medium;
  this->StrokeWidth = 500.0;
  this->StrokeHeight = 500.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->SplineTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->SplineTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->SplineTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->SplineTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->SplineTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->SplineTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->SplineTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->SplineTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->SplineTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->SplineTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->SplineTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->SplineTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// USplineNavModifierComponent @ 146e370c0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

USplineNavModifierComponent * __thiscall
USplineNavModifierComponent::USplineNavModifierComponent
          (USplineNavModifierComponent *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_res8 [4];
  
  UNavModifierComponent::UNavModifierComponent((UNavModifierComponent *)this,param_1);
  this->bUpdateNavDataOnSplineChange = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this_00 = &(this->AttachedSpline).OtherActor;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7USplineNavModifierComponent__6B_;
  (this->AttachedSpline)._padding_ = 0;
  (this->AttachedSpline)._padding_ = 0;
  (this->AttachedSpline)._padding_ = 0;
  (this->AttachedSpline)._padding_ = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)local_res8);
  this->SubdivisionLOD = Medium;
  this->StrokeWidth = 500.0;
  this->StrokeHeight = 500.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->SplineTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->SplineTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->SplineTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->SplineTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->SplineTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->SplineTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->SplineTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->SplineTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->SplineTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->SplineTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->SplineTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->SplineTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~USplineNavModifierComponent @ 146e37be0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
USplineNavModifierComponent::~USplineNavModifierComponent(USplineNavModifierComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7USplineNavModifierComponent__6B_;
  pvVar1 = (void *)(this->AttachedSpline)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UNavModifierComponent::~UNavModifierComponent((UNavModifierComponent *)this);
  return;
}

// CalculateBounds @ 146e44450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USplineNavModifierComponent::CalculateBounds(USplineNavModifierComponent *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  UActorComponent *pUVar12;
  UClass *pUVar13;
  double *pdVar14;
  double dVar15;
  undefined1 local_68 [48];
  undefined1 local_38;
  undefined4 uStack_37;
  undefined2 uStack_33;
  undefined1 uStack_31;
  
  local_38 = 0;
  uStack_37 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  uStack_33 = 0;
  uStack_31 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pUVar12 = FComponentReference::GetComponent(&this->AttachedSpline,(AActor *)this->_padding_);
  if (pUVar12 != (UActorComponent *)0x0) {
    pUVar13 = Z_Construct_UClass_USplineComponent_NoRegister();
    iVar4 = (int)pUVar13->_padding_;
    if ((iVar4 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar13->_padding_)) {
      dVar5 = this->StrokeWidth * __real_3fe0000000000000;
      dVar11 = this->StrokeHeight * __real_3fe0000000000000;
      if (dVar11 <= dVar5) {
        dVar11 = dVar5;
      }
      pdVar14 = (double *)
                (**(code **)(pUVar12->_padding_ + 0x598))(pUVar12,local_68,&this->SplineTransform);
      dVar5 = *pdVar14;
      dVar1 = pdVar14[2];
      dVar2 = pdVar14[5];
      dVar3 = pdVar14[3];
      dVar10 = (dVar5 - pdVar14[3]) - dVar11;
      dVar15 = (pdVar14[1] - pdVar14[4]) - dVar11;
      dVar7 = pdVar14[4] + pdVar14[1] + dVar11;
      dVar8 = pdVar14[5] + pdVar14[2] + dVar11;
      auVar9._8_4_ = SUB84(dVar15,0);
      auVar9._0_8_ = dVar10;
      auVar9._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      this->_padding_ = (longlong)dVar10;
      this->_padding_ = auVar9._8_8_;
      this->_padding_ = (longlong)((dVar1 - dVar2) - dVar11);
      this->_padding_ = (longlong)(dVar5 + dVar3 + dVar11);
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      this->_padding_ = (longlong)dVar7;
      this->_padding_ = auVar6._8_8_;
      this->_padding_ = CONCAT17(uStack_31,CONCAT25(uStack_33,CONCAT41(uStack_37,1)));
    }
  }
  return;
}

// GetNavigationData @ 146e5c580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
USplineNavModifierComponent::GetNavigationData
          (USplineNavModifierComponent *this,FNavigationRelevantData *param_1)

{
  TArray<FAreaNavModifier,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  UObject *pUVar3;
  FAreaNavModifier *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ForAnyElementType FVar15;
  USplineNavModifierComponent *pUVar16;
  FNavigationRelevantData *pFVar17;
  ulonglong uVar18;
  bool bVar19;
  int iVar20;
  USplineComponent *pUVar21;
  UClass *pUVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined4 extraout_XMM0_Da;
  uint uVar28;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  uint uVar29;
  uint uVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  undefined8 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStackY_3d8 [32];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_388;
  ulonglong local_378;
  longlong local_370;
  double local_358;
  USplineNavModifierComponent *local_348;
  UObject *local_340;
  UObject *local_338;
  FNavigationRelevantData *local_330;
  undefined1 local_328 [16];
  double local_318;
  TVector<double> *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  double local_2f8 [6];
  undefined8 local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  double local_2a0;
  double local_298;
  TArrayView<UE::Math::TVector<double>_const_,int> local_288;
  FAreaNavModifier local_278;
  TTransform<double> local_208;
  undefined1 local_1a8 [192];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_348 = this;
  local_330 = param_1;
  pUVar21 = (USplineComponent *)
            FComponentReference::GetComponent
                      ((FComponentReference *)&this->_padding_,
                       (AActor *)this[-1].SplineTransform.Scale3D.XY.m128d_f64[1]);
  if (pUVar21 != (USplineComponent *)0x0) {
    pUVar22 = Z_Construct_UClass_USplineComponent_NoRegister();
    iVar20 = (int)pUVar22->_padding_;
    if ((iVar20 <= *(int *)(pUVar21->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
        &pUVar22->_padding_)) {
      iVar20 = (int)this->_padding_;
      uVar28 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_2f8[4] = (double)this->_padding_ * __real_3fe0000000000000;
      local_388.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8 = (double)this->_padding_ * __real_3fe0000000000000;
      local_388.ArrayNum = 0;
      local_388.ArrayMax = 0;
      local_2f8[0] = 0.0;
      local_2f8[3] = 0.0;
      uVar29 = SUB84(local_2f8[4],0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar30 = (uint)((ulonglong)local_2f8[4] >> 0x20) ^ uVar28;
      local_2f8[1] = (double)CONCAT44(uVar30,uVar29);
      local_2a8 = CONCAT44(uVar30,uVar29);
      uVar29 = SUB84(local_2b8,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar28 = (uint)((ulonglong)local_2b8 >> 0x20) ^ uVar28;
      local_2f8[2] = (double)CONCAT44(uVar28,uVar29);
      local_2f8[5] = (double)CONCAT44(uVar28,uVar29);
      local_2c8 = 0;
      local_2b0 = 0;
      fVar31 = __real_43fa0000;
      if ((iVar20 != 0) &&
         (((fVar31 = __real_437a0000, iVar20 != 1 && (fVar31 = __real_42c80000, iVar20 != 2)) &&
          (fVar31 = __real_43fa0000, iVar20 == 3)))) {
        fVar31 = __real_41200000;
      }
      local_2c0 = local_2f8[4];
      local_2a0 = local_2b8;
      ::`anonymous_namespace'::SubdivideSpline(&local_388,pUVar21,fVar31);
      local_208.Rotation.XY.m128d_f64[0] = (double)pUVar21->_padding_;
      local_208.Rotation.XY.m128d_f64[1] = (double)pUVar21->_padding_;
      local_208.Rotation.ZW.m128d_f64[0] = (double)pUVar21->_padding_;
      local_208.Rotation.ZW.m128d_f64[1] = (double)pUVar21->_padding_;
      local_208.Translation.XY.m128d_f64[0] = (double)pUVar21->_padding_;
      local_208.Translation.XY.m128d_f64[1] = (double)pUVar21->_padding_;
      local_208.Translation.ZW.m128d_f64[0] = (double)pUVar21->_padding_;
      local_208.Translation.ZW.m128d_f64[1] = (double)pUVar21->_padding_;
      local_208.Scale3D.XY.m128d_f64[0] = (double)pUVar21->_padding_;
      local_208.Scale3D.XY.m128d_f64[1] = (double)pUVar21->_padding_;
      local_208.Scale3D.ZW.m128d_f64[0] = (double)pUVar21->_padding_;
      local_208.Scale3D.ZW.m128d_f64[1] = (double)pUVar21->_padding_;
      if (1 < (longlong)local_388.ArrayNum) {
        local_370 = (longlong)local_388.ArrayNum + -1;
        uVar39 = (undefined4)__real_3e45798ee0000000;
        uVar40 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        uVar41 = (undefined4)__real_3ff0000000000000;
        uVar42 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        uVar43 = (undefined4)__real_bff0000000000000;
        uVar44 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
        local_378 = 0;
        uVar24 = 0;
        uVar25 = 0x18;
        uVar18 = 1;
        uVar27 = 0;
        do {
          uVar26 = uVar18;
          dVar10 = (double)CONCAT44(uVar44,uVar43);
          uVar28 = (uint)uVar26;
          uVar29 = 0;
          if ((int)uVar28 < local_388.ArrayNum) {
            uVar29 = ~uVar28 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar15.Data = local_388.AllocatorInstance.Data;
          uVar30 = (uint)uVar27;
          uVar29 = 0;
          if ((int)uVar30 < local_388.ArrayNum) {
            uVar29 = ~uVar30 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar35 = *(double *)(FVar15.Data + uVar25) -
                   *(double *)(local_388.AllocatorInstance.Data + uVar24);
          uVar38 = *(double *)(FVar15.Data + uVar25 + 8) -
                   *(double *)(local_388.AllocatorInstance.Data + uVar24 + 8);
          dVar6 = (double)uVar38 * (double)uVar38 + (double)uVar35 * (double)uVar35;
          if (dVar6 == (double)CONCAT44(uVar42,uVar41)) {
            local_318 = 0.0;
          }
          else if ((double)CONCAT44(uVar40,uVar39) <= dVar6) {
            local_318 = 0.0;
            local_298 = (double)CONCAT44(uVar42,uVar41) / SQRT(dVar6);
            uVar35 = local_298 * (double)uVar35;
            uVar38 = local_298 * (double)uVar38;
          }
          else {
            local_318 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          }
          local_328._8_4_ = (int)uVar38;
          local_328._0_8_ = uVar35;
          local_328._12_4_ = (int)((ulonglong)uVar38 >> 0x20);
          if (((double)CONCAT44(uVar44,uVar43) <= (double)uVar35) &&
             (dVar10 = (double)uVar35, (double)CONCAT44(uVar42,uVar41) <= (double)uVar35)) {
            dVar10 = (double)CONCAT44(uVar42,uVar41);
          }
          local_358 = local_318;
          acos(dVar10);
          __libm_sse2_sincos_();
          dVar6 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
                  UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
          lVar23 = 0;
          dVar11 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
                   UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
          dVar12 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
                   UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
          dVar10 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
          uVar24 = 4;
          do {
            dVar7 = *(double *)((longlong)local_2f8 + lVar23);
            dVar33 = *(double *)((longlong)local_2f8 + lVar23 + 8);
            local_358 = *(double *)((longlong)local_2f8 + lVar23 + 0x10);
            uVar29 = 0;
            if ((int)uVar30 < local_388.ArrayNum) {
              uVar29 = ~uVar30 >> 0x1f;
            }
            dVar34 = local_358 * dVar11 - dVar33 * dVar12;
            dVar34 = dVar34 + dVar34;
            dVar32 = dVar7 * dVar12 - local_358 * dVar6;
            dVar32 = dVar32 + dVar32;
            dVar36 = dVar33 * dVar6 - dVar7 * dVar11;
            dVar36 = dVar36 + dVar36;
            dVar37 = dVar36 * dVar10 + local_358;
            if ((uVar29 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            dVar13 = *(double *)((longlong)local_2f8 + lVar23);
            dVar14 = *(double *)((longlong)local_2f8 + lVar23 + 8);
            local_358 = *(double *)((longlong)local_2f8 + lVar23 + 0x10);
            dVar2 = *(double *)(local_388.AllocatorInstance.Data + local_378 + 0x10);
            dVar33 = (dVar34 * dVar12 - dVar36 * dVar6) + dVar10 * dVar32 + dVar33 +
                     *(double *)(local_388.AllocatorInstance.Data + local_378 + 8);
            uVar29 = 0;
            if ((int)uVar28 < local_388.ArrayNum) {
              uVar29 = ~uVar28 >> 0x1f;
            }
            auVar9._8_4_ = SUB84(dVar33,0);
            auVar9._0_8_ = (dVar36 * dVar11 - dVar12 * dVar32) + dVar34 * dVar10 + dVar7 +
                           *(double *)(local_388.AllocatorInstance.Data + local_378);
            auVar9._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
            *(undefined1 (*) [16])(local_1a8 + lVar23) = auVar9;
            *(double *)(local_1a8 + lVar23 + 0x10) =
                 (dVar6 * dVar32 - dVar34 * dVar11) + dVar37 + dVar2;
            dVar32 = local_358 * dVar11 - dVar14 * dVar12;
            dVar32 = dVar32 + dVar32;
            dVar7 = dVar13 * dVar12 - local_358 * dVar6;
            dVar7 = dVar7 + dVar7;
            dVar33 = dVar14 * dVar6 - dVar13 * dVar11;
            dVar33 = dVar33 + dVar33;
            dVar34 = dVar33 * dVar10 + local_358;
            if ((uVar29 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pUVar16 = local_348;
            lVar23 = lVar23 + 0x18;
            dVar36 = (dVar12 * dVar32 - dVar33 * dVar6) + dVar7 * dVar10 + dVar14 +
                     *(double *)(local_388.AllocatorInstance.Data + uVar25 + 8);
            local_358 = (dVar7 * dVar6 - dVar11 * dVar32) + dVar34 +
                        *(double *)(local_388.AllocatorInstance.Data + uVar25 + 0x10);
            auVar8._8_4_ = SUB84(dVar36,0);
            auVar8._0_8_ = (dVar33 * dVar11 - dVar7 * dVar12) + dVar10 * dVar32 + dVar13 +
                           *(double *)(local_388.AllocatorInstance.Data + uVar25);
            auVar8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
            *(undefined1 (*) [16])(local_1a8 + uVar24 * 0x18) = auVar8;
            *(double *)(local_1a8 + uVar24 * 0x18 + 0x10) = local_358;
            uVar24 = (ulonglong)((int)uVar24 + 1);
          } while (lVar23 < 0x60);
          local_340 = (UObject *)local_348->_padding_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_340 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_340);
          }
          local_308 = (TVector<double> *)local_1a8;
          uStack_300 = 8;
          local_288._12_4_ = uStack_2fc;
          local_288.ArrayNum = 8;
          local_288.DataPtr = local_308;
          FAreaNavModifier::FAreaNavModifier
                    (&local_278,&local_288,Unreal,&local_208,(TSubclassOf<UNavAreaBase>)&local_340);
          lVar23 = pUVar16->_padding_;
          if ((lVar23 != 0) &&
             (pUVar22 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar22 != (UClass *)0x0)) {
            iVar20 = (int)pUVar22->_padding_;
            if ((*(int *)(lVar23 + 0x38) < iVar20) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar23 + 0x30) + (longlong)iVar20 * 8) !=
                &pUVar22->_padding_)) {
              bVar19 = false;
            }
            else {
              bVar19 = true;
            }
            if ((bVar19) && (pUVar3 = (UObject *)pUVar16->_padding_, pUVar3 != (UObject *)0x0)) {
              local_338 = pUVar3;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar3);
              }
              FAreaNavModifier::SetAreaClassToReplace
                        (&local_278,(TSubclassOf<UNavAreaBase>)&local_338);
            }
          }
          pFVar17 = local_330;
          pTVar1 = &(local_330->Modifiers).Areas;
          pFVar4 = (FAreaNavModifier *)(pTVar1->AllocatorInstance).Data;
          if (((pFVar4 <= &local_278) &&
              (&local_278 < pFVar4 + (local_330->Modifiers).Areas.ArrayMax)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar20 = (pFVar17->Modifiers).Areas.ArrayNum;
          if (iVar20 == (pFVar17->Modifiers).Areas.ArrayMax) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x870,&pTVar1->AllocatorInstance,
                                &(pFVar17->Modifiers).Areas.ArrayMax);
          }
          (pFVar17->Modifiers).Areas.ArrayNum = iVar20 + 1;
          FAreaNavModifier::FAreaNavModifier
                    ((FAreaNavModifier *)
                     ((pTVar1->AllocatorInstance).Data + (longlong)iVar20 * 0x70),&local_278);
          uVar29 = (uint)(pFVar17->Modifiers)._padding_;
          uVar30 = local_278._padding_ & 1U | uVar29;
          *(uint *)&(pFVar17->Modifiers)._padding_ = (uVar30 ^ uVar29) & 0xfffffffe ^ uVar30;
          uVar29 = *(uint *)&(pFVar17->Modifiers).field_0x50;
          uVar29 = ((byte)local_278._106_1_ | uVar29) & 2 ^ uVar29 & 0xfffffffd;
          *(uint *)&(pFVar17->Modifiers).field_0x50 =
               (uVar29 | (byte)local_278._106_1_) & 4 ^ uVar29 & 0xfffffffb;
          local_378 = uVar25;
          if (local_278.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Points.AllocatorInstance.Data);
          }
          uVar41 = (undefined4)__real_3ff0000000000000;
          uVar42 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          uVar43 = (undefined4)__real_bff0000000000000;
          uVar44 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
          local_370 = local_370 + -1;
          uVar39 = (undefined4)__real_3e45798ee0000000;
          uVar40 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          uVar24 = uVar25;
          uVar25 = uVar25 + 0x18;
          uVar18 = (ulonglong)(uVar28 + 1);
          uVar27 = uVar26;
        } while (local_370 != 0);
        local_370 = 0;
      }
      if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 146e5d440

UClass * __cdecl USplineNavModifierComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineNavModifierComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"SplineNavModifierComponent",
               &Z_Registration_Info_UClass_USplineNavModifierComponent.InnerSingleton,
               StaticRegisterNativesUSplineNavModifierComponent,0x270,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<USplineNavModifierComponent>,
               InternalVTableHelperCtorCaller<USplineNavModifierComponent>,local_res8,
               UNavModifierComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineNavModifierComponent.InnerSingleton;
}

// GetSubdivisionThreshold @ 146e5dae0

float __thiscall
USplineNavModifierComponent::GetSubdivisionThreshold(USplineNavModifierComponent *this)

{
  ESubdivisionLOD EVar1;
  
  EVar1 = this->SubdivisionLOD;
  if (EVar1 != Low) {
    if (EVar1 == Medium) {
      return __real_437a0000;
    }
    if (EVar1 == High) {
      return __real_42c80000;
    }
    if (EVar1 == Ultra) {
      return __real_41200000;
    }
  }
  return __real_43fa0000;
}

// StaticRegisterNativesUSplineNavModifierComponent @ 146e73c70

void __cdecl USplineNavModifierComponent::StaticRegisterNativesUSplineNavModifierComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USplineNavModifierComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateNavigationWithComponentData @ 146e75c90

void __thiscall
USplineNavModifierComponent::UpdateNavigationWithComponentData(USplineNavModifierComponent *this)

{
  return;
}

// execUpdateNavigationWithComponentData @ 146e77070

void __cdecl
USplineNavModifierComponent::execUpdateNavigationWithComponentData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

