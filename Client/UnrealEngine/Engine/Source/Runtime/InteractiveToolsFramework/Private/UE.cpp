// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 121

// Construct<FGizmoVec2ParameterChange> @ 14962a630

void __cdecl UE::CoreUObject::Private::Construct<FGizmoVec2ParameterChange>(void *param_1)

{
  TVector2<double> TVar1;
  
  *(TVector2<double>_u_0 *)param_1 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(TVector2<double>_u_0 *)param_1 = TVar1.field0_0x0;
  return;
}

// ConstructForTests<FGizmoVec2ParameterChange> @ 14962a660

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGizmoVec2ParameterChange>(void *param_1)

{
  TVector2<double> TVar1;
  
  *(TVector2<double>_u_0 *)param_1 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(TVector2<double>_u_0 *)param_1 = TVar1.field0_0x0;
  return;
}

// Destruct<FGizmoVec2ParameterChange> @ 14962a690

void __cdecl UE::CoreUObject::Private::Destruct<FGizmoVec2ParameterChange>(void *param_1)

{
  return;
}

// Copy<FGizmoVec2ParameterChange> @ 14962a6a0

bool __cdecl
UE::CoreUObject::Private::Copy<FGizmoVec2ParameterChange>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CreateGizmoViaSimpleBuilder<UFreePositionSubGizmo> @ 14962f6e0

UFreePositionSubGizmo * __cdecl
UE::GizmoUtil::CreateGizmoViaSimpleBuilder<UFreePositionSubGizmo>
          (UInteractiveGizmoManager *param_1,FString *param_2,void *param_3)

{
  int iVar1;
  UFreePositionSubGizmo *pUVar2;
  UClass *pUVar3;
  UClass *local_res20;
  
  local_res20 = UFreePositionSubGizmo::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar2 = (UFreePositionSubGizmo *)
           CreateGizmoViaSimpleBuilder
                     (param_1,(TSubclassOf<UInteractiveGizmo>)&local_res20,param_2,param_3);
  if (pUVar2 != (UFreePositionSubGizmo *)0x0) {
    pUVar3 = UFreePositionSubGizmo::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UFreePositionSubGizmo *)0x0;
}

// CreateGizmoViaSimpleBuilder<UFreeRotationSubGizmo> @ 14962f780

UFreeRotationSubGizmo * __cdecl
UE::GizmoUtil::CreateGizmoViaSimpleBuilder<UFreeRotationSubGizmo>
          (UInteractiveGizmoManager *param_1,FString *param_2,void *param_3)

{
  int iVar1;
  UFreeRotationSubGizmo *pUVar2;
  UClass *pUVar3;
  UClass *local_res20;
  
  local_res20 = UFreeRotationSubGizmo::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar2 = (UFreeRotationSubGizmo *)
           CreateGizmoViaSimpleBuilder
                     (param_1,(TSubclassOf<UInteractiveGizmo>)&local_res20,param_2,param_3);
  if (pUVar2 != (UFreeRotationSubGizmo *)0x0) {
    pUVar3 = UFreeRotationSubGizmo::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UFreeRotationSubGizmo *)0x0;
}

// PlaneAngleSignedR<double> @ 149638130

double __cdecl
UE::Geometry::VectorUtil::PlaneAngleSignedR<double>
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar13;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  dVar9 = (param_3->field0_0x0)._s_0.Z;
  dVar17 = (param_1->field0_0x0)._s_0.X;
  dVar14 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar15 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar16 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  uVar8 = SUB84(__real_3ff0000000000000,0);
  uVar13 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar6 = dVar16 * dVar4 + dVar17 * dVar2 + dVar1 * dVar9;
  dVar17 = dVar17 - dVar6 * dVar2;
  dVar1 = dVar1 - dVar6 * dVar9;
  dVar16 = dVar16 - dVar6 * dVar4;
  dVar6 = dVar15 * dVar4 + dVar14 * dVar2 + dVar3 * dVar9;
  dVar3 = dVar3 - dVar6 * dVar9;
  dVar14 = dVar14 - dVar6 * dVar2;
  dVar15 = dVar15 - dVar6 * dVar4;
  auVar10._0_8_ = dVar17 * dVar17;
  auVar10._8_8_ = 0;
  uVar18 = 0;
  uVar19 = 0;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar16 * dVar16 + auVar10._0_8_ + dVar1 * dVar1;
  auVar11 = sqrtpd(auVar10,auVar11);
  if (auVar11._0_8_ <= 0.0) {
    dVar1 = 0.0;
    dVar9 = 0.0;
    dVar17 = 0.0;
  }
  else {
    dVar9 = __real_3ff0000000000000 / auVar11._0_8_;
    dVar1 = dVar9 * dVar1;
    dVar17 = dVar9 * dVar17;
    dVar9 = dVar9 * dVar16;
  }
  auVar12._0_8_ = dVar15 * dVar15;
  auVar12._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar14 * dVar14 + auVar12._0_8_ + dVar3 * dVar3;
  auVar11 = sqrtpd(auVar12,auVar5);
  if (auVar11._0_8_ <= 0.0) {
    dVar16 = 0.0;
    dVar15 = 0.0;
    dVar14 = 0.0;
  }
  else {
    dVar16 = __real_3ff0000000000000 / auVar11._0_8_;
    dVar14 = dVar16 * dVar14;
    dVar15 = dVar16 * dVar15;
    dVar16 = dVar16 * dVar3;
  }
  dVar3 = dVar16 * dVar9 - dVar15 * dVar1;
  dVar6 = dVar14 * dVar1 - dVar16 * dVar17;
  dVar7 = dVar15 * dVar17 - dVar14 * dVar9;
  if (__real_3e45798ee2308c3a <= dVar6 * dVar6 + dVar3 * dVar3 + dVar7 * dVar7) {
    if (dVar2 * dVar3 + dVar4 * dVar6 + (param_3->field0_0x0)._s_0.Z * dVar7 < 0.0) {
      uVar8 = SUB84(__real_bff0000000000000,0);
      uVar13 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
    dVar17 = dVar15 * dVar9 + dVar14 * dVar17 + dVar16 * dVar1;
    dVar9 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar17) && (dVar9 = dVar17, __real_3ff0000000000000 <= dVar17))
    {
      dVar9 = __real_3ff0000000000000;
    }
    dVar9 = acos(dVar9);
    dVar9 = dVar9 * (double)CONCAT44(uVar13,uVar8);
  }
  else {
    if (dVar15 * dVar9 + dVar14 * dVar17 + dVar16 * dVar1 < 0.0) {
      uVar18 = (undefined4)__real_400921fb54442d18;
      uVar19 = (undefined4)((ulonglong)__real_400921fb54442d18 >> 0x20);
    }
    dVar9 = (double)CONCAT44(uVar19,uVar18);
  }
  return dVar9;
}

// SnapToIncrement<double> @ 1496384a0

double __cdecl UE::Geometry::SnapToIncrement<double>(double param_1,double param_2,double param_3)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = _finite(param_1);
  if (iVar2 == 0) {
    dVar5 = 0.0;
  }
  else {
    dVar5 = param_1 - param_3;
    dVar1 = param_2;
    if ((dVar5 <= 0.0) && (dVar1 = 0.0, dVar5 < 0.0)) {
      dVar1 = (double)CONCAT44((uint)((ulonglong)param_2 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(param_2,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    uVar6 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar7 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    lVar4 = (longlong)((double)CONCAT44(uVar7,uVar6) / param_2);
    dVar5 = fmod((double)CONCAT44(uVar7,uVar6),param_2);
    lVar3 = lVar4 + 1;
    if (dVar5 <= param_2 * __real_3fe0000000000000) {
      lVar3 = lVar4;
    }
    dVar5 = (double)lVar3 * dVar1 + param_3;
  }
  return dVar5;
}

// UpdateMinPixelThreshold @ 149666e30

void __cdecl UE::Private::UpdateMinPixelThreshold(UGizmoElementBase *param_1,float param_2)

{
  if (param_1 != (UGizmoElementBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149666e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x4b0))();
    return;
  }
  return;
}

// UpdatePixelThreshold @ 149666fc0

void __cdecl
UE::InteractiveToolsFramework::Private::GizmoElementArrowHeadLocals::UpdatePixelThreshold
          (UGizmoElementBase *param_1,float param_2)

{
  if (param_1 != (UGizmoElementBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149666fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x4a0))();
    return;
  }
  return;
}

// UpdatePixelThreshold @ 149666fe0

void __cdecl UE::Private::UpdatePixelThreshold(UGizmoElementBase *param_1,float param_2)

{
  if (param_1 != (UGizmoElementBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149666fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x4a0))();
    return;
  }
  return;
}

// Construct<FGizmoFloatParameterChange> @ 14966bc00

void __cdecl UE::CoreUObject::Private::Construct<FGizmoFloatParameterChange>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FGizmoFloatParameterChange> @ 14966bc10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGizmoFloatParameterChange>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FGizmoFloatParameterChange> @ 14966bc30

void __cdecl UE::CoreUObject::Private::Destruct<FGizmoFloatParameterChange>(void *param_1)

{
  return;
}

// Copy<FGizmoFloatParameterChange> @ 14966bd40

bool __cdecl
UE::CoreUObject::Private::Copy<FGizmoFloatParameterChange>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGizmoPerStateValueLinearColor> @ 14966cce0

void __cdecl UE::CoreUObject::Private::Construct<FGizmoPerStateValueLinearColor>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FGizmoPerStateValueLinearColor> @ 14966cd50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGizmoPerStateValueLinearColor>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FGizmoPerStateValueLinearColor> @ 14966cd70

void __cdecl UE::CoreUObject::Private::Destruct<FGizmoPerStateValueLinearColor>(void *param_1)

{
  return;
}

// Copy<FGizmoPerStateValueLinearColor> @ 14966cdc0

bool __cdecl
UE::CoreUObject::Private::Copy<FGizmoPerStateValueLinearColor>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if (puVar1 != puVar3) {
        if (*(char *)(puVar1 + 2) == '\0') {
          if (*(char *)(puVar3 + 2) != '\0') {
            *(undefined1 *)(puVar3 + 2) = 0;
          }
        }
        else {
          uVar2 = puVar1[1];
          *puVar3 = *puVar1;
          puVar3[1] = uVar2;
          *(undefined1 *)(puVar3 + 2) = 1;
        }
      }
      if ((undefined8 *)((longlong)puVar1 + 0x14) != (undefined8 *)((longlong)puVar3 + 0x14)) {
        if (*(char *)((longlong)puVar1 + 0x24) == '\0') {
          if (*(char *)((longlong)puVar3 + 0x24) != '\0') {
            *(undefined1 *)((longlong)puVar3 + 0x24) = 0;
          }
        }
        else {
          uVar2 = *(undefined8 *)((longlong)puVar1 + 0x1c);
          *(undefined8 *)((longlong)puVar3 + 0x14) = *(undefined8 *)((longlong)puVar1 + 0x14);
          *(undefined8 *)((longlong)puVar3 + 0x1c) = uVar2;
          *(undefined1 *)((longlong)puVar3 + 0x24) = 1;
        }
      }
      if (puVar1 + 5 != puVar3 + 5) {
        if (*(char *)(puVar1 + 7) == '\0') {
          if (*(char *)(puVar3 + 7) != '\0') {
            *(undefined1 *)(puVar3 + 7) = 0;
          }
        }
        else {
          uVar2 = puVar1[6];
          puVar3[5] = puVar1[5];
          puVar3[6] = uVar2;
          *(undefined1 *)(puVar3 + 7) = 1;
        }
      }
      if ((undefined8 *)((longlong)puVar1 + 0x3c) != (undefined8 *)((longlong)puVar3 + 0x3c)) {
        if (*(char *)((longlong)puVar1 + 0x4c) == '\0') {
          if (*(char *)((longlong)puVar3 + 0x4c) != '\0') {
            *(undefined1 *)((longlong)puVar3 + 0x4c) = 0;
          }
        }
        else {
          uVar2 = *(undefined8 *)((longlong)puVar1 + 0x44);
          *(undefined8 *)((longlong)puVar3 + 0x3c) = *(undefined8 *)((longlong)puVar1 + 0x3c);
          *(undefined8 *)((longlong)puVar3 + 0x44) = uVar2;
          *(undefined1 *)((longlong)puVar3 + 0x4c) = 1;
        }
      }
      if (puVar1 + 10 != puVar3 + 10) {
        if (*(char *)(puVar1 + 0xc) == '\0') {
          if (*(char *)(puVar3 + 0xc) != '\0') {
            *(undefined1 *)(puVar3 + 0xc) = 0;
          }
        }
        else {
          uVar2 = puVar1[0xb];
          puVar3[10] = puVar1[10];
          puVar3[0xb] = uVar2;
          *(undefined1 *)(puVar3 + 0xc) = 1;
        }
      }
      param_3 = param_3 + -1;
      puVar3 = (undefined8 *)((longlong)puVar3 + 100);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGizmoPerStateValueDouble> @ 14966d700

void __cdecl UE::CoreUObject::Private::Construct<FGizmoPerStateValueDouble>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FGizmoPerStateValueDouble> @ 14966d720

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGizmoPerStateValueDouble>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FGizmoPerStateValueDouble> @ 14966d740

void __cdecl UE::CoreUObject::Private::Destruct<FGizmoPerStateValueDouble>(void *param_1)

{
  return;
}

// Copy<FGizmoPerStateValueDouble> @ 14966d750

bool __cdecl
UE::CoreUObject::Private::Copy<FGizmoPerStateValueDouble>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if (puVar1 != puVar2) {
        if (*(char *)(puVar1 + 1) == '\0') {
          if (*(char *)(puVar2 + 1) != '\0') {
            *(undefined1 *)(puVar2 + 1) = 0;
          }
        }
        else {
          *puVar2 = *puVar1;
          *(undefined1 *)(puVar2 + 1) = 1;
        }
      }
      if (puVar1 + 2 != puVar2 + 2) {
        if (*(char *)(puVar1 + 3) == '\0') {
          if (*(char *)(puVar2 + 3) != '\0') {
            *(undefined1 *)(puVar2 + 3) = 0;
          }
        }
        else {
          puVar2[2] = puVar1[2];
          *(undefined1 *)(puVar2 + 3) = 1;
        }
      }
      if (puVar1 + 4 != puVar2 + 4) {
        if (*(char *)(puVar1 + 5) == '\0') {
          if (*(char *)(puVar2 + 5) != '\0') {
            *(undefined1 *)(puVar2 + 5) = 0;
          }
        }
        else {
          puVar2[4] = puVar1[4];
          *(undefined1 *)(puVar2 + 5) = 1;
        }
      }
      if (puVar1 + 6 != puVar2 + 6) {
        if (*(char *)(puVar1 + 7) == '\0') {
          if (*(char *)(puVar2 + 7) != '\0') {
            *(undefined1 *)(puVar2 + 7) = 0;
          }
        }
        else {
          puVar2[6] = puVar1[6];
          *(undefined1 *)(puVar2 + 7) = 1;
        }
      }
      if (puVar1 + 8 != puVar2 + 8) {
        if (*(char *)(puVar1 + 9) == '\0') {
          if (*(char *)(puVar2 + 9) != '\0') {
            *(undefined1 *)(puVar2 + 9) = 0;
          }
        }
        else {
          puVar2[8] = puVar1[8];
          *(undefined1 *)(puVar2 + 9) = 1;
        }
      }
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGizmoElementLineRenderStateAttributes> @ 14966dc20

void __cdecl
UE::CoreUObject::Private::Construct<FGizmoElementLineRenderStateAttributes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(FLinearColor_u_0 *)param_1 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x14))->_s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x3c))->_s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x50))->_s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  return;
}

// ConstructForTests<FGizmoElementLineRenderStateAttributes> @ 14966dc80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGizmoElementLineRenderStateAttributes>(void *param_1)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(FLinearColor_u_0 *)param_1 = FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x14))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  *(undefined2 *)((longlong)param_1 + 0x38) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x3c))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  *(undefined2 *)((longlong)param_1 + 0x60) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x50))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// Destruct<FGizmoElementLineRenderStateAttributes> @ 14966dd20

void __cdecl
UE::CoreUObject::Private::Destruct<FGizmoElementLineRenderStateAttributes>(void *param_1)

{
  return;
}

// Copy<FGizmoElementLineRenderStateAttributes> @ 14966dec0

bool __cdecl
UE::CoreUObject::Private::Copy<FGizmoElementLineRenderStateAttributes>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  
  if (param_3 != 0) {
    lVar14 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar14 + 0x60 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar14 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar14 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x50 + (longlong)param_1);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar14 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar13;
      *(undefined4 *)((longlong)param_1 + 0x60) = uVar2;
      param_1 = (void *)((longlong)param_1 + 100);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGizmoElementMeshRenderStateAttributes> @ 14966e2a0

void __cdecl
UE::CoreUObject::Private::Construct<FGizmoElementMeshRenderStateAttributes>(void *param_1)

{
  memset(param_1,0,0xa0);
  FGizmoElementMeshRenderStateAttributes::FGizmoElementMeshRenderStateAttributes(param_1);
  return;
}

// ConstructForTests<FGizmoElementMeshRenderStateAttributes> @ 14966e2d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGizmoElementMeshRenderStateAttributes>(void *param_1)

{
  FLinearColor FVar1;
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&uStackX_8);
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_1 + 0xc),(FObjectPtr)&uStackX_8);
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_1 + 0x18),(FObjectPtr)&uStackX_8);
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_1 + 0x24),(FObjectPtr)&uStackX_8);
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_1 + 0x30),(FObjectPtr)&uStackX_8);
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x3c))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  *(undefined2 *)((longlong)param_1 + 0x60) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x50))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 100))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  *(undefined2 *)((longlong)param_1 + 0x88) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x78))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x8c))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// Destruct<FGizmoElementMeshRenderStateAttributes> @ 14966e3a0

void __cdecl
UE::CoreUObject::Private::Destruct<FGizmoElementMeshRenderStateAttributes>(void *param_1)

{
  return;
}

// Copy<FGizmoElementMeshRenderStateAttributes> @ 14966e430

bool __cdecl
UE::CoreUObject::Private::Copy<FGizmoElementMeshRenderStateAttributes>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  
  if (param_3 != 0) {
    puVar21 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar21);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      uVar9 = puVar1[8];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      uVar13 = puVar1[0xc];
      uVar14 = puVar1[0xd];
      uVar15 = puVar1[0xe];
      uVar16 = puVar1[0xf];
      uVar17 = puVar1[0x10];
      uVar18 = puVar1[0x11];
      uVar19 = puVar1[0x12];
      uVar20 = puVar1[0x13];
      *puVar21 = *puVar1;
      puVar21[1] = uVar2;
      puVar21[2] = uVar3;
      puVar21[3] = uVar4;
      puVar21[4] = uVar5;
      puVar21[5] = uVar6;
      puVar21[6] = uVar7;
      puVar21[7] = uVar8;
      puVar21[8] = uVar9;
      puVar21[9] = uVar10;
      puVar21[10] = uVar11;
      puVar21[0xb] = uVar12;
      puVar21[0xc] = uVar13;
      puVar21[0xd] = uVar14;
      puVar21[0xe] = uVar15;
      puVar21[0xf] = uVar16;
      puVar21[0x10] = uVar17;
      puVar21[0x11] = uVar18;
      puVar21[0x12] = uVar19;
      puVar21[0x13] = uVar20;
      param_3 = param_3 + -1;
      puVar21 = puVar21 + 0x14;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInputDeviceRay> @ 14966e860

void __cdecl UE::CoreUObject::Private::Construct<FInputDeviceRay>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(ulonglong *)((longlong)param_1 + 0x10) =
       CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  uVar1 = __real_3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x10) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(int *)((longlong)param_1 + 0x28) = (int)uVar1;
  *(int *)((longlong)param_1 + 0x2c) = (int)((ulonglong)uVar1 >> 0x20);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FInputDeviceRay> @ 14966e8f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInputDeviceRay>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(ulonglong *)((longlong)param_1 + 0x10) =
       CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  uVar1 = __real_3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x10) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(int *)((longlong)param_1 + 0x28) = (int)uVar1;
  *(int *)((longlong)param_1 + 0x2c) = (int)((ulonglong)uVar1 >> 0x20);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FInputDeviceRay> @ 14966e980

void __cdecl UE::CoreUObject::Private::Destruct<FInputDeviceRay>(void *param_1)

{
  return;
}

// Copy<FInputDeviceRay> @ 14966e990

bool __cdecl
UE::CoreUObject::Private::Copy<FInputDeviceRay>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar10 + 0x40 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar10 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar10 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar10 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x48);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGizmoElementMaterialAttribute> @ 14966eaa0

void __cdecl UE::CoreUObject::Private::Construct<FGizmoElementMaterialAttribute>(void *param_1)

{
  undefined8 local_res8 [4];
  
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)param_1 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)local_res8);
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGizmoElementMaterialAttribute> @ 14966ead0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGizmoElementMaterialAttribute>(void *param_1)

{
  undefined8 local_res8 [4];
  
  *(undefined8 *)param_1 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)local_res8);
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGizmoElementMaterialAttribute> @ 14966eb00

void __cdecl UE::CoreUObject::Private::Destruct<FGizmoElementMaterialAttribute>(void *param_1)

{
  return;
}

// Copy<FGizmoElementMaterialAttribute> @ 14966eb10

bool __cdecl
UE::CoreUObject::Private::Copy<FGizmoElementMaterialAttribute>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGizmoElementColorAttribute> @ 14966f020

void __cdecl UE::CoreUObject::Private::Construct<FGizmoElementColorAttribute>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(FLinearColor_u_0 *)param_1 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  return;
}

// ConstructForTests<FGizmoElementColorAttribute> @ 14966f040

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGizmoElementColorAttribute>(void *param_1)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(FLinearColor_u_0 *)param_1 = FVar1.field0_0x0;
  return;
}

// Destruct<FGizmoElementColorAttribute> @ 14966f060

void __cdecl UE::CoreUObject::Private::Destruct<FGizmoElementColorAttribute>(void *param_1)

{
  return;
}

// Copy<FGizmoElementColorAttribute> @ 14966f130

bool __cdecl
UE::CoreUObject::Private::Copy<FGizmoElementColorAttribute>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInputDeviceState> @ 14966f4e0

void __cdecl UE::CoreUObject::Private::Construct<FInputDeviceState>(void *param_1)

{
  TSharedPtr<FKeyDetails,1> *pTVar1;
  double dVar2;
  FMouseInputDeviceState *pFVar3;
  FDeviceButtonState FStack_e8;
  FMouseInputDeviceState FStack_c8;
  
  FDeviceButtonState::FDeviceButtonState((FDeviceButtonState *)((longlong)param_1 + 8));
  FMouseInputDeviceState::FMouseInputDeviceState
            ((FMouseInputDeviceState *)((longlong)param_1 + 0x28));
  FStack_e8.Button.KeyName.ComparisonIndex.Value = 0;
  FStack_e8.Button.KeyName.Number = 0;
  FStack_e8.Button.KeyDetails.Object = (FKeyDetails *)0x0;
  *(undefined8 *)param_1 = 0;
  FStack_e8.Button.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FStack_e8.bPressed = false;
  FStack_e8.bDown = false;
  FStack_e8.bReleased = false;
  FStack_e8.bDoubleClicked = false;
  FStack_e8._28_4_ = 0;
  FDeviceButtonState::FDeviceButtonState(&FStack_e8);
  *(FName *)((longlong)param_1 + 8) = FStack_e8.Button.KeyName;
  if ((TSharedPtr<FKeyDetails,1> *)((longlong)param_1 + 0x10) != &FStack_e8.Button.KeyDetails) {
    *(FKeyDetails **)((longlong)param_1 + 0x10) = FStack_e8.Button.KeyDetails.Object;
    FStack_e8.Button.KeyDetails.Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x18),
               &FStack_e8.Button.KeyDetails.SharedReferenceCount);
  }
  *(bool *)((longlong)param_1 + 0x20) = FStack_e8.bPressed;
  *(bool *)((longlong)param_1 + 0x21) = FStack_e8.bDown;
  *(bool *)((longlong)param_1 + 0x22) = FStack_e8.bReleased;
  *(bool *)((longlong)param_1 + 0x23) = FStack_e8.bDoubleClicked;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_e8.Button.KeyDetails.SharedReferenceCount.ReferenceController);
  pFVar3 = FMouseInputDeviceState::FMouseInputDeviceState(&FStack_c8);
  pTVar1 = &(pFVar3->Left).Button.KeyDetails;
  *(FName *)((longlong)param_1 + 0x28) = (pFVar3->Left).Button.KeyName;
  if ((TSharedPtr<FKeyDetails,1> *)((longlong)param_1 + 0x30) != pTVar1) {
    *(FKeyDetails **)((longlong)param_1 + 0x30) = pTVar1->Object;
    pTVar1->Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x38),
               &(pFVar3->Left).Button.KeyDetails.SharedReferenceCount);
  }
  pTVar1 = &(pFVar3->Middle).Button.KeyDetails;
  *(bool *)((longlong)param_1 + 0x40) = (pFVar3->Left).bPressed;
  *(bool *)((longlong)param_1 + 0x41) = (pFVar3->Left).bDown;
  *(bool *)((longlong)param_1 + 0x42) = (pFVar3->Left).bReleased;
  *(bool *)((longlong)param_1 + 0x43) = (pFVar3->Left).bDoubleClicked;
  *(FName *)((longlong)param_1 + 0x48) = (pFVar3->Middle).Button.KeyName;
  if ((TSharedPtr<FKeyDetails,1> *)((longlong)param_1 + 0x50) != pTVar1) {
    *(FKeyDetails **)((longlong)param_1 + 0x50) = pTVar1->Object;
    pTVar1->Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x58),
               &(pFVar3->Middle).Button.KeyDetails.SharedReferenceCount);
  }
  pTVar1 = &(pFVar3->Right).Button.KeyDetails;
  *(bool *)((longlong)param_1 + 0x60) = (pFVar3->Middle).bPressed;
  *(bool *)((longlong)param_1 + 0x61) = (pFVar3->Middle).bDown;
  *(bool *)((longlong)param_1 + 0x62) = (pFVar3->Middle).bReleased;
  *(bool *)((longlong)param_1 + 99) = (pFVar3->Middle).bDoubleClicked;
  *(FName *)((longlong)param_1 + 0x68) = (pFVar3->Right).Button.KeyName;
  if ((TSharedPtr<FKeyDetails,1> *)((longlong)param_1 + 0x70) != pTVar1) {
    *(FKeyDetails **)((longlong)param_1 + 0x70) = pTVar1->Object;
    pTVar1->Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x78),
               &(pFVar3->Right).Button.KeyDetails.SharedReferenceCount);
  }
  *(bool *)((longlong)param_1 + 0x80) = (pFVar3->Right).bPressed;
  *(bool *)((longlong)param_1 + 0x81) = (pFVar3->Right).bDown;
  *(bool *)((longlong)param_1 + 0x82) = (pFVar3->Right).bReleased;
  *(bool *)((longlong)param_1 + 0x83) = (pFVar3->Right).bDoubleClicked;
  *(float *)((longlong)param_1 + 0x88) = pFVar3->WheelDelta;
  dVar2 = (pFVar3->Position2D).field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x90) = (pFVar3->Position2D).field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0x98) = dVar2;
  dVar2 = (pFVar3->Delta2D).field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xa0) = (pFVar3->Delta2D).field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0xa8) = dVar2;
  dVar2 = (pFVar3->WorldRay).Origin.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xb0) = (pFVar3->WorldRay).Origin.field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0xb8) = dVar2;
  dVar2 = (pFVar3->WorldRay).Direction.field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0xc0) = (pFVar3->WorldRay).Origin.field0_0x0._s_0.Z;
  *(double *)((longlong)param_1 + 200) = dVar2;
  dVar2 = (pFVar3->WorldRay).Direction.field0_0x0._s_0.Z;
  *(double *)((longlong)param_1 + 0xd0) = (pFVar3->WorldRay).Direction.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xd8) = dVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c8.Right.Button.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c8.Middle.Button.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c8.Left.Button.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// ConstructForTests<FInputDeviceState> @ 14966f4f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInputDeviceState>(void *param_1)

{
  TSharedPtr<FKeyDetails,1> *pTVar1;
  double dVar2;
  FMouseInputDeviceState *pFVar3;
  FDeviceButtonState FStack_e8;
  FMouseInputDeviceState FStack_c8;
  
  FDeviceButtonState::FDeviceButtonState((FDeviceButtonState *)((longlong)param_1 + 8));
  FMouseInputDeviceState::FMouseInputDeviceState
            ((FMouseInputDeviceState *)((longlong)param_1 + 0x28));
  FStack_e8.Button.KeyName.ComparisonIndex.Value = 0;
  FStack_e8.Button.KeyName.Number = 0;
  FStack_e8.Button.KeyDetails.Object = (FKeyDetails *)0x0;
  *(undefined8 *)param_1 = 0;
  FStack_e8.Button.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FStack_e8.bPressed = false;
  FStack_e8.bDown = false;
  FStack_e8.bReleased = false;
  FStack_e8.bDoubleClicked = false;
  FStack_e8._28_4_ = 0;
  FDeviceButtonState::FDeviceButtonState(&FStack_e8);
  *(FName *)((longlong)param_1 + 8) = FStack_e8.Button.KeyName;
  if ((TSharedPtr<FKeyDetails,1> *)((longlong)param_1 + 0x10) != &FStack_e8.Button.KeyDetails) {
    *(FKeyDetails **)((longlong)param_1 + 0x10) = FStack_e8.Button.KeyDetails.Object;
    FStack_e8.Button.KeyDetails.Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x18),
               &FStack_e8.Button.KeyDetails.SharedReferenceCount);
  }
  *(bool *)((longlong)param_1 + 0x20) = FStack_e8.bPressed;
  *(bool *)((longlong)param_1 + 0x21) = FStack_e8.bDown;
  *(bool *)((longlong)param_1 + 0x22) = FStack_e8.bReleased;
  *(bool *)((longlong)param_1 + 0x23) = FStack_e8.bDoubleClicked;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_e8.Button.KeyDetails.SharedReferenceCount.ReferenceController);
  pFVar3 = FMouseInputDeviceState::FMouseInputDeviceState(&FStack_c8);
  pTVar1 = &(pFVar3->Left).Button.KeyDetails;
  *(FName *)((longlong)param_1 + 0x28) = (pFVar3->Left).Button.KeyName;
  if ((TSharedPtr<FKeyDetails,1> *)((longlong)param_1 + 0x30) != pTVar1) {
    *(FKeyDetails **)((longlong)param_1 + 0x30) = pTVar1->Object;
    pTVar1->Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x38),
               &(pFVar3->Left).Button.KeyDetails.SharedReferenceCount);
  }
  pTVar1 = &(pFVar3->Middle).Button.KeyDetails;
  *(bool *)((longlong)param_1 + 0x40) = (pFVar3->Left).bPressed;
  *(bool *)((longlong)param_1 + 0x41) = (pFVar3->Left).bDown;
  *(bool *)((longlong)param_1 + 0x42) = (pFVar3->Left).bReleased;
  *(bool *)((longlong)param_1 + 0x43) = (pFVar3->Left).bDoubleClicked;
  *(FName *)((longlong)param_1 + 0x48) = (pFVar3->Middle).Button.KeyName;
  if ((TSharedPtr<FKeyDetails,1> *)((longlong)param_1 + 0x50) != pTVar1) {
    *(FKeyDetails **)((longlong)param_1 + 0x50) = pTVar1->Object;
    pTVar1->Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x58),
               &(pFVar3->Middle).Button.KeyDetails.SharedReferenceCount);
  }
  pTVar1 = &(pFVar3->Right).Button.KeyDetails;
  *(bool *)((longlong)param_1 + 0x60) = (pFVar3->Middle).bPressed;
  *(bool *)((longlong)param_1 + 0x61) = (pFVar3->Middle).bDown;
  *(bool *)((longlong)param_1 + 0x62) = (pFVar3->Middle).bReleased;
  *(bool *)((longlong)param_1 + 99) = (pFVar3->Middle).bDoubleClicked;
  *(FName *)((longlong)param_1 + 0x68) = (pFVar3->Right).Button.KeyName;
  if ((TSharedPtr<FKeyDetails,1> *)((longlong)param_1 + 0x70) != pTVar1) {
    *(FKeyDetails **)((longlong)param_1 + 0x70) = pTVar1->Object;
    pTVar1->Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x78),
               &(pFVar3->Right).Button.KeyDetails.SharedReferenceCount);
  }
  *(bool *)((longlong)param_1 + 0x80) = (pFVar3->Right).bPressed;
  *(bool *)((longlong)param_1 + 0x81) = (pFVar3->Right).bDown;
  *(bool *)((longlong)param_1 + 0x82) = (pFVar3->Right).bReleased;
  *(bool *)((longlong)param_1 + 0x83) = (pFVar3->Right).bDoubleClicked;
  *(float *)((longlong)param_1 + 0x88) = pFVar3->WheelDelta;
  dVar2 = (pFVar3->Position2D).field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x90) = (pFVar3->Position2D).field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0x98) = dVar2;
  dVar2 = (pFVar3->Delta2D).field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xa0) = (pFVar3->Delta2D).field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0xa8) = dVar2;
  dVar2 = (pFVar3->WorldRay).Origin.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xb0) = (pFVar3->WorldRay).Origin.field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0xb8) = dVar2;
  dVar2 = (pFVar3->WorldRay).Direction.field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0xc0) = (pFVar3->WorldRay).Origin.field0_0x0._s_0.Z;
  *(double *)((longlong)param_1 + 200) = dVar2;
  dVar2 = (pFVar3->WorldRay).Direction.field0_0x0._s_0.Z;
  *(double *)((longlong)param_1 + 0xd0) = (pFVar3->WorldRay).Direction.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xd8) = dVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c8.Right.Button.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c8.Middle.Button.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c8.Left.Button.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// Destruct<FInputDeviceState> @ 14966f500

void __cdecl UE::CoreUObject::Private::Destruct<FInputDeviceState>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x78));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x58));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  return;
}

// Copy<FInputDeviceState> @ 14966f580

bool __cdecl
UE::CoreUObject::Private::Copy<FInputDeviceState>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 4) = *(undefined1 *)((longlong)param_2 + 4);
      *(undefined1 *)((longlong)param_1 + 5) = *(undefined1 *)((longlong)param_2 + 5);
      *(undefined1 *)((longlong)param_1 + 6) = *(undefined1 *)((longlong)param_2 + 6);
      *(undefined1 *)((longlong)param_1 + 7) = *(undefined1 *)((longlong)param_2 + 7);
      FDeviceButtonState::operator=
                ((FDeviceButtonState *)((longlong)param_1 + 8),
                 (FDeviceButtonState *)((longlong)param_2 + 8));
      FMouseInputDeviceState::operator=
                ((FMouseInputDeviceState *)((longlong)param_1 + 0x28),
                 (FMouseInputDeviceState *)((longlong)param_2 + 0x28));
      param_2 = (void *)((longlong)param_2 + 0xe0);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0xe0);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMouseInputDeviceState> @ 14966fb90

void __cdecl UE::CoreUObject::Private::Construct<FMouseInputDeviceState>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FName FVar4;
  FKeyDetails *pFVar5;
  FSharedReferencer<1> FVar6;
  FKeyDetails *pFStack_b0;
  FSharedReferencer<1> FStack_a8;
  undefined4 uStack_a0;
  FName FStack_98;
  FKeyDetails *pFStack_90;
  FSharedReferencer<1> FStack_88;
  undefined4 uStack_80;
  FName FStack_78;
  FKeyDetails *pFStack_70;
  FSharedReferencer<1> FStack_68;
  undefined4 uStack_60;
  
  FDeviceButtonState::FDeviceButtonState(param_1);
  FDeviceButtonState::FDeviceButtonState((FDeviceButtonState *)((longlong)param_1 + 0x20));
  FDeviceButtonState::FDeviceButtonState((FDeviceButtonState *)((longlong)param_1 + 0x40));
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x88) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x90) = uVar1;
  *(double *)((longlong)param_1 + 0x98) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x3ff0000000000000;
  FVar6 = EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount;
  pFVar5 = EKeys::LeftMouseButton.KeyDetails.Object;
  FVar4 = EKeys::LeftMouseButton.KeyName;
  if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFStack_b0 = pFVar5;
  FStack_a8.ReferenceController = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  uStack_a0._3_1_ = 0;
  uStack_a0 = 0;
  uStack_a0._2_1_ = 0;
  *(FName *)param_1 = FVar4;
  uStack_a0._1_1_ = 0;
  uStack_a0._0_1_ = 0;
  if ((FKeyDetails **)((longlong)param_1 + 8) != &pFStack_b0) {
    *(FKeyDetails **)((longlong)param_1 + 8) = pFVar5;
    pFStack_b0 = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x10),&FStack_a8);
    FVar6.ReferenceController = FStack_a8.ReferenceController;
  }
  *(undefined1 *)((longlong)param_1 + 0x18) = (undefined1)uStack_a0;
  *(undefined1 *)((longlong)param_1 + 0x19) = uStack_a0._1_1_;
  *(undefined1 *)((longlong)param_1 + 0x1a) = uStack_a0._2_1_;
  *(undefined1 *)((longlong)param_1 + 0x1b) = uStack_a0._3_1_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  FVar6 = EKeys::MiddleMouseButton.KeyDetails.SharedReferenceCount;
  pFVar5 = EKeys::MiddleMouseButton.KeyDetails.Object;
  FVar4 = EKeys::MiddleMouseButton.KeyName;
  FStack_98 = EKeys::MiddleMouseButton.KeyName;
  if (EKeys::MiddleMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::MiddleMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::MiddleMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFStack_90 = pFVar5;
  FStack_88.ReferenceController = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  uStack_80._3_1_ = 0;
  uStack_80 = 0;
  uStack_80._2_1_ = 0;
  *(FName *)((longlong)param_1 + 0x20) = FVar4;
  uStack_80._1_1_ = 0;
  uStack_80._0_1_ = 0;
  if ((FKeyDetails **)((longlong)param_1 + 0x28) != &pFStack_90) {
    *(FKeyDetails **)((longlong)param_1 + 0x28) = pFVar5;
    pFStack_90 = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x30),&FStack_88);
    FVar6.ReferenceController = FStack_88.ReferenceController;
  }
  *(undefined1 *)((longlong)param_1 + 0x38) = (undefined1)uStack_80;
  *(undefined1 *)((longlong)param_1 + 0x39) = uStack_80._1_1_;
  *(undefined1 *)((longlong)param_1 + 0x3a) = uStack_80._2_1_;
  *(undefined1 *)((longlong)param_1 + 0x3b) = uStack_80._3_1_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  FVar6 = EKeys::RightMouseButton.KeyDetails.SharedReferenceCount;
  pFVar5 = EKeys::RightMouseButton.KeyDetails.Object;
  FVar4 = EKeys::RightMouseButton.KeyName;
  FStack_78 = EKeys::RightMouseButton.KeyName;
  if (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFStack_70 = pFVar5;
  FStack_68.ReferenceController = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  uStack_60._3_1_ = 0;
  uStack_60 = 0;
  uStack_60._2_1_ = 0;
  *(FName *)((longlong)param_1 + 0x40) = FVar4;
  uStack_60._1_1_ = 0;
  uStack_60._0_1_ = 0;
  if ((FKeyDetails **)((longlong)param_1 + 0x48) != &pFStack_70) {
    *(FKeyDetails **)((longlong)param_1 + 0x48) = pFVar5;
    pFStack_70 = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x50),&FStack_68);
    FVar6.ReferenceController = FStack_68.ReferenceController;
  }
  *(undefined1 *)((longlong)param_1 + 0x58) = (undefined1)uStack_60;
  *(undefined1 *)((longlong)param_1 + 0x59) = uStack_60._1_1_;
  *(undefined1 *)((longlong)param_1 + 0x5a) = uStack_60._2_1_;
  *(undefined1 *)((longlong)param_1 + 0x5b) = uStack_60._3_1_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  uVar1 = __real_3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x68))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x78))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x88) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x90) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x98) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(int *)((longlong)param_1 + 0xb0) = (int)uVar1;
  *(int *)((longlong)param_1 + 0xb4) = (int)((ulonglong)uVar1 >> 0x20);
  return;
}

// ConstructForTests<FMouseInputDeviceState> @ 14966fba0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMouseInputDeviceState>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FName FVar4;
  FKeyDetails *pFVar5;
  FSharedReferencer<1> FVar6;
  FKeyDetails *pFStack_b0;
  FSharedReferencer<1> FStack_a8;
  undefined4 uStack_a0;
  FName FStack_98;
  FKeyDetails *pFStack_90;
  FSharedReferencer<1> FStack_88;
  undefined4 uStack_80;
  FName FStack_78;
  FKeyDetails *pFStack_70;
  FSharedReferencer<1> FStack_68;
  undefined4 uStack_60;
  
  FDeviceButtonState::FDeviceButtonState(param_1);
  FDeviceButtonState::FDeviceButtonState((FDeviceButtonState *)((longlong)param_1 + 0x20));
  FDeviceButtonState::FDeviceButtonState((FDeviceButtonState *)((longlong)param_1 + 0x40));
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x88) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x90) = uVar1;
  *(double *)((longlong)param_1 + 0x98) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x3ff0000000000000;
  FVar6 = EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount;
  pFVar5 = EKeys::LeftMouseButton.KeyDetails.Object;
  FVar4 = EKeys::LeftMouseButton.KeyName;
  if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFStack_b0 = pFVar5;
  FStack_a8.ReferenceController = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  uStack_a0._3_1_ = 0;
  uStack_a0 = 0;
  uStack_a0._2_1_ = 0;
  *(FName *)param_1 = FVar4;
  uStack_a0._1_1_ = 0;
  uStack_a0._0_1_ = 0;
  if ((FKeyDetails **)((longlong)param_1 + 8) != &pFStack_b0) {
    *(FKeyDetails **)((longlong)param_1 + 8) = pFVar5;
    pFStack_b0 = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x10),&FStack_a8);
    FVar6.ReferenceController = FStack_a8.ReferenceController;
  }
  *(undefined1 *)((longlong)param_1 + 0x18) = (undefined1)uStack_a0;
  *(undefined1 *)((longlong)param_1 + 0x19) = uStack_a0._1_1_;
  *(undefined1 *)((longlong)param_1 + 0x1a) = uStack_a0._2_1_;
  *(undefined1 *)((longlong)param_1 + 0x1b) = uStack_a0._3_1_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  FVar6 = EKeys::MiddleMouseButton.KeyDetails.SharedReferenceCount;
  pFVar5 = EKeys::MiddleMouseButton.KeyDetails.Object;
  FVar4 = EKeys::MiddleMouseButton.KeyName;
  FStack_98 = EKeys::MiddleMouseButton.KeyName;
  if (EKeys::MiddleMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::MiddleMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::MiddleMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFStack_90 = pFVar5;
  FStack_88.ReferenceController = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  uStack_80._3_1_ = 0;
  uStack_80 = 0;
  uStack_80._2_1_ = 0;
  *(FName *)((longlong)param_1 + 0x20) = FVar4;
  uStack_80._1_1_ = 0;
  uStack_80._0_1_ = 0;
  if ((FKeyDetails **)((longlong)param_1 + 0x28) != &pFStack_90) {
    *(FKeyDetails **)((longlong)param_1 + 0x28) = pFVar5;
    pFStack_90 = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x30),&FStack_88);
    FVar6.ReferenceController = FStack_88.ReferenceController;
  }
  *(undefined1 *)((longlong)param_1 + 0x38) = (undefined1)uStack_80;
  *(undefined1 *)((longlong)param_1 + 0x39) = uStack_80._1_1_;
  *(undefined1 *)((longlong)param_1 + 0x3a) = uStack_80._2_1_;
  *(undefined1 *)((longlong)param_1 + 0x3b) = uStack_80._3_1_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  FVar6 = EKeys::RightMouseButton.KeyDetails.SharedReferenceCount;
  pFVar5 = EKeys::RightMouseButton.KeyDetails.Object;
  FVar4 = EKeys::RightMouseButton.KeyName;
  FStack_78 = EKeys::RightMouseButton.KeyName;
  if (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFStack_70 = pFVar5;
  FStack_68.ReferenceController = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  uStack_60._3_1_ = 0;
  uStack_60 = 0;
  uStack_60._2_1_ = 0;
  *(FName *)((longlong)param_1 + 0x40) = FVar4;
  uStack_60._1_1_ = 0;
  uStack_60._0_1_ = 0;
  if ((FKeyDetails **)((longlong)param_1 + 0x48) != &pFStack_70) {
    *(FKeyDetails **)((longlong)param_1 + 0x48) = pFVar5;
    pFStack_70 = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x50),&FStack_68);
    FVar6.ReferenceController = FStack_68.ReferenceController;
  }
  *(undefined1 *)((longlong)param_1 + 0x58) = (undefined1)uStack_60;
  *(undefined1 *)((longlong)param_1 + 0x59) = uStack_60._1_1_;
  *(undefined1 *)((longlong)param_1 + 0x5a) = uStack_60._2_1_;
  *(undefined1 *)((longlong)param_1 + 0x5b) = uStack_60._3_1_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  uVar1 = __real_3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x68))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x78))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x88) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x90) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x98) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(int *)((longlong)param_1 + 0xb0) = (int)uVar1;
  *(int *)((longlong)param_1 + 0xb4) = (int)((ulonglong)uVar1 >> 0x20);
  return;
}

// Destruct<FMouseInputDeviceState> @ 14966fbb0

void __cdecl UE::CoreUObject::Private::Destruct<FMouseInputDeviceState>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x50));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FMouseInputDeviceState> @ 14966fca0

bool __cdecl
UE::CoreUObject::Private::Copy<FMouseInputDeviceState>(void *param_1,void *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  FDeviceButtonState *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FDeviceButtonState::operator=(param_1,param_2);
    FDeviceButtonState::operator=
              ((FDeviceButtonState *)((longlong)param_1 + 0x20),
               (FDeviceButtonState *)((longlong)param_2 + 0x20));
    FDeviceButtonState::operator=
              ((FDeviceButtonState *)((longlong)param_1 + 0x40),
               (FDeviceButtonState *)((longlong)param_2 + 0x40));
    (((FDeviceButtonState *)((longlong)param_1 + 0x60))->Button).KeyName.ComparisonIndex.Value =
         (((FDeviceButtonState *)((longlong)param_2 + 0x60))->Button).KeyName.ComparisonIndex.Value;
    pTVar1 = (((FDeviceButtonState *)((longlong)param_2 + 0x60))->Button).KeyDetails.
             SharedReferenceCount.ReferenceController;
    (((FDeviceButtonState *)((longlong)param_1 + 0x60))->Button).KeyDetails.Object =
         (((FDeviceButtonState *)((longlong)param_2 + 0x60))->Button).KeyDetails.Object;
    (((FDeviceButtonState *)((longlong)param_1 + 0x60))->Button).KeyDetails.SharedReferenceCount.
    ReferenceController = pTVar1;
    bVar4 = ((FDeviceButtonState *)((longlong)param_2 + 0x60))->bDown;
    bVar5 = ((FDeviceButtonState *)((longlong)param_2 + 0x60))->bReleased;
    bVar6 = ((FDeviceButtonState *)((longlong)param_2 + 0x60))->bDoubleClicked;
    uVar7 = *(undefined4 *)&((FDeviceButtonState *)((longlong)param_2 + 0x60))->field_0x1c;
    FVar2 = (((FDeviceButtonState *)((longlong)param_2 + 0x80))->Button).KeyName;
    ((FDeviceButtonState *)((longlong)param_1 + 0x60))->bPressed =
         ((FDeviceButtonState *)((longlong)param_2 + 0x60))->bPressed;
    ((FDeviceButtonState *)((longlong)param_1 + 0x60))->bDown = bVar4;
    ((FDeviceButtonState *)((longlong)param_1 + 0x60))->bReleased = bVar5;
    ((FDeviceButtonState *)((longlong)param_1 + 0x60))->bDoubleClicked = bVar6;
    *(undefined4 *)&((FDeviceButtonState *)((longlong)param_1 + 0x60))->field_0x1c = uVar7;
    (((FDeviceButtonState *)((longlong)param_1 + 0x80))->Button).KeyName = FVar2;
    pTVar1 = (((FDeviceButtonState *)((longlong)param_2 + 0x80))->Button).KeyDetails.
             SharedReferenceCount.ReferenceController;
    (((FDeviceButtonState *)((longlong)param_1 + 0x80))->Button).KeyDetails.Object =
         (((FDeviceButtonState *)((longlong)param_2 + 0x80))->Button).KeyDetails.Object;
    (((FDeviceButtonState *)((longlong)param_1 + 0x80))->Button).KeyDetails.SharedReferenceCount.
    ReferenceController = pTVar1;
    bVar4 = ((FDeviceButtonState *)((longlong)param_2 + 0x80))->bDown;
    bVar5 = ((FDeviceButtonState *)((longlong)param_2 + 0x80))->bReleased;
    bVar6 = ((FDeviceButtonState *)((longlong)param_2 + 0x80))->bDoubleClicked;
    uVar7 = *(undefined4 *)&((FDeviceButtonState *)((longlong)param_2 + 0x80))->field_0x1c;
    FVar2 = (((FDeviceButtonState *)((longlong)param_2 + 0xa0))->Button).KeyName;
    ((FDeviceButtonState *)((longlong)param_1 + 0x80))->bPressed =
         ((FDeviceButtonState *)((longlong)param_2 + 0x80))->bPressed;
    ((FDeviceButtonState *)((longlong)param_1 + 0x80))->bDown = bVar4;
    ((FDeviceButtonState *)((longlong)param_1 + 0x80))->bReleased = bVar5;
    ((FDeviceButtonState *)((longlong)param_1 + 0x80))->bDoubleClicked = bVar6;
    *(undefined4 *)&((FDeviceButtonState *)((longlong)param_1 + 0x80))->field_0x1c = uVar7;
    (((FDeviceButtonState *)((longlong)param_1 + 0xa0))->Button).KeyName = FVar2;
    pFVar3 = (FDeviceButtonState *)((longlong)param_2 + 0xa0);
    pTVar1 = (((FDeviceButtonState *)((longlong)param_2 + 0xa0))->Button).KeyDetails.
             SharedReferenceCount.ReferenceController;
    param_2 = &((FDeviceButtonState *)((longlong)param_2 + 0xa0))->bPressed;
    (((FDeviceButtonState *)((longlong)param_1 + 0xa0))->Button).KeyDetails.Object =
         (pFVar3->Button).KeyDetails.Object;
    (((FDeviceButtonState *)((longlong)param_1 + 0xa0))->Button).KeyDetails.SharedReferenceCount.
    ReferenceController = pTVar1;
    param_1 = &((FDeviceButtonState *)((longlong)param_1 + 0xa0))->bPressed;
  }
  return true;
}

// Construct<FKeyboardInputDeviceState> @ 1496700b0

void __cdecl UE::CoreUObject::Private::Construct<FKeyboardInputDeviceState>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FDeviceButtonState::FDeviceButtonState(param_1);
  return;
}

// ConstructForTests<FKeyboardInputDeviceState> @ 1496700d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FKeyboardInputDeviceState>(void *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar6;
  undefined8 auStack_20 [3];
  
  uVar6 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  if (((undefined8 *)((longlong)param_1 + 8) != auStack_20) &&
     (plVar4 = *(longlong **)((longlong)param_1 + 0x10), plVar4 != (longlong *)0x0)) {
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)();
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1,in_R8,in_R9,uVar6);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FKeyboardInputDeviceState> @ 1496700e0

void __cdecl UE::CoreUObject::Private::Destruct<FKeyboardInputDeviceState>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FKeyboardInputDeviceState> @ 149670320

bool __cdecl
UE::CoreUObject::Private::Copy<FKeyboardInputDeviceState>(void *param_1,void *param_2,int param_3)

{
  FDeviceButtonState *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FDeviceButtonState::operator=
                (this,(FDeviceButtonState *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDeviceButtonState> @ 149670c00

void __cdecl UE::CoreUObject::Private::Construct<FDeviceButtonState>(void *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar6;
  undefined8 auStack_20 [3];
  
  uVar6 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  if (((undefined8 *)((longlong)param_1 + 8) != auStack_20) &&
     (plVar4 = *(longlong **)((longlong)param_1 + 0x10), plVar4 != (longlong *)0x0)) {
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)();
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1,in_R8,in_R9,uVar6);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FDeviceButtonState> @ 149670c10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDeviceButtonState>(void *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar6;
  undefined8 auStack_20 [3];
  
  uVar6 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  if (((undefined8 *)((longlong)param_1 + 8) != auStack_20) &&
     (plVar4 = *(longlong **)((longlong)param_1 + 0x10), plVar4 != (longlong *)0x0)) {
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)();
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1,in_R8,in_R9,uVar6);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FDeviceButtonState> @ 149670c60

void __cdecl UE::CoreUObject::Private::Destruct<FDeviceButtonState>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FDeviceButtonState> @ 149670d40

bool __cdecl
UE::CoreUObject::Private::Copy<FDeviceButtonState>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      lVar1 = *(longlong *)((longlong)param_1 + lVar4 + 0x10);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar4 + 8);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(longlong *)((longlong)param_1 + 0x10) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x18);
      *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x19);
      *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x1a);
      *(undefined1 *)((longlong)param_1 + 0x1b) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x1b);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInputRayHit> @ 1496712f0

void __cdecl UE::CoreUObject::Private::Construct<FInputRayHit>(void *param_1)

{
  FWeakObjectPtr FStackX_8;
  undefined8 auStackX_10 [3];
  
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x47efffffe0000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  auStackX_10[0] = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)auStackX_10);
  *(FWeakObjectPtr *)((longlong)param_1 + 0x38) = FStackX_8;
  return;
}

// ConstructForTests<FInputRayHit> @ 149671300

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInputRayHit>(void *param_1)

{
  FWeakObjectPtr FStackX_8;
  undefined8 auStackX_10 [3];
  
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x47efffffe0000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  auStackX_10[0] = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)auStackX_10);
  *(FWeakObjectPtr *)((longlong)param_1 + 0x38) = FStackX_8;
  return;
}

// Destruct<FInputRayHit> @ 149671310

void __cdecl UE::CoreUObject::Private::Destruct<FInputRayHit>(void *param_1)

{
  return;
}

// Copy<FInputRayHit> @ 1496713c0

bool __cdecl UE::CoreUObject::Private::Copy<FInputRayHit>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBehaviorInfo> @ 149671b10

void __cdecl UE::CoreUObject::Private::Construct<FBehaviorInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FBehaviorInfo> @ 149671b30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBehaviorInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FBehaviorInfo> @ 149671b50

void __cdecl UE::CoreUObject::Private::Destruct<FBehaviorInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FBehaviorInfo> @ 149671b70

bool __cdecl UE::CoreUObject::Private::Copy<FBehaviorInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      ::FString::operator=((FString *)(puVar2 + 2),(FString *)(puVar1 + 2));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBrushStampData> @ 149672800

void __cdecl UE::CoreUObject::Private::Construct<FBrushStampData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  memset((void *)((longlong)param_1 + 0x38),0,0x100);
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0xffffffff;
  return;
}

// ConstructForTests<FBrushStampData> @ 149672890

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBrushStampData>(void *param_1)

{
  memset((void *)((longlong)param_1 + 0x38),0,0x100);
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0xffffffff;
  return;
}

// Destruct<FBrushStampData> @ 149672900

void __cdecl UE::CoreUObject::Private::Destruct<FBrushStampData>(void *param_1)

{
  return;
}

// Copy<FBrushStampData> @ 149672910

bool __cdecl
UE::CoreUObject::Private::Copy<FBrushStampData>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_148 [41];
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      lVar9 = 2;
      puVar5 = (undefined8 *)(lVar10 + (longlong)param_1);
      puVar6 = local_148;
      do {
        puVar8 = puVar6;
        puVar7 = puVar5;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar8 = *puVar7;
        puVar8[1] = uVar1;
        uVar1 = puVar7[4];
        uVar4 = puVar7[5];
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
        uVar2 = puVar7[6];
        uVar3 = puVar7[7];
        puVar8[4] = uVar1;
        puVar8[5] = uVar4;
        uVar1 = puVar7[8];
        uVar4 = puVar7[9];
        puVar8[6] = uVar2;
        puVar8[7] = uVar3;
        uVar2 = puVar7[10];
        uVar3 = puVar7[0xb];
        puVar8[8] = uVar1;
        puVar8[9] = uVar4;
        uVar1 = puVar7[0xc];
        uVar4 = puVar7[0xd];
        puVar8[10] = uVar2;
        puVar8[0xb] = uVar3;
        uVar2 = puVar7[0xe];
        uVar3 = puVar7[0xf];
        puVar8[0xc] = uVar1;
        puVar8[0xd] = uVar4;
        puVar8[0xe] = uVar2;
        puVar8[0xf] = uVar3;
        lVar9 = lVar9 + -1;
        puVar5 = puVar7 + 0x10;
        puVar6 = puVar8 + 0x10;
      } while (lVar9 != 0);
      uVar1 = puVar7[0x11];
      lVar9 = 2;
      uVar2 = puVar7[0x12];
      uVar3 = puVar7[0x13];
      puVar8[0x10] = puVar7[0x10];
      puVar8[0x11] = uVar1;
      uVar1 = puVar7[0x14];
      uVar4 = puVar7[0x15];
      puVar8[0x12] = uVar2;
      puVar8[0x13] = uVar3;
      uVar2 = puVar7[0x16];
      uVar3 = puVar7[0x17];
      puVar8[0x14] = uVar1;
      puVar8[0x15] = uVar4;
      puVar8[0x16] = uVar2;
      puVar8[0x17] = uVar3;
      puVar5 = local_148;
      puVar6 = param_1;
      do {
        puVar8 = puVar6;
        puVar7 = puVar5;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar8 = *puVar7;
        puVar8[1] = uVar1;
        uVar1 = puVar7[4];
        uVar4 = puVar7[5];
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
        uVar2 = puVar7[6];
        uVar3 = puVar7[7];
        puVar8[4] = uVar1;
        puVar8[5] = uVar4;
        uVar1 = puVar7[8];
        uVar4 = puVar7[9];
        puVar8[6] = uVar2;
        puVar8[7] = uVar3;
        uVar2 = puVar7[10];
        uVar3 = puVar7[0xb];
        puVar8[8] = uVar1;
        puVar8[9] = uVar4;
        uVar1 = puVar7[0xc];
        uVar4 = puVar7[0xd];
        puVar8[10] = uVar2;
        puVar8[0xb] = uVar3;
        uVar2 = puVar7[0xe];
        uVar3 = puVar7[0xf];
        puVar8[0xc] = uVar1;
        puVar8[0xd] = uVar4;
        puVar8[0xe] = uVar2;
        puVar8[0xf] = uVar3;
        lVar9 = lVar9 + -1;
        puVar5 = puVar7 + 0x10;
        puVar6 = puVar8 + 0x10;
      } while (lVar9 != 0);
      uVar1 = puVar7[0x11];
      param_1 = (void *)((longlong)param_1 + 0x140);
      uVar2 = puVar7[0x12];
      uVar3 = puVar7[0x13];
      puVar8[0x10] = puVar7[0x10];
      puVar8[0x11] = uVar1;
      uVar1 = puVar7[0x14];
      uVar4 = puVar7[0x15];
      puVar8[0x12] = uVar2;
      puVar8[0x13] = uVar3;
      uVar2 = puVar7[0x16];
      uVar3 = puVar7[0x17];
      puVar8[0x14] = uVar1;
      puVar8[0x15] = uVar4;
      puVar8[0x16] = uVar2;
      puVar8[0x17] = uVar3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UInputRouter,UInputRouter_*_&> @ 1496745a0

UInputRouter * __cdecl
UE::Core::Private::DereferenceIfNecessary<UInputRouter,UInputRouter_*_&>(UInputRouter **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_const_*>_> @ 14967f8c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_const_*>_>
          (ushort param_1,ForElementType<UClass_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 6) {
      iVar8 = 5;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 6) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_const_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// SetCommonSubGizmoProperties<UAxisAngleGizmo> @ 14967fe20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>
          (UAxisAngleGizmo *param_1,FTransformSubGizmoCommonParams *param_2,
          FTransformSubGizmoSharedState *param_3,UGizmoScaledAndUnscaledTransformSources **param_4)

{
  int *piVar1;
  TArray<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  Type TVar3;
  UPrimitiveComponent *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  UPackage *pUVar14;
  UGizmoTransformProxyTransformSource *pUVar15;
  UGizmoScaledAndUnscaledTransformSources *pUVar16;
  UGizmoComponentHitTarget *pUVar17;
  longlong lVar18;
  UGizmoTransformChangeStateTarget *pUVar19;
  IGizmoTransformSource *pIVar20;
  longlong *plVar21;
  uint uVar22;
  TOptional<FText>_u_0 *pTVar23;
  UPrimitiveComponent *pUVar24;
  undefined8 uVar25;
  IToolContextTransactionProvider *pIVar26;
  IGizmoTransformSource *pIVar27;
  undefined1 auStackY_168 [32];
  IGizmoTransformSource *local_118;
  UGizmoScaledAndUnscaledTransformSources **local_110;
  UGizmoComponentAxisSource *local_108;
  UPrimitiveComponent *local_100;
  FText local_f8;
  undefined1 local_e8 [8];
  UGizmoComponentAxisSource *local_e0;
  UTransformProxy *local_d8;
  UAxisAngleGizmo *local_d0;
  TOptional<FText>_u_0 local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (((param_1 == (UAxisAngleGizmo *)0x0) || (param_2->Component == (UPrimitiveComponent *)0x0)) ||
     (param_2->TransformProxy == (UTransformProxy *)0x0)) {
    return false;
  }
  lVar18 = *(longlong *)&param_2->Component->field_0xa8;
  pUVar14 = (UPackage *)param_2->OuterForSubobjects;
  local_110 = param_4;
  local_d0 = param_1;
  if (pUVar14 == (UPackage *)0x0) {
    pUVar14 = GetTransientPackage();
  }
  TVar3 = param_2->Axis;
  pIVar27 = (IGizmoTransformSource *)0x0;
  if (TVar3 != None) {
    if (TVar3 == Y) {
      uVar22 = 1;
    }
    else {
      uVar22 = 0;
      if (TVar3 == Z) {
        uVar22 = 2;
      }
    }
    if (param_2->bAxisIsBasedOnRootComponent == false) {
      local_e0 = UGizmoComponentAxisSource::Construct
                           ((USceneComponent *)param_2->Component,uVar22,true,(UObject *)pUVar14);
      TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*>
                (&param_1->AxisSource,&local_e0);
    }
    else if ((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
            (param_3->CardinalAxisSources[uVar22] == (UGizmoComponentAxisSource *)0x0)) {
      if ((lVar18 == 0) || (*(USceneComponent **)(lVar18 + 0x1b8) == (USceneComponent *)0x0)) {
        bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5093222843823423612>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                            ,0x7c,"ComponentOwnerActor && ComponentOwnerActor->GetRootComponent()");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
      }
      else {
        local_108 = UGizmoComponentAxisSource::Construct
                              (*(USceneComponent **)(lVar18 + 0x1b8),uVar22,true,(UObject *)pUVar14)
        ;
        TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*_&>
                  (&param_1->AxisSource,&local_108);
        if (param_3 != (FTransformSubGizmoSharedState *)0x0) {
          param_3->CardinalAxisSources[uVar22] = local_108;
        }
      }
    }
    else {
      TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*_&>
                (&param_1->AxisSource,param_3->CardinalAxisSources + uVar22);
    }
  }
  pUVar4 = param_2->Component;
  pUVar24 = pUVar4;
  local_100 = pUVar4;
  if (((param_2->bManipulatesRootComponent != false) &&
      ((lVar18 == 0 ||
       (pUVar24 = *(UPrimitiveComponent **)(lVar18 + 0x1b8), local_100 = pUVar24,
       pUVar24 == (UPrimitiveComponent *)0x0)))) &&
     (local_100 = pUVar4,
     bVar11 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5093222843823423628>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                         ,0x8c,"ComponentOwnerActor && ComponentOwnerActor->GetRootComponent()"),
     pUVar24 = pUVar4, bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  if (((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
      (param_3->TransformSource == (UGizmoScaledAndUnscaledTransformSources *)0x0)) ||
     (param_2->bManipulatesRootComponent == false)) {
    pUVar15 = UGizmoTransformProxyTransformSource::Construct
                        (param_2->TransformProxy,(UObject *)pUVar14);
    pIVar20 = (IGizmoTransformSource *)&pUVar15->_padding_;
    if (pUVar15 == (UGizmoTransformProxyTransformSource *)0x0) {
      pIVar20 = pIVar27;
    }
    pUVar16 = UGizmoScaledAndUnscaledTransformSources::Construct
                        (pIVar20,(USceneComponent *)pUVar24,(UObject *)pUVar14);
    *local_110 = pUVar16;
    if ((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
       (param_2->bManipulatesRootComponent != false)) {
      param_3->TransformSource = pUVar16;
    }
  }
  else {
    *local_110 = param_3->TransformSource;
  }
  pUVar4 = param_2->Component;
  pUVar17 = NewObject<UGizmoComponentHitTarget>((UObject *)pUVar14);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPrimitiveComponent *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  (pUVar17->Component).field0_0x0.DebugPtr = pUVar4;
  pIVar20 = pIVar27;
  if (pUVar17 != (UGizmoComponentHitTarget *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar17);
    }
    pIVar20 = (IGizmoTransformSource *)&pUVar17->_padding_;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (UGizmoComponentHitTarget *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar17);
  }
  *(UGizmoComponentHitTarget **)&param_1->HitTarget = pUVar17;
  *(IGizmoTransformSource **)&(param_1->HitTarget).field_0x8 = pIVar20;
  local_b8 = *(longlong *)&pUVar17->UpdateHoverFunction;
  uVar7 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x8;
  local_a8 = *(longlong *)&(pUVar17->UpdateHoverFunction).field_0x10;
  uVar8 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x18;
  uVar25 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x20;
  plStack_90 = *(longlong **)&(pUVar17->UpdateHoverFunction).field_0x28;
  *(code **)&pUVar17->UpdateHoverFunction =
       Core::Private::Function::
       TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_1>,void,bool>
       ::Call;
  *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x8 = uStack_b0;
  uStack_a0._0_4_ = SUB84(pUVar17,0);
  uVar9 = (undefined4)uStack_a0;
  uStack_a0._4_4_ = (undefined4)((ulonglong)pUVar17 >> 0x20);
  uVar10 = uStack_a0._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x10 = 0x51e9f4a8;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x14 = 1;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x18 = (undefined4)uStack_a0;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x1c = uStack_a0._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x20 = (undefined4)local_98;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x24 = local_98._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x2c = 0;
  uStack_b0 = uVar7;
  uStack_a0 = uVar8;
  local_98 = uVar25;
  if (local_b8 != 0) {
    plVar21 = &local_a8;
    if (plStack_90 != (longlong *)0x0) {
      plVar21 = plStack_90;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  local_88 = *(longlong *)&pUVar17->UpdateInteractingFunction;
  uVar7 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x8;
  local_78 = *(longlong *)&(pUVar17->UpdateInteractingFunction).field_0x10;
  uStack_70 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x18;
  uVar25 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x20;
  plStack_60 = *(longlong **)&(pUVar17->UpdateInteractingFunction).field_0x28;
  *(code **)&pUVar17->UpdateInteractingFunction =
       Core::Private::Function::
       TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_2>,void,bool>
       ::Call;
  *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x8 = uStack_80;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x10 = 0x51e9f4c8;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x14 = 1;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x18 = uVar9;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x1c = uVar10;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x20 = (undefined4)local_68;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x24 = local_68._4_4_;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x2c = 0;
  uStack_80 = uVar7;
  local_68 = uVar25;
  if (local_88 != 0) {
    plVar21 = &local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar21 = plStack_60;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
      (param_3->StateTarget != (UGizmoTransformChangeStateTarget *)0x0)) &&
     (param_2->bManipulatesRootComponent != false)) {
    TScriptInterface<IGizmoStateTarget>::operator=<UGizmoTransformChangeStateTarget_*_&>
              (&param_1->StateTarget,&param_3->StateTarget);
    return true;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_c8.TypedValue,L"UCombinedTransformGizmo",L"UCombinedTransformGizmoTransaction",
             L"Transform");
  uVar25 = *(undefined8 *)&(param_2->TransactionName).field0_0x0;
  pTVar23 = &(param_2->TransactionName).field0_0x0;
  if ((ITextData *)uVar25 == (ITextData *)0x0) {
    pTVar23 = &local_c8;
    local_f8.TextData.Reference = (ITextData *)local_c8.TypedValue.TextData.Reference;
    uVar25 = local_c8.TypedValue.TextData.Reference;
    if (local_c8.TypedValue.TextData.Reference == (ITextData *)0x0) goto LAB_149680209;
  }
  local_f8.TextData.Reference = (ITextData *)uVar25;
  (**(code **)((longlong)*(ITextData *)uVar25 + 8))(uVar25,local_e8);
LAB_149680209:
  pIVar26 = param_2->TransactionProvider;
  local_f8.Flags = (pTVar23->TypedValue).Flags;
  if (pIVar26 == (IToolContextTransactionProvider *)0x0) {
    lVar18 = (**(code **)(param_1->_padding_ + 0x2d8))(param_1);
    pIVar26 = (IToolContextTransactionProvider *)(lVar18 + 0x28);
    if (lVar18 == 0) {
      pIVar26 = (IToolContextTransactionProvider *)0x0;
    }
  }
  pUVar19 = UGizmoTransformChangeStateTarget::Construct
                      ((USceneComponent *)local_100,&local_f8,pIVar26,(UObject *)pUVar14);
  pTVar2 = &pUVar19->DependentChangeSources;
  pIVar20 = ::operator_new(0x20);
  local_118 = pIVar27;
  if (pIVar20 != (IGizmoTransformSource *)0x0) {
    local_d8 = param_2->TransformProxy;
    *pIVar20 = (IGizmoTransformSource)&___7FTransformProxyChangeSource__6B_;
    *(TObjectPtr<UPrimitiveComponent>_u_0 *)(pIVar20 + 1) = (TObjectPtr<UPrimitiveComponent>_u_0)0x0
    ;
    pIVar20[2] = (IGizmoTransformSource)0x0;
    *(undefined1 *)(pIVar20 + 3) = 0;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UTransformProxy *)0x0)) {
      GC::MarkAsReachable((UObject *)local_d8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pIVar20 + 1),(FObjectPtr)&local_d8);
    local_118 = pIVar20;
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 <
       pFVar5 + (longlong)(pUVar19->DependentChangeSources).ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  iVar13 = (pUVar19->DependentChangeSources).ArrayNum;
  piVar1 = &(pUVar19->DependentChangeSources).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pUVar19->DependentChangeSources).ArrayNum = iVar13 + 1;
  *(IGizmoTransformSource **)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_118;
  if (pUVar19 != (UGizmoTransformChangeStateTarget *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar19);
    }
    pIVar27 = (IGizmoTransformSource *)&pUVar19->_padding_;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UGizmoTransformChangeStateTarget *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar19);
  }
  *(UGizmoTransformChangeStateTarget **)&local_d0->StateTarget = pUVar19;
  *(IGizmoTransformSource **)&(local_d0->StateTarget).field_0x8 = pIVar27;
  if ((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
     (param_2->bManipulatesRootComponent != false)) {
    param_3->StateTarget = pUVar19;
  }
  if ((ITextData *)uVar25 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar25 + 0x10))(uVar25);
  }
  if (local_c8.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_c8.TypedValue.TextData.Reference + 0x10))();
  }
  return true;
}

// SetCommonSubGizmoProperties<UAxisPositionGizmo> @ 149680410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>
          (UAxisPositionGizmo *param_1,FTransformSubGizmoCommonParams *param_2,
          FTransformSubGizmoSharedState *param_3,UGizmoScaledAndUnscaledTransformSources **param_4)

{
  int *piVar1;
  TArray<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  Type TVar3;
  UPrimitiveComponent *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  UPackage *pUVar14;
  UGizmoTransformProxyTransformSource *pUVar15;
  UGizmoScaledAndUnscaledTransformSources *pUVar16;
  UGizmoComponentHitTarget *pUVar17;
  longlong lVar18;
  UGizmoTransformChangeStateTarget *pUVar19;
  IGizmoTransformSource *pIVar20;
  longlong *plVar21;
  uint uVar22;
  TOptional<FText>_u_0 *pTVar23;
  UPrimitiveComponent *pUVar24;
  undefined8 uVar25;
  IToolContextTransactionProvider *pIVar26;
  IGizmoTransformSource *pIVar27;
  undefined1 auStackY_168 [32];
  IGizmoTransformSource *local_118;
  UGizmoScaledAndUnscaledTransformSources **local_110;
  UGizmoComponentAxisSource *local_108;
  UPrimitiveComponent *local_100;
  FText local_f8;
  undefined1 local_e8 [8];
  UGizmoComponentAxisSource *local_e0;
  UTransformProxy *local_d8;
  UAxisPositionGizmo *local_d0;
  TOptional<FText>_u_0 local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (((param_1 == (UAxisPositionGizmo *)0x0) || (param_2->Component == (UPrimitiveComponent *)0x0))
     || (param_2->TransformProxy == (UTransformProxy *)0x0)) {
    return false;
  }
  lVar18 = *(longlong *)&param_2->Component->field_0xa8;
  pUVar14 = (UPackage *)param_2->OuterForSubobjects;
  local_110 = param_4;
  local_d0 = param_1;
  if (pUVar14 == (UPackage *)0x0) {
    pUVar14 = GetTransientPackage();
  }
  TVar3 = param_2->Axis;
  pIVar27 = (IGizmoTransformSource *)0x0;
  if (TVar3 != None) {
    if (TVar3 == Y) {
      uVar22 = 1;
    }
    else {
      uVar22 = 0;
      if (TVar3 == Z) {
        uVar22 = 2;
      }
    }
    if (param_2->bAxisIsBasedOnRootComponent == false) {
      local_e0 = UGizmoComponentAxisSource::Construct
                           ((USceneComponent *)param_2->Component,uVar22,true,(UObject *)pUVar14);
      TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*>
                (&param_1->AxisSource,&local_e0);
    }
    else if ((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
            (param_3->CardinalAxisSources[uVar22] == (UGizmoComponentAxisSource *)0x0)) {
      if ((lVar18 == 0) || (*(USceneComponent **)(lVar18 + 0x1b8) == (USceneComponent *)0x0)) {
        bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5093222843823423612>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                            ,0x7c,"ComponentOwnerActor && ComponentOwnerActor->GetRootComponent()");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
      }
      else {
        local_108 = UGizmoComponentAxisSource::Construct
                              (*(USceneComponent **)(lVar18 + 0x1b8),uVar22,true,(UObject *)pUVar14)
        ;
        TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*_&>
                  (&param_1->AxisSource,&local_108);
        if (param_3 != (FTransformSubGizmoSharedState *)0x0) {
          param_3->CardinalAxisSources[uVar22] = local_108;
        }
      }
    }
    else {
      TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*_&>
                (&param_1->AxisSource,param_3->CardinalAxisSources + uVar22);
    }
  }
  pUVar4 = param_2->Component;
  pUVar24 = pUVar4;
  local_100 = pUVar4;
  if (((param_2->bManipulatesRootComponent != false) &&
      ((lVar18 == 0 ||
       (pUVar24 = *(UPrimitiveComponent **)(lVar18 + 0x1b8), local_100 = pUVar24,
       pUVar24 == (UPrimitiveComponent *)0x0)))) &&
     (local_100 = pUVar4,
     bVar11 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5093222843823423628>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                         ,0x8c,"ComponentOwnerActor && ComponentOwnerActor->GetRootComponent()"),
     pUVar24 = pUVar4, bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  if (((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
      (param_3->TransformSource == (UGizmoScaledAndUnscaledTransformSources *)0x0)) ||
     (param_2->bManipulatesRootComponent == false)) {
    pUVar15 = UGizmoTransformProxyTransformSource::Construct
                        (param_2->TransformProxy,(UObject *)pUVar14);
    pIVar20 = (IGizmoTransformSource *)&pUVar15->_padding_;
    if (pUVar15 == (UGizmoTransformProxyTransformSource *)0x0) {
      pIVar20 = pIVar27;
    }
    pUVar16 = UGizmoScaledAndUnscaledTransformSources::Construct
                        (pIVar20,(USceneComponent *)pUVar24,(UObject *)pUVar14);
    *local_110 = pUVar16;
    if ((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
       (param_2->bManipulatesRootComponent != false)) {
      param_3->TransformSource = pUVar16;
    }
  }
  else {
    *local_110 = param_3->TransformSource;
  }
  pUVar4 = param_2->Component;
  pUVar17 = NewObject<UGizmoComponentHitTarget>((UObject *)pUVar14);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPrimitiveComponent *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  (pUVar17->Component).field0_0x0.DebugPtr = pUVar4;
  pIVar20 = pIVar27;
  if (pUVar17 != (UGizmoComponentHitTarget *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar17);
    }
    pIVar20 = (IGizmoTransformSource *)&pUVar17->_padding_;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (UGizmoComponentHitTarget *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar17);
  }
  *(UGizmoComponentHitTarget **)&param_1->HitTarget = pUVar17;
  *(IGizmoTransformSource **)&(param_1->HitTarget).field_0x8 = pIVar20;
  local_b8 = *(longlong *)&pUVar17->UpdateHoverFunction;
  uVar7 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x8;
  local_a8 = *(longlong *)&(pUVar17->UpdateHoverFunction).field_0x10;
  uVar8 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x18;
  uVar25 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x20;
  plStack_90 = *(longlong **)&(pUVar17->UpdateHoverFunction).field_0x28;
  *(code **)&pUVar17->UpdateHoverFunction =
       Core::Private::Function::
       TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_1>,void,bool>
       ::Call;
  *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x8 = uStack_b0;
  uStack_a0._0_4_ = SUB84(pUVar17,0);
  uVar9 = (undefined4)uStack_a0;
  uStack_a0._4_4_ = (undefined4)((ulonglong)pUVar17 >> 0x20);
  uVar10 = uStack_a0._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x10 = 0x51e9f468;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x14 = 1;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x18 = (undefined4)uStack_a0;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x1c = uStack_a0._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x20 = (undefined4)local_98;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x24 = local_98._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x2c = 0;
  uStack_b0 = uVar7;
  uStack_a0 = uVar8;
  local_98 = uVar25;
  if (local_b8 != 0) {
    plVar21 = &local_a8;
    if (plStack_90 != (longlong *)0x0) {
      plVar21 = plStack_90;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  local_88 = *(longlong *)&pUVar17->UpdateInteractingFunction;
  uVar7 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x8;
  local_78 = *(longlong *)&(pUVar17->UpdateInteractingFunction).field_0x10;
  uStack_70 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x18;
  uVar25 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x20;
  plStack_60 = *(longlong **)&(pUVar17->UpdateInteractingFunction).field_0x28;
  *(code **)&pUVar17->UpdateInteractingFunction =
       Core::Private::Function::
       TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_2>,void,bool>
       ::Call;
  *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x8 = uStack_80;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x10 = 0x51e9f488;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x14 = 1;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x18 = uVar9;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x1c = uVar10;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x20 = (undefined4)local_68;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x24 = local_68._4_4_;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x2c = 0;
  uStack_80 = uVar7;
  local_68 = uVar25;
  if (local_88 != 0) {
    plVar21 = &local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar21 = plStack_60;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
      (param_3->StateTarget != (UGizmoTransformChangeStateTarget *)0x0)) &&
     (param_2->bManipulatesRootComponent != false)) {
    TScriptInterface<IGizmoStateTarget>::operator=<UGizmoTransformChangeStateTarget_*_&>
              (&param_1->StateTarget,&param_3->StateTarget);
    return true;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_c8.TypedValue,L"UCombinedTransformGizmo",L"UCombinedTransformGizmoTransaction",
             L"Transform");
  uVar25 = *(undefined8 *)&(param_2->TransactionName).field0_0x0;
  pTVar23 = &(param_2->TransactionName).field0_0x0;
  if ((ITextData *)uVar25 == (ITextData *)0x0) {
    pTVar23 = &local_c8;
    local_f8.TextData.Reference = (ITextData *)local_c8.TypedValue.TextData.Reference;
    uVar25 = local_c8.TypedValue.TextData.Reference;
    if (local_c8.TypedValue.TextData.Reference == (ITextData *)0x0) goto LAB_1496807fc;
  }
  local_f8.TextData.Reference = (ITextData *)uVar25;
  (**(code **)((longlong)*(ITextData *)uVar25 + 8))(uVar25,local_e8);
LAB_1496807fc:
  pIVar26 = param_2->TransactionProvider;
  local_f8.Flags = (pTVar23->TypedValue).Flags;
  if (pIVar26 == (IToolContextTransactionProvider *)0x0) {
    lVar18 = (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1);
    pIVar26 = (IToolContextTransactionProvider *)(lVar18 + 0x28);
    if (lVar18 == 0) {
      pIVar26 = (IToolContextTransactionProvider *)0x0;
    }
  }
  pUVar19 = UGizmoTransformChangeStateTarget::Construct
                      ((USceneComponent *)local_100,&local_f8,pIVar26,(UObject *)pUVar14);
  pTVar2 = &pUVar19->DependentChangeSources;
  pIVar20 = ::operator_new(0x20);
  local_118 = pIVar27;
  if (pIVar20 != (IGizmoTransformSource *)0x0) {
    local_d8 = param_2->TransformProxy;
    *pIVar20 = (IGizmoTransformSource)&___7FTransformProxyChangeSource__6B_;
    *(TObjectPtr<UPrimitiveComponent>_u_0 *)(pIVar20 + 1) = (TObjectPtr<UPrimitiveComponent>_u_0)0x0
    ;
    pIVar20[2] = (IGizmoTransformSource)0x0;
    *(undefined1 *)(pIVar20 + 3) = 0;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UTransformProxy *)0x0)) {
      GC::MarkAsReachable((UObject *)local_d8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pIVar20 + 1),(FObjectPtr)&local_d8);
    local_118 = pIVar20;
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 <
       pFVar5 + (longlong)(pUVar19->DependentChangeSources).ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  iVar13 = (pUVar19->DependentChangeSources).ArrayNum;
  piVar1 = &(pUVar19->DependentChangeSources).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pUVar19->DependentChangeSources).ArrayNum = iVar13 + 1;
  *(IGizmoTransformSource **)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_118;
  if (pUVar19 != (UGizmoTransformChangeStateTarget *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar19);
    }
    pIVar27 = (IGizmoTransformSource *)&pUVar19->_padding_;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UGizmoTransformChangeStateTarget *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar19);
  }
  *(UGizmoTransformChangeStateTarget **)&local_d0->StateTarget = pUVar19;
  *(IGizmoTransformSource **)&(local_d0->StateTarget).field_0x8 = pIVar27;
  if ((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
     (param_2->bManipulatesRootComponent != false)) {
    param_3->StateTarget = pUVar19;
  }
  if ((ITextData *)uVar25 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar25 + 0x10))(uVar25);
  }
  if (local_c8.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_c8.TypedValue.TextData.Reference + 0x10))();
  }
  return true;
}

// SetCommonSubGizmoProperties<UFreePositionSubGizmo> @ 149680a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>
          (UFreePositionSubGizmo *param_1,FTransformSubGizmoCommonParams *param_2,
          FTransformSubGizmoSharedState *param_3,UGizmoScaledAndUnscaledTransformSources **param_4)

{
  int *piVar1;
  TArray<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  Type TVar3;
  UPrimitiveComponent *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  UPackage *pUVar14;
  UGizmoTransformProxyTransformSource *pUVar15;
  UGizmoScaledAndUnscaledTransformSources *pUVar16;
  UGizmoComponentHitTarget *pUVar17;
  longlong lVar18;
  UGizmoTransformChangeStateTarget *pUVar19;
  IGizmoTransformSource *pIVar20;
  longlong *plVar21;
  uint uVar22;
  TOptional<FText>_u_0 *pTVar23;
  UPrimitiveComponent *pUVar24;
  undefined8 uVar25;
  IToolContextTransactionProvider *pIVar26;
  IGizmoTransformSource *pIVar27;
  undefined1 auStackY_168 [32];
  IGizmoTransformSource *local_118;
  UGizmoScaledAndUnscaledTransformSources **local_110;
  UGizmoComponentAxisSource *local_108;
  UPrimitiveComponent *local_100;
  FText local_f8;
  undefined1 local_e8 [8];
  UGizmoComponentAxisSource *local_e0;
  UTransformProxy *local_d8;
  UFreePositionSubGizmo *local_d0;
  TOptional<FText>_u_0 local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (((param_1 == (UFreePositionSubGizmo *)0x0) ||
      (param_2->Component == (UPrimitiveComponent *)0x0)) ||
     (param_2->TransformProxy == (UTransformProxy *)0x0)) {
    return false;
  }
  lVar18 = *(longlong *)&param_2->Component->field_0xa8;
  pUVar14 = (UPackage *)param_2->OuterForSubobjects;
  local_110 = param_4;
  local_d0 = param_1;
  if (pUVar14 == (UPackage *)0x0) {
    pUVar14 = GetTransientPackage();
  }
  TVar3 = param_2->Axis;
  pIVar27 = (IGizmoTransformSource *)0x0;
  if (TVar3 != None) {
    if (TVar3 == Y) {
      uVar22 = 1;
    }
    else {
      uVar22 = 0;
      if (TVar3 == Z) {
        uVar22 = 2;
      }
    }
    if (param_2->bAxisIsBasedOnRootComponent == false) {
      local_e0 = UGizmoComponentAxisSource::Construct
                           ((USceneComponent *)param_2->Component,uVar22,true,(UObject *)pUVar14);
      TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*>
                ((TScriptInterface<IGizmoAxisSource> *)&param_1->_padding_,&local_e0);
    }
    else if ((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
            (param_3->CardinalAxisSources[uVar22] == (UGizmoComponentAxisSource *)0x0)) {
      if ((lVar18 == 0) || (*(USceneComponent **)(lVar18 + 0x1b8) == (USceneComponent *)0x0)) {
        bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5093222843823423612>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                            ,0x7c,"ComponentOwnerActor && ComponentOwnerActor->GetRootComponent()");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
      }
      else {
        local_108 = UGizmoComponentAxisSource::Construct
                              (*(USceneComponent **)(lVar18 + 0x1b8),uVar22,true,(UObject *)pUVar14)
        ;
        TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*_&>
                  ((TScriptInterface<IGizmoAxisSource> *)&param_1->_padding_,&local_108);
        if (param_3 != (FTransformSubGizmoSharedState *)0x0) {
          param_3->CardinalAxisSources[uVar22] = local_108;
        }
      }
    }
    else {
      TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*_&>
                ((TScriptInterface<IGizmoAxisSource> *)&param_1->_padding_,
                 param_3->CardinalAxisSources + uVar22);
    }
  }
  pUVar4 = param_2->Component;
  pUVar24 = pUVar4;
  local_100 = pUVar4;
  if (((param_2->bManipulatesRootComponent != false) &&
      ((lVar18 == 0 ||
       (pUVar24 = *(UPrimitiveComponent **)(lVar18 + 0x1b8), local_100 = pUVar24,
       pUVar24 == (UPrimitiveComponent *)0x0)))) &&
     (local_100 = pUVar4,
     bVar11 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5093222843823423628>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                         ,0x8c,"ComponentOwnerActor && ComponentOwnerActor->GetRootComponent()"),
     pUVar24 = pUVar4, bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  if (((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
      (param_3->TransformSource == (UGizmoScaledAndUnscaledTransformSources *)0x0)) ||
     (param_2->bManipulatesRootComponent == false)) {
    pUVar15 = UGizmoTransformProxyTransformSource::Construct
                        (param_2->TransformProxy,(UObject *)pUVar14);
    pIVar20 = (IGizmoTransformSource *)&pUVar15->_padding_;
    if (pUVar15 == (UGizmoTransformProxyTransformSource *)0x0) {
      pIVar20 = pIVar27;
    }
    pUVar16 = UGizmoScaledAndUnscaledTransformSources::Construct
                        (pIVar20,(USceneComponent *)pUVar24,(UObject *)pUVar14);
    *local_110 = pUVar16;
    if ((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
       (param_2->bManipulatesRootComponent != false)) {
      param_3->TransformSource = pUVar16;
    }
  }
  else {
    *local_110 = param_3->TransformSource;
  }
  pUVar4 = param_2->Component;
  pUVar17 = NewObject<UGizmoComponentHitTarget>((UObject *)pUVar14);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPrimitiveComponent *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  (pUVar17->Component).field0_0x0.DebugPtr = pUVar4;
  pIVar20 = pIVar27;
  if (pUVar17 != (UGizmoComponentHitTarget *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar17);
    }
    pIVar20 = (IGizmoTransformSource *)&pUVar17->_padding_;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (UGizmoComponentHitTarget *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar17);
  }
  param_1->_padding_ = (longlong)pUVar17;
  param_1->_padding_ = (longlong)pIVar20;
  local_b8 = *(longlong *)&pUVar17->UpdateHoverFunction;
  uVar7 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x8;
  local_a8 = *(longlong *)&(pUVar17->UpdateHoverFunction).field_0x10;
  uVar8 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x18;
  uVar25 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x20;
  plStack_90 = *(longlong **)&(pUVar17->UpdateHoverFunction).field_0x28;
  *(code **)&pUVar17->UpdateHoverFunction =
       Core::Private::Function::
       TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_1>,void,bool>
       ::Call;
  *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x8 = uStack_b0;
  uStack_a0._0_4_ = SUB84(pUVar17,0);
  uVar9 = (undefined4)uStack_a0;
  uStack_a0._4_4_ = (undefined4)((ulonglong)pUVar17 >> 0x20);
  uVar10 = uStack_a0._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x10 = 0x51e9f528;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x14 = 1;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x18 = (undefined4)uStack_a0;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x1c = uStack_a0._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x20 = (undefined4)local_98;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x24 = local_98._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x2c = 0;
  uStack_b0 = uVar7;
  uStack_a0 = uVar8;
  local_98 = uVar25;
  if (local_b8 != 0) {
    plVar21 = &local_a8;
    if (plStack_90 != (longlong *)0x0) {
      plVar21 = plStack_90;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  local_88 = *(longlong *)&pUVar17->UpdateInteractingFunction;
  uVar7 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x8;
  local_78 = *(longlong *)&(pUVar17->UpdateInteractingFunction).field_0x10;
  uStack_70 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x18;
  uVar25 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x20;
  plStack_60 = *(longlong **)&(pUVar17->UpdateInteractingFunction).field_0x28;
  *(code **)&pUVar17->UpdateInteractingFunction =
       Core::Private::Function::
       TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_2>,void,bool>
       ::Call;
  *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x8 = uStack_80;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x10 = 0x51e9f548;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x14 = 1;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x18 = uVar9;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x1c = uVar10;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x20 = (undefined4)local_68;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x24 = local_68._4_4_;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x2c = 0;
  uStack_80 = uVar7;
  local_68 = uVar25;
  if (local_88 != 0) {
    plVar21 = &local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar21 = plStack_60;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
      (param_3->StateTarget != (UGizmoTransformChangeStateTarget *)0x0)) &&
     (param_2->bManipulatesRootComponent != false)) {
    TScriptInterface<IGizmoStateTarget>::operator=<UGizmoTransformChangeStateTarget_*_&>
              ((TScriptInterface<IGizmoStateTarget> *)&param_1->_padding_,&param_3->StateTarget);
    return true;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_c8.TypedValue,L"UCombinedTransformGizmo",L"UCombinedTransformGizmoTransaction",
             L"Transform");
  uVar25 = *(undefined8 *)&(param_2->TransactionName).field0_0x0;
  pTVar23 = &(param_2->TransactionName).field0_0x0;
  if ((ITextData *)uVar25 == (ITextData *)0x0) {
    pTVar23 = &local_c8;
    local_f8.TextData.Reference = (ITextData *)local_c8.TypedValue.TextData.Reference;
    uVar25 = local_c8.TypedValue.TextData.Reference;
    if (local_c8.TypedValue.TextData.Reference == (ITextData *)0x0) goto LAB_149680de9;
  }
  local_f8.TextData.Reference = (ITextData *)uVar25;
  (**(code **)((longlong)*(ITextData *)uVar25 + 8))(uVar25,local_e8);
LAB_149680de9:
  pIVar26 = param_2->TransactionProvider;
  local_f8.Flags = (pTVar23->TypedValue).Flags;
  if (pIVar26 == (IToolContextTransactionProvider *)0x0) {
    lVar18 = (**(code **)(param_1->_padding_ + 0x2d8))(param_1);
    pIVar26 = (IToolContextTransactionProvider *)(lVar18 + 0x28);
    if (lVar18 == 0) {
      pIVar26 = (IToolContextTransactionProvider *)0x0;
    }
  }
  pUVar19 = UGizmoTransformChangeStateTarget::Construct
                      ((USceneComponent *)local_100,&local_f8,pIVar26,(UObject *)pUVar14);
  pTVar2 = &pUVar19->DependentChangeSources;
  pIVar20 = ::operator_new(0x20);
  local_118 = pIVar27;
  if (pIVar20 != (IGizmoTransformSource *)0x0) {
    local_d8 = param_2->TransformProxy;
    *pIVar20 = (IGizmoTransformSource)&___7FTransformProxyChangeSource__6B_;
    *(TObjectPtr<UPrimitiveComponent>_u_0 *)(pIVar20 + 1) = (TObjectPtr<UPrimitiveComponent>_u_0)0x0
    ;
    pIVar20[2] = (IGizmoTransformSource)0x0;
    *(undefined1 *)(pIVar20 + 3) = 0;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UTransformProxy *)0x0)) {
      GC::MarkAsReachable((UObject *)local_d8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pIVar20 + 1),(FObjectPtr)&local_d8);
    local_118 = pIVar20;
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 <
       pFVar5 + (longlong)(pUVar19->DependentChangeSources).ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  iVar13 = (pUVar19->DependentChangeSources).ArrayNum;
  piVar1 = &(pUVar19->DependentChangeSources).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pUVar19->DependentChangeSources).ArrayNum = iVar13 + 1;
  *(IGizmoTransformSource **)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_118;
  if (pUVar19 != (UGizmoTransformChangeStateTarget *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar19);
    }
    pIVar27 = (IGizmoTransformSource *)&pUVar19->_padding_;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UGizmoTransformChangeStateTarget *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar19);
  }
  local_d0->_padding_ = (longlong)pUVar19;
  local_d0->_padding_ = (longlong)pIVar27;
  if ((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
     (param_2->bManipulatesRootComponent != false)) {
    param_3->StateTarget = pUVar19;
  }
  if ((ITextData *)uVar25 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar25 + 0x10))(uVar25);
  }
  if (local_c8.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_c8.TypedValue.TextData.Reference + 0x10))();
  }
  return true;
}

// SetCommonSubGizmoProperties<UFreeRotationSubGizmo> @ 149680ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>
          (UFreeRotationSubGizmo *param_1,FTransformSubGizmoCommonParams *param_2,
          FTransformSubGizmoSharedState *param_3,UGizmoScaledAndUnscaledTransformSources **param_4)

{
  int *piVar1;
  TArray<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  Type TVar3;
  UPrimitiveComponent *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  UPackage *pUVar14;
  UGizmoTransformProxyTransformSource *pUVar15;
  UGizmoScaledAndUnscaledTransformSources *pUVar16;
  UGizmoComponentHitTarget *pUVar17;
  longlong lVar18;
  UGizmoTransformChangeStateTarget *pUVar19;
  IGizmoTransformSource *pIVar20;
  longlong *plVar21;
  uint uVar22;
  TOptional<FText>_u_0 *pTVar23;
  UPrimitiveComponent *pUVar24;
  undefined8 uVar25;
  IToolContextTransactionProvider *pIVar26;
  IGizmoTransformSource *pIVar27;
  undefined1 auStackY_168 [32];
  IGizmoTransformSource *local_118;
  UGizmoScaledAndUnscaledTransformSources **local_110;
  UGizmoComponentAxisSource *local_108;
  UPrimitiveComponent *local_100;
  FText local_f8;
  undefined1 local_e8 [8];
  UGizmoComponentAxisSource *local_e0;
  UTransformProxy *local_d8;
  UFreeRotationSubGizmo *local_d0;
  TOptional<FText>_u_0 local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (((param_1 == (UFreeRotationSubGizmo *)0x0) ||
      (param_2->Component == (UPrimitiveComponent *)0x0)) ||
     (param_2->TransformProxy == (UTransformProxy *)0x0)) {
    return false;
  }
  lVar18 = *(longlong *)&param_2->Component->field_0xa8;
  pUVar14 = (UPackage *)param_2->OuterForSubobjects;
  local_110 = param_4;
  local_d0 = param_1;
  if (pUVar14 == (UPackage *)0x0) {
    pUVar14 = GetTransientPackage();
  }
  TVar3 = param_2->Axis;
  pIVar27 = (IGizmoTransformSource *)0x0;
  if (TVar3 != None) {
    if (TVar3 == Y) {
      uVar22 = 1;
    }
    else {
      uVar22 = 0;
      if (TVar3 == Z) {
        uVar22 = 2;
      }
    }
    if (param_2->bAxisIsBasedOnRootComponent == false) {
      local_e0 = UGizmoComponentAxisSource::Construct
                           ((USceneComponent *)param_2->Component,uVar22,true,(UObject *)pUVar14);
      TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*>
                (&param_1->AxisSource,&local_e0);
    }
    else if ((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
            (param_3->CardinalAxisSources[uVar22] == (UGizmoComponentAxisSource *)0x0)) {
      if ((lVar18 == 0) || (*(USceneComponent **)(lVar18 + 0x1b8) == (USceneComponent *)0x0)) {
        bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5093222843823423612>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                            ,0x7c,"ComponentOwnerActor && ComponentOwnerActor->GetRootComponent()");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
      }
      else {
        local_108 = UGizmoComponentAxisSource::Construct
                              (*(USceneComponent **)(lVar18 + 0x1b8),uVar22,true,(UObject *)pUVar14)
        ;
        TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*_&>
                  (&param_1->AxisSource,&local_108);
        if (param_3 != (FTransformSubGizmoSharedState *)0x0) {
          param_3->CardinalAxisSources[uVar22] = local_108;
        }
      }
    }
    else {
      TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*_&>
                (&param_1->AxisSource,param_3->CardinalAxisSources + uVar22);
    }
  }
  pUVar4 = param_2->Component;
  pUVar24 = pUVar4;
  local_100 = pUVar4;
  if (((param_2->bManipulatesRootComponent != false) &&
      ((lVar18 == 0 ||
       (pUVar24 = *(UPrimitiveComponent **)(lVar18 + 0x1b8), local_100 = pUVar24,
       pUVar24 == (UPrimitiveComponent *)0x0)))) &&
     (local_100 = pUVar4,
     bVar11 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5093222843823423628>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                         ,0x8c,"ComponentOwnerActor && ComponentOwnerActor->GetRootComponent()"),
     pUVar24 = pUVar4, bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  if (((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
      (param_3->TransformSource == (UGizmoScaledAndUnscaledTransformSources *)0x0)) ||
     (param_2->bManipulatesRootComponent == false)) {
    pUVar15 = UGizmoTransformProxyTransformSource::Construct
                        (param_2->TransformProxy,(UObject *)pUVar14);
    pIVar20 = (IGizmoTransformSource *)&pUVar15->_padding_;
    if (pUVar15 == (UGizmoTransformProxyTransformSource *)0x0) {
      pIVar20 = pIVar27;
    }
    pUVar16 = UGizmoScaledAndUnscaledTransformSources::Construct
                        (pIVar20,(USceneComponent *)pUVar24,(UObject *)pUVar14);
    *local_110 = pUVar16;
    if ((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
       (param_2->bManipulatesRootComponent != false)) {
      param_3->TransformSource = pUVar16;
    }
  }
  else {
    *local_110 = param_3->TransformSource;
  }
  pUVar4 = param_2->Component;
  pUVar17 = NewObject<UGizmoComponentHitTarget>((UObject *)pUVar14);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPrimitiveComponent *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  (pUVar17->Component).field0_0x0.DebugPtr = pUVar4;
  pIVar20 = pIVar27;
  if (pUVar17 != (UGizmoComponentHitTarget *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar17);
    }
    pIVar20 = (IGizmoTransformSource *)&pUVar17->_padding_;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (UGizmoComponentHitTarget *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar17);
  }
  *(UGizmoComponentHitTarget **)&param_1->HitTarget = pUVar17;
  *(IGizmoTransformSource **)&(param_1->HitTarget).field_0x8 = pIVar20;
  local_b8 = *(longlong *)&pUVar17->UpdateHoverFunction;
  uVar7 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x8;
  local_a8 = *(longlong *)&(pUVar17->UpdateHoverFunction).field_0x10;
  uVar8 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x18;
  uVar25 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x20;
  plStack_90 = *(longlong **)&(pUVar17->UpdateHoverFunction).field_0x28;
  *(code **)&pUVar17->UpdateHoverFunction =
       Core::Private::Function::
       TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_1>,void,bool>
       ::Call;
  *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x8 = uStack_b0;
  uStack_a0._0_4_ = SUB84(pUVar17,0);
  uVar9 = (undefined4)uStack_a0;
  uStack_a0._4_4_ = (undefined4)((ulonglong)pUVar17 >> 0x20);
  uVar10 = uStack_a0._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x10 = 0x51e9f568;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x14 = 1;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x18 = (undefined4)uStack_a0;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x1c = uStack_a0._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x20 = (undefined4)local_98;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x24 = local_98._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x2c = 0;
  uStack_b0 = uVar7;
  uStack_a0 = uVar8;
  local_98 = uVar25;
  if (local_b8 != 0) {
    plVar21 = &local_a8;
    if (plStack_90 != (longlong *)0x0) {
      plVar21 = plStack_90;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  local_88 = *(longlong *)&pUVar17->UpdateInteractingFunction;
  uVar7 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x8;
  local_78 = *(longlong *)&(pUVar17->UpdateInteractingFunction).field_0x10;
  uStack_70 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x18;
  uVar25 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x20;
  plStack_60 = *(longlong **)&(pUVar17->UpdateInteractingFunction).field_0x28;
  *(code **)&pUVar17->UpdateInteractingFunction =
       Core::Private::Function::
       TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_2>,void,bool>
       ::Call;
  *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x8 = uStack_80;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x10 = 0x51e9f588;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x14 = 1;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x18 = uVar9;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x1c = uVar10;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x20 = (undefined4)local_68;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x24 = local_68._4_4_;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x2c = 0;
  uStack_80 = uVar7;
  local_68 = uVar25;
  if (local_88 != 0) {
    plVar21 = &local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar21 = plStack_60;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
      (param_3->StateTarget != (UGizmoTransformChangeStateTarget *)0x0)) &&
     (param_2->bManipulatesRootComponent != false)) {
    TScriptInterface<IGizmoStateTarget>::operator=<UGizmoTransformChangeStateTarget_*_&>
              (&param_1->StateTarget,&param_3->StateTarget);
    return true;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_c8.TypedValue,L"UCombinedTransformGizmo",L"UCombinedTransformGizmoTransaction",
             L"Transform");
  uVar25 = *(undefined8 *)&(param_2->TransactionName).field0_0x0;
  pTVar23 = &(param_2->TransactionName).field0_0x0;
  if ((ITextData *)uVar25 == (ITextData *)0x0) {
    pTVar23 = &local_c8;
    local_f8.TextData.Reference = (ITextData *)local_c8.TypedValue.TextData.Reference;
    uVar25 = local_c8.TypedValue.TextData.Reference;
    if (local_c8.TypedValue.TextData.Reference == (ITextData *)0x0) goto LAB_1496813d9;
  }
  local_f8.TextData.Reference = (ITextData *)uVar25;
  (**(code **)((longlong)*(ITextData *)uVar25 + 8))(uVar25,local_e8);
LAB_1496813d9:
  pIVar26 = param_2->TransactionProvider;
  local_f8.Flags = (pTVar23->TypedValue).Flags;
  if (pIVar26 == (IToolContextTransactionProvider *)0x0) {
    lVar18 = (**(code **)(param_1->_padding_ + 0x2d8))(param_1);
    pIVar26 = (IToolContextTransactionProvider *)(lVar18 + 0x28);
    if (lVar18 == 0) {
      pIVar26 = (IToolContextTransactionProvider *)0x0;
    }
  }
  pUVar19 = UGizmoTransformChangeStateTarget::Construct
                      ((USceneComponent *)local_100,&local_f8,pIVar26,(UObject *)pUVar14);
  pTVar2 = &pUVar19->DependentChangeSources;
  pIVar20 = ::operator_new(0x20);
  local_118 = pIVar27;
  if (pIVar20 != (IGizmoTransformSource *)0x0) {
    local_d8 = param_2->TransformProxy;
    *pIVar20 = (IGizmoTransformSource)&___7FTransformProxyChangeSource__6B_;
    *(TObjectPtr<UPrimitiveComponent>_u_0 *)(pIVar20 + 1) = (TObjectPtr<UPrimitiveComponent>_u_0)0x0
    ;
    pIVar20[2] = (IGizmoTransformSource)0x0;
    *(undefined1 *)(pIVar20 + 3) = 0;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UTransformProxy *)0x0)) {
      GC::MarkAsReachable((UObject *)local_d8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pIVar20 + 1),(FObjectPtr)&local_d8);
    local_118 = pIVar20;
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 <
       pFVar5 + (longlong)(pUVar19->DependentChangeSources).ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  iVar13 = (pUVar19->DependentChangeSources).ArrayNum;
  piVar1 = &(pUVar19->DependentChangeSources).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pUVar19->DependentChangeSources).ArrayNum = iVar13 + 1;
  *(IGizmoTransformSource **)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_118;
  if (pUVar19 != (UGizmoTransformChangeStateTarget *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar19);
    }
    pIVar27 = (IGizmoTransformSource *)&pUVar19->_padding_;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UGizmoTransformChangeStateTarget *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar19);
  }
  *(UGizmoTransformChangeStateTarget **)&local_d0->StateTarget = pUVar19;
  *(IGizmoTransformSource **)&(local_d0->StateTarget).field_0x8 = pIVar27;
  if ((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
     (param_2->bManipulatesRootComponent != false)) {
    param_3->StateTarget = pUVar19;
  }
  if ((ITextData *)uVar25 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar25 + 0x10))(uVar25);
  }
  if (local_c8.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_c8.TypedValue.TextData.Reference + 0x10))();
  }
  return true;
}

// SetCommonSubGizmoProperties<UPlanePositionGizmo> @ 1496815d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>
          (UPlanePositionGizmo *param_1,FTransformSubGizmoCommonParams *param_2,
          FTransformSubGizmoSharedState *param_3,UGizmoScaledAndUnscaledTransformSources **param_4)

{
  int *piVar1;
  TArray<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  Type TVar3;
  UPrimitiveComponent *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  UPackage *pUVar14;
  UGizmoTransformProxyTransformSource *pUVar15;
  UGizmoScaledAndUnscaledTransformSources *pUVar16;
  UGizmoComponentHitTarget *pUVar17;
  longlong lVar18;
  UGizmoTransformChangeStateTarget *pUVar19;
  IGizmoTransformSource *pIVar20;
  longlong *plVar21;
  uint uVar22;
  TOptional<FText>_u_0 *pTVar23;
  UPrimitiveComponent *pUVar24;
  undefined8 uVar25;
  IToolContextTransactionProvider *pIVar26;
  IGizmoTransformSource *pIVar27;
  undefined1 auStackY_168 [32];
  IGizmoTransformSource *local_118;
  UGizmoScaledAndUnscaledTransformSources **local_110;
  UGizmoComponentAxisSource *local_108;
  UPrimitiveComponent *local_100;
  FText local_f8;
  undefined1 local_e8 [8];
  UGizmoComponentAxisSource *local_e0;
  UTransformProxy *local_d8;
  UPlanePositionGizmo *local_d0;
  TOptional<FText>_u_0 local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (((param_1 == (UPlanePositionGizmo *)0x0) || (param_2->Component == (UPrimitiveComponent *)0x0)
      ) || (param_2->TransformProxy == (UTransformProxy *)0x0)) {
    return false;
  }
  lVar18 = *(longlong *)&param_2->Component->field_0xa8;
  pUVar14 = (UPackage *)param_2->OuterForSubobjects;
  local_110 = param_4;
  local_d0 = param_1;
  if (pUVar14 == (UPackage *)0x0) {
    pUVar14 = GetTransientPackage();
  }
  TVar3 = param_2->Axis;
  pIVar27 = (IGizmoTransformSource *)0x0;
  if (TVar3 != None) {
    if (TVar3 == Y) {
      uVar22 = 1;
    }
    else {
      uVar22 = 0;
      if (TVar3 == Z) {
        uVar22 = 2;
      }
    }
    if (param_2->bAxisIsBasedOnRootComponent == false) {
      local_e0 = UGizmoComponentAxisSource::Construct
                           ((USceneComponent *)param_2->Component,uVar22,true,(UObject *)pUVar14);
      TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*>
                (&param_1->AxisSource,&local_e0);
    }
    else if ((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
            (param_3->CardinalAxisSources[uVar22] == (UGizmoComponentAxisSource *)0x0)) {
      if ((lVar18 == 0) || (*(USceneComponent **)(lVar18 + 0x1b8) == (USceneComponent *)0x0)) {
        bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5093222843823423612>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                            ,0x7c,"ComponentOwnerActor && ComponentOwnerActor->GetRootComponent()");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
      }
      else {
        local_108 = UGizmoComponentAxisSource::Construct
                              (*(USceneComponent **)(lVar18 + 0x1b8),uVar22,true,(UObject *)pUVar14)
        ;
        TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*_&>
                  (&param_1->AxisSource,&local_108);
        if (param_3 != (FTransformSubGizmoSharedState *)0x0) {
          param_3->CardinalAxisSources[uVar22] = local_108;
        }
      }
    }
    else {
      TScriptInterface<IGizmoAxisSource>::operator=<UGizmoComponentAxisSource_*_&>
                (&param_1->AxisSource,param_3->CardinalAxisSources + uVar22);
    }
  }
  pUVar4 = param_2->Component;
  pUVar24 = pUVar4;
  local_100 = pUVar4;
  if (((param_2->bManipulatesRootComponent != false) &&
      ((lVar18 == 0 ||
       (pUVar24 = *(UPrimitiveComponent **)(lVar18 + 0x1b8), local_100 = pUVar24,
       pUVar24 == (UPrimitiveComponent *)0x0)))) &&
     (local_100 = pUVar4,
     bVar11 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5093222843823423628>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                         ,0x8c,"ComponentOwnerActor && ComponentOwnerActor->GetRootComponent()"),
     pUVar24 = pUVar4, bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  if (((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
      (param_3->TransformSource == (UGizmoScaledAndUnscaledTransformSources *)0x0)) ||
     (param_2->bManipulatesRootComponent == false)) {
    pUVar15 = UGizmoTransformProxyTransformSource::Construct
                        (param_2->TransformProxy,(UObject *)pUVar14);
    pIVar20 = (IGizmoTransformSource *)&pUVar15->_padding_;
    if (pUVar15 == (UGizmoTransformProxyTransformSource *)0x0) {
      pIVar20 = pIVar27;
    }
    pUVar16 = UGizmoScaledAndUnscaledTransformSources::Construct
                        (pIVar20,(USceneComponent *)pUVar24,(UObject *)pUVar14);
    *local_110 = pUVar16;
    if ((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
       (param_2->bManipulatesRootComponent != false)) {
      param_3->TransformSource = pUVar16;
    }
  }
  else {
    *local_110 = param_3->TransformSource;
  }
  pUVar4 = param_2->Component;
  pUVar17 = NewObject<UGizmoComponentHitTarget>((UObject *)pUVar14);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPrimitiveComponent *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  (pUVar17->Component).field0_0x0.DebugPtr = pUVar4;
  pIVar20 = pIVar27;
  if (pUVar17 != (UGizmoComponentHitTarget *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar17);
    }
    pIVar20 = (IGizmoTransformSource *)&pUVar17->_padding_;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (UGizmoComponentHitTarget *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar17);
  }
  *(UGizmoComponentHitTarget **)&param_1->HitTarget = pUVar17;
  *(IGizmoTransformSource **)&(param_1->HitTarget).field_0x8 = pIVar20;
  local_b8 = *(longlong *)&pUVar17->UpdateHoverFunction;
  uVar7 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x8;
  local_a8 = *(longlong *)&(pUVar17->UpdateHoverFunction).field_0x10;
  uVar8 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x18;
  uVar25 = *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x20;
  plStack_90 = *(longlong **)&(pUVar17->UpdateHoverFunction).field_0x28;
  *(code **)&pUVar17->UpdateHoverFunction =
       Core::Private::Function::
       TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_1>,void,bool>
       ::Call;
  *(undefined8 *)&(pUVar17->UpdateHoverFunction).field_0x8 = uStack_b0;
  uStack_a0._0_4_ = SUB84(pUVar17,0);
  uVar9 = (undefined4)uStack_a0;
  uStack_a0._4_4_ = (undefined4)((ulonglong)pUVar17 >> 0x20);
  uVar10 = uStack_a0._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x10 = 0x51e9f4e8;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x14 = 1;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x18 = (undefined4)uStack_a0;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x1c = uStack_a0._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x20 = (undefined4)local_98;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x24 = local_98._4_4_;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar17->UpdateHoverFunction).field_0x2c = 0;
  uStack_b0 = uVar7;
  uStack_a0 = uVar8;
  local_98 = uVar25;
  if (local_b8 != 0) {
    plVar21 = &local_a8;
    if (plStack_90 != (longlong *)0x0) {
      plVar21 = plStack_90;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  local_88 = *(longlong *)&pUVar17->UpdateInteractingFunction;
  uVar7 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x8;
  local_78 = *(longlong *)&(pUVar17->UpdateInteractingFunction).field_0x10;
  uStack_70 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x18;
  uVar25 = *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x20;
  plStack_60 = *(longlong **)&(pUVar17->UpdateInteractingFunction).field_0x28;
  *(code **)&pUVar17->UpdateInteractingFunction =
       Core::Private::Function::
       TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_2>,void,bool>
       ::Call;
  *(undefined8 *)&(pUVar17->UpdateInteractingFunction).field_0x8 = uStack_80;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x10 = 0x51e9f508;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x14 = 1;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x18 = uVar9;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x1c = uVar10;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x20 = (undefined4)local_68;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x24 = local_68._4_4_;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar17->UpdateInteractingFunction).field_0x2c = 0;
  uStack_80 = uVar7;
  local_68 = uVar25;
  if (local_88 != 0) {
    plVar21 = &local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar21 = plStack_60;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
      (param_3->StateTarget != (UGizmoTransformChangeStateTarget *)0x0)) &&
     (param_2->bManipulatesRootComponent != false)) {
    TScriptInterface<IGizmoStateTarget>::operator=<UGizmoTransformChangeStateTarget_*_&>
              (&param_1->StateTarget,&param_3->StateTarget);
    return true;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_c8.TypedValue,L"UCombinedTransformGizmo",L"UCombinedTransformGizmoTransaction",
             L"Transform");
  uVar25 = *(undefined8 *)&(param_2->TransactionName).field0_0x0;
  pTVar23 = &(param_2->TransactionName).field0_0x0;
  if ((ITextData *)uVar25 == (ITextData *)0x0) {
    pTVar23 = &local_c8;
    local_f8.TextData.Reference = (ITextData *)local_c8.TypedValue.TextData.Reference;
    uVar25 = local_c8.TypedValue.TextData.Reference;
    if (local_c8.TypedValue.TextData.Reference == (ITextData *)0x0) goto LAB_1496819b9;
  }
  local_f8.TextData.Reference = (ITextData *)uVar25;
  (**(code **)((longlong)*(ITextData *)uVar25 + 8))(uVar25,local_e8);
LAB_1496819b9:
  pIVar26 = param_2->TransactionProvider;
  local_f8.Flags = (pTVar23->TypedValue).Flags;
  if (pIVar26 == (IToolContextTransactionProvider *)0x0) {
    lVar18 = (**(code **)(param_1->_padding_ + 0x2d8))(param_1);
    pIVar26 = (IToolContextTransactionProvider *)(lVar18 + 0x28);
    if (lVar18 == 0) {
      pIVar26 = (IToolContextTransactionProvider *)0x0;
    }
  }
  pUVar19 = UGizmoTransformChangeStateTarget::Construct
                      ((USceneComponent *)local_100,&local_f8,pIVar26,(UObject *)pUVar14);
  pTVar2 = &pUVar19->DependentChangeSources;
  pIVar20 = ::operator_new(0x20);
  local_118 = pIVar27;
  if (pIVar20 != (IGizmoTransformSource *)0x0) {
    local_d8 = param_2->TransformProxy;
    *pIVar20 = (IGizmoTransformSource)&___7FTransformProxyChangeSource__6B_;
    *(TObjectPtr<UPrimitiveComponent>_u_0 *)(pIVar20 + 1) = (TObjectPtr<UPrimitiveComponent>_u_0)0x0
    ;
    pIVar20[2] = (IGizmoTransformSource)0x0;
    *(undefined1 *)(pIVar20 + 3) = 0;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UTransformProxy *)0x0)) {
      GC::MarkAsReachable((UObject *)local_d8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pIVar20 + 1),(FObjectPtr)&local_d8);
    local_118 = pIVar20;
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 <
       pFVar5 + (longlong)(pUVar19->DependentChangeSources).ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  iVar13 = (pUVar19->DependentChangeSources).ArrayNum;
  piVar1 = &(pUVar19->DependentChangeSources).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pUVar19->DependentChangeSources).ArrayNum = iVar13 + 1;
  *(IGizmoTransformSource **)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_118;
  if (pUVar19 != (UGizmoTransformChangeStateTarget *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar19);
    }
    pIVar27 = (IGizmoTransformSource *)&pUVar19->_padding_;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UGizmoTransformChangeStateTarget *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar19);
  }
  *(UGizmoTransformChangeStateTarget **)&local_d0->StateTarget = pUVar19;
  *(IGizmoTransformSource **)&(local_d0->StateTarget).field_0x8 = pIVar27;
  if ((param_3 != (FTransformSubGizmoSharedState *)0x0) &&
     (param_2->bManipulatesRootComponent != false)) {
    param_3->StateTarget = pUVar19;
  }
  if ((ITextData *)uVar25 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar25 + 0x10))(uVar25);
  }
  if (local_c8.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_c8.TypedValue.TextData.Reference + 0x10))();
  }
  return true;
}

// operator() @ 14968af60

void __thiscall
`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_1>::operator()
          (void *this,bool param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  
  if ((*(longlong *)this == 0) || ((*(uint *)(*(longlong *)this + 8) >> 0x1e & 1) != 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5093222843823423664>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                       ,0xb0,"IsValid(CastHitTarget)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = *(UObjectBaseUtility **)(*(longlong *)this + 0x30);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar3 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
      plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
      }
    }
  }
  return;
}

// operator() @ 14968b000

void __thiscall
`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_1>::operator()
          (void *this,bool param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  
  if ((*(longlong *)this == 0) || ((*(uint *)(*(longlong *)this + 8) >> 0x1e & 1) != 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5093222843823423664>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                       ,0xb0,"IsValid(CastHitTarget)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = *(UObjectBaseUtility **)(*(longlong *)this + 0x30);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar3 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
      plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
      }
    }
  }
  return;
}

// operator() @ 14968b0a0

void __thiscall
`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_1>::operator()
          (void *this,bool param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  
  if ((*(longlong *)this == 0) || ((*(uint *)(*(longlong *)this + 8) >> 0x1e & 1) != 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5093222843823423664>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                       ,0xb0,"IsValid(CastHitTarget)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = *(UObjectBaseUtility **)(*(longlong *)this + 0x30);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar3 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
      plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
      }
    }
  }
  return;
}

// operator() @ 14968b140

void __thiscall
`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_1>::operator()
          (void *this,bool param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  
  if ((*(longlong *)this == 0) || ((*(uint *)(*(longlong *)this + 8) >> 0x1e & 1) != 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5093222843823423664>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                       ,0xb0,"IsValid(CastHitTarget)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = *(UObjectBaseUtility **)(*(longlong *)this + 0x30);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar3 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
      plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
      }
    }
  }
  return;
}

// operator() @ 14968b1e0

void __thiscall
`UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_1>::operator()
          (void *this,bool param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  
  if ((*(longlong *)this == 0) || ((*(uint *)(*(longlong *)this + 8) >> 0x1e & 1) != 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5093222843823423664>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                       ,0xb0,"IsValid(CastHitTarget)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = *(UObjectBaseUtility **)(*(longlong *)this + 0x30);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar3 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
      plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
      }
    }
  }
  return;
}

// operator() @ 14968b3f0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInteractiveGizmo * __thiscall
`UE::GizmoUtil::CreateGizmoViaSimpleBuilder'::__l2::<lambda_1>::operator()
          (void *this,FToolBuilderState *param_1)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  bool bVar4;
  FName FVar5;
  FName FVar6;
  UClass *pUVar7;
  UInteractiveGizmo *pUVar8;
  longlong *plVar9;
  UClass *pUVar10;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)((longlong)this + 8);
  pUVar10 = (UClass *)0x0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((lVar2 != 0) &&
     (pUVar7 = Z_Construct_UClass_UInteractiveGizmo_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar10 = *(UClass **)((longlong)this + 8);
    }
  }
  FVar5 = local_a8;
  pUVar3 = *(UObject **)this;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = Z_Construct_UClass_UInteractiveGizmo_NoRegister();
  CheckIsClassChildOf_Internal(pUVar7,pUVar10);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar10);
  FVar6 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar5.ComparisonIndex.Value;
  local_a8.Number = FVar5.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar6;
  local_98._8_8_ = pUVar3;
  pUVar8 = (UInteractiveGizmo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return pUVar8;
}

// operator() @ 14968b7c0

void __thiscall
`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_2>::operator()
          (void *this,bool param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  
  if ((*(longlong *)this == 0) || ((*(uint *)(*(longlong *)this + 8) >> 0x1e & 1) != 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5093222843823423672>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                       ,0xb8,"IsValid(CastHitTarget)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = *(UObjectBaseUtility **)(*(longlong *)this + 0x30);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar3 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
      plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
      }
    }
  }
  return;
}

// operator() @ 14968b860

void __thiscall
`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_2>::operator()
          (void *this,bool param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  
  if ((*(longlong *)this == 0) || ((*(uint *)(*(longlong *)this + 8) >> 0x1e & 1) != 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5093222843823423672>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                       ,0xb8,"IsValid(CastHitTarget)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = *(UObjectBaseUtility **)(*(longlong *)this + 0x30);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar3 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
      plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
      }
    }
  }
  return;
}

// operator() @ 14968b900

void __thiscall
`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_2>::operator()
          (void *this,bool param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  
  if ((*(longlong *)this == 0) || ((*(uint *)(*(longlong *)this + 8) >> 0x1e & 1) != 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5093222843823423672>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                       ,0xb8,"IsValid(CastHitTarget)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = *(UObjectBaseUtility **)(*(longlong *)this + 0x30);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar3 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
      plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
      }
    }
  }
  return;
}

// operator() @ 14968b9a0

void __thiscall
`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_2>::operator()
          (void *this,bool param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  
  if ((*(longlong *)this == 0) || ((*(uint *)(*(longlong *)this + 8) >> 0x1e & 1) != 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5093222843823423672>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                       ,0xb8,"IsValid(CastHitTarget)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = *(UObjectBaseUtility **)(*(longlong *)this + 0x30);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar3 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
      plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
      }
    }
  }
  return;
}

// operator() @ 14968ba40

void __thiscall
`UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_2>::operator()
          (void *this,bool param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  
  if ((*(longlong *)this == 0) || ((*(uint *)(*(longlong *)this + 8) >> 0x1e & 1) != 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5093222843823423672>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                       ,0xb8,"IsValid(CastHitTarget)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = *(UObjectBaseUtility **)(*(longlong *)this + 0x30);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar3 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
      plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
      }
    }
  }
  return;
}

// CalculateLocalPixelToWorldScale @ 149694d00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __cdecl
UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
          (FSceneView *param_1,TVector<double> *param_2,double param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  TOptional<double> local_28;
  ISceneViewInterface local_18;
  FSceneView *local_10;
  
  if (param_1 != (FSceneView *)0x0) {
    local_18 = (ISceneViewInterface)&___7FSceneViewWrapper_GizmoRenderingUtil_UE__6B_;
    local_28.bIsSet = true;
    local_28.TypedValue = param_3;
    local_10 = param_1;
    fVar3 = CalculateLocalPixelToWorldScale(&local_18,param_2,true,&local_28);
    return fVar3;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2511063092146733176>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoRenderingUtil.cpp"
                     ,0x78,"View");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return __real_3f800000;
}

// CalculateLocalPixelToWorldScale @ 149694d80

float __cdecl
UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
          (ISceneViewInterface *param_1,TVector<double> *param_2,bool param_3,
          TOptional<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  TVector<double>_u_0 local_f8;
  TVector2<double>_u_0 local_e0;
  TVector2<double>_u_0 local_d0;
  undefined1 local_b8 [24];
  double local_a0;
  undefined1 local_98 [144];
  
  (**(code **)((longlong)*param_1 + 8))(param_1,local_b8,param_2);
  dVar4 = local_a0 * __real_3f847ae147ae147b;
  GizmoRenderingUtilLocals::WorldToPixelDouble((TVector2<double> *)&local_e0._s_0,param_1,param_2);
  pdVar5 = (double *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&local_d0);
  dVar6 = (param_2->field0_0x0)._s_0.X;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar6;
  dVar7 = (param_2->field0_0x0)._s_0.Y;
  dVar8 = (param_2->field0_0x0)._s_0.Z;
  dVar1 = *pdVar5;
  dVar2 = pdVar5[1];
  dVar3 = pdVar5[2];
  pdVar5 = (double *)(**(code **)((longlong)*param_1 + 0x28))(param_1,local_98);
  local_f8._s_0.X = (dVar1 + *pdVar5) * dVar4 + dVar6;
  local_f8._s_0.Y = (pdVar5[1] + dVar2) * dVar4 + dVar7;
  local_f8._s_0.Z = (pdVar5[2] + dVar3) * dVar4 + dVar8;
  GizmoRenderingUtilLocals::WorldToPixelDouble
            ((TVector2<double> *)&local_d0._s_0,param_1,(TVector<double> *)&local_f8._s_0);
  dVar8 = (param_2->field0_0x0)._s_0.Y - local_f8._s_0.Y;
  dVar7 = (param_2->field0_0x0)._s_0.X - local_f8._s_0.X;
  dVar6 = (param_2->field0_0x0)._s_0.Z - local_f8._s_0.Z;
  auVar10._8_8_ = 0;
  auVar10._0_8_ =
       (dVar8 * dVar8 + dVar7 * dVar7 + dVar6 * dVar6) /
       ((local_e0._s_0.Y - local_d0._s_0.Y) * (local_e0._s_0.Y - local_d0._s_0.Y) +
       (local_e0._s_0.X - local_d0._s_0.X) * (local_e0._s_0.X - local_d0._s_0.X));
  auVar10 = sqrtpd(auVar9,auVar10);
  dVar6 = auVar10._0_8_;
  if (__real_4290000000000000 <= auVar10._0_8_) {
    dVar6 = __real_4290000000000000;
  }
  if (dVar6 <= __real_3e45798ee2308c3a) {
    dVar6 = __real_3e45798ee2308c3a;
  }
  if (param_3) {
    dVar7 = (double)(**(code **)((longlong)*param_1 + 0x48))(param_1);
    if (param_4->bIsSet != false) {
      dVar7 = param_4->TypedValue;
    }
    dVar6 = dVar6 * dVar7;
  }
  return (float)dVar6;
}

// CalculateViewDependentScaleAndFlatten @ 149694fc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __cdecl
UE::GizmoRenderingUtil::CalculateViewDependentScaleAndFlatten
          (FSceneView *param_1,TVector<double> *param_2,float param_3,TVector<double> *param_4)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 != (FSceneView *)0x0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2511063092146733227>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoRenderingUtil.cpp"
                     ,0xab,"View");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return __real_3f800000;
}

// CalculateViewDependentScaleAndFlatten @ 149695020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl
UE::GizmoRenderingUtil::CalculateViewDependentScaleAndFlatten
          (ISceneViewInterface *param_1,TVector<double> *param_2,float param_3,
          TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  ISceneViewInterface IVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  double *pdVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined1 local_58 [48];
  
  lVar12 = (**(code **)((longlong)*param_1 + 0x38))();
  lVar13 = (**(code **)((longlong)*param_1 + 0x30))(param_1);
  pdVar15 = (double *)(lVar13 + 0x78);
  bVar6 = NAN(__real_3ff0000000000000);
  dVar1 = *pdVar15;
  bVar7 = __real_3ff0000000000000 != *pdVar15;
  bVar8 = *pdVar15 <= __real_3ff0000000000000;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((bVar8 && bVar7) ||
     ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar12 + 0x50) >> 0x20) & uVar17,
                       (uint)*(undefined8 *)(lVar12 + 0x50) & uVar16) <= 0.0)) {
    bVar9 = false;
    if (!bVar8 || !bVar7) goto LAB_14969509e;
LAB_1496950b1:
    bVar10 = false;
    if (!bVar8 || !bVar7) goto LAB_1496950b9;
  }
  else {
    bVar9 = true;
LAB_14969509e:
    if ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar12 + 0x30) >> 0x20) & uVar17,
                         (uint)*(undefined8 *)(lVar12 + 0x30) & uVar16) <= 0.0) goto LAB_1496950b1;
    bVar10 = true;
LAB_1496950b9:
    if (0.0 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar12 + 0x10) >> 0x20) & uVar17,
                               (uint)*(undefined8 *)(lVar12 + 0x10) & uVar16)) {
      bVar11 = true;
      goto LAB_1496950cf;
    }
  }
  bVar11 = false;
LAB_1496950cf:
  IVar5 = *param_1;
  piVar14 = (int *)(**(code **)IVar5)(param_1);
  iVar3 = piVar14[2];
  iVar4 = *piVar14;
  lVar12 = (**(code **)((longlong)IVar5 + 8))(param_1,local_58,param_2);
  dVar2 = *(double *)(lVar12 + 0x18);
  pdVar15 = (double *)(**(code **)((longlong)*param_1 + 0x30))(param_1);
  fVar18 = (float)((__real_4010000000000000 / ((double)(iVar3 - iVar4) * *pdVar15)) *
                  (double)param_3 * dVar2);
  fVar19 = fVar18;
  if (((float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_ff7fffff) &&
     (fVar19 = __real_ff7fffff, fVar18 < 0.0)) {
    fVar19 = __real_7f7fffff;
  }
  if ((bVar6 || NAN(dVar1)) || (!bVar8 || !bVar7)) {
    if (bVar9) {
      (param_4->field0_0x0)._s_0.X = 1.0;
      (param_4->field0_0x0)._s_0.Y = 1.0;
      (param_4->field0_0x0)._s_0.Z = (double)(__real_3f800000 / fVar19);
      return fVar19;
    }
    if (bVar10) {
      (param_4->field0_0x0)._s_0.X = 1.0;
      (param_4->field0_0x0)._s_0.Y = (double)(__real_3f800000 / fVar19);
      (param_4->field0_0x0)._s_0.Z = 1.0;
      return fVar19;
    }
    if (!bVar11) {
      return fVar19;
    }
    (param_4->field0_0x0)._s_0.X = (double)(__real_3f800000 / fVar19);
  }
  else {
    (param_4->field0_0x0)._s_0.X = 1.0;
  }
  (param_4->field0_0x0)._s_0.Y = 1.0;
  (param_4->field0_0x0)._s_0.Z = 1.0;
  return fVar19;
}

// ClampRayOrigin @ 149697430

double __cdecl
UE::GizmoUtil::ClampRayOrigin
          (UGizmoViewContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  
  cVar5 = (**(code **)(*(longlong *)&param_1->field_0x28 + 0x40))(&param_1->field_0x28);
  if (cVar5 == '\0') {
    dVar1 = (param_2->field0_0x0)._s_0.X;
    dVar2 = (param_3->field0_0x0)._s_0.X;
    dVar3 = (param_3->field0_0x0)._s_0.Y;
    dVar6 = (param_2->field0_0x0)._s_0.Z;
    dVar7 = (param_3->field0_0x0)._s_0.Z;
    dVar4 = (param_2->field0_0x0)._s_0.Y * dVar3 + dVar1 * dVar2 + dVar6 * dVar7;
    uVar8 = SUB84(dVar4,0);
    uVar9 = (uint)((ulonglong)dVar4 >> 0x20);
    if (param_4 < (double)CONCAT44(uVar9 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   uVar8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uVar8 = uVar8 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar9 = uVar9 ^ __xmm_80000000000000008000000000000000._4_4_;
      dVar1 = (double)CONCAT44(uVar9,uVar8) * dVar2 + dVar1;
      dVar6 = (double)CONCAT44(uVar9,uVar8) * dVar7 + dVar6;
      (param_2->field0_0x0)._s_0.X = dVar1;
      dVar7 = (double)CONCAT44(uVar9,uVar8) * dVar3 + (param_2->field0_0x0)._s_0.Y;
      (param_2->field0_0x0)._s_0.Z = dVar6;
      (param_2->field0_0x0)._s_0.Y = dVar7;
      dVar2 = (param_3->field0_0x0)._s_0.Y;
      dVar3 = (param_3->field0_0x0)._s_0.Z;
      (param_2->field0_0x0)._s_0.X = dVar1 - param_4 * (param_3->field0_0x0)._s_0.X;
      (param_2->field0_0x0)._s_0.Y = dVar7 - param_4 * dVar2;
      (param_2->field0_0x0)._s_0.Z = dVar6 - param_4 * dVar3;
      return (double)CONCAT44(uVar9,uVar8) - param_4;
    }
  }
  return 0.0;
}

// Create3AxisTransformGizmo @ 14969a640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __cdecl
UE::TransformGizmoUtil::Create3AxisTransformGizmo
          (UInteractiveGizmoManager *param_1,void *param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  UContextObjectStore *this;
  UCombinedTransformGizmoContextObject *pUVar3;
  UCombinedTransformGizmo *pUVar4;
  
  if (param_1 == (UInteractiveGizmoManager *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843291>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0x9b,"GizmoManager");
    if (!bVar2) {
      return (UCombinedTransformGizmo *)0x0;
    }
  }
  else {
    this = UInteractiveGizmoManager::GetContextObjectStore(param_1);
    pUVar3 = UContextObjectStore::FindContext<UCombinedTransformGizmoContextObject>(this);
    if (pUVar3 != (UCombinedTransformGizmoContextObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014969a709. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar4 = (UCombinedTransformGizmo *)
               (**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3,param_1,param_2,param_3);
      return pUVar4;
    }
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843294>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0x9e,"UseThis");
    if (!bVar2) {
      return (UCombinedTransformGizmo *)0x0;
    }
  }
  pcVar1 = (code *)swi(3);
  pUVar4 = (UCombinedTransformGizmo *)(*pcVar1)();
  return pUVar4;
}

// Create3AxisTransformGizmo @ 14969a720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __cdecl
UE::TransformGizmoUtil::Create3AxisTransformGizmo
          (UInteractiveToolManager *param_1,void *param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  UCombinedTransformGizmo *pUVar3;
  UInteractiveGizmoManager *this;
  UContextObjectStore *this_00;
  UCombinedTransformGizmoContextObject *pUVar4;
  
  if (param_1 == (UInteractiveToolManager *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843303>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0xa7,"ToolManager");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UCombinedTransformGizmo *)(*pcVar1)();
      return pUVar3;
    }
    return (UCombinedTransformGizmo *)0x0;
  }
  this = UInteractiveToolManager::GetPairedGizmoManager(param_1);
  if (this == (UInteractiveGizmoManager *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843291>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0x9b,"GizmoManager");
    if (!bVar2) {
      return (UCombinedTransformGizmo *)0x0;
    }
  }
  else {
    this_00 = UInteractiveGizmoManager::GetContextObjectStore(this);
    pUVar4 = UContextObjectStore::FindContext<UCombinedTransformGizmoContextObject>(this_00);
    if (pUVar4 != (UCombinedTransformGizmoContextObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014969a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar3 = (UCombinedTransformGizmo *)
               (**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4,this,param_2,param_3);
      return pUVar3;
    }
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843294>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0x9e,"UseThis");
    if (!bVar2) {
      return (UCombinedTransformGizmo *)0x0;
    }
  }
  pcVar1 = (code *)swi(3);
  pUVar3 = (UCombinedTransformGizmo *)(*pcVar1)();
  return pUVar3;
}

// CreateCustomRepositionableTransformGizmo @ 14969afb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __cdecl
UE::TransformGizmoUtil::CreateCustomRepositionableTransformGizmo
          (UInteractiveGizmoManager *param_1,ETransformGizmoSubElements param_2,void *param_3,
          FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  UContextObjectStore *this;
  UCombinedTransformGizmoContextObject *pUVar3;
  UCombinedTransformGizmo *pUVar4;
  
  if (param_1 == (UInteractiveGizmoManager *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843365>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0xe5,"GizmoManager");
    if (bVar2) {
code_r0x00014969b044:
      pcVar1 = (code *)swi(3);
      pUVar4 = (UCombinedTransformGizmo *)(*pcVar1)();
      return pUVar4;
    }
    pUVar4 = (UCombinedTransformGizmo *)0x0;
  }
  else {
    this = UInteractiveGizmoManager::GetContextObjectStore(param_1);
    pUVar3 = UContextObjectStore::FindContext<UCombinedTransformGizmoContextObject>(this);
    if (pUVar3 == (UCombinedTransformGizmoContextObject *)0x0) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5995858810042843368>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                         ,0xe8,"UseThis");
      if (bVar2) goto code_r0x00014969b044;
      pUVar4 = (UCombinedTransformGizmo *)0x0;
    }
    else {
      pUVar4 = (UCombinedTransformGizmo *)
               (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,param_1,param_2,param_3,param_4);
    }
  }
  return pUVar4;
}

// CreateCustomRepositionableTransformGizmo @ 14969b080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __cdecl
UE::TransformGizmoUtil::CreateCustomRepositionableTransformGizmo
          (UInteractiveToolManager *param_1,ETransformGizmoSubElements param_2,void *param_3,
          FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  UCombinedTransformGizmo *pUVar3;
  UInteractiveGizmoManager *this;
  UContextObjectStore *this_00;
  UCombinedTransformGizmoContextObject *pUVar4;
  
  if (param_1 == (UInteractiveToolManager *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843377>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0xf1,"ToolManager");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UCombinedTransformGizmo *)(*pcVar1)();
      return pUVar3;
    }
    return (UCombinedTransformGizmo *)0x0;
  }
  this = UInteractiveToolManager::GetPairedGizmoManager(param_1);
  if (this == (UInteractiveGizmoManager *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843365>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0xe5,"GizmoManager");
    if (bVar2) {
code_r0x00014969b160:
      pcVar1 = (code *)swi(3);
      pUVar3 = (UCombinedTransformGizmo *)(*pcVar1)();
      return pUVar3;
    }
    pUVar3 = (UCombinedTransformGizmo *)0x0;
  }
  else {
    this_00 = UInteractiveGizmoManager::GetContextObjectStore(this);
    pUVar4 = UContextObjectStore::FindContext<UCombinedTransformGizmoContextObject>(this_00);
    if (pUVar4 == (UCombinedTransformGizmoContextObject *)0x0) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5995858810042843368>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                         ,0xe8,"UseThis");
      if (bVar2) goto code_r0x00014969b160;
      pUVar3 = (UCombinedTransformGizmo *)0x0;
    }
    else {
      pUVar3 = (UCombinedTransformGizmo *)
               (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,this,param_2,param_3,param_4);
    }
  }
  return pUVar3;
}

// CreateCustomTransformGizmo @ 14969b300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __cdecl
UE::TransformGizmoUtil::CreateCustomTransformGizmo
          (UInteractiveGizmoManager *param_1,ETransformGizmoSubElements param_2,void *param_3,
          FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  UContextObjectStore *this;
  UCombinedTransformGizmoContextObject *pUVar3;
  UCombinedTransformGizmo *pUVar4;
  
  if (param_1 == (UInteractiveGizmoManager *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843327>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0xbf,"GizmoManager");
    if (bVar2) {
code_r0x00014969b394:
      pcVar1 = (code *)swi(3);
      pUVar4 = (UCombinedTransformGizmo *)(*pcVar1)();
      return pUVar4;
    }
    pUVar4 = (UCombinedTransformGizmo *)0x0;
  }
  else {
    this = UInteractiveGizmoManager::GetContextObjectStore(param_1);
    pUVar3 = UContextObjectStore::FindContext<UCombinedTransformGizmoContextObject>(this);
    if (pUVar3 == (UCombinedTransformGizmoContextObject *)0x0) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5995858810042843330>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                         ,0xc2,"UseThis");
      if (bVar2) goto code_r0x00014969b394;
      pUVar4 = (UCombinedTransformGizmo *)0x0;
    }
    else {
      pUVar4 = (UCombinedTransformGizmo *)
               (**(code **)(pUVar3->_padding_ + 0x2b8))(pUVar3,param_1,param_2,param_3,param_4);
    }
  }
  return pUVar4;
}

// CreateCustomTransformGizmo @ 14969b3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __cdecl
UE::TransformGizmoUtil::CreateCustomTransformGizmo
          (UInteractiveToolManager *param_1,ETransformGizmoSubElements param_2,void *param_3,
          FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  UCombinedTransformGizmo *pUVar3;
  UInteractiveGizmoManager *this;
  UContextObjectStore *this_00;
  UCombinedTransformGizmoContextObject *pUVar4;
  
  if (param_1 == (UInteractiveToolManager *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843339>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0xcb,"ToolManager");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UCombinedTransformGizmo *)(*pcVar1)();
      return pUVar3;
    }
    return (UCombinedTransformGizmo *)0x0;
  }
  this = UInteractiveToolManager::GetPairedGizmoManager(param_1);
  if (this == (UInteractiveGizmoManager *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843327>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0xbf,"GizmoManager");
    if (bVar2) {
code_r0x00014969b4b0:
      pcVar1 = (code *)swi(3);
      pUVar3 = (UCombinedTransformGizmo *)(*pcVar1)();
      return pUVar3;
    }
    pUVar3 = (UCombinedTransformGizmo *)0x0;
  }
  else {
    this_00 = UInteractiveGizmoManager::GetContextObjectStore(this);
    pUVar4 = UContextObjectStore::FindContext<UCombinedTransformGizmoContextObject>(this_00);
    if (pUVar4 == (UCombinedTransformGizmoContextObject *)0x0) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5995858810042843330>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                         ,0xc2,"UseThis");
      if (bVar2) goto code_r0x00014969b4b0;
      pUVar3 = (UCombinedTransformGizmo *)0x0;
    }
    else {
      pUVar3 = (UCombinedTransformGizmo *)
               (**(code **)(pUVar4->_padding_ + 0x2b8))(pUVar4,this,param_2,param_3,param_4);
    }
  }
  return pUVar3;
}

// CreateDefaultMaterialGizmoMeshComponent @ 14969b620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UViewAdjustedStaticMeshGizmoComponent * __cdecl
UE::GizmoRenderingUtil::CreateDefaultMaterialGizmoMeshComponent
          (UStaticMesh *param_1,UGizmoViewContext *param_2,UObject *param_3,FLinearColor *param_4,
          bool param_5)

{
  byte *pbVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UViewAdjustedStaticMeshGizmoComponent *this;
  UMaterialInterface *pUVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  FLinearColor_u_0 local_d4;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((param_3 != (UObject *)0x0) ||
     (bVar3 = `UE::GizmoRenderingUtil::CreateDefaultMaterialGizmoMeshComponent'::__l3::<lambda_1>::
              operator()(local_d8), bVar3)) {
    FObjectInitializer::AssertIfInConstructor
              (param_3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = UViewAdjustedStaticMeshGizmoComponent::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar5);
    local_b8._8_8_ = param_3;
    this = (UViewAdjustedStaticMeshGizmoComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar8 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    (**(code **)(this->_padding_ + 0xb28))(this,param_1);
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UGizmoViewContext *)0x0)) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    (this->GizmoViewContext).field0_0x0.DebugPtr = param_2;
    lVar2 = this->_padding_;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 | 0x40;
    *(undefined4 *)&this->_padding_ = 5000;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    (**(code **)(lVar2 + 0x780))(this,1);
    (**(code **)(this->_padding_ + 0x9f8))(this,0);
    (**(code **)(this->_padding_ + 0x9f0))(this,8,2);
    (**(code **)(this->_padding_ + 0x790))(this,8);
    pUVar6 = GetDefaultGizmoComponentMaterial(param_4,(UObject *)this);
    iVar7 = 0;
    iVar4 = (**(code **)(this->_padding_ + 0x810))(this);
    if (0 < iVar4) {
      do {
        (**(code **)(this->_padding_ + 0x6b8))(this,iVar7,pUVar6);
        iVar7 = iVar7 + 1;
        iVar4 = (**(code **)(this->_padding_ + 0x810))(this);
      } while (iVar7 < iVar4);
    }
    if (param_5) {
      local_d4._s_0.R =
           FLinearColor::sRGBToLinearTable[GizmoRenderingUtilLocals::HoverColor.field0_0x0._s_0.R];
      local_d4._s_0.G =
           FLinearColor::sRGBToLinearTable[GizmoRenderingUtilLocals::HoverColor.field0_0x0._s_0.G];
      local_d4._s_0.B =
           FLinearColor::sRGBToLinearTable[GizmoRenderingUtilLocals::HoverColor.field0_0x0._s_0.B];
      local_d4._s_0.A =
           (float)GizmoRenderingUtilLocals::HoverColor.field0_0x0._3_1_ * __real_3b808081;
      pUVar6 = GetDefaultGizmoComponentMaterial((FLinearColor *)&local_d4._s_0,(UObject *)this);
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UMaterialInterface *)0x0))
      {
        GC::MarkAsReachable((UObject *)pUVar6);
      }
      (this->HoverOverrideMaterial).field0_0x0.DebugPtr = pUVar6;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  else {
    this = (UViewAdjustedStaticMeshGizmoComponent *)0x0;
  }
  return this;
}

// CreateDefaultMaterialGizmoMeshComponent @ 14969b870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UViewAdjustedStaticMeshGizmoComponent * __cdecl
UE::GizmoRenderingUtil::CreateDefaultMaterialGizmoMeshComponent
          (UStaticMesh *param_1,UInteractiveGizmoManager *param_2,UObject *param_3,
          FLinearColor *param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  UViewAdjustedStaticMeshGizmoComponent *pUVar4;
  UContextObjectStore *this;
  UGizmoViewContext *pUVar5;
  atomic<unsigned_char> *paVar6;
  int iVar7;
  
  if (param_2 == (UInteractiveGizmoManager *)0x0) {
    pcVar3 = "GizmoManager";
    iVar7 = 0x37;
    paVar6 = &bGEnsureHasExecuted<5093222843823423543>;
  }
  else {
    this = UInteractiveGizmoManager::GetContextObjectStore(param_2);
    if (this != (UContextObjectStore *)0x0) {
      pUVar5 = UContextObjectStore::FindContext<UGizmoViewContext>(this);
      if (pUVar5 == (UGizmoViewContext *)0x0) {
        bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5093222843823423555>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                           ,0x43,"GizmoViewContext");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar4 = (UViewAdjustedStaticMeshGizmoComponent *)(*pcVar1)();
          return pUVar4;
        }
      }
      goto LAB_14969b923;
    }
    pcVar3 = "ContextObjectStore";
    iVar7 = 0x3d;
    paVar6 = &bGEnsureHasExecuted<5093222843823423549>;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (paVar6,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                     ,iVar7,pcVar3);
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UViewAdjustedStaticMeshGizmoComponent *)(*pcVar1)();
    return pUVar4;
  }
  pUVar5 = (UGizmoViewContext *)0x0;
LAB_14969b923:
  pUVar4 = CreateDefaultMaterialGizmoMeshComponent(param_1,pUVar5,param_3,param_4,param_5);
  return pUVar4;
}

// CreateGizmoViaSimpleBuilder @ 14969b960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __cdecl
UE::GizmoUtil::CreateGizmoViaSimpleBuilder
          (UInteractiveGizmoManager *param_1,TSubclassOf<UInteractiveGizmo> param_2,FString *param_3
          ,void *param_4)

{
  UObject *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  UInteractiveGizmo *pUVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStackY_128 [32];
  FString local_f8;
  undefined1 local_e8 [128];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (param_1 == (UInteractiveGizmoManager *)0x0) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1256698316888997903>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoUtil.cpp"
                       ,0xf,"GizmoManager");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pUVar8 = (UInteractiveGizmo *)(*pcVar2)();
      return pUVar8;
    }
    pUVar8 = (UInteractiveGizmo *)0x0;
  }
  else {
    ::FString::FString(&local_f8,L"__CreateGizmoViaSimpleBuilder_TemporaryBuilder");
    pUVar9 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar9,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = USimpleLambdaInteractiveGizmoBuilder::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_e8,pUVar10);
    local_e8._8_8_ = pUVar9;
    pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
    if (local_e8._64_8_ != 0) {
      plVar12 = (longlong *)(local_e8 + 0x50);
      if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_e8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    pUVar1 = *(UObject **)param_2.Class.field0_0x0;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    uStack_40 = (longlong *)0x0;
    local_58 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::GizmoUtil::CreateGizmoViaSimpleBuilder'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    uStack_50 = param_1;
    local_48 = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    local_68 = *(longlong *)&pUVar9[1].field_0x8;
    uVar4 = *(undefined8 *)&pUVar9[1].field_0x10;
    lVar5 = *(longlong *)&pUVar9[1].field_0x18;
    uVar6 = *(undefined8 *)&pUVar9[1].field_0x20;
    uVar3 = *(undefined8 *)(pUVar9 + 2);
    plVar12 = *(longlong **)&pUVar9[2].field_0x8;
    *(code **)&pUVar9[1].field_0x8 =
         Core::Private::Function::
         TFunctionRefCaller<`UE::GizmoUtil::CreateGizmoViaSimpleBuilder'::__l2::<lambda_1>,UInteractiveGizmo_*,FToolBuilderState_const_&>
         ::Call;
    *(undefined8 *)&pUVar9[1].field_0x10 = uStack_60;
    *(undefined4 *)&pUVar9[1].field_0x18 = (undefined4)local_58;
    *(undefined4 *)&pUVar9[1].field_0x1c = local_58._4_4_;
    *(undefined4 *)&pUVar9[1].field_0x20 = (undefined4)uStack_50;
    *(undefined4 *)&pUVar9[1].field_0x24 = uStack_50._4_4_;
    *(undefined4 *)(pUVar9 + 2) = (undefined4)local_48;
    *(undefined4 *)&pUVar9[2].field_0x4 = local_48._4_4_;
    *(undefined4 *)&pUVar9[2].field_0x8 = (undefined4)uStack_40;
    *(undefined4 *)&pUVar9[2].field_0xc = uStack_40._4_4_;
    uStack_60 = uVar4;
    local_58 = (undefined **)lVar5;
    uStack_50 = (UInteractiveGizmoManager *)uVar6;
    local_48 = (UObject *)uVar3;
    uStack_40 = plVar12;
    if (local_68 != 0) {
      plVar11 = &local_58;
      if (plVar12 != (longlong *)0x0) {
        plVar11 = plVar12;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_f8,pUVar9);
    pUVar8 = (UInteractiveGizmo *)
             (**(code **)(param_1->_padding_ + 0x2d0))(param_1,&local_f8,param_3,param_4);
    (**(code **)(param_1->_padding_ + 0x2c8))(param_1,&local_f8);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  return pUVar8;
}

// DeregisterTransformGizmoContextObject @ 14969c2b0

bool __cdecl
UE::TransformGizmoUtil::DeregisterTransformGizmoContextObject(UInteractiveToolsContext *param_1)

{
  int *piVar1;
  int iVar2;
  UInteractiveToolManager *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UCombinedTransformGizmoContextObject *pUVar7;
  UInteractiveGizmoManager *pUVar8;
  UContextObjectStore *pUVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  
  if (param_1 == (UInteractiveToolsContext *)0x0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843260>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0x7c,"ToolsContext");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    return false;
  }
  pUVar7 = UContextObjectStore::FindContext<UCombinedTransformGizmoContextObject>
                     ((param_1->ContextObjectStore).field0_0x0.DebugPtr);
  if (pUVar7 != (UCombinedTransformGizmoContextObject *)0x0) {
    this = (param_1->ToolManager).field0_0x0.DebugPtr;
    pUVar8 = UInteractiveToolManager::GetPairedGizmoManager(this);
    pUVar9 = UInteractiveToolManager::GetContextObjectStore(this);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    pFVar3 = (pUVar9->ContextObjects).AllocatorInstance.Data;
    iVar2 = (pUVar9->ContextObjects).ArrayNum;
    for (pFVar11 = pFVar3; pFVar11 != pFVar3 + (longlong)iVar2 * 8; pFVar11 = pFVar11 + 8) {
      if (*(UCombinedTransformGizmoContextObject **)pFVar11 == pUVar7) {
        iVar10 = (int)((longlong)pFVar11 - (longlong)pFVar3 >> 3);
        if (iVar10 != -1) {
          memmove(pFVar3 + (longlong)iVar10 * 8,pFVar3 + (longlong)iVar10 * 8 + 8,
                  (longlong)((iVar2 - iVar10) + -1) << 3);
          piVar1 = &(pUVar9->ContextObjects).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        break;
      }
    }
    if ((pUVar7->bDefaultGizmosRegistered == false) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5995858810042843221>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                           ,0x55,"bDefaultGizmosRegistered"), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    (**(code **)(pUVar8->_padding_ + 0x2c8))
              (pUVar8,&UCombinedTransformGizmoContextObject::DefaultAxisPositionBuilderIdentifier);
    (**(code **)(pUVar8->_padding_ + 0x2c8))
              (pUVar8,&UCombinedTransformGizmoContextObject::DefaultPlanePositionBuilderIdentifier);
    (**(code **)(pUVar8->_padding_ + 0x2c8))
              (pUVar8,&UCombinedTransformGizmoContextObject::DefaultAxisAngleBuilderIdentifier);
    (**(code **)(pUVar8->_padding_ + 0x2c8))
              (pUVar8,&UCombinedTransformGizmoContextObject::
                       DefaultThreeAxisTransformBuilderIdentifier);
    (**(code **)(pUVar8->_padding_ + 0x2c8))
              (pUVar8,&UCombinedTransformGizmoContextObject::
                       CustomThreeAxisTransformBuilderIdentifier);
    (**(code **)(pUVar8->_padding_ + 0x2c8))
              (pUVar8,&UCombinedTransformGizmoContextObject::
                       CustomRepositionableThreeAxisTransformBuilderIdentifier);
    pUVar7->bDefaultGizmosRegistered = false;
    UContextObjectStore::RemoveContextObject
              ((param_1->ContextObjectStore).field0_0x0.DebugPtr,(UObject *)pUVar7);
  }
  return true;
}

// DrawDisc @ 14969cf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UE::InteractiveToolsFramework::Private::GizmoElementCircleLocals::DrawDisc
          (FPrimitiveDrawInterface *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,FColor param_5,double param_6,int param_7,
          FMaterialRenderProxy *param_8,uchar param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  uint uVar9;
  uint uVar11;
  double dVar10;
  double dVar12;
  float fVar13;
  undefined1 auStackY_1a8 [32];
  int local_168;
  TVector<float>_u_0 local_158;
  TVector<float>_u_0 local_148;
  TVector<float>_u_0 local_138;
  FPrimitiveDrawInterface *local_128;
  FMaterialRenderProxy *local_120;
  FDynamicMeshBuilder local_118;
  TVector<float>_u_0 local_e8;
  ulonglong local_dc;
  undefined8 local_9c;
  FColor_u_0 local_94;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_120 = param_8;
  local_128 = param_1;
  if ((param_7 < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSides >= 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementCircle.cpp"
                         ,0x15,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar10 = (param_3->field0_0x0)._s_0.X;
  dVar12 = (param_3->field0_0x0)._s_0.Y;
  iVar8 = 0;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = (param_4->field0_0x0)._s_0.X;
  dVar3 = (param_4->field0_0x0)._s_0.Z;
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_138._s_0.Y = (float)dVar12;
  fVar13 = __real_3f800000 / (float)param_7;
  local_138._s_0.X = (float)dVar10;
  local_138._s_0.Z = (float)dVar1;
  local_148._s_0.X =
       (float)(double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar11,SUB84(dVar2,0) ^ uVar9);
  uVar4 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  local_148._s_0.Y =
       (float)(double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^ uVar11,(uint)uVar4 ^ uVar9);
  local_148._s_0.Z =
       (float)(double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar11,SUB84(dVar3,0) ^ uVar9);
  local_158._s_0.X = (float)(dVar12 * dVar3 - dVar1 * (param_4->field0_0x0)._s_0.Y);
  local_158._s_0.Y = (float)(dVar2 * dVar1 - dVar10 * dVar3);
  local_158._s_0.Z = (float)(dVar10 * (param_4->field0_0x0)._s_0.Y - dVar2 * dVar12);
  FDynamicMeshBuilder::FDynamicMeshBuilder
            (&local_118,param_1->View->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
  local_168 = 0;
  if (0 < param_7) {
    do {
      __libm_sse2_sincosf_();
      local_9c = 0;
      dVar12 = (double)extraout_XMM0_Da;
      local_94 = param_5.field0_0x0;
      dVar10 = (double)extraout_XMM0_Db;
      local_e8._s_0.X =
           (float)((dVar10 * (param_3->field0_0x0)._s_0.X + dVar12 * (param_4->field0_0x0)._s_0.X) *
                   param_6 + (param_2->field0_0x0)._s_0.X);
      local_e8._s_0.Y =
           (float)((dVar12 * (param_4->field0_0x0)._s_0.Y + dVar10 * (param_3->field0_0x0)._s_0.Y) *
                   param_6 + (param_2->field0_0x0)._s_0.Y);
      local_e8._s_0.Z =
           (float)((dVar12 * (param_4->field0_0x0)._s_0.Z + dVar10 * (param_3->field0_0x0)._s_0.Z) *
                   param_6 + (param_2->field0_0x0)._s_0.Z);
      local_dc = (ulonglong)(uint)((float)local_168 * fVar13 + 0.0);
      FDynamicMeshVertex::SetTangents
                ((FDynamicMeshVertex *)&local_e8._s_0,(TVector<float> *)&local_138._s_0,
                 (TVector<float> *)&local_148._s_0,(TVector<float> *)&local_158._s_0);
      FDynamicMeshBuilder::AddVertex(&local_118,(FDynamicMeshVertex *)&local_e8._s_0);
      local_168 = local_168 + 1;
      param_1 = local_128;
    } while (local_168 < param_7);
  }
  if (0 < param_7 + -1) {
    do {
      iVar7 = iVar8 + 1;
      FDynamicMeshBuilder::AddTriangle(&local_118,0,iVar8,iVar7);
      FDynamicMeshBuilder::AddTriangle(&local_118,0,iVar7,iVar8);
      iVar8 = iVar7;
    } while (iVar7 < param_7 + -1);
  }
  FDynamicMeshBuilder::Draw
            (&local_118,param_1,&UE::Math::TMatrix<double>::Identity,local_120,param_9,false,true,
             (FHitProxyId)0xffffffff);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_118);
  return;
}

// GetDefaultAxisColor @ 1496a0ba0

/* WARNING: Enum "Type": Some values do not have unique names */

FLinearColor * __cdecl
UE::GizmoRenderingUtil::GetDefaultAxisColor(FLinearColor *__return_storage_ptr__,Type param_1)

{
  if (param_1 == X) {
    AxisDisplayInfo::GetAxisColor(__return_storage_ptr__,X);
    return __return_storage_ptr__;
  }
  if (param_1 != Y) {
    if (param_1 != Z) {
      (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
      return __return_storage_ptr__;
    }
    AxisDisplayInfo::GetAxisColor(__return_storage_ptr__,Z);
    return __return_storage_ptr__;
  }
  AxisDisplayInfo::GetAxisColor(__return_storage_ptr__,Y);
  return __return_storage_ptr__;
}

// GetDefaultGizmoComponentMaterial @ 1496a0c10

UMaterialInterface * __cdecl
UE::GizmoRenderingUtil::GetDefaultGizmoComponentMaterial
          (FLinearColor *param_1,FDefaultGizmoMaterialExtraParams *param_2,UObject *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  UMaterialInstanceDynamic *this;
  FName *pFVar5;
  FName local_res10;
  TStringView<wchar_t> local_38;
  FLinearColor_u_0 local_28 [2];
  
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  if (param_2->bDimOccluded == false) {
    local_28[0]._0_8_ =
         L"/Engine/InteractiveToolsFramework/Materials/GizmoComponentMaterial_NotDimmed";
    local_28[0]._8_4_ = 0x4c;
  }
  else {
    local_28[0]._0_8_ = L"/Engine/InteractiveToolsFramework/Materials/GizmoComponentMaterial";
    local_28[0]._8_4_ = 0x42;
  }
  pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar3,(UObject *)0x0,(TStringView<wchar_t> *)&local_28[0]._s_0,
                            &local_38,0,(UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
  if (pUVar4 == (UMaterialInterface *)0x0) {
    return (UMaterialInterface *)0x0;
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  this = UMaterialInstanceDynamic::Create(pUVar4,param_3,(FName)0x0);
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  pFVar5 = ::FName::FName(&local_res10,L"GizmoColor");
  local_28[0]._0_8_ = uVar1;
  local_28[0]._8_8_ = uVar2;
  UMaterialInstanceDynamic::SetVectorParameterValue(this,*pFVar5,(FLinearColor *)&local_28[0]._s_0);
  return (UMaterialInterface *)this;
}

// GetDefaultGizmoComponentMaterial @ 1496a0d30

UMaterialInterface * __cdecl
UE::GizmoRenderingUtil::GetDefaultGizmoComponentMaterial(FLinearColor *param_1,UObject *param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  UMaterialInstanceDynamic *this;
  FName *pFVar5;
  FName local_res18 [2];
  TStringView<wchar_t> local_38;
  wchar_t *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  
  iStack_20 = 0x42;
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_28 = L"/Engine/InteractiveToolsFramework/Materials/GizmoComponentMaterial";
  pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar3,(UObject *)0x0,(TStringView<wchar_t> *)&local_28,&local_38,0,
                            (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
  if (pUVar4 == (UMaterialInterface *)0x0) {
    return (UMaterialInterface *)0x0;
  }
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  this = UMaterialInstanceDynamic::Create(pUVar4,param_2,(FName)0x0);
  pwVar1 = *(wchar_t **)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  pFVar5 = ::FName::FName(local_res18,L"GizmoColor");
  local_28 = pwVar1;
  _iStack_20 = uVar2;
  UMaterialInstanceDynamic::SetVectorParameterValue(this,*pFVar5,(FLinearColor *)&local_28);
  return (UMaterialInterface *)this;
}

// GetGizmoViewContext @ 1496a2c80

UGizmoViewContext * __cdecl UE::GizmoUtil::GetGizmoViewContext(UInteractiveGizmoManager *param_1)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  UContextObjectStore *this;
  UGizmoViewContext *pUVar4;
  atomic<unsigned_char> *paVar5;
  int iVar6;
  
  if (param_1 == (UInteractiveGizmoManager *)0x0) {
    pcVar3 = "GizmoManager";
    iVar6 = 0x37;
    paVar5 = &bGEnsureHasExecuted<5093222843823423543>;
  }
  else {
    this = UInteractiveGizmoManager::GetContextObjectStore(param_1);
    if (this != (UContextObjectStore *)0x0) {
      pUVar4 = UContextObjectStore::FindContext<UGizmoViewContext>(this);
      if (pUVar4 == (UGizmoViewContext *)0x0) {
        bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5093222843823423555>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                           ,0x43,"GizmoViewContext");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar4 = (UGizmoViewContext *)(*pcVar1)();
          return pUVar4;
        }
      }
      return pUVar4;
    }
    pcVar3 = "ContextObjectStore";
    iVar6 = 0x3d;
    paVar5 = &bGEnsureHasExecuted<5093222843823423549>;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (paVar5,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                     ,iVar6,pcVar3);
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UGizmoViewContext *)(*pcVar1)();
    return pUVar4;
  }
  return (UGizmoViewContext *)0x0;
}

// GetRotatedBasisTransform @ 1496a7ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __cdecl
UE::GizmoUtil::GetRotatedBasisTransform
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,Type param_2)

{
  double dVar1;
  Type TVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_148 [32];
  TQuat<double> local_128;
  TMatrix<double> local_108;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  uVar6 = (undefined4)((ulonglong)UE::Math::TVector<double>::XAxisVector.field0_0x0._16_8_ >> 0x20);
  if (param_2 == Y) {
    local_108.M[0][0] = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
    local_108.M[0][1] = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
    local_108.M[0][2] = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    local_108.M[2][0] = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    local_108.M[2][1] = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    local_108.M[1][0] = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_108.M[1][1] = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    uVar3 = SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0);
    uVar4 = (int)((ulonglong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_ >> 0x20);
    uVar5 = SUB84(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z,0);
    uVar7 = uVar6;
  }
  else {
    if (param_2 != Z) goto LAB_1496a7cd3;
    local_108.M[0][0] = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_108.M[0][1] = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_108.M[0][2] = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_108.M[2][0] = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
    local_108.M[2][1] = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
    uVar5 = SUB84(UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z,0);
    uVar7 = (undefined4)
            ((ulonglong)UE::Math::TVector<double>::YAxisVector.field0_0x0._16_8_ >> 0x20);
    local_108.M[1][0] = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    local_108.M[1][1] = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    uVar3 = SUB84(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z,0);
    uVar4 = uVar6;
  }
  local_108.M[1][2] = (double)CONCAT44(uVar4,uVar3);
  local_108.M[2][2] = (double)CONCAT44(uVar7,uVar5);
  local_108.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_108.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_108.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_108.M[1][3] = 0.0;
  local_108.M[0][3] = 0.0;
  local_108.M[2][3] = 0.0;
  local_108.M[3][3] = __real_3ff0000000000000;
  UE::Math::TQuat<double>::TQuat<double>(&local_128,&local_108);
  local_88.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_88.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_88.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_108.M[0][2] = local_128.Z;
  local_108.M[0][3] = local_128.W;
  local_108.M[0][0] = local_128.X;
  local_108.M[0][1] = local_128.Y;
  local_108.M[1][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_108.M[1][1] = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_108.M[1][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_108.M[1][3] = 0.0;
  local_108.M[2][0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_108.M[2][1] = (double)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_;
  local_108.M[2][2] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_108.M[2][3] = 0.0;
  UE::Math::TTransform<double>::Multiply(&local_88,param_1,(TTransform<double> *)&local_108);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_88.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_88.Scale3D.ZW.m128d_f64[1];
LAB_1496a7cd3:
  TVar2 = AxisDisplayInfo::GetAxisDisplayCoordinateSystem();
  if (TVar2 == LeftUpForward) {
    UE::Math::TTransform<double>::ToMatrixWithScale(__return_storage_ptr__,&local_108);
    uVar8 = (uint)__xmm_80000000000000008000000000000000;
    uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_108.M[0][1] =
         (double)CONCAT44((uint)((ulonglong)local_108.M[0][1] >> 0x20) ^ uVar9,
                          SUB84(local_108.M[0][1],0) ^ uVar8);
    local_108.M[2][1] =
         (double)CONCAT44((uint)((ulonglong)local_108.M[2][1] >> 0x20) ^ uVar9,
                          SUB84(local_108.M[2][1],0) ^ uVar8);
    local_108.M[1][1] =
         (double)CONCAT44((uint)((ulonglong)local_108.M[1][1] >> 0x20) ^ uVar9,
                          SUB84(local_108.M[1][1],0) ^ uVar8);
    local_108.M[3][1] =
         (double)CONCAT44((uint)((ulonglong)local_108.M[3][1] >> 0x20) ^ uVar9,
                          SUB84(local_108.M[3][1],0) ^ uVar8);
    UE::Math::TTransform<double>::SetFromMatrix(__return_storage_ptr__,&local_108);
  }
  return __return_storage_ptr__;
}

// InitializeSubGizmoElementsWithMesh @ 1496ac750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::GizmoUtil::InitializeSubGizmoElementsWithMesh
          (FInitMeshSubGizmoParams *param_1,
          TArray<TTuple<ETransformGizmoSubElements,UViewAdjustedStaticMeshGizmoComponent_*>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  UCombinedTransformGizmo *pUVar1;
  ACombinedTransformGizmoActor *pAVar2;
  UViewAdjustedStaticMeshGizmoComponent *this;
  UPrimitiveComponent *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UInteractiveGizmoManager *this_00;
  char *pcVar8;
  UContextObjectStore *this_01;
  FLinearColor_u_0 *pFVar9;
  UViewAdjustedStaticMeshGizmoComponent *this_02;
  TTransform<double> *pTVar10;
  UViewAdjustedStaticMeshGizmoComponent *this_03;
  atomic<unsigned_char> *paVar11;
  Type TVar12;
  ETransformGizmoSubElements EVar13;
  ETransformGizmoSubElements EVar14;
  Type TVar15;
  undefined1 auStackY_1a8 [32];
  UGizmoViewContext *local_178;
  FLinearColor_u_0 local_160;
  FLinearColor_u_0 local_150;
  FLinearColor_u_0 local_140;
  TSharedPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> local_130;
  TSharedPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> local_120;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pUVar1 = param_1->ParentGizmo;
  if ((pUVar1 == (UCombinedTransformGizmo *)0x0) || (param_1->Mesh == (UStaticMesh *)0x0)) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6208904211720044585>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformSubGizmoUtil.cpp"
                       ,0x29,"Params.ParentGizmo && Params.Mesh");
    if (!bVar6) {
      return;
    }
    goto code_r0x0001496acc4a;
  }
  pAVar2 = (pUVar1->GizmoActor).field0_0x0.DebugPtr;
  this_00 = (UInteractiveGizmoManager *)(**(code **)(*(longlong *)pUVar1 + 0x2d8))();
  if (this_00 == (UInteractiveGizmoManager *)0x0) {
    pcVar8 = "GizmoManager";
    iVar7 = 0x37;
    paVar11 = &bGEnsureHasExecuted<5093222843823423543>;
LAB_1496ac7bb:
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (paVar11,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                       ,iVar7,pcVar8);
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_178 = (UGizmoViewContext *)0x0;
  }
  else {
    this_01 = UInteractiveGizmoManager::GetContextObjectStore(this_00);
    if (this_01 == (UContextObjectStore *)0x0) {
      pcVar8 = "ContextObjectStore";
      iVar7 = 0x3d;
      paVar11 = &bGEnsureHasExecuted<5093222843823423549>;
      goto LAB_1496ac7bb;
    }
    local_178 = UContextObjectStore::FindContext<UGizmoViewContext>(this_01);
    if ((local_178 == (UGizmoViewContext *)0x0) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5093222843823423555>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoPrivateUtil.cpp"
                           ,0x43,"GizmoViewContext"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((pAVar2 == (ACombinedTransformGizmoActor *)0x0) || (local_178 == (UGizmoViewContext *)0x0)) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6208904211720044593>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformSubGizmoUtil.cpp"
                       ,0x31,"GizmoActor && GizmoViewContext");
    if (bVar6) {
code_r0x0001496acc4a:
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    for (EVar13 = param_1->Elements; EVar13 != None; EVar13 = EVar13 & ~-EVar13) {
      EVar14 = -EVar13 & EVar13;
      if ((int)EVar14 < 0x101) {
        if (EVar14 == RotateAxisY) {
switchD_1496ac8c1_caseD_4:
          TVar12 = Y;
          TVar15 = TVar12;
          goto LAB_1496ac92c;
        }
        switch(EVar14) {
        case TranslateAxisX:
        case TranslatePlaneYZ:
        case RotateAxisX:
          goto switchD_1496ac8c1_caseD_2;
        default:
switchD_1496ac8c1_caseD_3:
          TVar15 = None;
          pFVar9 = &local_140;
          local_140 = FLinearColor::Black.field0_0x0;
          break;
        case TranslateAxisY:
        case TranslatePlaneXZ:
          goto switchD_1496ac8c1_caseD_4;
        case TranslateAxisZ:
        case TranslatePlaneXY:
          goto switchD_1496ac8c1_caseD_8;
        }
      }
      else {
        if ((int)EVar14 < 0x1001) {
          if ((EVar14 == ScaleAxisZ) || (EVar14 == RotateAxisZ)) {
switchD_1496ac8c1_caseD_8:
            TVar12 = 4;
            TVar15 = Z;
            goto LAB_1496ac92c;
          }
          if (EVar14 != ScaleAxisX) {
            if (EVar14 != ScaleAxisY) goto switchD_1496ac8c1_caseD_3;
            goto switchD_1496ac8c1_caseD_4;
          }
        }
        else if (EVar14 != ScalePlaneYZ) {
          if (EVar14 == ScalePlaneXZ) goto switchD_1496ac8c1_caseD_4;
          if (EVar14 != ScalePlaneXY) goto switchD_1496ac8c1_caseD_3;
          goto switchD_1496ac8c1_caseD_8;
        }
switchD_1496ac8c1_caseD_2:
        TVar12 = X;
        TVar15 = TVar12;
LAB_1496ac92c:
        AxisDisplayInfo::GetAxisColor((FLinearColor *)&local_160._s_0,TVar12);
        pFVar9 = &local_160;
      }
      local_150._0_8_ = *(undefined8 *)pFVar9;
      local_150._8_8_ = *(undefined8 *)((longlong)pFVar9 + 8);
      this_02 = GizmoRenderingUtil::CreateDefaultMaterialGizmoMeshComponent
                          (param_1->Mesh,local_178,(UObject *)pAVar2,(FLinearColor *)&local_150._s_0
                           ,true);
      UCombinedTransformGizmo::SetSubGizmoComponent
                (param_1->ParentGizmo,EVar14,(UPrimitiveComponent *)this_02,
                 &UE::Math::TTransform<double>::Identity);
      if (param_1->bRotateTransformBasisBasedOnElement == false) {
        local_108.Rotation.XY.m128d_f64[0] = (param_1->ComponentToGizmo).Rotation.XY.m128d_f64[0];
        local_108.Rotation.XY.m128d_f64[1] = (param_1->ComponentToGizmo).Rotation.XY.m128d_f64[1];
        pTVar10 = &local_108;
        local_108.Rotation.ZW.m128d_f64[0] = (param_1->ComponentToGizmo).Rotation.ZW.m128d_f64[0];
        local_108.Rotation.ZW.m128d_f64[1] = (param_1->ComponentToGizmo).Rotation.ZW.m128d_f64[1];
        local_108.Translation.XY.m128d_f64[0] =
             (param_1->ComponentToGizmo).Translation.XY.m128d_f64[0];
        local_108.Translation.XY.m128d_f64[1] =
             (param_1->ComponentToGizmo).Translation.XY.m128d_f64[1];
        local_108.Translation.ZW.m128d_f64[0] =
             (param_1->ComponentToGizmo).Translation.ZW.m128d_f64[0];
        local_108.Translation.ZW.m128d_f64[1] =
             (param_1->ComponentToGizmo).Translation.ZW.m128d_f64[1];
        local_108.Scale3D.XY.m128d_f64[0] = (param_1->ComponentToGizmo).Scale3D.XY.m128d_f64[0];
        local_108.Scale3D.XY.m128d_f64[1] = (param_1->ComponentToGizmo).Scale3D.XY.m128d_f64[1];
        local_108.Scale3D.ZW.m128d_f64[0] = (param_1->ComponentToGizmo).Scale3D.ZW.m128d_f64[0];
        local_108.Scale3D.ZW.m128d_f64[1] = (param_1->ComponentToGizmo).Scale3D.ZW.m128d_f64[1];
      }
      else {
        pTVar10 = GetRotatedBasisTransform(&local_a8,&param_1->ComponentToGizmo,TVar15);
      }
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)this_02,pTVar10,false,(FHitResult *)0x0,None);
      GizmoRenderingUtil::FSubGizmoTransformAdjuster::AddTransformAdjuster
                (&local_130,this_02,(USceneComponent *)pAVar2->_padding_,
                 param_1->bMirrorBasedOnOctant);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_130.SharedReferenceCount.ReferenceController);
      if (param_1->SubstituteInteractionMesh != (UStaticMesh *)0x0) {
        this_03 = GizmoRenderingUtil::CreateDefaultMaterialGizmoMeshComponent
                            (param_1->SubstituteInteractionMesh,local_178,(UObject *)this_02,
                             (FLinearColor *)&local_150._s_0,false);
        this = (UViewAdjustedStaticMeshGizmoComponent *)
               (this_02->SubstituteInteractionComponent).field0_0x0.DebugPtr;
        if (this == (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
          bVar6 = this_03 == (UViewAdjustedStaticMeshGizmoComponent *)0x0;
        }
        else {
          bVar6 = this == this_03;
        }
        if (!bVar6) {
          if (this != (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
            if ((this->_padding_ & 1) != 0) {
              UActorComponent::UnregisterComponent((UActorComponent *)this);
            }
            pUVar3 = (this_02->SubstituteInteractionComponent).field0_0x0.DebugPtr;
            (**(code **)(*(longlong *)pUVar3 + 0x518))
                      (pUVar3,&FDetachmentTransformRules::KeepWorldTransform);
          }
          if ((GC::GIsIncrementalReachabilityPending == false) ||
             (this_03 == (UViewAdjustedStaticMeshGizmoComponent *)0x0)) {
            (this_02->SubstituteInteractionComponent).field0_0x0.DebugPtr =
                 (UPrimitiveComponent *)this_03;
            if (this_03 == (UViewAdjustedStaticMeshGizmoComponent *)0x0) goto LAB_1496acb31;
          }
          else {
            GC::MarkAsReachable((UObject *)this_03);
            (this_02->SubstituteInteractionComponent).field0_0x0.DebugPtr =
                 (UPrimitiveComponent *)this_03;
          }
          if ((this_03->_padding_ & 1) != 0) {
            UActorComponent::UnregisterComponent((UActorComponent *)this_03);
          }
          (**(code **)(this_03->_padding_ + 0x508))(this_03,this_02);
          USceneComponent::SetRelativeTransform
                    ((USceneComponent *)this_03,&param_1->SubstituteMeshToComponent,false,
                     (FHitResult *)0x0,None);
          UActorComponent::RegisterComponent((UActorComponent *)this_03);
          (**(code **)(this_02->_padding_ + 0x20))(&this_02->_padding_,0);
        }
LAB_1496acb31:
        USceneComponent::SetRelativeTransform
                  ((USceneComponent *)this_03,&param_1->SubstituteMeshToComponent,false,
                   (FHitResult *)0x0,None);
        GizmoRenderingUtil::FSubGizmoTransformAdjuster::AddTransformAdjuster
                  (&local_120,this_03,(USceneComponent *)pAVar2->_padding_,
                   param_1->bMirrorBasedOnOctant);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_120.SharedReferenceCount.ReferenceController);
      }
      if (param_2 !=
          (TArray<TTuple<ETransformGizmoSubElements,UViewAdjustedStaticMeshGizmoComponent_*>,TSizedDefaultAllocator<32>_>
           *)0x0) {
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar7 + 1;
        pFVar4 = (param_2->AllocatorInstance).Data;
        *(ETransformGizmoSubElements *)(pFVar4 + (longlong)iVar7 * 0x10) = EVar14;
        *(UViewAdjustedStaticMeshGizmoComponent **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = this_02;
      }
    }
  }
  return;
}

// RegisterTransformGizmoContextObject @ 1496b7d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl
UE::TransformGizmoUtil::RegisterTransformGizmoContextObject(UInteractiveToolsContext *param_1)

{
  UInteractiveToolManager *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UCombinedTransformGizmoContextObject *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (param_1 == (UInteractiveToolsContext *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843236>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,100,"ToolsContext");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = false;
  }
  else {
    pUVar5 = UContextObjectStore::FindContext<UCombinedTransformGizmoContextObject>
                       ((param_1->ContextObjectStore).field0_0x0.DebugPtr);
    if (pUVar5 == (UCombinedTransformGizmoContextObject *)0x0) {
      pUVar1 = (param_1->ToolManager).field0_0x0.DebugPtr;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = UCombinedTransformGizmoContextObject::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar6);
      local_98._8_8_ = pUVar1;
      pUVar5 = (UCombinedTransformGizmoContextObject *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar7 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (pUVar5 == (UCombinedTransformGizmoContextObject *)0x0) {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5995858810042843242>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                           ,0x6a,"GizmoHelper");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        bVar3 = false;
      }
      else {
        UCombinedTransformGizmoContextObject::RegisterGizmosWithManager
                  (pUVar5,(param_1->ToolManager).field0_0x0.DebugPtr);
        bVar3 = true;
      }
    }
    else {
      bVar3 = true;
    }
  }
  return bVar3;
}

// ToAxis @ 1496c3120

Type __cdecl UE::GizmoUtil::ToAxis(ETransformGizmoSubElements param_1)

{
  Type TVar1;
  
  if (0x100 < (int)param_1) {
    if ((int)param_1 < 0x1001) {
      if (param_1 == ScaleAxisZ) {
        return Z;
      }
      if (param_1 == RotateAxisZ) {
        return Z;
      }
      if (param_1 != ScaleAxisX) {
        if (param_1 == ScaleAxisY) {
          return Y;
        }
        return None;
      }
    }
    else if (param_1 != ScalePlaneYZ) {
      if (param_1 == ScalePlaneXZ) {
        return Y;
      }
      TVar1 = Z;
      if (param_1 != ScalePlaneXY) {
        TVar1 = None;
      }
      return TVar1;
    }
switchD_1496c314e_caseD_2:
    return X;
  }
  if (param_1 == RotateAxisY) {
switchD_1496c314e_caseD_4:
    return Y;
  }
  switch(param_1) {
  case TranslateAxisX:
  case TranslatePlaneYZ:
  case RotateAxisX:
    goto switchD_1496c314e_caseD_2;
  default:
    return None;
  case TranslateAxisY:
  case TranslatePlaneXZ:
    goto switchD_1496c314e_caseD_4;
  case TranslateAxisZ:
  case TranslatePlaneXY:
    return Z;
  }
}

// ToggleElementInteractionState @ 1496c3300

void __cdecl
UE::InteractiveToolsFramework::Private::GizmoElementHitTargetLocals::ToggleElementInteractionState
          (UGizmoElementBase *param_1,EGizmoElementInteractionState param_2,bool param_3)

{
  EGizmoElementInteractionState EVar1;
  
  if (param_1 != (UGizmoElementBase *)0x0) {
    EVar1 = None;
    if (param_3) {
      EVar1 = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x0001496c3312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x3c8))(param_1,EVar1);
    return;
  }
  return;
}

// ToggleElementPartInteractionState @ 1496c3320

void __cdecl
UE::InteractiveToolsFramework::Private::GizmoElementHitTargetLocals::
ToggleElementPartInteractionState
          (UGizmoElementBase *param_1,uint param_2,EGizmoElementInteractionState param_3,
          bool param_4,bool param_5)

{
  EGizmoElementInteractionState EVar1;
  
  if (param_1 != (UGizmoElementBase *)0x0) {
    EVar1 = None;
    if (param_4) {
      EVar1 = param_3;
    }
                    /* WARNING: Could not recover jumptable at 0x0001496c333d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x408))(param_1,EVar1,param_2,param_5);
    return;
  }
  return;
}

// UpdateCameraAxisSource @ 1496c39d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::GizmoUtil::UpdateCameraAxisSource
          (UGizmoConstantFrameAxisSource *param_1,UInteractiveGizmoManager *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  TQuat<double> local_68;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  double local_38;
  
  if ((param_2 != (UInteractiveGizmoManager *)0x0) &&
     (lVar3 = (**(code **)(param_2->_padding_ + 0x328))(param_2), dVar2 = __real_3ff0000000000000,
     lVar3 != 0)) {
    local_78 = 0;
    local_38 = __real_3ff0000000000000;
    local_88 = 0;
    uStack_80 = 0;
    local_68.X = 0.0;
    local_68.Y = 0.0;
    local_68.Z = ___xmm_3ff00000000000000000000000000000;
    local_68.W = _UNK_15061cbc8;
    local_48 = 0x42b40000;
    local_44 = 0x42c80000;
    local_40 = 0x3f800000;
    local_3c = 0;
    plVar4 = (longlong *)(**(code **)(param_2->_padding_ + 0x328))(param_2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_88);
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    local_a8._s_0.Z = 0.0;
    (param_1->Origin).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
    (param_1->Origin).field0_0x0._s_0.Y = dVar1;
    local_a8._s_0.Y = _UNK_150689518;
    local_a8._s_0.X = ___xmm_00000000000000003ff0000000000000;
    (param_1->Origin).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              (&local_68,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_a8._s_0);
    uVar5 = local_c8._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar6 = local_c8._8_4_ ^ _UNK_15066df78;
    uVar7 = local_c8._12_4_ ^ _UNK_15066df7c;
    uVar8 = SUB84(local_c8._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar9 = (uint)((ulonglong)local_c8._16_8_ >> 0x20) ^
            __xmm_80000000000000008000000000000000._4_4_;
    *(uint *)&(param_1->Direction).field0_0x0 =
         local_c8._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&(param_1->Direction).field0_0x0 + 4) = uVar5;
    *(uint *)((longlong)&(param_1->Direction).field0_0x0 + 8) = uVar6;
    *(uint *)((longlong)&(param_1->Direction).field0_0x0 + 0xc) = uVar7;
    (param_1->Direction).field0_0x0._s_0.Z = (double)CONCAT44(uVar9,uVar8);
    local_a8._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_a8._s_0.Y = _UNK_15061cbc8;
    local_a8._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&local_68,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_a8._s_0);
    (param_1->TangentX).field0_0x0._s_0.X = (double)CONCAT44(local_c8._4_4_,local_c8._0_4_);
    (param_1->TangentX).field0_0x0._s_0.Y = (double)CONCAT44(local_c8._12_4_,local_c8._8_4_);
    local_a8._s_0.Z = dVar2;
    local_a8._s_0.X = 0.0;
    local_a8._s_0.Y = 0.0;
    *(double *)((longlong)&(param_1->TangentX).field0_0x0 + 0x10) = local_c8._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              (&local_68,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_a8._s_0);
    (param_1->TangentY).field0_0x0._s_0.X = (double)CONCAT44(local_c8._4_4_,local_c8._0_4_);
    (param_1->TangentY).field0_0x0._s_0.Y = (double)CONCAT44(local_c8._12_4_,local_c8._8_4_);
    *(double *)((longlong)&(param_1->TangentY).field0_0x0 + 0x10) = local_c8._s_0.Z;
    return true;
  }
  return false;
}

// Construct<FActiveGizmo> @ 1496cb740

void __cdecl UE::CoreUObject::Private::Construct<FActiveGizmo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FActiveGizmo> @ 1496cb760

void __cdecl UE::CoreUObject::Private::ConstructForTests<FActiveGizmo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FActiveGizmo> @ 1496cb780

void __cdecl UE::CoreUObject::Private::Destruct<FActiveGizmo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FActiveGizmo> @ 1496cb7c0

bool __cdecl UE::CoreUObject::Private::Copy<FActiveGizmo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      ::FString::operator=((FString *)(puVar2 + 1),(FString *)(puVar1 + 1));
      ::FString::operator=((FString *)(puVar2 + 3),(FString *)(puVar1 + 3));
      puVar2[5] = puVar1[5];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// operator() @ 150543f90

bool __thiscall
`UE::GizmoRenderingUtil::CreateDefaultMaterialGizmoMeshComponent'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2511063092146733128>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2511063092146733128>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

