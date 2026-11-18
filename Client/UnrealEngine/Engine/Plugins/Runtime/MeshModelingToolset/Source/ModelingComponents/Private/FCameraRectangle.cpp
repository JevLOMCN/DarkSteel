// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 8

// FCameraRectangle @ 14cac8d80

FCameraRectangle * __thiscall FCameraRectangle::FCameraRectangle(FCameraRectangle *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = __real_3ff0000000000000;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).DPIScale = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CameraState).bIsVR = false;
  (this->RectangleStartRay).bHas2D = false;
  (this->RectangleStartRay).WorldRay.Origin.field0_0x0._s_0.X = (double)uVar2;
  (this->RectangleStartRay).WorldRay.Origin.field0_0x0._s_0.Y = (double)uVar3;
  *(undefined4 *)((longlong)&(this->RectangleStartRay).WorldRay.Origin.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(this->RectangleStartRay).WorldRay.Origin.field0_0x0 + 0x14) = uVar5;
  *(undefined4 *)&(this->RectangleStartRay).WorldRay.Direction.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->RectangleStartRay).WorldRay.Direction.field0_0x0 + 4) = 0;
  uVar6 = (undefined4)uVar1;
  uVar7 = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)&(this->RectangleStartRay).WorldRay.Direction.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->RectangleStartRay).WorldRay.Direction.field0_0x0 + 0xc) = 0;
  *(undefined4 *)((longlong)&(this->RectangleStartRay).WorldRay.Direction.field0_0x0 + 0x10) = uVar6
  ;
  *(undefined4 *)((longlong)&(this->RectangleStartRay).WorldRay.Direction.field0_0x0 + 0x14) = uVar7
  ;
  (this->RectangleStartRay).ScreenPosition.field0_0x0._s_0.X = 0.0;
  (this->RectangleStartRay).ScreenPosition.field0_0x0._s_0.Y = 0.0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RectangleEndRay).bHas2D = false;
  (this->RectangleEndRay).WorldRay.Origin.field0_0x0._s_0.X = (double)uVar1;
  (this->RectangleEndRay).WorldRay.Origin.field0_0x0._s_0.Y = (double)uVar2;
  *(undefined4 *)((longlong)&(this->RectangleEndRay).WorldRay.Origin.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(this->RectangleEndRay).WorldRay.Origin.field0_0x0 + 0x14) = uVar5;
  *(undefined4 *)&(this->RectangleEndRay).WorldRay.Direction.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->RectangleEndRay).WorldRay.Direction.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(this->RectangleEndRay).WorldRay.Direction.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->RectangleEndRay).WorldRay.Direction.field0_0x0 + 0xc) = 0;
  *(undefined4 *)((longlong)&(this->RectangleEndRay).WorldRay.Direction.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->RectangleEndRay).WorldRay.Direction.field0_0x0 + 0x14) = uVar7;
  (this->RectangleEndRay).ScreenPosition.field0_0x0._s_0.X = 0.0;
  (this->RectangleEndRay).ScreenPosition.field0_0x0._s_0.Y = 0.0;
  (this->SelectionDomain).Rectangle.Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->SelectionDomain).Rectangle.Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->SelectionDomain).Rectangle.Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->SelectionDomain).Rectangle.Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  this->bIsInitialized = false;
  return this;
}

// FrustumAsConvexVolume @ 14cb0a8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FConvexVolume * __thiscall
FCameraRectangle::FrustumAsConvexVolume
          (FCameraRectangle *this,FConvexVolume *__return_storage_ptr__)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  ForElementType<UE::Math::TPlane<double>_> FVar4;
  code *pcVar5;
  undefined4 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  double dVar12;
  bool bVar13;
  int iVar14;
  FConvexVolume *pFVar15;
  ForElementType<UE::Math::TPlane<double>_> FVar16;
  double *pdVar17;
  double *pdVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  longlong local_388;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  undefined1 local_228 [16];
  double local_218;
  double dStack_210;
  uint local_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  double local_1d8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  double local_118 [5];
  double dStack_f0;
  double local_e8;
  double local_e0;
  
  (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (__return_storage_ptr__->Planes).ArrayNum = 0;
  (__return_storage_ptr__->Planes).ArrayMax = 6;
  (__return_storage_ptr__->PermutedPlanes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (__return_storage_ptr__->PermutedPlanes).ArrayNum = 0;
  (__return_storage_ptr__->PermutedPlanes).ArrayMax = 8;
  if ((this->bIsInitialized == false) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5156035937368539255>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\RectangleMarqueeMechanic.cpp"
                          ,0x77,"bIsInitialized"), bVar13)) {
    pcVar5 = (code *)swi(3);
    pFVar15 = (FConvexVolume *)(*pcVar5)();
    return pFVar15;
  }
  dVar25 = _UNK_15061cbc8;
  dVar32 = ___xmm_3ff00000000000000000000000000000;
  dVar12 = __real_3ff0000000000000;
  local_118[0] = (this->SelectionDomain).Rectangle.Min.field0_0x0._s_0.X;
  local_118[1] = (this->SelectionDomain).Rectangle.Min.field0_0x0._s_0.Y;
  pdVar18 = &local_370;
  local_388 = 4;
  local_118[2] = (this->SelectionDomain).Rectangle.Min.field0_0x0._s_0.X;
  pdVar17 = local_118;
  local_118[3] = (this->SelectionDomain).Rectangle.Max.field0_0x0._s_0.Y;
  local_118[4] = (this->SelectionDomain).Rectangle.Max.field0_0x0._s_0.X;
  dStack_f0 = (this->SelectionDomain).Rectangle.Max.field0_0x0._s_0.Y;
  local_e8 = (this->SelectionDomain).Rectangle.Max.field0_0x0._s_0.X;
  local_e0 = (this->SelectionDomain).Rectangle.Min.field0_0x0._s_0.Y;
  do {
    if ((this->bIsInitialized == false) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5624345680832102295>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\RectangleMarqueeMechanic.h"
                            ,0x69,"bIsInitialized"), bVar13)) {
      pcVar5 = (code *)swi(3);
      pFVar15 = (FConvexVolume *)(*pcVar5)();
      return pFVar15;
    }
    dVar21 = (this->SelectionDomain).Plane.Constant;
    local_158._s_0.Z = 0.0;
    local_158._s_0.X = dVar32;
    local_158._s_0.Y = dVar25;
    UE::Math::TQuat<double>::RotateVector
              (&(this->CameraState).Orientation,(TVector<double> *)&local_1c8._s_0,
               (TVector<double> *)&local_158._s_0);
    dVar19 = *pdVar17;
    local_138._s_0.Z = dVar12;
    local_138._s_0.X = 0.0;
    local_138._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&(this->CameraState).Orientation,(TVector<double> *)&local_1b0._s_0,
               (TVector<double> *)&local_138._s_0);
    dVar20 = pdVar17[1];
    dVar22 = (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y;
    pdVar17 = pdVar17 + 2;
    dVar31 = local_1b0._s_0.Y * dVar20;
    dVar26 = local_1c8._s_0.Y * dVar19;
    dVar23 = local_1c8._s_0.Z * dVar19;
    dVar24 = (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z;
    dVar7 = local_1b0._s_0.Z * dVar20;
    pdVar18[-1] = local_1c8._s_0.X * dVar19 +
                  dVar21 * (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.X +
                  local_1b0._s_0.X * dVar20;
    *pdVar18 = dVar26 + dVar21 * dVar22 + dVar31;
    pdVar18[1] = dVar23 + dVar21 * dVar24 + dVar7;
    pdVar18 = pdVar18 + 3;
    local_388 = local_388 + -1;
  } while (local_388 != 0);
  piVar1 = &(__return_storage_ptr__->Planes).ArrayMax;
  uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  dVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  dVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  if ((this->CameraState).bIsOrthographic != false) {
    dVar19 = (local_370 - (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y) - local_370;
    dVar22 = (local_378 - (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.X) - local_378;
    dVar21 = (local_368 - (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z) - local_368;
    dVar20 = dVar22 * (local_350 - local_368) - dVar21 * (local_360 - local_378);
    dVar21 = dVar21 * (local_358 - local_370) - dVar19 * (local_350 - local_368);
    local_2d8 = dVar19 * (local_360 - local_378) - dVar22 * (local_358 - local_370);
    dVar19 = dVar20 * dVar20 + dVar21 * dVar21 + local_2d8 * local_2d8;
    if (dVar19 == dVar12) {
LAB_14cb0b813:
      uVar28 = SUB84(dVar20,0);
      uVar30 = (undefined4)((ulonglong)dVar20 >> 0x20);
      local_2e8._8_4_ = uVar28;
      local_2e8._0_8_ = dVar21;
      local_2e8._12_4_ = uVar30;
    }
    else {
      if (__real_3e45798ee0000000 <= dVar19) {
        local_178 = dVar12 / SQRT(dVar19);
        dVar21 = dVar21 * local_178;
        dVar20 = dVar20 * local_178;
        local_2d8 = local_2d8 * local_178;
        goto LAB_14cb0b813;
      }
      local_2e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
      local_2d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar21 = dVar32;
      dVar20 = dVar25;
    }
    dVar19 = (local_350 - (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z) - local_350;
    dStack_2d0 = local_370 * dVar20 + local_378 * dVar21 + local_368 * local_2d8;
    dVar20 = (local_358 - (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y) - local_358;
    dVar22 = (local_360 - (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.X) - local_360;
    local_258 = dVar20 * (local_348 - local_360) - dVar22 * (local_340 - local_358);
    dVar20 = dVar19 * (local_340 - local_358) - dVar20 * (local_338 - local_350);
    dVar19 = dVar22 * (local_338 - local_350) - dVar19 * (local_348 - local_360);
    dVar22 = dVar19 * dVar19 + dVar20 * dVar20 + local_258 * local_258;
    if (dVar22 == dVar12) {
LAB_14cb0b966:
      local_268._8_8_ = dVar19;
      local_268._0_8_ = dVar20;
    }
    else {
      if (__real_3e45798ee0000000 <= dVar22) {
        local_170 = dVar12 / SQRT(dVar22);
        dVar20 = dVar20 * local_170;
        dVar19 = dVar19 * local_170;
        local_258 = local_258 * local_170;
        goto LAB_14cb0b966;
      }
      local_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
      local_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar20 = dVar32;
      dVar19 = dVar25;
    }
    dVar24 = (local_340 - (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y) - local_340;
    dVar22 = (local_338 - (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z) - local_338;
    dStack_250 = local_358 * dVar19 + local_360 * dVar20 + local_350 * local_258;
    dVar31 = (local_348 - (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.X) - local_348;
    dVar19 = dVar22 * (local_328 - local_340) - dVar24 * (local_320 - local_338);
    dVar20 = dVar31 * (local_320 - local_338) - dVar22 * (local_330 - local_348);
    local_238 = dVar24 * (local_330 - local_348) - dVar31 * (local_328 - local_340);
    dVar22 = dVar20 * dVar20 + dVar19 * dVar19 + local_238 * local_238;
    if (dVar22 == dVar12) {
LAB_14cb0bacf:
      local_248._8_8_ = dVar20;
      local_248._0_8_ = dVar19;
    }
    else {
      if (__real_3e45798ee0000000 <= dVar22) {
        local_168 = dVar12 / SQRT(dVar22);
        dVar19 = dVar19 * local_168;
        dVar20 = dVar20 * local_168;
        local_238 = local_238 * local_168;
        goto LAB_14cb0bacf;
      }
      local_248 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
      local_238 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar19 = dVar32;
      dVar20 = dVar25;
    }
    dVar24 = (local_328 - (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y) - local_328;
    dVar22 = (local_330 - (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.X) - local_330;
    dStack_230 = local_340 * dVar20 + local_348 * dVar19 + local_338 * local_238;
    dVar19 = (local_320 - (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z) - local_320;
    local_218 = dVar24 * (local_378 - local_330) - dVar22 * (local_370 - local_328);
    dVar20 = dVar22 * (local_368 - local_320) - dVar19 * (local_378 - local_330);
    dVar19 = dVar19 * (local_370 - local_328) - dVar24 * (local_368 - local_320);
    dVar22 = dVar20 * dVar20 + dVar19 * dVar19 + local_218 * local_218;
    if (dVar22 == dVar12) {
LAB_14cb0bc25:
      dVar32 = dVar19;
      local_228._8_8_ = dVar20;
      local_228._0_8_ = dVar32;
    }
    else {
      if (__real_3e45798ee0000000 <= dVar22) {
        local_160 = dVar12 / SQRT(dVar22);
        dVar20 = dVar20 * local_160;
        local_218 = local_218 * local_160;
        dVar19 = dVar19 * local_160;
        goto LAB_14cb0bc25;
      }
      local_228 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
      dVar20 = dVar25;
      local_218 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    (__return_storage_ptr__->Planes).ArrayNum = 0;
    dStack_210 = local_328 * dVar20 + local_330 * dVar32 + local_320 * local_218;
    iVar14 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                (0x20,0x10,0,(ForElementType<UE::Math::TPlane<double>_> *)__return_storage_ptr__,0,
                 piVar1);
      iVar14 = *piVar1;
      dVar21 = local_2e8._0_8_;
      uVar28 = local_2e8._8_4_;
      uVar30 = local_2e8._12_4_;
    }
    FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar16 = FVar4;
    }
    if ((ulonglong)FVar16 <= local_2e8) {
      FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
      if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar16 = FVar4;
      }
      if (local_2e8 < (undefined1 *)((longlong)iVar14 * 0x20 + (longlong)FVar16)) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          pFVar15 = (FConvexVolume *)(*pcVar5)();
          return pFVar15;
        }
        dVar21 = local_2e8._0_8_;
        uVar28 = local_2e8._8_4_;
        uVar30 = local_2e8._12_4_;
      }
    }
    iVar14 = (__return_storage_ptr__->Planes).ArrayNum;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                         (0x1020,(ForElementType<UE::Math::TPlane<double>_> *)__return_storage_ptr__
                          ,piVar1);
      dVar21 = local_2e8._0_8_;
      uVar28 = local_2e8._8_4_;
      uVar30 = local_2e8._12_4_;
    }
    (__return_storage_ptr__->Planes).ArrayNum = iVar14 + 1;
    FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar16 = FVar4;
    }
    auVar3._8_4_ = uVar28;
    auVar3._0_8_ = dVar21;
    auVar3._12_4_ = uVar30;
    *(undefined1 (*) [16])((longlong)iVar14 * 0x20 + (longlong)FVar16) = auVar3;
    pdVar17 = (double *)((longlong)iVar14 * 0x20 + 0x10 + (longlong)FVar16);
    *pdVar17 = local_2d8;
    pdVar17[1] = dStack_2d0;
    FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar16 = FVar4;
    }
    if ((ulonglong)FVar16 <= local_268) {
      FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
      if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar16 = FVar4;
      }
      if ((local_268 < (undefined1 *)((longlong)*piVar1 * 0x20 + (longlong)FVar16)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        pFVar15 = (FConvexVolume *)(*pcVar5)();
        return pFVar15;
      }
    }
    iVar14 = (__return_storage_ptr__->Planes).ArrayNum;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                         (0x1020,(ForElementType<UE::Math::TPlane<double>_> *)__return_storage_ptr__
                          ,piVar1);
    }
    (__return_storage_ptr__->Planes).ArrayNum = iVar14 + 1;
    FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar16 = FVar4;
    }
    puVar2 = (undefined8 *)((longlong)iVar14 * 0x20 + (longlong)FVar16);
    *puVar2 = local_268._0_8_;
    puVar2[1] = local_268._8_8_;
    pdVar17 = (double *)((longlong)iVar14 * 0x20 + 0x10 + (longlong)FVar16);
    *pdVar17 = local_258;
    pdVar17[1] = dStack_250;
    FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar16 = FVar4;
    }
    if ((ulonglong)FVar16 <= local_248) {
      FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
      if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar16 = FVar4;
      }
      if ((local_248 < (undefined1 *)((longlong)*piVar1 * 0x20 + (longlong)FVar16)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        pFVar15 = (FConvexVolume *)(*pcVar5)();
        return pFVar15;
      }
    }
    iVar14 = (__return_storage_ptr__->Planes).ArrayNum;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                         (0x1020,(ForElementType<UE::Math::TPlane<double>_> *)__return_storage_ptr__
                          ,piVar1);
    }
    (__return_storage_ptr__->Planes).ArrayNum = iVar14 + 1;
    FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar16 = FVar4;
    }
    puVar2 = (undefined8 *)((longlong)iVar14 * 0x20 + (longlong)FVar16);
    *puVar2 = local_248._0_8_;
    puVar2[1] = local_248._8_8_;
    pdVar17 = (double *)((longlong)iVar14 * 0x20 + 0x10 + (longlong)FVar16);
    *pdVar17 = local_238;
    pdVar17[1] = dStack_230;
    FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar16 = FVar4;
    }
    if ((ulonglong)FVar16 <= local_228) {
      FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
      if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar16 = FVar4;
      }
      if ((local_228 < (undefined1 *)((longlong)*piVar1 * 0x20 + (longlong)FVar16)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        pFVar15 = (FConvexVolume *)(*pcVar5)();
        return pFVar15;
      }
    }
    iVar14 = (__return_storage_ptr__->Planes).ArrayNum;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                         (0x1020,(ForElementType<UE::Math::TPlane<double>_> *)__return_storage_ptr__
                          ,piVar1);
    }
    (__return_storage_ptr__->Planes).ArrayNum = iVar14 + 1;
    FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar16 = FVar4;
    }
    puVar2 = (undefined8 *)((longlong)iVar14 * 0x20 + (longlong)FVar16);
    *puVar2 = local_228._0_8_;
    puVar2[1] = local_228._8_8_;
    pdVar17 = (double *)((longlong)iVar14 * 0x20 + 0x10 + (longlong)FVar16);
    *pdVar17 = local_218;
    pdVar17[1] = dStack_210;
    goto LAB_14cb0c032;
  }
  auVar3 = *(undefined1 (*) [16])&(this->CameraState).Position.field0_0x0;
  dVar20 = auVar3._0_8_;
  dVar21 = (this->CameraState).Position.field0_0x0._s_0.Z;
  dVar22 = auVar3._8_8_;
  dVar19 = (local_370 - dVar22) * (local_370 - dVar22) + (local_378 - dVar20) * (local_378 - dVar20)
           + (local_368 - dVar21) * (local_368 - dVar21);
  if ((dVar19 != dVar12) && (__real_3e45798ee0000000 <= dVar19)) {
    local_318 = dVar12 / SQRT(dVar19);
  }
  dVar19 = (local_358 - dVar22) * (local_358 - dVar22) + (local_360 - dVar20) * (local_360 - dVar20)
           + (local_350 - dVar21) * (local_350 - dVar21);
  if ((dVar19 != dVar12) && (__real_3e45798ee0000000 <= dVar19)) {
    local_318 = dVar12 / SQRT(dVar19);
  }
  dVar19 = (local_340 - dVar22) * (local_340 - dVar22) + (local_348 - dVar20) * (local_348 - dVar20)
           + (local_338 - dVar21) * (local_338 - dVar21);
  if ((dVar19 != dVar12) && (__real_3e45798ee0000000 <= dVar19)) {
    local_318 = dVar12 / SQRT(dVar19);
  }
  dVar19 = (local_328 - dVar22) * (local_328 - dVar22) + (local_330 - dVar20) * (local_330 - dVar20)
           + (local_320 - dVar21) * (local_320 - dVar21);
  if ((dVar19 != dVar12) && (__real_3e45798ee0000000 <= dVar19)) {
    local_318 = dVar12 / SQRT(dVar19);
  }
  dVar20 = dVar20 - local_378;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  auVar33._8_4_ = auVar3._8_4_;
  auVar33._0_8_ = dVar20;
  auVar33._12_4_ = auVar3._12_4_;
  dVar19 = (dVar21 - local_368) * (local_358 - local_370) -
           (dVar22 - local_370) * (local_350 - local_368);
  local_2f8 = (dVar22 - local_370) * (local_360 - local_378) - dVar20 * (local_358 - local_370);
  dVar20 = dVar20 * (local_350 - local_368) - (dVar21 - local_368) * (local_360 - local_378);
  dVar21 = dVar20 * dVar20 + dVar19 * dVar19 + local_2f8 * local_2f8;
  if (dVar21 == dVar12) {
LAB_14cb0ae21:
    uVar27 = SUB84(dVar20,0);
    uVar29 = (undefined4)((ulonglong)dVar20 >> 0x20);
    local_308._8_4_ = uVar27;
    local_308._0_8_ = dVar19;
    local_308._12_4_ = uVar29;
  }
  else {
    if (__real_3e45798ee0000000 <= dVar21) {
      local_198 = dVar12 / SQRT(dVar21);
      dVar19 = dVar19 * local_198;
      dVar20 = dVar20 * local_198;
      local_2f8 = local_2f8 * local_198;
      goto LAB_14cb0ae21;
    }
    auVar9._4_8_ = auVar33._8_8_;
    auVar9._0_4_ = uVar6;
    auVar34._0_8_ = auVar9._0_8_ << 0x20;
    auVar34._8_4_ = uVar28;
    auVar34._12_4_ = uVar30;
    dVar20 = auVar34._8_8_;
    local_308 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    uVar27 = uVar28;
    uVar29 = uVar30;
    local_2f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar19 = dVar32;
  }
  dVar24 = (this->CameraState).Position.field0_0x0._s_0.Z - local_350;
  auVar3 = *(undefined1 (*) [16])&(this->CameraState).Position.field0_0x0;
  dStack_2f0 = local_370 * dVar20 + local_378 * dVar19 + local_368 * local_2f8;
  dVar22 = auVar3._0_8_ - local_360;
  dVar21 = auVar3._8_8_ - local_358;
  auVar35._8_4_ = auVar3._8_4_;
  auVar35._0_8_ = dVar22;
  auVar35._12_4_ = auVar3._12_4_;
  dVar31 = dVar22 * (local_338 - local_350) - dVar24 * (local_348 - local_360);
  dVar20 = dVar24 * (local_340 - local_358) - dVar21 * (local_338 - local_350);
  local_2b8 = dVar21 * (local_348 - local_360) - dVar22 * (local_340 - local_358);
  dVar21 = dVar31 * dVar31 + dVar20 * dVar20 + local_2b8 * local_2b8;
  if (dVar21 == dVar12) {
LAB_14cb0af68:
    local_2c8._8_8_ = dVar31;
    local_2c8._0_8_ = dVar20;
  }
  else {
    if (__real_3e45798ee0000000 <= dVar21) {
      local_190 = dVar12 / SQRT(dVar21);
      dVar20 = dVar20 * local_190;
      dVar31 = dVar31 * local_190;
      local_2b8 = local_2b8 * local_190;
      goto LAB_14cb0af68;
    }
    auVar10._4_8_ = auVar35._8_8_;
    auVar10._0_4_ = uVar6;
    auVar36._0_8_ = auVar10._0_8_ << 0x20;
    auVar36._8_4_ = uVar28;
    auVar36._12_4_ = uVar30;
    dVar31 = auVar36._8_8_;
    local_2c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    local_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar20 = dVar32;
  }
  dVar22 = (this->CameraState).Position.field0_0x0._s_0.Z - local_338;
  auVar3 = *(undefined1 (*) [16])&(this->CameraState).Position.field0_0x0;
  dStack_2b0 = local_358 * dVar31 + local_360 * dVar20 + local_350 * local_2b8;
  dVar20 = auVar3._0_8_ - local_348;
  dVar21 = auVar3._8_8_ - local_340;
  auVar37._8_4_ = auVar3._8_4_;
  auVar37._0_8_ = dVar20;
  auVar37._12_4_ = auVar3._12_4_;
  dVar24 = dVar20 * (local_320 - local_338) - dVar22 * (local_330 - local_348);
  local_298 = dVar21 * (local_330 - local_348) - dVar20 * (local_328 - local_340);
  dVar21 = dVar22 * (local_328 - local_340) - dVar21 * (local_320 - local_338);
  dVar20 = dVar24 * dVar24 + dVar21 * dVar21 + local_298 * local_298;
  if (dVar20 == dVar12) {
LAB_14cb0b0a7:
    local_2a8._8_8_ = dVar24;
    local_2a8._0_8_ = dVar21;
  }
  else {
    if (__real_3e45798ee0000000 <= dVar20) {
      local_188 = dVar12 / SQRT(dVar20);
      dVar21 = dVar21 * local_188;
      dVar24 = dVar24 * local_188;
      local_298 = local_298 * local_188;
      goto LAB_14cb0b0a7;
    }
    auVar11._4_8_ = auVar37._8_8_;
    auVar11._0_4_ = uVar6;
    auVar38._0_8_ = auVar11._0_8_ << 0x20;
    auVar38._8_4_ = uVar28;
    auVar38._12_4_ = uVar30;
    dVar24 = auVar38._8_8_;
    local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar21 = dVar32;
  }
  local_1d8 = (this->CameraState).Position.field0_0x0._s_0.Z;
  dStack_290 = local_340 * dVar24 + local_348 * dVar21 + local_338 * local_298;
  dVar21 = (this->CameraState).Position.field0_0x0._s_0.X - local_330;
  dVar24 = (this->CameraState).Position.field0_0x0._s_0.Y - local_328;
  dVar22 = (local_1d8 - local_320) * (local_370 - local_328) - dVar24 * (local_368 - local_320);
  dVar20 = dVar21 * (local_368 - local_320) - (local_1d8 - local_320) * (local_378 - local_330);
  local_278 = dVar24 * (local_378 - local_330) - dVar21 * (local_370 - local_328);
  dVar21 = dVar20 * dVar20 + dVar22 * dVar22 + local_278 * local_278;
  if (dVar21 == dVar12) {
LAB_14cb0b1e5:
    dVar32 = dVar22;
    local_288._8_8_ = dVar20;
    local_288._0_8_ = dVar32;
  }
  else {
    if (__real_3e45798ee0000000 <= dVar21) {
      local_180 = dVar12 / SQRT(dVar21);
      dVar20 = dVar20 * local_180;
      local_278 = local_278 * local_180;
      dVar22 = dVar22 * local_180;
      goto LAB_14cb0b1e5;
    }
    local_288 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    dVar20 = dVar25;
    local_278 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  local_208 = *(uint *)&(this->SelectionDomain).Plane.Normal.field0_0x0 ^
              (uint)__xmm_80000000000000008000000000000000;
  uStack_204 = *(uint *)((longlong)&(this->SelectionDomain).Plane.Normal.field0_0x0 + 4) ^
               __xmm_80000000000000008000000000000000._4_4_;
  uStack_200 = *(uint *)((longlong)&(this->SelectionDomain).Plane.Normal.field0_0x0 + 8) ^
               _UNK_15066df78;
  uStack_1fc = *(uint *)((longlong)&(this->SelectionDomain).Plane.Normal.field0_0x0 + 0xc) ^
               _UNK_15066df7c;
  local_1f8 = *(uint *)((longlong)&(this->SelectionDomain).Plane.Normal.field0_0x0 + 0x10);
  uStack_1f4 = *(uint *)((longlong)&(this->SelectionDomain).Plane.Normal.field0_0x0 + 0x14);
  uStack_1f0 = *(uint *)&(this->SelectionDomain).Plane.Constant;
  uStack_1ec = *(uint *)((longlong)&(this->SelectionDomain).Plane.Constant + 4);
  (__return_storage_ptr__->Planes).ArrayNum = 0;
  local_1f8 = local_1f8 ^ (uint)__xmm_80000000000000008000000000000000;
  uStack_1f4 = uStack_1f4 ^ __xmm_80000000000000008000000000000000._4_4_;
  uStack_1f0 = uStack_1f0 ^ _UNK_15066df78;
  uStack_1ec = uStack_1ec ^ _UNK_15066df7c;
  dStack_270 = local_328 * dVar20 + local_330 * dVar32 + local_320 * local_278;
  iVar14 = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
              (0x20,0x10,0,(ForElementType<UE::Math::TPlane<double>_> *)__return_storage_ptr__,0,
               piVar1);
    iVar14 = *piVar1;
    dVar19 = local_308._0_8_;
    uVar27 = local_308._8_4_;
    uVar29 = local_308._12_4_;
  }
  FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
  if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar16 = FVar4;
  }
  if ((ulonglong)FVar16 <= local_308) {
    FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar16 = FVar4;
    }
    if (local_308 < (undefined1 *)((longlong)iVar14 * 0x20 + (longlong)FVar16)) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        pFVar15 = (FConvexVolume *)(*pcVar5)();
        return pFVar15;
      }
      dVar19 = local_308._0_8_;
      uVar27 = local_308._8_4_;
      uVar29 = local_308._12_4_;
    }
  }
  iVar14 = (__return_storage_ptr__->Planes).ArrayNum;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                       (0x1020,(ForElementType<UE::Math::TPlane<double>_> *)__return_storage_ptr__,
                        piVar1);
    dVar19 = local_308._0_8_;
    uVar27 = local_308._8_4_;
    uVar29 = local_308._12_4_;
  }
  (__return_storage_ptr__->Planes).ArrayNum = iVar14 + 1;
  FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
  if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar16 = FVar4;
  }
  auVar8._8_4_ = uVar27;
  auVar8._0_8_ = dVar19;
  auVar8._12_4_ = uVar29;
  *(undefined1 (*) [16])((longlong)iVar14 * 0x20 + (longlong)FVar16) = auVar8;
  pdVar17 = (double *)((longlong)iVar14 * 0x20 + 0x10 + (longlong)FVar16);
  *pdVar17 = local_2f8;
  pdVar17[1] = dStack_2f0;
  FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
  if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar16 = FVar4;
  }
  if ((ulonglong)FVar16 <= local_2c8) {
    FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar16 = FVar4;
    }
    if ((local_2c8 < (undefined1 *)((longlong)*piVar1 * 0x20 + (longlong)FVar16)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar5 = (code *)swi(3);
      pFVar15 = (FConvexVolume *)(*pcVar5)();
      return pFVar15;
    }
  }
  iVar14 = (__return_storage_ptr__->Planes).ArrayNum;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                       (0x1020,(ForElementType<UE::Math::TPlane<double>_> *)__return_storage_ptr__,
                        piVar1);
  }
  (__return_storage_ptr__->Planes).ArrayNum = iVar14 + 1;
  FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
  if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar16 = FVar4;
  }
  puVar2 = (undefined8 *)((longlong)iVar14 * 0x20 + (longlong)FVar16);
  *puVar2 = local_2c8._0_8_;
  puVar2[1] = local_2c8._8_8_;
  pdVar17 = (double *)((longlong)iVar14 * 0x20 + 0x10 + (longlong)FVar16);
  *pdVar17 = local_2b8;
  pdVar17[1] = dStack_2b0;
  FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
  if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar16 = FVar4;
  }
  if ((ulonglong)FVar16 <= local_2a8) {
    FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar16 = FVar4;
    }
    if ((local_2a8 < (undefined1 *)((longlong)*piVar1 * 0x20 + (longlong)FVar16)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar5 = (code *)swi(3);
      pFVar15 = (FConvexVolume *)(*pcVar5)();
      return pFVar15;
    }
  }
  iVar14 = (__return_storage_ptr__->Planes).ArrayNum;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                       (0x1020,(ForElementType<UE::Math::TPlane<double>_> *)__return_storage_ptr__,
                        piVar1);
  }
  (__return_storage_ptr__->Planes).ArrayNum = iVar14 + 1;
  FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
  if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar16 = FVar4;
  }
  puVar2 = (undefined8 *)((longlong)iVar14 * 0x20 + (longlong)FVar16);
  *puVar2 = local_2a8._0_8_;
  puVar2[1] = local_2a8._8_8_;
  pdVar17 = (double *)((longlong)iVar14 * 0x20 + 0x10 + (longlong)FVar16);
  *pdVar17 = local_298;
  pdVar17[1] = dStack_290;
  FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
  if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar16 = FVar4;
  }
  if ((ulonglong)FVar16 <= local_288) {
    FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar16 = FVar4;
    }
    if ((local_288 < (undefined1 *)((longlong)*piVar1 * 0x20 + (longlong)FVar16)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar5 = (code *)swi(3);
      pFVar15 = (FConvexVolume *)(*pcVar5)();
      return pFVar15;
    }
  }
  iVar14 = (__return_storage_ptr__->Planes).ArrayNum;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                       (0x1020,(ForElementType<UE::Math::TPlane<double>_> *)__return_storage_ptr__,
                        piVar1);
  }
  (__return_storage_ptr__->Planes).ArrayNum = iVar14 + 1;
  FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
  if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar16 = FVar4;
  }
  puVar2 = (undefined8 *)((longlong)iVar14 * 0x20 + (longlong)FVar16);
  *puVar2 = local_288._0_8_;
  puVar2[1] = local_288._8_8_;
  pdVar17 = (double *)((longlong)iVar14 * 0x20 + 0x10 + (longlong)FVar16);
  *pdVar17 = local_278;
  pdVar17[1] = dStack_270;
  FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
  if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar16 = FVar4;
  }
  if ((ulonglong)FVar16 <= &local_208) {
    FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar16 = FVar4;
    }
    if ((&local_208 < (uint *)((longlong)*piVar1 * 0x20 + (longlong)FVar16)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar5 = (code *)swi(3);
      pFVar15 = (FConvexVolume *)(*pcVar5)();
      return pFVar15;
    }
  }
  iVar14 = (__return_storage_ptr__->Planes).ArrayNum;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                       (0x1020,(ForElementType<UE::Math::TPlane<double>_> *)__return_storage_ptr__,
                        piVar1);
  }
  (__return_storage_ptr__->Planes).ArrayNum = iVar14 + 1;
  FVar4 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
  if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar16 = FVar4;
  }
  puVar2 = (undefined8 *)((longlong)iVar14 * 0x20 + (longlong)FVar16);
  *puVar2 = CONCAT44(uStack_204,local_208);
  puVar2[1] = CONCAT44(uStack_1fc,uStack_200);
  puVar2 = (undefined8 *)((longlong)iVar14 * 0x20 + 0x10 + (longlong)FVar16);
  *puVar2 = CONCAT44(uStack_1f4,local_1f8);
  puVar2[1] = CONCAT44(uStack_1ec,uStack_1f0);
LAB_14cb0c032:
  FConvexVolume::Init(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Initialize @ 14cb1bcc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FCameraRectangle::Initialize(FCameraRectangle *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [12];
  FRectangleInPlane *pFVar5;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  FRectangleInPlane local_68;
  
  local_b8._s_0.Y = _UNK_150689518;
  local_b8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  this->bIsInitialized = true;
  local_b8._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&(this->CameraState).Orientation,(TVector<double> *)&local_98._s_0,
             (TVector<double> *)&local_b8._s_0);
  local_b8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_b8._s_0.Y = _UNK_150689518;
  local_b8._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&(this->CameraState).Orientation,(TVector<double> *)&local_80._s_0,
             (TVector<double> *)&local_b8._s_0);
  auVar4._4_8_ = extraout_XMM0_Qb;
  auVar4._0_4_ = local_80._4_4_;
  auVar6._0_8_ = auVar4._0_8_ << 0x20;
  auVar6._8_4_ = local_80._8_4_;
  auVar6._12_4_ = local_80._12_4_;
  dVar1 = (this->CameraState).Position.field0_0x0._s_0.Y;
  dVar2 = (this->CameraState).Position.field0_0x0._s_0.X;
  dVar3 = (this->CameraState).Position.field0_0x0._s_0.Z;
  *(undefined1 (*) [16])&(this->SelectionDomain).Plane.Normal.field0_0x0 = local_80._0_16_;
  (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z = local_80._s_0.Z;
  (this->SelectionDomain).Plane.Constant =
       (local_98._s_0.Y + dVar1) * auVar6._8_8_ + (local_98._s_0.X + dVar2) * local_80._0_8_ +
       (local_98._s_0.Z + dVar3) * local_80._s_0.Z;
  pFVar5 = ProjectSelectionDomain(this,&local_68,0.0);
  dVar1 = (pFVar5->Rectangle).Min.field0_0x0._s_0.Y;
  (this->SelectionDomain).Rectangle.Min.field0_0x0._s_0.X =
       (pFVar5->Rectangle).Min.field0_0x0._s_0.X;
  (this->SelectionDomain).Rectangle.Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (pFVar5->Rectangle).Max.field0_0x0._s_0.Y;
  (this->SelectionDomain).Rectangle.Max.field0_0x0._s_0.X =
       (pFVar5->Rectangle).Max.field0_0x0._s_0.X;
  (this->SelectionDomain).Rectangle.Max.field0_0x0._s_0.Y = dVar1;
  return;
}

// IsProjectedPointInRectangle @ 14cb22400

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FCameraRectangle::IsProjectedPointInRectangle(FCameraRectangle *this,TVector<double> *param_1)

{
  FRectangleInPlane *pFVar1;
  TVector2<double> *pTVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  TVector<double> *pTVar11;
  TVector2<double>_u_0 local_68;
  TVector<double>_u_0 local_58;
  TVector<double> local_40 [2];
  
  if ((this->bIsInitialized == false) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5156035937368539185>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\RectangleMarqueeMechanic.cpp"
                         ,0x31,"bIsInitialized"), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pFVar1 = &this->SelectionDomain;
  if ((this->CameraState).bIsOrthographic == false) {
    if (((param_1->field0_0x0)._s_0.Y * (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y +
         (pFVar1->Plane).Normal.field0_0x0._s_0.X * (param_1->field0_0x0)._s_0.X +
        (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z * (param_1->field0_0x0)._s_0.Z) -
        (this->SelectionDomain).Plane.Constant <= 0.0) {
      return false;
    }
    pTVar11 = PerspectiveProjection(this,local_40,&pFVar1->Plane,param_1);
    local_58._s_0.X = (pTVar11->field0_0x0)._s_0.X;
    local_58._s_0.Y = (pTVar11->field0_0x0)._s_0.Y;
    local_58._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
  }
  else {
    dVar4 = (param_1->field0_0x0)._s_0.Y;
    dVar5 = (param_1->field0_0x0)._s_0.X;
    dVar6 = (param_1->field0_0x0)._s_0.Z;
    dVar8 = (dVar4 * (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y +
             dVar5 * (pFVar1->Plane).Normal.field0_0x0._s_0.X +
            dVar6 * (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z) -
            (this->SelectionDomain).Plane.Constant;
    local_58._s_0.Z = dVar6 - dVar8 * (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z;
    local_58._s_0.X = dVar5 - dVar8 * (pFVar1->Plane).Normal.field0_0x0._s_0.X;
    local_58._s_0.Y = dVar4 - dVar8 * (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y;
  }
  Point3DToPointUV(this,(TVector2<double> *)&local_68._s_0,&pFVar1->Plane,
                   (TVector<double> *)&local_58._s_0);
  if (((((this->SelectionDomain).Rectangle.Min.field0_0x0._s_0.X <= local_68._s_0.X) &&
       ((this->SelectionDomain).Rectangle.Min.field0_0x0._s_0.Y <= local_68._s_0.Y)) &&
      (pTVar2 = &(this->SelectionDomain).Rectangle.Max,
      local_68._s_0.X < (pTVar2->field0_0x0)._s_0.X ||
      local_68._s_0.X == (pTVar2->field0_0x0)._s_0.X)) &&
     (pdVar3 = &(this->SelectionDomain).Rectangle.Max.field0_0x0._s_0.Y,
     local_68._s_0.Y < *pdVar3 || local_68._s_0.Y == *pdVar3)) {
    return true;
  }
  return false;
}

// IsProjectedSegmentIntersectingRectangle @ 14cb225b0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FCameraRectangle::IsProjectedSegmentIntersectingRectangle
          (FCameraRectangle *this,TVector<double> *param_1,TVector<double> *param_2)

{
  FRectangleInPlane *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  EClipSegmentType EVar11;
  undefined1 auVar12 [16];
  double dVar13;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector2<double>_u_0 local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  TVector2<double>_u_0 local_b0;
  TVector2<double>_u_0 local_a0 [8];
  
  if ((this->bIsInitialized == false) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5156035937368539208>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\RectangleMarqueeMechanic.cpp"
                         ,0x48,"bIsInitialized"), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  this_00 = &this->SelectionDomain;
  if ((this->CameraState).bIsOrthographic == false) {
    local_108._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_108._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_108._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    local_f0._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_f0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_f0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    EVar11 = UE::Geometry::TPlane3<double>::ClipSegment
                       (&this_00->Plane,(TVector<double> *)&local_108._s_0,
                        (TVector<double> *)&local_f0._s_0);
    if (EVar11 == FullyClipped) {
      return false;
    }
    if (EVar11 == FirstClipped) {
      if ((this->bIsInitialized == false) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5624345680832102318>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\RectangleMarqueeMechanic.h"
                             ,0x52,"bIsInitialized"), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      dVar1 = (this->SelectionDomain).Plane.Constant;
      dVar2 = (this_00->Plane).Normal.field0_0x0._s_0.X;
      dVar3 = (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y;
      dVar4 = (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z;
      dVar5 = (this->CameraState).Position.field0_0x0._s_0.X;
      dVar6 = (this->CameraState).Position.field0_0x0._s_0.Y;
      dVar13 = (this->CameraState).Position.field0_0x0._s_0.Z;
      auVar12._0_8_ =
           (local_f0._s_0.Y - dVar6) * dVar3 + (local_f0._s_0.X - dVar5) * dVar2 +
           (local_f0._s_0.Z - dVar13) * dVar4;
      auVar12._8_8_ = 0;
      dVar1 = ((dVar1 * dVar3 - dVar6) * dVar3 + (dVar1 * dVar2 - dVar5) * dVar2 +
              (dVar1 * dVar4 - dVar13) * dVar4) / auVar12._0_8_;
      local_f0._s_0.X = (local_f0._s_0.X - dVar5) * dVar1 + dVar5;
      local_f0._s_0.Y = (local_f0._s_0.Y - dVar6) * dVar1 + dVar6;
      local_f0._s_0.Z = (local_f0._s_0.Z - dVar13) * dVar1 + dVar13;
    }
    else if (EVar11 == SecondClipped) {
      if ((this->bIsInitialized == false) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5624345680832102318>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\RectangleMarqueeMechanic.h"
                             ,0x52,"bIsInitialized"), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      dVar1 = (this->SelectionDomain).Plane.Constant;
      dVar2 = (this_00->Plane).Normal.field0_0x0._s_0.X;
      dVar3 = (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y;
      dVar4 = (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z;
      dVar5 = (this->CameraState).Position.field0_0x0._s_0.X;
      dVar6 = (this->CameraState).Position.field0_0x0._s_0.Y;
      dVar13 = (this->CameraState).Position.field0_0x0._s_0.Z;
      auVar12._0_8_ =
           (local_108._s_0.Y - dVar6) * dVar3 + (local_108._s_0.X - dVar5) * dVar2 +
           (local_108._s_0.Z - dVar13) * dVar4;
      auVar12._8_8_ = 0;
      dVar1 = ((dVar1 * dVar3 - dVar6) * dVar3 + (dVar1 * dVar2 - dVar5) * dVar2 +
              (dVar1 * dVar4 - dVar13) * dVar4) / auVar12._0_8_;
      local_108._s_0.X = (local_108._s_0.X - dVar5) * dVar1 + dVar5;
      local_108._s_0.Y = (local_108._s_0.Y - dVar6) * dVar1 + dVar6;
      local_108._s_0.Z = (local_108._s_0.Z - dVar13) * dVar1 + dVar13;
    }
    else {
      if ((this->bIsInitialized == false) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5624345680832102318>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\RectangleMarqueeMechanic.h"
                             ,0x52,"bIsInitialized"), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      dVar1 = (this->SelectionDomain).Plane.Constant;
      dVar2 = (this_00->Plane).Normal.field0_0x0._s_0.X;
      dVar3 = (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y;
      dVar4 = (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z;
      dVar5 = (this->CameraState).Position.field0_0x0._s_0.X;
      dVar6 = (this->CameraState).Position.field0_0x0._s_0.Y;
      dVar13 = (this->CameraState).Position.field0_0x0._s_0.Z;
      dVar1 = ((dVar1 * dVar3 - dVar6) * dVar3 + (dVar1 * dVar2 - dVar5) * dVar2 +
              (dVar1 * dVar4 - dVar13) * dVar4) /
              ((local_108._s_0.Y - dVar6) * dVar3 + (local_108._s_0.X - dVar5) * dVar2 +
              (local_108._s_0.Z - dVar13) * dVar4);
      local_108._s_0.X = dVar1 * (local_108._s_0.X - dVar5) + dVar5;
      local_108._s_0.Y = dVar1 * (local_108._s_0.Y - dVar6) + dVar6;
      local_108._s_0.Z = dVar1 * (local_108._s_0.Z - dVar13) + dVar13;
      if ((this->bIsInitialized == false) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5624345680832102318>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\RectangleMarqueeMechanic.h"
                             ,0x52,"bIsInitialized"), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      dVar1 = (this->SelectionDomain).Plane.Constant;
      dVar2 = (this_00->Plane).Normal.field0_0x0._s_0.X;
      dVar3 = (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y;
      dVar4 = (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z;
      dVar5 = (this->CameraState).Position.field0_0x0._s_0.X;
      dVar6 = (this->CameraState).Position.field0_0x0._s_0.Y;
      dVar13 = (this->CameraState).Position.field0_0x0._s_0.Z;
      auVar12._0_8_ =
           (local_f0._s_0.Y - dVar6) * dVar3 + (local_f0._s_0.X - dVar5) * dVar2 +
           (local_f0._s_0.Z - dVar13) * dVar4;
      auVar12._8_8_ = 0;
      dVar1 = ((dVar1 * dVar2 - dVar5) * dVar2 + (dVar1 * dVar3 - dVar6) * dVar3 +
              (dVar1 * dVar4 - dVar13) * dVar4) / auVar12._0_8_;
      local_f0._s_0.X = dVar1 * (local_f0._s_0.X - dVar5) + dVar5;
      local_f0._s_0.Y = dVar1 * (local_f0._s_0.Y - dVar6) + dVar6;
      local_f0._s_0.Z = dVar1 * (local_f0._s_0.Z - dVar13) + dVar13;
    }
  }
  else {
    dVar1 = (this_00->Plane).Normal.field0_0x0._s_0.X;
    dVar2 = (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y;
    dVar3 = (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z;
    dVar4 = (param_1->field0_0x0)._s_0.X;
    dVar5 = (param_1->field0_0x0)._s_0.Y;
    dVar6 = (param_1->field0_0x0)._s_0.Z;
    dVar13 = (dVar5 * dVar2 + dVar4 * dVar1 + dVar6 * dVar3) -
             (this->SelectionDomain).Plane.Constant;
    local_108._s_0.Z = dVar6 - dVar13 * dVar3;
    local_108._s_0.X = dVar4 - dVar13 * dVar1;
    local_108._s_0.Y = dVar5 - dVar13 * dVar2;
    dVar4 = (param_2->field0_0x0)._s_0.Z;
    dVar5 = (param_2->field0_0x0)._s_0.X;
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    dVar13 = (dVar6 * dVar2 + dVar5 * dVar1 + dVar4 * dVar3) -
             (this->SelectionDomain).Plane.Constant;
    auVar12._0_8_ = dVar5 - dVar13 * dVar1;
    auVar12._8_8_ = 0;
    local_f0._s_0.Y = dVar6 - dVar13 * dVar2;
    local_f0._s_0.Z = dVar4 - dVar13 * dVar3;
    local_f0._s_0.X = auVar12._0_8_;
  }
  Point3DToPointUV(this,(TVector2<double> *)&local_b0._s_0,&this_00->Plane,
                   (TVector<double> *)&local_108._s_0);
  Point3DToPointUV(this,(TVector2<double> *)&local_a0[0]._s_0,&this_00->Plane,
                   (TVector<double> *)&local_f0._s_0);
  local_c8 = (double)local_a0[0]._0_8_ - local_b0._s_0.X;
  local_d8._s_0.X = (local_b0._s_0.X + (double)local_a0[0]._0_8_) * __real_3fe0000000000000;
  dStack_c0 = (double)local_a0[0]._8_8_ - local_b0._s_0.Y;
  local_d8._s_0.Y = (local_b0._s_0.Y + (double)local_a0[0]._8_8_) * __real_3fe0000000000000;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dStack_c0 * dStack_c0 + local_c8 * local_c8;
  auVar12 = sqrtpd(auVar12,auVar8);
  local_b8 = auVar12._0_8_;
  if (local_b8 <= 0.0) {
    local_c8 = 0.0;
    dStack_c0 = 0.0;
    local_b8 = 0.0;
  }
  else {
    local_c8 = local_c8 * (__real_3ff0000000000000 / local_b8);
    dStack_c0 = (__real_3ff0000000000000 / local_b8) * dStack_c0;
  }
  local_b8 = local_b8 * __real_3fe0000000000000;
  bVar9 = UE::Geometry::TestIntersection<double>
                    ((TSegment2<double> *)&local_d8._s_0,&(this->SelectionDomain).Rectangle);
  return bVar9;
}

// PerspectiveProjection @ 14cb28940

TVector<double> * __thiscall
FCameraRectangle::PerspectiveProjection
          (FCameraRectangle *this,TVector<double> *__return_storage_ptr__,TPlane3<double> *param_1,
          TVector<double> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  TVector<double>_u_0 local_48;
  TPlane<double> local_28;
  
  if (this->bIsInitialized == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5624345680832102318>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\RectangleMarqueeMechanic.h"
                       ,0x52,"bIsInitialized");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_28._padding_ = (longlong)(param_1->Normal).field0_0x0._s_0.X;
  local_28._padding_ = (longlong)(param_1->Normal).field0_0x0._s_0.Y;
  local_28._padding_ = (longlong)(param_1->Normal).field0_0x0._s_0.Z;
  local_28.W = param_1->Constant;
  dVar2 = (param_2->field0_0x0)._s_0.Y - (this->CameraState).Position.field0_0x0._s_0.Y;
  local_48._s_0.Z = (param_2->field0_0x0)._s_0.Z - (this->CameraState).Position.field0_0x0._s_0.Z;
  local_48._8_4_ = SUB84(dVar2,0);
  local_48._0_8_ = (param_2->field0_0x0)._s_0.X - (this->CameraState).Position.field0_0x0._s_0.X;
  local_48._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  FMath::RayPlaneIntersection<double>
            (__return_storage_ptr__,(TVector<double> *)this,(TVector<double> *)&local_48._s_0,
             &local_28);
  return __return_storage_ptr__;
}

// Point3DToPointUV @ 14cb28a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector2<double> * __thiscall
FCameraRectangle::Point3DToPointUV
          (FCameraRectangle *this,TVector2<double> *__return_storage_ptr__,TPlane3<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  if (this->bIsInitialized == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5624345680832102306>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\RectangleMarqueeMechanic.h"
                       ,0x5e,"bIsInitialized");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector2<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  local_48._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_48._s_0.Y = _UNK_15061cbc8;
  local_48._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&(this->CameraState).Orientation,(TVector<double> *)&local_78._s_0,
             (TVector<double> *)&local_48._s_0);
  dVar1 = param_1->Constant;
  local_28._s_0.Z = __real_3ff0000000000000;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((param_2->field0_0x0)._s_0.Y - dVar1 * (param_1->Normal).field0_0x0._s_0.Y) *
       local_78._s_0.Y +
       ((param_2->field0_0x0)._s_0.X - dVar1 * (param_1->Normal).field0_0x0._s_0.X) *
       local_78._s_0.X +
       ((param_2->field0_0x0)._s_0.Z - dVar1 * (param_1->Normal).field0_0x0._s_0.Z) *
       local_78._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (&(this->CameraState).Orientation,(TVector<double> *)&local_60._s_0,
             (TVector<double> *)&local_28._s_0);
  dVar1 = param_1->Constant;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       ((param_2->field0_0x0)._s_0.Y - dVar1 * (param_1->Normal).field0_0x0._s_0.Y) *
       local_60._s_0.Y +
       ((param_2->field0_0x0)._s_0.X - dVar1 * (param_1->Normal).field0_0x0._s_0.X) *
       local_60._s_0.X +
       ((param_2->field0_0x0)._s_0.Z - dVar1 * (param_1->Normal).field0_0x0._s_0.Z) *
       local_60._s_0.Z;
  return __return_storage_ptr__;
}

// ProjectSelectionDomain @ 14cb29bb0

FRectangleInPlane * __thiscall
FCameraRectangle::ProjectSelectionDomain
          (FCameraRectangle *this,FRectangleInPlane *__return_storage_ptr__,double param_1)

{
  TVector2<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  FRectangleInPlane *pFVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  TVector2<double>_u_0 local_d8;
  TVector2<double>_u_0 local_c8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0 [6];
  
  if (this->bIsInitialized == false) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5156035937368539164>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\RectangleMarqueeMechanic.cpp"
                        ,0x1c,"bIsInitialized");
    if (bVar14) {
      pcVar11 = (code *)swi(3);
      pFVar15 = (FRectangleInPlane *)(*pcVar11)();
      return pFVar15;
    }
  }
  (__return_storage_ptr__->Rectangle).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (__return_storage_ptr__->Rectangle).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (__return_storage_ptr__->Rectangle).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (__return_storage_ptr__->Rectangle).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  dVar2 = (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Plane).Normal.field0_0x0._s_0.X =
       (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.X;
  (__return_storage_ptr__->Plane).Normal.field0_0x0._s_0.Y = dVar2;
  dVar12 = (this->SelectionDomain).Plane.Constant;
  (__return_storage_ptr__->Plane).Normal.field0_0x0._s_0.Z =
       (this->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Plane).Constant = dVar12;
  dVar2 = (__return_storage_ptr__->Plane).Normal.field0_0x0._s_0.X;
  dVar3 = (__return_storage_ptr__->Plane).Normal.field0_0x0._s_0.Y;
  dVar4 = (__return_storage_ptr__->Plane).Normal.field0_0x0._s_0.Z;
  dVar12 = param_1 + dVar12;
  (__return_storage_ptr__->Plane).Constant = dVar12;
  dVar5 = (this->RectangleStartRay).WorldRay.Direction.field0_0x0._s_0.Y;
  dVar6 = (this->RectangleEndRay).WorldRay.Origin.field0_0x0._s_0.X;
  dVar7 = (this->RectangleEndRay).WorldRay.Direction.field0_0x0._s_0.Z;
  dVar8 = (this->RectangleEndRay).WorldRay.Origin.field0_0x0._s_0.Z;
  dVar13 = ((dVar3 * dVar12 - (this->RectangleStartRay).WorldRay.Origin.field0_0x0._s_0.Y) * dVar3 +
            (dVar2 * dVar12 - (this->RectangleStartRay).WorldRay.Origin.field0_0x0._s_0.X) * dVar2 +
           (dVar4 * dVar12 - (this->RectangleStartRay).WorldRay.Origin.field0_0x0._s_0.Z) * dVar4) /
           (dVar3 * dVar5 + dVar2 * (this->RectangleStartRay).WorldRay.Direction.field0_0x0._s_0.X +
           dVar4 * (this->RectangleStartRay).WorldRay.Direction.field0_0x0._s_0.Z);
  dVar9 = (this->RectangleEndRay).WorldRay.Direction.field0_0x0._s_0.Y;
  local_b8._s_0.X =
       dVar13 * (this->RectangleStartRay).WorldRay.Direction.field0_0x0._s_0.X +
       (this->RectangleStartRay).WorldRay.Origin.field0_0x0._s_0.X;
  dVar10 = (this->RectangleEndRay).WorldRay.Origin.field0_0x0._s_0.Y;
  local_b8._s_0.Z =
       dVar13 * (this->RectangleStartRay).WorldRay.Direction.field0_0x0._s_0.Z +
       (this->RectangleStartRay).WorldRay.Origin.field0_0x0._s_0.Z;
  local_b8._s_0.Y = dVar13 * dVar5 + (this->RectangleStartRay).WorldRay.Origin.field0_0x0._s_0.Y;
  dVar5 = (this->RectangleEndRay).WorldRay.Direction.field0_0x0._s_0.X;
  dVar2 = ((dVar3 * dVar12 - dVar10) * dVar3 + (dVar2 * dVar12 - dVar6) * dVar2 +
          (dVar4 * dVar12 - dVar8) * dVar4) / (dVar3 * dVar9 + dVar2 * dVar5 + dVar4 * dVar7);
  local_a0[0]._0_8_ = dVar2 * dVar5 + dVar6;
  local_a0[0]._8_8_ = dVar2 * dVar9 + dVar10;
  local_a0[0]._16_8_ = dVar2 * dVar7 + dVar8;
  Point3DToPointUV(this,(TVector2<double> *)&local_d8._s_0,&__return_storage_ptr__->Plane,
                   (TVector<double> *)&local_b8._s_0);
  Point3DToPointUV(this,(TVector2<double> *)&local_c8._s_0,&__return_storage_ptr__->Plane,
                   (TVector<double> *)&local_a0[0]._s_0);
  if (local_d8._s_0.X < (__return_storage_ptr__->Rectangle).Min.field0_0x0._s_0.X) {
    (__return_storage_ptr__->Rectangle).Min.field0_0x0._s_0.X = local_d8._s_0.X;
  }
  pTVar1 = &(__return_storage_ptr__->Rectangle).Max;
  if ((pTVar1->field0_0x0)._s_0.X <= local_d8._s_0.X &&
      local_d8._s_0.X != (pTVar1->field0_0x0)._s_0.X) {
    (__return_storage_ptr__->Rectangle).Max.field0_0x0._s_0.X = local_d8._s_0.X;
  }
  dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Rectangle).Min.field0_0x0 + 8);
  uVar16 = SUB84(dVar2,0);
  uVar17 = (int)((ulonglong)dVar2 >> 0x20);
  if (local_d8._s_0.Y < dVar2) {
    (__return_storage_ptr__->Rectangle).Min.field0_0x0._s_0.Y = local_d8._s_0.Y;
    uVar16 = SUB84(local_d8._s_0.Y,0);
    uVar17 = (int)((ulonglong)local_d8._8_8_ >> 0x20);
  }
  uVar18 = (__return_storage_ptr__->Rectangle).Max.field0_0x0._s_0.Y;
  if ((double)uVar18 < local_d8._s_0.Y) {
    (__return_storage_ptr__->Rectangle).Max.field0_0x0._s_0.Y = local_d8._s_0.Y;
    uVar18 = local_d8._s_0.Y;
  }
  if (local_c8._s_0.X < (__return_storage_ptr__->Rectangle).Min.field0_0x0._s_0.X) {
    uVar18 = *(undefined8 *)((longlong)&(__return_storage_ptr__->Rectangle).Min.field0_0x0 + 8);
    uVar16 = (undefined4)uVar18;
    uVar17 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar18 = (__return_storage_ptr__->Rectangle).Max.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Rectangle).Min.field0_0x0._s_0.X = local_c8._s_0.X;
  }
  pTVar1 = &(__return_storage_ptr__->Rectangle).Max;
  if ((pTVar1->field0_0x0)._s_0.X <= local_c8._s_0.X &&
      local_c8._s_0.X != (pTVar1->field0_0x0)._s_0.X) {
    (__return_storage_ptr__->Rectangle).Max.field0_0x0._s_0.X = local_c8._s_0.X;
  }
  if (local_c8._s_0.Y < (double)CONCAT44(uVar17,uVar16)) {
    (__return_storage_ptr__->Rectangle).Min.field0_0x0._s_0.Y = local_c8._s_0.Y;
  }
  if ((double)uVar18 < local_c8._s_0.Y) {
    (__return_storage_ptr__->Rectangle).Max.field0_0x0._s_0.Y = local_c8._s_0.Y;
  }
  return __return_storage_ptr__;
}

