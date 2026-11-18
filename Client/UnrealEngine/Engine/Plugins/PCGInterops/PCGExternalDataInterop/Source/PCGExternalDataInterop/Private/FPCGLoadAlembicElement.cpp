// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGExternalDataInterop
// Functions: 4

// CreateContext @ 14cefba70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall FPCGLoadAlembicElement::CreateContext(FPCGLoadAlembicElement *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2a0);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined1 *)&this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00->_padding_ = (longlong)&FPCGLoadAlembicContext::_vftable__for__FPCGContext__;
    this_00[1]._padding_ =
         (longlong)&FPCGLoadAlembicContext::_vftable__for__IPCGAsyncLoadingContext__;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// ExecuteLoad @ 14cefbc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

bool __thiscall
FPCGLoadAlembicElement::ExecuteLoad(FPCGLoadAlembicElement *this,FPCGExternalDataContext *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  undefined1 uVar25;
  bool bVar26;
  uint uVar27;
  int iVar28;
  UPCGLoadAlembicSettings *pUVar29;
  TRotator<double> *this_00;
  TQuat<double> *pTVar30;
  UClass *pUVar31;
  int iVar32;
  uint uVar33;
  TTransform<double> *pTVar34;
  FScriptContainerElement *pFVar35;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  longlong lVar38;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  longlong local_2b0;
  undefined1 local_2a8 [8];
  FScriptContainerElement *local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  TRotator<double> local_238;
  TQuat<double> local_218;
  longlong local_1f8;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  bVar24 = FPCGExternalDataElement::ExecuteLoad((FPCGExternalDataElement *)this,param_1);
  if (!bVar24) {
    return bVar24;
  }
  if (param_1 == (FPCGExternalDataContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("InContext",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGExternalDataInterop\\Source\\PCGExternalDataInterop\\Private\\Elements\\PCGLoadAlembicElement.cpp"
                        ,0xbc,L"");
    if (bVar24) {
      pcVar2 = (code *)swi(3);
      uVar25 = (*pcVar2)();
      return (bool)uVar25;
    }
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Context",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGExternalDataInterop\\Source\\PCGExternalDataInterop\\Private\\Elements\\PCGLoadAlembicElement.cpp"
                        ,0xbe,L"");
    if (bVar24) {
      pcVar2 = (code *)swi(3);
      uVar25 = (*pcVar2)();
      return (bool)uVar25;
    }
  }
  pUVar29 = FPCGContext::GetInputSettings<UPCGLoadAlembicSettings>((FPCGContext *)param_1);
  if ((pUVar29 == (UPCGLoadAlembicSettings *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGExternalDataInterop\\Source\\PCGExternalDataInterop\\Private\\Elements\\PCGLoadAlembicElement.cpp"
                          ,0xc0,L""), bVar24)) {
    pcVar2 = (code *)swi(3);
    uVar25 = (*pcVar2)();
    return (bool)uVar25;
  }
  bVar24 = pUVar29->bConversionFlipHandedness;
  this_00 = UE::Math::TRotator<double>::MakeFromEuler(&local_238,&pUVar29->ConversionRotation);
  pTVar30 = UE::Math::TRotator<double>::Quaternion(this_00,&local_218);
  dVar15 = __real_bff0000000000000;
  local_258 = pTVar30->X;
  dStack_250 = pTVar30->Y;
  local_248 = pTVar30->Z;
  dStack_240 = pTVar30->W;
  local_118.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_118.Translation.ZW.m128d_f64[1] = 0.0;
  dVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z -
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  dVar13 = 0.0 - UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_118.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_118.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X -
          UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  dVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_118.Scale3D.XY.m128d_f64[0] = (pUVar29->ConversionScale).field0_0x0._s_0.X;
  local_118.Scale3D.XY.m128d_f64[1] = (pUVar29->ConversionScale).field0_0x0._s_0.Y;
  local_118.Scale3D.ZW.m128d_f64[0] = (pUVar29->ConversionScale).field0_0x0._s_0.Z;
  lVar38 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar13,0) & _UNK_15061cc88));
  auVar7._8_4_ = (int)lVar38;
  auVar7._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar7._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
  uVar27 = movmskpd((int)pTVar30,auVar7);
  lVar38 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar10,0) & _UNK_15061cc88));
  auVar3._8_4_ = (int)lVar38;
  auVar3._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar3._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
  iVar32 = movmskpd((int)this_00,auVar3);
  local_298 = __real_3f1a36e2e0000000;
  local_118.Scale3D.ZW.m128d_f64[1] = 0.0;
  if ((uVar27 & 0x3fffffff) == 0 && iVar32 == 0) {
    local_290 = __real_3f1a36e2e0000000;
    lVar38 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)
                                      (dStack_240 -
                                      UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
                                      [1]) >> 0x20) & _UNK_15061cc8c,
                               SUB84(dStack_240 -
                                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]
                                     ,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar38;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_248 -
                                            UE::Math::TTransform<double>::Identity.Rotation.ZW.
                                            m128d_f64[0]) >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_248 -
                                           UE::Math::TTransform<double>::Identity.Rotation.ZW.
                                           m128d_f64[0],0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar4._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
    iVar28 = movmskpd(0,auVar4);
    lVar38 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)
                                      (dStack_250 -
                                      UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
                                      [1]) >> 0x20) & _UNK_15061cc8c,
                               SUB84(dStack_250 -
                                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]
                                     ,0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar38;
    auVar8._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_258 -
                                            UE::Math::TTransform<double>::Identity.Rotation.XY.
                                            m128d_f64[0]) >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_258 -
                                           UE::Math::TTransform<double>::Identity.Rotation.XY.
                                           m128d_f64[0],0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar8._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
    uVar33 = movmskpd(iVar32,auVar8);
    uVar27 = iVar28 * 4 | uVar33;
    if (uVar27 != 0) {
      lVar38 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)
                                        (dStack_240 +
                                        UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
                                        [1]) >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dStack_240 +
                                       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
                                       [1],0) & _UNK_15061cc88));
      auVar11._8_4_ = (int)lVar38;
      auVar11._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)
                                    (local_248 +
                                    UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0])
                                   >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_248 +
                                   UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0],0
                                  ) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar11._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      uVar27 = movmskpd(uVar27,auVar11);
      lVar38 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)
                                        (dStack_250 +
                                        UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
                                        [1]) >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dStack_250 +
                                       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
                                       [1],0) & _UNK_15061cc88));
      auVar5._8_4_ = (int)lVar38;
      auVar5._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)
                                              (local_258 +
                                              UE::Math::TTransform<double>::Identity.Rotation.XY.
                                              m128d_f64[0]) >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(local_258 +
                                             UE::Math::TTransform<double>::Identity.Rotation.XY.
                                             m128d_f64[0],0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar5._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      uVar33 = movmskpd(uVar33,auVar5);
      if ((uVar27 & 0x3fffffff) != 0 || uVar33 != 0) goto LAB_14cefbeb5;
    }
    dVar12 = local_118.Scale3D.ZW.m128d_f64[0] -
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    dVar13 = 0.0 - UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    dVar9 = local_118.Scale3D.XY.m128d_f64[0] -
            UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    dVar10 = local_118.Scale3D.XY.m128d_f64[1] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_288 = __real_3f1a36e2e0000000;
    lVar38 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar13,0) & _UNK_15061cc88));
    auVar14._8_4_ = (int)lVar38;
    auVar14._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar14._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
    uVar27 = movmskpd(0,auVar14);
    lVar38 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar10,0) & _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar38;
    auVar6._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar6._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
    iVar32 = movmskpd(uVar33,auVar6);
    if (((uVar27 & 0x3fffffff) == 0 && iVar32 == 0) && (bVar24 == false)) {
      return true;
    }
  }
LAB_14cefbeb5:
  iVar32 = (param_1->PointDataAccessorsMapping).ArrayNum;
  pFVar37 = (param_1->PointDataAccessorsMapping).AllocatorInstance.Data;
  pFVar35 = pFVar37 + (longlong)iVar32 * 0x28;
  local_2a0 = pFVar35;
  local_118.Rotation.XY.m128d_f64[0] = local_258;
  local_118.Rotation.XY.m128d_f64[1] = dStack_250;
  local_118.Rotation.ZW.m128d_f64[0] = local_248;
  local_118.Rotation.ZW.m128d_f64[1] = dStack_240;
  while( true ) {
    if ((param_1->PointDataAccessorsMapping).ArrayNum != iVar32) {
      local_2a8[0] = 0;
      `TCheckedPointerIterator<FPCGExternalDataContext::FPointDataAccessorsMapping,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_2a8);
    }
    if (pFVar37 == pFVar35) break;
    plVar1 = *(longlong **)pFVar37;
    if (plVar1 != (longlong *)0x0) {
      pUVar31 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      iVar28 = (int)pUVar31->_padding_;
      if ((iVar28 <= *(int *)(plVar1[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar1[2] + 0x30) + (longlong)iVar28 * 8) ==
          &pUVar31->_padding_)) {
        (**(code **)(*plVar1 + 0x4c0))
                  (plVar1,&local_1f8,CONCAT71((int7)((ulonglong)&pUVar31->_padding_ >> 8),1));
        uVar27 = 0;
        iVar28 = (**(code **)(*plVar1 + 0x488))(plVar1);
        pFVar35 = local_2a0;
        if (0 < iVar28) {
          do {
            uVar36 = ~uVar27 >> 0x1f;
            uVar33 = 0;
            if ((int)uVar27 < local_1e8) {
              uVar33 = uVar36;
            }
            if (uVar33 == 0) {
              local_2b8 = (longlong)(int)uVar27;
              local_2b0 = (longlong)local_1e8;
              bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar26) {
                pcVar2 = (code *)swi(3);
                uVar25 = (*pcVar2)();
                return (bool)uVar25;
              }
            }
            pTVar34 = &local_1d8;
            if (uVar27 == (int)uVar27 % local_1ec) {
              pTVar34 = (TTransform<double> *)
                        ((longlong)local_1f0 * (longlong)((int)uVar27 % local_1ec) + local_1f8);
            }
            local_178.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_178.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_178.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_178.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_178.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_178.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_178.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_178.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_178.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_178.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_178.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_178.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_178,pTVar34,&local_118);
            dVar9 = local_178.Rotation.XY.m128d_f64[0];
            dVar10 = local_178.Rotation.XY.m128d_f64[1];
            dVar12 = local_178.Rotation.ZW.m128d_f64[0];
            dVar13 = local_178.Rotation.ZW.m128d_f64[1];
            dVar16 = local_178.Translation.XY.m128d_f64[0];
            dVar17 = local_178.Translation.XY.m128d_f64[1];
            uVar33 = 0;
            if ((int)uVar27 < local_1e8) {
              uVar33 = uVar36;
            }
            dVar18 = local_178.Translation.ZW.m128d_f64[0];
            dVar19 = local_178.Translation.ZW.m128d_f64[1];
            dVar20 = local_178.Scale3D.XY.m128d_f64[0];
            dVar21 = local_178.Scale3D.XY.m128d_f64[1];
            dVar22 = local_178.Scale3D.ZW.m128d_f64[0];
            dVar23 = local_178.Scale3D.ZW.m128d_f64[1];
            if (uVar33 == 0) {
              local_2b8 = (longlong)(int)uVar27;
              local_2b0 = (longlong)local_1e8;
              bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar26) {
                pcVar2 = (code *)swi(3);
                uVar25 = (*pcVar2)();
                return (bool)uVar25;
              }
            }
            pTVar34 = &local_1d8;
            if (uVar27 == (int)uVar27 % local_1ec) {
              pTVar34 = (TTransform<double> *)
                        ((longlong)local_1f0 * (longlong)((int)uVar27 % local_1ec) + local_1f8);
            }
            (pTVar34->Rotation).XY.m128d_f64[0] = dVar9;
            (pTVar34->Rotation).XY.m128d_f64[1] = dVar10;
            (pTVar34->Rotation).ZW.m128d_f64[0] = dVar12;
            (pTVar34->Rotation).ZW.m128d_f64[1] = dVar13;
            (pTVar34->Translation).XY.m128d_f64[0] = dVar16;
            (pTVar34->Translation).XY.m128d_f64[1] = dVar17;
            (pTVar34->Translation).ZW.m128d_f64[0] = dVar18;
            (pTVar34->Translation).ZW.m128d_f64[1] = dVar19;
            (pTVar34->Scale3D).XY.m128d_f64[0] = dVar20;
            (pTVar34->Scale3D).XY.m128d_f64[1] = dVar21;
            (pTVar34->Scale3D).ZW.m128d_f64[0] = dVar22;
            (pTVar34->Scale3D).ZW.m128d_f64[1] = dVar23;
            if (bVar24 != false) {
              uVar33 = 0;
              if ((int)uVar27 < local_1e8) {
                uVar33 = uVar36;
              }
              if (uVar33 == 0) {
                local_2b8 = (longlong)(int)uVar27;
                local_2b0 = (longlong)local_1e8;
                bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar26) {
                  pcVar2 = (code *)swi(3);
                  uVar25 = (*pcVar2)();
                  return (bool)uVar25;
                }
              }
              pTVar34 = &local_1d8;
              if (uVar27 == (int)uVar27 % local_1ec) {
                pTVar34 = (TTransform<double> *)
                          ((longlong)local_1f0 * (longlong)((int)uVar27 % local_1ec) + local_1f8);
              }
              local_268 = (pTVar34->Rotation).ZW.m128d_f64[0];
              dVar9 = (pTVar34->Rotation).XY.m128d_f64[0];
              dVar10 = (pTVar34->Rotation).XY.m128d_f64[1];
              uVar33 = 0;
              if ((int)uVar27 < local_1e8) {
                uVar33 = uVar36;
              }
              uStack_260 = (pTVar34->Rotation).ZW.m128d_f64[1] * dVar15;
              if (uVar33 == 0) {
                local_2b0 = (longlong)local_1e8;
                local_2b8 = (longlong)(int)uVar27;
                bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar26) {
                  pcVar2 = (code *)swi(3);
                  uVar25 = (*pcVar2)();
                  return (bool)uVar25;
                }
              }
              pTVar34 = &local_1d8;
              if (uVar27 == (int)uVar27 % local_1ec) {
                pTVar34 = (TTransform<double> *)
                          ((longlong)local_1f0 * (longlong)((int)uVar27 % local_1ec) + local_1f8);
              }
              (pTVar34->Rotation).XY.m128d_f64[0] = dVar9;
              (pTVar34->Rotation).XY.m128d_f64[1] = dVar10;
              *(undefined4 *)(pTVar34->Rotation).ZW.m128d_f64 = (undefined4)local_268;
              *(undefined4 *)((longlong)(pTVar34->Rotation).ZW.m128d_f64 + 4) = local_268._4_4_;
              *(undefined4 *)((pTVar34->Rotation).ZW.m128d_f64 + 1) = (undefined4)uStack_260;
              *(undefined4 *)((longlong)(pTVar34->Rotation).ZW.m128d_f64 + 0xc) = uStack_260._4_4_;
            }
            uVar27 = uVar27 + 1;
            iVar28 = (**(code **)(*plVar1 + 0x488))(plVar1);
            pFVar35 = local_2a0;
          } while ((int)uVar27 < iVar28);
        }
      }
    }
    pFVar37 = pFVar37 + 0x28;
  }
  return true;
}

// GetDependenciesCrc @ 14cefc2b0

void __thiscall
FPCGLoadAlembicElement::GetDependenciesCrc
          (FPCGLoadAlembicElement *this,FPCGGetDependenciesCrcParams *param_1,FPCGCrc *param_2)

{
  int iVar1;
  UPCGSettings *pUVar2;
  FPCGCrc FVar3;
  UClass *pUVar4;
  IFileManager *pIVar5;
  wchar_t *pwVar6;
  FPCGCrc local_res10;
  longlong local_res18 [2];
  
  local_res10.Value = 0;
  local_res10._4_4_ = local_res10._4_4_ & 0xffffff00;
  IPCGElement::GetDependenciesCrc((IPCGElement *)this,param_1,&local_res10);
  pUVar2 = param_1->Settings;
  if (pUVar2 != (UPCGSettings *)0x0) {
    pUVar4 = UPCGLoadAlembicSettings::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pIVar5 = IFileManager::Get();
      if (*(int *)&pUVar2[1].OriginalSettings == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)&pUVar2[1].Seed;
      }
      (**(code **)((longlong)*pIVar5 + 0xd8))(pIVar5,local_res18,pwVar6);
      if (local_res18[0] != 0) {
        local_res10.Value =
             local_res10.Value ^
             (local_res10.Value >> 2) + 0x9e3779b9 +
             local_res10.Value * 0x40 + (int)local_res18[0] +
             (int)((ulonglong)local_res18[0] >> 0x20) * 0x17;
      }
    }
  }
  FVar3.bValid = local_res10.bValid;
  FVar3._5_3_ = local_res10._5_3_;
  FVar3.Value = local_res10.Value;
  *param_2 = FVar3;
  return;
}

// PrepareLoad @ 14cefc480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGLoadAlembicElement::PrepareLoad(FPCGLoadAlembicElement *this,FPCGExternalDataContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPCGLoadAlembicSettings *pUVar4;
  FText *this_00;
  FString local_48;
  FString local_38;
  FText local_28;
  
  if (param_1 == (FPCGExternalDataContext *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGExternalDataInterop\\Source\\PCGExternalDataInterop\\Private\\Elements\\PCGLoadAlembicElement.cpp"
                       ,0x98,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGExternalDataInterop\\Source\\PCGExternalDataInterop\\Private\\Elements\\PCGLoadAlembicElement.cpp"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FPCGContext::GetInputSettings<UPCGLoadAlembicSettings>((FPCGContext *)param_1);
  if ((pUVar4 == (UPCGLoadAlembicSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGExternalDataInterop\\Source\\PCGExternalDataInterop\\Private\\Elements\\PCGLoadAlembicElement.cpp"
                         ,0x9d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (1 < (byte)LogPCG._0_1_) {
    this_00 = FText::AsLocalizable_Advanced_LocText
                        (&local_28,L"PCGLoadAlembic",L"NotSupportedInGameMode",
                         L"The Load Alembic node is not support in non-editor builds.");
    FText::ToString(this_00);
    bVar2 = param_1 != (FPCGExternalDataContext *)0x0;
    if (bVar2) {
      FPCGContext::GetTaskName((FPCGContext *)param_1,&local_38);
      FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_48);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  return true;
}

