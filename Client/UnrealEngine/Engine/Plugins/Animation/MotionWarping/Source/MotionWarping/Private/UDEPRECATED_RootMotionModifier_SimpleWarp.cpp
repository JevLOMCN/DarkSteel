// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 7

// StaticClass @ 14cefe040

UClass * __cdecl UDEPRECATED_RootMotionModifier_SimpleWarp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_SimpleWarp",
               &Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_RootMotionModifier_SimpleWarp,0x370,0x10,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_RootMotionModifier_SimpleWarp>,
               InternalVTableHelperCtorCaller<UDEPRECATED_RootMotionModifier_SimpleWarp>,local_res8,
               URootMotionModifier_Warp::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.InnerSingleton;
}

// UDEPRECATED_RootMotionModifier_SimpleWarp @ 14cf041a0

UDEPRECATED_RootMotionModifier_SimpleWarp * __thiscall
UDEPRECATED_RootMotionModifier_SimpleWarp::UDEPRECATED_RootMotionModifier_SimpleWarp
          (UDEPRECATED_RootMotionModifier_SimpleWarp *this,FVTableHelper *param_1)

{
  URootMotionModifier_Warp::URootMotionModifier_Warp((URootMotionModifier_Warp *)this,param_1);
  *(undefined ***)this = &___7UDEPRECATED_RootMotionModifier_SimpleWarp__6B_;
  return this;
}

// UDEPRECATED_RootMotionModifier_SimpleWarp @ 14cf041d0

UDEPRECATED_RootMotionModifier_SimpleWarp * __thiscall
UDEPRECATED_RootMotionModifier_SimpleWarp::UDEPRECATED_RootMotionModifier_SimpleWarp
          (UDEPRECATED_RootMotionModifier_SimpleWarp *this,FObjectInitializer *param_1)

{
  URootMotionModifier_Warp::URootMotionModifier_Warp((URootMotionModifier_Warp *)this,param_1);
  *(undefined ***)this = &___7UDEPRECATED_RootMotionModifier_SimpleWarp__6B_;
  return this;
}

// ~UDEPRECATED_RootMotionModifier_SimpleWarp @ 14cf05730

void __thiscall
UDEPRECATED_RootMotionModifier_SimpleWarp::~UDEPRECATED_RootMotionModifier_SimpleWarp
          (UDEPRECATED_RootMotionModifier_SimpleWarp *this)

{
  *(undefined ***)this = &___7URootMotionModifier__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x150);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x138);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x120);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cf10230

UClass * __cdecl UDEPRECATED_RootMotionModifier_SimpleWarp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_SimpleWarp",
               &Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_RootMotionModifier_SimpleWarp,0x370,0x10,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_RootMotionModifier_SimpleWarp>,
               InternalVTableHelperCtorCaller<UDEPRECATED_RootMotionModifier_SimpleWarp>,local_res8,
               URootMotionModifier_Warp::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.InnerSingleton;
}

// ProcessRootMotion @ 14cf15180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UDEPRECATED_RootMotionModifier_SimpleWarp::ProcessRootMotion
          (UDEPRECATED_RootMotionModifier_SimpleWarp *this,
          TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,float param_2)

{
  FName FVar1;
  int iVar2;
  longlong lVar3;
  USceneComponent *pUVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined4 uVar14;
  TConsoleVariableData<int> *pTVar15;
  TConsoleVariableData<float> *pTVar16;
  bool bVar17;
  UClass *pUVar18;
  AActor *this_00;
  UAnimSequenceBase *pUVar19;
  double *pdVar20;
  TQuat<double> *this_01;
  UWorld *pUVar21;
  TTransform<double> *pTVar22;
  VectorRegister4Double *pVVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  float fVar50;
  undefined1 auStackY_518 [32];
  double local_4c0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_4b8;
  double local_4a8;
  double local_4a0;
  double dStack_498;
  double local_490;
  double local_488;
  double local_480;
  double dStack_478;
  double local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  double local_458;
  double local_450;
  double dStack_448;
  double local_440;
  TVector<double>_u_0 local_438;
  TRotator<double> local_420;
  TQuat<double> local_408;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double local_3d0;
  double dStack_3c8;
  undefined8 local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  int local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  FName local_378;
  double local_370;
  double dStack_368;
  double local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  double local_328;
  double dStack_320;
  double local_318;
  double local_310;
  double dStack_308;
  double local_300;
  undefined1 local_2f8 [32];
  TQuat<double> local_2d8;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_518;
  lVar3 = *(longlong *)&this->field_0x20;
  if (lVar3 != 0) {
    pUVar18 = UMotionWarpingComponent::StaticClass();
    iVar2 = (int)pUVar18->_padding_;
    if ((((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          == &pUVar18->_padding_)) && (*(longlong **)(lVar3 + 0xe0) != (longlong *)0x0)) &&
       (this_00 = (AActor *)(**(code **)(**(longlong **)(lVar3 + 0xe0) + 0x2b0))(),
       this_00 != (AActor *)0x0)) {
      pUVar18 = Z_Construct_UClass_ACharacter_NoRegister();
      iVar2 = (int)pUVar18->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar18->_padding_)) {
        pUVar4 = (this_00->RootComponent).field0_0x0.DebugPtr;
        if (pUVar4 == (USceneComponent *)0x0) {
          pTVar22 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar22 = &pUVar4->ComponentToWorld;
        }
        pVVar23 = &pTVar22->Translation;
        local_2b8.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
        local_2b8.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
        local_2b8.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
        local_2b8.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
        fVar46 = *(float *)&this->field_0x34;
        fVar50 = *(float *)&this->field_0x38;
        local_2b8.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
        local_2b8.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
        local_2b8.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
        local_2b8.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
        local_2b8.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
        local_2b8.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
        local_2b8.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
        local_2b8.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
        pUVar19 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
        UMotionWarpingUtilities::ExtractRootMotionFromAnimation(&local_198,pUVar19,fVar50,fVar46);
        if (this->field_0x1e8 != '\0') {
          local_408.X = (param_1->Translation).XY.m128d_f64[0];
          local_408.Y = (param_1->Translation).XY.m128d_f64[1];
          local_490 = (param_1->Translation).ZW.m128d_f64[0];
          fVar46 = *(float *)&this->field_0x3c;
          if (*(float *)&this->field_0x34 <= *(float *)&this->field_0x3c) {
            fVar46 = *(float *)&this->field_0x34;
          }
          fVar50 = *(float *)&this->field_0x38;
          pUVar19 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
          UMotionWarpingUtilities::ExtractRootMotionFromAnimation(&local_138,pUVar19,fVar50,fVar46);
          local_3d0 = *(double *)&this->field_0x230;
          dVar29 = *(double *)&this->field_0x238;
          local_3b8 = (pVVar23->XY).m128d_f64[0];
          dStack_3b0 = (pVVar23->XY).m128d_f64[1];
          fVar50 = 0.0;
          local_3d8 = local_138.Translation.ZW.m128d_f64[0];
          local_3c0 = *(undefined8 *)&this->field_0x240;
          local_3a8 = (pVVar23->ZW).m128d_f64[0];
          local_390 = local_198.Translation.ZW.m128d_f64[0];
          local_3a0 = local_198.Translation.XY.m128d_f64[0];
          dStack_398 = local_198.Translation.XY.m128d_f64[1];
          local_3e8 = local_138.Translation.XY.m128d_f64[0];
          dStack_3e0 = local_138.Translation.XY.m128d_f64[1];
          fVar46 = (float)SQRT(local_198.Translation.XY.m128d_f64[0] *
                               local_198.Translation.XY.m128d_f64[0] +
                               local_198.Translation.XY.m128d_f64[1] *
                               local_198.Translation.XY.m128d_f64[1]);
          if (fVar46 <= __real_322bcc77) {
            fVar46 = 0.0;
          }
          else {
            fVar46 = ((float)SQRT((dVar29 - dStack_3b0) * (dVar29 - dStack_3b0) +
                                  (local_3d0 - local_3b8) * (local_3d0 - local_3b8)) *
                     (float)SQRT(local_138.Translation.XY.m128d_f64[0] *
                                 local_138.Translation.XY.m128d_f64[0] +
                                 local_138.Translation.XY.m128d_f64[1] *
                                 local_138.Translation.XY.m128d_f64[1])) / fVar46;
          }
          iVar2 = this_00[1].ReplicatedMovement.ServerPhysicsHandle;
          uVar32._0_1_ = this_00[1].ReplicatedMovement.LocationQuantizationLevel;
          uVar32._1_1_ = this_00[1].ReplicatedMovement.VelocityQuantizationLevel;
          uVar32._2_1_ = this_00[1].ReplicatedMovement.RotationQuantizationLevel;
          uVar32._3_1_ = this_00[1].ReplicatedMovement.field_0x87;
          uVar49 = *(undefined4 *)&this_00[1].Owner.field0_0x0;
          uVar14 = *(undefined4 *)((longlong)&this_00[1].Owner.field0_0x0 + 4);
          FVar1 = this_00[1].NetDriverName;
          dStack_3c8 = dVar29;
          local_388 = iVar2;
          uStack_384 = uVar32;
          uStack_380 = uVar49;
          uStack_37c = uVar14;
          pdVar20 = (double *)(**(code **)(this_00->_padding_ + 0x8e0))(this_00,local_2f8);
          auVar11._4_8_ = dVar29;
          auVar11._0_4_ = uVar32;
          auVar34._0_8_ = auVar11._0_8_ << 0x20;
          auVar34._8_4_ = uVar49;
          auVar34._12_4_ = uVar14;
          local_1f8.Translation.XY.m128d_f64[1] = auVar34._8_8_;
          local_1f8.Rotation.ZW.m128d_f64[0] = pdVar20[2];
          local_1f8.Rotation.ZW.m128d_f64[1] = pdVar20[3];
          local_1f8.Rotation.XY.m128d_f64[0] = *pdVar20;
          local_1f8.Rotation.XY.m128d_f64[1] = pdVar20[1];
          pUVar4 = (this_00->RootComponent).field0_0x0.DebugPtr;
          pTVar22 = &pUVar4->ComponentToWorld;
          local_1f8.Translation.ZW.m128d_f64[1] = 0.0;
          local_1f8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
          local_1f8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
          local_1f8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
          local_1f8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
          if (pUVar4 == (USceneComponent *)0x0) {
            pTVar22 = &UE::Math::TTransform<double>::Identity;
          }
          local_258.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_258.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_258.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_258.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_258.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_258.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_258.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_258.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_258.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_258.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_258.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_258.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_378 = FVar1;
          local_1f8.Translation.XY.m128d_f64[0]._0_4_ = iVar2;
          local_1f8.Translation.XY.m128d_f64[0]._4_4_ = uVar32;
          local_1f8.Translation.ZW.m128d_f64[0] = (double)FVar1;
          UE::Math::TTransform<double>::Multiply(&local_258,&local_1f8,pTVar22);
          local_360 = *(double *)&this->field_0x240;
          local_370 = *(double *)&this->field_0x230;
          dStack_368 = *(double *)&this->field_0x238;
          dVar27 = local_360 - local_258.Translation.ZW.m128d_f64[0];
          dVar29 = local_258.Rotation.XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar41 = local_258.Rotation.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar6 = local_258.Rotation.ZW.m128d_f64[0] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar7 = local_258.Rotation.ZW.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar32 = (undefined4)((ulonglong)dVar7 >> 0x20);
          dVar9 = local_370 - local_258.Translation.XY.m128d_f64[0];
          dVar10 = dStack_368 - local_258.Translation.XY.m128d_f64[1];
          uVar49 = (undefined4)((ulonglong)dVar10 >> 0x20);
          auVar47._8_4_ = SUB84(dVar41,0);
          auVar47._0_8_ = dVar29;
          auVar47._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          auVar42._8_4_ = SUB84(dVar10,0);
          auVar42._0_8_ = dVar9;
          auVar42._12_4_ = uVar49;
          auVar24._8_4_ = SUB84(dVar6,0);
          auVar24._0_8_ = dVar41;
          auVar24._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          auVar33._8_4_ = SUB84(dVar10,0);
          auVar33._0_8_ = dVar9;
          auVar33._12_4_ = uVar49;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = dVar27;
          auVar34 = blendpd(auVar33,auVar8,2);
          auVar43._0_8_ = auVar42._8_8_ * dVar29 - dVar41 * dVar9;
          auVar43._8_8_ = dVar27 * dVar41 - auVar24._8_8_ * dVar10;
          auVar48._8_4_ = SUB84(dVar7,0);
          auVar48._0_8_ = dVar6;
          auVar48._12_4_ = uVar32;
          auVar48 = blendpd(auVar47,auVar48,2);
          auVar35._0_8_ = auVar34._0_8_ * dVar6 - auVar48._0_8_ * dVar27;
          auVar35._8_8_ = auVar34._8_8_ * dVar7 - auVar48._8_8_ * 0.0;
          auVar30._8_4_ = SUB84(auVar43._8_8_,0);
          auVar30._0_8_ = auVar43._0_8_;
          auVar30._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
          auVar34 = blendpd(auVar43,auVar35,2);
          auVar44._0_8_ = auVar34._0_8_ + auVar34._0_8_;
          auVar44._8_8_ = auVar34._8_8_ + auVar34._8_8_;
          auVar36._8_4_ = SUB84(dVar7,0);
          auVar36._0_8_ = dVar7;
          auVar36._12_4_ = uVar32;
          dVar28 = auVar30._8_8_ + auVar30._8_8_;
          dVar31 = auVar35._0_8_ + auVar35._0_8_;
          auVar37._8_4_ = SUB84(dVar31,0);
          auVar37._0_8_ = dVar28;
          uVar32 = (undefined4)((ulonglong)dVar31 >> 0x20);
          auVar37._12_4_ = uVar32;
          auVar25._8_4_ = SUB84(dVar31,0);
          auVar25._0_8_ = dVar28;
          auVar25._12_4_ = uVar32;
          auVar34 = blendpd(auVar25,auVar44,2);
          auVar38._0_8_ = auVar37._8_8_ * dVar29 - dVar41 * dVar28;
          auVar38._8_8_ = auVar44._0_8_ * dVar41 - dVar6 * dVar31;
          auVar45._8_4_ = SUB84(auVar38._8_8_,0);
          auVar45._0_8_ = auVar38._0_8_;
          auVar45._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
          auVar26._0_8_ = auVar34._0_8_ * dVar6 - auVar48._0_8_ * auVar44._0_8_;
          auVar26._8_8_ = auVar34._8_8_ * dVar7 - auVar48._8_8_ * auVar44._8_8_;
          local_480 = auVar45._8_8_ + dVar9 + dVar7 * dVar28;
          dStack_478 = auVar26._0_8_ + dVar10 + auVar36._8_8_ * dVar31;
          auVar34 = blendpd(auVar38,auVar26,2);
          local_470 = auVar34._0_8_ + dVar27 + dVar7 * auVar44._0_8_;
          dVar41 = auVar34._8_8_ + dVar7 * auVar44._8_8_ + 0.0;
          local_4a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
          dVar29 = local_480 * local_480 + dStack_478 * dStack_478;
          if (dVar29 == __real_3ff0000000000000) {
            local_4a0 = local_480;
            dStack_498 = dStack_478;
            if (local_470 == 0.0) {
              auVar12._4_8_ = dVar41;
              auVar12._0_4_ = (int)((ulonglong)local_480 >> 0x20);
              auVar39._0_8_ = auVar12._0_8_ << 0x20;
              auVar39._8_4_ = SUB84(dStack_478,0);
              auVar39._12_4_ = (int)((ulonglong)dStack_478 >> 0x20);
              dStack_498 = auVar39._8_8_;
              local_4c0 = local_470;
            }
            else {
LAB_14cf15761:
              local_4c0 = 0.0;
            }
          }
          else {
            if (__real_3e45798ee0000000 <= dVar29) {
              local_488 = __real_3ff0000000000000 / SQRT(dVar29);
              local_4a0 = local_488 * local_480;
              dStack_498 = local_488 * dStack_478;
              goto LAB_14cf15761;
            }
            auVar13._4_8_ = dVar41;
            auVar13._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            auVar40._0_8_ = auVar13._0_8_ << 0x20;
            auVar40._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            auVar40._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            local_4c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            dStack_498 = auVar40._8_8_;
          }
          dVar29 = (double)fVar46;
          local_420.Roll = local_4c0 * dVar29;
          local_4a0 = local_4a0 * dVar29;
          dStack_498 = dStack_498 * dVar29;
          if (this->field_0x1e9 == '\0') {
            lVar3 = *(longlong *)&this_00[1].AttachmentReplication.RelativeScale3D;
            local_348 = *(double *)(lVar3 + 0x240);
            local_358 = *(undefined8 *)(lVar3 + 0x230);
            uStack_350 = *(undefined8 *)(lVar3 + 0x238);
            pUVar4 = (this_00->RootComponent).field0_0x0.DebugPtr;
            if (pUVar4 == (USceneComponent *)0x0) {
              local_4b8.AllocatorInstance.Data =
                   (FScriptContainerElement *)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_
              ;
              local_4b8.ArrayNum = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              local_4b8.ArrayMax = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              local_4a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            }
            else {
              pVVar23 = &(pUVar4->ComponentToWorld).Translation;
              local_340 = (pVVar23->XY).m128d_f64[0];
              dStack_338 = (pUVar4->ComponentToWorld).Translation.XY.m128d_f64[1];
              local_4b8 = *(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pVVar23->XY).m128d_f64;
              local_4a8 = (pUVar4->ComponentToWorld).Translation.ZW.m128d_f64[0];
              local_330 = local_4a8;
            }
            local_450 = local_138.Translation.XY.m128d_f64[0];
            dStack_448 = local_138.Translation.XY.m128d_f64[1];
            local_468 = *(undefined8 *)&this->field_0x230;
            uStack_460 = *(undefined8 *)&this->field_0x238;
            local_440 = local_138.Translation.ZW.m128d_f64[0];
            local_458 = *(double *)&this->field_0x240;
            local_328 = local_198.Translation.XY.m128d_f64[0];
            dStack_320 = local_198.Translation.XY.m128d_f64[1];
            local_318 = local_198.Translation.ZW.m128d_f64[0];
            if (__real_322bcc77 <
                (float)((uint)(float)local_198.Translation.ZW.m128d_f64[0] &
                       __xmm_7fffffff7fffffff7fffffff7fffffff)) {
              fVar50 = ((float)(local_458 -
                               (local_4a8 - (double)((float)local_348 * *(float *)(lVar3 + 0x568))))
                       * (float)local_138.Translation.ZW.m128d_f64[0]) /
                       (float)local_198.Translation.ZW.m128d_f64[0];
            }
            local_490 = (double)fVar50;
          }
          else {
            local_490 = (param_1->Translation).ZW.m128d_f64[0];
            local_310 = (param_1->Translation).XY.m128d_f64[0];
            dStack_308 = (param_1->Translation).XY.m128d_f64[1];
            local_300 = local_490;
          }
          local_2b8.Translation.ZW.m128d_f64[0] = local_490;
          local_2b8.Translation.ZW.m128d_f64[1] = 0.0;
          local_2b8.Translation.XY.m128d_f64[0] = local_4a0;
          local_2b8.Translation.XY.m128d_f64[1] = dStack_498;
        }
        if (this->field_0x1f8 != '\0') {
          URootMotionModifier_Warp::WarpRotation
                    ((URootMotionModifier_Warp *)this,&local_408,param_1,&local_198,param_2);
          local_2b8.Rotation.XY.m128d_f64[0] = local_408.X;
          local_2b8.Rotation.XY.m128d_f64[1] = local_408.Y;
          local_2b8.Rotation.ZW.m128d_f64[0] = local_408.Z;
          local_2b8.Rotation.ZW.m128d_f64[1] = local_408.W;
        }
        pTVar15 = FMotionWarpingCVars::CVarMotionWarpingDebug.Ref;
        bVar17 = IsInParallelGameThread();
        if (((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) &&
           (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007945>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6c9,"GetShadowIndex() == 0"), bVar17)) {
          pcVar5 = (code *)swi(3);
          pTVar22 = (TTransform<double> *)(*pcVar5)();
          return pTVar22;
        }
        iVar2 = pTVar15->ShadowedValue[0];
        if ((iVar2 == 1) || (iVar2 == 3)) {
          ::FString::FString((FString *)&local_4b8,L"SimpleWarp");
          URootMotionModifier_Warp::PrintLog
                    ((URootMotionModifier_Warp *)this,(FString *)&local_4b8,param_1,&local_2b8);
          if (local_4b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4b8.AllocatorInstance.Data);
          }
        }
        pTVar16 = FMotionWarpingCVars::CVarMotionWarpingDrawDebugDuration.Ref;
        if (iVar2 - 2U < 2) {
          bVar17 = IsInParallelGameThread();
          if (((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) &&
             (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6409875433831007945>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                  ,0x6c9,"GetShadowIndex() == 0"), bVar17)) {
            pcVar5 = (code *)swi(3);
            pTVar22 = (TTransform<double> *)(*pcVar5)();
            return pTVar22;
          }
          fVar46 = pTVar16->ShadowedValue[0];
          this_01 = URootMotionModifier_Warp::GetTargetRotation
                              ((URootMotionModifier_Warp *)this,&local_2d8);
          UE::Math::TQuat<double>::Rotator(this_01,&local_420);
          local_438._s_0.X = (double)*(undefined8 *)&this->field_0x230;
          local_438._s_0.Y = (double)*(undefined8 *)&this->field_0x238;
          local_438._s_0.Z = (double)*(undefined8 *)&this->field_0x240;
          pUVar21 = AActor::GetWorld(this_00);
          DrawDebugCoordinateSystem
                    (pUVar21,(TVector<double> *)&local_438._s_0,&local_420,__real_42480000,false,
                     fVar46,'\0',__real_3f800000);
        }
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_2b8.Rotation.XY.m128d_f64[0];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_2b8.Rotation.XY.m128d_f64[1];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_2b8.Rotation.ZW.m128d_f64[0];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_2b8.Rotation.ZW.m128d_f64[1];
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
             local_2b8.Translation.XY.m128d_f64[0];
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] =
             local_2b8.Translation.XY.m128d_f64[1];
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
             local_2b8.Translation.ZW.m128d_f64[0];
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] =
             local_2b8.Translation.ZW.m128d_f64[1];
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_2b8.Scale3D.XY.m128d_f64[0];
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_2b8.Scale3D.XY.m128d_f64[1];
        goto LAB_14cf15b16;
      }
    }
  }
  dVar29 = (param_1->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar29;
  dVar29 = (param_1->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar29;
  dVar29 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar29;
  dVar29 = (param_1->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar29;
  dVar29 = (param_1->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar29;
  local_2b8.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  local_2b8.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
LAB_14cf15b16:
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_2b8.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_2b8.Scale3D.ZW.m128d_f64[1];
  return __return_storage_ptr__;
}

// StaticRegisterNativesUDEPRECATED_RootMotionModifier_SimpleWarp @ 14cf1bd40

void __cdecl
UDEPRECATED_RootMotionModifier_SimpleWarp::
StaticRegisterNativesUDEPRECATED_RootMotionModifier_SimpleWarp(void)

{
  return;
}

