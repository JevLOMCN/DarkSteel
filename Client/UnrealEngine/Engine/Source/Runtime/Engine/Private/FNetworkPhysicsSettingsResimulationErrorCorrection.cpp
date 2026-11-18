// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1482cea50

UScriptStruct * __cdecl FNetworkPhysicsSettingsResimulationErrorCorrection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection
                         ,(UObject *)pUVar1,L"NetworkPhysicsSettingsResimulationErrorCorrection");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection.
         OuterSingleton;
}

// ApplySettings_External @ 1482e9600

void __thiscall
FNetworkPhysicsSettingsResimulationErrorCorrection::ApplySettings_External
          (FNetworkPhysicsSettingsResimulationErrorCorrection *this,FPhysicsObject *param_1)

{
  EPhysicsProxyType EVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  IPhysicsProxyBase *pIVar4;
  undefined8 *puVar5;
  FProxyTimestampBase *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  double dVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  FChaosScene *pFVar13;
  TGeometryParticle<double,3> *pTVar14;
  undefined8 *puVar15;
  FProxyTimestampBase *pFVar16;
  FErrorInterpolationSettings *pFVar17;
  FProxyInterpolationError *this_00;
  FPhysicsObject *local_res10;
  undefined4 uStack_3c;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_38;
  FScopedSceneLock_Chaos local_28;
  FReadPhysicsObjectInterface<0> local_10 [8];
  
  if (param_1 == (FPhysicsObject *)0x0) {
    return;
  }
  if (this->bOverrideResimErrorInterpolationSettings == 0) {
    return;
  }
  local_38.DataPtr = &local_res10;
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = 1;
  local_res10 = param_1;
  pFVar13 = PhysicsObjectPhysicsCoreInterface::GetScene(&local_38);
  FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_28,pFVar13,Write);
  pTVar14 = Chaos::FReadPhysicsObjectInterface<0>::GetParticle(local_10,local_res10);
  if ((pTVar14 == (TGeometryParticle<double,3> *)0x0) ||
     (pIVar4 = pTVar14->Proxy, pIVar4 == (IPhysicsProxyBase *)0x0)) goto LAB_1482e9a4e;
  EVar1 = pIVar4->Type;
  if (EVar1 == GeometryCollectionType) {
    pFVar16 = pIVar4[0x21].SyncTimestamp.Object;
    if (pFVar16 == (FProxyTimestampBase *)0x0) {
      pFVar16 = ::operator_new(0xa0);
      if (pFVar16 == (FProxyTimestampBase *)0x0) {
LAB_1482e99cc:
        pFVar16 = (FProxyTimestampBase *)0x0;
      }
      else {
        *(undefined4 *)(pFVar16 + 8) = 0xffffffff;
        *(undefined8 *)(pFVar16 + 0xc) = 0;
        *(undefined8 *)(pFVar16 + 0x14) = 0;
LAB_1482e995a:
        *(undefined ***)pFVar16 = &___7FProxyInterpolationError__6B_;
        uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        *(double *)(pFVar16 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)(pFVar16 + 0x28) = uVar8;
        *(double *)(pFVar16 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        *(double *)(pFVar16 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)(pFVar16 + 0x40) = uVar8;
        *(double *)(pFVar16 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dVar9 = UE::Math::TQuat<double>::Identity.Y;
        *(double *)(pFVar16 + 0x50) = UE::Math::TQuat<double>::Identity.X;
        *(double *)(pFVar16 + 0x58) = dVar9;
        uVar8 = CONCAT44(UE::Math::TQuat<double>::Identity.W._4_4_,
                         UE::Math::TQuat<double>::Identity.W._0_4_);
        *(ulonglong *)(pFVar16 + 0x60) =
             CONCAT44(UE::Math::TQuat<double>::Identity.Z._4_4_,
                      UE::Math::TQuat<double>::Identity.Z._0_4_);
        *(undefined8 *)(pFVar16 + 0x68) = uVar8;
        dVar9 = UE::Math::TQuat<double>::Identity.Y;
        *(double *)(pFVar16 + 0x70) = UE::Math::TQuat<double>::Identity.X;
        *(double *)(pFVar16 + 0x78) = dVar9;
        uVar10 = UE::Math::TQuat<double>::Identity.W._4_4_;
        uVar3 = UE::Math::TQuat<double>::Identity.W._0_4_;
        uVar2 = UE::Math::TQuat<double>::Identity.Z._4_4_;
        *(undefined4 *)(pFVar16 + 0x80) = UE::Math::TQuat<double>::Identity.Z._0_4_;
        *(undefined4 *)(pFVar16 + 0x84) = uVar2;
        *(undefined4 *)(pFVar16 + 0x88) = uVar3;
        *(undefined4 *)(pFVar16 + 0x8c) = uVar10;
        *(undefined8 *)(pFVar16 + 0x90) = 0;
      }
      pFVar6 = pIVar4[0x21].SyncTimestamp.Object;
      pIVar4[0x21].SyncTimestamp.Object = pFVar16;
      if (pFVar6 != (FProxyTimestampBase *)0x0) {
        (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
      }
    }
    else {
      iVar12 = (**(code **)(*(longlong *)pFVar16 + 8))();
      if (iVar12 != 1) {
        pFVar16 = pIVar4[0x21].SyncTimestamp.Object;
        uVar2 = *(undefined4 *)(pFVar16 + 0xc);
        uVar3 = *(undefined4 *)(pFVar16 + 8);
        pFVar16 = ::operator_new(0xa0);
        if (pFVar16 == (FProxyTimestampBase *)0x0) goto LAB_1482e99cc;
        *(undefined4 *)(pFVar16 + 8) = uVar3;
        *(undefined4 *)(pFVar16 + 0xc) = uVar2;
        *(undefined8 *)(pFVar16 + 0x10) = 0;
        *(undefined4 *)(pFVar16 + 0x18) = 0;
        goto LAB_1482e995a;
      }
    }
    this_00 = (FProxyInterpolationError *)pIVar4[0x21].SyncTimestamp.Object;
  }
  else if (EVar1 == SingleParticleProxy) {
    pFVar16 = pIVar4[1].SyncTimestamp.Object;
    if (pFVar16 == (FProxyTimestampBase *)0x0) {
      pFVar16 = ::operator_new(0xa0);
      if (pFVar16 == (FProxyTimestampBase *)0x0) {
LAB_1482e98cb:
        pFVar16 = (FProxyTimestampBase *)0x0;
      }
      else {
        *(undefined4 *)(pFVar16 + 8) = 0xffffffff;
        *(undefined8 *)(pFVar16 + 0xc) = 0;
        *(undefined8 *)(pFVar16 + 0x14) = 0;
LAB_1482e9859:
        *(undefined ***)pFVar16 = &___7FProxyInterpolationError__6B_;
        uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        *(double *)(pFVar16 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)(pFVar16 + 0x28) = uVar8;
        *(double *)(pFVar16 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        *(double *)(pFVar16 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)(pFVar16 + 0x40) = uVar8;
        *(double *)(pFVar16 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dVar9 = UE::Math::TQuat<double>::Identity.Y;
        *(double *)(pFVar16 + 0x50) = UE::Math::TQuat<double>::Identity.X;
        *(double *)(pFVar16 + 0x58) = dVar9;
        uVar8 = CONCAT44(UE::Math::TQuat<double>::Identity.W._4_4_,
                         UE::Math::TQuat<double>::Identity.W._0_4_);
        *(ulonglong *)(pFVar16 + 0x60) =
             CONCAT44(UE::Math::TQuat<double>::Identity.Z._4_4_,
                      UE::Math::TQuat<double>::Identity.Z._0_4_);
        *(undefined8 *)(pFVar16 + 0x68) = uVar8;
        dVar9 = UE::Math::TQuat<double>::Identity.Y;
        *(double *)(pFVar16 + 0x70) = UE::Math::TQuat<double>::Identity.X;
        *(double *)(pFVar16 + 0x78) = dVar9;
        uVar10 = UE::Math::TQuat<double>::Identity.W._4_4_;
        uVar3 = UE::Math::TQuat<double>::Identity.W._0_4_;
        uVar2 = UE::Math::TQuat<double>::Identity.Z._4_4_;
        *(undefined4 *)(pFVar16 + 0x80) = UE::Math::TQuat<double>::Identity.Z._0_4_;
        *(undefined4 *)(pFVar16 + 0x84) = uVar2;
        *(undefined4 *)(pFVar16 + 0x88) = uVar3;
        *(undefined4 *)(pFVar16 + 0x8c) = uVar10;
        *(undefined8 *)(pFVar16 + 0x90) = 0;
      }
      pFVar6 = pIVar4[1].SyncTimestamp.Object;
      pIVar4[1].SyncTimestamp.Object = pFVar16;
      if (pFVar6 != (FProxyTimestampBase *)0x0) {
        (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
      }
    }
    else {
      iVar12 = (**(code **)(*(longlong *)pFVar16 + 8))();
      if (iVar12 != 1) {
        pFVar16 = pIVar4[1].SyncTimestamp.Object;
        uVar2 = *(undefined4 *)(pFVar16 + 0xc);
        uVar3 = *(undefined4 *)(pFVar16 + 8);
        pFVar16 = ::operator_new(0xa0);
        if (pFVar16 == (FProxyTimestampBase *)0x0) goto LAB_1482e98cb;
        *(undefined4 *)(pFVar16 + 8) = uVar3;
        *(undefined4 *)(pFVar16 + 0xc) = uVar2;
        *(undefined8 *)(pFVar16 + 0x10) = 0;
        *(undefined4 *)(pFVar16 + 0x18) = 0;
        goto LAB_1482e9859;
      }
    }
    this_00 = (FProxyInterpolationError *)pIVar4[1].SyncTimestamp.Object;
  }
  else {
    if (EVar1 != ClusterUnionProxy) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3275787228994863399>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsSettingsComponent.cpp"
                          ,0x127,"false");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      goto LAB_1482e9a4e;
    }
    if (*(longlong **)&pIVar4[5].InitializedOnStep == (longlong *)0x0) {
      puVar15 = ::operator_new(0xa0);
      if (puVar15 == (undefined8 *)0x0) {
LAB_1482e97c7:
        puVar15 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar15 + 1) = 0xffffffff;
        *(undefined8 *)((longlong)puVar15 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar15 + 0x14) = 0;
LAB_1482e9755:
        *puVar15 = &___7FProxyInterpolationError__6B_;
        uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        puVar15[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        puVar15[5] = uVar8;
        puVar15[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        puVar15[7] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        puVar15[8] = uVar8;
        puVar15[9] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dVar9 = UE::Math::TQuat<double>::Identity.Y;
        puVar15[10] = UE::Math::TQuat<double>::Identity.X;
        puVar15[0xb] = dVar9;
        uVar8 = CONCAT44(UE::Math::TQuat<double>::Identity.W._4_4_,
                         UE::Math::TQuat<double>::Identity.W._0_4_);
        puVar15[0xc] = CONCAT44(UE::Math::TQuat<double>::Identity.Z._4_4_,
                                UE::Math::TQuat<double>::Identity.Z._0_4_);
        puVar15[0xd] = uVar8;
        dVar9 = UE::Math::TQuat<double>::Identity.Y;
        puVar15[0xe] = UE::Math::TQuat<double>::Identity.X;
        puVar15[0xf] = dVar9;
        uVar10 = UE::Math::TQuat<double>::Identity.W._4_4_;
        uVar3 = UE::Math::TQuat<double>::Identity.W._0_4_;
        uVar2 = UE::Math::TQuat<double>::Identity.Z._4_4_;
        *(undefined4 *)(puVar15 + 0x10) = UE::Math::TQuat<double>::Identity.Z._0_4_;
        *(undefined4 *)((longlong)puVar15 + 0x84) = uVar2;
        *(undefined4 *)(puVar15 + 0x11) = uVar3;
        *(undefined4 *)((longlong)puVar15 + 0x8c) = uVar10;
        puVar15[0x12] = 0;
      }
      puVar5 = *(undefined8 **)&pIVar4[5].InitializedOnStep;
      *(undefined8 **)&pIVar4[5].InitializedOnStep = puVar15;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    else {
      iVar12 = (**(code **)(**(longlong **)&pIVar4[5].InitializedOnStep + 8))();
      if (iVar12 != 1) {
        uVar2 = *(undefined4 *)(*(longlong *)&pIVar4[5].InitializedOnStep + 0xc);
        uVar3 = *(undefined4 *)(*(longlong *)&pIVar4[5].InitializedOnStep + 8);
        puVar15 = ::operator_new(0xa0);
        if (puVar15 == (undefined8 *)0x0) goto LAB_1482e97c7;
        *(undefined4 *)(puVar15 + 1) = uVar3;
        *(undefined4 *)((longlong)puVar15 + 0xc) = uVar2;
        puVar15[2] = 0;
        *(undefined4 *)(puVar15 + 3) = 0;
        goto LAB_1482e9755;
      }
    }
    this_00 = *(FProxyInterpolationError **)&pIVar4[5].InitializedOnStep;
  }
  if (this_00 != (FProxyInterpolationError *)0x0) {
    pFVar17 = FProxyInterpolationError::GetOrCreateErrorInterpolationSettings(this_00);
    pFVar17->ErrorCorrectionDuration = this->ResimErrorCorrectionDuration;
    pFVar17->MaximumErrorCorrectionBeforeSnapping = this->ResimErrorMaximumDistanceBeforeSnapping;
    pFVar17->MaximumErrorCorrectionDesyncTimeBeforeSnapping =
         this->ResimErrorMaximumDesyncTimeBeforeSnapping;
    pFVar17->ErrorDirectionalDecayMultiplier = this->ResimErrorDirectionalDecayMultiplier;
    pFVar17->bApplyExponentialDecay = this->bRenderInterpApplyExponentialDecay;
    pFVar17->ExponentialDecayLinearHalfLife = this->RenderInterpExponentialDecayLinearHalfLife;
    pFVar17->ExponentialDecayAngularHalfLife = this->RenderInterpExponentialDecayAngularHalfLife;
    pFVar17->MinimumLinearThreshold = this->RenderInterpMinimumLinearThreshold;
    pFVar17->MinimumAngularThreshold = this->RenderInterpMinimumAngularThreshold;
  }
LAB_1482e9a4e:
  FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  return;
}

