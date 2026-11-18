// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 14

// StaticClass @ 14cefdf80

UClass * __cdecl URootMotionModifier_Warp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_Warp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_Warp",
               &Z_Registration_Info_UClass_URootMotionModifier_Warp.InnerSingleton,
               StaticRegisterNativesURootMotionModifier_Warp,0x370,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URootMotionModifier_Warp>,
               InternalVTableHelperCtorCaller<URootMotionModifier_Warp>,local_res8,
               URootMotionModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_Warp.InnerSingleton;
}

// URootMotionModifier_Warp @ 14cf053a0

URootMotionModifier_Warp * __thiscall
URootMotionModifier_Warp::URootMotionModifier_Warp
          (URootMotionModifier_Warp *this,FVTableHelper *param_1)

{
  double dVar1;
  double dVar2;
  
  URootMotionModifier::URootMotionModifier((URootMotionModifier *)this,param_1);
  *(undefined ***)this = &___7URootMotionModifier_Warp__6B_;
  (this->WarpTargetName).ComparisonIndex = 0;
  (this->WarpTargetName).Number = 0;
  this->WarpPointAnimProvider = None;
  *&(this->WarpPointAnimTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->WarpPointAnimTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->WarpPointAnimTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->WarpPointAnimTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->WarpPointAnimTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->WarpPointAnimTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->WarpPointAnimBoneName).ComparisonIndex = 0;
  (this->WarpPointAnimBoneName).Number = 0;
  (this->AddTranslationEasingCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  this->bWarpTranslation = true;
  this->bIgnoreZAxis = true;
  this->bWarpToFeetLocation = true;
  this->AddTranslationEasingFunc = HermiteCubic;
  this->bWarpRotation = true;
  this->RotationType = Default;
  this->RotationMethod = Slerp;
  this->bSubtractRemainingRootMotion = false;
  this->WarpRotationTimeMultiplier = 1.0;
  this->WarpMaxRotationRate = 0.0;
  *&(this->CachedTargetTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->CachedTargetTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->CachedTargetTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->CachedTargetTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->CachedTargetTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->CachedTargetTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->RootMotionRemainingAfterNotify).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->RootMotionRemainingAfterNotify).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->RootMotionRemainingAfterNotify).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->RootMotionRemainingAfterNotify).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->RootMotionRemainingAfterNotify).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->RootMotionRemainingAfterNotify).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->CachedOffsetFromWarpPoint).bIsSet = false;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  (this->RotationOffset).X = UE::Math::TQuat<double>::Identity.X;
  (this->RotationOffset).Y = dVar1;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  dVar1 = UE::Math::TQuat<double>::Identity.Z;
  this->bWarpingPaused = false;
  this->bRootMotionPaused = false;
  (this->RotationOffset).Z = dVar1;
  (this->RotationOffset).W = dVar2;
  return this;
}

// URootMotionModifier_Warp @ 14cf05530

URootMotionModifier_Warp * __thiscall
URootMotionModifier_Warp::URootMotionModifier_Warp
          (URootMotionModifier_Warp *this,FObjectInitializer *param_1)

{
  double dVar1;
  double dVar2;
  
  URootMotionModifier::URootMotionModifier((URootMotionModifier *)this,param_1);
  *(undefined ***)this = &___7URootMotionModifier_Warp__6B_;
  (this->WarpTargetName).ComparisonIndex = 0;
  (this->WarpTargetName).Number = 0;
  this->WarpPointAnimProvider = None;
  *&(this->WarpPointAnimTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->WarpPointAnimTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->WarpPointAnimTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->WarpPointAnimTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->WarpPointAnimTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->WarpPointAnimTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->WarpPointAnimBoneName).ComparisonIndex = 0;
  (this->WarpPointAnimBoneName).Number = 0;
  (this->AddTranslationEasingCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  this->bWarpTranslation = true;
  this->bIgnoreZAxis = true;
  this->bWarpToFeetLocation = true;
  this->AddTranslationEasingFunc = HermiteCubic;
  this->bWarpRotation = true;
  this->RotationType = Default;
  this->RotationMethod = Slerp;
  this->bSubtractRemainingRootMotion = false;
  this->WarpRotationTimeMultiplier = 1.0;
  this->WarpMaxRotationRate = 0.0;
  *&(this->CachedTargetTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->CachedTargetTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->CachedTargetTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->CachedTargetTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->CachedTargetTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->CachedTargetTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->RootMotionRemainingAfterNotify).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->RootMotionRemainingAfterNotify).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->RootMotionRemainingAfterNotify).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->RootMotionRemainingAfterNotify).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->RootMotionRemainingAfterNotify).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->RootMotionRemainingAfterNotify).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->CachedOffsetFromWarpPoint).bIsSet = false;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  (this->RotationOffset).X = UE::Math::TQuat<double>::Identity.X;
  (this->RotationOffset).Y = dVar1;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  dVar1 = UE::Math::TQuat<double>::Identity.Z;
  this->bWarpingPaused = false;
  this->bRootMotionPaused = false;
  (this->RotationOffset).Z = dVar1;
  (this->RotationOffset).W = dVar2;
  return this;
}

// ~URootMotionModifier_Warp @ 14cf05be0

void __thiscall URootMotionModifier_Warp::~URootMotionModifier_Warp(URootMotionModifier_Warp *this)

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

// GetPrivateStaticClass @ 14cf10e00

UClass * __cdecl URootMotionModifier_Warp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_Warp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_Warp",
               &Z_Registration_Info_UClass_URootMotionModifier_Warp.InnerSingleton,
               StaticRegisterNativesURootMotionModifier_Warp,0x370,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URootMotionModifier_Warp>,
               InternalVTableHelperCtorCaller<URootMotionModifier_Warp>,local_res8,
               URootMotionModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_Warp.InnerSingleton;
}

// GetTargetRotation @ 14cf11020

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

TQuat<double> * __thiscall
URootMotionModifier_Warp::GetTargetRotation
          (URootMotionModifier_Warp *this,TQuat<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EMotionWarpRotationType EVar5;
  USceneComponent *pUVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  TTransform<double> *pTVar20;
  bool bVar21;
  TQuat<double> *pTVar22;
  AActor *pAVar23;
  VectorRegister4Double *pVVar24;
  TMatrix<double> *pTVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auStack_3b8 [32];
  TVector<double>_u_0 local_398;
  TVector<double>_u_0 local_380;
  TVector<double>_u_0 local_368;
  TVector<double>_u_0 local_350;
  TVector<double>_u_0 local_328;
  TVector<double>_u_0 local_308;
  TQuat<double> local_2e8;
  TQuat<double> local_2c8;
  TVector<double> local_2a8 [5];
  TQuat<double> local_228;
  TQuat<double> local_208;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  EVar5 = this->RotationType;
  if (EVar5 == Default) {
    dVar29 = (this->CachedTargetTransform).Rotation.XY.m128d_f64[1];
    dVar10 = (this->CachedTargetTransform).Rotation.ZW.m128d_f64[0];
    dVar13 = (this->CachedTargetTransform).Rotation.ZW.m128d_f64[1];
    __return_storage_ptr__->X = (this->CachedTargetTransform).Rotation.XY.m128d_f64[0];
    __return_storage_ptr__->Y = dVar29;
    __return_storage_ptr__->Z = dVar10;
    __return_storage_ptr__->W = dVar13;
    return __return_storage_ptr__;
  }
  if (EVar5 != Facing) {
    if (EVar5 == OppositeDefault) {
      local_2e8.X = (this->CachedTargetTransform).Rotation.XY.m128d_f64[0];
      local_2e8.Y = (this->CachedTargetTransform).Rotation.XY.m128d_f64[1];
      local_2e8.Z = (this->CachedTargetTransform).Rotation.ZW.m128d_f64[0];
      local_2e8.W = (this->CachedTargetTransform).Rotation.ZW.m128d_f64[1];
      local_328._s_0.Z = __real_3ff0000000000000;
      local_328._s_0.X = 0.0;
      local_328._s_0.Y = 0.0;
      UE::Math::TQuat<double>::RotateVector(&local_2e8,local_2a8,(TVector<double> *)&local_328._s_0)
      ;
      local_2c8.Z = (this->CachedTargetTransform).Rotation.ZW.m128d_f64[0];
      local_2c8.W = (this->CachedTargetTransform).Rotation.ZW.m128d_f64[1];
      local_2c8.X = (this->CachedTargetTransform).Rotation.XY.m128d_f64[0];
      local_2c8.Y = (this->CachedTargetTransform).Rotation.XY.m128d_f64[1];
      local_308._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_308._s_0.Y = _UNK_150689518;
      local_308._s_0.Z = 0.0;
      UE::Math::TQuat<double>::RotateVector
                (&local_2c8,(TVector<double> *)&local_368._s_0,(TVector<double> *)&local_308._s_0);
      local_350._0_4_ = local_368._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
      local_350._4_4_ = local_368._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
      local_350._8_4_ = local_368._8_4_ ^ _UNK_15066df78;
      local_350._12_4_ = local_368._12_4_ ^ _UNK_15066df7c;
      local_350._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)local_368._16_8_ >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(local_368._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000
                           );
      pTVar25 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                          (&local_168,(TVector<double> *)&local_350._s_0,local_2a8);
      UE::Math::TMatrix<double>::ToQuat(pTVar25,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    if (EVar5 != OppositeFacing) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier.cpp"
                          ,0x1c3,L"");
      if (bVar21) {
        pcVar7 = (code *)swi(3);
        pTVar22 = (TQuat<double> *)(*pcVar7)();
        return pTVar22;
      }
LAB_14cf110ba:
      dVar29 = UE::Math::TQuat<double>::Identity.Y;
      __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
      __return_storage_ptr__->Y = dVar29;
      dVar29 = UE::Math::TQuat<double>::Identity.W;
      __return_storage_ptr__->Z = UE::Math::TQuat<double>::Identity.Z;
      __return_storage_ptr__->W = dVar29;
      return __return_storage_ptr__;
    }
    pAVar23 = URootMotionModifier::GetActorOwner((URootMotionModifier *)this);
    if (pAVar23 == (AActor *)0x0) goto LAB_14cf110ba;
    pUVar6 = (pAVar23->RootComponent).field0_0x0.DebugPtr;
    if (pUVar6 == (USceneComponent *)0x0) {
      pTVar20 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar20 = &pUVar6->ComponentToWorld;
    }
    pVVar24 = &pTVar20->Translation;
    local_398._s_0.X =
         (pVVar24->XY).m128d_f64[0] - (this->CachedTargetTransform).Translation.XY.m128d_f64[0];
    local_398._s_0.Z =
         (pVVar24->ZW).m128d_f64[0] - (this->CachedTargetTransform).Translation.ZW.m128d_f64[0];
    local_398._s_0.Y =
         (pVVar24->XY).m128d_f64[1] - (this->CachedTargetTransform).Translation.XY.m128d_f64[1];
    dVar29 = local_398._s_0.Y * local_398._s_0.Y + local_398._s_0.X * local_398._s_0.X;
    if (dVar29 == __real_3ff0000000000000) {
      if (local_398._s_0.Z == 0.0) goto LAB_14cf1120a;
    }
    else {
      if (dVar29 < __real_3e45798ee0000000) {
        local_398._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_398._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_398._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        goto LAB_14cf1120a;
      }
      local_398._s_0.X = local_398._s_0.X * (__real_3ff0000000000000 / SQRT(dVar29));
      local_398._s_0.Y = local_398._s_0.Y * (__real_3ff0000000000000 / SQRT(dVar29));
    }
    local_398._s_0.Z = 0.0;
LAB_14cf1120a:
    pTVar25 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                        (&local_1e8,(TVector<double> *)&local_398._s_0,
                         &UE::Math::TVector<double>::UpVector);
    pTVar22 = UE::Math::TMatrix<double>::ToQuat(pTVar25,&local_228);
    dVar14 = (this->RotationOffset).X;
    dVar15 = (this->RotationOffset).Y;
    uVar1 = (this->RotationOffset).Z;
    uVar3 = (this->RotationOffset).W;
    dVar16 = pTVar22->Z;
    dVar17 = pTVar22->W;
    dVar18 = pTVar22->X;
    dVar19 = pTVar22->Y;
    auVar26._8_4_ = (int)uVar1;
    auVar26._0_8_ = uVar1;
    auVar26._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
    dVar29 = dVar14 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar18 * (double)uVar3 +
             dVar16 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             (double)uVar1 * dVar19 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar10 = dVar14 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar19 * (double)uVar3 +
             dVar17 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar26._8_8_ * dVar18 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar13 = dVar14 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar16 * (double)uVar3 +
             dVar18 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             (double)uVar1 * dVar17 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar14 = dVar14 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar17 * (double)uVar3 +
             dVar19 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             (double)uVar1 * dVar16 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar8._8_4_ = SUB84(dVar10,0);
    auVar8._0_8_ = dVar29;
    auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    __return_storage_ptr__->X = dVar29;
    __return_storage_ptr__->Y = (double)auVar8._8_8_;
    auVar12._8_4_ = SUB84(dVar14,0);
    auVar12._0_8_ = dVar13;
    auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    __return_storage_ptr__->Z = dVar13;
    __return_storage_ptr__->W = (double)auVar12._8_8_;
    return __return_storage_ptr__;
  }
  pAVar23 = URootMotionModifier::GetActorOwner((URootMotionModifier *)this);
  if (pAVar23 == (AActor *)0x0) goto LAB_14cf110ba;
  pUVar6 = (pAVar23->RootComponent).field0_0x0.DebugPtr;
  if (pUVar6 == (USceneComponent *)0x0) {
    pTVar20 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar20 = &pUVar6->ComponentToWorld;
  }
  pVVar24 = &pTVar20->Translation;
  local_380._s_0.X =
       (this->CachedTargetTransform).Translation.XY.m128d_f64[0] - (pVVar24->XY).m128d_f64[0];
  local_380._s_0.Z =
       (this->CachedTargetTransform).Translation.ZW.m128d_f64[0] - (pVVar24->ZW).m128d_f64[0];
  local_380._s_0.Y =
       (this->CachedTargetTransform).Translation.XY.m128d_f64[1] - (pVVar24->XY).m128d_f64[1];
  dVar29 = local_380._s_0.Y * local_380._s_0.Y + local_380._s_0.X * local_380._s_0.X;
  if (dVar29 == __real_3ff0000000000000) {
    if (local_380._s_0.Z == 0.0) goto LAB_14cf114b2;
  }
  else {
    if (dVar29 < __real_3e45798ee0000000) {
      local_380._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_380._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_380._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_14cf114b2;
    }
    local_380._s_0.X = local_380._s_0.X * (__real_3ff0000000000000 / SQRT(dVar29));
    local_380._s_0.Y = local_380._s_0.Y * (__real_3ff0000000000000 / SQRT(dVar29));
  }
  local_380._s_0.Z = 0.0;
LAB_14cf114b2:
  pTVar25 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                      (&local_e8,(TVector<double> *)&local_380._s_0,
                       &UE::Math::TVector<double>::UpVector);
  pTVar22 = UE::Math::TMatrix<double>::ToQuat(pTVar25,&local_208);
  dVar14 = (this->RotationOffset).X;
  dVar15 = (this->RotationOffset).Y;
  uVar2 = (this->RotationOffset).Z;
  uVar4 = (this->RotationOffset).W;
  dVar16 = pTVar22->Z;
  dVar17 = pTVar22->W;
  dVar18 = pTVar22->X;
  dVar19 = pTVar22->Y;
  auVar27._8_4_ = (int)uVar4;
  auVar27._0_8_ = uVar4;
  auVar27._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  auVar28._8_4_ = (int)uVar2;
  auVar28._0_8_ = uVar2;
  auVar28._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  dVar29 = dVar14 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           (double)uVar4 * dVar18 +
           dVar15 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           (double)uVar2 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar10 = dVar14 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           auVar27._8_8_ * dVar19 +
           dVar15 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           auVar28._8_8_ * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar13 = dVar14 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           (double)uVar4 * dVar16 +
           dVar15 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           (double)uVar2 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar14 = dVar14 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           (double)uVar4 * dVar17 +
           dVar15 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           (double)uVar2 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = dVar29;
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  __return_storage_ptr__->X = dVar29;
  __return_storage_ptr__->Y = (double)auVar9._8_8_;
  auVar11._8_4_ = SUB84(dVar14,0);
  auVar11._0_8_ = dVar13;
  auVar11._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  __return_storage_ptr__->Z = dVar13;
  __return_storage_ptr__->W = (double)auVar11._8_8_;
  return __return_storage_ptr__;
}

// OnStateChanged @ 14cf13160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
URootMotionModifier_Warp::OnStateChanged
          (URootMotionModifier_Warp *this,ERootMotionModifierState param_1)

{
  float fVar1;
  double dVar2;
  UObject *pUVar3;
  UAnimSequenceBase *pUVar4;
  TTransform<double> *pTVar5;
  float fVar6;
  undefined1 auStack_b8 [32];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  URootMotionModifier::OnStateChanged((URootMotionModifier *)this,param_1);
  if (this->bSubtractRemainingRootMotion != false) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    fVar6 = (float)(**(code **)(*(longlong *)pUVar3 + 0x2c0))(pUVar3);
    fVar1 = *(float *)&this->field_0x34;
    pUVar4 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    pTVar5 = UMotionWarpingUtilities::ExtractRootMotionFromAnimation(&local_98,pUVar4,fVar1,fVar6);
    dVar2 = (pTVar5->Rotation).XY.m128d_f64[1];
    (this->RootMotionRemainingAfterNotify).Rotation.XY.m128d_f64[0] =
         (pTVar5->Rotation).XY.m128d_f64[0];
    (this->RootMotionRemainingAfterNotify).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Rotation).ZW.m128d_f64[1];
    (this->RootMotionRemainingAfterNotify).Rotation.ZW.m128d_f64[0] =
         (pTVar5->Rotation).ZW.m128d_f64[0];
    (this->RootMotionRemainingAfterNotify).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Translation).XY.m128d_f64[1];
    (this->RootMotionRemainingAfterNotify).Translation.XY.m128d_f64[0] =
         (pTVar5->Translation).XY.m128d_f64[0];
    (this->RootMotionRemainingAfterNotify).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Translation).ZW.m128d_f64[1];
    (this->RootMotionRemainingAfterNotify).Translation.ZW.m128d_f64[0] =
         (pTVar5->Translation).ZW.m128d_f64[0];
    (this->RootMotionRemainingAfterNotify).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Scale3D).XY.m128d_f64[1];
    (this->RootMotionRemainingAfterNotify).Scale3D.XY.m128d_f64[0] =
         (pTVar5->Scale3D).XY.m128d_f64[0];
    (this->RootMotionRemainingAfterNotify).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Scale3D).ZW.m128d_f64[1];
    (this->RootMotionRemainingAfterNotify).Scale3D.ZW.m128d_f64[0] =
         (pTVar5->Scale3D).ZW.m128d_f64[0];
    (this->RootMotionRemainingAfterNotify).Scale3D.ZW.m128d_f64[1] = dVar2;
  }
  return;
}

// OnTargetTransformChanged @ 14cf134e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall URootMotionModifier_Warp::OnTargetTransformChanged(URootMotionModifier_Warp *this)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UClass *pUVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar7 = *(longlong *)&this->field_0x20;
  if (lVar7 != 0) {
    pUVar6 = UMotionWarpingComponent::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      plVar8 = *(longlong **)(lVar7 + 0xe0);
      goto LAB_14cf13524;
    }
  }
  plVar8 = (longlong *)0x0;
LAB_14cf13524:
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)&this->field_0xb0 = *(undefined4 *)&this->field_0x38;
    lVar7 = (**(code **)(*plVar8 + 0x2b0))(plVar8);
    lVar7 = *(longlong *)(lVar7 + 0x1b8);
    if (lVar7 == 0) {
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = ___xmm_3ff00000000000000000000000000000;
      uVar14 = _UNK_15061cbc8;
    }
    else {
      uVar9 = *(undefined4 *)(lVar7 + 0x1f0);
      uVar10 = *(undefined4 *)(lVar7 + 500);
      uVar11 = *(undefined4 *)(lVar7 + 0x1f8);
      uVar12 = *(undefined4 *)(lVar7 + 0x1fc);
      uVar13 = *(undefined8 *)(lVar7 + 0x200);
      uVar14 = *(undefined8 *)(lVar7 + 0x208);
    }
    (**(code **)(*plVar8 + 0x2c0))(plVar8,&local_48);
    uVar5 = _UNK_150689688;
    uVar4 = ___xmm_3ff00000000000003ff0000000000000;
    uVar3 = _UNK_150689518;
    uVar2 = ___xmm_00000000000000003ff0000000000000;
    *(undefined4 *)&this->field_0x50 = uVar9;
    *(undefined4 *)&this->field_0x54 = uVar10;
    *(undefined4 *)&this->field_0x58 = uVar11;
    *(undefined4 *)&this->field_0x5c = uVar12;
    *(undefined8 *)&this->field_0x60 = uVar13;
    *(undefined8 *)&this->field_0x68 = uVar14;
    *(undefined8 *)&this->field_0x70 = local_48;
    *(undefined8 *)&this->field_0x78 = uStack_40;
    *(undefined8 *)&this->field_0x80 = local_38;
    *(undefined8 *)&this->field_0x88 = 0;
    *(undefined8 *)&this->field_0x90 = uVar4;
    *(undefined8 *)&this->field_0x98 = uVar5;
    *(undefined8 *)&this->field_0xa0 = uVar2;
    *(undefined8 *)&this->field_0xa8 = uVar3;
  }
  return;
}

// PrintLog @ 14cf14830

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

void __thiscall
URootMotionModifier_Warp::PrintLog
          (URootMotionModifier_Warp *this,FString *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  USceneComponent *pUVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  UClass *pUVar23;
  AActor *this_00;
  USkeletalMeshComponent *this_01;
  double *pdVar24;
  TTransform<double> *pTVar25;
  TVector<double> *pTVar26;
  UWorld *pUVar27;
  FString *pFVar28;
  UObject *pUVar29;
  ForAnyElementType FVar30;
  wchar_t *pwVar31;
  ForAnyElementType FVar32;
  wchar_t *pwVar33;
  double dVar34;
  undefined4 uVar35;
  double dVar36;
  undefined4 uVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  undefined1 auStack_378 [32];
  FScriptContainerElement *local_358;
  FScriptContainerElement *local_350;
  undefined8 local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  FScriptContainerElement *local_2e8;
  double local_2e0;
  FScriptContainerElement *local_2d8;
  double local_2d0;
  double local_2c8;
  FScriptContainerElement *local_2c0;
  FScriptContainerElement *local_2b8;
  FScriptContainerElement *local_2b0;
  FScriptContainerElement *local_2a8;
  FName local_298 [2];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  float local_268;
  double local_260;
  TRotator<double> local_258;
  undefined1 local_238 [16];
  FString local_228;
  FScriptContainerElement *local_218;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  double local_1f8;
  double local_1f0;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198 [2];
  double local_178;
  TRotator<double> local_170;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStack_378;
  lVar9 = *(longlong *)&this->field_0x20;
  if (lVar9 == 0) {
    return;
  }
  local_298[0] = (FName)param_2;
  pUVar23 = UMotionWarpingComponent::StaticClass();
  iVar8 = (int)pUVar23->_padding_;
  if (*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar8) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
      &pUVar23->_padding_) {
    return;
  }
  plVar10 = *(longlong **)(lVar9 + 0xe0);
  if (plVar10 == (longlong *)0x0) {
    return;
  }
  this_00 = (AActor *)(**(code **)(*plVar10 + 0x2b0))(plVar10);
  this_01 = (USkeletalMeshComponent *)(**(code **)(*plVar10 + 0x2b8))(plVar10);
  pdVar24 = (double *)(**(code **)(*plVar10 + 0x2c0))(plVar10,&local_258);
  dVar5 = pdVar24[2];
  dVar15 = *pdVar24;
  dVar12 = pdVar24[1];
  if (this_00 == (AActor *)0x0) {
    return;
  }
  if (this_01 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  local_258.Roll = (this->CachedTargetTransform).Translation.ZW.m128d_f64[0];
  dVar38 = (this->CachedTargetTransform).Translation.XY.m128d_f64[0] - dVar15;
  dVar36 = (this->CachedTargetTransform).Translation.XY.m128d_f64[1] - dVar12;
  uVar14 = local_258.Roll - dVar5;
  uVar37 = (undefined4)((ulonglong)dVar36 >> 0x20);
  local_278._0_8_ = uVar14;
  dVar34 = dVar36 * dVar36 + dVar38 * dVar38;
  if (dVar34 == __real_3ff0000000000000) {
    if ((double)uVar14 == 0.0) {
      uVar35 = SUB84(dVar36,0);
      goto LAB_14cf14a47;
    }
  }
  else {
    if (dVar34 < __real_3e45798ee0000000) {
      uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_278._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_14cf14a47;
    }
    dVar34 = __real_3ff0000000000000 / SQRT(dVar34);
    local_238._0_8_ = dVar34;
    dVar38 = dVar38 * dVar34;
    dVar36 = dVar36 * dVar34;
  }
  uVar35 = SUB84(dVar36,0);
  uVar37 = (undefined4)((ulonglong)dVar36 >> 0x20);
  uVar14 = 0.0;
LAB_14cf14a47:
  local_178 = dVar5;
  pTVar25 = USkeletalMeshComponent::ConvertLocalRootMotionToWorld(this_01,&local_158,param_3);
  auVar7 = *(undefined1 (*) [16])(pTVar25->Translation).ZW.m128d_f64;
  dVar34 = (pTVar25->Translation).XY.m128d_f64[1];
  local_258.Roll = auVar7._0_8_;
  local_260 = (pTVar25->Translation).XY.m128d_f64[0] + dVar15;
  local_238._8_4_ = auVar7._8_4_;
  local_238._0_8_ = local_258.Roll + dVar5;
  local_238._12_4_ = auVar7._12_4_;
  AActor::GetActorRotation(this_00,&local_258);
  pUVar11 = (this_00->RootComponent).field0_0x0.DebugPtr;
  dVar5 = (param_3->Rotation).XY.m128d_f64[0];
  dVar36 = (param_3->Rotation).XY.m128d_f64[1];
  dVar16 = (param_3->Rotation).ZW.m128d_f64[0];
  dVar18 = (param_3->Rotation).ZW.m128d_f64[1];
  if (pUVar11 == (USceneComponent *)0x0) {
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    dVar43 = ___xmm_3ff00000000000000000000000000000;
    dVar44 = _UNK_15061cbc8;
  }
  else {
    uVar39 = *(undefined4 *)(pUVar11->ComponentToWorld).Rotation.XY.m128d_f64;
    uVar40 = *(undefined4 *)((longlong)(pUVar11->ComponentToWorld).Rotation.XY.m128d_f64 + 4);
    uVar41 = *(undefined4 *)((pUVar11->ComponentToWorld).Rotation.XY.m128d_f64 + 1);
    uVar42 = *(undefined4 *)((longlong)(pUVar11->ComponentToWorld).Rotation.XY.m128d_f64 + 0xc);
    dVar43 = (pUVar11->ComponentToWorld).Rotation.ZW.m128d_f64[0];
    dVar44 = (pUVar11->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  }
  dVar13 = dVar16 * (double)CONCAT44(uVar40,uVar39) *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1] +
           dVar44 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar5 * dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           (double)CONCAT44(uVar42,uVar41) * dVar18;
  dVar17 = dVar16 * dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1] +
           (double)CONCAT44(uVar42,uVar41) * dVar36 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar5 * (double)CONCAT44(uVar40,uVar39) *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar44 * dVar18;
  local_288._8_4_ = SUB84(dVar13,0);
  local_288._0_8_ =
       dVar16 * (double)CONCAT44(uVar42,uVar41) *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0] +
       dVar43 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar5 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       (double)CONCAT44(uVar40,uVar39) * dVar18;
  local_288._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  local_278._8_4_ = SUB84(dVar17,0);
  local_278._0_8_ =
       dVar16 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0] +
       (double)CONCAT44(uVar40,uVar39) * dVar36 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar5 * (double)CONCAT44(uVar42,uVar41) *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar43 * dVar18;
  local_278._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_288,&local_170);
  pUVar11 = (this_00->RootComponent).field0_0x0.DebugPtr;
  if (pUVar11 == (USceneComponent *)0x0) {
    pTVar26 = (TVector<double> *)local_288;
    local_288._8_8_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    local_288._0_8_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    local_278._0_8_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar26 = USceneComponent::GetForwardVector(pUVar11,(TVector<double> *)local_288);
  }
  dVar18 = (pTVar26->field0_0x0)._s_0.X;
  dVar43 = (pTVar26->field0_0x0)._s_0.Y;
  dVar5 = (pTVar26->field0_0x0)._s_0.Z;
  dVar15 = dVar15 - (this->CachedTargetTransform).Translation.XY.m128d_f64[0];
  dVar36 = dVar12 - (this->CachedTargetTransform).Translation.XY.m128d_f64[1];
  dVar16 = local_260 - (this->CachedTargetTransform).Translation.XY.m128d_f64[0];
  local_278._0_8_ = (this->CachedTargetTransform).Translation.ZW.m128d_f64[0];
  dVar12 = (dVar34 + dVar12) - (this->CachedTargetTransform).Translation.XY.m128d_f64[1];
  local_260 = (double)CONCAT44(local_260._4_4_,(float)SQRT(dVar12 * dVar12 + dVar16 * dVar16));
  pUVar27 = AActor::GetWorld(this_00);
  dVar12 = (param_3->Translation).XY.m128d_f64[0];
  dVar34 = (param_3->Translation).XY.m128d_f64[1];
  local_278._0_8_ = (param_3->Translation).ZW.m128d_f64[0];
  fVar1 = pUVar27->DeltaTimeSeconds;
  fVar2 = *(float *)&this->field_0x3c;
  fVar3 = *(float *)&this->field_0x34;
  local_268 = (float)(SQRT(dVar12 * dVar12 + dVar34 * dVar34 +
                           (double)local_278._0_8_ * (double)local_278._0_8_) *
                     (__real_3ff0000000000000 / (double)fVar1));
  if (4 < (byte)LogMotionWarping._0_1_) {
    pFVar28 = UE::Math::TRotator<double>::ToCompactString(&local_170,(FString *)local_288);
    if ((pFVar28->Data).ArrayNum == 0) {
      pwVar31 = L"";
    }
    else {
      pwVar31 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
    }
    pFVar28 = UE::Math::TRotator<double>::ToCompactString(&local_258,local_198);
    if ((pFVar28->Data).ArrayNum == 0) {
      pwVar33 = L"";
    }
    else {
      pwVar33 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
    }
    uVar22 = local_238._0_8_;
    local_358 = (FScriptContainerElement *)local_238._0_8_;
    ::FString::PrintfImpl(&local_1a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    dVar12 = local_178;
    local_358 = (FScriptContainerElement *)local_178;
    local_218 = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      local_218 = local_1a8.Data.AllocatorInstance.Data;
    }
    ::FString::PrintfImpl(&local_1b8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    dVar34 = (param_3->Translation).XY.m128d_f64[0];
    dVar16 = (param_3->Translation).XY.m128d_f64[1];
    dVar44 = (param_3->Translation).ZW.m128d_f64[0];
    local_210 = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      local_210 = local_1b8.Data.AllocatorInstance.Data;
    }
    local_358 = (FScriptContainerElement *)(param_3->Translation).ZW.m128d_f64[0];
    ::FString::PrintfImpl(&local_1c8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    local_208 = (FScriptContainerElement *)L"";
    if (local_1c8.Data.ArrayNum != 0) {
      local_208 = local_1c8.Data.AllocatorInstance.Data;
    }
    dVar13 = (((VectorRegister4Double *)((longlong)local_298[0] + 0x20))->XY).m128d_f64[0];
    dVar17 = *(double *)((longlong)local_298[0] + 0x28);
    dVar19 = ((__m128d *)((longlong)local_298[0] + 0x30))->m128d_f64[0];
    local_358 = (FScriptContainerElement *)
                ((__m128d *)((longlong)local_298[0] + 0x30))->m128d_f64[0];
    ::FString::PrintfImpl(&local_1d8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    local_200 = (FScriptContainerElement *)L"";
    if (local_1d8.Data.ArrayNum != 0) {
      local_200 = local_1d8.Data.AllocatorInstance.Data;
    }
    dVar20 = (this->CachedTargetTransform).Translation.ZW.m128d_f64[0];
    dVar21 = (this->CachedTargetTransform).Translation.ZW.m128d_f64[0];
    pUVar27 = AActor::GetWorld(this_00);
    fVar4 = *(float *)&this->field_0x3c;
    local_1f8 = (double)*(float *)&this->field_0x38;
    dVar6 = pUVar27->TimeSeconds;
    local_1f0 = (double)*(float *)&this->field_0x34;
    local_238._0_8_ = (double)*(float *)&this->field_0x30;
    pUVar29 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    if (pUVar29 == (UObject *)0x0) {
      ::FString::FString(&local_228,L"None");
    }
    else {
      local_298[0].ComparisonIndex.Value = *(uint *)&pUVar29->field_0x18;
      local_298[0].Number = *(uint *)&pUVar29->field_0x1c;
      ::FName::ToString(local_298,&local_228);
    }
    local_298[0] = (FName)this_00->_padding_;
    FVar30.Data = (FScriptContainerElement *)L"";
    if (local_228.Data.ArrayNum != 0) {
      FVar30.Data = local_228.Data.AllocatorInstance.Data;
    }
    ::FName::ToString(local_298,&local_1e8);
    FVar32.Data = (FScriptContainerElement *)L"";
    if (local_1e8.Data.ArrayNum != 0) {
      FVar32.Data = local_1e8.Data.AllocatorInstance.Data;
    }
    pUVar27 = AActor::GetWorld(this_00);
    UWorld::InternalGetNetMode(pUVar27);
    local_2b8 = local_218;
    local_2c0 = local_210;
    local_2c8 = (double)local_268;
    local_2f0 = (double)(float)(dVar43 * (double)CONCAT44(uVar37,uVar35) + dVar18 * dVar38 +
                               dVar5 * (double)uVar14);
    local_2d8 = local_208;
    local_2e8 = local_200;
    local_300 = (double)local_260._0_4_;
    local_310 = (double)(float)SQRT(dVar36 * dVar36 + dVar15 * dVar15);
    local_318 = (double)(fVar2 - fVar3);
    local_338 = local_1f8;
    local_340 = local_1f0;
    local_348 = local_238._0_8_;
    local_358 = FVar32.Data;
    local_350 = FVar30.Data;
    local_330 = (double)fVar4;
    local_328 = (double)fVar1;
    local_320 = dVar6;
    local_308 = dVar21 - dVar12;
    local_2f8 = dVar20 - (double)uVar22;
    local_2e0 = SQRT(dVar13 * dVar13 + dVar17 * dVar17 + dVar19 * dVar19);
    local_2d0 = SQRT(dVar34 * dVar34 + dVar16 * dVar16 + dVar44 * dVar44);
    local_2b0 = (FScriptContainerElement *)pwVar33;
    local_2a8 = (FScriptContainerElement *)pwVar31;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (local_198[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198[0].Data.AllocatorInstance.Data);
    }
    if ((void *)local_288._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_288._0_8_);
    }
  }
  return;
}

// Serialize @ 14cf1b7d0

void __thiscall
URootMotionModifier_Warp::Serialize(URootMotionModifier_Warp *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xd6) {
      this->AddTranslationEasingFunc = Linear;
    }
  }
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 14cf1b840

void __thiscall
URootMotionModifier_Warp::Serialize(URootMotionModifier_Warp *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xd6) {
      this->AddTranslationEasingFunc = Linear;
    }
  }
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  return;
}

// StaticRegisterNativesURootMotionModifier_Warp @ 14cf1c020

void __cdecl URootMotionModifier_Warp::StaticRegisterNativesURootMotionModifier_Warp(void)

{
  return;
}

// Update @ 14cf1ca50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
URootMotionModifier_Warp::Update
          (URootMotionModifier_Warp *this,FMotionWarpingUpdateContext *param_1)

{
  float fVar1;
  EWarpPointAnimProvider EVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  int iVar22;
  undefined4 extraout_EAX;
  UClass *pUVar23;
  UObject *pUVar24;
  TQuat<double> *pTVar25;
  UMotionWarpingBaseAdapter *pUVar26;
  UAnimSequenceBase *pUVar27;
  TTransform<double> *pTVar28;
  TQuat<double> *extraout_RAX;
  undefined4 uVar29;
  uint uVar30;
  uint uVar31;
  FMotionWarpingTarget *pFVar32;
  TTransform<double> *pTVar33;
  FMotionWarpingTarget *this_01;
  longlong lVar34;
  longlong lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined1 auStackY_388 [32];
  FString local_338;
  FString local_328;
  FName local_318;
  FName local_310 [4];
  FString local_2f0;
  TQuat<double> local_2d8;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  TRotator<double> *this_00;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  URootMotionModifier::Update((URootMotionModifier *)this,param_1);
  lVar34 = *(longlong *)&this->field_0x20;
  if (lVar34 != 0) {
    pUVar23 = UMotionWarpingComponent::StaticClass();
    iVar22 = (int)pUVar23->_padding_;
    if (((iVar22 <= *(int *)(*(longlong *)(lVar34 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar34 + 0x10) + 0x30) + (longlong)iVar22 * 8)
         == &pUVar23->_padding_)) && (this->field_0x168 == '\x01')) {
      this_01 = *(FMotionWarpingTarget **)(lVar34 + 0xf8);
      pFVar32 = this_01 + *(int *)(lVar34 + 0x100);
      if (this_01 != pFVar32) {
        do {
          if (this_01->Name == this->WarpTargetName) {
            if (this_01 != (FMotionWarpingTarget *)0x0) {
              this->bRootMotionPaused = this_01->bRootMotionPaused;
              this->bWarpingPaused = this_01->bWarpingPaused;
              FMotionWarpingTarget::GetTargetTrasform(this_01,&local_258);
              this_00 = &this_01->RotationOffset;
              pTVar25 = UE::Math::TRotator<double>::Quaternion(this_00,&local_2d8);
              uVar29 = SUB84(this_00,0);
              EVar2 = this->WarpPointAnimProvider;
              dVar8 = pTVar25->Y;
              (this->RotationOffset).X = pTVar25->X;
              (this->RotationOffset).Y = dVar8;
              dVar8 = pTVar25->W;
              (this->RotationOffset).Z = pTVar25->Z;
              (this->RotationOffset).W = dVar8;
              uVar41 = local_258.Scale3D.XY.m128d_f64[0]._0_4_;
              uVar42 = local_258.Scale3D.XY.m128d_f64[0]._4_4_;
              uVar43 = local_258.Scale3D.XY.m128d_f64[1]._0_4_;
              uVar44 = local_258.Scale3D.XY.m128d_f64[1]._4_4_;
              uVar45 = local_258.Scale3D.ZW.m128d_f64[0]._0_4_;
              uVar46 = local_258.Scale3D.ZW.m128d_f64[0]._4_4_;
              uVar47 = local_258.Scale3D.ZW.m128d_f64[1]._0_4_;
              uVar48 = local_258.Scale3D.ZW.m128d_f64[1]._4_4_;
              uVar49 = local_258.Translation.XY.m128d_f64[0]._0_4_;
              uVar50 = local_258.Translation.XY.m128d_f64[0]._4_4_;
              uVar51 = local_258.Translation.XY.m128d_f64[1]._0_4_;
              uVar52 = local_258.Translation.XY.m128d_f64[1]._4_4_;
              uVar53 = local_258.Translation.ZW.m128d_f64[0]._0_4_;
              uVar54 = local_258.Translation.ZW.m128d_f64[0]._4_4_;
              uVar55 = local_258.Translation.ZW.m128d_f64[1]._0_4_;
              uVar56 = local_258.Translation.ZW.m128d_f64[1]._4_4_;
              uVar57 = local_258.Rotation.XY.m128d_f64[0]._0_4_;
              uVar58 = local_258.Rotation.XY.m128d_f64[0]._4_4_;
              uVar59 = local_258.Rotation.XY.m128d_f64[1]._0_4_;
              uVar60 = local_258.Rotation.XY.m128d_f64[1]._4_4_;
              uVar61 = local_258.Rotation.ZW.m128d_f64[0]._0_4_;
              uVar62 = local_258.Rotation.ZW.m128d_f64[0]._4_4_;
              uVar63 = local_258.Rotation.ZW.m128d_f64[1]._0_4_;
              uVar64 = local_258.Rotation.ZW.m128d_f64[1]._4_4_;
              if (EVar2 != None) {
                if ((this->CachedOffsetFromWarpPoint).bIsSet == false) {
                  pUVar26 = URootMotionModifier::GetOwnerAdapter((URootMotionModifier *)this);
                  if (pUVar26 != (UMotionWarpingBaseAdapter *)0x0) {
                    if (this->WarpPointAnimProvider == Static) {
                      fVar1 = *(float *)&this->field_0x34;
                      pUVar27 = (UAnimSequenceBase *)
                                FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
                      pTVar28 = UMotionWarpingUtilities::
                                CalculateRootTransformRelativeToWarpPointAtTime
                                          (&local_198,pUVar26,pUVar27,fVar1,
                                           &this->WarpPointAnimTransform);
                    }
                    else {
                      if (this->WarpPointAnimProvider != Bone) goto LAB_14cf1ccf6;
                      fVar1 = *(float *)&this->field_0x34;
                      pUVar27 = (UAnimSequenceBase *)
                                FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
                      pTVar28 = UMotionWarpingUtilities::
                                CalculateRootTransformRelativeToWarpPointAtTime
                                          (&local_138,pUVar26,pUVar27,fVar1,
                                           &this->WarpPointAnimBoneName);
                    }
                    if ((TOptional<UE::Math::TTransform<double>_> *)pTVar28 !=
                        &this->CachedOffsetFromWarpPoint) {
                      dVar8 = (pTVar28->Rotation).XY.m128d_f64[1];
                      (this->CachedOffsetFromWarpPoint).TypedValue.Rotation.XY.m128d_f64[0] =
                           (pTVar28->Rotation).XY.m128d_f64[0];
                      (this->CachedOffsetFromWarpPoint).TypedValue.Rotation.XY.m128d_f64[1] = dVar8;
                      dVar8 = (pTVar28->Rotation).ZW.m128d_f64[1];
                      (this->CachedOffsetFromWarpPoint).TypedValue.Rotation.ZW.m128d_f64[0] =
                           (pTVar28->Rotation).ZW.m128d_f64[0];
                      (this->CachedOffsetFromWarpPoint).TypedValue.Rotation.ZW.m128d_f64[1] = dVar8;
                      dVar8 = (pTVar28->Translation).XY.m128d_f64[1];
                      (this->CachedOffsetFromWarpPoint).TypedValue.Translation.XY.m128d_f64[0] =
                           (pTVar28->Translation).XY.m128d_f64[0];
                      (this->CachedOffsetFromWarpPoint).TypedValue.Translation.XY.m128d_f64[1] =
                           dVar8;
                      dVar8 = (pTVar28->Translation).ZW.m128d_f64[1];
                      (this->CachedOffsetFromWarpPoint).TypedValue.Translation.ZW.m128d_f64[0] =
                           (pTVar28->Translation).ZW.m128d_f64[0];
                      (this->CachedOffsetFromWarpPoint).TypedValue.Translation.ZW.m128d_f64[1] =
                           dVar8;
                      dVar8 = (pTVar28->Scale3D).XY.m128d_f64[1];
                      (this->CachedOffsetFromWarpPoint).TypedValue.Scale3D.XY.m128d_f64[0] =
                           (pTVar28->Scale3D).XY.m128d_f64[0];
                      (this->CachedOffsetFromWarpPoint).TypedValue.Scale3D.XY.m128d_f64[1] = dVar8;
                      dVar8 = (pTVar28->Scale3D).ZW.m128d_f64[1];
                      (this->CachedOffsetFromWarpPoint).TypedValue.Scale3D.ZW.m128d_f64[0] =
                           (pTVar28->Scale3D).ZW.m128d_f64[0];
                      (this->CachedOffsetFromWarpPoint).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar8;
                      (this->CachedOffsetFromWarpPoint).bIsSet = true;
                    }
                  }
LAB_14cf1ccf6:
                  if (((this->CachedOffsetFromWarpPoint).bIsSet == false) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsSet()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                          ,0x1bd,
                                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                         ), bVar21)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                pTVar28 = &local_2b8;
                local_2b8.Rotation.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                local_2b8.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_2b8.Rotation.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
                local_2b8.Rotation.ZW.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                local_2b8.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_2b8.Rotation.ZW.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
                local_2b8.Translation.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                local_2b8.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_2b8.Translation.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
                local_2b8.Translation.ZW.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                local_2b8.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_2b8.Translation.ZW.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
                local_2b8.Scale3D.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                local_2b8.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_2b8.Scale3D.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
                local_2b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                local_2b8.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_2b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
                UE::Math::TTransform<double>::Multiply
                          (pTVar28,&(this->CachedOffsetFromWarpPoint).TypedValue,&local_258);
                uVar29 = SUB84(pTVar28,0);
                pTVar25 = extraout_RAX;
                uVar41 = local_2b8.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar42 = local_2b8.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar43 = local_2b8.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar44 = local_2b8.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar45 = local_2b8.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar46 = local_2b8.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar47 = local_2b8.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar48 = local_2b8.Scale3D.ZW.m128d_f64[1]._4_4_;
                uVar49 = local_2b8.Translation.XY.m128d_f64[0]._0_4_;
                uVar50 = local_2b8.Translation.XY.m128d_f64[0]._4_4_;
                uVar51 = local_2b8.Translation.XY.m128d_f64[1]._0_4_;
                uVar52 = local_2b8.Translation.XY.m128d_f64[1]._4_4_;
                uVar53 = local_2b8.Translation.ZW.m128d_f64[0]._0_4_;
                uVar54 = local_2b8.Translation.ZW.m128d_f64[0]._4_4_;
                uVar55 = local_2b8.Translation.ZW.m128d_f64[1]._0_4_;
                uVar56 = local_2b8.Translation.ZW.m128d_f64[1]._4_4_;
                uVar57 = local_2b8.Rotation.XY.m128d_f64[0]._0_4_;
                uVar58 = local_2b8.Rotation.XY.m128d_f64[0]._4_4_;
                uVar59 = local_2b8.Rotation.XY.m128d_f64[1]._0_4_;
                uVar60 = local_2b8.Rotation.XY.m128d_f64[1]._4_4_;
                uVar61 = local_2b8.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar62 = local_2b8.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar63 = local_2b8.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar64 = local_2b8.Rotation.ZW.m128d_f64[1]._4_4_;
              }
              uVar20 = _UNK_15061cc8c;
              uVar19 = _UNK_15061cc88;
              uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              lVar34 = -(ulonglong)
                        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                        (double)CONCAT44(*(uint *)((longlong)
                                                   (this->RootMotionRemainingAfterNotify).Scale3D.XY
                                                   .m128d_f64 + 0xc) & _UNK_15061cc8c,
                                         *(uint *)((this->RootMotionRemainingAfterNotify).Scale3D.XY
                                                   .m128d_f64 + 1) & _UNK_15061cc88));
              lVar35 = -(ulonglong)
                        ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                        (double)CONCAT44(*(uint *)((longlong)
                                                   (this->RootMotionRemainingAfterNotify).Scale3D.ZW
                                                   .m128d_f64 + 0xc) & _UNK_15061cc8c,
                                         *(uint *)((this->RootMotionRemainingAfterNotify).Scale3D.ZW
                                                   .m128d_f64 + 1) & _UNK_15061cc88));
              auVar4._8_4_ = (int)lVar35;
              auVar4._0_8_ = -(ulonglong)
                              ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                              (double)CONCAT44(*(uint *)((longlong)
                                                         (this->RootMotionRemainingAfterNotify).
                                                         Scale3D.ZW.m128d_f64 + 4) &
                                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                               *(uint *)(this->RootMotionRemainingAfterNotify).
                                                        Scale3D.ZW.m128d_f64 &
                                               (uint)__xmm_7fffffffffffffff7fffffffffffffff));
              auVar4._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
              uVar30 = movmskpd(uVar29,auVar4);
              auVar6._8_4_ = (int)lVar34;
              auVar6._0_8_ = -(ulonglong)
                              ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                              (double)CONCAT44(*(uint *)((longlong)
                                                         (this->RootMotionRemainingAfterNotify).
                                                         Scale3D.XY.m128d_f64 + 4) &
                                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                               *(uint *)(this->RootMotionRemainingAfterNotify).
                                                        Scale3D.XY.m128d_f64 &
                                               (uint)__xmm_7fffffffffffffff7fffffffffffffff));
              auVar6._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
              iVar22 = movmskpd((int)pTVar25,auVar6);
              if ((uVar30 & 0x3fffffff) == 0 && iVar22 == 0) {
                local_1f8.Rotation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                local_1f8.Rotation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                local_1f8.Translation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                local_1f8.Translation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                local_1f8.Scale3D.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                local_1f8.Scale3D.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              }
              else {
                UE::Math::TTransform<double>::InverseFast
                          (&this->RootMotionRemainingAfterNotify,&local_1f8);
              }
              pTVar28 = &this->CachedTargetTransform;
              pTVar33 = pTVar28;
              UE::Math::TTransform<double>::Multiply(pTVar28,pTVar28,&local_1f8);
              dVar8 = (this->CachedTargetTransform).Translation.XY.m128d_f64[0] -
                      (double)CONCAT44(uVar50,uVar49);
              dVar9 = (this->CachedTargetTransform).Translation.XY.m128d_f64[1] -
                      (double)CONCAT44(uVar52,uVar51);
              dVar36 = (this->CachedTargetTransform).Translation.ZW.m128d_f64[0] -
                       (double)CONCAT44(uVar54,uVar53);
              dVar38 = (this->CachedTargetTransform).Translation.ZW.m128d_f64[1] -
                       (double)CONCAT44(uVar56,uVar55);
              lVar34 = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44(uVar20 & (uint)((ulonglong)dVar9 >> 0x20),
                                         uVar19 & SUB84(dVar9,0)));
              auVar10._8_4_ = (int)lVar34;
              auVar10._0_8_ =
                   -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44(uVar18 & (uint)((ulonglong)dVar8 >> 0x20),
                                     uVar17 & SUB84(dVar8,0)));
              auVar10._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
              iVar22 = movmskpd(extraout_EAX,auVar10);
              lVar34 = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44(uVar20 & (uint)((ulonglong)dVar38 >> 0x20),
                                         uVar19 & SUB84(dVar38,0)));
              auVar13._8_4_ = (int)lVar34;
              auVar13._0_8_ =
                   -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44(uVar18 & (uint)((ulonglong)dVar36 >> 0x20),
                                     uVar17 & SUB84(dVar36,0)));
              auVar13._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
              uVar30 = movmskpd((int)pTVar33,auVar13);
              if ((uVar30 & 0x3fffffff) == 0 && iVar22 == 0) {
                dVar36 = (double)CONCAT44(uVar58,uVar57) + (pTVar28->Rotation).XY.m128d_f64[0];
                dVar38 = (double)CONCAT44(uVar60,uVar59) +
                         (this->CachedTargetTransform).Rotation.XY.m128d_f64[1];
                dVar8 = (double)CONCAT44(uVar62,uVar61) +
                        (this->CachedTargetTransform).Rotation.ZW.m128d_f64[0];
                dVar9 = (double)CONCAT44(uVar64,uVar63) +
                        (this->CachedTargetTransform).Rotation.ZW.m128d_f64[1];
                dVar37 = (pTVar28->Rotation).XY.m128d_f64[0] - (double)CONCAT44(uVar58,uVar57);
                dVar39 = (this->CachedTargetTransform).Rotation.XY.m128d_f64[1] -
                         (double)CONCAT44(uVar60,uVar59);
                lVar34 = -(ulonglong)
                          (__real_3f1a36e2e0000000 <
                          (double)CONCAT44(uVar20 & (uint)((ulonglong)dVar39 >> 0x20),
                                           uVar19 & SUB84(dVar39,0)));
                dVar39 = (this->CachedTargetTransform).Rotation.ZW.m128d_f64[0] -
                         (double)CONCAT44(uVar62,uVar61);
                dVar14 = (this->CachedTargetTransform).Rotation.ZW.m128d_f64[1] -
                         (double)CONCAT44(uVar64,uVar63);
                auVar11._8_4_ = (int)lVar34;
                auVar11._0_8_ =
                     -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44(uVar18 & (uint)((ulonglong)dVar37 >> 0x20),
                                       uVar17 & SUB84(dVar37,0)));
                auVar11._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
                uVar30 = movmskpd(iVar22,auVar11);
                lVar34 = -(ulonglong)
                          (__real_3f1a36e2e0000000 <
                          (double)CONCAT44(uVar20 & (uint)((ulonglong)dVar14 >> 0x20),
                                           uVar19 & SUB84(dVar14,0)));
                auVar7._8_4_ = (int)lVar34;
                auVar7._0_8_ = -(ulonglong)
                                (__real_3f1a36e2e0000000 <
                                (double)CONCAT44(uVar18 & (uint)((ulonglong)dVar39 >> 0x20),
                                                 uVar17 & SUB84(dVar39,0)));
                auVar7._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
                iVar22 = movmskpd(0,auVar7);
                uVar31 = iVar22 << 2 | uVar30;
                if (uVar31 != 0) {
                  lVar34 = -(ulonglong)
                            (__real_3f1a36e2e0000000 <
                            (double)CONCAT44(uVar20 & (uint)((ulonglong)dVar9 >> 0x20),
                                             uVar19 & SUB84(dVar9,0)));
                  auVar16._8_4_ = (int)lVar34;
                  auVar16._0_8_ =
                       -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44(uVar18 & (uint)((ulonglong)dVar8 >> 0x20),
                                         uVar17 & SUB84(dVar8,0)));
                  auVar16._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
                  uVar31 = movmskpd(uVar31,auVar16);
                  lVar34 = -(ulonglong)
                            (__real_3f1a36e2e0000000 <
                            (double)CONCAT44(uVar20 & (uint)((ulonglong)dVar38 >> 0x20),
                                             uVar19 & SUB84(dVar38,0)));
                  auVar5._8_4_ = (int)lVar34;
                  auVar5._0_8_ = -(ulonglong)
                                  (__real_3f1a36e2e0000000 <
                                  (double)CONCAT44(uVar18 & (uint)((ulonglong)dVar36 >> 0x20),
                                                   uVar17 & SUB84(dVar36,0)));
                  auVar5._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
                  uVar30 = movmskpd(uVar30,auVar5);
                  if ((uVar31 & 0x3fffffff) != 0 || uVar30 != 0) goto LAB_14cf1cf8b;
                }
                dVar36 = (this->CachedTargetTransform).Scale3D.ZW.m128d_f64[0] -
                         (double)CONCAT44(uVar46,uVar45);
                dVar38 = (this->CachedTargetTransform).Scale3D.ZW.m128d_f64[1] -
                         (double)CONCAT44(uVar48,uVar47);
                dVar8 = (this->CachedTargetTransform).Scale3D.XY.m128d_f64[0] -
                        (double)CONCAT44(uVar42,uVar41);
                dVar9 = (this->CachedTargetTransform).Scale3D.XY.m128d_f64[1] -
                        (double)CONCAT44(uVar44,uVar43);
                auVar40._0_8_ =
                     (double)CONCAT44(uVar18 & (uint)((ulonglong)dVar36 >> 0x20),
                                      uVar17 & SUB84(dVar36,0));
                auVar40._8_4_ = uVar19 & SUB84(dVar38,0);
                auVar40._12_4_ = uVar20 & (uint)((ulonglong)dVar38 >> 0x20);
                lVar34 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar40._8_8_);
                auVar15._8_4_ = (int)lVar34;
                auVar15._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar40._0_8_);
                auVar15._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
                uVar31 = movmskpd(0,auVar15);
                lVar34 = -(ulonglong)
                          (__real_3f1a36e2e0000000 <
                          (double)CONCAT44(uVar20 & (uint)((ulonglong)dVar9 >> 0x20),
                                           uVar19 & SUB84(dVar9,0)));
                auVar12._8_4_ = (int)lVar34;
                auVar12._0_8_ =
                     -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44(uVar18 & (uint)((ulonglong)dVar8 >> 0x20),
                                       uVar17 & SUB84(dVar8,0)));
                auVar12._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
                iVar22 = movmskpd(uVar30,auVar12);
                if ((uVar31 & 0x3fffffff) == 0 && iVar22 == 0) {
                  return;
                }
              }
LAB_14cf1cf8b:
              lVar34 = *(longlong *)this;
              *(undefined4 *)(pTVar28->Rotation).XY.m128d_f64 = uVar57;
              *(undefined4 *)((longlong)(this->CachedTargetTransform).Rotation.XY.m128d_f64 + 4) =
                   uVar58;
              *(undefined4 *)((this->CachedTargetTransform).Rotation.XY.m128d_f64 + 1) = uVar59;
              *(undefined4 *)((longlong)(this->CachedTargetTransform).Rotation.XY.m128d_f64 + 0xc) =
                   uVar60;
              *(undefined4 *)(this->CachedTargetTransform).Rotation.ZW.m128d_f64 = uVar61;
              *(undefined4 *)((longlong)(this->CachedTargetTransform).Rotation.ZW.m128d_f64 + 4) =
                   uVar62;
              *(undefined4 *)((this->CachedTargetTransform).Rotation.ZW.m128d_f64 + 1) = uVar63;
              *(undefined4 *)((longlong)(this->CachedTargetTransform).Rotation.ZW.m128d_f64 + 0xc) =
                   uVar64;
              *(undefined4 *)(this->CachedTargetTransform).Translation.XY.m128d_f64 = uVar49;
              *(undefined4 *)((longlong)(this->CachedTargetTransform).Translation.XY.m128d_f64 + 4)
                   = uVar50;
              *(undefined4 *)((this->CachedTargetTransform).Translation.XY.m128d_f64 + 1) = uVar51;
              *(undefined4 *)
               ((longlong)(this->CachedTargetTransform).Translation.XY.m128d_f64 + 0xc) = uVar52;
              *(undefined4 *)(this->CachedTargetTransform).Translation.ZW.m128d_f64 = uVar53;
              *(undefined4 *)((longlong)(this->CachedTargetTransform).Translation.ZW.m128d_f64 + 4)
                   = uVar54;
              *(undefined4 *)((this->CachedTargetTransform).Translation.ZW.m128d_f64 + 1) = uVar55;
              *(undefined4 *)
               ((longlong)(this->CachedTargetTransform).Translation.ZW.m128d_f64 + 0xc) = uVar56;
              *(undefined4 *)(this->CachedTargetTransform).Scale3D.XY.m128d_f64 = uVar41;
              *(undefined4 *)((longlong)(this->CachedTargetTransform).Scale3D.XY.m128d_f64 + 4) =
                   uVar42;
              *(undefined4 *)((this->CachedTargetTransform).Scale3D.XY.m128d_f64 + 1) = uVar43;
              *(undefined4 *)((longlong)(this->CachedTargetTransform).Scale3D.XY.m128d_f64 + 0xc) =
                   uVar44;
              *(undefined4 *)(this->CachedTargetTransform).Scale3D.ZW.m128d_f64 = uVar45;
              *(undefined4 *)((longlong)(this->CachedTargetTransform).Scale3D.ZW.m128d_f64 + 4) =
                   uVar46;
              *(undefined4 *)((this->CachedTargetTransform).Scale3D.ZW.m128d_f64 + 1) = uVar47;
              *(undefined4 *)((longlong)(this->CachedTargetTransform).Scale3D.ZW.m128d_f64 + 0xc) =
                   uVar48;
              (**(code **)(lVar34 + 0x2c8))(this);
              return;
            }
            break;
          }
          this_01 = this_01 + 1;
        } while (this_01 != pFVar32);
      }
      if (5 < (byte)LogMotionWarping._0_1_) {
        pUVar24 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
        if (pUVar24 == (UObject *)0x0) {
          ::FString::FString(&local_328,L"None");
        }
        else {
          local_318.ComparisonIndex.Value = *(uint *)&pUVar24->field_0x18;
          local_318.Number = *(uint *)&pUVar24->field_0x1c;
          ::FName::ToString(&local_318,&local_328);
        }
        if (*(longlong *)(lVar34 + 0xa8) == 0) {
          ::FString::FString(&local_338,L"None");
        }
        else {
          local_310[0] = *(FName *)(*(longlong *)(lVar34 + 0xa8) + 0x18);
          ::FName::ToString(local_310,&local_338);
        }
        ::FName::ToString(&this->WarpTargetName,&local_2f0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
        if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
        }
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
      }
      if (this->field_0x168 != '\x03') {
        this->field_0x168 = 3;
        (**(code **)(*(longlong *)this + 0x2b0))(this);
      }
    }
  }
  return;
}

// WarpRotation @ 14cf1e2c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __thiscall
URootMotionModifier_Warp::WarpRotation
          (URootMotionModifier_Warp *this,TQuat<double> *__return_storage_ptr__,
          TTransform<double> *param_1,TTransform<double> *param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EMotionWarpRotationMethod EVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  UClass *pUVar13;
  longlong lVar14;
  double *pdVar15;
  TQuat<double> *pTVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  uint uVar51;
  double dVar52;
  uint uVar53;
  float fVar54;
  float fVar55;
  double dVar56;
  double dVar57;
  double dVar60;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar61;
  double dVar64;
  undefined1 auVar62 [16];
  double dVar65;
  undefined1 auVar63 [16];
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  undefined4 uVar70;
  double local_188;
  double dStack_180;
  double local_168;
  double dStack_160;
  TVector<double>_u_0 local_148;
  TQuat<double> local_128;
  undefined1 local_108 [32];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  
  if (this->bRootMotionPaused != false) goto LAB_14cf1ec8d;
  if (this->bWarpingPaused != false) {
    dVar21 = (param_1->Rotation).XY.m128d_f64[1];
    dVar20 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar60 = (param_1->Rotation).ZW.m128d_f64[1];
    __return_storage_ptr__->X = (param_1->Rotation).XY.m128d_f64[0];
    __return_storage_ptr__->Y = dVar21;
    __return_storage_ptr__->Z = dVar20;
    __return_storage_ptr__->W = dVar60;
    return __return_storage_ptr__;
  }
  lVar14 = *(longlong *)&this->field_0x20;
  if (lVar14 == 0) {
LAB_14cf1e345:
    plVar17 = (longlong *)0x0;
  }
  else {
    pUVar13 = UMotionWarpingComponent::StaticClass();
    iVar6 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < iVar6) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar6 * 8)
        != &pUVar13->_padding_)) goto LAB_14cf1e345;
    plVar17 = *(longlong **)(lVar14 + 0xe0);
  }
  if (plVar17 != (longlong *)0x0) {
    lVar14 = (**(code **)(*plVar17 + 0x2b0))(plVar17);
    lVar14 = *(longlong *)(lVar14 + 0x1b8);
    if (lVar14 == 0) {
      auVar48 = ZEXT816(0);
      auVar58 = ___xmm_3ff00000000000000000000000000000;
    }
    else {
      auVar48 = *(undefined1 (*) [16])(lVar14 + 0x1f0);
      auVar58 = *(undefined1 (*) [16])(lVar14 + 0x200);
    }
    pdVar15 = (double *)(**(code **)(*plVar17 + 0x2d0))(plVar17,local_108);
    dVar42 = auVar48._0_8_;
    dVar64 = auVar48._8_8_;
    dVar66 = auVar58._0_8_;
    dVar68 = auVar58._8_8_;
    dVar20 = pdVar15[2];
    dVar60 = pdVar15[3];
    auVar22._8_4_ = auVar58._8_4_;
    auVar22._0_8_ = dVar68;
    auVar22._12_4_ = auVar58._12_4_;
    dVar43 = *pdVar15;
    dVar44 = pdVar15[1];
    auVar34._8_4_ = auVar48._8_4_;
    auVar34._0_8_ = dVar64;
    auVar34._12_4_ = auVar48._12_4_;
    auVar48._8_4_ = auVar58._0_4_;
    auVar48._0_8_ = dVar66;
    auVar48._12_4_ = auVar58._4_4_;
    dVar21 = (dVar42 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              auVar22._8_8_ * dVar44 +
              auVar34._8_8_ * dVar60 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar48._8_8_ * dVar43 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    unique0x100006c1 = SUB84(dVar21,0);
    local_168 = (dVar42 * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar68 * dVar43 +
                 dVar64 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar66 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]) *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    unique0x100006c5 = (int)((ulonglong)dVar21 >> 0x20);
    dStack_180 = (dVar42 * dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                  + dVar68 * dVar60 +
                  dVar64 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                 + dVar66 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
                 ) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    local_188 = (dVar42 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar68 * dVar20 +
                 dVar64 * dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar66 * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]) *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    pTVar16 = GetTargetRotation(this,(TQuat<double> *)local_108);
    pdVar15 = (double *)(**(code **)(*plVar17 + 0x2d0))(plVar17,&local_148);
    uVar1 = pTVar16->X;
    uVar3 = pTVar16->Y;
    uVar2 = pTVar16->Z;
    uVar4 = pTVar16->W;
    dVar44 = pdVar15[2];
    dVar42 = pdVar15[3];
    dVar56 = *pdVar15;
    dVar69 = pdVar15[1];
    auVar62._8_4_ = (int)uVar1;
    auVar62._0_8_ = uVar1;
    auVar62._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
    auVar58._8_4_ = (int)uVar4;
    auVar58._0_8_ = uVar4;
    auVar58._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
    dVar21 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
    dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
    auVar35._8_4_ = (int)uVar3;
    auVar35._0_8_ = uVar3;
    auVar35._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
    auVar23._8_4_ = (int)uVar2;
    auVar23._0_8_ = uVar2;
    auVar23._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
    dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
    dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
    dVar60 = (this->RootMotionRemainingAfterNotify).Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar43 = (this->RootMotionRemainingAfterNotify).Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar50 = (this->RootMotionRemainingAfterNotify).Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar52 = (this->RootMotionRemainingAfterNotify).Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    dVar61 = (double)uVar1 * dVar42 * dVar21 + (double)uVar4 * dVar56 +
             (double)uVar3 * dVar44 * dVar8 + (double)uVar2 * dVar69 * dVar11;
    dVar65 = auVar62._8_8_ * dVar44 * dVar20 + auVar58._8_8_ * dVar69 +
             auVar35._8_8_ * dVar42 * dVar9 + auVar23._8_8_ * dVar56 * dVar7;
    dVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar68 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar67 = (double)uVar1 * dVar69 * dVar57 + (double)uVar4 * dVar44 +
             (double)uVar3 * dVar56 * dVar68 + (double)uVar2 * dVar42 * dVar64;
    dVar69 = (double)uVar1 * dVar56 * dVar10 + (double)uVar4 * dVar42 +
             (double)uVar3 * dVar69 * dVar45 + (double)uVar2 * dVar44 * dVar66;
    auVar46._8_4_ = SUB84(dVar69,0);
    auVar46._0_8_ = dVar67;
    uVar70 = (undefined4)((ulonglong)dVar69 >> 0x20);
    auVar46._12_4_ = uVar70;
    dVar56 = auVar46._8_8_;
    auVar24._8_4_ = SUB84(dVar69,0);
    auVar24._0_8_ = dVar56;
    auVar24._12_4_ = uVar70;
    auVar36._8_4_ = SUB84(dVar65,0);
    auVar36._0_8_ = dVar65;
    auVar36._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
    auVar25._8_4_ = SUB84(dVar67,0);
    auVar25._0_8_ = dVar67;
    auVar25._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
    dVar44 = dVar61 * dVar52 * dVar21 + dVar56 * dVar60 + dVar65 * dVar50 * dVar8 +
             dVar67 * dVar43 * dVar11;
    dVar42 = dVar61 * dVar50 * dVar20 + auVar24._8_8_ * dVar43 + auVar36._8_8_ * dVar52 * dVar9 +
             auVar25._8_8_ * dVar60 * dVar7;
    dVar56 = dVar61 * dVar43 * dVar57 + dVar56 * dVar50 + dVar65 * dVar60 * dVar68 +
             dVar67 * dVar52 * dVar64;
    dVar60 = dVar61 * dVar60 * dVar10 + dVar69 * dVar52 + dVar65 * dVar43 * dVar45 +
             dVar67 * dVar50 * dVar66;
    dVar50 = local_188;
    dVar43 = local_168;
    dVar69 = local_168._8_8_;
    dVar52 = local_188._8_8_;
    auVar26._8_4_ = local_188._8_4_;
    auVar26._0_8_ = dVar52;
    auVar26._12_4_ = local_188._12_4_;
    auVar37._8_4_ = local_168._8_4_;
    auVar37._0_8_ = dVar69;
    auVar37._12_4_ = local_168._12_4_;
    auVar27._8_4_ = local_188._0_4_;
    auVar27._0_8_ = dVar50;
    auVar27._12_4_ = local_188._4_4_;
    dVar20 = dVar43 * dVar56 * dVar20 + auVar26._8_8_ * dVar42 + auVar37._8_8_ * dVar60 * dVar9 +
             auVar27._8_8_ * dVar44 * dVar7;
    local_128.X = (param_2->Rotation).XY.m128d_f64[0];
    local_128.Y = (param_2->Rotation).XY.m128d_f64[1];
    local_128.Z = (param_2->Rotation).ZW.m128d_f64[0];
    local_128.W = (param_2->Rotation).ZW.m128d_f64[1];
    local_e8._8_4_ = SUB84(dVar20,0);
    local_e8._0_8_ =
         dVar43 * dVar60 * dVar21 + dVar52 * dVar44 + dVar69 * dVar56 * dVar8 +
         dVar50 * dVar42 * dVar11;
    local_e8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    dVar21 = dVar43 * dVar44 * dVar10 + dVar52 * dVar60 + dVar69 * dVar42 * dVar45 +
             dVar50 * dVar56 * dVar66;
    local_d8._8_4_ = SUB84(dVar21,0);
    local_d8._0_8_ =
         dVar43 * dVar42 * dVar57 + dVar52 * dVar56 + dVar69 * dVar44 * dVar68 +
         dVar50 * dVar60 * dVar64;
    local_d8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    if (this->RotationMethod == Scale) {
      UE::Math::TRotator<double>::TRotator<double>((TRotator<double> *)&local_188,&local_128);
      UE::Math::TRotator<double>::TRotator<double>
                ((TRotator<double> *)&local_148._s_0,(TQuat<double> *)local_e8);
      dVar20 = FMath::FindDeltaAngleDegrees<double,double>(dStack_180,local_148._s_0.Y);
      dVar60 = FMath::FindDeltaAngleDegrees<double,double>(local_188,local_148._s_0.X);
      dVar21 = 0.0;
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44(local_188._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           local_188._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        dVar20 = (dStack_180 + dVar20) / dStack_180;
      }
      else {
        dVar20 = 0.0;
      }
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44(local_188._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           local_188._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        dVar21 = (local_188 + dVar60) / local_188;
      }
      local_108._0_16_ = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      local_108._16_16_ = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
      fVar54 = param_3 * this->WarpMaxRotationRate;
      UE::Math::TRotator<double>::TRotator<double>
                ((TRotator<double> *)&local_168,(TQuat<double> *)local_108);
      dVar44 = (double)fVar54;
      dVar43 = (double)(float)((uint)fVar54 ^ __xmm_80000000800000008000000080000000);
      dVar60 = dStack_160 * dVar20;
      if (dVar44 <= dStack_160 * dVar20) {
        dVar60 = dVar44;
      }
      dVar20 = local_168 * dVar21;
      if (dVar44 <= local_168 * dVar21) {
        dVar20 = dVar44;
      }
      if (dVar60 <= dVar43) {
        dVar60 = dVar43;
      }
      if (dVar20 <= dVar43) {
        dVar20 = dVar43;
      }
      dStack_160 = dVar60;
      local_168 = dVar20;
      UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&local_168,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    fVar55 = param_3 * *(float *)&this->field_0x44;
    fVar54 = fVar55 / ((*(float *)&this->field_0x34 - *(float *)&this->field_0x38) *
                      this->WarpRotationTimeMultiplier);
    if (__real_3f800000 <= fVar54) {
      fVar54 = __real_3f800000;
    }
    if (fVar54 <= 0.0) {
      fVar54 = 0.0;
    }
    auVar47._0_8_ = (double)fVar54;
    auVar47._8_8_ = 0;
    pTVar16 = UE::Math::TQuat<double>::Slerp_NotNormalized
                        ((TQuat<double> *)local_108,&local_128,(TQuat<double> *)local_e8,
                         auVar47._0_8_);
    EVar5 = this->RotationMethod;
    dVar21 = pTVar16->X;
    dVar20 = pTVar16->Y;
    dVar60 = pTVar16->Z;
    dVar43 = pTVar16->W;
    dVar44 = dVar60 * dVar60 + dVar21 * dVar21;
    dVar42 = dVar43 * dVar43 + dVar20 * dVar20;
    auVar28._8_4_ = SUB84(dVar42,0);
    auVar28._0_8_ = dVar44;
    auVar28._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    auVar29._0_8_ = auVar28._8_8_ + dVar44;
    auVar29._8_8_ = dVar44 + dVar42;
    auVar48 = sqrtpd(auVar47,auVar29);
    uVar18 = -(ulonglong)(__real_3e45798ee0000000 <= auVar29._0_8_);
    uVar19 = -(ulonglong)(__real_3e45798ee0000000 <= auVar29._8_8_);
    uVar51 = (uint)(uVar18 >> 0x20);
    uVar53 = (uint)(uVar19 >> 0x20);
    auVar58 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar48);
    auVar59._0_8_ = uVar18 & (ulonglong)(auVar58._0_8_ * dVar21);
    uVar12 = uVar19 & (ulonglong)(auVar58._8_8_ * dVar20);
    auVar59._8_4_ = (undefined4)uVar12;
    auVar59._12_4_ = (undefined4)(uVar12 >> 0x20);
    auVar38._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar38._4_4_ =
         ~uVar51 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar38._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar38._12_4_ =
         ~uVar53 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar59 = auVar59 | auVar38;
    auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar48);
    auVar63._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar63._4_4_ =
         ~uVar51 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar63._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar63._12_4_ =
         ~uVar53 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar39._0_8_ = (ulonglong)(auVar48._0_8_ * dVar60) & uVar18;
    uVar19 = (ulonglong)(auVar48._8_8_ * dVar43) & uVar19;
    auVar39._8_4_ = (undefined4)uVar19;
    auVar39._12_4_ = (undefined4)(uVar19 >> 0x20);
    auVar63 = auVar63 | auVar39;
    auVar48 = auVar59;
    auVar58 = auVar63;
    if (EVar5 != Slerp) {
      local_108._0_16_ = auVar59;
      local_108._16_16_ = auVar63;
      dVar21 = UE::Math::TQuat<double>::AngularDistance(&local_128,(TQuat<double> *)local_108);
      fVar54 = (float)((uint)(fVar55 * this->WarpMaxRotationRate * __real_3c8efa35) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (((EVar5 != ConstantRate) ||
          (dVar20 = UE::Math::TQuat<double>::AngularDistance(&local_128,(TQuat<double> *)local_e8),
          auVar48 = local_e8, auVar58 = local_d8, fVar54 < (float)dVar20)) &&
         ((fVar54 < (float)dVar21 || (auVar48 = auVar59, auVar58 = auVar63, EVar5 == ConstantRate)))
         ) {
        local_148._s_0.X = ___xmm_00000000000000003ff0000000000000;
        local_148._s_0.Y = _UNK_150689518;
        local_148._s_0.Z = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  ((TQuat<double> *)local_e8,(TVector<double> *)&local_168,
                   (TVector<double> *)&local_148._s_0);
        local_148._s_0.X = ___xmm_00000000000000003ff0000000000000;
        local_148._s_0.Y = _UNK_150689518;
        local_148._s_0.Z = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_128,(TVector<double> *)&local_188,(TVector<double> *)&local_148._s_0);
        __libm_sse2_sincos_();
        auVar48 = ZEXT816(0);
        auVar58 = extraout_XMM0;
      }
    }
    local_128.Z = local_128.Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_128.W = local_128.W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar45 = auVar58._0_8_;
    local_128.X = local_128.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_128.Y = local_128.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar57 = auVar48._0_8_;
    dVar69 = auVar48._8_8_;
    dVar50 = auVar58._8_8_;
    auVar30._8_4_ = auVar58._8_4_;
    auVar30._0_8_ = dVar50;
    auVar30._12_4_ = auVar58._12_4_;
    auVar40._8_4_ = auVar48._8_4_;
    auVar40._0_8_ = dVar69;
    auVar40._12_4_ = auVar48._12_4_;
    dVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
    dVar21 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
    dVar7 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar8 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar9 = (param_1->Rotation).XY.m128d_f64[0];
    dVar56 = (param_1->Rotation).XY.m128d_f64[1];
    dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    auVar31._8_4_ = auVar58._0_4_;
    auVar31._0_8_ = dVar45;
    auVar31._12_4_ = auVar58._4_4_;
    dVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar10 = dVar57 * local_128.W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
             + dVar50 * local_128.X +
             dVar69 * local_128.Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
             + dVar45 * local_128.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar11 = dVar57 * local_128.Z * dVar43 + auVar30._8_8_ * local_128.Y +
             auVar40._8_8_ * local_128.W * dVar42 + auVar31._8_8_ * local_128.X * dVar66;
    auVar32._8_4_ = SUB84(dVar45 * local_128.Z,0);
    auVar32._0_8_ = dVar45 * local_128.W;
    auVar32._12_4_ = (int)((ulonglong)(dVar45 * local_128.Z) >> 0x20);
    dVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar68 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar49._8_4_ = SUB84(dVar10,0);
    auVar49._0_8_ = dVar10;
    auVar49._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    dVar45 = dVar57 * local_128.Y * dVar20 + dVar50 * local_128.Z + dVar69 * local_128.X * dVar21 +
             dVar45 * local_128.W * dVar60;
    dVar57 = dVar57 * local_128.X * dVar64 + dVar50 * local_128.W + dVar69 * local_128.Y * dVar44 +
             auVar32._8_8_ * dVar68;
    auVar41._8_4_ = SUB84(dVar11,0);
    auVar41._0_8_ = dVar11;
    auVar41._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar33._8_4_ = SUB84(dVar57,0);
    auVar33._0_8_ = dVar57;
    auVar33._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
    __return_storage_ptr__->X =
         dVar10 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar57 * dVar9 +
         dVar11 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar45 * dVar56 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    __return_storage_ptr__->Y =
         auVar49._8_8_ * dVar7 * dVar43 + auVar33._8_8_ * dVar56 + auVar41._8_8_ * dVar8 * dVar42 +
         dVar45 * dVar9 * dVar66;
    __return_storage_ptr__->Z =
         dVar10 * dVar56 * dVar20 + dVar57 * dVar7 + dVar11 * dVar9 * dVar21 +
         dVar45 * dVar8 * dVar60;
    __return_storage_ptr__->W =
         dVar10 * dVar9 * dVar64 + dVar57 * dVar8 + dVar11 * dVar56 * dVar44 +
         dVar45 * dVar7 * dVar68;
    return __return_storage_ptr__;
  }
LAB_14cf1ec8d:
  dVar21 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar21;
  dVar21 = UE::Math::TQuat<double>::Identity.W;
  __return_storage_ptr__->Z = UE::Math::TQuat<double>::Identity.Z;
  __return_storage_ptr__->W = dVar21;
  return __return_storage_ptr__;
}

