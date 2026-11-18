// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// Generate @ 143597b20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FMeshShapeGenerator * __thiscall
UE::Geometry::FGeneralizedCylinderGenerator::Generate(FGeneralizedCylinderGenerator *this)

{
  TPolygon2<double> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  TVector2<float> TVar15;
  TVector2<float> TVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  FMeshShapeGenerator *pFVar21;
  uint uVar22;
  uint uVar23;
  char cVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  int *piVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined4 uVar55;
  double dVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  float fVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  float fStackX_14;
  undefined8 local_res18;
  longlong local_3c0;
  uint local_3b8;
  ECapType local_3b0 [2];
  double local_3a8;
  uint local_3a0;
  int local_39c;
  longlong local_398;
  double local_390;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_388;
  int local_378;
  int local_374;
  int local_370;
  double local_368;
  double local_360;
  double dStack_358;
  double local_350;
  TQuaternion<double>_u_0 TStack_348;
  double local_318;
  float local_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  TQuaternion<double>_u_0 local_2b0;
  double local_290;
  double dStack_288;
  double local_280;
  double local_278;
  longlong local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined8 local_248;
  double local_238;
  TVector<double>_u_0 local_230;
  TArrayView<UE::Math::TVector<double>_const_,int> local_218;
  TArrayView<int_const_,int> local_208;
  TArrayView<int_const_,int> local_1f8;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_1e8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_1d8;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_1c8;
  TArrayView<float_const_,int> local_1b8;
  TArrayView<float_const_,int> local_1a8;
  TArrayView<int_const_,int> local_198;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  double local_148;
  TVector2<double>_u_0 local_140;
  double local_130;
  double local_128;
  double local_120;
  TVector<double>_u_0 local_118;
  TVector2<double>_u_0 local_100 [12];
  
  dVar39 = __real_3ff0000000000000;
  uVar29 = 0;
  local_3b0[0] = None;
  local_3b0[1] = None;
  if ((this->bCapped != false) && (this->bLoop == false)) {
    local_3b0[1] = this->CapType;
    local_3b0[0] = this->CapType;
  }
  iVar5 = (this->Path).ArrayNum;
  iVar20 = (this->PathScales).ArrayNum;
  local_39c = iVar5;
  if (((iVar20 == iVar5) || (__real_3ff0000000000000 != this->StartScale)) ||
     (__real_3ff0000000000000 != this->EndScale)) {
    cVar24 = this->bLoop;
    if ((bool)cVar24 != false) goto LAB_143597bea;
    bVar19 = true;
  }
  else {
    cVar24 = this->bLoop;
LAB_143597bea:
    bVar19 = false;
    dVar37 = __real_3ff0000000000000;
    if (this->bUVScaleRelativeWorld == false) goto LAB_143597c73;
  }
  local_1d8.DataPtr = (TVector<double> *)(this->Path).AllocatorInstance.Data;
  if ((iVar5 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
    return pFVar21;
  }
  local_1d8.ArrayNum = iVar5;
  dVar37 = CurveUtil::ArcLength<double,UE::Math::TVector<double>_>(&local_1d8,(bool)cVar24);
LAB_143597c73:
  pTVar1 = &this->CrossSection;
  TAxisAlignedBox2<double>::TAxisAlignedBox2<double>
            ((TAxisAlignedBox2<double> *)&local_140._s_0,&pTVar1->Vertices);
  fVar65 = __real_3f800000;
  fVar41 = (float)local_140._s_0.Y;
  local_res18 = (TVector2<float>_u_0)0x3f8000003f800000;
  fVar34 = (float)local_140._s_0.X;
  local_2c8 = CONCAT44(fVar41,fVar34);
  fVar42 = (float)local_128;
  fVar35 = (float)local_130;
  local_2c0 = CONCAT44(fVar42,fVar35);
  fVar43 = fVar35 - fVar34;
  fVar36 = fVar42 - fVar41;
  if (fVar43 <= 0.0) {
    fVar43 = 0.0;
  }
  if (fVar36 <= 0.0) {
    fVar36 = 0.0;
  }
  if (fVar43 <= fVar36) {
    fVar43 = fVar36;
  }
  dVar38 = (double)fVar43;
  if ((double)fVar43 <= __real_3f50624dd2f1a9fc) {
    dVar38 = __real_3f50624dd2f1a9fc;
  }
  fStackX_14 = (float)(dVar39 / dVar38);
  local_310 = fVar34;
  fStack_30c = fVar41;
  local_308 = fVar35;
  fStack_304 = fVar42;
  if (this->bUVScaleRelativeWorld != false) {
    local_1c8.DataPtr = (TVector2<double> *)(pTVar1->Vertices).AllocatorInstance.Data;
    iVar25 = (this->CrossSection).Vertices.ArrayNum;
    if ((iVar25 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar17)) {
      pcVar8 = (code *)swi(3);
      pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
      return pFVar21;
    }
    local_1c8.ArrayNum = iVar25;
    dVar38 = CurveUtil::ArcLength<double,UE::Math::TVector2<double>_>(&local_1c8,true);
    dVar47 = dVar39 / (double)this->UnitUVInWorldCoordinates;
    fStackX_14 = fVar65 / this->UnitUVInWorldCoordinates;
    local_res18._4_4_ = (float)(dVar47 * dVar37);
    local_res18._0_4_ = (float)(dVar47 * dVar38);
  }
  local_1b8.DataPtr = (float *)(this->PathTexCoord).AllocatorInstance.Data;
  iVar25 = (this->PathTexCoord).ArrayNum;
  if ((iVar25 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
    return pFVar21;
  }
  local_1a8.DataPtr = (float *)(this->CrossSectionTexCoord).AllocatorInstance.Data;
  iVar6 = (this->CrossSectionTexCoord).ArrayNum;
  local_1b8.ArrayNum = iVar25;
  if ((iVar6 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
    return pFVar21;
  }
  bVar17 = this->bLoop;
  local_218.DataPtr = (TVector<double> *)(this->Path).AllocatorInstance.Data;
  fVar43 = (fVar34 + fVar35) * __real_3f000000;
  iVar25 = (this->Path).ArrayNum;
  fVar34 = (fVar41 + fVar42) * __real_3f000000;
  local_1a8.ArrayNum = iVar6;
  if ((iVar25 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
    return pFVar21;
  }
  local_208.DataPtr = (int *)0x0;
  TVar16.field0_0x0._s_0.Y = fVar34;
  TVar16.field0_0x0._s_0.X = fVar43;
  TVar15.field0_0x0._s_0.Y = fStackX_14;
  TVar15.field0_0x0._s_0.X = fStackX_14;
  local_208.ArrayNum = 0;
  local_1f8.DataPtr = (int *)0x0;
  local_1f8.ArrayNum = 0;
  local_198.DataPtr = (int *)0x0;
  local_198.ArrayNum = 0;
  local_218.ArrayNum = iVar25;
  FSweepGeneratorBase::ConstructMeshTopology
            ((FSweepGeneratorBase *)this,pTVar1,&local_198,&local_1f8,&local_208,true,&local_218,
             (uint)(bVar17 != false) + iVar5,bVar17,local_3b0,(TVector2<float>)local_res18,TVar15,
             TVar16,&local_1a8,&local_1b8);
  iVar5 = (this->CrossSection).Vertices.ArrayNum;
  lVar33 = (longlong)iVar5;
  local_388.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_388.ArrayNum = 0;
  local_388.ArrayMax = 0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_388,iVar5,Default);
  if (0 < iVar5) {
    lVar26 = 0;
    do {
      local_1e8.DataPtr = (TVector2<double> *)(pTVar1->Vertices).AllocatorInstance.Data;
      iVar25 = (this->CrossSection).Vertices.ArrayNum;
      if ((iVar25 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
        return pFVar21;
      }
      local_1e8.ArrayNum = iVar25;
      CurveUtil::GetNormal_FaceAvg2<double,UE::Math::TVector2<double>,1>
                ((TVector2<double> *)&local_100[0]._s_0,&local_1e8,uVar29);
      uVar13 = local_100[0]._s_0.Y;
      uVar4 = local_100[0]._s_0.X;
      uVar23 = 0;
      if ((int)uVar29 < local_388.ArrayNum) {
        uVar23 = ~uVar29 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
        return pFVar21;
      }
      uVar29 = uVar29 + 1;
      *(undefined8 *)(local_388.AllocatorInstance.Data + lVar26) = uVar4;
      *(undefined8 *)(local_388.AllocatorInstance.Data + lVar26 + 8) = uVar13;
      lVar26 = lVar26 + 0x10;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
  }
  local_398 = (longlong)local_39c;
  local_374 = (this->Path).ArrayNum;
  uVar60 = 0;
  uVar61 = 0;
  local_378 = (this->PathFrames).ArrayNum;
  local_248 = 0;
  local_368 = 0.0;
  local_3a0 = 0;
  local_3b8 = 1;
  local_360 = (this->InitialFrame).Origin.field0_0x0._s_0.X;
  dStack_358 = (this->InitialFrame).Origin.field0_0x0._s_0.Y;
  local_350 = (this->InitialFrame).Origin.field0_0x0._s_0.Z;
  TStack_348._s_0.X = (this->InitialFrame).Rotation.field0_0x0._s_0.X;
  TStack_348._s_0.Y = (this->InitialFrame).Rotation.field0_0x0._s_0.Y;
  TStack_348._s_0.Z = (this->InitialFrame).Rotation.field0_0x0._s_0.Z;
  TStack_348._s_0.W = (this->InitialFrame).Rotation.field0_0x0._s_0.W;
  if (0 < local_39c) {
    uVar55 = UE::Math::TVector2<double>::UnitVector.field0_0x0._0_4_;
    uVar57 = UE::Math::TVector2<double>::UnitVector.field0_0x0._4_4_;
    uVar58 = UE::Math::TVector2<double>::UnitVector.field0_0x0._8_4_;
    uVar59 = UE::Math::TVector2<double>::UnitVector.field0_0x0._12_4_;
    local_370 = local_39c + -1;
    local_278 = dVar39 / dVar37;
    local_2d8 = 0;
    local_2b8 = 0;
    local_res18._0_4_ = 1;
    local_270 = (longlong)iVar20;
    do {
      lVar27 = local_2b8;
      lVar26 = local_2d8;
      lVar33 = local_398;
      uVar29 = local_3a0;
      dVar37 = (double)CONCAT44(uVar61,uVar60);
      uVar30 = ~local_3a0 >> 0x1f;
      uVar23 = 0;
      if ((int)local_3a0 < (this->Path).ArrayNum) {
        uVar23 = uVar30;
      }
      if (uVar23 == 0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar21;
        }
        uVar55 = UE::Math::TVector2<double>::UnitVector.field0_0x0._0_4_;
        uVar57 = UE::Math::TVector2<double>::UnitVector.field0_0x0._4_4_;
        uVar58 = UE::Math::TVector2<double>::UnitVector.field0_0x0._8_4_;
        uVar59 = UE::Math::TVector2<double>::UnitVector.field0_0x0._12_4_;
      }
      pFVar7 = (this->Path).AllocatorInstance.Data;
      local_300 = (double)CONCAT44(uVar61,uVar60);
      pFVar2 = pFVar7 + lVar27;
      local_290 = *(double *)pFVar2;
      dStack_288 = *(double *)(pFVar2 + 8);
      local_280 = *(double *)(pFVar7 + lVar27 + 0x10);
      local_2f8 = dVar39;
      local_2f0 = dVar39;
      if (local_378 == local_374) {
        uVar23 = 0;
        if ((int)uVar29 < (this->PathFrames).ArrayNum) {
          uVar23 = uVar30;
        }
        if (uVar23 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          uVar55 = UE::Math::TVector2<double>::UnitVector.field0_0x0._0_4_;
          uVar57 = UE::Math::TVector2<double>::UnitVector.field0_0x0._4_4_;
          uVar58 = UE::Math::TVector2<double>::UnitVector.field0_0x0._8_4_;
          uVar59 = UE::Math::TVector2<double>::UnitVector.field0_0x0._12_4_;
        }
        pFVar2 = (this->PathFrames).AllocatorInstance.Data;
        lVar27 = lVar26 * 0x38;
        local_360 = *(double *)(pFVar2 + lVar27);
        dStack_358 = *(double *)(pFVar2 + lVar27 + 8);
        local_350 = *(double *)(pFVar2 + lVar27 + 0x10);
        TStack_348._s_0.X = (double)*(undefined8 *)(pFVar2 + lVar27 + 0x10 + 8);
        TStack_348._s_0.Y = (double)*(undefined8 *)(pFVar2 + lVar27 + 0x20);
        TStack_348._s_0.Z = (double)*(undefined8 *)(pFVar2 + lVar27 + 0x20 + 8);
        TStack_348._s_0.W = (double)*(undefined8 *)(pFVar2 + lVar27 + 0x30);
        uVar23 = 0;
        if ((int)uVar29 < (this->PathFrames).ArrayNum) {
          uVar23 = uVar30;
        }
        uVar67 = uVar55;
        uVar68 = uVar57;
        uVar69 = uVar58;
        uVar70 = uVar59;
        if (uVar23 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          uVar67 = UE::Math::TVector2<double>::UnitVector.field0_0x0._0_4_;
          uVar68 = UE::Math::TVector2<double>::UnitVector.field0_0x0._4_4_;
          uVar69 = UE::Math::TVector2<double>::UnitVector.field0_0x0._8_4_;
          uVar70 = UE::Math::TVector2<double>::UnitVector.field0_0x0._12_4_;
        }
        pFVar7 = (this->PathFrames).AllocatorInstance.Data;
        pFVar2 = pFVar7 + lVar27;
        local_290 = *(double *)pFVar2;
        dStack_288 = *(double *)(pFVar2 + 8);
        local_280 = *(double *)(pFVar7 + lVar27 + 0x10);
        if (this->bAlignFramesToSampledTangents != false) goto LAB_143598342;
      }
      else {
LAB_143598342:
        iVar20 = (this->Path).ArrayNum;
        bVar17 = this->bLoop;
        pFVar2 = (this->Path).AllocatorInstance.Data;
        if ((iVar20 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar18)) {
          pcVar8 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar21;
        }
        dVar38 = dVar37;
        dVar47 = dVar37;
        dVar54 = dVar37;
        dVar53 = dVar37;
        dVar12 = dVar37;
        if (bVar17 == false) {
          uVar23 = uVar29 + 1;
          if ((int)(iVar20 - 1U) < (int)(undefined4)local_res18) {
            uVar23 = iVar20 - 1U;
          }
          uVar30 = uVar29 - 1;
          if ((int)(uVar29 - 1) < 0) {
            uVar30 = 0;
          }
          uVar22 = 0;
          if ((int)uVar23 < iVar20) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          local_148 = *(double *)(pFVar2 + (longlong)(int)uVar23 * 0x18 + 0x10);
          dVar49 = *(double *)(pFVar2 + (longlong)(int)uVar23 * 0x18);
          dVar50 = *(double *)(pFVar2 + (longlong)(int)uVar23 * 0x18 + 8);
          uVar23 = 0;
          if ((int)uVar30 < iVar20) {
            uVar23 = ~uVar30 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          local_318 = *(double *)(pFVar2 + (longlong)(int)uVar30 * 0x18 + 0x10);
          dVar56 = *(double *)(pFVar2 + (longlong)(int)uVar30 * 0x18);
          dVar52 = *(double *)(pFVar2 + (longlong)(int)uVar30 * 0x18 + 8);
          uVar23 = 0;
          if ((int)uVar29 < iVar20) {
            uVar23 = ~uVar29 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          dVar50 = dVar50 - *(double *)(pFVar2 + lVar26 * 0x18 + 8);
          dVar49 = dVar49 - *(double *)(pFVar2 + lVar26 * 0x18);
          dVar11 = local_148 - *(double *)(pFVar2 + lVar26 * 0x18 + 0x10);
          if ((uVar23 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          dVar48 = local_318 - *(double *)(pFVar2 + lVar26 * 0x18 + 0x10);
          dVar56 = dVar56 - *(double *)(pFVar2 + lVar26 * 0x18);
          dVar52 = dVar52 - *(double *)(pFVar2 + lVar26 * 0x18 + 8);
          dVar51 = SQRT(dVar50 * dVar50 + dVar49 * dVar49 + dVar11 * dVar11);
          if ((double)CONCAT44(uVar61,uVar60) <= dVar51 && dVar51 != (double)CONCAT44(uVar61,uVar60)
             ) {
            dVar51 = dVar39 / dVar51;
            dVar38 = dVar49 * dVar51;
            dVar47 = dVar50 * dVar51;
            dVar54 = dVar11 * dVar51;
          }
          dVar49 = SQRT(dVar56 * dVar56 + dVar52 * dVar52 + dVar48 * dVar48);
          if ((double)CONCAT44(uVar61,uVar60) <= dVar49 && dVar49 != (double)CONCAT44(uVar61,uVar60)
             ) {
            dVar49 = dVar39 / dVar49;
            dVar37 = dVar56 * dVar49;
            dVar53 = dVar52 * dVar49;
            dVar12 = dVar49 * dVar48;
          }
        }
        else {
          uVar30 = (int)(undefined4)local_res18 % iVar20;
          uVar22 = (int)(iVar20 + -1 + uVar29) % iVar20;
          uVar23 = 0;
          if ((int)uVar30 < iVar20) {
            uVar23 = ~uVar30 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          local_148 = *(double *)(pFVar2 + (longlong)(int)uVar30 * 0x18 + 0x10);
          dVar49 = *(double *)(pFVar2 + (longlong)(int)uVar30 * 0x18);
          dVar50 = *(double *)(pFVar2 + (longlong)(int)uVar30 * 0x18 + 8);
          uVar23 = 0;
          if ((int)uVar22 < iVar20) {
            uVar23 = ~uVar22 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          local_318 = *(double *)(pFVar2 + (longlong)(int)uVar22 * 0x18 + 0x10);
          dVar56 = *(double *)(pFVar2 + (longlong)(int)uVar22 * 0x18);
          dVar52 = *(double *)(pFVar2 + (longlong)(int)uVar22 * 0x18 + 8);
          uVar23 = 0;
          if ((int)uVar29 < iVar20) {
            uVar23 = ~uVar29 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          dVar50 = dVar50 - *(double *)(pFVar2 + lVar26 * 0x18 + 8);
          dVar49 = dVar49 - *(double *)(pFVar2 + lVar26 * 0x18);
          dVar11 = local_148 - *(double *)(pFVar2 + lVar26 * 0x18 + 0x10);
          if ((uVar23 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          dVar51 = local_318 - *(double *)(pFVar2 + lVar26 * 0x18 + 0x10);
          dVar56 = dVar56 - *(double *)(pFVar2 + lVar26 * 0x18);
          dVar52 = dVar52 - *(double *)(pFVar2 + lVar26 * 0x18 + 8);
          dVar48 = SQRT(dVar50 * dVar50 + dVar49 * dVar49 + dVar11 * dVar11);
          if ((double)CONCAT44(uVar61,uVar60) <= dVar48 && dVar48 != (double)CONCAT44(uVar61,uVar60)
             ) {
            dVar48 = dVar39 / dVar48;
            dVar38 = dVar49 * dVar48;
            dVar47 = dVar50 * dVar48;
            dVar54 = dVar11 * dVar48;
          }
          dVar49 = SQRT(dVar56 * dVar56 + dVar52 * dVar52 + dVar51 * dVar51);
          if ((double)CONCAT44(uVar61,uVar60) <= dVar49 && dVar49 != (double)CONCAT44(uVar61,uVar60)
             ) {
            dVar49 = dVar39 / dVar49;
            dVar37 = dVar56 * dVar49;
            dVar53 = dVar52 * dVar49;
            dVar12 = dVar51 * dVar49;
          }
        }
        uVar14 = TStack_348._s_0.W;
        uVar13 = TStack_348._s_0.Y;
        uVar4 = TStack_348._s_0.X;
        dVar50 = dVar38 - dVar37;
        dVar52 = dVar47 - dVar53;
        dVar56 = dVar54 - dVar12;
        dVar49 = SQRT(dVar52 * dVar52 + dVar50 * dVar50 + dVar56 * dVar56);
        if (dVar49 < (double)CONCAT44(uVar61,uVar60) || dVar49 == (double)CONCAT44(uVar61,uVar60)) {
          local_230._s_0.Z = (double)CONCAT44(uVar61,uVar60);
          local_230._s_0.X = 0.0;
          local_230._s_0.Y = 0.0;
        }
        else {
          dVar39 = dVar39 / dVar49;
          local_230._s_0.X = dVar50 * dVar39;
          local_230._s_0.Y = dVar52 * dVar39;
          local_230._s_0.Z = dVar39 * dVar56;
        }
        local_2b0._s_0.Z = (double)CONCAT44(uVar61,uVar60);
        local_2b0._s_0.Y = (double)CONCAT44(uVar61,uVar60);
        local_2b0._s_0.X = (double)CONCAT44(uVar61,uVar60);
        local_188._s_0.X =
             (TStack_348._s_0.Y + TStack_348._s_0.Y) * TStack_348._s_0.W +
             (TStack_348._s_0.Z + TStack_348._s_0.Z) * TStack_348._s_0.X;
        local_188._s_0.Y =
             (TStack_348._s_0.Z + TStack_348._s_0.Z) * TStack_348._s_0.Y -
             (TStack_348._s_0.X + TStack_348._s_0.X) * TStack_348._s_0.W;
        local_2b0._s_0.W = __real_3ff0000000000000;
        local_188._s_0.Z =
             __real_3ff0000000000000 -
             ((TStack_348._s_0.X + TStack_348._s_0.X) * TStack_348._s_0.X +
             (TStack_348._s_0.Y + TStack_348._s_0.Y) * TStack_348._s_0.Y);
        TQuaternion<double>::SetFromTo
                  ((TQuaternion<double> *)&local_2b0._s_0,(TVector<double> *)&local_188._s_0,
                   (TVector<double> *)&local_230._s_0);
        dVar49 = __real_3ff0000000000000;
        dVar52 = ((double)uVar14 * local_2b0._s_0.X + (double)uVar4 * local_2b0._s_0.W +
                 TStack_348._s_0.Z * local_2b0._s_0.Y) - (double)uVar13 * local_2b0._s_0.Z;
        dVar56 = ((double)uVar14 * local_2b0._s_0.Y + (double)uVar13 * local_2b0._s_0.W +
                 (double)uVar4 * local_2b0._s_0.Z) - TStack_348._s_0.Z * local_2b0._s_0.X;
        local_3a8 = (TStack_348._s_0.Z * local_2b0._s_0.W + (double)uVar14 * local_2b0._s_0.Z +
                    (double)uVar13 * local_2b0._s_0.X) - (double)uVar4 * local_2b0._s_0.Y;
        dVar39 = (((double)uVar14 * local_2b0._s_0.W - (double)uVar4 * local_2b0._s_0.X) -
                 (double)uVar13 * local_2b0._s_0.Y) - TStack_348._s_0.Z * local_2b0._s_0.Z;
        auVar44._0_8_ = dVar39 * dVar39 + local_3a8 * local_3a8;
        auVar44._8_8_ = 0;
        auVar45._8_8_ = 0;
        auVar45._0_8_ = dVar56 * dVar56 + dVar52 * dVar52 + auVar44._0_8_;
        auVar45 = sqrtpd(auVar44,auVar45);
        dVar50 = auVar45._0_8_;
        if ((double)CONCAT44(uVar61,uVar60) <= dVar50 && dVar50 != (double)CONCAT44(uVar61,uVar60))
        {
          dVar50 = __real_3ff0000000000000 / dVar50;
          if ((double)CONCAT44(uVar61,uVar60) <= dVar50 && dVar50 != (double)CONCAT44(uVar61,uVar60)
             ) {
            TStack_348._s_0.X = dVar50 * dVar52;
            TStack_348._s_0.Y = dVar50 * dVar56;
            TStack_348._s_0.Z = dVar50 * local_3a8;
            TStack_348._s_0.W = dVar50 * dVar39;
          }
        }
        if (((__real_3ff0000000000000 < this->MiterLimit) &&
            (((dVar37 != (double)CONCAT44(uVar61,uVar60) ||
              (dVar53 != (double)CONCAT44(uVar61,uVar60))) ||
             (dVar12 != (double)CONCAT44(uVar61,uVar60))))) &&
           (((dVar38 != (double)CONCAT44(uVar61,uVar60) ||
             (dVar47 != (double)CONCAT44(uVar61,uVar60))) ||
            (dVar54 != (double)CONCAT44(uVar61,uVar60))))) {
          local_170._s_0.X = dVar37 + dVar38;
          local_170._s_0.Y = dVar53 + dVar47;
          local_170._s_0.Z = dVar12 + dVar54;
          TQuaternion<double>::InverseMultiply
                    ((TQuaternion<double> *)&TStack_348._s_0,(TVector<double> *)&local_118._s_0,
                     (TVector<double> *)&local_170._s_0);
          dVar39 = local_118._s_0.Y * local_118._s_0.Y + local_118._s_0.X * local_118._s_0.X;
          if (__real_3e45798ee0000000 < dVar39) {
            auVar46._0_8_ = SQRT(dVar39);
            auVar46._8_8_ = 0;
            local_120 = dVar49 / auVar46._0_8_;
            dVar50 = local_118._s_0.Y * local_120;
            dVar52 = local_118._s_0.X * local_120;
            dVar39 = __real_4000000000000000 /
                     (dVar49 - (dVar53 * dVar47 + dVar37 * dVar38 + dVar12 * dVar54));
            iVar20 = _finite(dVar39);
            if ((iVar20 == 0) || (this->MiterLimit * this->MiterLimit < dVar39)) {
              dVar39 = this->MiterLimit;
            }
            else {
              auVar10._8_8_ = 0;
              auVar10._0_8_ = dVar39;
              auVar45 = sqrtpd(auVar46,auVar10);
              dVar39 = auVar45._0_8_;
            }
            local_2f8 = dVar52 * dVar52 * dVar39 + dVar50 * dVar50;
            local_2f0 = dVar50 * dVar50 * dVar39 + dVar52 * dVar52;
            local_300 = dVar50 * dVar52 * dVar39 - dVar50 * dVar52;
          }
        }
        uVar67 = UE::Math::TVector2<double>::UnitVector.field0_0x0._0_4_;
        uVar68 = UE::Math::TVector2<double>::UnitVector.field0_0x0._4_4_;
        uVar69 = UE::Math::TVector2<double>::UnitVector.field0_0x0._8_4_;
        uVar70 = UE::Math::TVector2<double>::UnitVector.field0_0x0._12_4_;
        lVar33 = local_398;
      }
      dVar39 = __real_3ff0000000000000;
      dVar37 = TStack_348._s_0.Y + TStack_348._s_0.Y;
      dVar53 = TStack_348._s_0.Z + TStack_348._s_0.Z;
      dVar47 = dVar53 * TStack_348._s_0.W + dVar37 * TStack_348._s_0.X;
      dVar38 = __real_3ff0000000000000 - (dVar37 * TStack_348._s_0.Y + dVar53 * TStack_348._s_0.Z);
      local_268 = dVar37 * TStack_348._s_0.X - dVar53 * TStack_348._s_0.W;
      local_260 = dVar53 * TStack_348._s_0.X - dVar37 * TStack_348._s_0.W;
      dVar54 = (TStack_348._s_0.X + TStack_348._s_0.X) * TStack_348._s_0.W +
               dVar53 * TStack_348._s_0.Y;
      dVar37 = __real_3ff0000000000000 -
               ((TStack_348._s_0.X + TStack_348._s_0.X) * TStack_348._s_0.X +
               dVar53 * TStack_348._s_0.Z);
      dVar53 = local_278 * local_368;
      if ((double)CONCAT44(uVar61,uVar60) <= dVar53) {
        if (__real_3ff0000000000000 <= dVar53) {
          dVar53 = __real_3ff0000000000000;
        }
      }
      else {
        dVar53 = (double)CONCAT44(uVar61,uVar60);
      }
      dVar12 = __real_3ff0000000000000;
      if (bVar19) {
        if ((double)CONCAT44(uVar61,uVar60) <= dVar53) {
          if (__real_3ff0000000000000 <= dVar53) {
            dVar53 = __real_3ff0000000000000;
          }
        }
        else {
          dVar53 = (double)CONCAT44(uVar61,uVar60);
        }
        dVar12 = (__real_3ff0000000000000 - dVar53) * this->StartScale + dVar53 * this->EndScale;
      }
      uVar28 = 0;
      uVar55 = uVar67;
      uVar57 = uVar68;
      uVar58 = uVar69;
      uVar59 = uVar70;
      local_3a8 = dVar38;
      local_258 = dVar47;
      local_238 = dVar37;
      if (local_270 == lVar33) {
        uVar23 = 0;
        if ((int)uVar29 < (this->PathScales).ArrayNum) {
          uVar23 = ~uVar29 >> 0x1f;
        }
        if (uVar23 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          uVar55 = UE::Math::TVector2<double>::UnitVector.field0_0x0._0_4_;
          uVar57 = UE::Math::TVector2<double>::UnitVector.field0_0x0._4_4_;
          uVar58 = UE::Math::TVector2<double>::UnitVector.field0_0x0._8_4_;
          uVar59 = UE::Math::TVector2<double>::UnitVector.field0_0x0._12_4_;
        }
        pFVar2 = (this->PathScales).AllocatorInstance.Data + lVar26 * 0x10;
        uVar67 = *(undefined4 *)pFVar2;
        uVar68 = *(undefined4 *)(pFVar2 + 4);
        uVar69 = *(undefined4 *)(pFVar2 + 8);
        uVar70 = *(undefined4 *)(pFVar2 + 0xc);
      }
      dVar49 = local_260;
      dVar53 = local_268;
      uVar62 = SUB84(local_280,0);
      uVar63 = (undefined4)((ulonglong)local_280 >> 0x20);
      uVar64 = SUB84(dStack_288,0);
      uVar66 = (undefined4)((ulonglong)dStack_288 >> 0x20);
      local_2e8 = local_280;
      local_2e0 = dStack_288;
      local_390 = local_290;
      if (0 < iVar5) {
        iVar20 = uVar29 * iVar5;
        local_250 = (double)CONCAT44(uVar68,uVar67) * dVar12;
        local_2d0 = (longlong)iVar20;
        lVar33 = local_2d0 * 0xc;
        local_3c0 = local_2d0 * 0x18;
        uVar31 = uVar28;
        do {
          dVar39 = local_250;
          uVar23 = (uint)uVar28;
          uVar29 = 0;
          if ((int)uVar23 < (this->CrossSection).Vertices.ArrayNum) {
            uVar29 = ~uVar23 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          pFVar2 = (this->CrossSection).Vertices.AllocatorInstance.Data;
          dVar39 = dVar39 * *(double *)(pFVar2 + uVar31);
          dVar50 = (double)CONCAT44(uVar70,uVar69) * dVar12 * *(double *)(pFVar2 + uVar31 + 8);
          uVar29 = 0;
          if ((int)uVar23 < local_388.ArrayNum) {
            uVar29 = ~uVar23 >> 0x1f;
          }
          dVar52 = local_300 * dVar50 + local_2f8 * dVar39;
          dVar39 = local_2f0 * dVar50 + dVar39 * local_300;
          if ((uVar29 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          dVar50 = dVar37 * dVar39;
          dVar56 = *(double *)(local_388.AllocatorInstance.Data + uVar31);
          dVar11 = *(double *)(local_388.AllocatorInstance.Data + uVar31 + 8);
          uVar30 = ~(iVar20 + uVar23) >> 0x1f;
          uVar29 = 0;
          if ((int)(iVar20 + uVar23) < (int)this->_padding_) {
            uVar29 = uVar30;
          }
          dVar51 = dVar47 * dVar52 + local_2e0;
          dVar38 = dVar38 * dVar52 + local_390;
          dVar52 = dVar49 * dVar52 + local_2e8;
          if ((uVar29 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          dVar37 = local_238;
          dVar47 = local_258;
          lVar26 = this->_padding_;
          dVar48 = local_3a8 * dVar56;
          *(double *)(lVar26 + local_3c0) = dVar38 + dVar53 * dVar39;
          *(double *)(lVar26 + 8 + local_3c0) = dVar51 + dVar50;
          *(double *)(lVar26 + 0x10 + local_3c0) = dVar52 + dVar54 * dVar39;
          uVar29 = 0;
          if ((int)(iVar20 + uVar23) < (int)this->_padding_) {
            uVar29 = uVar30;
          }
          dVar39 = local_258 * dVar56;
          dVar38 = local_238 * dVar11;
          if ((uVar29 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          lVar26 = this->_padding_;
          local_3c0 = local_3c0 + 0x18;
          uVar28 = (ulonglong)(uVar23 + 1);
          uVar31 = uVar31 + 0x10;
          *(float *)(lVar33 + lVar26) = (float)(dVar53 * dVar11 + dVar48);
          *(float *)(lVar33 + 4 + lVar26) = (float)(dVar38 + dVar39);
          *(float *)(lVar33 + 8 + lVar26) = (float)(dVar54 * dVar11 + dVar49 * dVar56);
          lVar33 = lVar33 + 0xc;
          dVar38 = local_3a8;
        } while ((int)(uVar23 + 1) < iVar5);
        uVar55 = UE::Math::TVector2<double>::UnitVector.field0_0x0._0_4_;
        uVar57 = UE::Math::TVector2<double>::UnitVector.field0_0x0._4_4_;
        uVar58 = UE::Math::TVector2<double>::UnitVector.field0_0x0._8_4_;
        uVar59 = UE::Math::TVector2<double>::UnitVector.field0_0x0._12_4_;
        uVar60 = (undefined4)local_248;
        uVar61 = (undefined4)((ulonglong)local_248 >> 0x20);
        uVar62 = SUB84(local_2e8,0);
        uVar63 = (undefined4)((ulonglong)local_2e8 >> 0x20);
        uVar64 = SUB84(local_2e0,0);
        uVar66 = (undefined4)((ulonglong)local_2e0 >> 0x20);
        lVar26 = local_2d8;
        uVar29 = local_3a0;
        dVar39 = __real_3ff0000000000000;
      }
      if ((int)uVar29 < local_370) {
        uVar23 = 0;
        if ((int)(uVar29 + 1) < (this->Path).ArrayNum) {
          uVar23 = ~(uVar29 + 1) >> 0x1f;
        }
        if (uVar23 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          uVar55 = UE::Math::TVector2<double>::UnitVector.field0_0x0._0_4_;
          uVar57 = UE::Math::TVector2<double>::UnitVector.field0_0x0._4_4_;
          uVar58 = UE::Math::TVector2<double>::UnitVector.field0_0x0._8_4_;
          uVar59 = UE::Math::TVector2<double>::UnitVector.field0_0x0._12_4_;
        }
        pFVar2 = (this->Path).AllocatorInstance.Data;
        dVar37 = *(double *)(pFVar2 + lVar26 * 0x18 + 0x20) - (double)CONCAT44(uVar66,uVar64);
        dVar38 = *(double *)(pFVar2 + lVar26 * 0x18 + 0x28) - (double)CONCAT44(uVar63,uVar62);
        auVar40._0_8_ = dVar38 * dVar38;
        auVar40._8_8_ = 0;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = dVar37 * dVar37 +
                       (*(double *)(pFVar2 + lVar26 * 0x18 + 0x18) - local_390) *
                       (*(double *)(pFVar2 + lVar26 * 0x18 + 0x18) - local_390) + auVar40._0_8_;
        auVar45 = sqrtpd(auVar40,auVar9);
        local_368 = local_368 + auVar45._0_8_;
      }
      local_3a0 = uVar29 + 1;
      local_2b8 = local_2b8 + 0x18;
      local_2d8 = lVar26 + 1;
      local_res18._0_4_ = (undefined4)local_res18 + 1;
      fVar65 = __real_3f800000;
    } while (local_2d8 < local_398);
  }
  if ((this->bCapped != false) && (this->bLoop == false)) {
    if (local_3b0[0] == FlatMidpointFan) {
      if (((this->Path).ArrayNum < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
        return pFVar21;
      }
      pFVar2 = (this->Path).AllocatorInstance.Data;
      uVar29 = *(uint *)((longlong)&this->_padding_ + 4);
      uVar13 = *(undefined8 *)pFVar2;
      uVar14 = *(undefined8 *)(pFVar2 + 8);
      uVar4 = *(undefined8 *)(pFVar2 + 0x10);
      uVar23 = 0;
      if ((int)uVar29 < (int)this->_padding_) {
        uVar23 = ~uVar29 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
        return pFVar21;
      }
      lVar33 = this->_padding_;
      puVar3 = (undefined8 *)(lVar33 + (longlong)(int)uVar29 * 0x18);
      *puVar3 = uVar13;
      puVar3[1] = uVar14;
      *(undefined8 *)(lVar33 + 0x10 + (longlong)(int)uVar29 * 0x18) = uVar4;
    }
    if (local_3b0[1] == 2) {
      iVar20 = (this->Path).ArrayNum;
      uVar29 = 0;
      if ((int)(iVar20 - 1U) < iVar20) {
        uVar29 = ~(iVar20 - 1U) >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
        return pFVar21;
      }
      pFVar7 = (this->Path).AllocatorInstance.Data;
      uVar29 = (uint)this->_padding_;
      pFVar2 = pFVar7 + (longlong)iVar20 * 0x18 + -0x18;
      uVar13 = *(undefined8 *)pFVar2;
      uVar14 = *(undefined8 *)(pFVar2 + 8);
      uVar4 = *(undefined8 *)(pFVar7 + (longlong)iVar20 * 0x18 + -8);
      uVar23 = 0;
      if ((int)uVar29 < (int)this->_padding_) {
        uVar23 = ~uVar29 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
        return pFVar21;
      }
      lVar33 = this->_padding_;
      puVar3 = (undefined8 *)(lVar33 + (longlong)(int)uVar29 * 0x18);
      *puVar3 = uVar13;
      puVar3[1] = uVar14;
      *(undefined8 *)(lVar33 + 0x10 + (longlong)(int)uVar29 * 0x18) = uVar4;
    }
    iVar20 = -1;
    piVar32 = (int *)((longlong)&this->_padding_ + 4);
    do {
      iVar25 = (this->Path).ArrayNum;
      bVar19 = this->bLoop;
      pFVar2 = (this->Path).AllocatorInstance.Data;
      if ((iVar25 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
        return pFVar21;
      }
      if (bVar19 == false) {
        uVar29 = local_3b8;
        if ((int)(iVar25 - 1U) < (int)local_3b8) {
          uVar29 = iVar25 - 1U;
        }
        uVar23 = local_3b8 - 2;
        if ((int)uVar23 < 0) {
          uVar23 = 0;
        }
        uVar30 = 0;
        if ((int)uVar29 < iVar25) {
          uVar30 = ~uVar29 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar21;
        }
        local_318 = *(double *)(pFVar2 + (longlong)(int)uVar29 * 0x18 + 0x10);
        dVar38 = *(double *)(pFVar2 + (longlong)(int)uVar29 * 0x18);
        dVar37 = *(double *)(pFVar2 + (longlong)(int)uVar29 * 0x18 + 8);
        uVar29 = 0;
        if ((int)uVar23 < iVar25) {
          uVar29 = ~uVar23 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar21;
        }
        dVar47 = *(double *)(pFVar2 + (longlong)(int)uVar23 * 0x18 + 0x10);
        dVar54 = local_318 - dVar47;
        dVar38 = dVar38 - *(double *)(pFVar2 + (longlong)(int)uVar23 * 0x18);
        dVar37 = dVar37 - *(double *)(pFVar2 + (longlong)(int)uVar23 * 0x18 + 8);
        dVar53 = SQRT(dVar37 * dVar37 + dVar38 * dVar38 + dVar54 * dVar54);
        local_318 = dVar47;
        if (dVar53 < (double)CONCAT44(uVar61,uVar60) || dVar53 == (double)CONCAT44(uVar61,uVar60)) {
          dVar54 = (double)CONCAT44(uVar61,uVar60);
          dVar37 = (double)CONCAT44(uVar61,uVar60);
          dVar53 = (double)CONCAT44(uVar61,uVar60);
        }
        else {
          dVar53 = dVar39 / dVar53;
          dVar54 = dVar53 * dVar54;
          dVar37 = dVar53 * dVar37;
          dVar53 = dVar53 * dVar38;
        }
      }
      else {
        uVar23 = (int)local_3b8 % iVar25;
        uVar30 = (int)(iVar25 + -2 + local_3b8) % iVar25;
        uVar29 = 0;
        if ((int)uVar23 < iVar25) {
          uVar29 = ~uVar23 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar21;
        }
        local_318 = *(double *)(pFVar2 + (longlong)(int)uVar23 * 0x18 + 0x10);
        dVar53 = *(double *)(pFVar2 + (longlong)(int)uVar23 * 0x18);
        dVar37 = *(double *)(pFVar2 + (longlong)(int)uVar23 * 0x18 + 8);
        uVar29 = 0;
        if ((int)uVar30 < iVar25) {
          uVar29 = ~uVar30 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar21;
        }
        dVar38 = *(double *)(pFVar2 + (longlong)(int)uVar30 * 0x18 + 0x10);
        dVar54 = local_318 - dVar38;
        dVar53 = dVar53 - *(double *)(pFVar2 + (longlong)(int)uVar30 * 0x18);
        dVar37 = dVar37 - *(double *)(pFVar2 + (longlong)(int)uVar30 * 0x18 + 8);
        dVar47 = SQRT(dVar37 * dVar37 + dVar53 * dVar53 + dVar54 * dVar54);
        local_318 = dVar38;
        if (dVar47 < (double)CONCAT44(uVar61,uVar60) || dVar47 == (double)CONCAT44(uVar61,uVar60)) {
          dVar54 = (double)CONCAT44(uVar61,uVar60);
          dVar53 = (double)CONCAT44(uVar61,uVar60);
          dVar37 = (double)CONCAT44(uVar61,uVar60);
        }
        else {
          dVar47 = dVar39 / dVar47;
          dVar54 = dVar54 * dVar47;
          dVar53 = dVar53 * dVar47;
          dVar37 = dVar37 * dVar47;
        }
      }
      iVar25 = 0;
      dVar38 = (double)iVar20;
      if (0 < iVar5) {
        do {
          uVar23 = *piVar32 + iVar25;
          uVar29 = 0;
          if ((int)uVar23 < (int)this->_padding_) {
            uVar29 = ~uVar23 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
            return pFVar21;
          }
          lVar26 = (longlong)(int)uVar23;
          iVar25 = iVar25 + 1;
          lVar33 = this->_padding_;
          *(float *)(lVar33 + lVar26 * 0xc) = (float)(dVar38 * dVar53);
          *(float *)(lVar33 + 4 + lVar26 * 0xc) = (float)(dVar38 * dVar37);
          *(float *)(lVar33 + 8 + lVar26 * 0xc) = (float)(dVar38 * dVar54);
        } while (iVar25 < iVar5);
      }
      iVar20 = iVar20 + 2;
      piVar32 = piVar32 + 1;
      local_3b8 = local_3b8 + local_39c + -1;
    } while (iVar20 < 3);
  }
  uVar29 = 0;
  if (0 < (int)this->_padding_) {
    lVar33 = 0;
    do {
      uVar23 = 0;
      if ((int)uVar29 < (int)this->_padding_) {
        uVar23 = ~uVar29 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        pFVar21 = (FMeshShapeGenerator *)(*pcVar8)();
        return pFVar21;
      }
      lVar26 = this->_padding_;
      fVar43 = *(float *)(lVar33 + lVar26);
      fVar34 = *(float *)(lVar33 + 4 + lVar26);
      fVar35 = *(float *)(lVar33 + 8 + lVar26);
      fVar36 = SQRT(fVar34 * fVar34 + fVar43 * fVar43 + fVar35 * fVar35);
      if (fVar36 <= 0.0) {
        fVar35 = 0.0;
        fVar34 = 0.0;
        fVar36 = 0.0;
      }
      else {
        fVar36 = fVar65 / fVar36;
        fVar35 = fVar36 * fVar35;
        fVar34 = fVar36 * fVar34;
        fVar36 = fVar36 * fVar43;
      }
      *(float *)(lVar33 + lVar26) = fVar36;
      uVar29 = uVar29 + 1;
      *(float *)(lVar33 + 4 + lVar26) = fVar34;
      *(float *)(lVar33 + 8 + lVar26) = fVar35;
      lVar33 = lVar33 + 0xc;
    } while ((int)uVar29 < (int)this->_padding_);
  }
  if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.AllocatorInstance.Data);
  }
  return (FMeshShapeGenerator *)this;
}

