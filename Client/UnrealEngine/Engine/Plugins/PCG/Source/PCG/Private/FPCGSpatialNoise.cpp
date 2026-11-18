// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149c1f8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __thiscall FPCGSpatialNoise::ExecuteInternal(FPCGSpatialNoise *this,FPCGContext *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  IPCGElement *pIVar4;
  PCGSpatialNoiseMode PVar5;
  PCGSpatialNoiseMask2DMode PVar6;
  UPCGNode *this_00;
  IPCGGraphExecutionSource *pIVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  bool bVar22;
  undefined1 uVar23;
  char cVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  UClass *pUVar28;
  UPCGSettings *pUVar29;
  TObjectPtr<UPCGSettings>_u_0 TVar30;
  UObjectBaseUtility *this_01;
  longlong *plVar31;
  longlong *plVar32;
  double *pdVar33;
  TQuat<double> *pTVar34;
  FPCGTaggedData *pFVar35;
  FText *pFVar36;
  FObjectPtr_u_0 *pFVar37;
  uint uVar38;
  uint uVar39;
  TRotator<double> *this_02;
  FPCGAsyncState *pFVar40;
  ForAnyElementType FVar41;
  bool bVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  double dVar50;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 uVar64;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar69;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar70;
  undefined4 uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined4 uVar74;
  undefined4 uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined1 auStackY_868 [32];
  <lambda_1> local_817 [7];
  FObjectPtr_u_0 *local_810;
  FObjectPtr_u_0 local_808;
  UPCGBasePointData *pUStack_800;
  FObjectPtr_u_0 local_7f8;
  undefined8 uStack_7f0;
  TObjectPtr<UPCGSettings>_u_0 local_7e8;
  FProcessResults local_7e0;
  FProcessResults local_7d0;
  FProcessResults local_7c0;
  FProcessResults local_7b0;
  FProcessResults local_7a0;
  FProcessResults local_790;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_780;
  _func___cdecl_double_TVector2<double>_int *local_770;
  _func___cdecl_double_TVector2<double>_int *local_768;
  _func___cdecl_double_TVector2<double>_int *local_760;
  _func___cdecl_double_TVector2<double>_int *local_758;
  _func___cdecl_double_TVector2<double>_int *local_750;
  _func___cdecl_double_TVector2<double>_int *local_748;
  <lambda_1> local_740;
  FScriptContainerElement *local_728;
  int iStack_720;
  undefined4 uStack_71c;
  <lambda_1> local_718;
  FScriptContainerElement *local_708;
  int iStack_700;
  undefined4 uStack_6fc;
  <lambda_1> local_6f8;
  FScriptContainerElement *local_6e8;
  int iStack_6e0;
  undefined4 uStack_6dc;
  <lambda_1> local_6d8;
  FScriptContainerElement *local_6c8;
  int iStack_6c0;
  undefined4 uStack_6bc;
  <lambda_1> local_6b8;
  FScriptContainerElement *local_6a8;
  int iStack_6a0;
  undefined4 uStack_69c;
  <lambda_1> local_698;
  FScriptContainerElement *local_688;
  int iStack_680;
  undefined4 uStack_67c;
  <lambda_2> local_678;
  <lambda_2> local_658;
  <lambda_2> local_638;
  <lambda_2> local_618;
  <lambda_2> local_5f0;
  <lambda_2> local_5c8;
  FString local_5a0;
  FString local_590;
  FText local_580;
  FString local_570;
  FString local_560;
  FText local_550;
  TArrayView<double_const_,int> local_538;
  TArrayView<double_const_,int> local_528;
  TArrayView<double_const_,int> local_518;
  TArrayView<double_const_,int> local_508;
  TArrayView<double_const_,int> local_4f8;
  TArrayView<double_const_,int> local_4e8;
  TQuat<double> local_4d8;
  undefined1 local_4b8 [16];
  double local_4a8;
  undefined1 local_4a0 [16];
  double local_490;
  TRotator<double> local_488;
  undefined1 local_470 [16];
  double local_460;
  undefined1 local_458 [16];
  double local_448;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  double local_3c8;
  undefined8 uStack_3c0;
  uint local_3b8;
  uint uStack_3b4;
  uint uStack_3b0;
  uint uStack_3ac;
  double local_3a8;
  undefined8 uStack_3a0;
  TQuat<double> local_398;
  TQuat<double> local_378;
  undefined1 local_358 [176];
  __m128d local_2a8;
  double local_298;
  double dStack_290;
  __m128d local_288;
  __m128d local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  int local_238;
  bool local_234;
  TTransform<double> local_228;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined1 local_188 [16];
  double local_178;
  TTransform<double> local_168;
  undefined1 local_108 [56];
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_868;
  local_810 = (FObjectPtr_u_0 *)((ulonglong)local_810 & 0xffffffff00000000);
  bVar42 = -1 < CpuChannel->Enabled;
  if (bVar42) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId680,"FPCGSpatialNoise::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpatialNoise.cpp"
               ,0x2a8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId680);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar29 = UPCGNode::GetSettings(this_00), pUVar29 == (UPCGSettings *)0x0)) {
      pFVar35 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpatialNoiseSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_817[0]);
      if (pFVar35 != (FPCGTaggedData *)0x0) {
        local_7e8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar35->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGSpatialNoiseSettings *)local_7e8.DebugPtr == (UPCGSpatialNoiseSettings *)0x0)
          goto LAB_149c1fa01;
          UE::GC::MarkAsReachable((UObject *)local_7e8.DebugPtr);
        }
        if ((UPCGSpatialNoiseSettings *)local_7e8.DebugPtr != (UPCGSpatialNoiseSettings *)0x0) {
          pUVar28 = UPCGSpatialNoiseSettings::StaticClass();
          bVar22 = FObjectPtr::IsA(&local_7e8.ObjectPtr,pUVar28);
          TVar30 = local_7e8;
          if (bVar22) goto LAB_149c1fa03;
        }
      }
    }
    else {
      pUVar29 = UPCGNode::GetSettings(this_00);
      TVar30.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar29);
      if ((UPCGSpatialNoiseSettings *)TVar30.DebugPtr != (UPCGSpatialNoiseSettings *)0x0) {
        pUVar28 = UPCGSpatialNoiseSettings::StaticClass();
        iVar25 = (int)pUVar28->_padding_;
        if ((iVar25 <= *(int *)((TVar30.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar30.DebugPtr)->_padding_ + 0x30) + (longlong)iVar25 * 8) ==
            &pUVar28->_padding_)) goto LAB_149c1fa03;
      }
    }
  }
  else {
    pUVar28 = UPCGSpatialNoiseSettings::StaticClass();
    bVar22 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar28);
    if (bVar22) {
      TVar30.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      goto LAB_149c1fa03;
    }
  }
LAB_149c1fa01:
  TVar30.DebugPtr = (UPCGSettings *)0x0;
LAB_149c1fa03:
  if (((UPCGSpatialNoiseSettings *)TVar30.DebugPtr == (UPCGSpatialNoiseSettings *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpatialNoise.cpp"
                          ,0x2ab,L""), bVar22)) {
    pcVar8 = (code *)swi(3);
    uVar23 = (*pcVar8)();
    return (bool)uVar23;
  }
  iVar25 = FPCGContext::GetSeed(param_1);
  uVar38 = iVar25 * 0xbb38435 + 0x3619636b;
  uVar26 = uVar38 * 0xbb38435 + 0x3619636b;
  fVar47 = (float)(uVar26 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - __real_3f800000;
  fVar48 = (float)(uVar26 >> 9 | 0x3f800000) - __real_3f800000;
  dVar2 = (((TVector<double> *)&TVar30.DebugPtr[1].OriginalSettings)->field0_0x0)._s_0.X;
  fVar49 = (float)(uVar38 >> 9 | 0x3f800000) - __real_3f800000;
  dVar3 = *(double *)&TVar30.DebugPtr[1].bUseSeed;
  pIVar4 = TVar30.DebugPtr[1].CachedElement.Object;
  local_358._160_8_ = local_358._160_8_ & 0xffffffffffffff00;
  uVar74 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar75 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_298 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_290 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  uVar70 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar71 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  uVar82 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar83 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_358._80_8_ = (undefined8)GlobalVectorConstants::Float1110.m128_f32[0];
  local_358._88_8_ = (undefined8)GlobalVectorConstants::Float1110.m128_f32[1];
  local_358._96_8_ = (undefined8)GlobalVectorConstants::Float1110.m128_f32[2];
  local_358._104_8_ = (undefined8)GlobalVectorConstants::Float1110.m128_f32[3];
  local_358._24_4_ = uVar74;
  local_358._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_358._28_4_ = uVar75;
  local_358._40_8_ = dStack_290;
  local_358._32_8_ = local_298;
  local_358._56_4_ = uVar70;
  local_358._48_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_358._60_4_ = uVar71;
  local_358._72_4_ = uVar82;
  local_358._64_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_358._76_4_ = uVar83;
  local_2a8.m128d_f64[1]._0_4_ = uVar74;
  local_2a8.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2a8.m128d_f64[1]._4_4_ = uVar75;
  local_288.m128d_f64[1]._0_4_ = uVar70;
  local_288.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_288.m128d_f64[1]._4_4_ = uVar71;
  local_278.m128d_f64[1]._0_4_ = uVar82;
  local_278.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_278.m128d_f64[1]._4_4_ = uVar83;
  local_358._0_8_ = param_1;
  local_268 = (double)local_358._80_8_;
  dStack_260 = (double)local_358._88_8_;
  local_258 = (double)local_358._96_8_;
  dStack_250 = (double)local_358._104_8_;
  if (((((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
       (bVar22 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar22)) &&
      (pIVar7 = (param_1->ExecutionSource).InterfaceInstance,
      pIVar7 != (IPCGGraphExecutionSource *)0x0)) &&
     (this_01 = (UObjectBaseUtility *)(**(code **)((longlong)*pIVar7 + 8))(),
     this_01 != (UObjectBaseUtility *)0x0)) {
    pUVar28 = Z_Construct_UClass_UPCGGraphExecutionSource_NoRegister();
    plVar31 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar28);
    if (plVar31 != (longlong *)0x0) {
      plVar32 = (longlong *)(**(code **)(*plVar31 + 0x18))(plVar31);
      pdVar33 = (double *)(**(code **)(*plVar32 + 0x50))(plVar32,local_108);
      local_358._112_8_ = *pdVar33;
      local_358._120_8_ = pdVar33[1];
      local_358._128_8_ = pdVar33[2];
      local_358._136_8_ = pdVar33[3];
      local_358._144_8_ = pdVar33[4];
      local_358._152_8_ = pdVar33[5];
      local_358._160_8_ = pdVar33[6];
      uVar64 = 0;
      plVar31 = (longlong *)(**(code **)(*plVar31 + 0x18))(plVar31);
      (**(code **)(*plVar31 + 0x30))(plVar31,&local_1c8);
      uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      auVar52 = UE::Math::TVector<double>::OneVector.field0_0x0._0_16_;
      auVar16._4_8_ = uVar64;
      auVar16._0_4_ = local_188._4_4_;
      auVar58._0_8_ = auVar16._0_8_ << 0x20;
      auVar58._8_4_ = local_188._8_4_;
      auVar58._12_4_ = local_188._12_4_;
      uVar26 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
      uVar38 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
      uVar78 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
      uVar79 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
      uVar80 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
      uVar81 = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20);
      local_358._112_8_ = (double)local_358._112_8_ * local_188._0_8_;
      dVar69 = local_188._8_8_;
      local_4b8 = local_188;
      local_358._120_8_ = (double)local_358._120_8_ * auVar58._8_8_;
      local_358._128_8_ = (double)local_358._128_8_ * local_178;
      local_358._136_8_ = (double)local_358._136_8_ * local_188._0_8_;
      local_358._152_8_ = (double)local_358._152_8_ * local_178;
      local_4a0 = local_188;
      local_358._144_8_ = (double)local_358._144_8_ * dVar69;
      local_4a8 = local_178;
      local_4d8.X = local_1c8;
      local_4d8.Y = dStack_1c0;
      local_490 = local_178;
      local_458 = UE::Math::TVector<double>::OneVector.field0_0x0._0_16_;
      local_470 = local_1a8;
      local_4d8.Z = local_1b8;
      local_4d8.W = dStack_1b0;
      UE::Math::TQuat<double>::Rotator(&local_4d8,&local_488);
      this_02 = &local_488;
      pTVar34 = UE::Math::TRotator<double>::Quaternion(this_02,&local_398);
      auVar17._4_8_ = extraout_XMM0_Qb;
      auVar17._0_4_ = local_1a8._4_4_;
      auVar73._0_8_ = auVar17._0_8_ << 0x20;
      auVar73._8_4_ = local_1a8._8_4_;
      auVar73._12_4_ = local_1a8._12_4_;
      local_438 = pTVar34->X;
      dStack_430 = pTVar34->Y;
      local_428 = pTVar34->Z;
      dStack_420 = pTVar34->W;
      local_448 = (double)uVar21;
      local_460 = local_198;
      dVar9 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
      dVar10 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
      dVar50 = (double)GlobalVectorConstants::SmallNumber.m128_f32[2];
      dVar15 = (double)GlobalVectorConstants::SmallNumber.m128_f32[3];
      uVar26 = uVar26 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar38 = uVar38 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar78 = uVar78 & _UNK_15061cc88;
      uVar79 = uVar79 & _UNK_15061cc8c;
      auVar53._8_4_ = SUB84(dVar15,0);
      auVar53._0_8_ = dVar50;
      auVar53._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      auVar51._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
      auVar51._0_8_ =
           -(ulonglong)
            (dVar50 < (double)CONCAT44(uVar81 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       uVar80 & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar59._8_4_ = SUB84(dVar10,0);
      auVar59._0_8_ = dVar9;
      auVar59._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      uVar39 = movmskpd((int)this_02,auVar51);
      auVar60._8_8_ = -(ulonglong)(auVar59._8_8_ < (double)CONCAT44(uVar79,uVar78));
      auVar60._0_8_ = -(ulonglong)(dVar9 < (double)CONCAT44(uVar38,uVar26));
      iVar25 = movmskpd((int)pTVar34,auVar60);
      if ((uVar39 & 0x3fffffff) == 0 && iVar25 == 0) {
        dVar69 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        dVar14 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        dVar12 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        dVar13 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        dVar9 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        dVar10 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        dVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        uVar82 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
        uVar83 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
        local_358._80_4_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        local_358._84_4_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        local_358._88_4_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        local_358._92_4_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        local_358._96_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_358._100_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_358._104_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_358._108_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      else {
        dVar12 = local_428 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar13 = dStack_420 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        uVar70 = (undefined4)((ulonglong)dVar13 >> 0x20);
        auVar18._4_8_ = dVar69;
        auVar18._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
        auVar65._0_8_ = auVar18._0_8_ << 0x20;
        auVar65._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar65._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        dVar69 = local_438 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar14 = dStack_430 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar71 = (undefined4)((ulonglong)dVar14 >> 0x20);
        auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar52);
        auVar66._8_8_ = auVar65._8_8_;
        auVar66._0_8_ = uVar21;
        local_3f8._8_4_ = SUB84(dVar14,0);
        local_3f8._0_8_ = dVar69;
        local_3f8._12_4_ = uVar71;
        local_3e8._8_4_ = SUB84(dVar13,0);
        local_3e8._0_8_ = dVar12;
        local_3e8._12_4_ = uVar70;
        lVar43 = -(ulonglong)
                  ((double)CONCAT44(uVar81 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    uVar80 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar50
                  );
        lVar45 = -(ulonglong)
                  ((double)CONCAT44(GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_ &
                                    _UNK_15061cc8c,
                                    GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_ &
                                    _UNK_15061cc88) <= dVar15);
        local_358._104_4_ = 0;
        local_358._108_4_ = 0;
        lVar44 = -(ulonglong)((double)CONCAT44(uVar38,uVar26) <= dVar9);
        lVar46 = -(ulonglong)((double)CONCAT44(uVar79,uVar78) <= dVar10);
        local_358._80_4_ = ~(uint)lVar44 & auVar52._0_4_;
        local_358._84_4_ = ~(uint)((ulonglong)lVar44 >> 0x20) & auVar52._4_4_;
        local_358._88_4_ = ~(uint)lVar46 & auVar52._8_4_;
        local_358._92_4_ = ~(uint)((ulonglong)lVar46 >> 0x20) & auVar52._12_4_;
        uVar82 = 0;
        uVar83 = 0;
        auVar53 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar66);
        auVar52._4_4_ = ~(uint)((ulonglong)lVar43 >> 0x20) & auVar53._4_4_;
        auVar52._0_4_ = ~(uint)lVar43 & auVar53._0_4_;
        auVar52._8_4_ = ~(uint)lVar45 & auVar53._8_4_;
        auVar52._12_4_ = ~(uint)((ulonglong)lVar45 >> 0x20) & auVar53._12_4_;
        auVar52 = ZEXT816(0) | auVar52;
        auVar54._8_4_ = SUB84(dVar12,0);
        auVar54._0_8_ = dVar14;
        auVar54._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        local_3a8 = auVar52._0_8_;
        local_358._96_4_ = auVar52._0_4_;
        local_358._100_4_ = auVar52._4_4_;
        local_808 = (FObjectPtr_u_0)
                    (local_1a8._0_8_ * (double)CONCAT44(local_358._84_4_,local_358._80_4_));
        pUStack_800 = (UPCGBasePointData *)
                      (auVar73._8_8_ * (double)CONCAT44(local_358._92_4_,local_358._88_4_));
        local_7f8 = (FObjectPtr_u_0)(local_198 * local_3a8);
        auVar72._8_4_ = SUB84(dVar14,0);
        auVar72._0_8_ = dVar69;
        auVar72._12_4_ = uVar71;
        auVar19._8_8_ = pUStack_800;
        auVar19._0_8_ = local_808.Handle;
        uStack_7f0 = 0;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = local_7f8;
        auVar52 = blendpd(auVar19,auVar20,2);
        auVar76._0_8_ = (double)pUStack_800 * dVar69 - dVar14 * (double)local_808;
        auVar76._8_8_ = (double)local_7f8 * dVar14 - auVar54._8_8_ * (double)pUStack_800;
        auVar11._8_4_ = SUB84(dVar13,0);
        auVar11._0_8_ = dVar12;
        auVar11._12_4_ = uVar70;
        auVar73 = blendpd(auVar72,auVar11,2);
        auVar61._0_8_ = auVar52._0_8_ * dVar12 - auVar73._0_8_ * (double)local_7f8;
        auVar61._8_8_ = auVar52._8_8_ * dVar13 - auVar73._8_8_ * 0.0;
        auVar52 = blendpd(auVar76,auVar61,2);
        dVar9 = auVar76._8_8_ + auVar76._8_8_;
        dVar10 = auVar61._0_8_ + auVar61._0_8_;
        uVar70 = SUB84(dVar10,0);
        uVar71 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar77._0_8_ = auVar52._0_8_ + auVar52._0_8_;
        auVar77._8_8_ = auVar52._8_8_ + auVar52._8_8_;
        auVar67._8_4_ = uVar70;
        auVar67._0_8_ = dVar9;
        auVar67._12_4_ = uVar71;
        auVar55._8_4_ = uVar70;
        auVar55._0_8_ = dVar9;
        auVar55._12_4_ = uVar71;
        auVar62._8_4_ = uVar70;
        auVar62._0_8_ = dVar9;
        auVar62._12_4_ = uVar71;
        auVar52 = blendpd(auVar62,auVar77,2);
        auVar68._0_8_ = auVar67._8_8_ * dVar69 - dVar9 * dVar14;
        auVar68._8_8_ = auVar77._0_8_ * dVar14 - auVar55._8_8_ * dVar12;
        auVar56._8_4_ = SUB84(auVar77._8_8_,0);
        auVar56._0_8_ = auVar77._0_8_;
        auVar56._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
        auVar63._0_8_ = auVar52._0_8_ * dVar12 - auVar77._0_8_ * auVar73._0_8_;
        auVar63._8_8_ = auVar52._8_8_ * dVar13 - auVar56._8_8_ * auVar73._8_8_;
        auVar57._8_4_ = SUB84(auVar68._8_8_,0);
        auVar57._0_8_ = auVar68._0_8_;
        auVar57._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
        auVar52 = blendpd(auVar68,auVar63,2);
        dVar50 = 0.0 - (auVar77._0_8_ * dVar13 + (double)local_7f8 + auVar52._0_8_);
        dVar9 = 0.0 - (dVar9 * dVar13 + (double)local_808 + auVar57._8_8_);
        dVar10 = 0.0 - (dVar10 * dVar13 + (double)pUStack_800 + auVar63._0_8_);
        uStack_3c0 = 0;
        local_3d8._8_4_ = SUB84(dVar10,0);
        local_3d8._0_8_ = dVar9;
        local_3d8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        uStack_3a0 = 0;
        local_3c8 = dVar50;
        local_3b8 = local_358._80_4_;
        uStack_3b4 = local_358._84_4_;
        uStack_3b0 = local_358._88_4_;
        uStack_3ac = local_358._92_4_;
      }
      local_358._24_4_ = SUB84(dVar14,0);
      local_358._16_8_ = dVar69;
      local_358._28_4_ = (int)((ulonglong)dVar14 >> 0x20);
      local_358._40_4_ = SUB84(dVar13,0);
      local_358._32_8_ = dVar12;
      local_358._44_4_ = (int)((ulonglong)dVar13 >> 0x20);
      local_358._56_4_ = SUB84(dVar10,0);
      local_358._48_8_ = dVar9;
      local_358._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_358._72_4_ = uVar82;
      local_358._64_8_ = dVar50;
      local_358._76_4_ = uVar83;
      pTVar34 = UE::Math::TRotator<double>::Quaternion
                          (&UE::Math::TRotator<double>::ZeroRotator,&local_378);
      local_408 = pTVar34->Z;
      dStack_400 = pTVar34->W;
      local_418 = pTVar34->X;
      dStack_410 = pTVar34->Y;
      local_168.Translation.ZW.m128d_f64[1] = 0.0;
      local_168.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003f1a36e2eb1c432d;
      local_168.Scale3D.ZW.m128d_f64[1] = _UNK_151f9c338;
      local_228.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_228.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_228.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_228.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_168.Scale3D.XY.m128d_f64[0] = ___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d;
      local_168.Scale3D.XY.m128d_f64[1] = _UNK_150b53828;
      local_228.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_228.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_228.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_228.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_228.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_228.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_228.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_228.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_168.Rotation.XY.m128d_f64[0] = local_418;
      local_168.Rotation.XY.m128d_f64[1] = dStack_410;
      local_168.Rotation.ZW.m128d_f64[0] = local_408;
      local_168.Rotation.ZW.m128d_f64[1] = dStack_400;
      local_168.Translation.XY.m128d_f64[0] = (double)fVar47 * dVar2;
      local_168.Translation.XY.m128d_f64[1] = (double)fVar48 * dVar3;
      local_168.Translation.ZW.m128d_f64[0] = (double)fVar49 * (double)pIVar4;
      UE::Math::TTransform<double>::Multiply
                (&local_228,(TTransform<double> *)&TVar30.DebugPtr[1].CacheLock,&local_168);
      local_2a8.m128d_f64[1] = local_228.Rotation.XY.m128d_f64[1];
      local_2a8.m128d_f64[0] = local_228.Rotation.XY.m128d_f64[0];
      local_298 = local_228.Rotation.ZW.m128d_f64[0];
      dStack_290 = local_228.Rotation.ZW.m128d_f64[1];
      local_288.m128d_f64[1] = local_228.Translation.XY.m128d_f64[1];
      local_288.m128d_f64[0] = local_228.Translation.XY.m128d_f64[0];
      local_278.m128d_f64[1] = local_228.Translation.ZW.m128d_f64[1];
      local_278.m128d_f64[0] = local_228.Translation.ZW.m128d_f64[0];
      local_268 = local_228.Scale3D.XY.m128d_f64[0];
      dStack_260 = local_228.Scale3D.XY.m128d_f64[1];
      local_258 = local_228.Scale3D.ZW.m128d_f64[0];
      dStack_250 = local_228.Scale3D.ZW.m128d_f64[1];
      local_248 = (double)*(float *)&TVar30.DebugPtr[1]._padding_;
      local_240 = (double)*(float *)((longlong)&TVar30.DebugPtr[1]._padding_ + 4);
      local_234 = *(bool *)((longlong)&TVar30.DebugPtr[1]._padding_ + 4);
      local_238 = (int)TVar30.DebugPtr[1]._padding_;
      if (local_238 < 1) {
        local_238 = 1;
      }
      FPCGDataCollection::GetInputsByPin
                (&param_1->InputData,&local_780,&PCGPinConstants::DefaultInputLabel);
      iVar25 = local_780.ArrayNum;
      local_810 = (FObjectPtr_u_0 *)
                  (local_780.AllocatorInstance.Data + (longlong)local_780.ArrayNum * 0x78);
      pFVar37 = local_810;
      FVar41.Data = local_780.AllocatorInstance.Data;
LAB_149c20257:
      if (local_780.ArrayNum != iVar25) {
        local_817[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_817);
      }
      if ((FObjectPtr_u_0 *)FVar41.Data == pFVar37) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_780.AllocatorInstance.Data,local_780.ArrayNum);
        if ((FPCGTaggedData *)local_780.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_780.AllocatorInstance.Data);
        }
        goto LAB_149c20d61;
      }
      local_7f8 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar41.Data;
      local_808.Handle = (UObject *)0x0;
      pUStack_800 = (UPCGBasePointData *)0x0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c202a5:
        if ((UPCGSpatialData *)local_7f8.Handle == (UPCGSpatialData *)0x0) goto LAB_149c20b66;
        pUVar28 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar22 = FObjectPtr::IsA((FObjectPtr *)&local_7f8,pUVar28);
        if (!bVar22) goto LAB_149c20b66;
        local_808.Handle = local_7f8.Handle;
        if ((UPCGSpatialData *)local_7f8.Handle == (UPCGSpatialData *)0x0) goto LAB_149c20b6f;
        pUStack_800 = FPCGContext::NewPointData_AnyThread(param_1);
        UPCGSpatialData::InitializeFromData
                  ((UPCGSpatialData *)pUStack_800,(UPCGSpatialData *)local_808.Handle,
                   (UPCGMetadata *)0x0,true,true);
        pcVar8 = *(code **)(pUStack_800->_padding_ + 0x490);
        uVar82 = (**(code **)(*(longlong *)local_808.Handle + 0x488))();
        (*pcVar8)(pUStack_800,uVar82,1);
        cVar24 = (**(code **)(pUStack_800->_padding_ + 0x440))();
        if (cVar24 == '\0') {
          pcVar8 = *(code **)(pUStack_800->_padding_ + 0x498);
          uVar82 = (**(code **)(*(longlong *)local_808.Handle + 0x640))(local_808.Handle,1);
          (*pcVar8)(pUStack_800,uVar82);
        }
        pFVar37 = (FObjectPtr_u_0 *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
        if (((pFVar37 <= FVar41.Data) &&
            (FVar41.Data < pFVar37 + (longlong)(param_1->OutputData).TaggedData.ArrayMax * 0xf)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar8 = (code *)swi(3);
          uVar23 = (*pcVar8)();
          return (bool)uVar23;
        }
        iVar27 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar27 == *piVar1) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar27 + 1;
        pFVar35 = FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                             (longlong)iVar27 * 0x78),(FPCGTaggedData *)FVar41.Data);
        FPCGDataPtrWrapper::operator=(&pFVar35->Data,(UPCGData *)pUStack_800);
        PVar5 = *(PCGSpatialNoiseMode *)&TVar30.DebugPtr[1]._padding_;
        if (PVar5 == Perlin2D) {
          local_750 = PCGSpatialNoise::CalcPerlin2D;
          local_698.NumPoints = (**(code **)(*(longlong *)local_808.Handle + 0x488))();
          pFVar40 = (FPCGAsyncState *)0x0;
          local_638.SharedParams = (FSharedParams *)local_358;
          local_638.BufferParams = (FBufferParams *)&local_808;
          local_638.Results = &local_790;
          local_638.FractalNoise = &local_750;
          local_698.Results = &local_790;
          local_790.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_790.Values.ArrayNum = 0;
          local_790.Values.ArrayMax = 0;
          if ((FPCGContext *)local_358._0_8_ != (FPCGContext *)0x0) {
            pFVar40 = (FPCGAsyncState *)(local_358._0_8_ + 0x88);
          }
          FPCGAsync::
          AsyncProcessingOneToOneRangeEx<_PCGSpatialNoise::DoFractal2D<double_(__cdecl*)(UE::Math::TVector2<double>,int)>_::__l2::<lambda_1>,_PCGSpatialNoise::DoFractal2D<double_(__cdecl*)(UE::Math::TVector2<double>,int)>_::__l2::<lambda_2>_>
                    (pFVar40,local_698.NumPoints,&local_698,&local_638,false,0x40,true);
          iVar27 = local_790.Values.ArrayNum;
          local_688 = local_790.Values.AllocatorInstance.Data;
          if ((local_790.Values.ArrayNum < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar8 = (code *)swi(3);
            uVar23 = (*pcVar8)();
            return (bool)uVar23;
          }
          iStack_680 = iVar27;
          local_4e8._12_4_ = uStack_67c;
          local_4e8.ArrayNum = iVar27;
          local_4e8.DataPtr = (double *)local_688;
          PCGSpatialNoise::SetAttributeHelper<double>
                    ((UPCGSpatialData *)pUStack_800,
                     (FPCGAttributePropertySelector *)&TVar30.DebugPtr[1]._padding_,&local_4e8);
          pFVar37 = local_810;
          if (local_790.Values.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
          goto LAB_149c20c5d;
          FMemory::Free(local_790.Values.AllocatorInstance.Data);
          FVar41.Data = FVar41.Data + 0x78;
          pFVar37 = local_810;
          goto LAB_149c20257;
        }
        if (PVar5 == Caustic2D) {
          local_758 = PCGSpatialNoise::CalcCaustic2D;
          local_6b8.NumPoints = (**(code **)(*(longlong *)local_808.Handle + 0x488))();
          pFVar40 = (FPCGAsyncState *)0x0;
          local_658.SharedParams = (FSharedParams *)local_358;
          local_658.BufferParams = (FBufferParams *)&local_808;
          local_658.Results = &local_7b0;
          local_658.FractalNoise = &local_758;
          local_6b8.Results = &local_7b0;
          local_7b0.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_7b0.Values.ArrayNum = 0;
          local_7b0.Values.ArrayMax = 0;
          if ((FPCGContext *)local_358._0_8_ != (FPCGContext *)0x0) {
            pFVar40 = (FPCGAsyncState *)(local_358._0_8_ + 0x88);
          }
          FPCGAsync::
          AsyncProcessingOneToOneRangeEx<_PCGSpatialNoise::DoFractal2D<double_(__cdecl*)(UE::Math::TVector2<double>,int)>_::__l2::<lambda_1>,_PCGSpatialNoise::DoFractal2D<double_(__cdecl*)(UE::Math::TVector2<double>,int)>_::__l2::<lambda_2>_>
                    (pFVar40,local_6b8.NumPoints,&local_6b8,&local_658,false,0x40,true);
          iVar27 = local_7b0.Values.ArrayNum;
          local_6a8 = local_7b0.Values.AllocatorInstance.Data;
          if ((local_7b0.Values.ArrayNum < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar8 = (code *)swi(3);
            uVar23 = (*pcVar8)();
            return (bool)uVar23;
          }
          iStack_6a0 = iVar27;
          local_4f8._12_4_ = uStack_69c;
          local_4f8.ArrayNum = iVar27;
          local_4f8.DataPtr = (double *)local_6a8;
          PCGSpatialNoise::SetAttributeHelper<double>
                    ((UPCGSpatialData *)pUStack_800,
                     (FPCGAttributePropertySelector *)&TVar30.DebugPtr[1]._padding_,&local_4f8);
          pFVar37 = local_810;
          if (local_7b0.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7b0.Values.AllocatorInstance.Data);
            FVar41.Data = FVar41.Data + 0x78;
            pFVar37 = local_810;
            goto LAB_149c20257;
          }
        }
        else {
          if (PVar5 == Voronoi2D) {
            PCGSpatialNoise::DoVoronoi2D
                      ((FSharedParams *)local_358,(FBufferParams *)&local_808,
                       (UPCGSpatialNoiseSettings *)TVar30.DebugPtr);
            FVar41.Data = FVar41.Data + 0x78;
            pFVar37 = local_810;
            goto LAB_149c20257;
          }
          if (PVar5 == FractionalBrownian2D) {
            local_748 = PCGSpatialNoise::CalcFractionalBrownian2D;
            local_6d8.NumPoints = (**(code **)(*(longlong *)local_808.Handle + 0x488))();
            pFVar40 = (FPCGAsyncState *)0x0;
            local_678.SharedParams = (FSharedParams *)local_358;
            local_678.BufferParams = (FBufferParams *)&local_808;
            local_678.Results = &local_7a0;
            local_678.FractalNoise = &local_748;
            local_6d8.Results = &local_7a0;
            local_7a0.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_7a0.Values.ArrayNum = 0;
            local_7a0.Values.ArrayMax = 0;
            if ((FPCGContext *)local_358._0_8_ != (FPCGContext *)0x0) {
              pFVar40 = (FPCGAsyncState *)(local_358._0_8_ + 0x88);
            }
            FPCGAsync::
            AsyncProcessingOneToOneRangeEx<_PCGSpatialNoise::DoFractal2D<double_(__cdecl*)(UE::Math::TVector2<double>,int)>_::__l2::<lambda_1>,_PCGSpatialNoise::DoFractal2D<double_(__cdecl*)(UE::Math::TVector2<double>,int)>_::__l2::<lambda_2>_>
                      (pFVar40,local_6d8.NumPoints,&local_6d8,&local_678,false,0x40,true);
            iVar27 = local_7a0.Values.ArrayNum;
            local_6c8 = local_7a0.Values.AllocatorInstance.Data;
            if ((local_7a0.Values.ArrayNum < 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar22)) {
              pcVar8 = (code *)swi(3);
              uVar23 = (*pcVar8)();
              return (bool)uVar23;
            }
            iStack_6c0 = iVar27;
            local_518._12_4_ = uStack_6bc;
            local_518.ArrayNum = iVar27;
            local_518.DataPtr = (double *)local_6c8;
            PCGSpatialNoise::SetAttributeHelper<double>
                      ((UPCGSpatialData *)pUStack_800,
                       (FPCGAttributePropertySelector *)&TVar30.DebugPtr[1]._padding_,&local_518);
            pFVar37 = local_810;
            if (local_7a0.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7a0.Values.AllocatorInstance.Data);
              FVar41.Data = FVar41.Data + 0x78;
              pFVar37 = local_810;
              goto LAB_149c20257;
            }
          }
          else if (PVar5 == EdgeMask2D) {
            PVar6 = *(PCGSpatialNoiseMask2DMode *)((longlong)&TVar30.DebugPtr[1]._padding_ + 4);
            if (PVar6 == Perlin) {
              local_760 = PCGSpatialNoise::CalcPerlin2D;
              local_6f8.NumPoints = (**(code **)(*(longlong *)local_808.Handle + 0x488))();
              pFVar40 = (FPCGAsyncState *)0x0;
              local_5c8.SharedParams = (FSharedParams *)local_358;
              local_7c0.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_5c8.BufferParams = (FBufferParams *)&local_808;
              local_5c8.Results = &local_7c0;
              local_5c8.FractalNoise = &local_760;
              local_6f8.Results = &local_7c0;
              local_7c0.Values.ArrayNum = 0;
              local_7c0.Values.ArrayMax = 0;
              if ((FPCGContext *)local_358._0_8_ != (FPCGContext *)0x0) {
                pFVar40 = (FPCGAsyncState *)(local_358._0_8_ + 0x88);
              }
              local_5c8.Settings = (UPCGSpatialNoiseSettings *)TVar30;
              FPCGAsync::
              AsyncProcessingOneToOneRangeEx<_PCGSpatialNoise::DoEdgeMask2D<double_(__cdecl*)(UE::Math::TVector2<double>,int)>_::__l2::<lambda_1>,_PCGSpatialNoise::DoEdgeMask2D<double_(__cdecl*)(UE::Math::TVector2<double>,int)>_::__l2::<lambda_2>_>
                        (pFVar40,local_6f8.NumPoints,&local_6f8,&local_5c8,false,0x40,true);
              iVar27 = local_7c0.Values.ArrayNum;
              local_6e8 = local_7c0.Values.AllocatorInstance.Data;
              if ((local_7c0.Values.ArrayNum < 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar22)) {
                pcVar8 = (code *)swi(3);
                uVar23 = (*pcVar8)();
                return (bool)uVar23;
              }
              iStack_6e0 = iVar27;
              local_528._12_4_ = uStack_6dc;
              local_528.ArrayNum = iVar27;
              local_528.DataPtr = (double *)local_6e8;
              PCGSpatialNoise::SetAttributeHelper<double>
                        ((UPCGSpatialData *)pUStack_800,
                         (FPCGAttributePropertySelector *)&TVar30.DebugPtr[1]._padding_,&local_528);
              pFVar37 = local_810;
              if (local_7c0.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7c0.Values.AllocatorInstance.Data);
                FVar41.Data = FVar41.Data + 0x78;
                pFVar37 = local_810;
                goto LAB_149c20257;
              }
            }
            else {
              if (PVar6 == Caustic) {
                local_768 = PCGSpatialNoise::CalcCaustic2D;
                local_718.NumPoints = (**(code **)(*(longlong *)local_808.Handle + 0x488))();
                pFVar40 = (FPCGAsyncState *)0x0;
                local_5f0.SharedParams = (FSharedParams *)local_358;
                local_7d0.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_5f0.BufferParams = (FBufferParams *)&local_808;
                local_5f0.Results = &local_7d0;
                local_718.Results = &local_7d0;
                local_7d0.Values.ArrayNum = 0;
                local_7d0.Values.ArrayMax = 0;
                if ((FPCGContext *)local_358._0_8_ != (FPCGContext *)0x0) {
                  pFVar40 = (FPCGAsyncState *)(local_358._0_8_ + 0x88);
                }
                local_5f0.FractalNoise = &local_768;
                local_5f0.Settings = (UPCGSpatialNoiseSettings *)TVar30;
                FPCGAsync::
                AsyncProcessingOneToOneRangeEx<_PCGSpatialNoise::DoEdgeMask2D<double_(__cdecl*)(UE::Math::TVector2<double>,int)>_::__l2::<lambda_1>,_PCGSpatialNoise::DoEdgeMask2D<double_(__cdecl*)(UE::Math::TVector2<double>,int)>_::__l2::<lambda_2>_>
                          (pFVar40,local_718.NumPoints,&local_718,&local_5f0,false,0x40,true);
                iVar27 = local_7d0.Values.ArrayNum;
                local_708 = local_7d0.Values.AllocatorInstance.Data;
                if ((local_7d0.Values.ArrayNum < 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar22)) {
                  pcVar8 = (code *)swi(3);
                  uVar23 = (*pcVar8)();
                  return (bool)uVar23;
                }
                iStack_700 = iVar27;
                local_508._12_4_ = uStack_6fc;
                local_508.ArrayNum = iVar27;
                local_508.DataPtr = (double *)local_708;
                PCGSpatialNoise::SetAttributeHelper<double>
                          ((UPCGSpatialData *)pUStack_800,
                           (FPCGAttributePropertySelector *)&TVar30.DebugPtr[1]._padding_,&local_508
                          );
                pFVar37 = local_810;
                if (local_7d0.Values.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
                goto LAB_149c20c5d;
                FMemory::Free(local_7d0.Values.AllocatorInstance.Data);
                FVar41.Data = FVar41.Data + 0x78;
                pFVar37 = local_810;
                goto LAB_149c20257;
              }
              if (PVar6 != FractionalBrownian) {
                iVar27 = 0x30f;
                goto LAB_149c20438;
              }
              local_770 = PCGSpatialNoise::CalcFractionalBrownian2D;
              local_740.NumPoints = (**(code **)(*(longlong *)local_808.Handle + 0x488))();
              pFVar40 = (FPCGAsyncState *)0x0;
              local_618.SharedParams = (FSharedParams *)local_358;
              local_7e0.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_618.BufferParams = (FBufferParams *)&local_808;
              local_618.Results = &local_7e0;
              local_618.FractalNoise = &local_770;
              local_740.Results = &local_7e0;
              local_7e0.Values.ArrayNum = 0;
              local_7e0.Values.ArrayMax = 0;
              if ((FPCGContext *)local_358._0_8_ != (FPCGContext *)0x0) {
                pFVar40 = (FPCGAsyncState *)(local_358._0_8_ + 0x88);
              }
              local_618.Settings = (UPCGSpatialNoiseSettings *)TVar30;
              FPCGAsync::
              AsyncProcessingOneToOneRangeEx<_PCGSpatialNoise::DoEdgeMask2D<double_(__cdecl*)(UE::Math::TVector2<double>,int)>_::__l2::<lambda_1>,_PCGSpatialNoise::DoEdgeMask2D<double_(__cdecl*)(UE::Math::TVector2<double>,int)>_::__l2::<lambda_2>_>
                        (pFVar40,local_740.NumPoints,&local_740,&local_618,false,0x40,true);
              iVar27 = local_7e0.Values.ArrayNum;
              local_728 = local_7e0.Values.AllocatorInstance.Data;
              if ((local_7e0.Values.ArrayNum < 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar22)) {
                pcVar8 = (code *)swi(3);
                uVar23 = (*pcVar8)();
                return (bool)uVar23;
              }
              iStack_720 = iVar27;
              local_538._12_4_ = uStack_71c;
              local_538.ArrayNum = iVar27;
              local_538.DataPtr = (double *)local_728;
              PCGSpatialNoise::SetAttributeHelper<double>
                        ((UPCGSpatialData *)pUStack_800,
                         (FPCGAttributePropertySelector *)&TVar30.DebugPtr[1]._padding_,&local_538);
              pFVar37 = local_810;
              if (local_7e0.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7e0.Values.AllocatorInstance.Data);
                FVar41.Data = FVar41.Data + 0x78;
                pFVar37 = local_810;
                goto LAB_149c20257;
              }
            }
          }
          else {
            iVar27 = 0x316;
LAB_149c20438:
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpatialNoise.cpp"
                                ,iVar27,L"");
            pFVar37 = local_810;
            if (bVar22) {
              pcVar8 = (code *)swi(3);
              uVar23 = (*pcVar8)();
              return (bool)uVar23;
            }
          }
        }
      }
      else {
        if ((UPCGSpatialData *)local_7f8.Handle != (UPCGSpatialData *)0x0) {
          UE::GC::MarkAsReachable(local_7f8.Handle);
          goto LAB_149c202a5;
        }
LAB_149c20b66:
        local_808.Handle = (UObject *)0x0;
LAB_149c20b6f:
        if (1 < (byte)LogPCG._0_1_) {
          pFVar36 = FText::AsLocalizable_Advanced_LocText
                              (&local_580,L"PCGSpatialNoise",L"InvalidInputData",
                               L"Invalid input data (only supports point data).");
          pFVar37 = (FObjectPtr_u_0 *)FText::ToString(pFVar36);
          if (*(int *)(pFVar37 + 1) == 0) {
            local_7f8.Handle = (UObject *)0x15060d16c;
          }
          else {
            local_7f8 = *pFVar37;
          }
          FPCGContext::GetTaskName(param_1,&local_590);
          FPCGContext::GetExecutionSourceName(param_1,&local_5a0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
          }
          if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_590.Data.AllocatorInstance.Data);
          }
          pFVar37 = local_810;
          if (local_580.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_580.TextData.Reference + 0x10))();
            pFVar37 = local_810;
          }
        }
      }
LAB_149c20c5d:
      FVar41.Data = FVar41.Data + 0x78;
      goto LAB_149c20257;
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    pFVar36 = FText::AsLocalizable_Advanced_LocText
                        (&local_550,L"PCGSpatialNoise",L"NoExecutionSource",L"No Execution Source.")
    ;
    FText::ToString(pFVar36);
    FPCGContext::GetTaskName(param_1,&local_560);
    FPCGContext::GetExecutionSourceName(param_1,&local_570);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_570.Data.AllocatorInstance.Data);
    }
    if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_560.Data.AllocatorInstance.Data);
    }
    if (local_550.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_550.TextData.Reference + 0x10))();
    }
  }
LAB_149c20d61:
  if (bVar42) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149c22930

EPCGElementExecutionLoopMode __thiscall
FPCGSpatialNoise::ExecutionLoopMode(FPCGSpatialNoise *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c358e0

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
FPCGSpatialNoise::SupportsBasePointDataInputs(FPCGSpatialNoise *this,FPCGContext *param_1)

{
  return true;
}

