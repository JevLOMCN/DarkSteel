// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// operator() @ 14968b520

void __thiscall
`UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform'::__l2::<lambda_1>::
operator()(void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
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
  atomic<int> aVar13;
  atomic<int> aVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  
  pTVar15 = *(TReferenceControllerBase<1> **)((longlong)this + 0x68);
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    aVar13 = pTVar15->SharedReferenceCount;
    do {
      if (aVar13 == (atomic<int>)0x0) {
        pTVar15 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14968b543;
      }
      LOCK();
      aVar14 = pTVar15->SharedReferenceCount;
      bVar16 = aVar13 == aVar14;
      if (bVar16) {
        pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar13 + 1);
        aVar14 = aVar13;
      }
      UNLOCK();
      aVar13 = aVar14;
    } while (!bVar16);
    lVar1 = *(longlong *)((longlong)this + 0x60);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)this + 8);
      uVar3 = *(undefined8 *)((longlong)this + 0x10);
      uVar4 = *(undefined8 *)((longlong)this + 0x18);
      uVar5 = *(undefined8 *)((longlong)this + 0x20);
      uVar6 = *(undefined8 *)((longlong)this + 0x28);
      uVar7 = *(undefined8 *)((longlong)this + 0x30);
      uVar8 = *(undefined8 *)((longlong)this + 0x38);
      uVar9 = *(undefined8 *)((longlong)this + 0x40);
      uVar10 = *(undefined8 *)((longlong)this + 0x48);
      uVar11 = *(undefined8 *)((longlong)this + 0x50);
      uVar12 = *(undefined8 *)((longlong)this + 0x58);
      *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)this;
      *(undefined8 *)(lVar1 + 0x88) = uVar2;
      *(undefined8 *)(lVar1 + 0x90) = uVar3;
      *(undefined8 *)(lVar1 + 0x98) = uVar4;
      *(undefined8 *)(lVar1 + 0xa0) = uVar5;
      *(undefined8 *)(lVar1 + 0xa8) = uVar6;
      *(undefined8 *)(lVar1 + 0xb0) = uVar7;
      *(undefined8 *)(lVar1 + 0xb8) = uVar8;
      *(undefined8 *)(lVar1 + 0xc0) = uVar9;
      *(undefined8 *)(lVar1 + 200) = uVar10;
      *(undefined8 *)(lVar1 + 0xd0) = uVar11;
      *(undefined8 *)(lVar1 + 0xd8) = uVar12;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      return;
    }
  }
LAB_14968b543:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return;
}

// AddTransformAdjuster @ 149691b90

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

TSharedPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> * __cdecl
UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::AddTransformAdjuster
          (TSharedPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> *__return_storage_ptr__,
          UViewAdjustedStaticMeshGizmoComponent *param_1,USceneComponent *param_2,bool param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> *pTVar8;
  TTransform<double> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FSubGizmoTransformAdjuster *this;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined5 uStack_cd;
  double dStack_c8;
  IViewBasedTransformAdjuster *local_c0;
  TReferenceControllerBase<1> *pTStack_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_1 == (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
    __return_storage_ptr__->Object = (FSubGizmoTransformAdjuster *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  local_e8 = param_3;
  pTVar7 = ::operator_new(0x100);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    this = (FSubGizmoTransformAdjuster *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    this = (FSubGizmoTransformAdjuster *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSubGizmoTransformAdjuster_GizmoRenderingUtil_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[1]._padding_ = (longlong)&___7FSubGizmoTransformAdjuster_GizmoRenderingUtil_UE__6B_;
    uVar5 = (ulonglong)local_e0 >> 0x10;
    local_e0 = CONCAT62((uint6)uVar5 & 0xffffffffff00,0x101);
    pTVar7[3] = (TReferenceControllerBase<1>)
                UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    pTVar7[4] = (TReferenceControllerBase<1>)
                UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    pTVar7[5] = (TReferenceControllerBase<1>)
                UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    pTVar7[6] = (TReferenceControllerBase<1>)
                UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    pTVar7[7] = (TReferenceControllerBase<1>)
                UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    pTVar7[8] = (TReferenceControllerBase<1>)
                UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    pTVar7[9] = (TReferenceControllerBase<1>)
                UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    pTVar7[10] = (TReferenceControllerBase<1>)
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    pTVar7[0xb] = (TReferenceControllerBase<1>)
                  UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    pTVar7[0xc] = (TReferenceControllerBase<1>)
                  UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    pTVar7[0xd] = (TReferenceControllerBase<1>)
                  UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    pTVar7[0xe] = (TReferenceControllerBase<1>)
                  UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    uStack_d8 = 0;
    pTVar7[0xf]._padding_ = local_e0;
    pTVar7[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xf].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10 = pTVar7;
    if (this == (FSubGizmoTransformAdjuster *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_149691d94;
    }
  }
  if (((*(longlong *)&this->_padding_ == 0) || (this->_padding_ == 0)) ||
     (*(int *)(this->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FSubGizmoTransformAdjuster **)&this->_padding_ = this;
    if (pTVar10 != (TReferenceControllerBase<1> *)this->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)this->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      this->_padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_149691d94:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  dStack_c8 = __real_408f400000000000;
  uStack_cf = local_e8;
  uStack_ce = 0;
  local_d0 = 1;
  if ((this == (FSubGizmoTransformAdjuster *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> *)(*pcVar4)();
    return pTVar8;
  }
  (this->Settings).bKeepConstantViewSize = (bool)local_d0;
  (this->Settings).bMirrorBasedOnOctant = (bool)uStack_cf;
  (this->Settings).bUseWorldAxesForGizmo = (bool)uStack_ce;
  *(undefined5 *)&(this->Settings).field_0x3 = uStack_cd;
  (this->Settings).DistanceInFrontOfCameraInOrtho = dStack_c8;
  if (param_2 != (USceneComponent *)0x0) {
    pTVar9 = UE::Math::TTransform<double>::GetRelativeTransform
                       (&param_2->ComponentToWorld,&local_a8,
                        (TTransform<double> *)&param_1->_padding_);
    SetGizmoOriginTransform(this,pTVar9);
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c0 = (param_1->TransformAdjuster).Object;
  pTStack_b8 = (param_1->TransformAdjuster).SharedReferenceCount.ReferenceController;
  (param_1->TransformAdjuster).Object = (IViewBasedTransformAdjuster *)this;
  (param_1->TransformAdjuster).SharedReferenceCount.ReferenceController = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b8);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  __return_storage_ptr__->Object = this;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetAdjustedComponentToWorld @ 1496a0020

TTransform<double> * __thiscall
UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::GetAdjustedComponentToWorld
          (FSubGizmoTransformAdjuster *this,TTransform<double> *__return_storage_ptr__,
          ISceneViewInterface *param_1,TTransform<double> *param_2)

{
  ViewBasedTransformAdjustersLocals::GetSubGizmoAdjustedTransform
            (__return_storage_ptr__,param_1,param_2,&this->GizmoOriginToComponent_GameThread,
             &this->Settings,false);
  return __return_storage_ptr__;
}

// GetAdjustedComponentToWorld_RenderThread @ 1496a0070

TTransform<double> * __thiscall
UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::GetAdjustedComponentToWorld_RenderThread
          (FSubGizmoTransformAdjuster *this,TTransform<double> *__return_storage_ptr__,
          ISceneViewInterface *param_1,TTransform<double> *param_2)

{
  ViewBasedTransformAdjustersLocals::GetSubGizmoAdjustedTransform
            (__return_storage_ptr__,param_1,param_2,&this->GizmoOriginToComponent_RenderThread,
             &this->Settings,true);
  return __return_storage_ptr__;
}

// GetViewIndependentBounds @ 1496aab30

TBoxSphereBounds<double,double> * __thiscall
UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::GetViewIndependentBounds
          (FSubGizmoTransformAdjuster *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1,TBoxSphereBounds<double,double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uVar9 = ViewBasedTransformAdjustersLocals::InfiniteBounds.BoxExtent.field0_0x0._s_0.X;
  uVar8 = ViewBasedTransformAdjustersLocals::InfiniteBounds.Origin.field0_0x0._s_0.Z;
  uVar7 = ViewBasedTransformAdjustersLocals::InfiniteBounds.Origin.field0_0x0._s_0.Y;
  if ((this->Settings).bKeepConstantViewSize != false) {
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
         ViewBasedTransformAdjustersLocals::InfiniteBounds.Origin.field0_0x0._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)uVar7;
    uVar10 = ViewBasedTransformAdjustersLocals::InfiniteBounds.BoxExtent.field0_0x0._s_0.Z;
    uVar7 = ViewBasedTransformAdjustersLocals::InfiniteBounds.BoxExtent.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (double)uVar8;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = (double)uVar9;
    dVar14 = ViewBasedTransformAdjustersLocals::InfiniteBounds.SphereRadius;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar7;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = (double)uVar10;
    __return_storage_ptr__->SphereRadius = dVar14;
    return __return_storage_ptr__;
  }
  if (((this->Settings).bMirrorBasedOnOctant == false) &&
     ((this->Settings).bUseWorldAxesForGizmo == false)) {
    dVar14 = (param_2->Origin).field0_0x0._s_0.Y;
    dVar1 = (param_2->Origin).field0_0x0._s_0.Z;
    dVar2 = (param_2->BoxExtent).field0_0x0._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar14;
    dVar3 = (param_2->BoxExtent).field0_0x0._s_0.Y;
    dVar4 = (param_2->BoxExtent).field0_0x0._s_0.Z;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar2;
    dVar14 = param_2->SphereRadius;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar3;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar4;
    __return_storage_ptr__->SphereRadius = dVar14;
    return __return_storage_ptr__;
  }
  auVar20 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  auVar11 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  auVar13 = blendpd(auVar11,auVar20,2);
  dVar3 = (param_1->Scale3D).XY.m128d_f64[0] *
          (this->GizmoOriginToComponent_GameThread).Translation.XY.m128d_f64[0];
  dVar4 = (param_1->Scale3D).XY.m128d_f64[1] *
          (this->GizmoOriginToComponent_GameThread).Translation.XY.m128d_f64[1];
  uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar22 = (this->GizmoOriginToComponent_GameThread).Translation.ZW.m128d_f64[0] *
           (param_1->Scale3D).ZW.m128d_f64[0];
  dVar14 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar23._8_4_ = SUB84(dVar4,0);
  auVar23._0_8_ = dVar3;
  auVar23._12_4_ = uVar21;
  dVar1 = auVar20._0_8_;
  auVar24._0_8_ = auVar23._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar3;
  auVar24._8_8_ = dVar22 * auVar11._8_8_ - dVar1 * dVar4;
  auVar25._8_4_ = SUB84(dVar4,0);
  auVar25._0_8_ = dVar3;
  auVar25._12_4_ = uVar21;
  auVar11._8_4_ = SUB84(dVar14,0);
  auVar11._0_8_ = dVar22;
  auVar11._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  auVar11 = blendpd(auVar25,auVar11,2);
  auVar12._0_8_ = auVar11._0_8_ * dVar1 - auVar13._0_8_ * dVar22;
  auVar12._8_8_ = auVar11._8_8_ * auVar20._8_8_ - auVar13._8_8_ * dVar14;
  auVar11 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar25 = blendpd(auVar24,auVar12,2);
  dVar17 = auVar24._8_8_ + auVar24._8_8_;
  dVar5 = auVar12._0_8_ + auVar12._0_8_;
  uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar26._0_8_ = auVar25._0_8_ + auVar25._0_8_;
  auVar26._8_8_ = auVar25._8_8_ + auVar25._8_8_;
  auVar18._8_4_ = SUB84(dVar5,0);
  auVar18._0_8_ = dVar17;
  auVar18._12_4_ = uVar21;
  auVar15._8_4_ = SUB84(dVar5,0);
  auVar15._0_8_ = dVar17;
  auVar15._12_4_ = uVar21;
  auVar25 = blendpd(auVar15,auVar26,2);
  auVar19._0_8_ = auVar18._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar17;
  auVar19._8_8_ = auVar26._0_8_ * auVar11._8_8_ - dVar1 * dVar5;
  auVar11 = blendpd(auVar11,auVar20,2);
  dVar14 = (param_2->BoxExtent).field0_0x0._s_0.Y;
  auVar13._8_4_ = SUB84(auVar19._8_8_,0);
  auVar13._0_8_ = auVar19._0_8_;
  auVar13._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
  auVar16._0_8_ = auVar25._0_8_ * dVar1 - auVar11._0_8_ * auVar26._0_8_;
  auVar16._8_8_ = auVar25._8_8_ * auVar20._8_8_ - auVar11._8_8_ * auVar26._8_8_;
  dVar1 = (param_2->BoxExtent).field0_0x0._s_0.Z;
  dVar2 = (param_2->BoxExtent).field0_0x0._s_0.X;
  auVar20 = blendpd(auVar19,auVar16,2);
  dVar17 = (dVar17 * dVar6 + dVar3 + auVar13._8_8_ + (param_1->Translation).XY.m128d_f64[0]) -
           (param_2->Origin).field0_0x0._s_0.X;
  dVar22 = (auVar26._0_8_ * dVar6 + dVar22 + auVar20._0_8_ + (param_1->Translation).ZW.m128d_f64[0])
           - (param_2->Origin).field0_0x0._s_0.Z;
  dVar3 = (dVar5 * dVar6 + dVar4 + auVar16._0_8_ + (param_1->Translation).XY.m128d_f64[1]) -
          (param_2->Origin).field0_0x0._s_0.Y;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar14 * dVar14 + dVar2 * dVar2 + dVar1 * dVar1;
  auVar20 = sqrtpd(auVar16,auVar20);
  dVar14 = auVar20._0_8_;
  if (auVar20._0_8_ <= param_2->SphereRadius) {
    dVar14 = param_2->SphereRadius;
  }
  dVar14 = dVar14 + SQRT(dVar3 * dVar3 + dVar17 * dVar17 + dVar22 * dVar22);
  dVar1 = (param_2->Origin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
  __return_storage_ptr__->SphereRadius = dVar14;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar14;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar14;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar14;
  return __return_storage_ptr__;
}

// SetGizmoOriginTransform @ 1496bd640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform
          (FSubGizmoTransformAdjuster *this,TTransform<double> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FCommandList *pFVar4;
  double dVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  uint uVar8;
  code *pcVar9;
  FRenderCommandList *this_00;
  FRenderCommandTag *pFVar10;
  code **ppcVar11;
  uint uVar12;
  code *pcVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  code *local_178;
  code *pcStack_170;
  code *local_168;
  code *pcStack_160;
  code *local_158;
  code *pcStack_150;
  code *local_148;
  code *pcStack_140;
  code *local_138;
  code *pcStack_130;
  code *local_128;
  code *pcStack_120;
  code *local_118;
  code *pcStack_110;
  code *local_108;
  code *pcStack_100;
  code *local_f8;
  code *pcStack_f0;
  code *local_e8;
  code *pcStack_e0;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *pcStack_c0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  dVar5 = (param_1->Rotation).XY.m128d_f64[1];
  (this->GizmoOriginToComponent_GameThread).Rotation.XY.m128d_f64[0] =
       (param_1->Rotation).XY.m128d_f64[0];
  (this->GizmoOriginToComponent_GameThread).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->GizmoOriginToComponent_GameThread).Rotation.ZW.m128d_f64[0] =
       (param_1->Rotation).ZW.m128d_f64[0];
  (this->GizmoOriginToComponent_GameThread).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Translation).XY.m128d_f64[1];
  (this->GizmoOriginToComponent_GameThread).Translation.XY.m128d_f64[0] =
       (param_1->Translation).XY.m128d_f64[0];
  (this->GizmoOriginToComponent_GameThread).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Translation).ZW.m128d_f64[1];
  (this->GizmoOriginToComponent_GameThread).Translation.ZW.m128d_f64[0] =
       (param_1->Translation).ZW.m128d_f64[0];
  (this->GizmoOriginToComponent_GameThread).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->GizmoOriginToComponent_GameThread).Scale3D.XY.m128d_f64[0] =
       (param_1->Scale3D).XY.m128d_f64[0];
  (this->GizmoOriginToComponent_GameThread).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->GizmoOriginToComponent_GameThread).Scale3D.ZW.m128d_f64[0] =
       (param_1->Scale3D).ZW.m128d_f64[0];
  (this->GizmoOriginToComponent_GameThread).Scale3D.ZW.m128d_f64[1] = dVar5;
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  pcVar3 = (code *)this->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
    aVar6 = pTVar2->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_1496bd6fc;
      }
      LOCK();
      aVar7 = pTVar2->SharedReferenceCount;
      bVar15 = aVar6 == aVar7;
      if (bVar15) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar15);
  }
  pcVar13 = pcVar3;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    pcVar13 = (code *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pcVar9 = pcVar13 + 8;
  if (pcVar13 == (code *)0x0) {
    pcVar9 = (code *)0x0;
  }
  if (pcVar9 != (code *)&this->_padding_) {
LAB_1496bd6fc:
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Result.Pin().Get() == this",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x6c3,L"");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_178 = (code *)(param_1->Rotation).XY.m128d_f64[0];
  pcStack_170 = (code *)(param_1->Rotation).XY.m128d_f64[1];
  local_168 = (code *)(param_1->Rotation).ZW.m128d_f64[0];
  pcStack_160 = (code *)(param_1->Rotation).ZW.m128d_f64[1];
  local_158 = (code *)(param_1->Translation).XY.m128d_f64[0];
  pcStack_150 = (code *)(param_1->Translation).XY.m128d_f64[1];
  local_148 = (code *)(param_1->Translation).ZW.m128d_f64[0];
  pcStack_140 = (code *)(param_1->Translation).ZW.m128d_f64[1];
  local_138 = (code *)(param_1->Scale3D).XY.m128d_f64[0];
  pcStack_130 = (code *)(param_1->Scale3D).XY.m128d_f64[1];
  local_128 = (code *)(param_1->Scale3D).ZW.m128d_f64[0];
  pcStack_120 = (code *)(param_1->Scale3D).ZW.m128d_f64[1];
  local_a8[0] = (code *)0x0;
  local_118 = local_178;
  pcStack_110 = pcStack_170;
  local_108 = local_168;
  pcStack_100 = pcStack_160;
  local_f8 = local_158;
  pcStack_f0 = pcStack_150;
  local_e8 = local_148;
  pcStack_e0 = pcStack_140;
  local_d8 = local_138;
  pcStack_d0 = pcStack_130;
  local_c8 = local_128;
  pcStack_c0 = pcStack_120;
  local_80 = FMemory::Malloc(0x80,0x10);
  *local_80 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_80[2] = local_178;
  local_80[3] = pcStack_170;
  local_80[4] = local_168;
  local_80[5] = pcStack_160;
  local_80[6] = local_158;
  local_80[7] = pcStack_150;
  local_80[8] = local_148;
  local_80[9] = pcStack_140;
  local_80[10] = local_138;
  local_80[0xb] = pcStack_130;
  local_80[0xc] = local_128;
  local_80[0xd] = pcStack_120;
  local_80[0xe] = pcVar3;
  local_80[0xf] = (code *)pTVar2;
  if (local_80 + 2 != (code **)0x0) {
    local_a8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform_::__l2::TSTR_FViewpointOctantMirrorTransformAdjusterUpdate151>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    if (this_00->bInitialized == 0) {
      FRenderCommandList::Init(this_00);
    }
    iVar1 = (this_00->CommandLists).ArrayNum;
    uVar12 = iVar1 - 1;
    uVar8 = 0;
    if ((int)uVar12 < iVar1) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_188 = (longlong)(int)uVar12;
      local_180 = (longlong)iVar1;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = (this_00->CommandLists).ArrayNum;
    local_78._16_8_ = local_98[0];
    local_78._24_8_ = local_98[1];
    local_78._32_8_ = local_98[2];
    local_48 = 2;
    pFVar4 = (this_00->CommandLists).AllocatorInstance.Data;
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_a8[0] = (code *)0x0;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform'::__l2::TSTR_FViewpointOctantMirrorTransformAdjusterUpdate151>
              ::Get();
    RenderCommandPipe::FCommandList::Enqueue
              (pFVar4 + (iVar1 + -1),
               (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                *)local_78,pFVar10);
    uVar14 = (ulonglong)local_48;
    if ((2 < uVar14) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14] ==
        Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
        ::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppcVar11 = (code **)(local_78 + 0x10);
        if (local_50 != (code **)0x0) {
          ppcVar11 = local_50;
        }
        (**(code **)(*ppcVar11 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar11 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar11 = local_80;
    }
    (**(code **)(*ppcVar11 + 0x10))();
  }
  return;
}

// UpdateWorldLocalState @ 1496c5b30

void __thiscall
UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::UpdateWorldLocalState
          (FSubGizmoTransformAdjuster *this,bool param_1)

{
  (this->Settings).bUseWorldAxesForGizmo = param_1;
  return;
}

