// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Build @ 144900400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPrimitiveUniformShaderParameters * __thiscall
FPrimitiveUniformShaderParametersBuilder::Build(FPrimitiveUniformShaderParametersBuilder *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  TConsoleVariableData<int> *pTVar27;
  bool bVar28;
  uint uVar29;
  TMatrix<double> *pTVar30;
  FPrimitiveUniformShaderParameters *pFVar31;
  longlong *plVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_3f8 [36];
  float fStack_3d4;
  float fStack_3c8;
  undefined8 local_3a8;
  float local_3a0;
  undefined8 local_39c;
  float local_394;
  TVector<double>_u_0 local_388;
  TVector<double>_u_0 local_368;
  TVector<double>_u_0 local_348;
  double local_330;
  double local_328;
  double local_320;
  TVector<double>_u_0 local_318;
  double local_300;
  double local_2f8;
  double local_2f0;
  TMatrix<double> local_2e8;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  dVar4 = (this->AbsoluteLocalToWorld).M[3][0];
  dVar5 = (this->AbsoluteLocalToWorld).M[3][1];
  dVar6 = (this->AbsoluteLocalToWorld).M[3][2];
  fVar39 = (float)dVar4;
  fVar41 = (float)dVar5;
  local_3a0 = (float)dVar6;
  *(ulonglong *)&(this->Parameters).PositionHigh.field0_0x0 = CONCAT44(fVar41,fVar39);
  (this->Parameters).PositionHigh.field0_0x0._s_0.Z = local_3a0;
  local_394 = (float)(dVar6 - (double)local_3a0);
  dVar6 = (double)local_3a0;
  local_39c = CONCAT44((float)(dVar5 - (double)fVar41),(float)(dVar4 - (double)fVar39));
  local_3a8 = CONCAT44(fVar41,fVar39);
  local_388._s_0.X = (double)fVar39;
  local_388._s_0.Y = (double)fVar41;
  local_388._s_0.Z = dVar6;
  FDFMatrix::MakeToRelativeWorldMatrixDouble
            (&local_1e8,(TVector<double> *)&local_388._s_0,&this->AbsoluteLocalToWorld);
  local_368._s_0.X = (double)fVar39;
  local_368._s_0.Y = (double)fVar41;
  local_368._s_0.Z = dVar6;
  FDFMatrix::MakeClampedToRelativeWorldMatrixDouble
            (&local_268,(TVector<double> *)&local_368._s_0,&this->AbsolutePreviousLocalToWorld);
  UE::Math::TMatrix<double>::Inverse(&local_1e8,&local_168);
  (this->Parameters).LocalToRelativeWorld.M[0][0] = (float)local_1e8.M[0][0];
  (this->Parameters).LocalToRelativeWorld.M[0][1] = (float)local_1e8.M[0][1];
  (this->Parameters).LocalToRelativeWorld.M[0][2] = (float)local_1e8.M[0][2];
  (this->Parameters).LocalToRelativeWorld.M[0][3] = (float)local_1e8.M[0][3];
  (this->Parameters).LocalToRelativeWorld.M[1][0] = (float)local_1e8.M[1][0];
  (this->Parameters).LocalToRelativeWorld.M[1][1] = (float)local_1e8.M[1][1];
  (this->Parameters).LocalToRelativeWorld.M[1][2] = (float)local_1e8.M[1][2];
  (this->Parameters).LocalToRelativeWorld.M[1][3] = (float)local_1e8.M[1][3];
  (this->Parameters).LocalToRelativeWorld.M[2][0] = (float)local_1e8.M[2][0];
  (this->Parameters).LocalToRelativeWorld.M[2][1] = (float)local_1e8.M[2][1];
  (this->Parameters).LocalToRelativeWorld.M[2][2] = (float)local_1e8.M[2][2];
  (this->Parameters).LocalToRelativeWorld.M[2][3] = (float)local_1e8.M[2][3];
  (this->Parameters).LocalToRelativeWorld.M[3][0] = (float)local_1e8.M[3][0];
  (this->Parameters).LocalToRelativeWorld.M[3][1] = (float)local_1e8.M[3][1];
  (this->Parameters).LocalToRelativeWorld.M[3][2] = (float)local_1e8.M[3][2];
  (this->Parameters).LocalToRelativeWorld.M[3][3] = (float)local_1e8.M[3][3];
  (this->Parameters).RelativeWorldToLocal.M[0][0] = (float)local_168.M[0][0];
  (this->Parameters).RelativeWorldToLocal.M[0][1] = (float)local_168.M[0][1];
  (this->Parameters).RelativeWorldToLocal.M[0][2] = (float)local_168.M[0][2];
  (this->Parameters).RelativeWorldToLocal.M[0][3] = (float)local_168.M[0][3];
  (this->Parameters).RelativeWorldToLocal.M[1][0] = (float)local_168.M[1][0];
  (this->Parameters).RelativeWorldToLocal.M[1][1] = (float)local_168.M[1][1];
  (this->Parameters).RelativeWorldToLocal.M[1][2] = (float)local_168.M[1][2];
  (this->Parameters).RelativeWorldToLocal.M[1][3] = (float)local_168.M[1][3];
  (this->Parameters).RelativeWorldToLocal.M[2][0] = (float)local_168.M[2][0];
  (this->Parameters).RelativeWorldToLocal.M[2][1] = (float)local_168.M[2][1];
  (this->Parameters).RelativeWorldToLocal.M[2][2] = (float)local_168.M[2][2];
  (this->Parameters).RelativeWorldToLocal.M[2][3] = (float)local_168.M[2][3];
  (this->Parameters).RelativeWorldToLocal.M[3][0] = (float)local_168.M[3][0];
  (this->Parameters).RelativeWorldToLocal.M[3][1] = (float)local_168.M[3][1];
  (this->Parameters).RelativeWorldToLocal.M[3][2] = (float)local_168.M[3][2];
  (this->Parameters).RelativeWorldToLocal.M[3][3] = (float)local_168.M[3][3];
  VectorMatrixMultiply(&local_e8,&local_168,&local_268);
  (this->Parameters).WorldToPreviousWorld.M[0][0] = (float)local_e8.M[0][0];
  (this->Parameters).WorldToPreviousWorld.M[0][1] = (float)local_e8.M[0][1];
  (this->Parameters).WorldToPreviousWorld.M[0][2] = (float)local_e8.M[0][2];
  (this->Parameters).WorldToPreviousWorld.M[0][3] = (float)local_e8.M[0][3];
  (this->Parameters).WorldToPreviousWorld.M[1][0] = (float)local_e8.M[1][0];
  (this->Parameters).WorldToPreviousWorld.M[1][1] = (float)local_e8.M[1][1];
  (this->Parameters).WorldToPreviousWorld.M[1][2] = (float)local_e8.M[1][2];
  (this->Parameters).WorldToPreviousWorld.M[1][3] = (float)local_e8.M[1][3];
  (this->Parameters).WorldToPreviousWorld.M[2][0] = (float)local_e8.M[2][0];
  (this->Parameters).WorldToPreviousWorld.M[2][1] = (float)local_e8.M[2][1];
  (this->Parameters).WorldToPreviousWorld.M[2][2] = (float)local_e8.M[2][2];
  (this->Parameters).WorldToPreviousWorld.M[2][3] = (float)local_e8.M[2][3];
  (this->Parameters).WorldToPreviousWorld.M[3][0] = (float)local_e8.M[3][0];
  (this->Parameters).WorldToPreviousWorld.M[3][1] = (float)local_e8.M[3][1];
  (this->Parameters).WorldToPreviousWorld.M[3][2] = (float)local_e8.M[3][2];
  (this->Parameters).WorldToPreviousWorld.M[3][3] = (float)local_e8.M[3][3];
  if (this->bHasPreviousLocalToWorld == 0) {
    uVar7 = *(undefined8 *)((this->Parameters).LocalToRelativeWorld.M[0] + 2);
    uVar8 = *(undefined8 *)(this->Parameters).LocalToRelativeWorld.M[1];
    uVar23 = *(undefined8 *)((this->Parameters).LocalToRelativeWorld.M[1] + 2);
    *(undefined8 *)(this->Parameters).PreviousLocalToRelativeWorld.M[0] =
         *(undefined8 *)(this->Parameters).LocalToRelativeWorld.M[0];
    *(undefined8 *)((this->Parameters).PreviousLocalToRelativeWorld.M[0] + 2) = uVar7;
    uVar7 = *(undefined8 *)(this->Parameters).LocalToRelativeWorld.M[2];
    uVar24 = *(undefined8 *)((this->Parameters).LocalToRelativeWorld.M[2] + 2);
    *(undefined8 *)(this->Parameters).PreviousLocalToRelativeWorld.M[1] = uVar8;
    *(undefined8 *)((this->Parameters).PreviousLocalToRelativeWorld.M[1] + 2) = uVar23;
    uVar8 = *(undefined8 *)(this->Parameters).LocalToRelativeWorld.M[3];
    uVar23 = *(undefined8 *)((this->Parameters).LocalToRelativeWorld.M[3] + 2);
    *(undefined8 *)(this->Parameters).PreviousLocalToRelativeWorld.M[2] = uVar7;
    *(undefined8 *)((this->Parameters).PreviousLocalToRelativeWorld.M[2] + 2) = uVar24;
    uVar7 = *(undefined8 *)(this->Parameters).RelativeWorldToLocal.M[0];
    uVar24 = *(undefined8 *)((this->Parameters).RelativeWorldToLocal.M[0] + 2);
    *(undefined8 *)(this->Parameters).PreviousLocalToRelativeWorld.M[3] = uVar8;
    *(undefined8 *)((this->Parameters).PreviousLocalToRelativeWorld.M[3] + 2) = uVar23;
    uVar8 = *(undefined8 *)(this->Parameters).RelativeWorldToLocal.M[1];
    uVar23 = *(undefined8 *)((this->Parameters).RelativeWorldToLocal.M[1] + 2);
    *(undefined8 *)(this->Parameters).PreviousRelativeWorldToLocal.M[0] = uVar7;
    *(undefined8 *)((this->Parameters).PreviousRelativeWorldToLocal.M[0] + 2) = uVar24;
    uVar7 = *(undefined8 *)(this->Parameters).RelativeWorldToLocal.M[2];
    uVar24 = *(undefined8 *)((this->Parameters).RelativeWorldToLocal.M[2] + 2);
    *(undefined8 *)(this->Parameters).PreviousRelativeWorldToLocal.M[1] = uVar8;
    *(undefined8 *)((this->Parameters).PreviousRelativeWorldToLocal.M[1] + 2) = uVar23;
    uVar8 = *(undefined8 *)(this->Parameters).RelativeWorldToLocal.M[3];
    uVar23 = *(undefined8 *)((this->Parameters).RelativeWorldToLocal.M[3] + 2);
    *(undefined8 *)(this->Parameters).PreviousRelativeWorldToLocal.M[2] = uVar7;
    *(undefined8 *)((this->Parameters).PreviousRelativeWorldToLocal.M[2] + 2) = uVar24;
    *(undefined8 *)(this->Parameters).PreviousRelativeWorldToLocal.M[3] = uVar8;
    *(undefined8 *)((this->Parameters).PreviousRelativeWorldToLocal.M[3] + 2) = uVar23;
  }
  else {
    (this->Parameters).PreviousLocalToRelativeWorld.M[0][0] = (float)local_268.M[0][0];
    (this->Parameters).PreviousLocalToRelativeWorld.M[0][1] = (float)local_268.M[0][1];
    (this->Parameters).PreviousLocalToRelativeWorld.M[0][2] = (float)local_268.M[0][2];
    (this->Parameters).PreviousLocalToRelativeWorld.M[0][3] = (float)local_268.M[0][3];
    (this->Parameters).PreviousLocalToRelativeWorld.M[1][0] = (float)local_268.M[1][0];
    (this->Parameters).PreviousLocalToRelativeWorld.M[1][1] = (float)local_268.M[1][1];
    (this->Parameters).PreviousLocalToRelativeWorld.M[1][2] = (float)local_268.M[1][2];
    (this->Parameters).PreviousLocalToRelativeWorld.M[1][3] = (float)local_268.M[1][3];
    (this->Parameters).PreviousLocalToRelativeWorld.M[2][0] = (float)local_268.M[2][0];
    (this->Parameters).PreviousLocalToRelativeWorld.M[2][1] = (float)local_268.M[2][1];
    (this->Parameters).PreviousLocalToRelativeWorld.M[2][2] = (float)local_268.M[2][2];
    (this->Parameters).PreviousLocalToRelativeWorld.M[2][3] = (float)local_268.M[2][3];
    (this->Parameters).PreviousLocalToRelativeWorld.M[3][0] = (float)local_268.M[3][0];
    (this->Parameters).PreviousLocalToRelativeWorld.M[3][1] = (float)local_268.M[3][1];
    (this->Parameters).PreviousLocalToRelativeWorld.M[3][2] = (float)local_268.M[3][2];
    (this->Parameters).PreviousLocalToRelativeWorld.M[3][3] = (float)local_268.M[3][3];
    pTVar30 = UE::Math::TMatrix<double>::Inverse(&local_268,&local_2e8);
    dVar4 = pTVar30->M[1][2];
    dVar5 = pTVar30->M[1][3];
    dVar6 = pTVar30->M[1][0];
    dVar11 = pTVar30->M[1][1];
    dVar12 = pTVar30->M[2][2];
    dVar13 = pTVar30->M[2][3];
    dVar14 = pTVar30->M[2][0];
    dVar15 = pTVar30->M[2][1];
    dVar16 = pTVar30->M[3][2];
    dVar17 = pTVar30->M[3][3];
    dVar18 = pTVar30->M[3][0];
    dVar19 = pTVar30->M[3][1];
    dVar20 = pTVar30->M[0][2];
    dVar21 = pTVar30->M[0][3];
    dVar22 = pTVar30->M[0][1];
    (this->Parameters).PreviousRelativeWorldToLocal.M[0][0] = (float)pTVar30->M[0][0];
    (this->Parameters).PreviousRelativeWorldToLocal.M[0][1] = (float)dVar22;
    (this->Parameters).PreviousRelativeWorldToLocal.M[0][2] = (float)dVar20;
    (this->Parameters).PreviousRelativeWorldToLocal.M[0][3] = (float)dVar21;
    (this->Parameters).PreviousRelativeWorldToLocal.M[1][0] = (float)dVar6;
    (this->Parameters).PreviousRelativeWorldToLocal.M[1][1] = (float)dVar11;
    (this->Parameters).PreviousRelativeWorldToLocal.M[1][2] = (float)dVar4;
    (this->Parameters).PreviousRelativeWorldToLocal.M[1][3] = (float)dVar5;
    (this->Parameters).PreviousRelativeWorldToLocal.M[2][0] = (float)dVar14;
    (this->Parameters).PreviousRelativeWorldToLocal.M[2][1] = (float)dVar15;
    (this->Parameters).PreviousRelativeWorldToLocal.M[2][2] = (float)dVar12;
    (this->Parameters).PreviousRelativeWorldToLocal.M[2][3] = (float)dVar13;
    (this->Parameters).PreviousRelativeWorldToLocal.M[3][0] = (float)dVar18;
    (this->Parameters).PreviousRelativeWorldToLocal.M[3][1] = (float)dVar19;
    (this->Parameters).PreviousRelativeWorldToLocal.M[3][2] = (float)dVar16;
    (this->Parameters).PreviousRelativeWorldToLocal.M[3][3] = (float)dVar17;
  }
  if (`public:_class_FPrimitiveUniformShaderParameters_const&___ptr64___cdecl_FPrimitiveUniformShaderParametersBuilder::Build(void)___ptr64'
      ::__l2::CVarPrimitiveHasTileOffsetData == (TConsoleVariableData<int> *)0x0) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("Singleton != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x4fb,L""), bVar28)) {
      pcVar10 = (code *)swi(3);
      pFVar31 = (FPrimitiveUniformShaderParameters *)(*pcVar10)();
      return pFVar31;
    }
    plVar32 = (longlong *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.PrimitiveHasTileOffsetData",1);
    if (plVar32 == (longlong *)0x0) {
      `public:_class_FPrimitiveUniformShaderParameters_const&___ptr64___cdecl_FPrimitiveUniformShaderParametersBuilder::Build(void)___ptr64'
      ::__l2::CVarPrimitiveHasTileOffsetData = (TConsoleVariableData<int> *)0x0;
    }
    else {
      `public:_class_FPrimitiveUniformShaderParameters_const&___ptr64___cdecl_FPrimitiveUniformShaderParametersBuilder::Build(void)___ptr64'
      ::__l2::CVarPrimitiveHasTileOffsetData =
           (TConsoleVariableData<int> *)(**(code **)(*plVar32 + 0x68))();
      if (`public:_class_FPrimitiveUniformShaderParameters_const&___ptr64___cdecl_FPrimitiveUniformShaderParametersBuilder::Build(void)___ptr64'
          ::__l2::CVarPrimitiveHasTileOffsetData != (TConsoleVariableData<int> *)0x0)
      goto LAB_144900847;
    }
    bVar28 = false;
    goto LAB_144900867;
  }
LAB_144900847:
  pTVar27 = `public:_class_FPrimitiveUniformShaderParameters_const&___ptr64___cdecl_FPrimitiveUniformShaderParametersBuilder::Build(void)___ptr64'
            ::__l2::CVarPrimitiveHasTileOffsetData;
  bVar28 = IsInParallelGameThread();
  if (bVar28) {
LAB_14490085e:
    lVar33 = 0;
  }
  else {
    bVar28 = IsInGameThread();
    lVar33 = 4;
    if (bVar28) goto LAB_14490085e;
  }
  bVar28 = *(int *)((longlong)pTVar27->ShadowedValue + lVar33) != 0;
LAB_144900867:
  uVar34 = 0;
  if (bVar28) {
    TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
              ((TLargeWorldRenderPosition<double> *)&local_348._s_0,
               &this->AbsoluteActorWorldPosition);
    (this->Parameters).ActorWorldPositionHigh.field0_0x0._s_0.X = (float)local_348._s_0.X;
    (this->Parameters).ActorWorldPositionHigh.field0_0x0._s_0.Y = (float)local_348._s_0.Y;
    (this->Parameters).ActorWorldPositionHigh.field0_0x0._s_0.Z = (float)local_348._s_0.Z;
    (this->Parameters).ActorWorldPositionLow.field0_0x0._s_0.X = (float)local_330;
    (this->Parameters).ActorWorldPositionLow.field0_0x0._s_0.Y = (float)local_328;
    (this->Parameters).ActorWorldPositionLow.field0_0x0._s_0.Z = (float)local_320;
    TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
              ((TLargeWorldRenderPosition<double> *)&local_318._s_0,
               &this->AbsoluteObjectWorldPosition);
    fVar39 = this->ObjectRadius;
    (this->Parameters).ObjectWorldPositionHighAndRadius.field0_0x0._s_0.X = (float)local_318._s_0.X;
    (this->Parameters).ObjectWorldPositionHighAndRadius.field0_0x0._s_0.Y = (float)local_318._s_0.Y;
    (this->Parameters).ObjectWorldPositionHighAndRadius.field0_0x0._s_0.Z = (float)local_318._s_0.Z;
    (this->Parameters).ObjectWorldPositionHighAndRadius.field0_0x0._s_0.W = fVar39;
    (this->Parameters).ObjectWorldPositionLow.field0_0x0._s_0.X = (float)local_300;
    (this->Parameters).ObjectWorldPositionLow.field0_0x0._s_0.Y = (float)local_2f8;
  }
  else {
    dVar4 = (this->AbsoluteActorWorldPosition).field0_0x0._s_0.X;
    dVar5 = (this->AbsoluteActorWorldPosition).field0_0x0._s_0.Y;
    dVar6 = (this->AbsoluteActorWorldPosition).field0_0x0._s_0.Z;
    fVar41 = (float)dVar4;
    fVar39 = (float)dVar5;
    fVar42 = (float)dVar6;
    *(ulonglong *)&(this->Parameters).ActorWorldPositionHigh.field0_0x0 = CONCAT44(fVar39,fVar41);
    (this->Parameters).ActorWorldPositionHigh.field0_0x0._s_0.Z = fVar42;
    *(ulonglong *)&(this->Parameters).ActorWorldPositionLow.field0_0x0 =
         CONCAT44((float)(dVar5 - (double)fVar39),(float)(dVar4 - (double)fVar41));
    (this->Parameters).ActorWorldPositionLow.field0_0x0._s_0.Z = (float)(dVar6 - (double)fVar42);
    dVar4 = (this->AbsoluteObjectWorldPosition).field0_0x0._s_0.X;
    dVar5 = (this->AbsoluteObjectWorldPosition).field0_0x0._s_0.Y;
    local_2f0 = (this->AbsoluteObjectWorldPosition).field0_0x0._s_0.Z;
    fVar40 = (float)dVar4;
    fVar42 = (float)dVar5;
    fVar41 = (float)local_2f0;
    local_2f0 = local_2f0 - (double)fVar41;
    fVar39 = this->ObjectRadius;
    (this->Parameters).ObjectWorldPositionHighAndRadius.field0_0x0._s_0.X = fVar40;
    (this->Parameters).ObjectWorldPositionHighAndRadius.field0_0x0._s_0.Y = fVar42;
    (this->Parameters).ObjectWorldPositionHighAndRadius.field0_0x0._s_0.Z = fVar41;
    (this->Parameters).ObjectWorldPositionHighAndRadius.field0_0x0._s_0.W = fVar39;
    *(ulonglong *)&(this->Parameters).ObjectWorldPositionLow.field0_0x0 =
         CONCAT44((float)(dVar5 - (double)fVar42),(float)(dVar4 - (double)fVar40));
  }
  (this->Parameters).ObjectWorldPositionLow.field0_0x0._s_0.Z = (float)local_2f0;
  fVar39 = __real_3f000000;
  puVar1 = &this->field_0x454;
  uVar9 = *(undefined4 *)puVar1;
  if (this->bHasInstanceLocalBounds == 0) {
    uVar7 = *(undefined8 *)&(this->Parameters).LocalObjectBoundsMax.field0_0x0;
    fVar36 = (float)uVar7;
    uVar8 = *(undefined8 *)&(this->Parameters).LocalObjectBoundsMin.field0_0x0;
    fVar40 = (float)uVar8;
    fVar41 = (this->Parameters).LocalObjectBoundsMin.field0_0x0._s_0.Z;
    fVar42 = (this->Parameters).LocalObjectBoundsMax.field0_0x0._s_0.Z;
    (this->Parameters).InstanceLocalBoundsCenter.field0_0x0._s_0.X =
         (fVar36 + fVar40) * __real_3f000000;
    fStack_3c8 = (float)((ulonglong)uVar7 >> 0x20);
    fStack_3d4 = (float)((ulonglong)uVar8 >> 0x20);
    (this->Parameters).InstanceLocalBoundsCenter.field0_0x0._s_0.Y =
         (fStack_3c8 + fStack_3d4) * fVar39;
    (this->Parameters).InstanceLocalBoundsCenter.field0_0x0._s_0.Z = (fVar42 + fVar41) * fVar39;
    (this->Parameters).InstanceLocalBoundsExtent.field0_0x0._s_0.X = (fVar36 - fVar40) * fVar39;
    (this->Parameters).InstanceLocalBoundsExtent.field0_0x0._s_0.Y =
         (fStack_3c8 - fStack_3d4) * fVar39;
    (this->Parameters).InstanceLocalBoundsExtent.field0_0x0._s_0.Z = (fVar42 - fVar41) * fVar39;
  }
  if (ZPULL(uVar9,0xd,1) == 0) {
    fVar39 = (this->Parameters).LocalObjectBoundsMin.field0_0x0._s_0.Z;
    *(undefined8 *)&(this->Parameters).PreSkinnedLocalBoundsMin.field0_0x0 =
         *(undefined8 *)&(this->Parameters).LocalObjectBoundsMin.field0_0x0;
    uVar7 = *(undefined8 *)&(this->Parameters).LocalObjectBoundsMax.field0_0x0;
    (this->Parameters).PreSkinnedLocalBoundsMin.field0_0x0._s_0.Z = fVar39;
    fVar39 = (this->Parameters).LocalObjectBoundsMax.field0_0x0._s_0.Z;
    *(undefined8 *)&(this->Parameters).PreSkinnedLocalBoundsMax.field0_0x0 = uVar7;
    (this->Parameters).PreSkinnedLocalBoundsMax.field0_0x0._s_0.Z = fVar39;
  }
  fVar42 = __real_3f800000;
  fVar39 = (this->Parameters).LocalToRelativeWorld.M[2][0];
  fVar41 = (this->Parameters).LocalToRelativeWorld.M[2][1];
  uVar37 = (this->Parameters).LocalToRelativeWorld.M[2][2];
  fVar40 = fVar41 * fVar41 + fVar39 * fVar39 + (float)uVar37 * (float)uVar37;
  if (fVar40 != __real_3f800000) {
    if (__real_322bcc77 <= fVar40) {
      fVar36 = __real_3f800000 / SQRT(fVar40);
      uVar37 = fVar36 * (float)uVar37;
      fVar39 = fVar36 * fVar39;
      fVar41 = fVar36 * fVar41;
    }
    else {
      fVar39 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      fVar41 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      uVar37 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  *(ulonglong *)&(this->Parameters).ObjectOrientation.field0_0x0 = CONCAT44(fVar41,fVar39);
  (this->Parameters).ObjectOrientation.field0_0x0._s_0.Z = (float)uVar37;
  fVar39 = (this->Parameters).LocalToRelativeWorld.M[1][1];
  fVar41 = (this->Parameters).LocalToRelativeWorld.M[0][0];
  fVar36 = (this->Parameters).LocalToRelativeWorld.M[1][2];
  fVar38 = (this->Parameters).LocalToRelativeWorld.M[0][2];
  fVar2 = (this->Parameters).LocalToRelativeWorld.M[1][0];
  fVar3 = (this->Parameters).LocalToRelativeWorld.M[0][1];
  fVar38 = SQRT(fVar3 * fVar3 + fVar41 * fVar41 + fVar38 * fVar38);
  fVar40 = SQRT(fVar40);
  fVar41 = SQRT(fVar39 * fVar39 + fVar2 * fVar2 + fVar36 * fVar36);
  (this->Parameters).NonUniformScale.field0_0x0._s_0.X = fVar38;
  (this->Parameters).NonUniformScale.field0_0x0._s_0.Y = fVar41;
  (this->Parameters).NonUniformScale.field0_0x0._s_0.Z = fVar40;
  fVar39 = fVar41;
  if (fVar41 <= fVar38) {
    fVar39 = fVar38;
  }
  if (fVar39 <= fVar40) {
    fVar39 = fVar40;
  }
  (this->Parameters).NonUniformScale.field0_0x0._s_0.W = fVar39;
  if (fVar40 <= __real_38d1b717) {
    fVar40 = 0.0;
  }
  else {
    fVar40 = fVar42 / fVar40;
  }
  if (fVar41 <= __real_38d1b717) {
    fVar41 = 0.0;
  }
  else {
    fVar41 = fVar42 / fVar41;
  }
  if (fVar38 <= __real_38d1b717) {
    fVar42 = 0.0;
  }
  else {
    fVar42 = fVar42 / fVar38;
  }
  (this->Parameters).InvNonUniformScale.field0_0x0._s_0.X = fVar42;
  (this->Parameters).InvNonUniformScale.field0_0x0._s_0.Y = fVar41;
  (this->Parameters).InvNonUniformScale.field0_0x0._s_0.Z = fVar40;
  uVar35 = (this->Parameters).SingleCaptureIndex;
  uVar37 = *(undefined4 *)&this->field_0x458;
  uVar29 = uVar34;
  if (0 < (int)uVar35) {
    uVar29 = uVar35;
  }
  (this->Parameters).SingleCaptureIndex = uVar29;
  uVar35 = 4;
  if (this->bUseSingleSampleShadowFromStationaryLights != 1 || this->bUseVolumetricLightmap != 1) {
    uVar35 = uVar34;
  }
  uVar35 = (((uint)uVar9 >> 1 & 0xc00 | uVar9 & 0x10) >> 2 | uVar9 & 0x40) >> 1 | uVar35 |
           (uVar9 & 0x80) << 8 | uVar9 & 8;
  (this->Parameters).Flags = uVar35;
  fVar39 = (this->Parameters).LocalToRelativeWorld.M[1][1];
  fVar41 = (this->Parameters).LocalToRelativeWorld.M[1][2];
  fVar42 = (this->Parameters).LocalToRelativeWorld.M[0][1];
  fVar40 = (this->Parameters).LocalToRelativeWorld.M[0][2];
  if (((fVar39 * (this->Parameters).LocalToRelativeWorld.M[2][2] -
       fVar41 * (this->Parameters).LocalToRelativeWorld.M[2][1]) *
       (this->Parameters).LocalToRelativeWorld.M[0][0] -
      (fVar42 * (this->Parameters).LocalToRelativeWorld.M[2][2] -
      fVar40 * (this->Parameters).LocalToRelativeWorld.M[2][1]) *
      (this->Parameters).LocalToRelativeWorld.M[1][0]) +
      (fVar42 * fVar41 - fVar40 * fVar39) * (this->Parameters).LocalToRelativeWorld.M[2][0] < 0.0) {
    uVar34 = 0x40;
  }
  (this->Parameters).Flags =
       uVar34 | (((uint)uVar9 >> 3 & 0xf000000 | uVar9 & 0x100) >> 3 | uVar9 & 0x8000) >> 5 |
       (((uVar37 & 0x3fc) * 2 | uVar37 & 2) << 9 | uVar9 & 6) << 0xb | ZPULL(uVar37,0,1) << 0x16 |
       (uVar9 & 1) << 0xb | uVar9 & 0x200 | uVar9 & 0x4000 | uVar35;
  (this->Parameters).VisibilityFlags =
       (((uint)uVar9 >> 0xd & 0x2000 | uVar9 & 0x800000) >> 4 | uVar9 & 0x400) >> 9 |
       (uint)uVar9 >> 0xf & 0xf4 | (uint)uVar9 >> 0x10 & 0x300;
  return &this->Parameters;
}

