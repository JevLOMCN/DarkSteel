// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149b5d5f0

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

void __thiscall
`FPCGCreatePointsGridElement::ExecuteInternal'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  UPCGBasePointData *pUVar4;
  undefined1 local_28 [16];
  double local_18;
  
  pUVar4 = FPCGContext::NewPointData_AnyThread(*(FPCGContext **)this);
  **(undefined8 **)((longlong)this + 0x30) = pUVar4;
  if (**(longlong **)((longlong)this + 0x30) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PtData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePointsGrid.cpp"
                       ,0xe1,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x30) + 0x490))
            ((longlong *)**(undefined8 **)((longlong)this + 0x30),
             *(undefined4 *)((longlong)this + 0x28),1);
  (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x30) + 0x568))
            ((longlong *)**(undefined8 **)((longlong)this + 0x30),
             *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0xf8));
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0xfd) != '\0') {
    dVar2 = *(double *)((longlong)this + 0x18) * _UNK_150689678;
    local_18 = *(double *)((longlong)this + 0x20) * ___xmm_3fe00000000000003fe0000000000000;
    local_28._8_4_ = SUB84(dVar2,0);
    local_28._0_8_ = *(double *)((longlong)this + 0x10) * ___xmm_3fe00000000000003fe0000000000000;
    local_28._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x30) + 0x580))
              ((longlong *)**(undefined8 **)((longlong)this + 0x30),local_28);
  }
                    /* WARNING: Could not recover jumptable at 0x000149b5d6c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x30) + 0x498))
            ((longlong *)**(undefined8 **)((longlong)this + 0x30),0x41);
  return;
}

// operator() @ 149b5f540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGCreatePointsGridElement::ExecuteInternal'::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  double *pdVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  double *pdVar20;
  int *piVar21;
  int iVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_238 [32];
  longlong local_208;
  int local_200;
  int local_1fc;
  int local_1f8;
  int iStack_1f4;
  undefined1 local_1f0 [16];
  double local_1e0;
  TVector<double>_u_0 local_1d8;
  TTransform<double> local_1b8;
  longlong local_158;
  int local_150;
  int local_14c;
  undefined8 local_148;
  double local_138 [12];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x50) + 0x4c0))
            ((longlong *)**(undefined8 **)((longlong)this + 0x50),&local_158,0);
  (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x50) + 0x4f0))
            ((longlong *)**(undefined8 **)((longlong)this + 0x50),&local_208,0);
  if ((((int)local_148 != local_1f8) || ((int)local_148 < param_2 + param_3)) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2005259194722156788>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePointsGrid.cpp"
                          ,0xf4,
                          "TransformRange.Num() == SeedRange.Num() && (StartWriteIndex + Count) <= TransformRange.Num()"
                         ), bVar16)) {
    pcVar4 = (code *)swi(3);
    iVar17 = (*pcVar4)();
    return iVar17;
  }
  dVar7 = __real_3fe0000000000000;
  iVar17 = 0;
  iVar22 = param_1 + param_3;
  do {
    if (iVar22 <= param_1) {
      return iVar17;
    }
    iVar19 = **(int **)((longlong)this + 0x10);
    dVar24 = (double)(**(int **)((longlong)this + 0x20) + param_1 % iVar19);
    dVar25 = (double)((int)((longlong)
                            ((ulonglong)(uint)((int)((longlong)param_1 / (longlong)iVar19) >> 0x1f)
                             << 0x20 | (longlong)param_1 / (longlong)iVar19 & 0xffffffffU) %
                           (longlong)**(int **)((longlong)this + 0x18)) +
                     **(int **)((longlong)this + 0x28));
    dVar26 = (double)(param_1 / (**(int **)((longlong)this + 0x18) * iVar19) +
                     **(int **)((longlong)this + 0x30));
    if (*(char *)(*(longlong *)this + 0xff) == '\0') {
      dVar24 = dVar24 + dVar7;
      dVar25 = dVar25 + dVar7;
      dVar26 = dVar26 + dVar7;
    }
    pdVar20 = *(double **)((longlong)this + 0x38);
    pdVar2 = *(double **)((longlong)this + 0x40);
    if (*pdVar2 < *pdVar20 * dVar7) {
      dVar24 = 0.0;
    }
    if (pdVar2[1] < pdVar20[1] * dVar7) {
      dVar25 = 0.0;
    }
    if (pdVar2[2] < pdVar20[2] * dVar7) {
      dVar26 = 0.0;
    }
    local_1b8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1b8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_1b8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1b8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    dVar25 = pdVar20[1] * dVar25 - pdVar2[1];
    dVar24 = *pdVar20 * dVar24 - *pdVar2;
    local_1b8.Translation.ZW.m128d_f64[0] = pdVar20[2] * dVar26 - pdVar2[2];
    local_1b8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar25,0);
    local_1b8.Translation.XY.m128d_f64[0] = dVar24;
    local_1b8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar25 >> 0x20);
    uVar27 = 0;
    uVar28 = 0;
    local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_1b8.Translation.ZW.m128d_f64[1] = 0.0;
    local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    cVar1 = *(char *)(*(longlong *)this + 0xfc);
    if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
      UE::Math::TTransform<double>::Multiply
                (&local_1b8,&local_1b8,*(TTransform<double> **)((longlong)this + 0x48));
      uVar27 = SUB84(local_1b8.Translation.ZW.m128d_f64[1],0);
      uVar28 = (undefined4)((ulonglong)local_1b8.Translation.ZW.m128d_f64[1] >> 0x20);
      dVar24 = local_1b8.Translation.XY.m128d_f64[0];
      dVar25 = local_1b8.Translation.XY.m128d_f64[1];
    }
    plVar3 = *(longlong **)((longlong)this + 8);
    if (plVar3 == (longlong *)0x0) {
LAB_149b5f7ee:
      dVar11 = local_1b8.Translation.ZW.m128d_f64[0];
      dVar26 = local_1b8.Rotation.XY.m128d_f64[0];
      dVar8 = local_1b8.Rotation.XY.m128d_f64[1];
      dVar9 = local_1b8.Rotation.ZW.m128d_f64[0];
      dVar10 = local_1b8.Rotation.ZW.m128d_f64[1];
      dVar12 = local_1b8.Scale3D.XY.m128d_f64[0];
      dVar13 = local_1b8.Scale3D.XY.m128d_f64[1];
      dVar14 = local_1b8.Scale3D.ZW.m128d_f64[0];
      dVar15 = local_1b8.Scale3D.ZW.m128d_f64[1];
      uVar18 = 0;
      if (param_2 < (int)local_148) {
        uVar18 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar4 = (code *)swi(3);
        iVar17 = (*pcVar4)();
        return iVar17;
      }
      pdVar20 = local_138;
      if (param_2 == param_2 % local_14c) {
        pdVar20 = (double *)((longlong)local_150 * (longlong)(param_2 % local_14c) + local_158);
      }
      *pdVar20 = dVar26;
      pdVar20[1] = dVar8;
      pdVar20[2] = dVar9;
      pdVar20[3] = dVar10;
      auVar5._8_4_ = SUB84(dVar25,0);
      auVar5._0_8_ = dVar24;
      auVar5._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      *(undefined1 (*) [16])(pdVar20 + 4) = auVar5;
      auVar6._8_4_ = uVar27;
      auVar6._0_8_ = dVar11;
      auVar6._12_4_ = uVar28;
      *(undefined1 (*) [16])(pdVar20 + 6) = auVar6;
      pdVar20[8] = dVar12;
      pdVar20[9] = dVar13;
      pdVar20[10] = dVar14;
      pdVar20[0xb] = dVar15;
      local_1d8._s_0.X = local_1b8.Translation.XY.m128d_f64[0];
      local_1d8._s_0.Y = local_1b8.Translation.XY.m128d_f64[1];
      local_1d8._s_0.Z = local_1b8.Translation.ZW.m128d_f64[0];
      iVar19 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_1d8._s_0);
      uVar18 = 0;
      if (param_2 < local_1f8) {
        uVar18 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar4 = (code *)swi(3);
        iVar17 = (*pcVar4)();
        return iVar17;
      }
      if (param_2 == param_2 % local_1fc) {
        piVar21 = (int *)((longlong)local_200 * (longlong)(param_2 % local_1fc) + local_208);
      }
      else {
        piVar21 = &iStack_1f4;
      }
      iVar17 = iVar17 + 1;
      *piVar21 = iVar19;
      param_2 = param_2 + 1;
    }
    else {
      local_1f0._8_4_ = SUB84(dVar25,0);
      local_1f0._0_8_ = dVar24;
      local_1f0._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      local_1e0 = local_1b8.Translation.ZW.m128d_f64[0];
      fVar23 = (float)(**(code **)(*plVar3 + 0x3a8))(plVar3,local_1f0);
      if (0.0 < fVar23) {
        uVar27 = SUB84(local_1b8.Translation.ZW.m128d_f64[1],0);
        uVar28 = (undefined4)((ulonglong)local_1b8.Translation.ZW.m128d_f64[1] >> 0x20);
        dVar24 = local_1b8.Translation.XY.m128d_f64[0];
        dVar25 = local_1b8.Translation.XY.m128d_f64[1];
        goto LAB_149b5f7ee;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

// ExecuteInternal @ 149b71b60

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

bool __thiscall
FPCGCreatePointsGridElement::ExecuteInternal(FPCGCreatePointsGridElement *this,FPCGContext *param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  UPCGNode *this_00;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  UClass *pUVar12;
  UPCGSettings *pUVar13;
  TObjectPtr<UPCGSettings>_u_0 TVar14;
  FPCGTaggedData *pFVar15;
  longlong *plVar16;
  TObjectPtr<UPCGSettings>_u_0 TVar17;
  IPCGGraphExecutionSource *pIVar18;
  double *pdVar19;
  UPCGComponent *pUVar20;
  UPCGComponent *pUVar21;
  TTransform<double> *pTVar22;
  FText *pFVar23;
  TBox<double> *pTVar24;
  longlong lVar25;
  FPlatformMemoryStats *pFVar26;
  FPCGDataPtrWrapper *this_01;
  TObjectPtr<UPCGSettings>_u_0 TVar27;
  uint uVar28;
  ulonglong uVar29;
  int iVar30;
  bool bVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_528 [32];
  int local_4d8;
  int local_4d4;
  <lambda_1> local_4d0;
  int local_4cc;
  int local_4c8;
  int local_4c4;
  UPCGBasePointData *local_4c0;
  TObjectPtr<UPCGSettings>_u_0 local_4b8;
  undefined1 local_4b0 [16];
  double local_4a0;
  TObjectPtr<UPCGSettings>_u_0 local_498;
  FString local_490;
  <lambda_4> local_480;
  <lambda_3> local_478 [2];
  TObjectPtr<UPCGSettings>_u_0 local_468;
  TObjectPtr<UPCGSettings>_u_0 local_460;
  int *local_458;
  int *local_450;
  int *local_448;
  int *local_440;
  int *local_438;
  longlong *local_430;
  undefined1 *local_428;
  TTransform<double> *local_420;
  UPCGBasePointData **local_418;
  FString local_408;
  FString local_3f8;
  FText local_3e8;
  FString local_3d8;
  FString local_3c8;
  FText local_3b8;
  FString local_3a8;
  FString local_398;
  FText local_388;
  FString local_378;
  FString local_368;
  FText local_358;
  FString local_348;
  FString local_338;
  FText local_328;
  FString local_318;
  <lambda_1> local_308;
  FText local_2d0;
  double local_2b8 [2];
  double local_2a8 [2];
  double local_298 [2];
  double local_288 [2];
  double local_278 [2];
  double local_268 [2];
  TBox<double> local_240;
  FPlatformMemoryStats local_208;
  TTransform<double> local_178;
  TVector<double>_u_0 local_118;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_d8 [96];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_528;
  TVar27.DebugPtr = (UPCGSettings *)0x0;
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId55,"FPCGCreatePointsGridElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePointsGrid.cpp"
               ,0x37);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId55);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePointsGrid.cpp"
                          ,0x38,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return (bool)uVar11;
  }
  if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
     (bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar10))
  goto LAB_149b72a96;
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar13 = UPCGNode::GetSettings(this_00), pUVar13 == (UPCGSettings *)0x0)) {
      pFVar15 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreatePointsGridSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_4d0);
      if (pFVar15 != (FPCGTaggedData *)0x0) {
        local_498.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar15->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_498.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b71d23;
          UE::GC::MarkAsReachable((UObject *)local_498.DebugPtr);
        }
        if (local_498.DebugPtr != (UPCGSettings *)0x0) {
          pUVar12 = UPCGCreatePointsGridSettings::StaticClass();
          bVar10 = FObjectPtr::IsA(&local_498.ObjectPtr,pUVar12);
          TVar14 = local_498;
          if (bVar10) goto LAB_149b71d26;
        }
      }
    }
    else {
      pUVar13 = UPCGNode::GetSettings(this_00);
      TVar14.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar13);
      if (TVar14.DebugPtr != (UPCGSettings *)0x0) {
        pUVar12 = UPCGCreatePointsGridSettings::StaticClass();
        iVar30 = (int)pUVar12->_padding_;
        if ((iVar30 <= *(int *)((TVar14.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar14.DebugPtr)->_padding_ + 0x30) + (longlong)iVar30 * 8) ==
            &pUVar12->_padding_)) goto LAB_149b71d26;
      }
    }
LAB_149b71d23:
    TVar14.DebugPtr = TVar27.DebugPtr;
  }
  else {
    pUVar12 = UPCGCreatePointsGridSettings::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar12);
    if (!bVar10) goto LAB_149b71d23;
    TVar14.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149b71d26:
  if ((TVar14.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePointsGrid.cpp"
                          ,0x40,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return (bool)uVar11;
  }
  if (*(char *)((longlong)&TVar14.DebugPtr[1]._padding_ + 6) == '\0') {
    local_4b8.DebugPtr = (UPCGSettings *)0x0;
LAB_149b71e57:
    if (*(char *)((longlong)&TVar14.DebugPtr[1]._padding_ + 6) == '\0') goto LAB_149b71de2;
    if ((byte)LogPCG._0_1_ < 2) goto LAB_149b72a96;
    pFVar23 = FText::AsLocalizable_Advanced_LocText
                        (&local_2d0,L"PCGCreatePointsGridElement",L"CannotCullWithoutAShape",
                         L"Unable to cull since the supporting actor has no data.");
    FText::ToString(pFVar23);
    FPCGContext::GetTaskName(param_1,&local_318);
    FPCGContext::GetExecutionSourceName(param_1,&local_490);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_490.Data.AllocatorInstance.Data);
    }
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
        (bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                            ,0x8d,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    plVar16 = (longlong *)
              (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
    TVar17.DebugPtr = (UPCGSettings *)(**(code **)(*plVar16 + 8))(plVar16);
    if (TVar17.DebugPtr == (UPCGSettings *)0x0) {
LAB_149b71dd5:
      local_4b8.DebugPtr = (UPCGSettings *)0x0;
      TVar17.DebugPtr = TVar27.DebugPtr;
    }
    else {
      local_4b8.DebugPtr = TVar17.DebugPtr;
      pUVar12 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      iVar30 = (int)pUVar12->_padding_;
      if ((*(int *)((TVar17.DebugPtr)->_padding_ + 0x38) < iVar30) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar17.DebugPtr)->_padding_ + 0x30) + (longlong)iVar30 * 8) !=
          &pUVar12->_padding_)) goto LAB_149b71dd5;
    }
    TVar27 = TVar17;
    if (TVar17.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b71e57;
LAB_149b71de2:
    if (*(char *)((longlong)&TVar14.DebugPtr[1]._padding_ + 4) == '\0') {
      pdVar19 = local_2b8;
      local_2b8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_2b8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_2a8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_2a8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_298[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      local_298[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_288[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_288[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_278[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_278[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_268[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_268[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    }
    else {
      pIVar18 = TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->(&param_1->ExecutionSource);
      plVar16 = (longlong *)(**(code **)((longlong)*pIVar18 + 0x18))(pIVar18);
      pdVar19 = (double *)(**(code **)(*plVar16 + 0x30))(plVar16,local_d8);
    }
    local_178.Rotation.XY.m128d_f64[0] = *pdVar19;
    local_178.Rotation.XY.m128d_f64[1] = pdVar19[1];
    local_178.Rotation.ZW.m128d_f64[0] = pdVar19[2];
    local_178.Rotation.ZW.m128d_f64[1] = pdVar19[3];
    local_178.Translation.XY.m128d_f64[0] = pdVar19[4];
    local_178.Translation.XY.m128d_f64[1] = pdVar19[5];
    local_178.Translation.ZW.m128d_f64[0] = pdVar19[6];
    local_178.Translation.ZW.m128d_f64[1] = pdVar19[7];
    local_178.Scale3D.XY.m128d_f64[0] = pdVar19[8];
    local_178.Scale3D.XY.m128d_f64[1] = pdVar19[9];
    local_178.Scale3D.ZW.m128d_f64[0] = pdVar19[10];
    local_178.Scale3D.ZW.m128d_f64[1] = pdVar19[0xb];
    if (((*(char *)((longlong)&TVar14.DebugPtr[1]._padding_ + 4) == '\x01') &&
        ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0)) &&
       ((bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar10 &&
        ((pIVar18 = (param_1->ExecutionSource).InterfaceInstance,
         pIVar18 != (IPCGGraphExecutionSource *)0x0 &&
         (pUVar20 = (UPCGComponent *)(**(code **)((longlong)*pIVar18 + 8))(),
         pUVar20 != (UPCGComponent *)0x0)))))) {
      pUVar12 = Z_Construct_UClass_UPCGComponent_NoRegister();
      iVar30 = (int)pUVar12->_padding_;
      if ((iVar30 <= *(int *)(pUVar20->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar30 * 8) ==
          &pUVar12->_padding_)) {
        pUVar21 = UPCGComponent::GetOriginalComponent(pUVar20);
        if (((pUVar21 == (UPCGComponent *)0x0) ||
            (pUVar21 = UPCGComponent::GetOriginalComponent(pUVar20), pUVar21->_padding_ == 0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("SourceComponent->GetOriginalComponent() && SourceComponent->GetOriginalComponent()->GetOwner()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePointsGrid.cpp"
                                ,0x53,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        pUVar20 = UPCGComponent::GetOriginalComponent(pUVar20);
        lVar25 = *(longlong *)(pUVar20->_padding_ + 0x1b8);
        if (lVar25 == 0) {
          pTVar22 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar22 = (TTransform<double> *)(lVar25 + 0x1f0);
        }
        local_178.Rotation.XY.m128d_f64[0] = (pTVar22->Rotation).XY.m128d_f64[0];
        local_178.Rotation.XY.m128d_f64[1] = (pTVar22->Rotation).XY.m128d_f64[1];
        local_178.Rotation.ZW.m128d_f64[0] = (pTVar22->Rotation).ZW.m128d_f64[0];
        local_178.Rotation.ZW.m128d_f64[1] = (pTVar22->Rotation).ZW.m128d_f64[1];
        local_178.Translation.XY.m128d_f64[0] = (pTVar22->Translation).XY.m128d_f64[0];
        local_178.Translation.XY.m128d_f64[1] = (pTVar22->Translation).XY.m128d_f64[1];
        local_178.Translation.ZW.m128d_f64[0] = (pTVar22->Translation).ZW.m128d_f64[0];
        local_178.Translation.ZW.m128d_f64[1] = (pTVar22->Translation).ZW.m128d_f64[1];
      }
    }
    dVar9 = __real_3fe0000000000000;
    plVar16 = &TVar14.DebugPtr[1]._padding_;
    local_178.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_178.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_178.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_178.Scale3D.ZW.m128d_f64[1] = 0.0;
    if ((((double)*plVar16 <= 0.0) || ((double)TVar14.DebugPtr[1]._padding_ <= 0.0)) ||
       ((double)TVar14.DebugPtr[1]._padding_ <= 0.0)) {
      if ((byte)LogPCG._0_1_ < 3) goto LAB_149b72a96;
      pFVar23 = FText::AsLocalizable_Advanced_LocText
                          (&local_328,L"PCGCreatePointsGridElement",L"InvalidCellDataInput",
                           L"CellSize must not be less than 0");
      FText::ToString(pFVar23);
      FPCGContext::GetTaskName(param_1,&local_338);
      FPCGContext::GetExecutionSourceName(param_1,&local_348);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data.AllocatorInstance.Data);
      }
      local_2d0.TextData.Reference = local_328.TextData.Reference;
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
        local_2d0.TextData.Reference = local_328.TextData.Reference;
      }
    }
    else if ((((double)TVar14.DebugPtr[1]._padding_ <= 0.0 &&
               (double)TVar14.DebugPtr[1]._padding_ != 0.0) ||
             ((double)TVar14.DebugPtr[1]._padding_ <= 0.0 &&
              (double)TVar14.DebugPtr[1]._padding_ != 0.0)) ||
            ((double)TVar14.DebugPtr[1]._padding_ <= 0.0 &&
             (double)TVar14.DebugPtr[1]._padding_ != 0.0)) {
      if ((byte)LogPCG._0_1_ < 3) goto LAB_149b72a96;
      pFVar23 = FText::AsLocalizable_Advanced_LocText
                          (&local_358,L"PCGCreatePointsGridElement",L"InvalidGridDataInput",
                           L"GridExtents must not be less than 0");
      FText::ToString(pFVar23);
      FPCGContext::GetTaskName(param_1,&local_368);
      FPCGContext::GetExecutionSourceName(param_1,&local_378);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
      local_2d0.TextData.Reference = local_358.TextData.Reference;
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
        local_2d0.TextData.Reference = local_358.TextData.Reference;
      }
    }
    else {
      auVar2._0_8_ = (TVar14.DebugPtr + 200)->_padding_;
      auVar2._8_8_ = (double)(TVar14.DebugPtr + 200)->_padding_;
      uVar32 = (undefined4)auVar2._0_8_;
      uVar33 = (undefined4)((ulonglong)auVar2._0_8_ >> 0x20);
      local_4a0 = (double)TVar14.DebugPtr[1]._padding_;
      uVar35 = SUB84(local_4a0,0);
      uVar36 = (undefined4)((ulonglong)local_4a0 >> 0x20);
      local_4d8 = (int)(longlong)
                       (((double)auVar2._0_8_ * __real_4000000000000000) / (double)*plVar16);
      local_4d4 = (int)(longlong)
                       ((auVar2._8_8_ * __real_4000000000000000) /
                       (double)TVar14.DebugPtr[1]._padding_);
      local_490.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)
           (longlong)((local_4a0 * __real_4000000000000000) / (double)TVar14.DebugPtr[1]._padding_);
      local_4b0 = auVar2;
      if (*(char *)((longlong)&TVar14.DebugPtr[1]._padding_ + 7) == '\x01') {
        local_4d8 = local_4d8 + 1;
        local_490.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)(ulonglong)((int)local_490.Data.AllocatorInstance.Data + 1);
        local_4d4 = local_4d4 + 1;
        if ((double)auVar2._0_8_ < (double)*plVar16 * __real_3fe0000000000000) {
          uVar32 = 0;
          uVar33 = 0;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = auVar2._8_8_;
          local_4b0 = auVar8 << 0x40;
        }
        if (auVar2._8_8_ < (double)TVar14.DebugPtr[1]._padding_ * __real_3fe0000000000000) {
          auVar2._8_8_ = 0.0;
          local_4b0._8_8_ = 0;
        }
        if (local_4a0 < (double)TVar14.DebugPtr[1]._padding_ * __real_3fe0000000000000) {
          uVar35 = 0;
          uVar36 = 0;
          local_4a0 = 0.0;
        }
      }
      uVar28 = (uint)local_490.Data.AllocatorInstance.Data;
      if (*(char *)((longlong)&TVar14.DebugPtr[1]._padding_ + 7) == '\0') {
        if ((double)CONCAT44(uVar33,uVar32) < (double)*plVar16 * __real_3fe0000000000000) {
          local_4d8 = local_4d8 + 1;
        }
        if (auVar2._8_8_ < (double)TVar14.DebugPtr[1]._padding_ * __real_3fe0000000000000) {
          local_4d4 = local_4d4 + 1;
        }
        if ((double)CONCAT44(uVar36,uVar35) <
            (double)TVar14.DebugPtr[1]._padding_ * __real_3fe0000000000000) {
          uVar28 = uVar28 + 1;
          local_490.Data.AllocatorInstance.Data = (FScriptContainerElement *)(ulonglong)uVar28;
        }
        auVar2._8_8_ = FGenericPlatformMath::Fmod
                                 ((double)CONCAT44(uVar33,uVar32),
                                  (double)*plVar16 * __real_3fe0000000000000);
        local_4b0._0_8_ = (double)local_4b0._0_8_ - auVar2._8_8_;
        auVar2._8_8_ = FGenericPlatformMath::Fmod
                                 ((double)local_4b0._8_8_,
                                  (double)TVar14.DebugPtr[1]._padding_ * dVar9);
        local_4b0._8_8_ = (double)local_4b0._8_8_ - auVar2._8_8_;
        auVar2._8_8_ = FGenericPlatformMath::Fmod
                                 (local_4a0,(double)TVar14.DebugPtr[1]._padding_ * dVar9);
        local_4a0 = local_4a0 - auVar2._8_8_;
      }
      uVar29 = (longlong)(int)uVar28 * (longlong)local_4d4 * (longlong)local_4d8;
      if ((longlong)uVar29 < 1) {
        if ((byte)LogPCG._0_1_ < 2) goto LAB_149b72a96;
        pFVar23 = FText::AsLocalizable_Advanced_LocText
                            (&local_3e8,L"PCGCreatePointsGridElement",L"InvalidNumberOfIterations",
                             L"The number of iterations produced cannot be less than or equal to 0."
                            );
        FText::ToString(pFVar23);
        FPCGContext::GetTaskName(param_1,&local_3f8);
        FPCGContext::GetExecutionSourceName(param_1,&local_408);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_408.Data.AllocatorInstance.Data);
        }
        local_2d0.TextData.Reference = local_3e8.TextData.Reference;
        if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
          local_2d0.TextData.Reference = local_3e8.TextData.Reference;
        }
      }
      else {
        local_4c8 = 0;
        local_4c4 = 0;
        local_4cc = 0;
        TVar17.DebugPtr = (UPCGSettings *)0x0;
        if (TVar27.DebugPtr != (UPCGSettings *)0x0) {
          (**(code **)((TVar27.DebugPtr)->_padding_ + 0x388))(TVar27.DebugPtr,&local_118);
          pTVar24 = UE::Math::TBox<double>::InverseTransformBy
                              ((TBox<double> *)&local_118._s_0,&local_240,&local_178);
          auVar2._8_8_ = __real_3ff0000000000000 / (double)TVar14.DebugPtr[1]._padding_;
          local_118._s_0.X = (pTVar24->Min).field0_0x0._s_0.X;
          local_118._s_0.Y = (pTVar24->Min).field0_0x0._s_0.Y;
          dVar4 = __real_3ff0000000000000 / (double)TVar14.DebugPtr[1]._padding_;
          local_118._s_0.Z = (pTVar24->Min).field0_0x0._s_0.Z;
          dStack_100 = (pTVar24->Max).field0_0x0._s_0.X;
          dVar6 = local_118._s_0.Y * auVar2._8_8_;
          local_f8 = (pTVar24->Max).field0_0x0._s_0.Y;
          dStack_f0 = (pTVar24->Max).field0_0x0._s_0.Z;
          dVar7 = local_118._s_0.Z * dVar4;
          dVar5 = local_118._s_0.X * (__real_3ff0000000000000 / (double)*plVar16);
          auVar2._8_8_ = local_f8 * auVar2._8_8_;
          dVar34 = dStack_100 * (__real_3ff0000000000000 / (double)*plVar16);
          dVar4 = dStack_f0 * dVar4;
          local_4c8 = (int)((longlong)ROUND((dVar5 + dVar5) - dVar9) >> 1) + local_4d8 / 2;
          if (local_4c8 < 0) {
            local_4c8 = 0;
          }
          local_4c4 = (int)((longlong)ROUND((dVar6 + dVar6) - dVar9) >> 1) + local_4d4 / 2;
          if (local_4c4 < 0) {
            local_4c4 = 0;
          }
          local_4cc = (int)((longlong)ROUND((dVar7 + dVar7) - dVar9) >> 1) +
                      (int)local_490.Data.AllocatorInstance.Data / 2;
          if (local_4cc < 0) {
            local_4cc = 0;
          }
          iVar30 = (local_4d8 + 1) / 2 -
                   (int)((longlong)ROUND(__real_bfe0000000000000 - (dVar34 + dVar34)) >> 1);
          if (local_4d8 < iVar30) {
            iVar30 = local_4d8;
          }
          local_4d8 = iVar30 - local_4c8;
          iVar30 = (local_4d4 + 1) / 2 -
                   (int)((longlong)ROUND(__real_bfe0000000000000 - (auVar2._8_8_ + auVar2._8_8_)) >>
                        1);
          if (local_4d4 < iVar30) {
            iVar30 = local_4d4;
          }
          local_4d4 = iVar30 - local_4c4;
          iVar30 = ((int)local_490.Data.AllocatorInstance.Data + 1) / 2 -
                   (int)((longlong)ROUND(__real_bfe0000000000000 - (dVar4 + dVar4)) >> 1);
          if ((int)local_490.Data.AllocatorInstance.Data < iVar30) {
            iVar30 = (int)local_490.Data.AllocatorInstance.Data;
          }
          uVar29 = (longlong)(iVar30 - local_4cc) * (longlong)local_4d8 * (longlong)local_4d4;
          TVar17 = local_4b8;
          if ((longlong)uVar29 < 1) goto LAB_149b72a96;
        }
        if (uVar29 < 0x7fffffff) {
          local_4b8.DebugPtr = (UPCGSettings *)PCGFeatureSwitches::CVarCheckSamplerMemory.Ref;
          bVar10 = IsInParallelGameThread();
          if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
            lVar25 = 0;
          }
          else {
            lVar25 = 1;
          }
          if ((*(char *)((longlong)
                         &((UPCGSettings *)(&(local_4b8.DebugPtr)->CacheLock + -3))->_padding_ +
                        lVar25) == '\0') ||
             (pFVar26 = FWindowsPlatformMemory::GetStats(&local_208),
             uVar29 * 0xd0 <= (ulonglong)pFVar26->_padding_)) {
            local_308.PtData = &local_4c0;
            local_4c0 = (UPCGBasePointData *)0x0;
            local_308.CellSize.field0_0x0._s_0.X = (double)*plVar16;
            local_308.CellSize.field0_0x0._s_0.Y = (double)TVar14.DebugPtr[1]._padding_;
            local_308.NumIterations = (int)uVar29;
            local_308.CellSize.field0_0x0._s_0.Z = (double)TVar14.DebugPtr[1]._padding_;
            local_458 = &local_4d8;
            local_450 = &local_4d4;
            local_448 = &local_4c8;
            local_440 = &local_4c4;
            local_438 = &local_4cc;
            local_428 = local_4b0;
            local_420 = &local_178;
            local_418 = &local_4c0;
            local_478[0].PtData = &local_4c0;
            local_480.PtData = &local_4c0;
            local_468 = TVar14;
            local_460 = TVar17;
            local_430 = plVar16;
            local_308.Context = param_1;
            local_308.Settings = (UPCGCreatePointsGridSettings *)TVar14;
            FPCGAsync::
            AsyncProcessingRangeEx<_FPCGCreatePointsGridElement::ExecuteInternal_::__l2::<lambda_1>_&,_FPCGCreatePointsGridElement::ExecuteInternal_::__l2::<lambda_2>_&,_FPCGCreatePointsGridElement::ExecuteInternal_::__l2::<lambda_3>_&,_FPCGCreatePointsGridElement::ExecuteInternal_::__l2::<lambda_4>_&>
                      (&param_1->AsyncState,local_308.NumIterations,&local_308,
                       (<lambda_2> *)&local_468.ObjectPtr,local_478,&local_480,false,0x40,true);
            iVar30 = (param_1->OutputData).TaggedData.ArrayNum;
            piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
            if (iVar30 == *piVar1) {
              iVar30 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
            }
            (param_1->OutputData).TaggedData.ArrayNum = iVar30 + 1;
            this_01 = (FPCGDataPtrWrapper *)
                      ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                      (longlong)iVar30 * 0x78);
            this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
            this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
            this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
            this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
            this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
            (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
            (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
            this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
            this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
            this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
            this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
            this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
            *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
            *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
            this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
            this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
            *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
            *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
            FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)local_4c0);
            goto LAB_149b72a96;
          }
          if ((byte)LogPCG._0_1_ < 2) goto LAB_149b72a96;
          pFVar23 = FText::AsLocalizable_Advanced_LocText
                              (&local_388,L"PCGCreatePointsGridElement",L"MemoryOverflow",
                               L"The number of iterations produced is larger than available memory."
                              );
          FText::ToString(pFVar23);
          FPCGContext::GetTaskName(param_1,&local_398);
          FPCGContext::GetExecutionSourceName(param_1,&local_3a8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
          }
          local_2d0.TextData.Reference = local_388.TextData.Reference;
          if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_398.Data.AllocatorInstance.Data);
            local_2d0.TextData.Reference = local_388.TextData.Reference;
          }
        }
        else {
          if ((byte)LogPCG._0_1_ < 2) goto LAB_149b72a96;
          pFVar23 = FText::AsLocalizable_Advanced_LocText
                              (&local_3b8,L"PCGCreatePointsGridElement",L"Overflow_int32",
                               L"The number of iterations produced is larger than what a 32-bit integer can hold."
                              );
          FText::ToString(pFVar23);
          FPCGContext::GetTaskName(param_1,&local_3c8);
          FPCGContext::GetExecutionSourceName(param_1,&local_3d8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
          }
          local_2d0.TextData.Reference = local_3b8.TextData.Reference;
          if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
            local_2d0.TextData.Reference = local_3b8.TextData.Reference;
          }
        }
      }
    }
  }
  if (local_2d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2d0.TextData.Reference + 0x10))();
  }
LAB_149b72a96:
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// GetDependenciesCrc @ 149b8e5a0

void __thiscall
FPCGCreatePointsGridElement::GetDependenciesCrc
          (FPCGCreatePointsGridElement *this,FPCGGetDependenciesCrcParams *param_1,FPCGCrc *param_2)

{
  int iVar1;
  UPCGSettings *pUVar2;
  FPCGSettingsOverridableParam *pFVar3;
  FName FVar4;
  IPCGGraphExecutionSource *pIVar5;
  FPCGCrc FVar6;
  UClass *pUVar7;
  FName *pFVar8;
  TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_> *this_00;
  UPCGComponent *this_01;
  UPCGData *this_02;
  longlong *plVar9;
  FPCGCrc FVar10;
  bool local_res10 [8];
  FName local_res18;
  uint local_res20 [2];
  FPCGCrc local_c8;
  undefined1 local_c0 [8];
  FName local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  FName local_a0;
  FPCGSettingsOverridableParam *local_98;
  undefined8 *local_90;
  FPCGSettingsOverridableParam **ppFStack_88;
  FName *local_80;
  FName *pFStack_78;
  uint *local_70;
  undefined8 *local_68;
  FPCGSettingsOverridableParam **ppFStack_60;
  FName *local_58;
  FName *pFStack_50;
  uint *local_48;
  
  local_c8.Value = 0;
  local_c8._4_4_ = local_c8._4_4_ & 0xffffff00;
  IPCGElement::GetDependenciesCrc((IPCGElement *)this,param_1,&local_c8);
  pUVar2 = param_1->Settings;
  if (pUVar2 == (UPCGSettings *)0x0) {
LAB_149b8e807:
    FVar10.bValid = local_c8.bValid;
    FVar10._5_3_ = local_c8._5_3_;
    FVar10.Value = local_c8.Value;
    *param_2 = FVar10;
    return;
  }
  pUVar7 = UPCGCreatePointsGridSettings::StaticClass();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) goto LAB_149b8e807;
  local_res18.ComparisonIndex.Value = (uint)*(byte *)((longlong)&pUVar2[1]._padding_ + 4);
  local_res10[0] = false;
  pFVar8 = ::FName::FName(&local_a0,0xf,L"CoordinateSpace",FNAME_Add);
  pFVar3 = (FPCGSettingsOverridableParam *)param_1->InputData;
  FVar4 = *pFVar8;
  this_00 = (TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_> *)
            (**(code **)(pUVar2->_padding_ + 0x480))(pUVar2);
  local_98 = TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_PCGSettingsHelpers::GetOverrideValue<int>_::__l2::<lambda_1>_>
                       (this_00,(<lambda_1>)FVar4);
  local_res20[0] = local_res18.ComparisonIndex.Value;
  if (local_98 != (FPCGSettingsOverridableParam *)0x0) {
    local_b8.ComparisonIndex.Value = 0;
    local_b8.Number = 0;
    local_b0._0_1_ = false;
    local_b0._1_1_ = false;
    local_b0._2_6_ = 0;
    local_a8 = 0;
    PCGAttributeAccessorHelpers::CreateConstAccessorForOverrideParamWithResult
              ((FPCGDataCollection *)local_c0,pFVar3,(AccessorParamResult *)local_98);
    local_a0 = local_b8;
    if (local_c0 != (undefined1  [8])0x0) {
      local_90 = (undefined8 *)local_c0;
      ppFStack_88 = &local_98;
      local_80 = &local_a0;
      pFStack_78 = &local_res18;
      local_70 = local_res20;
      local_68 = local_90;
      ppFStack_60 = ppFStack_88;
      local_58 = local_80;
      pFStack_50 = pFStack_78;
      local_48 = local_70;
      `PCGSettingsHelpers::GetOverrideValue<int>'::__l2::<lambda_2>::operator()<int>(&local_68,0);
      if (local_c0 != (undefined1  [8])0x0) {
        (*(code *)**(undefined8 **)local_c0)(local_c0,1);
      }
    }
  }
  pFVar8 = ::FName::FName(&local_res18,0x18,L"bCullPointsOutsideVolume",FNAME_Add);
  PCGSettingsHelpers::GetOverrideValue<bool>
            (param_1->InputData,pUVar2,*pFVar8,(bool *)((longlong)&pUVar2[1]._padding_ + 6),
             local_res10);
  pIVar5 = param_1->ExecutionSource;
  if (pIVar5 == (IPCGGraphExecutionSource *)0x0) goto LAB_149b8e7e9;
  if ((local_res10[0] != false) || ((char)local_res20[0] == '\x02')) goto LAB_149b8e79d;
  if ((char)local_res20[0] != '\x01') goto LAB_149b8e7e9;
  this_01 = (UPCGComponent *)(**(code **)((longlong)*pIVar5 + 8))(pIVar5);
  if (this_01 == (UPCGComponent *)0x0) {
LAB_149b8e79d:
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5);
    this_02 = (UPCGData *)(**(code **)(*plVar9 + 8))(plVar9);
  }
  else {
    pUVar7 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_149b8e79d;
    this_02 = UPCGComponent::GetOriginalActorPCGData(this_01);
  }
  if (this_02 != (UPCGData *)0x0) {
    FVar10 = UPCGData::GetOrComputeCrc(this_02,SUB81(&local_res18,0));
    local_c8.Value =
         local_c8.Value ^
         *(int *)FVar10 + local_c8.Value * 0x40 + (local_c8.Value >> 2) + -0x61c88647;
  }
LAB_149b8e7e9:
  FVar6.bValid = local_c8.bValid;
  FVar6._5_3_ = local_c8._5_3_;
  FVar6.Value = local_c8.Value;
  *param_2 = FVar6;
  return;
}

// SupportsBasePointDataInputs @ 149b988b0

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
FPCGCreatePointsGridElement::SupportsBasePointDataInputs
          (FPCGCreatePointsGridElement *this,FPCGContext *param_1)

{
  return true;
}

