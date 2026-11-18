// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// FSurfaceSamplerData @ 149c4ac80

FSurfaceSamplerData * __thiscall
PCGSurfaceSampler::FSurfaceSamplerData::FSurfaceSamplerData(FSurfaceSamplerData *this)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  (this->Params).bUseLegacyGridCreationMethod = false;
  (this->Params).PointsPerSquaredMeter = 1.0;
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Params).Looseness = 0.0;
  (this->Params).bApplyDensityToPoints = false;
  (this->Params).PointSteepness = 0.0;
  dVar1 = __real_3fe0000000000000;
  dVar5 = (double)uVar4 * __real_3fe0000000000000;
  (this->Params).PointExtents.field0_0x0._s_0.X = (double)uVar2 * __real_3fe0000000000000;
  (this->Params).PointExtents.field0_0x0._s_0.Z = dVar5;
  (this->Params).PointExtents.field0_0x0._s_0.Y = (double)uVar3 * dVar1;
  this->bNeedsLocalTransformation = false;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InterstitialDistance).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InterstitialDistance).field0_0x0._s_0.Y = (double)uVar2;
  (this->InterstitialDistance).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InnerCellSize).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InnerCellSize).field0_0x0._s_0.Y = (double)uVar2;
  (this->InnerCellSize).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InnerCellOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InnerCellOffset).field0_0x0._s_0.Y = (double)uVar2;
  (this->InnerCellOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CellSize).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CellSize).field0_0x0._s_0.Y = (double)uVar2;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->CellMinX = 0;
  this->CellMaxX = 0;
  this->CellMinY = 0;
  this->CellMaxY = 0;
  this->CellCount = 0;
  this->Ratio = 0.0;
  this->Seed = 0;
  this->PreProjectionDisplacement = 0.0;
  (this->CellSize).field0_0x0._s_0.Z = (double)uVar2;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->PreProjectionTransform).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->PreProjectionTransform).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->PreProjectionTransform).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->PreProjectionTransform).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->PreProjectionTransform).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->PreProjectionTransform).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->PreProjectionTransform).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->PreProjectionTransform).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->PreProjectionTransform).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->PreProjectionTransform).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->PreProjectionTransform).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->PreProjectionTransform).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->PreProjectionTransform).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->PreProjectionTransform).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->PreProjectionTransform).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->PreProjectionTransform).M[3][3] = dVar1;
  return this;
}

// ComputeCellIndices @ 149c5e930

TIntVector2<int> __thiscall
PCGSurfaceSampler::FSurfaceSamplerData::ComputeCellIndices(FSurfaceSamplerData *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TIntVector2<int> TVar4;
  int iVar5;
  undefined4 in_register_00000014;
  TIntVector2<int>_u_0 TVar6;
  int in_R8D;
  
  TVar6._s_0.Y = in_register_00000014;
  TVar6._s_0.X = param_1;
  if ((in_R8D < 0) || (this->CellCount <= in_R8D)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < CellCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                       ,0xcd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.field0_0x0 = (TIntVector2<int>_u_0)(*pcVar2)();
      return (TIntVector2<int>)TVar4.field0_0x0;
    }
  }
  iVar1 = this->CellMinX;
  iVar5 = (this->CellMaxX - iVar1) + 1;
  *(int *)((longlong)TVar6 + 4) = in_R8D / iVar5 + this->CellMinY;
  *(int *)TVar6 = iVar1 + in_R8D % iVar5;
  return (TIntVector2<int>)TVar6;
}

// Initialize @ 149c7c3a0

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
PCGSurfaceSampler::FSurfaceSamplerData::Initialize
          (FSurfaceSamplerData *this,FPCGContext *param_1,TBox<double> *param_2,
          TTransform<double> *param_3)

{
  TMatrix<double> *pTVar1;
  float fVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  double dVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  TConsoleVariableData<bool> *pTVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  ulong64 uVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  TRotator<double> *pTVar21;
  TMatrix<double> *pTVar22;
  TVector<double> *pTVar23;
  TQuat<double> *pTVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  FFormatArgumentValue_u_8 FVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
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
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  double dVar74;
  undefined4 uVar79;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined4 uVar80;
  double dVar81;
  undefined1 auVar82 [16];
  double dVar83;
  double dVar84;
  undefined1 auVar85 [16];
  uint uVar87;
  uint uVar89;
  undefined1 auVar86 [16];
  double dVar88;
  double dVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  uint uVar95;
  uint uVar97;
  undefined1 auVar96 [16];
  undefined4 uVar98;
  undefined1 auStackY_618 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_5d8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_5c8;
  longlong local_5b8;
  FText local_5b0;
  FTextFormat local_5a0;
  FText local_590;
  FTextFormat local_580;
  FFormatArgumentValue local_570;
  FFormatArgumentValue local_548;
  undefined4 local_528;
  longlong local_520;
  longlong *local_518;
  undefined4 local_510;
  TTransform<double> local_508;
  FText local_4a8;
  FText local_498;
  FText local_488;
  FText local_478;
  FString local_468;
  FString local_458;
  FText local_448;
  FText local_438;
  FText local_428;
  undefined1 local_418 [16];
  double local_408;
  TVector<double>_u_0 local_3f8;
  FString local_3d0;
  FString local_3c0;
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  TQuat<double> local_388;
  TVector<double> local_368;
  TTransform<double> local_348;
  FTextFormat local_2e8;
  FTextFormat local_2d8;
  FTextFormat local_2c8 [2];
  TVector<double> local_2a0;
  TQuat<double> local_288;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  uint uVar69;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_618;
  lVar28 = 0;
  if (param_2->IsValid == '\0') {
    return false;
  }
  if (param_1 == (FPCGContext *)0x0) {
    iVar16 = 0x2a;
  }
  else {
    iVar16 = FPCGContext::GetSeed(param_1);
  }
  dVar61 = (this->Params).PointExtents.field0_0x0._s_0.X;
  this->Seed = iVar16;
  dVar50 = __real_be45798ee2308c3a;
  dVar6 = __real_3fe0000000000000;
  dVar9 = __real_3ff0000000000000;
  if ((dVar61 <= 0.0) || (dVar90 = (this->Params).PointExtents.field0_0x0._s_0.Y, dVar90 <= 0.0)) {
    pFVar19 = FText::AsLocalizable_Advanced_LocText
                        (&local_428,L"PCGSurfaceSamplerElement",L"InvalidParametersExtents",
                         L"Skipped - Extents are negative or zero.");
    PCGLog::LogWarningOnGraph(pFVar19,param_1);
    local_438.TextData.Reference = local_428.TextData.Reference;
  }
  else {
    if ((this->Params).bUseLegacyGridCreationMethod == false) {
      fVar2 = (this->Params).PointsPerSquaredMeter;
      dVar60 = __real_47eff933c78cdfad;
      if (0.0 < fVar2) {
        dVar60 = __real_40c3880000000000 / (double)fVar2;
      }
      auVar75._8_8_ = 0;
      auVar75._0_8_ = dVar60;
      dVar81 = (this->Params).PointExtents.field0_0x0._s_0.Z;
      dVar73 = dVar61;
      if (dVar61 <= dVar90) {
        dVar73 = dVar90;
      }
      dVar74 = dVar61;
      if (dVar90 <= dVar61) {
        dVar74 = dVar90;
      }
      dVar81 = dVar81 + dVar81;
      auVar37._0_8_ = (__real_3fe0000000000000 / dVar73) * (dVar74 + dVar74) * dVar60;
      auVar37._8_8_ = 0;
      auVar75 = sqrtpd(auVar75,auVar37);
      dVar60 = __real_3ff0000000000000 / (dVar74 + dVar74);
      dVar73 = auVar75._0_8_ + auVar75._0_8_;
      (this->CellSize).field0_0x0._s_0.X = dVar61 * dVar60 * dVar73;
      (this->CellSize).field0_0x0._s_0.Y = dVar90 * dVar60 * dVar73;
      (this->CellSize).field0_0x0._s_0.Z = dVar81;
      (this->InterstitialDistance).field0_0x0._s_0.X = dVar61 + dVar61;
      (this->InterstitialDistance).field0_0x0._s_0.Y = dVar90 + dVar90;
      (this->InterstitialDistance).field0_0x0._s_0.Z = dVar81;
      dVar74 = (this->CellSize).field0_0x0._s_0.X;
      dVar61 = (this->InterstitialDistance).field0_0x0._s_0.X;
      dVar60 = (this->CellSize).field0_0x0._s_0.Y;
      dVar83 = dVar74 - dVar61;
      dVar73 = (this->CellSize).field0_0x0._s_0.Z;
      dVar90 = dVar60 - (dVar90 + dVar90);
      if ((dVar83 < 0.0) || (dVar90 < 0.0)) {
        if (dVar74 <= dVar61) {
          dVar74 = dVar61;
        }
        (this->CellSize).field0_0x0._s_0.X = dVar74;
        dVar83 = dVar74 - dVar61;
        dVar90 = (this->InterstitialDistance).field0_0x0._s_0.Y;
        if (dVar90 <= dVar60) {
          dVar90 = dVar60;
        }
        (this->CellSize).field0_0x0._s_0.Y = dVar90;
        dVar90 = dVar90 - (this->InterstitialDistance).field0_0x0._s_0.Y;
        if (((dVar83 < dVar50) || (dVar90 < dVar50)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("CellRemainder.X >= -(1.e-8) && CellRemainder.Y >= -(1.e-8)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                                ,0x5d,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
      dVar73 = dVar73 - dVar81;
      dVar61 = (double)(this->Params).Looseness;
      if (dVar9 <= dVar61) {
        dVar61 = dVar9;
      }
      if (dVar61 <= 0.0) {
        dVar61 = 0.0;
      }
      (this->InnerCellSize).field0_0x0._s_0.X = dVar61 * dVar83;
      (this->InnerCellSize).field0_0x0._s_0.Y = dVar61 * dVar90;
      dVar60 = dVar9 - dVar61;
      (this->InnerCellSize).field0_0x0._s_0.Z = dVar61 * dVar73;
      (this->InnerCellOffset).field0_0x0._s_0.X = dVar83 * dVar6 * dVar60;
      (this->InnerCellOffset).field0_0x0._s_0.Y = dVar60 * dVar90 * dVar6;
      (this->InnerCellOffset).field0_0x0._s_0.Z = dVar60 * dVar73 * dVar6;
    }
    else {
      dVar60 = (this->Params).PointExtents.field0_0x0._s_0.Z;
      dVar60 = dVar60 + dVar60;
      (this->InterstitialDistance).field0_0x0._s_0.X = dVar61 + dVar61;
      (this->InterstitialDistance).field0_0x0._s_0.Y = dVar90 + dVar90;
      (this->InterstitialDistance).field0_0x0._s_0.Z = dVar60;
      dVar61 = (double)(this->Params).Looseness;
      (this->InnerCellSize).field0_0x0._s_0.X =
           dVar61 * (this->InterstitialDistance).field0_0x0._s_0.X;
      (this->InnerCellSize).field0_0x0._s_0.Y = dVar61 * (dVar90 + dVar90);
      (this->InnerCellSize).field0_0x0._s_0.Z = dVar61 * dVar60;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (this->InnerCellOffset).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (this->InnerCellOffset).field0_0x0._s_0.Y = (double)uVar12;
      (this->InnerCellOffset).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar61 = (this->InnerCellSize).field0_0x0._s_0.Y;
      dVar90 = (this->InnerCellSize).field0_0x0._s_0.Z;
      dVar60 = (this->InterstitialDistance).field0_0x0._s_0.Y;
      dVar81 = (this->InterstitialDistance).field0_0x0._s_0.Z;
      (this->CellSize).field0_0x0._s_0.X =
           (this->InnerCellSize).field0_0x0._s_0.X + (this->InterstitialDistance).field0_0x0._s_0.X;
      (this->CellSize).field0_0x0._s_0.Y = dVar60 + dVar61;
      (this->CellSize).field0_0x0._s_0.Z = dVar81 + dVar90;
    }
    dVar60 = __real_bfe0000000000000;
    dVar90 = __real_4000000000000000;
    dVar61 = (this->CellSize).field0_0x0._s_0.X;
    if ((dVar61 <= 0.0) || (dVar81 = (this->CellSize).field0_0x0._s_0.Y, dVar81 <= 0.0)) {
      pFVar19 = FText::AsLocalizable_Advanced_LocText
                          (&local_438,L"PCGSurfaceSamplerElement",L"InvalidParameters",
                           L"Skipped - Extents and/or Looseness are negative or zero.");
      PCGLog::LogWarningOnGraph(pFVar19,param_1);
    }
    else {
      dVar73 = (param_2->Min).field0_0x0._s_0.X;
      iVar25 = (int)((longlong)ROUND(__real_bfe0000000000000 - (dVar73 + dVar73) / dVar61) >> 1);
      this->CellMinX = -iVar25;
      dVar73 = (param_2->Max).field0_0x0._s_0.X;
      iVar16 = (int)((longlong)ROUND((dVar73 + dVar73) / dVar61 - dVar6) >> 1);
      this->CellMaxX = iVar16;
      local_5b8 = (longlong)(iVar16 + iVar25 + 1);
      iVar25 = (int)((longlong)ROUND(dVar60 - (dVar90 / dVar81) * (param_2->Min).field0_0x0._s_0.Y)
                    >> 1);
      this->CellMinY = -iVar25;
      dVar61 = (param_2->Max).field0_0x0._s_0.Y;
      iVar16 = (int)((longlong)ROUND((dVar61 + dVar61) / dVar81 - dVar6) >> 1);
      this->CellMaxY = iVar16;
      iVar16 = iVar16 + iVar25 + 1;
      if ((local_5b8 < 1) || (iVar16 < 1)) {
        if (param_1 == (FPCGContext *)0x0) {
          return false;
        }
        if ((byte)LogPCG._0_1_ < 6) {
          return false;
        }
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_448,L"PCGSurfaceSamplerElement",L"InvalidCellBounds",
                             L"Skipped - invalid cell bounds({0} x {1})");
        pFVar20 = FTextFormat::FTextFormat(&local_2e8,pFVar19,Default);
        local_548.Type = Int;
        local_548.field1_0x8.IntValue = local_5b8;
        local_548.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_548.TextValue.field0_0x0.TypedValue.Flags = 0;
        local_528 = 0;
        local_518 = (longlong *)0x0;
        local_510 = 0;
        local_5c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5c8.ArrayNum = 2;
        local_520 = (longlong)iVar16;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_5c8.AllocatorInstance,2,&local_5c8.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_5c8.AllocatorInstance.Data,&local_548,2);
        local_580.TextFormatData.Object = (pFVar20->TextFormatData).Object;
        local_580.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar20->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_580.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_580.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_580.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_5b0,&local_580,&local_5c8);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_5c8.AllocatorInstance.Data,local_5c8.ArrayNum);
        if ((FFormatArgumentValue *)local_5c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_5c8.AllocatorInstance.Data);
        }
        if (local_518 != (longlong *)0x0) {
          (**(code **)(*local_518 + 0x10))();
        }
        if (local_548.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_548.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar20->TextFormatData).SharedReferenceCount.ReferenceController);
        FText::ToString(&local_5b0);
        FPCGContext::GetTaskName(param_1,&local_458);
        FPCGContext::GetExecutionSourceName(param_1,&local_468);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_468.Data.AllocatorInstance.Data);
        }
        if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_458.Data.AllocatorInstance.Data);
        }
        local_438.TextData.Reference = local_448.TextData.Reference;
        if (local_5b0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_5b0.TextData.Reference + 0x10))();
          local_438.TextData.Reference = local_448.TextData.Reference;
        }
      }
      else {
        FVar29.IntValue = iVar16 * local_5b8;
        if (FVar29.IntValue - 1U < 0x7ffffffe) {
          this->CellCount = (int)FVar29.FloatValue;
          if (((int)FVar29.FloatValue < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CellCount > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                                  ,0x91,L""), bVar14)) {
            pcVar3 = (code *)swi(3);
            uVar15 = (*pcVar3)();
            return (bool)uVar15;
          }
          if ((this->Params).bUseLegacyGridCreationMethod == false) {
            this->Ratio = 1.0;
          }
          else {
            dVar61 = (((param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y) *
                      ((param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X) *
                     (double)(this->Params).PointsPerSquaredMeter * __real_3f1a36e2eb1c432d) /
                     (double)this->CellCount;
            if (dVar9 <= dVar61) {
              dVar61 = dVar9;
            }
            if (dVar61 <= 0.0) {
              dVar61 = 0.0;
            }
            this->Ratio = (float)dVar61;
            if ((float)dVar61 < __real_322bcc77) {
              if (param_1 == (FPCGContext *)0x0) {
                return false;
              }
              if ((byte)LogPCG._0_1_ < 6) {
                return false;
              }
              pFVar19 = FText::AsLocalizable_Advanced_LocText
                                  (&local_4a8,L"PCGSurfaceSamplerElement",L"NoPointsFromDensity",
                                   L"Skipped - density yields no points");
              FText::ToString(pFVar19);
              FPCGContext::GetTaskName(param_1,&local_3c0);
              FPCGContext::GetExecutionSourceName(param_1,&local_3d0);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
              }
              local_438.TextData.Reference = local_4a8.TextData.Reference;
              if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
                local_438.TextData.Reference = local_4a8.TextData.Reference;
              }
              goto LAB_149c7d264;
            }
          }
          pTVar13 = PCGFeatureSwitches::CVarCheckSamplerMemory.Ref;
          bVar14 = IsInParallelGameThread();
          if ((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) {
            lVar28 = 1;
          }
          if (pTVar13->ShadowedValue[lVar28] != false) {
            iVar16 = this->CellCount;
            uVar18 = PCGFeatureSwitches::Helpers::GetAvailableMemoryForSamplers();
            if (uVar18 < (ulonglong)((longlong)iVar16 * 0xd0)) {
              pFVar19 = FText::AsLocalizable_Advanced_LocText
                                  (&local_488,L"PCGSurfaceSamplerElement",L"TooManyPoints",
                                   L"Skipped - tried to generate too many points ({0}).\nAdjust \'pcg.SamplerMemoryThreshold\' if needed."
                                  );
              pFVar20 = FTextFormat::FTextFormat(&local_2d8,pFVar19,Default);
              pFVar19 = FText::Format<int>(&local_498,pFVar20,iVar16);
              PCGLog::LogErrorOnGraph(pFVar19,param_1);
              local_438.TextData.Reference = local_488.TextData.Reference;
              if (local_498.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_498.TextData.Reference + 0x10))();
                local_438.TextData.Reference = local_488.TextData.Reference;
              }
              goto LAB_149c7d264;
            }
          }
          auVar75 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
          local_398 = (param_3->Rotation).ZW.m128d_f64[0];
          dStack_390 = (param_3->Rotation).ZW.m128d_f64[1];
          pTVar24 = (TQuat<double> *)local_3a8;
          local_3a8 = auVar75;
          pTVar21 = UE::Math::TQuat<double>::Rotator(pTVar24,(TRotator<double> *)local_418);
          uVar11 = _UNK_15061cc8c;
          uVar10 = _UNK_15061cc88;
          uVar97 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar95 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          dVar73 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
          auVar37 = divpd(local_418,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64)
          ;
          auVar75 = roundpd(auVar75,auVar37,3);
          dVar61 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
          auVar51._0_8_ = auVar75._0_8_ * dVar61;
          dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
          auVar51._8_8_ = auVar75._8_8_ * dVar6;
          auVar38._8_8_ = 0;
          auVar38._0_8_ = local_408;
          dVar60 = local_418._0_8_ - auVar51._0_8_;
          dVar90 = local_418._8_8_ - auVar51._8_8_;
          auVar75 = divpd(auVar38,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
          auVar75 = roundpd(auVar51,auVar75,3);
          dVar74 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
          auVar39._8_4_ = SUB84(dVar90,0);
          auVar39._0_8_ = dVar60;
          auVar39._12_4_ = (int)((ulonglong)dVar90 >> 0x20);
          local_408 = local_408 - auVar75._0_8_ * dVar73;
          dVar81 = 0.0 - auVar75._8_8_ * dVar74;
          uVar30 = -(ulonglong)(0.0 <= dVar60);
          uVar33 = -(ulonglong)(0.0 <= dVar90);
          auVar52._0_8_ = uVar30 & (ulonglong)dVar60;
          auVar52._8_4_ = (undefined4)(uVar33 & (ulonglong)dVar90);
          auVar52._12_4_ = (undefined4)((uVar33 & (ulonglong)dVar90) >> 0x20);
          dVar90 = auVar39._8_8_ + dVar6;
          uVar31 = -(ulonglong)(0.0 <= local_408);
          uVar34 = -(ulonglong)(0.0 <= dVar81);
          auVar85._0_4_ = ~(uint)uVar30 & SUB84(dVar60 + dVar61,0);
          auVar85._4_4_ = ~(uint)(uVar30 >> 0x20) & (uint)((ulonglong)(dVar60 + dVar61) >> 0x20);
          auVar85._8_4_ = ~(uint)uVar33 & SUB84(dVar90,0);
          auVar85._12_4_ = ~(uint)(uVar33 >> 0x20) & (uint)((ulonglong)dVar90 >> 0x20);
          auVar85 = auVar85 | auVar52;
          auVar62._0_8_ = uVar31 & (ulonglong)local_408;
          auVar62._8_4_ = (undefined4)(uVar34 & (ulonglong)dVar81);
          auVar62._12_4_ = (undefined4)((uVar34 & (ulonglong)dVar81) >> 0x20);
          auVar40._8_4_ = SUB84(dVar81,0);
          auVar40._0_8_ = local_408;
          auVar40._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
          dVar90 = auVar40._8_8_ + dVar74;
          auVar70._0_4_ = ~(uint)uVar31 & SUB84(local_408 + dVar73,0);
          auVar70._4_4_ = ~(uint)(uVar31 >> 0x20) & (uint)((ulonglong)(local_408 + dVar73) >> 0x20);
          auVar70._8_4_ = ~(uint)uVar34 & SUB84(dVar90,0);
          auVar70._12_4_ = ~(uint)(uVar34 >> 0x20) & (uint)((ulonglong)dVar90 >> 0x20);
          auVar70 = auVar70 | auVar62;
          uVar31 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar70._0_8_);
          uVar34 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar70._8_8_);
          uVar33 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar85._0_8_);
          uVar35 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar85._8_8_);
          auVar53._0_8_ = uVar31 & (ulonglong)(auVar70._0_8_ - dVar73);
          uVar30 = uVar34 & (ulonglong)(auVar70._8_8_ - dVar74);
          auVar53._8_4_ = (undefined4)uVar30;
          auVar53._12_4_ = (undefined4)(uVar30 >> 0x20);
          auVar41._0_4_ = ~(uint)uVar31 & auVar70._0_4_;
          auVar41._4_4_ = ~(uint)(uVar31 >> 0x20) & auVar70._4_4_;
          auVar41._8_4_ = ~(uint)uVar34 & auVar70._8_4_;
          auVar41._12_4_ = ~(uint)(uVar34 >> 0x20) & auVar70._12_4_;
          auVar53 = auVar53 | auVar41;
          auVar42._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
          auVar42._0_8_ = __real_3f1a36e2e0000000;
          auVar42._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
          auVar54._0_8_ =
               (double)CONCAT44(auVar53._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                auVar53._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar54._8_4_ = auVar53._8_4_ & _UNK_15061cc88;
          auVar54._12_4_ = auVar53._12_4_ & _UNK_15061cc8c;
          auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ < auVar54._8_8_);
          auVar43._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar54._0_8_);
          iVar16 = movmskpd((int)pTVar24,auVar43);
          auVar55._0_8_ = (ulonglong)(auVar85._0_8_ - dVar61) & uVar33;
          uVar30 = uVar35 & (ulonglong)(auVar85._8_8_ - dVar6);
          auVar55._8_4_ = (undefined4)uVar30;
          auVar55._12_4_ = (undefined4)(uVar30 >> 0x20);
          auVar63._0_4_ = ~(uint)uVar33 & auVar85._0_4_;
          auVar63._4_4_ = ~(uint)(uVar33 >> 0x20) & auVar85._4_4_;
          auVar63._8_4_ = ~(uint)uVar35 & auVar85._8_4_;
          auVar63._12_4_ = ~(uint)(uVar35 >> 0x20) & auVar85._12_4_;
          auVar55 = auVar55 | auVar63;
          auVar56._0_8_ =
               (double)CONCAT44(auVar55._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                auVar55._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar56._8_4_ = auVar55._8_4_ & _UNK_15061cc88;
          auVar56._12_4_ = auVar55._12_4_ & _UNK_15061cc8c;
          auVar91._8_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar56._8_8_);
          auVar91._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar56._0_8_);
          uVar17 = movmskpd((int)pTVar21,auVar91);
          uVar26 = iVar16 << 2 | uVar17;
          this->bNeedsLocalTransformation = uVar26 != 0;
          if (uVar26 != 0) {
            local_348.Translation.XY.m128d_f64 = *&(param_3->Translation).XY.m128d_f64;
            local_348.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
            dVar6 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
            dVar61 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
            auVar7._4_8_ = GlobalVectorConstants::Float0001.m128_u64[1];
            auVar7._0_4_ = local_348.Translation.XY.m128d_f64[0]._4_4_;
            auVar44._0_8_ = auVar7._0_8_ << 0x20;
            auVar44._8_4_ = local_348.Translation.XY.m128d_f64[1]._0_4_;
            auVar44._12_4_ = local_348.Translation.XY.m128d_f64[1]._4_4_;
            local_348.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
            local_348.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_348.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
            local_348.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_348.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_348.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_348.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            local_348.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar61,0);
            local_348.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_348.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar61 >> 0x20);
            uVar69 = (uint)((ulonglong)local_348.Scale3D.ZW.m128d_f64[0] >> 0x20);
            auVar64._0_8_ =
                 (double)CONCAT44(uVar69 & uVar97,
                                  SUB84(local_348.Scale3D.ZW.m128d_f64[0],0) & uVar95);
            auVar64._8_4_ = SUB84(local_348.Scale3D.ZW.m128d_f64[1],0) & uVar10;
            auVar64._12_4_ = (uint)((ulonglong)local_348.Scale3D.ZW.m128d_f64[1] >> 0x20) & uVar11;
            auVar57._8_8_ =
                 -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar64._8_8_);
            auVar57._0_8_ =
                 -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar64._0_8_);
            uVar87 = (uint)((ulonglong)local_348.Scale3D.XY.m128d_f64[0] >> 0x20);
            uVar89 = (uint)((ulonglong)local_348.Scale3D.XY.m128d_f64[1] >> 0x20);
            uVar27 = movmskpd(uVar26,auVar57);
            auVar65._0_8_ =
                 (double)CONCAT44(uVar87 & uVar97,
                                  SUB84(local_348.Scale3D.XY.m128d_f64[0],0) & uVar95);
            auVar65._8_4_ = SUB84(local_348.Scale3D.XY.m128d_f64[1],0) & uVar10;
            auVar65._12_4_ = uVar89 & uVar11;
            local_348.Translation.ZW.m128d_f64[1] = 0.0;
            auVar45._8_8_ =
                 -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar65._8_8_);
            auVar45._0_8_ =
                 -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar65._0_8_);
            iVar16 = movmskpd(CONCAT31((int3)(uVar17 >> 8),uVar26 != 0),auVar45);
            if ((uVar27 & 0x3fffffff) == 0 && iVar16 == 0) {
              local_508.Rotation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              local_508.Rotation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              local_508.Translation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              local_508.Translation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              local_508.Scale3D.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              local_508.Scale3D.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            }
            else {
              dVar60 = (double)GlobalVectorConstants::Float0001.m128_f32[2] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              dVar61 = dVar61 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              uVar79 = (undefined4)((ulonglong)dVar61 >> 0x20);
              auVar8._4_8_ = dVar81;
              auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
              auVar76._0_8_ = auVar8._0_8_ << 0x20;
              auVar76._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
              auVar76._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
              dVar81 = (double)GlobalVectorConstants::Float0001.m128_f32[0] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar6 = dVar6 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              uVar80 = SUB84(dVar6,0);
              uVar98 = (undefined4)((ulonglong)dVar6 >> 0x20);
              auVar77._8_8_ = auVar76._8_8_;
              auVar77._0_8_ = local_348.Scale3D.ZW.m128d_f64[0];
              local_508.Rotation.XY.m128d_f64[1]._0_4_ = uVar80;
              local_508.Rotation.XY.m128d_f64[0] = dVar81;
              local_508.Rotation.XY.m128d_f64[1]._4_4_ = uVar98;
              local_508.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar61,0);
              local_508.Rotation.ZW.m128d_f64[0] = dVar60;
              local_508.Rotation.ZW.m128d_f64[1]._4_4_ = uVar79;
              lVar28 = -(ulonglong)
                        ((double)CONCAT44(uVar69 & uVar97,
                                          SUB84(local_348.Scale3D.ZW.m128d_f64[0],0) & uVar95) <=
                        (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
              auVar96._0_8_ =
                   (double)CONCAT44(uVar97 & uVar87,
                                    uVar95 & SUB84(local_348.Scale3D.XY.m128d_f64[0],0));
              auVar96._8_4_ = uVar10 & SUB84(local_348.Scale3D.XY.m128d_f64[1],0);
              auVar96._12_4_ = uVar11 & uVar89;
              auVar75 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              (undefined1  [16])local_348.Scale3D.XY.m128d_f64);
              auVar82._8_4_ = uVar80;
              auVar82._0_8_ = dVar81;
              auVar82._12_4_ = uVar98;
              lVar32 = -(ulonglong)
                        (auVar96._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
              lVar36 = -(ulonglong)
                        (auVar96._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
              local_508.Scale3D.XY.m128d_f64[0] =
                   (double)CONCAT44(~(uint)((ulonglong)lVar32 >> 0x20) & auVar75._4_4_,
                                    ~(uint)lVar32 & auVar75._0_4_);
              local_508.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar36 & auVar75._8_4_;
              local_508.Scale3D.XY.m128d_f64[1]._4_4_ =
                   ~(uint)((ulonglong)lVar36 >> 0x20) & auVar75._12_4_;
              auVar75 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar77);
              auVar86._8_4_ = local_508.Scale3D.XY.m128d_f64[1]._0_4_;
              auVar86._0_8_ = local_508.Scale3D.XY.m128d_f64[0];
              auVar86._12_4_ = local_508.Scale3D.XY.m128d_f64[1]._4_4_;
              dVar84 = local_508.Scale3D.XY.m128d_f64[0] * local_348.Translation.XY.m128d_f64[0];
              dVar88 = auVar86._8_8_ * auVar44._8_8_;
              auVar66._8_4_ = uVar80;
              auVar66._0_8_ = dVar81;
              auVar66._12_4_ = uVar98;
              local_508.Scale3D.ZW.m128d_f64[0] =
                   (double)CONCAT44(~(uint)((ulonglong)lVar28 >> 0x20) & auVar75._4_4_,
                                    ~(uint)lVar28 & auVar75._0_4_);
              dVar73 = auVar66._8_8_;
              auVar46._8_4_ = SUB84(dVar60,0);
              auVar46._0_8_ = dVar73;
              auVar46._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
              auVar5._8_4_ = SUB84(dVar61,0);
              auVar5._0_8_ = dVar60;
              auVar5._12_4_ = uVar79;
              auVar37 = blendpd(auVar82,auVar5,2);
              dVar90 = local_508.Scale3D.ZW.m128d_f64[0] * local_348.Translation.ZW.m128d_f64[0];
              auVar92._8_4_ = SUB84(dVar88,0);
              auVar92._0_8_ = dVar84;
              uVar79 = (undefined4)((ulonglong)dVar88 >> 0x20);
              auVar92._12_4_ = uVar79;
              auVar58._8_4_ = SUB84(dVar88,0);
              auVar58._0_8_ = dVar84;
              auVar58._12_4_ = uVar79;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = dVar90;
              auVar75 = blendpd(auVar58,auVar4,2);
              auVar93._0_8_ = auVar92._8_8_ * dVar81 - dVar73 * dVar84;
              auVar93._8_8_ = dVar90 * dVar6 - auVar46._8_8_ * dVar88;
              auVar78._8_4_ = SUB84(auVar93._8_8_,0);
              auVar78._0_8_ = auVar93._0_8_;
              auVar78._12_4_ = (int)((ulonglong)auVar93._8_8_ >> 0x20);
              auVar59._0_8_ = auVar75._0_8_ * dVar60 - auVar37._0_8_ * dVar90;
              auVar59._8_8_ = auVar75._8_8_ * dVar61 - auVar37._8_8_ * 0.0;
              dVar74 = auVar78._8_8_ + auVar78._8_8_;
              dVar83 = auVar59._0_8_ + auVar59._0_8_;
              auVar75 = blendpd(auVar93,auVar59,2);
              auVar94._0_8_ = auVar75._0_8_ + auVar75._0_8_;
              auVar94._8_8_ = auVar75._8_8_ + auVar75._8_8_;
              uVar79 = SUB84(dVar83,0);
              auVar71._8_4_ = uVar79;
              auVar71._0_8_ = dVar74;
              uVar80 = (undefined4)((ulonglong)dVar83 >> 0x20);
              auVar71._12_4_ = uVar80;
              auVar47._8_4_ = uVar79;
              auVar47._0_8_ = dVar74;
              auVar47._12_4_ = uVar80;
              auVar67._8_4_ = uVar79;
              auVar67._0_8_ = dVar74;
              auVar67._12_4_ = uVar80;
              auVar75 = blendpd(auVar67,auVar94,2);
              auVar72._0_8_ = auVar71._8_8_ * dVar81 - dVar74 * dVar73;
              auVar72._8_8_ = auVar94._0_8_ * dVar6 - auVar47._8_8_ * dVar60;
              auVar48._8_4_ = SUB84(auVar94._8_8_,0);
              auVar48._0_8_ = auVar94._0_8_;
              auVar48._12_4_ = (int)((ulonglong)auVar94._8_8_ >> 0x20);
              auVar68._0_8_ = auVar75._0_8_ * dVar60 - auVar94._0_8_ * auVar37._0_8_;
              auVar68._8_8_ = auVar75._8_8_ * dVar61 - auVar48._8_8_ * auVar37._8_8_;
              auVar49._8_4_ = SUB84(auVar72._8_8_,0);
              auVar49._0_8_ = auVar72._0_8_;
              auVar49._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
              auVar75 = blendpd(auVar72,auVar68,2);
              local_508.Translation.XY.m128d_f64[1] =
                   0.0 - (dVar83 * dVar61 + dVar88 + auVar68._0_8_);
              local_508.Translation.XY.m128d_f64[0] =
                   0.0 - (dVar74 * dVar61 + dVar84 + auVar49._8_8_);
              local_508.Translation.ZW.m128d_f64[1] = 0.0;
              local_508.Translation.ZW.m128d_f64[0] =
                   0.0 - (auVar94._0_8_ * dVar61 + dVar90 + auVar75._0_8_);
              local_508.Scale3D.ZW.m128d_f64[1] = 0.0;
            }
            pTVar1 = &this->PreProjectionTransform;
            pTVar22 = UE::Math::TTransform<double>::ToMatrixNoScale(&local_508,&local_268);
            local_3f8._s_0.Z = dVar9;
            dVar61 = pTVar22->M[0][1];
            pTVar1->M[0][0] = pTVar22->M[0][0];
            (this->PreProjectionTransform).M[0][1] = dVar61;
            dVar61 = pTVar22->M[0][3];
            (this->PreProjectionTransform).M[0][2] = pTVar22->M[0][2];
            (this->PreProjectionTransform).M[0][3] = dVar61;
            dVar61 = pTVar22->M[1][1];
            (this->PreProjectionTransform).M[1][0] = pTVar22->M[1][0];
            (this->PreProjectionTransform).M[1][1] = dVar61;
            dVar61 = pTVar22->M[1][3];
            (this->PreProjectionTransform).M[1][2] = pTVar22->M[1][2];
            (this->PreProjectionTransform).M[1][3] = dVar61;
            dVar61 = pTVar22->M[2][1];
            (this->PreProjectionTransform).M[2][0] = pTVar22->M[2][0];
            (this->PreProjectionTransform).M[2][1] = dVar61;
            dVar61 = pTVar22->M[2][3];
            (this->PreProjectionTransform).M[2][2] = pTVar22->M[2][2];
            (this->PreProjectionTransform).M[2][3] = dVar61;
            dVar61 = pTVar22->M[3][1];
            (this->PreProjectionTransform).M[3][0] = pTVar22->M[3][0];
            (this->PreProjectionTransform).M[3][1] = dVar61;
            dVar61 = pTVar22->M[3][3];
            (this->PreProjectionTransform).M[3][2] = pTVar22->M[3][2];
            (this->PreProjectionTransform).M[3][3] = dVar61;
            local_388.Z = (param_3->Rotation).ZW.m128d_f64[0];
            local_388.W = (param_3->Rotation).ZW.m128d_f64[1];
            local_388.X = (param_3->Rotation).XY.m128d_f64[0];
            local_388.Y = (param_3->Rotation).XY.m128d_f64[1];
            local_3f8._s_0.X = 0.0;
            local_3f8._s_0.Y = 0.0;
            UE::Math::TQuat<double>::RotateVector
                      (&local_388,&local_368,(TVector<double> *)&local_3f8._s_0);
            pTVar23 = UE::Math::TVector<double>::GetSafeNormal
                                (&local_368,&local_2a0,__real_3e45798ee0000000,
                                 &UE::Math::TVector<double>::ZeroVector);
            pTVar24 = UE::Math::TQuat<double>::FindBetweenNormals
                                (&local_288,&UE::Math::TVector<double>::UpVector,pTVar23);
            UE::Math::TQuat<double>::ToMatrix(pTVar24,&local_1e8);
            VectorMatrixMultiply(pTVar1,pTVar1,&local_1e8);
            pTVar22 = UE::Math::TTransform<double>::ToMatrixNoScale(&local_348,&local_168);
            VectorMatrixMultiply(pTVar1,pTVar1,pTVar22);
            uVar95 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            uVar97 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          }
          dVar61 = *(double *)((longlong)&(param_2->Max).field0_0x0 + 0x10);
          if (__real_3e45798ee2308c3a <
              (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar97,SUB84(dVar61,0) & uVar95))
          {
            dVar50 = dVar61 * __real_3feffffffaa19c47;
          }
          this->PreProjectionDisplacement = dVar50;
          dVar61 = (param_2->Min).field0_0x0._s_0.Z;
          if (dVar61 <= dVar50) {
            dVar61 = dVar50;
          }
          this->PreProjectionDisplacement = dVar61;
          return true;
        }
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_478,L"PCGSurfaceSamplerElement",L"InvalidCellCount",
                             L"Skipped - tried to generate too many points ({0}).");
        pFVar20 = FTextFormat::FTextFormat(local_2c8,pFVar19,Default);
        local_570.Type = Int;
        local_570.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_570.TextValue.field0_0x0.TypedValue.Flags = 0;
        local_5d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5d8.ArrayNum = 1;
        local_570.field1_0x8.IntValue = FVar29.IntValue;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_5d8.AllocatorInstance,1,&local_5d8.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_5d8.AllocatorInstance.Data,&local_570,1);
        local_5a0.TextFormatData.Object = (pFVar20->TextFormatData).Object;
        local_5a0.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar20->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_5a0.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_5a0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_5a0.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_590,&local_5a0,&local_5d8);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_5d8.AllocatorInstance.Data,local_5d8.ArrayNum);
        if ((FFormatArgumentValue *)local_5d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_5d8.AllocatorInstance.Data);
        }
        if (local_570.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_570.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar20->TextFormatData).SharedReferenceCount.ReferenceController);
        PCGLog::LogErrorOnGraph(&local_590,param_1);
        local_438.TextData.Reference = local_478.TextData.Reference;
        if (local_590.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_590.TextData.Reference + 0x10))();
          local_438.TextData.Reference = local_478.TextData.Reference;
        }
      }
    }
  }
LAB_149c7d264:
  if (local_438.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
  }
  return false;
}

// Initialize @ 149c7d2d0

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
PCGSurfaceSampler::FSurfaceSamplerData::Initialize
          (FSurfaceSamplerData *this,UPCGSurfaceSamplerSettings *param_1,FPCGContext *param_2,
          TBox<double> *param_3,TTransform<double> *param_4)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (param_1 == (UPCGSurfaceSamplerSettings *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                       ,0x1e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  (this->Params).bUseLegacyGridCreationMethod = param_1->bUseLegacyGridCreationMethod;
  (this->Params).PointsPerSquaredMeter = param_1->PointsPerSquaredMeter;
  dVar2 = (param_1->PointExtents).field0_0x0._s_0.Y;
  (this->Params).PointExtents.field0_0x0._s_0.X = (param_1->PointExtents).field0_0x0._s_0.X;
  (this->Params).PointExtents.field0_0x0._s_0.Y = dVar2;
  (this->Params).PointExtents.field0_0x0._s_0.Z = (param_1->PointExtents).field0_0x0._s_0.Z;
  (this->Params).Looseness = param_1->Looseness;
  (this->Params).bApplyDensityToPoints = param_1->bApplyDensityToPoints;
  (this->Params).PointSteepness = param_1->PointSteepness;
  bVar3 = Initialize(this,param_2,param_3,param_4);
  return bVar3;
}

