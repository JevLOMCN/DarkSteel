// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TrackingAlignment
// Functions: 12

// StaticClass @ 14d3744a0

UClass * __cdecl UTrackingAlignmentFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTrackingAlignmentFunctionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TrackingAlignment",L"TrackingAlignmentFunctionLibrary",
               &Z_Registration_Info_UClass_UTrackingAlignmentFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUTrackingAlignmentFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTrackingAlignmentFunctionLibrary>,
               InternalVTableHelperCtorCaller<UTrackingAlignmentFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTrackingAlignmentFunctionLibrary.InnerSingleton;
}

// UTrackingAlignmentFunctionLibrary @ 14d375330

UTrackingAlignmentFunctionLibrary * __thiscall
UTrackingAlignmentFunctionLibrary::UTrackingAlignmentFunctionLibrary
          (UTrackingAlignmentFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UTrackingAlignmentFunctionLibrary__6B_;
  return this;
}

// UTrackingAlignmentFunctionLibrary @ 14d375360

UTrackingAlignmentFunctionLibrary * __thiscall
UTrackingAlignmentFunctionLibrary::UTrackingAlignmentFunctionLibrary
          (UTrackingAlignmentFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UTrackingAlignmentFunctionLibrary__6B_;
  return this;
}

// ~UTrackingAlignmentFunctionLibrary @ 14d3754e0

void __thiscall
UTrackingAlignmentFunctionLibrary::~UTrackingAlignmentFunctionLibrary
          (UTrackingAlignmentFunctionLibrary *this)

{
  *(undefined ***)this = &___7UTrackingAlignmentFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// FindAndUpdateOriginActor @ 14d375fd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UTrackingAlignmentFunctionLibrary::FindAndUpdateOriginActor
          (FTrackingAlignmentActors *param_1,AActor **param_2)

{
  AActor *pAVar1;
  AActor *local_res8;
  
  if (*(longlong *)&(param_1->SourceActor).SoftObjectPtr.field_0x8 != 0) {
    pAVar1 = TSoftObjectPtr<AActor>::LoadSynchronous(&param_1->SourceActor);
    if (pAVar1 != (AActor *)0x0) {
      pAVar1 = AActor::GetAttachParentActor(pAVar1);
      if (pAVar1 != (AActor *)0x0) {
        local_res8 = pAVar1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar1);
        }
        FSoftObjectPtr::operator=(&(param_1->OriginActor).SoftObjectPtr,(FObjectPtr)&local_res8);
        *param_2 = pAVar1;
        return true;
      }
    }
  }
  return false;
}

// GetAlignedTrackerBOrigin @ 14d376060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
UTrackingAlignmentFunctionLibrary::GetAlignedTrackerBOrigin
          (TTransform<double> *__return_storage_ptr__,UTrackingAlignmentCalibrationProfile *param_1)

{
  __m128d *p_Var1;
  __m128d *p_Var2;
  float fVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [12];
  __m128 _Var16;
  int iVar17;
  uint uVar18;
  TTransform<double> *pTVar19;
  UObject *pUVar20;
  UClass *pUVar21;
  uint uVar22;
  TTransform<double> *pTVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auStack_198 [32];
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (param_1 == (UTrackingAlignmentCalibrationProfile *)0x0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return __return_storage_ptr__;
  }
  pTVar23 = &local_178;
  pTVar19 = UE::TrackingAlignmentFunctionLibrary::GetCam2Base(pTVar23,param_1);
  local_118.Rotation.XY.m128d_f64 = *&(pTVar19->Rotation).XY.m128d_f64;
  p_Var1 = &(pTVar19->Rotation).ZW;
  local_118.Rotation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
  local_118.Translation.XY.m128d_f64 = *&(pTVar19->Translation).XY.m128d_f64;
  p_Var2 = &(pTVar19->Translation).ZW;
  local_118.Translation.ZW.m128d_f64 = *&p_Var2->m128d_f64;
  local_118.Scale3D.XY.m128d_f64 = *&(pTVar19->Scale3D).XY.m128d_f64;
  local_118.Scale3D.ZW.m128d_f64 = *&(pTVar19->Scale3D).ZW.m128d_f64;
  uVar22 = local_118.Scale3D.ZW.m128d_f64[0]._0_4_;
  uVar4 = local_118.Scale3D.ZW.m128d_f64[0]._4_4_;
  if (*(longlong *)&(param_1->TrackerAActors).OriginActor.SoftObjectPtr.field_0x8 == 0) {
    auVar28._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
          (double)CONCAT44(local_118.Scale3D.ZW.m128d_f64[1]._4_4_ & _UNK_15061cc8c,
                           local_118.Scale3D.ZW.m128d_f64[1]._0_4_ & _UNK_15061cc88));
    auVar28._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
          (double)CONCAT44(uVar4 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar22 & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    uVar22 = movmskpd((int)pTVar23,auVar28);
    auVar48._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
          (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c,
                           local_118.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88));
    auVar48._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
          (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[0]._4_4_ &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           local_118.Scale3D.XY.m128d_f64[0]._0_4_ &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    iVar17 = movmskpd((int)pTVar19,auVar48);
    if ((uVar22 & 0x3fffffff) != 0 || iVar17 != 0) {
      UE::Math::TTransform<double>::InverseFast(&local_118,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return __return_storage_ptr__;
  }
  dVar5 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
  dVar6 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
  auVar39._8_4_ = SUB84(dVar6,0);
  auVar39._0_8_ = dVar5;
  auVar39._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  dVar7 = (double)GlobalVectorConstants::SmallNumber.m128_f32[2];
  dVar44 = (double)GlobalVectorConstants::SmallNumber.m128_f32[3];
  auVar33._8_4_ = SUB84(dVar44,0);
  auVar33._0_8_ = dVar7;
  auVar33._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  auVar27._0_8_ =
       (double)CONCAT44(uVar4 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        uVar22 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar27._8_4_ = local_118.Scale3D.ZW.m128d_f64[1]._0_4_ & _UNK_15061cc88;
  auVar27._12_4_ = local_118.Scale3D.ZW.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
  lVar25 = -(ulonglong)(auVar33._8_8_ < auVar27._8_8_);
  auVar34._8_8_ = lVar25;
  auVar34._0_8_ = -(ulonglong)(dVar7 < auVar27._0_8_);
  uVar18 = movmskpd((int)pTVar19,auVar34);
  uVar49 = local_118.Scale3D.XY.m128d_f64[0]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar50 = local_118.Scale3D.XY.m128d_f64[0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar51 = local_118.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88;
  uVar52 = local_118.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
  auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ < (double)CONCAT44(uVar52,uVar51));
  auVar40._0_8_ = -(ulonglong)(dVar5 < (double)CONCAT44(uVar50,uVar49));
  iVar17 = movmskpd((int)pTVar23,auVar40);
  if ((uVar18 & 0x3fffffff) == 0 && iVar17 == 0) {
    local_118.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_118.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_118.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_118.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_118.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_118.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    dVar44 = p_Var1->m128d_f64[0] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar9 = (pTVar19->Rotation).ZW.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar46 = SUB84(dVar9,0);
    uVar53 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar15._4_8_ = lVar25;
    auVar15._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar35._0_8_ = auVar15._0_8_ << 0x20;
    auVar35._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar35._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    dVar10 = (pTVar19->Rotation).XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar11 = (pTVar19->Rotation).XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar54 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar36._8_8_ = auVar35._8_8_;
    auVar36._0_8_ = local_118.Scale3D.ZW.m128d_f64[0];
    auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    (undefined1  [16])local_118.Scale3D.XY.m128d_f64);
    lVar25 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar4,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & uVar22) <= dVar7);
    lVar24 = -(ulonglong)((double)CONCAT44(uVar50,uVar49) <= dVar5);
    lVar26 = -(ulonglong)((double)CONCAT44(uVar52,uVar51) <= dVar6);
    local_118.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar24 & auVar28._0_4_;
    local_118.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar24 >> 0x20) & auVar28._4_4_;
    local_118.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar26 & auVar28._8_4_;
    local_118.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar26 >> 0x20) & auVar28._12_4_;
    auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36);
    dVar7 = (pTVar19->Translation).XY.m128d_f64[0] *
            (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[0]._4_4_,
                             local_118.Scale3D.XY.m128d_f64[0]._0_4_);
    dVar12 = (pTVar19->Translation).XY.m128d_f64[1] *
             (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[1]._4_4_,
                              local_118.Scale3D.XY.m128d_f64[1]._0_4_);
    local_118.Scale3D.ZW.m128d_f64[0] =
         (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar28._4_4_,
                          ~(uint)lVar25 & auVar28._0_4_);
    local_118.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
    local_118.Rotation.XY.m128d_f64[0] = dVar10;
    local_118.Rotation.XY.m128d_f64[1]._4_4_ = uVar54;
    local_118.Rotation.ZW.m128d_f64[1]._0_4_ = uVar46;
    local_118.Rotation.ZW.m128d_f64[0] = dVar44;
    local_118.Rotation.ZW.m128d_f64[1]._4_4_ = uVar53;
    dVar14 = p_Var2->m128d_f64[0] * local_118.Scale3D.ZW.m128d_f64[0];
    dVar6 = (pTVar19->Translation).ZW.m128d_f64[1] * 0.0;
    auVar47._8_4_ = SUB84(dVar11,0);
    auVar47._0_8_ = dVar10;
    auVar47._12_4_ = uVar54;
    auVar41._8_4_ = SUB84(dVar12,0);
    auVar41._0_8_ = dVar7;
    auVar41._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    auVar13._8_4_ = SUB84(dVar6,0);
    auVar13._0_8_ = dVar14;
    auVar13._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar28 = blendpd(auVar41,auVar13,2);
    auVar8._8_4_ = uVar46;
    auVar8._0_8_ = dVar44;
    auVar8._12_4_ = uVar53;
    auVar48 = blendpd(auVar47,auVar8,2);
    auVar29._8_4_ = SUB84(dVar44,0);
    auVar29._0_8_ = dVar11;
    auVar29._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    dVar5 = dVar14 * dVar11 - auVar29._8_8_ * dVar12;
    auVar42._0_8_ = auVar28._0_8_ * dVar44 - auVar48._0_8_ * dVar14;
    auVar42._8_8_ = auVar28._8_8_ * dVar9 - auVar48._8_8_ * dVar6;
    auVar30._8_4_ = SUB84(dVar5,0);
    auVar30._0_8_ = dVar12 * dVar10 - dVar11 * dVar7;
    auVar30._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar45._8_4_ = uVar46;
    auVar45._0_8_ = dVar44;
    auVar45._12_4_ = uVar53;
    auVar28 = blendpd(auVar30,auVar42,2);
    auVar31._0_8_ = auVar28._0_8_ + auVar28._0_8_;
    auVar31._8_8_ = auVar28._8_8_ + auVar28._8_8_;
    dVar5 = dVar5 + dVar5;
    dVar6 = auVar42._0_8_ + auVar42._0_8_;
    uVar46 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar43._8_4_ = SUB84(dVar6,0);
    auVar43._0_8_ = dVar5;
    auVar43._12_4_ = uVar46;
    auVar37._8_4_ = SUB84(dVar6,0);
    auVar37._0_8_ = dVar5;
    auVar37._12_4_ = uVar46;
    auVar28 = blendpd(auVar37,auVar31,2);
    auVar38._0_8_ = auVar28._0_8_ * dVar44 - auVar31._0_8_ * auVar48._0_8_;
    auVar38._8_8_ = auVar28._8_8_ * dVar9 - auVar31._8_8_ * auVar48._8_8_;
    dVar44 = auVar31._0_8_ * dVar11 - dVar6 * dVar44;
    auVar32._8_4_ = SUB84(dVar44,0);
    auVar32._0_8_ = auVar43._8_8_ * dVar10 - dVar5 * dVar11;
    auVar32._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    auVar28 = blendpd(auVar32,auVar38,2);
    local_118.Translation.ZW.m128d_f64[1] = 0.0;
    local_118.Translation.ZW.m128d_f64[0] =
         0.0 - (auVar31._0_8_ * auVar45._8_8_ + dVar14 + auVar28._0_8_);
    local_118.Translation.XY.m128d_f64[1] = 0.0 - (auVar38._0_8_ + dVar6 * dVar9 + dVar12);
    local_118.Translation.XY.m128d_f64[0] = 0.0 - (dVar44 + dVar5 * auVar45._8_8_ + dVar7);
    local_118.Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  pUVar20 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)
                       &(param_1->TrackerAActors).OriginActor);
  if (pUVar20 != (UObject *)0x0) {
    pUVar21 = Z_Construct_UClass_AActor_NoRegister();
    iVar17 = (int)pUVar21->_padding_;
    if ((iVar17 <= *(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar17 * 8) ==
        &pUVar21->_padding_)) goto LAB_14d3764a3;
  }
  pUVar20 = (UObject *)0x0;
LAB_14d3764a3:
  _Var16 = GlobalVectorConstants::Float0001;
  pTVar23 = (TTransform<double> *)(*(longlong *)(pUVar20 + 0xb) + 0x1f0);
  if (*(longlong *)(pUVar20 + 0xb) == 0) {
    pTVar23 = &UE::Math::TTransform<double>::Identity;
  }
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)_Var16.m128_f32[2];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)_Var16.m128_f32[3];
  _Var16 = GlobalVectorConstants::FloatZero;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)_Var16.m128_f32[2];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)_Var16.m128_f32[3];
  _Var16 = GlobalVectorConstants::Float1110;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)_Var16.m128_f32[2];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)_Var16.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,&local_118,pTVar23);
  return __return_storage_ptr__;
}

// GetMinimumRequiredTrackerAligmentSampleCount @ 14d376d20

int __cdecl UTrackingAlignmentFunctionLibrary::GetMinimumRequiredTrackerAligmentSampleCount(void)

{
  return 5;
}

// GetPrivateStaticClass @ 14d376df0

UClass * __cdecl UTrackingAlignmentFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTrackingAlignmentFunctionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TrackingAlignment",L"TrackingAlignmentFunctionLibrary",
               &Z_Registration_Info_UClass_UTrackingAlignmentFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUTrackingAlignmentFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTrackingAlignmentFunctionLibrary>,
               InternalVTableHelperCtorCaller<UTrackingAlignmentFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTrackingAlignmentFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesUTrackingAlignmentFunctionLibrary @ 14d3772d0

void __cdecl
UTrackingAlignmentFunctionLibrary::StaticRegisterNativesUTrackingAlignmentFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execFindAndUpdateOriginActor @ 14d3775a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UTrackingAlignmentFunctionLibrary::execFindAndUpdateOriginActor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TSoftObjectPtr<AActor> *pTVar1;
  FProperty *pFVar2;
  undefined1 uVar3;
  AActor *pAVar4;
  uchar *puVar5;
  TSoftObjectPtr<AActor> *this;
  uchar local_res10 [8];
  AActor *local_res18;
  undefined1 local_78 [24];
  FUtf8String local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  FUtf8String local_38;
  
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  local_78._0_8_ = 0;
  local_78._16_8_ = 0;
  local_78._8_8_ = 0;
  FUtf8String::Reset(&local_60,0);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  FUtf8String::Reset(&local_38,0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pTVar1 = (TSoftObjectPtr<AActor> *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = (TSoftObjectPtr<AActor> *)local_78;
  if (pTVar1 != (TSoftObjectPtr<AActor> *)0x0) {
    this = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&(this->SoftObjectPtr).field_0x8 != 0) {
    pAVar4 = TSoftObjectPtr<AActor>::LoadSynchronous(this);
    if (pAVar4 != (AActor *)0x0) {
      pAVar4 = AActor::GetAttachParentActor(pAVar4);
      if (pAVar4 != (AActor *)0x0) {
        local_res18 = pAVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar4);
        }
        FSoftObjectPtr::operator=(&this[1].SoftObjectPtr,(FObjectPtr)&local_res18);
        uVar3 = 1;
        *(AActor **)puVar5 = pAVar4;
        goto LAB_14d3776f2;
      }
    }
  }
  uVar3 = 0;
LAB_14d3776f2:
  *(undefined1 *)param_3 = uVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar5);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetAlignedTrackerBOrigin @ 14d377750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UTrackingAlignmentFunctionLibrary::execGetAlignedTrackerBOrigin
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  UTrackingAlignmentCalibrationProfile *pUVar12;
  int iVar13;
  TTransform<double> *pTVar14;
  UObject *pUVar15;
  UClass *pUVar16;
  uint uVar17;
  TTransform<double> *pTVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 uVar32;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar33;
  undefined4 uVar34;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  __m128d _Var53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar66;
  double dVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar71;
  double dVar72;
  double dVar77;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined1 auStack_1a8 [32];
  UTrackingAlignmentCalibrationProfile *local_188 [2];
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_188[0] = (UTrackingAlignmentCalibrationProfile *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_188);
  }
  pUVar12 = local_188[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_188[0] == (UTrackingAlignmentCalibrationProfile *)0x0) {
    local_118.Rotation.XY.m128d_f64[0] =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_118.Rotation.XY.m128d_f64[1] =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_118.Rotation.ZW.m128d_f64[0] =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_118.Rotation.ZW.m128d_f64[1] =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_118.Translation.ZW.m128d_f64[0] =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    uVar82 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    uVar83 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    local_118.Scale3D.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    local_118.Scale3D.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    local_118.Scale3D.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_118.Scale3D.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    _Var53 = UE::Math::TTransform<double>::Identity.Translation.XY;
    goto LAB_14d377d49;
  }
  pTVar18 = &local_178;
  pTVar14 = UE::TrackingAlignmentFunctionLibrary::GetCam2Base(pTVar18,local_188[0]);
  local_118.Rotation.XY.m128d_f64[0] = (pTVar14->Rotation).XY.m128d_f64[0];
  local_118.Rotation.XY.m128d_f64[1] = (pTVar14->Rotation).XY.m128d_f64[1];
  local_118.Rotation.ZW.m128d_f64[0] = (pTVar14->Rotation).ZW.m128d_f64[0];
  local_118.Rotation.ZW.m128d_f64[1] = (pTVar14->Rotation).ZW.m128d_f64[1];
  auVar24 = *(undefined1 (*) [16])(pTVar14->Scale3D).XY.m128d_f64;
  auVar68 = *(undefined1 (*) [16])(pTVar14->Scale3D).ZW.m128d_f64;
  uVar4 = auVar68._4_4_;
  dVar66 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
  dVar70 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
  dVar72 = (double)GlobalVectorConstants::SmallNumber.m128_f32[2];
  dVar77 = (double)GlobalVectorConstants::SmallNumber.m128_f32[3];
  auVar22._8_4_ = SUB84(dVar77,0);
  auVar22._0_8_ = dVar72;
  auVar22._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
  uVar82 = (undefined4)((ulonglong)dVar70 >> 0x20);
  uVar35 = auVar68._0_4_;
  uVar2 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  uVar3 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  if (*(longlong *)&(pUVar12->TrackerAActors).OriginActor.SoftObjectPtr.field_0x8 == 0) {
    auVar36._0_8_ =
         (double)CONCAT44(uVar4 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          uVar35 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar36._8_4_ = auVar68._8_4_ & _UNK_15061cc88;
    auVar36._12_4_ = auVar68._12_4_ & _UNK_15061cc8c;
    uVar78 = auVar24._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar79 = auVar24._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar80 = auVar24._8_4_ & _UNK_15061cc88;
    uVar81 = auVar24._12_4_ & _UNK_15061cc8c;
    auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < auVar36._8_8_);
    auVar23._0_8_ = -(ulonglong)(dVar72 < auVar36._0_8_);
    auVar48._8_4_ = SUB84(dVar70,0);
    auVar48._0_8_ = dVar66;
    auVar48._12_4_ = uVar82;
    uVar17 = movmskpd((int)pTVar18,auVar23);
    auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < (double)CONCAT44(uVar81,uVar80));
    auVar49._0_8_ = -(ulonglong)(dVar66 < (double)CONCAT44(uVar79,uVar78));
    iVar13 = movmskpd((int)pTVar14,auVar49);
    if ((uVar17 & 0x3fffffff) == 0 && iVar13 == 0) {
      local_118.Rotation.XY.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_118.Rotation.XY.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_118.Rotation.ZW.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_118.Rotation.ZW.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_118.Translation.ZW.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      uVar82 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      uVar83 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      local_118.Scale3D.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      local_118.Scale3D.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      local_118.Scale3D.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      local_118.Scale3D.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      _Var53 = UE::Math::TTransform<double>::Identity.Translation.XY;
    }
    else {
      local_118.Rotation.ZW.m128d_f64[0] =
           local_118.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_118.Rotation.ZW.m128d_f64[1] =
           local_118.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar83 = (undefined4)((ulonglong)local_118.Rotation.ZW.m128d_f64[1] >> 0x20);
      auVar10._4_8_ = auVar36._8_8_;
      auVar10._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar37._0_8_ = auVar10._0_8_ << 0x20;
      auVar37._8_4_ = uVar2;
      auVar37._12_4_ = uVar3;
      local_118.Rotation.XY.m128d_f64[0] =
           local_118.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_118.Rotation.XY.m128d_f64[1] =
           local_118.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar38._8_8_ = auVar37._8_8_;
      auVar38._0_8_ = auVar68._0_8_;
      auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar24);
      auVar59._0_8_ =
           (double)CONCAT44(uVar4 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            uVar35 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar59._8_4_ = uVar2 & _UNK_15061cc88;
      auVar59._12_4_ = uVar3 & _UNK_15061cc8c;
      local_118.Scale3D.ZW.m128d_f64[1]._0_4_ = 0;
      local_118.Scale3D.ZW.m128d_f64[1]._4_4_ = 0;
      lVar20 = -(ulonglong)(auVar59._8_8_ <= dVar77);
      lVar19 = -(ulonglong)((double)CONCAT44(uVar79,uVar78) <= dVar66);
      lVar21 = -(ulonglong)((double)CONCAT44(uVar81,uVar80) <= dVar70);
      local_118.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar19 & auVar24._0_4_;
      local_118.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar19 >> 0x20) & auVar24._4_4_;
      local_118.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar21 & auVar24._8_4_;
      local_118.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar21 >> 0x20) & auVar24._12_4_;
      dVar66 = (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[0]._4_4_,
                                local_118.Scale3D.XY.m128d_f64[0]._0_4_) *
               (pTVar14->Translation).XY.m128d_f64[0];
      dVar70 = (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[1]._4_4_,
                                local_118.Scale3D.XY.m128d_f64[1]._0_4_) *
               (pTVar14->Translation).XY.m128d_f64[1];
      uVar82 = (undefined4)((ulonglong)dVar70 >> 0x20);
      auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar38);
      auVar67._8_4_ = SUB84(local_118.Rotation.XY.m128d_f64[1],0);
      auVar67._0_8_ = local_118.Rotation.XY.m128d_f64[0];
      auVar67._12_4_ = (int)((ulonglong)local_118.Rotation.XY.m128d_f64[1] >> 0x20);
      auVar39._0_4_ = ~(uint)-(ulonglong)(auVar59._0_8_ <= dVar72) & auVar24._0_4_;
      auVar39._4_4_ = ~(uint)(-(ulonglong)(auVar59._0_8_ <= dVar72) >> 0x20) & auVar24._4_4_;
      auVar39._8_4_ = ~(uint)lVar20 & auVar24._8_4_;
      auVar39._12_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar24._12_4_;
      auVar73._8_4_ = SUB84(dVar70,0);
      auVar73._0_8_ = dVar66;
      auVar73._12_4_ = uVar82;
      auVar39 = auVar39 | ZEXT816(0);
      auVar25._8_4_ = SUB84(local_118.Rotation.ZW.m128d_f64[0],0);
      auVar25._0_8_ = local_118.Rotation.XY.m128d_f64[1];
      auVar25._12_4_ = (int)((ulonglong)local_118.Rotation.ZW.m128d_f64[0] >> 0x20);
      local_118.Scale3D.ZW.m128d_f64[0]._0_4_ = auVar39._0_4_;
      local_118.Scale3D.ZW.m128d_f64[0]._4_4_ = auVar39._4_4_;
      auVar50._8_4_ = SUB84(dVar70,0);
      auVar50._0_8_ = dVar66;
      auVar50._12_4_ = uVar82;
      auVar8._8_4_ = SUB84(local_118.Rotation.ZW.m128d_f64[1],0);
      auVar8._0_8_ = local_118.Rotation.ZW.m128d_f64[0];
      auVar8._12_4_ = uVar83;
      auVar68 = blendpd(auVar67,auVar8,2);
      dVar72 = auVar39._0_8_ * (pTVar14->Translation).ZW.m128d_f64[0];
      dVar77 = (pTVar14->Translation).ZW.m128d_f64[1] * 0.0;
      auVar60._8_4_ = SUB84(local_118.Rotation.ZW.m128d_f64[1],0);
      auVar60._0_8_ = local_118.Rotation.ZW.m128d_f64[0];
      auVar60._12_4_ = uVar83;
      uVar82 = 0;
      uVar83 = 0;
      auVar5._8_4_ = SUB84(dVar77,0);
      auVar5._0_8_ = dVar72;
      auVar5._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
      auVar24 = blendpd(auVar50,auVar5,2);
      auVar51._0_8_ = auVar24._0_8_ * local_118.Rotation.ZW.m128d_f64[0] - auVar68._0_8_ * dVar72;
      auVar51._8_8_ = auVar24._8_8_ * local_118.Rotation.ZW.m128d_f64[1] - auVar68._8_8_ * dVar77;
      auVar74._0_8_ =
           auVar73._8_8_ * local_118.Rotation.XY.m128d_f64[0] -
           local_118.Rotation.XY.m128d_f64[1] * dVar66;
      auVar74._8_8_ = dVar72 * local_118.Rotation.XY.m128d_f64[1] - auVar25._8_8_ * dVar70;
      auVar26._8_4_ = SUB84(auVar74._8_8_,0);
      auVar26._0_8_ = auVar74._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
      dVar77 = auVar26._8_8_ + auVar26._8_8_;
      dVar33 = auVar51._0_8_ + auVar51._0_8_;
      auVar24 = blendpd(auVar74,auVar51,2);
      uVar32 = SUB84(dVar33,0);
      auVar52._8_4_ = uVar32;
      auVar52._0_8_ = dVar77;
      uVar34 = (undefined4)((ulonglong)dVar33 >> 0x20);
      auVar52._12_4_ = uVar34;
      auVar40._8_4_ = uVar32;
      auVar40._0_8_ = dVar77;
      auVar40._12_4_ = uVar34;
      auVar75._0_8_ = auVar24._0_8_ + auVar24._0_8_;
      auVar75._8_8_ = auVar24._8_8_ + auVar24._8_8_;
      auVar24 = blendpd(auVar40,auVar75,2);
      auVar61._8_4_ = uVar32;
      auVar61._0_8_ = dVar77;
      auVar61._12_4_ = uVar34;
      auVar62._0_8_ =
           auVar61._8_8_ * local_118.Rotation.XY.m128d_f64[0] -
           dVar77 * local_118.Rotation.XY.m128d_f64[1];
      auVar62._8_8_ =
           auVar75._0_8_ * local_118.Rotation.XY.m128d_f64[1] -
           dVar33 * local_118.Rotation.ZW.m128d_f64[0];
      auVar27._8_4_ = SUB84(auVar62._8_8_,0);
      auVar27._0_8_ = auVar62._0_8_;
      auVar27._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
      auVar41._0_8_ =
           auVar24._0_8_ * local_118.Rotation.ZW.m128d_f64[0] - auVar75._0_8_ * auVar68._0_8_;
      auVar41._8_8_ =
           auVar24._8_8_ * local_118.Rotation.ZW.m128d_f64[1] - auVar75._8_8_ * auVar68._8_8_;
      auVar24 = blendpd(auVar62,auVar41,2);
      _Var53.m128d_f64[0] = 0.0 - (auVar27._8_8_ + dVar77 * auVar60._8_8_ + dVar66);
      _Var53.m128d_f64[1] =
           0.0 - (auVar41._0_8_ + auVar52._8_8_ * local_118.Rotation.ZW.m128d_f64[1] + dVar70);
      local_118.Translation.ZW.m128d_f64[0] =
           0.0 - (auVar24._0_8_ + auVar75._0_8_ * auVar60._8_8_ + dVar72);
    }
    goto LAB_14d377d49;
  }
  auVar54._0_8_ =
       (double)CONCAT44(uVar4 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        uVar35 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar54._8_4_ = auVar68._8_4_ & _UNK_15061cc88;
  auVar54._12_4_ = auVar68._12_4_ & _UNK_15061cc8c;
  auVar28._8_8_ = -(ulonglong)(auVar22._8_8_ < auVar54._8_8_);
  auVar28._0_8_ = -(ulonglong)(dVar72 < auVar54._0_8_);
  uVar17 = movmskpd((int)pTVar14,auVar28);
  uVar78 = auVar24._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar79 = auVar24._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar80 = auVar24._8_4_ & _UNK_15061cc88;
  uVar81 = auVar24._12_4_ & _UNK_15061cc8c;
  auVar42._8_4_ = SUB84(dVar70,0);
  auVar42._0_8_ = dVar66;
  auVar42._12_4_ = uVar82;
  lVar19 = -(ulonglong)(auVar42._8_8_ < (double)CONCAT44(uVar81,uVar80));
  auVar43._8_8_ = lVar19;
  auVar43._0_8_ = -(ulonglong)(dVar66 < (double)CONCAT44(uVar79,uVar78));
  iVar13 = movmskpd((int)pTVar18,auVar43);
  if ((uVar17 & 0x3fffffff) == 0 && iVar13 == 0) {
    local_178.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_178.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_178.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_178.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_178.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_178.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    local_118.Rotation.ZW.m128d_f64[0] =
         local_118.Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_118.Rotation.ZW.m128d_f64[1] =
         local_118.Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar83 = SUB84(local_118.Rotation.ZW.m128d_f64[1],0);
    uVar32 = (undefined4)((ulonglong)local_118.Rotation.ZW.m128d_f64[1] >> 0x20);
    auVar11._4_8_ = lVar19;
    auVar11._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar44._0_8_ = auVar11._0_8_ << 0x20;
    auVar44._8_4_ = uVar2;
    auVar44._12_4_ = uVar3;
    local_118.Rotation.XY.m128d_f64[0] =
         local_118.Rotation.XY.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_118.Rotation.XY.m128d_f64[1] =
         local_118.Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar82 = SUB84(local_118.Rotation.XY.m128d_f64[1],0);
    uVar34 = (undefined4)((ulonglong)local_118.Rotation.XY.m128d_f64[1] >> 0x20);
    auVar45._8_8_ = auVar44._8_8_;
    auVar45._0_8_ = auVar68._0_8_;
    auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar24);
    lVar19 = -(ulonglong)
              ((double)CONCAT44(uVar4 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                uVar35 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar72);
    lVar20 = -(ulonglong)((double)CONCAT44(uVar79,uVar78) <= dVar66);
    lVar21 = -(ulonglong)((double)CONCAT44(uVar81,uVar80) <= dVar70);
    local_178.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar20 & auVar24._0_4_;
    local_178.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar24._4_4_;
    local_178.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar21 & auVar24._8_4_;
    local_178.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar21 >> 0x20) & auVar24._12_4_;
    auVar69._8_4_ = uVar82;
    auVar69._0_8_ = local_118.Rotation.XY.m128d_f64[0];
    auVar69._12_4_ = uVar34;
    dVar72 = (double)CONCAT44(local_178.Scale3D.XY.m128d_f64[0]._4_4_,
                              local_178.Scale3D.XY.m128d_f64[0]._0_4_) *
             (pTVar14->Translation).XY.m128d_f64[0];
    dVar77 = (double)CONCAT44(local_178.Scale3D.XY.m128d_f64[1]._4_4_,
                              local_178.Scale3D.XY.m128d_f64[1]._0_4_) *
             (pTVar14->Translation).XY.m128d_f64[1];
    auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar45);
    dVar71 = auVar69._8_8_;
    local_178.Scale3D.ZW.m128d_f64[0] =
         (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar24._4_4_,
                          ~(uint)lVar19 & auVar24._0_4_);
    auVar55._8_4_ = SUB84(dVar77,0);
    auVar55._0_8_ = dVar72;
    auVar55._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
    auVar29._8_4_ = SUB84(local_118.Rotation.ZW.m128d_f64[0],0);
    auVar29._0_8_ = dVar71;
    auVar29._12_4_ = (int)((ulonglong)local_118.Rotation.ZW.m128d_f64[0] >> 0x20);
    dVar33 = local_178.Scale3D.ZW.m128d_f64[0] * (pTVar14->Translation).ZW.m128d_f64[0];
    dVar70 = (pTVar14->Translation).ZW.m128d_f64[1] * 0.0;
    auVar24._8_4_ = SUB84(dVar70,0);
    auVar24._0_8_ = dVar33;
    auVar24._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
    auVar24 = blendpd(auVar55,auVar24,2);
    auVar76._8_4_ = uVar82;
    auVar76._0_8_ = local_118.Rotation.XY.m128d_f64[0];
    auVar76._12_4_ = uVar34;
    auVar68._8_4_ = uVar83;
    auVar68._0_8_ = local_118.Rotation.ZW.m128d_f64[0];
    auVar68._12_4_ = uVar32;
    auVar68 = blendpd(auVar76,auVar68,2);
    dVar66 = dVar33 * local_118.Rotation.XY.m128d_f64[1] - auVar29._8_8_ * dVar77;
    local_178.Rotation.XY.m128d_f64[1]._0_4_ = uVar82;
    local_178.Rotation.XY.m128d_f64[0] = local_118.Rotation.XY.m128d_f64[0];
    local_178.Rotation.XY.m128d_f64[1]._4_4_ = uVar34;
    auVar63._8_4_ = SUB84(dVar66,0);
    auVar63._0_8_ = dVar77 * local_118.Rotation.XY.m128d_f64[0] - dVar71 * dVar72;
    auVar63._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
    local_178.Rotation.ZW.m128d_f64[1]._0_4_ = uVar83;
    local_178.Rotation.ZW.m128d_f64[0] = local_118.Rotation.ZW.m128d_f64[0];
    local_178.Rotation.ZW.m128d_f64[1]._4_4_ = uVar32;
    auVar56._0_8_ = auVar24._0_8_ * local_118.Rotation.ZW.m128d_f64[0] - auVar68._0_8_ * dVar33;
    auVar56._8_8_ = auVar24._8_8_ * local_118.Rotation.ZW.m128d_f64[1] - auVar68._8_8_ * dVar70;
    auVar46._8_4_ = uVar83;
    auVar46._0_8_ = local_118.Rotation.ZW.m128d_f64[0];
    auVar46._12_4_ = uVar32;
    auVar24 = blendpd(auVar63,auVar56,2);
    dVar66 = dVar66 + dVar66;
    dVar70 = auVar56._0_8_ + auVar56._0_8_;
    uVar82 = (undefined4)((ulonglong)dVar70 >> 0x20);
    auVar64._0_8_ = auVar24._0_8_ + auVar24._0_8_;
    auVar64._8_8_ = auVar24._8_8_ + auVar24._8_8_;
    auVar57._8_4_ = SUB84(dVar70,0);
    auVar57._0_8_ = dVar66;
    auVar57._12_4_ = uVar82;
    auVar65._8_4_ = uVar83;
    auVar65._0_8_ = local_118.Rotation.ZW.m128d_f64[1];
    auVar65._12_4_ = uVar32;
    auVar30._8_4_ = SUB84(dVar70,0);
    auVar30._0_8_ = dVar66;
    auVar30._12_4_ = uVar82;
    auVar24 = blendpd(auVar30,auVar64,2);
    dVar58 = auVar64._0_8_ * local_118.Rotation.XY.m128d_f64[1] -
             local_118.Rotation.ZW.m128d_f64[0] * dVar70;
    auVar47._0_8_ =
         local_118.Rotation.ZW.m128d_f64[0] * auVar24._0_8_ - auVar68._0_8_ * auVar64._0_8_;
    auVar47._8_8_ = auVar46._8_8_ * auVar24._8_8_ - auVar68._8_8_ * auVar64._8_8_;
    auVar31._8_4_ = SUB84(dVar58,0);
    auVar31._0_8_ = auVar57._8_8_ * local_118.Rotation.XY.m128d_f64[0] - dVar71 * dVar66;
    auVar31._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
    auVar24 = blendpd(auVar31,auVar47,2);
    local_178.Translation.ZW.m128d_f64[1] = 0.0;
    local_178.Translation.ZW.m128d_f64[0] =
         0.0 - (dVar33 + local_118.Rotation.ZW.m128d_f64[1] * auVar64._0_8_ + auVar24._0_8_);
    local_178.Translation.XY.m128d_f64[1] = 0.0 - (auVar47._0_8_ + dVar77 + auVar65._8_8_ * dVar70);
    local_178.Translation.XY.m128d_f64[0] =
         0.0 - (dVar58 + dVar72 + local_118.Rotation.ZW.m128d_f64[1] * dVar66);
    local_178.Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  pUVar15 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)
                       &(pUVar12->TrackerAActors).OriginActor);
  if (pUVar15 == (UObject *)0x0) {
LAB_14d377c98:
    pUVar15 = (UObject *)0x0;
  }
  else {
    pUVar16 = Z_Construct_UClass_AActor_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14d377c98;
  }
  pTVar18 = (TTransform<double> *)(*(longlong *)(pUVar15 + 0xb) + 0x1f0);
  if (*(longlong *)(pUVar15 + 0xb) == 0) {
    pTVar18 = &UE::Math::TTransform<double>::Identity;
  }
  local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_118.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_118.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_118.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_118.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_118.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_118.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_118,&local_178,pTVar18);
  _Var53.m128d_f64[1] = local_118.Translation.XY.m128d_f64[1];
  _Var53.m128d_f64[0] = local_118.Translation.XY.m128d_f64[0];
  uVar82 = SUB84(local_118.Translation.ZW.m128d_f64[1],0);
  uVar83 = (undefined4)((ulonglong)local_118.Translation.ZW.m128d_f64[1] >> 0x20);
LAB_14d377d49:
  auVar9._8_4_ = SUB84(local_118.Rotation.XY.m128d_f64[1],0);
  auVar9._0_8_ = local_118.Rotation.XY.m128d_f64[0];
  auVar9._12_4_ = (int)((ulonglong)local_118.Rotation.XY.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar9;
  auVar7._8_4_ = SUB84(local_118.Rotation.ZW.m128d_f64[1],0);
  auVar7._0_8_ = local_118.Rotation.ZW.m128d_f64[0];
  auVar7._12_4_ = (int)((ulonglong)local_118.Rotation.ZW.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x10) = auVar7;
  *(double (*) [2])((longlong)param_3 + 0x20) = _Var53.m128d_f64;
  auVar6._8_4_ = uVar82;
  auVar6._0_8_ = local_118.Translation.ZW.m128d_f64[0];
  auVar6._12_4_ = uVar83;
  *(undefined1 (*) [16])((longlong)param_3 + 0x30) = auVar6;
  *(uint *)((longlong)param_3 + 0x40) = local_118.Scale3D.XY.m128d_f64[0]._0_4_;
  *(uint *)((longlong)param_3 + 0x44) = local_118.Scale3D.XY.m128d_f64[0]._4_4_;
  *(uint *)((longlong)param_3 + 0x48) = local_118.Scale3D.XY.m128d_f64[1]._0_4_;
  *(uint *)((longlong)param_3 + 0x4c) = local_118.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x50) = local_118.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x54) = local_118.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x58) = local_118.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x5c) = local_118.Scale3D.ZW.m128d_f64[1]._4_4_;
  return;
}

// execGetMinimumRequiredTrackerAligmentSampleCount @ 14d377db0

void __cdecl
UTrackingAlignmentFunctionLibrary::execGetMinimumRequiredTrackerAligmentSampleCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 5;
  return;
}

