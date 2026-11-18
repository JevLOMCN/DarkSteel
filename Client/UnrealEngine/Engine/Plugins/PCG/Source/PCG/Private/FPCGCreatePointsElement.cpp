// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149b635e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGCreatePointsElement::ExecuteInternal'::__l86::<lambda_3>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
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
  uint uVar17;
  int iVar18;
  int iVar19;
  TTransform<double> *pTVar20;
  float *pfVar21;
  TVector<double> *pTVar22;
  TVector4<double> *pTVar23;
  int *piVar24;
  double *pdVar25;
  longlong lVar26;
  TTransform<double> *pTVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  float fVar31;
  undefined1 auStack_328 [32];
  ulonglong local_308;
  longlong local_300;
  int local_2f8;
  longlong local_2f0;
  void *local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  TVector<double>_u_0 local_2c8;
  TTransform<double> local_2a8;
  FPCGPointValueRanges local_248;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_328;
  uVar29 = (ulonglong)param_1;
  iVar18 = 0;
  local_2e8 = this;
  FPCGPointValueRanges::FPCGPointValueRanges(&local_248,*(UPCGBasePointData **)this,false);
  local_2f8 = param_1 + param_3;
  if (param_1 < local_2f8) {
    lVar26 = uVar29 * 0xd0;
    uVar30 = uVar29;
    do {
      plVar3 = *(longlong **)((longlong)this + 8);
      uVar28 = (uint)uVar30;
      iVar2 = (int)plVar3[1];
      uVar17 = 0;
      if ((int)uVar28 < iVar2) {
        uVar17 = ~uVar28 >> 0x1f;
      }
      local_2f0 = lVar26;
      if ((uVar17 == 0) &&
         (local_308 = uVar29, local_300 = (longlong)iVar2,
         bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar4 = (code *)swi(3);
        iVar18 = (*pcVar4)();
        return iVar18;
      }
      pTVar27 = (TTransform<double> *)(lVar26 + *plVar3);
      local_2a8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_2a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2a8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_2a8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_2a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2a8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_2a8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_2a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2a8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_2a8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_2a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_2a8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_2a8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_2a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2a8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_2a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_2a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_2a8,pTVar27,*(TTransform<double> **)((longlong)this + 0x10));
      plVar3 = *(longlong **)((longlong)this + 0x18);
      if (plVar3 == (longlong *)0x0) {
LAB_149b6377b:
        if (local_248.TransformRange.NumElements != 0) {
          dVar1 = (pTVar27->Rotation).XY.m128d_f64[0];
          dVar5 = (pTVar27->Rotation).XY.m128d_f64[1];
          dVar6 = (pTVar27->Rotation).ZW.m128d_f64[0];
          dVar7 = (pTVar27->Rotation).ZW.m128d_f64[1];
          dVar8 = (pTVar27->Translation).XY.m128d_f64[0];
          dVar9 = (pTVar27->Translation).XY.m128d_f64[1];
          dVar10 = (pTVar27->Translation).ZW.m128d_f64[0];
          dVar11 = (pTVar27->Translation).ZW.m128d_f64[1];
          dVar12 = (pTVar27->Scale3D).XY.m128d_f64[0];
          dVar13 = (pTVar27->Scale3D).XY.m128d_f64[1];
          dVar14 = (pTVar27->Scale3D).ZW.m128d_f64[0];
          dVar15 = (pTVar27->Scale3D).ZW.m128d_f64[1];
          pTVar20 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_248.TransformRange,param_2);
          (pTVar20->Rotation).XY.m128d_f64[0] = dVar1;
          (pTVar20->Rotation).XY.m128d_f64[1] = dVar5;
          (pTVar20->Rotation).ZW.m128d_f64[0] = dVar6;
          (pTVar20->Rotation).ZW.m128d_f64[1] = dVar7;
          (pTVar20->Translation).XY.m128d_f64[0] = dVar8;
          (pTVar20->Translation).XY.m128d_f64[1] = dVar9;
          (pTVar20->Translation).ZW.m128d_f64[0] = dVar10;
          (pTVar20->Translation).ZW.m128d_f64[1] = dVar11;
          (pTVar20->Scale3D).XY.m128d_f64[0] = dVar12;
          (pTVar20->Scale3D).XY.m128d_f64[1] = dVar13;
          (pTVar20->Scale3D).ZW.m128d_f64[0] = dVar14;
          (pTVar20->Scale3D).ZW.m128d_f64[1] = dVar15;
        }
        if (local_248.DensityRange.NumElements != 0) {
          fVar31 = *(float *)pTVar27[1].Rotation.XY.m128d_f64;
          pfVar21 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_248.DensityRange,param_2);
          *pfVar21 = fVar31;
        }
        if (local_248.SteepnessRange.NumElements != 0) {
          fVar31 = *(float *)pTVar27[2].Rotation.XY.m128d_f64;
          pfVar21 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_248.SteepnessRange,param_2);
          *pfVar21 = fVar31;
        }
        if (local_248.BoundsMinRange.NumElements != 0) {
          dVar5 = pTVar27[1].Rotation.XY.m128d_f64[1];
          dVar6 = pTVar27[1].Rotation.ZW.m128d_f64[0];
          dVar1 = pTVar27[1].Rotation.ZW.m128d_f64[1];
          pTVar22 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_248.BoundsMinRange,param_2);
          (pTVar22->field0_0x0)._s_0.X = dVar5;
          (pTVar22->field0_0x0)._s_0.Y = dVar6;
          (pTVar22->field0_0x0)._s_0.Z = dVar1;
        }
        if (local_248.BoundsMaxRange.NumElements != 0) {
          dVar5 = pTVar27[1].Translation.XY.m128d_f64[0];
          dVar6 = pTVar27[1].Translation.XY.m128d_f64[1];
          dVar1 = pTVar27[1].Translation.ZW.m128d_f64[0];
          pTVar22 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_248.BoundsMaxRange,param_2);
          (pTVar22->field0_0x0)._s_0.X = dVar5;
          (pTVar22->field0_0x0)._s_0.Y = dVar6;
          (pTVar22->field0_0x0)._s_0.Z = dVar1;
        }
        if (local_248.ColorRange.NumElements != 0) {
          dVar1 = pTVar27[1].Scale3D.XY.m128d_f64[0];
          dVar5 = pTVar27[1].Scale3D.XY.m128d_f64[1];
          dVar6 = pTVar27[1].Scale3D.ZW.m128d_f64[0];
          dVar7 = pTVar27[1].Scale3D.ZW.m128d_f64[1];
          pTVar23 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                    ::operator[](&local_248.ColorRange,param_2);
          (pTVar23->field0_0x0)._s_0.X = dVar1;
          (pTVar23->field0_0x0)._s_0.Y = dVar5;
          (pTVar23->field0_0x0)._s_0.Z = dVar6;
          (pTVar23->field0_0x0)._s_0.W = dVar7;
        }
        if (local_248.SeedRange.NumElements != 0) {
          iVar2 = *(int *)((longlong)pTVar27[2].Rotation.XY.m128d_f64 + 4);
          piVar24 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_248.SeedRange,param_2);
          *piVar24 = iVar2;
        }
        if (local_248.MetadataEntryRange.NumElements != 0) {
          dVar1 = pTVar27[2].Rotation.XY.m128d_f64[1];
          pdVar25 = (double *)
                    TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_248.MetadataEntryRange,param_2);
          *pdVar25 = dVar1;
        }
        dVar1 = local_2a8.Rotation.XY.m128d_f64[0];
        dVar5 = local_2a8.Rotation.XY.m128d_f64[1];
        dVar6 = local_2a8.Rotation.ZW.m128d_f64[0];
        dVar7 = local_2a8.Rotation.ZW.m128d_f64[1];
        dVar8 = local_2a8.Translation.XY.m128d_f64[0];
        dVar9 = local_2a8.Translation.XY.m128d_f64[1];
        dVar10 = local_2a8.Translation.ZW.m128d_f64[0];
        dVar11 = local_2a8.Translation.ZW.m128d_f64[1];
        dVar12 = local_2a8.Scale3D.XY.m128d_f64[0];
        dVar13 = local_2a8.Scale3D.XY.m128d_f64[1];
        dVar14 = local_2a8.Scale3D.ZW.m128d_f64[0];
        dVar15 = local_2a8.Scale3D.ZW.m128d_f64[1];
        uVar17 = 0;
        if (param_2 < local_248.TransformRange.NumElements) {
          uVar17 = (uint)~param_2 >> 0x1f;
        }
        if (uVar17 == 0) {
          local_308 = (ulonglong)param_2;
          local_300 = (longlong)local_248.TransformRange.NumElements;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar16) {
            pcVar4 = (code *)swi(3);
            iVar18 = (*pcVar4)();
            return iVar18;
          }
        }
        pTVar20 = &local_248.TransformRange.StubValue;
        if (param_2 == param_2 % local_248.TransformRange.ElementView.NumElements) {
          pTVar20 = (TTransform<double> *)
                    ((longlong)
                     ((local_248.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64
                    + (longlong)local_248.TransformRange.ElementView.BytesBetweenElements *
                      (longlong)(param_2 % local_248.TransformRange.ElementView.NumElements));
        }
        (pTVar20->Rotation).XY.m128d_f64[0] = dVar1;
        (pTVar20->Rotation).XY.m128d_f64[1] = dVar5;
        (pTVar20->Rotation).ZW.m128d_f64[0] = dVar6;
        (pTVar20->Rotation).ZW.m128d_f64[1] = dVar7;
        (pTVar20->Translation).XY.m128d_f64[0] = dVar8;
        (pTVar20->Translation).XY.m128d_f64[1] = dVar9;
        (pTVar20->Translation).ZW.m128d_f64[0] = dVar10;
        (pTVar20->Translation).ZW.m128d_f64[1] = dVar11;
        (pTVar20->Scale3D).XY.m128d_f64[0] = dVar12;
        (pTVar20->Scale3D).XY.m128d_f64[1] = dVar13;
        (pTVar20->Scale3D).ZW.m128d_f64[0] = dVar14;
        (pTVar20->Scale3D).ZW.m128d_f64[1] = dVar15;
        local_2c8._s_0.X = local_2a8.Translation.XY.m128d_f64[0];
        local_2c8._s_0.Y = local_2a8.Translation.XY.m128d_f64[1];
        local_2c8._s_0.Z = local_2a8.Translation.ZW.m128d_f64[0];
        iVar19 = UPCGBlueprintHelpers::ComputeSeedFromPosition((TVector<double> *)&local_2c8._s_0);
        iVar2 = *(int *)((longlong)pTVar27[2].Rotation.XY.m128d_f64 + 4);
        if (iVar2 != 0) {
          iVar19 = PCGHelpers::ComputeSeed(iVar2,iVar19);
        }
        uVar17 = 0;
        if (param_2 < local_248.SeedRange.NumElements) {
          uVar17 = (uint)~param_2 >> 0x1f;
        }
        if (uVar17 == 0) {
          local_308 = (ulonglong)param_2;
          local_300 = (longlong)local_248.SeedRange.NumElements;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar16) {
            pcVar4 = (code *)swi(3);
            iVar18 = (*pcVar4)();
            return iVar18;
          }
        }
        if (param_2 == param_2 % local_248.SeedRange.ElementView.NumElements) {
          piVar24 = (int *)((longlong)local_248.SeedRange.ElementView.BytesBetweenElements *
                            (longlong)(param_2 % local_248.SeedRange.ElementView.NumElements) +
                           (longlong)local_248.SeedRange.ElementView.FirstElementPtr);
        }
        else {
          piVar24 = &local_248.SeedRange.StubValue;
        }
        iVar18 = iVar18 + 1;
        *piVar24 = iVar19;
        param_2 = param_2 + 1;
        this = local_2e8;
      }
      else {
        local_2e0 = local_2a8.Translation.XY.m128d_f64[0]._0_4_;
        uStack_2dc = local_2a8.Translation.XY.m128d_f64[0]._4_4_;
        uStack_2d8 = local_2a8.Translation.XY.m128d_f64[1]._0_4_;
        uStack_2d4 = local_2a8.Translation.XY.m128d_f64[1]._4_4_;
        local_2d0 = local_2a8.Translation.ZW.m128d_f64[0]._0_4_;
        uStack_2cc = local_2a8.Translation.ZW.m128d_f64[0]._4_4_;
        fVar31 = (float)(**(code **)(*plVar3 + 0x3a8))(plVar3,&local_2e0);
        if (0.0 < fVar31) goto LAB_149b6377b;
      }
      uVar30 = (ulonglong)(uVar28 + 1);
      lVar26 = local_2f0 + 0xd0;
      uVar29 = uVar29 + 1;
    } while ((int)(uVar28 + 1) < local_2f8);
  }
  return iVar18;
}

// ExecuteInternal @ 149b71190

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
FPCGCreatePointsElement::ExecuteInternal(FPCGCreatePointsElement *this,FPCGContext *param_1)

{
  char cVar1;
  UPCGNode *this_00;
  longlong lVar2;
  code *pcVar3;
  UPCGBasePointData *pUVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  UClass *pUVar9;
  UPCGSettings *pUVar10;
  TObjectPtr<UPCGSettings>_u_0 TVar11;
  FPCGTaggedData *pFVar12;
  longlong *plVar13;
  TObjectPtr<UPCGSettings>_u_0 TVar14;
  FText *this_01;
  IPCGGraphExecutionSource *pIVar15;
  double *pdVar16;
  UPCGComponent *pUVar17;
  UPCGComponent *pUVar18;
  TTransform<double> *pTVar19;
  ulonglong uVar20;
  int *piVar21;
  FPCGPoint *pFVar22;
  TObjectPtr<UPCGSettings>_u_0 TVar23;
  FPCGPoint *pFVar24;
  int iVar25;
  TObjectPtr<UPCGSettings>_u_0 TVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStackY_418 [32];
  <lambda_1> local_3c8;
  undefined1 local_3c7;
  <lambda_4> local_3c6 [6];
  FPCGDataPtrWrapper *local_3c0;
  UPCGBasePointData *local_3b8;
  TObjectPtr<UPCGSettings>_u_0 local_3b0;
  <lambda_2> local_3a8;
  <lambda_1> local_3a0;
  <lambda_3> local_398;
  FString local_378;
  FString local_368;
  FText local_358;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  TVector<double>_u_0 local_330;
  double local_318;
  double dStack_310;
  double local_308;
  double local_2f8 [2];
  double local_2e8 [2];
  double local_2d8 [2];
  double local_2c8 [2];
  double local_2b8 [2];
  double local_2a8 [2];
  TTransform<double> local_298;
  FPCGPointValueRanges local_238;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_418;
  TVar23.DebugPtr = (UPCGSettings *)0x0;
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId71,"FPCGCreatePointsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePoints.cpp"
               ,0x47);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId71);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePoints.cpp"
                         ,0x48,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
     (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar5))
  goto LAB_149b71b03;
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
      pFVar12 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreatePointsSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_3c8);
      if (pFVar12 != (FPCGTaggedData *)0x0) {
        local_3b0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar12->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_3b0.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b71345;
          UE::GC::MarkAsReachable((UObject *)local_3b0.DebugPtr);
        }
        if (local_3b0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar9 = UPCGCreatePointsSettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_3b0.ObjectPtr,pUVar9);
          TVar11 = local_3b0;
          if (bVar5) goto LAB_149b71348;
        }
      }
    }
    else {
      pUVar10 = UPCGNode::GetSettings(this_00);
      TVar11.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
      if (TVar11.DebugPtr != (UPCGSettings *)0x0) {
        pUVar9 = UPCGCreatePointsSettings::StaticClass();
        iVar7 = (int)pUVar9->_padding_;
        if ((iVar7 <= *(int *)((TVar11.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar9->_padding_)) goto LAB_149b71348;
      }
    }
LAB_149b71345:
    TVar11.DebugPtr = TVar23.DebugPtr;
  }
  else {
    pUVar9 = UPCGCreatePointsSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar9);
    if (!bVar5) goto LAB_149b71345;
    TVar11.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149b71348:
  if ((TVar11.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePoints.cpp"
                         ,0x50,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  TVar14.DebugPtr = TVar23.DebugPtr;
  if (*(char *)((longlong)&TVar11.DebugPtr[1]._padding_ + 1) == '\0') {
LAB_149b71456:
    if (*(char *)((longlong)&TVar11.DebugPtr[1]._padding_ + 1) != '\0') {
      if (1 < (byte)LogPCG._0_1_) {
        this_01 = FText::AsLocalizable_Advanced_LocText
                            (&local_358,L"PCGCreatePointsElement",L"CannotCullWithoutAShape",
                             L"Unable to cull since the supporting actor has no data.");
        FText::ToString(this_01);
        FPCGContext::GetTaskName(param_1,&local_368);
        FPCGContext::GetExecutionSourceName(param_1,&local_378);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_378.Data.AllocatorInstance.Data);
        }
        if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_368.Data.AllocatorInstance.Data);
        }
        if (local_358.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
        }
      }
      goto LAB_149b71b03;
    }
  }
  else {
    if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
        (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar5)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar13 = (longlong *)
              (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
    TVar14.DebugPtr = (UPCGSettings *)(**(code **)(*plVar13 + 8))(plVar13);
    if (TVar14.DebugPtr == (UPCGSettings *)0x0) {
LAB_149b713f3:
      TVar14.DebugPtr = TVar23.DebugPtr;
    }
    else {
      pUVar9 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      iVar7 = (int)pUVar9->_padding_;
      if ((*(int *)((TVar14.DebugPtr)->_padding_ + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar14.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8)
          != &pUVar9->_padding_)) goto LAB_149b713f3;
    }
    if (TVar14.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b71456;
  }
  if ((char)TVar11.DebugPtr[1]._padding_ == '\0') {
    pdVar16 = local_2f8;
    local_2f8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_2f8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_2e8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_2e8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_2d8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_2d8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_2c8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    local_2c8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_2b8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_2b8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_2a8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    local_2a8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  }
  else {
    pIVar15 = TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->(&param_1->ExecutionSource);
    plVar13 = (longlong *)(**(code **)((longlong)*pIVar15 + 0x18))(pIVar15);
    pdVar16 = (double *)(**(code **)(*plVar13 + 0x30))(plVar13,local_a8);
  }
  local_298.Rotation.XY.m128d_f64[0] = *pdVar16;
  local_298.Rotation.XY.m128d_f64[1] = pdVar16[1];
  local_298.Rotation.ZW.m128d_f64[0] = pdVar16[2];
  local_298.Rotation.ZW.m128d_f64[1] = pdVar16[3];
  local_298.Translation.XY.m128d_f64[0] = pdVar16[4];
  local_298.Translation.XY.m128d_f64[1] = pdVar16[5];
  local_298.Translation.ZW.m128d_f64[0] = pdVar16[6];
  local_298.Translation.ZW.m128d_f64[1] = pdVar16[7];
  local_298.Scale3D.XY.m128d_f64[0] = pdVar16[8];
  local_298.Scale3D.XY.m128d_f64[1] = pdVar16[9];
  local_298.Scale3D.ZW.m128d_f64[0] = pdVar16[10];
  local_298.Scale3D.ZW.m128d_f64[1] = pdVar16[0xb];
  if ((((char)TVar11.DebugPtr[1]._padding_ == '\x01') &&
      ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0)) &&
     ((bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar5 &&
      ((pIVar15 = (param_1->ExecutionSource).InterfaceInstance,
       pIVar15 != (IPCGGraphExecutionSource *)0x0 &&
       (pUVar17 = (UPCGComponent *)(**(code **)((longlong)*pIVar15 + 8))(),
       pUVar17 != (UPCGComponent *)0x0)))))) {
    pUVar9 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar7 = (int)pUVar9->_padding_;
    if ((iVar7 <= *(int *)(pUVar17->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar9->_padding_)) {
      pUVar18 = UPCGComponent::GetOriginalComponent(pUVar17);
      if (((pUVar18 == (UPCGComponent *)0x0) ||
          (pUVar18 = UPCGComponent::GetOriginalComponent(pUVar17), pUVar18->_padding_ == 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SourceComponent->GetOriginalComponent() && SourceComponent->GetOriginalComponent()->GetOwner()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePoints.cpp"
                             ,99,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pUVar17 = UPCGComponent::GetOriginalComponent(pUVar17);
      lVar2 = *(longlong *)(pUVar17->_padding_ + 0x1b8);
      if (lVar2 == 0) {
        pTVar19 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar19 = (TTransform<double> *)(lVar2 + 0x1f0);
      }
      local_298.Rotation.XY.m128d_f64[0] = (pTVar19->Rotation).XY.m128d_f64[0];
      local_298.Rotation.XY.m128d_f64[1] = (pTVar19->Rotation).XY.m128d_f64[1];
      local_298.Rotation.ZW.m128d_f64[0] = (pTVar19->Rotation).ZW.m128d_f64[0];
      local_298.Rotation.ZW.m128d_f64[1] = (pTVar19->Rotation).ZW.m128d_f64[1];
      local_298.Translation.XY.m128d_f64[0] = (pTVar19->Translation).XY.m128d_f64[0];
      local_298.Translation.XY.m128d_f64[1] = (pTVar19->Translation).XY.m128d_f64[1];
      local_298.Translation.ZW.m128d_f64[0] = (pTVar19->Translation).ZW.m128d_f64[0];
      local_298.Translation.ZW.m128d_f64[1] = (pTVar19->Translation).ZW.m128d_f64[1];
    }
  }
  piVar21 = &(param_1->OutputData).TaggedData.ArrayMax;
  iVar7 = (param_1->OutputData).TaggedData.ArrayNum;
  local_308 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_318 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_310 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_298.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_298.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_298.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_298.Scale3D.ZW.m128d_f64[1] = 0.0;
  if (iVar7 == *piVar21) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->OutputData,piVar21);
  }
  (param_1->OutputData).TaggedData.ArrayNum = iVar7 + 1;
  local_3c0 = (FPCGDataPtrWrapper *)
              ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar7 * 0x78);
  local_3c0[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  local_3c0[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  local_3c0[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  local_3c0[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  local_3c0[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (local_3c0->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (local_3c0->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  local_3c0[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  local_3c0[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  local_3c0[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  local_3c0[3].WeakData.WeakPtr.ObjectIndex = 0;
  local_3c0[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&local_3c0[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&local_3c0[4].Data.field0_0x0 + 4) = 0;
  local_3c0[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  local_3c0[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&local_3c0[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&local_3c0[7].Data.field0_0x0 + 4) = 0xffffffff;
  local_3b8 = FPCGContext::NewPointData_AnyThread(param_1);
  if ((local_3b8 == (UPCGBasePointData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PointData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePoints.cpp"
                         ,0x71,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pUVar4 = local_3b8;
  (**(code **)(local_3b8->_padding_ + 0x490))(local_3b8,(int)TVar11.DebugPtr[1]._padding_);
  (**(code **)(pUVar4->_padding_ + 0x498))(pUVar4,0xff);
  FPCGDataPtrWrapper::operator=(local_3c0,(UPCGData *)pUVar4);
  cVar1 = (char)TVar11.DebugPtr[1]._padding_;
  if (cVar1 == '\0') {
    FPCGPointValueRanges::FPCGPointValueRanges(&local_238,local_3b8,false);
    pFVar22 = (FPCGPoint *)TVar11.DebugPtr[1]._padding_;
    if (TVar14.DebugPtr == (UPCGSettings *)0x0) {
      iVar7 = (int)TVar11.DebugPtr[1]._padding_;
      pFVar24 = pFVar22 + iVar7;
      TVar14.DebugPtr = TVar23.DebugPtr;
      while( true ) {
        iVar25 = TVar14._0_4_;
        if ((int)TVar11.DebugPtr[1]._padding_ != iVar7) {
          local_3c8 = (<lambda_1>)0x0;
          `TCheckedPointerIterator<FPCGPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_3c8);
        }
        if (pFVar22 == pFVar24) break;
        FPCGPointValueRanges::SetFromPoint(&local_238,iVar25,pFVar22);
        TVar14._0_4_ = iVar25 + 1;
        TVar14._4_4_ = 0;
        pFVar22 = pFVar22 + 1;
      }
    }
    else {
      iVar7 = (int)TVar11.DebugPtr[1]._padding_;
      uVar20 = (ulonglong)iVar7;
      local_3c0 = (FPCGDataPtrWrapper *)CONCAT44(local_3c0._4_4_,iVar7);
      pFVar24 = pFVar22 + uVar20;
      TVar26.DebugPtr = TVar23.DebugPtr;
      while( true ) {
        iVar25 = TVar26._0_4_;
        if ((int)TVar11.DebugPtr[1]._padding_ != (int)uVar20) {
          local_3c7 = 0;
          `TCheckedPointerIterator<FPCGPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_3c7);
        }
        if (pFVar22 == pFVar24) break;
        local_348 = *(undefined4 *)(pFVar22->Transform).Translation.XY.m128d_f64;
        uStack_344 = *(undefined4 *)((longlong)(pFVar22->Transform).Translation.XY.m128d_f64 + 4);
        uStack_340 = *(undefined4 *)((pFVar22->Transform).Translation.XY.m128d_f64 + 1);
        uStack_33c = *(undefined4 *)((longlong)(pFVar22->Transform).Translation.XY.m128d_f64 + 0xc);
        local_338 = *(undefined4 *)(pFVar22->Transform).Translation.ZW.m128d_f64;
        uStack_334 = *(undefined4 *)((longlong)(pFVar22->Transform).Translation.ZW.m128d_f64 + 4);
        fVar28 = (float)(**(code **)((TVar14.DebugPtr)->_padding_ + 0x3a8))
                                  (TVar14.DebugPtr,&local_348);
        if (0.0 < fVar28) {
          FPCGPointValueRanges::SetFromPoint(&local_238,iVar25,pFVar22);
          TVar26._0_4_ = iVar25 + 1;
          TVar26._4_4_ = 0;
        }
        uVar20 = (ulonglong)local_3c0 & 0xffffffff;
        pFVar22 = pFVar22 + 1;
      }
    }
    if (0 < iVar25) {
      do {
        iVar7 = TVar23._0_4_;
        if ((local_238.SeedRange.NumElements <= iVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (iVar7 == iVar7 % local_238.SeedRange.ElementView.NumElements) {
          piVar21 = (int *)((longlong)local_238.SeedRange.ElementView.BytesBetweenElements *
                            (longlong)(iVar7 % local_238.SeedRange.ElementView.NumElements) +
                           (longlong)local_238.SeedRange.ElementView.FirstElementPtr);
        }
        else {
          piVar21 = &local_238.SeedRange.StubValue;
        }
        if (*piVar21 == 0) {
          if ((local_238.TransformRange.NumElements <= iVar7) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if (iVar7 == iVar7 % local_238.TransformRange.ElementView.NumElements) {
            pTVar19 = (TTransform<double> *)
                      ((longlong)
                       ((local_238.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                       m128d_f64 +
                      (longlong)local_238.TransformRange.ElementView.BytesBetweenElements *
                      (longlong)(iVar7 % local_238.TransformRange.ElementView.NumElements));
          }
          else {
            pTVar19 = &local_238.TransformRange.StubValue;
          }
          local_330._s_0.X = (pTVar19->Translation).XY.m128d_f64[0];
          local_330._s_0.Y = (pTVar19->Translation).XY.m128d_f64[1];
          local_330._s_0.Z = (pTVar19->Translation).ZW.m128d_f64[0];
          iVar8 = UPCGBlueprintHelpers::ComputeSeedFromPosition((TVector<double> *)&local_330._s_0);
          if ((local_238.SeedRange.NumElements <= iVar7) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if (iVar7 == iVar7 % local_238.SeedRange.ElementView.NumElements) {
            piVar21 = (int *)((longlong)local_238.SeedRange.ElementView.BytesBetweenElements *
                              (longlong)(iVar7 % local_238.SeedRange.ElementView.NumElements) +
                             (longlong)local_238.SeedRange.ElementView.FirstElementPtr);
          }
          else {
            piVar21 = &local_238.SeedRange.StubValue;
          }
          *piVar21 = iVar8;
        }
        TVar23._0_4_ = iVar7 + 1;
        TVar23._4_4_ = 0;
      } while ((int)TVar23._0_4_ < iVar25);
    }
    (**(code **)(local_3b8->_padding_ + 0x490))(local_3b8,iVar25,1);
  }
  else {
    if ((1 < (byte)(cVar1 - 1U)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Settings->CoordinateSpace == EPCGCoordinateSpace::LocalComponent || Settings->CoordinateSpace == EPCGCoordinateSpace::OriginalComponent"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePoints.cpp"
                           ,0x9f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_3a0.PointData = local_3b8;
    local_3a8.PointData = local_3b8;
    local_398.PointData = local_3b8;
    local_398.LocalTransform = &local_298;
    local_398.PointsToLoopOn =
         (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)(TVar11.DebugPtr + 1);
    local_398.CullingShape = (UPCGSpatialData *)TVar14;
    FPCGAsync::
    AsyncProcessingRangeEx<_FPCGCreatePointsElement::ExecuteInternal_::__l86::<lambda_4>,_FPCGCreatePointsElement::ExecuteInternal_::__l86::<lambda_3>_&,_FPCGCreatePointsElement::ExecuteInternal_::__l86::<lambda_1>_&,_FPCGCreatePointsElement::ExecuteInternal_::__l86::<lambda_2>_&>
              (&param_1->AsyncState,(int)TVar11.DebugPtr[1]._padding_,local_3c6,&local_398,
               &local_3a0,&local_3a8,false,0x40,true);
  }
LAB_149b71b03:
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// GetDependenciesCrc @ 149b8e310

void __thiscall
FPCGCreatePointsElement::GetDependenciesCrc
          (FPCGCreatePointsElement *this,FPCGGetDependenciesCrcParams *param_1,FPCGCrc *param_2)

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
LAB_149b8e577:
    FVar10.bValid = local_c8.bValid;
    FVar10._5_3_ = local_c8._5_3_;
    FVar10.Value = local_c8.Value;
    *param_2 = FVar10;
    return;
  }
  pUVar7 = UPCGCreatePointsSettings::StaticClass();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) goto LAB_149b8e577;
  local_res18.ComparisonIndex.Value = (uint)(byte)pUVar2[1]._padding_;
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
            (param_1->InputData,pUVar2,*pFVar8,(bool *)((longlong)&pUVar2[1]._padding_ + 1),
             local_res10);
  pIVar5 = param_1->ExecutionSource;
  if (pIVar5 == (IPCGGraphExecutionSource *)0x0) goto LAB_149b8e559;
  if ((local_res10[0] != false) || ((char)local_res20[0] == '\x02')) goto LAB_149b8e50d;
  if ((char)local_res20[0] != '\x01') goto LAB_149b8e559;
  this_01 = (UPCGComponent *)(**(code **)((longlong)*pIVar5 + 8))(pIVar5);
  if (this_01 == (UPCGComponent *)0x0) {
LAB_149b8e50d:
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5);
    this_02 = (UPCGData *)(**(code **)(*plVar9 + 8))(plVar9);
  }
  else {
    pUVar7 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_149b8e50d;
    this_02 = UPCGComponent::GetOriginalActorPCGData(this_01);
  }
  if (this_02 != (UPCGData *)0x0) {
    FVar10 = UPCGData::GetOrComputeCrc(this_02,SUB81(&local_res18,0));
    local_c8.Value =
         local_c8.Value ^
         *(int *)FVar10 + local_c8.Value * 0x40 + (local_c8.Value >> 2) + -0x61c88647;
  }
LAB_149b8e559:
  FVar6.bValid = local_c8.bValid;
  FVar6._5_3_ = local_c8._5_3_;
  FVar6.Value = local_c8.Value;
  *param_2 = FVar6;
  return;
}

// IsCacheable @ 149b930c0

bool __thiscall
FPCGCreatePointsElement::IsCacheable(FPCGCreatePointsElement *this,UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UPCGSettings *)0x0) {
    pUVar2 = UPCGCreatePointsSettings::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) && ((char)param_1[1]._padding_ == '\0')) {
      return true;
    }
  }
  return false;
}

// ShouldComputeFullOutputDataCrc @ 149b980c0

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
FPCGCreatePointsElement::ShouldComputeFullOutputDataCrc
          (FPCGCreatePointsElement *this,FPCGContext *param_1)

{
  return true;
}

