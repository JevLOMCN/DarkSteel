// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// UpdateRadius_GameThread @ 1478fe250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalLightSceneProxy::UpdateRadius_GameThread(FLocalLightSceneProxy *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  FLocalLightSceneProxy *pFStack_70;
  float local_68;
  undefined4 uStack_64;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FLocalLightSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLocalLightSceneProxy::UpdateRadius_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_64 = auStack_b8._44_4_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLocalLightSceneProxy::UpdateRadius_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  pFStack_70 = this;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLocalLightSceneProxy::UpdateRadius_GameThread_::__l2::TSTR_UpdateRadius28>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._4_4_ = uStack_64;
    local_38._0_4_ = local_68;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FLocalLightSceneProxy::UpdateRadius_GameThread'::__l2::TSTR_UpdateRadius28>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// FLocalLightSceneProxy @ 147ea5b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLocalLightSceneProxy * __thiscall
FLocalLightSceneProxy::FLocalLightSceneProxy
          (FLocalLightSceneProxy *this,ULocalLightComponent *param_1)

{
  float fVar1;
  float fVar2;
  
  FLightSceneProxy::FLightSceneProxy((FLightSceneProxy *)this,(ULightComponent *)param_1);
  fVar1 = __real_3f800000;
  *(undefined ***)this = &___7FLocalLightSceneProxy__6B_;
  this->MaxDrawDistance = *(float *)((longlong)&param_1->_padding_ + 4);
  this->FadeRange = *(float *)&param_1->_padding_;
  this->InverseExposureBlend = param_1->InverseExposureBlend;
  fVar2 = param_1->AttenuationRadius;
  this->Radius = fVar2;
  if (fVar2 <= __real_3727c5ac) {
    fVar2 = __real_3727c5ac;
  }
  this->InvRadius = fVar1 / fVar2;
  return this;
}

// AffectsBounds @ 147eaf150

bool __thiscall
FLocalLightSceneProxy::AffectsBounds
          (FLocalLightSceneProxy *this,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (param_1->Origin).field0_0x0._s_0.Y - *(double *)&this->field_0x138;
  dVar3 = (param_1->Origin).field0_0x0._s_0.X - *(double *)&this->field_0x130;
  dVar1 = (param_1->Origin).field0_0x0._s_0.Z - *(double *)&this->field_0x140;
  dVar2 = (double)this->Radius + param_1->SphereRadius;
  return dVar4 * dVar4 + dVar3 * dVar3 + dVar1 * dVar1 <= dVar2 * dVar2;
}

// GetBoundingSphere @ 147ebef20

TSphere<double> * __thiscall
FLocalLightSceneProxy::GetBoundingSphere
          (FLocalLightSceneProxy *this,TSphere<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
  fVar3 = (float)(**(code **)(*(longlong *)this + 0x18))();
  dVar1 = *(double *)&this->field_0x28;
  dVar2 = *(double *)&this->field_0x30;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = *(double *)&this->field_0x20;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = dVar2;
  __return_storage_ptr__->W = (double)fVar3;
  return __return_storage_ptr__;
}

// GetEffectiveScreenRadius @ 147ebf630

float __thiscall
FLocalLightSceneProxy::GetEffectiveScreenRadius(FLocalLightSceneProxy *this,FViewMatrices *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  float fVar7;
  
  fVar1 = param_1->ScreenScale;
  dVar2 = *(double *)&this->field_0x140 - (param_1->ViewOrigin).field0_0x0._s_0.Z;
  dVar3 = *(double *)&this->field_0x130 - (param_1->ViewOrigin).field0_0x0._s_0.X;
  dVar4 = *(double *)&this->field_0x138 - (param_1->ViewOrigin).field0_0x0._s_0.Y;
  fVar5 = (float)(**(code **)(*(longlong *)this + 0x18))();
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2;
  auVar6 = sqrtpd(in_XMM1,auVar6);
  fVar7 = (float)auVar6._0_8_;
  if ((float)auVar6._0_8_ <= __real_3f800000) {
    fVar7 = __real_3f800000;
  }
  return (fVar5 * fVar1) / fVar7;
}

// GetEffectiveScreenRadius @ 147ebf6e0

float __thiscall
FLocalLightSceneProxy::GetEffectiveScreenRadius
          (FLocalLightSceneProxy *this,FViewMatrices *param_1,TIntPoint<int> *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  
  dVar1 = *(double *)&this->field_0x140 - (param_1->ViewOrigin).field0_0x0._s_0.Z;
  dVar2 = *(double *)&this->field_0x130 - (param_1->ViewOrigin).field0_0x0._s_0.X;
  dVar4 = *(double *)&this->field_0x138 - (param_1->ViewOrigin).field0_0x0._s_0.Y;
  dVar5 = (double)((float)(param_2->field0_0x0)._s_0.Y * __real_3f000000) *
          (param_1->ProjectionScale).field0_0x0._s_0.Y;
  auVar7._0_8_ = (double)((float)(param_2->field0_0x0)._s_0.X * __real_3f000000) *
                 (param_1->ProjectionScale).field0_0x0._s_0.X;
  auVar7._8_8_ = 0;
  if (dVar5 <= auVar7._0_8_) {
    dVar5 = auVar7._0_8_;
  }
  fVar6 = (float)(**(code **)(*(longlong *)this + 0x18))();
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar4 * dVar4 + dVar2 * dVar2 + dVar1 * dVar1;
  auVar7 = sqrtpd(auVar7,auVar3);
  fVar8 = (float)auVar7._0_8_;
  if ((float)auVar7._0_8_ <= __real_3f800000) {
    fVar8 = __real_3f800000;
  }
  return (fVar6 * (float)dVar5) / fVar8;
}

// GetFadeRange @ 147ec0200

float __thiscall FLocalLightSceneProxy::GetFadeRange(FLocalLightSceneProxy *this)

{
  return this->FadeRange;
}

// GetMaxDrawDistance @ 147ec1b80

float __thiscall FLocalLightSceneProxy::GetMaxDrawDistance(FLocalLightSceneProxy *this)

{
  return this->MaxDrawDistance;
}

// GetPerObjectProjectedShadowInitializer @ 147ec2a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FLocalLightSceneProxy::GetPerObjectProjectedShadowInitializer
          (FLocalLightSceneProxy *this,TBoxSphereBounds<double,double> *param_1,
          FPerObjectProjectedShadowInitializer *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  float fVar9;
  TInverseRotationMatrix<double> *pTVar10;
  uint uVar11;
  uint uVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1f8 [32];
  double local_1d8;
  double local_1d0;
  double local_1c8;
  TVector<double>_u_0 local_1c0;
  TRotator<double> local_1a0 [2];
  undefined4 local_170;
  undefined4 uStack_16c;
  TInverseRotationMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  (**(code **)(*(longlong *)this + 0x1b0))(this,&local_1d8,param_1);
  fVar9 = __real_3f800000;
  dVar7 = __real_3ff0000000000000;
  dVar22 = (param_1->Origin).field0_0x0._s_0.X - local_1d8;
  dVar23 = (param_1->Origin).field0_0x0._s_0.Y - local_1d0;
  dVar21 = (param_1->BoxExtent).field0_0x0._s_0.Z;
  local_1c0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z - local_1c8;
  auVar12._0_8_ = dVar22 * dVar22;
  auVar12._8_8_ = 0;
  dVar6 = dVar23 * dVar23 + auVar12._0_8_ + local_1c0._s_0.Z * local_1c0._s_0.Z;
  dVar1 = (param_1->BoxExtent).field0_0x0._s_0.Y;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar6;
  auVar13 = sqrtpd(auVar12,auVar5);
  fVar20 = (float)auVar13._0_8_;
  dVar2 = (param_1->BoxExtent).field0_0x0._s_0.X;
  auVar14._0_8_ = dVar2 * dVar2;
  auVar14._8_8_ = 0;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar1 * dVar1 + auVar14._0_8_ + dVar21 * dVar21;
  auVar13 = sqrtpd(auVar14,auVar13);
  fVar25 = (float)auVar13._0_8_;
  fVar24 = __real_3f800000;
  if ((fVar25 < fVar20) &&
     (fVar24 = (__real_3f800000 / SQRT((fVar20 - fVar25) * (fVar25 + fVar20))) * fVar25,
     __real_3f800000 <= fVar24)) {
    fVar24 = __real_3f800000;
  }
  if (fVar25 * __real_3f8ccccd < fVar20) goto LAB_147ec2c4b;
  if (dVar6 == __real_3ff0000000000000) {
LAB_147ec2bde:
    uVar16 = SUB84(dVar22,0);
    uVar17 = (int)((ulonglong)dVar22 >> 0x20);
    uVar18 = SUB84(dVar23,0);
    uVar19 = (int)((ulonglong)dVar23 >> 0x20);
  }
  else {
    if (__real_3e45798ee0000000 <= dVar6) {
      dVar21 = __real_3ff0000000000000 / SQRT(dVar6);
      dVar23 = dVar23 * dVar21;
      local_1c0._s_0.Z = local_1c0._s_0.Z * dVar21;
      dVar22 = dVar22 * dVar21;
      goto LAB_147ec2bde;
    }
    local_1a0[0].Roll = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_1c0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  dVar21 = (double)fVar25;
  local_1c0._s_0.Z = dVar21 * local_1c0._s_0.Z * __real_3ff19999a0000000;
  dVar22 = dVar21 * (double)CONCAT44(uVar17,uVar16) * __real_3ff19999a0000000;
  dVar23 = dVar21 * (double)CONCAT44(uVar19,uVar18) * __real_3ff19999a0000000;
  local_1c8 = (param_1->Origin).field0_0x0._s_0.Z - local_1c0._s_0.Z;
  local_1d8 = (param_1->Origin).field0_0x0._s_0.X - dVar22;
  local_1d0 = (param_1->Origin).field0_0x0._s_0.Y - dVar23;
  fVar24 = __real_3f800000;
  fVar20 = fVar25 * __real_3f8ccccd;
LAB_147ec2c4b:
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  *(ulonglong *)param_2 =
       CONCAT44((uint)((ulonglong)local_1d8 >> 0x20) ^ uVar15,SUB84(local_1d8,0) ^ uVar11);
  *(ulonglong *)&param_2->field_0x8 =
       CONCAT44((uint)((ulonglong)local_1d0 >> 0x20) ^ uVar15,SUB84(local_1d0,0) ^ uVar11);
  dVar7 = dVar7 / (double)fVar20;
  *(ulonglong *)&param_2->field_0x10 =
       CONCAT44((uint)((ulonglong)local_1c8 >> 0x20) ^ uVar15,SUB84(local_1c8,0) ^ uVar11);
  local_1c0._s_0.X = dVar7 * dVar22;
  local_1c0._s_0.Y = dVar7 * dVar23;
  local_1c0._s_0.Z = dVar7 * local_1c0._s_0.Z;
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_1c0._s_0,local_1a0);
  pTVar10 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                      (&local_148,local_1a0);
  uVar8 = *(undefined8 *)&pTVar10->field_0x8;
  *(undefined8 *)&param_2->field_0x20 = *(undefined8 *)pTVar10;
  *(undefined8 *)&param_2->field_0x28 = uVar8;
  uVar8 = *(undefined8 *)&pTVar10->field_0x18;
  *(undefined8 *)&param_2->field_0x30 = *(undefined8 *)&pTVar10->field_0x10;
  *(undefined8 *)&param_2->field_0x38 = uVar8;
  uVar8 = *(undefined8 *)&pTVar10->field_0x28;
  *(undefined8 *)&param_2->field_0x40 = *(undefined8 *)&pTVar10->field_0x20;
  *(undefined8 *)&param_2->field_0x48 = uVar8;
  uVar8 = *(undefined8 *)&pTVar10->field_0x38;
  *(undefined8 *)&param_2->field_0x50 = *(undefined8 *)&pTVar10->field_0x30;
  *(undefined8 *)&param_2->field_0x58 = uVar8;
  uVar8 = *(undefined8 *)&pTVar10->field_0x48;
  *(undefined8 *)&param_2->field_0x60 = *(undefined8 *)&pTVar10->field_0x40;
  *(undefined8 *)&param_2->field_0x68 = uVar8;
  uVar8 = *(undefined8 *)&pTVar10->field_0x58;
  *(undefined8 *)&param_2->field_0x70 = *(undefined8 *)&pTVar10->field_0x50;
  *(undefined8 *)&param_2->field_0x78 = uVar8;
  uVar8 = *(undefined8 *)&pTVar10->field_0x68;
  *(undefined8 *)&param_2->field_0x80 = *(undefined8 *)&pTVar10->field_0x60;
  *(undefined8 *)&param_2->field_0x88 = uVar8;
  uVar8 = *(undefined8 *)&pTVar10->field_0x78;
  *(undefined8 *)&param_2->field_0x90 = *(undefined8 *)&pTVar10->field_0x70;
  *(undefined8 *)&param_2->field_0x98 = uVar8;
  *(double *)&param_2->field_0xa0 = (double)(fVar9 / fVar24);
  *(double *)&param_2->field_0xa8 = (double)(fVar9 / fVar24);
  uVar8 = *(undefined8 *)&(param_1->BoxExtent).field0_0x0;
  dVar6 = (param_1->BoxExtent).field0_0x0._s_0.Y;
  dVar21 = (param_1->Origin).field0_0x0._s_0.Z;
  dVar1 = (param_1->BoxExtent).field0_0x0._s_0.Z;
  dVar2 = param_1->SphereRadius;
  local_1d0 = (param_1->Origin).field0_0x0._s_0.Y - local_1d0;
  local_170 = (undefined4)uVar8;
  uStack_16c = (undefined4)((ulonglong)uVar8 >> 0x20);
  auVar4._8_4_ = SUB84(local_1d0,0);
  auVar4._0_8_ = (param_1->Origin).field0_0x0._s_0.X - local_1d8;
  auVar4._12_4_ = (int)((ulonglong)local_1d0 >> 0x20);
  *(undefined1 (*) [16])&param_2->field_0xb0 = auVar4;
  auVar3._8_4_ = local_170;
  auVar3._0_8_ = dVar21 - local_1c8;
  auVar3._12_4_ = uStack_16c;
  *(undefined1 (*) [16])&param_2->field_0xc0 = auVar3;
  *(double *)&param_2->field_0xd0 = dVar6;
  *(double *)&param_2->field_0xd8 = dVar1;
  *(double *)&param_2->field_0xe0 = dVar2;
  *(undefined8 *)&param_2->field_0xf0 = 0;
  *(undefined8 *)&param_2->field_0xf8 = 0;
  *(undefined8 *)&param_2->field_0x100 = 0x3ff0000000000000;
  *(undefined8 *)&param_2->field_0x108 = 0;
  *(undefined4 *)&param_2->field_0x110 = 0x3dcccccd;
  *(float *)&param_2->field_0x114 = this->Radius;
  return true;
}

// GetPerObjectProjectedShadowProjectionPoint @ 147ec2e20

TVector<double> * __thiscall
FLocalLightSceneProxy::GetPerObjectProjectedShadowProjectionPoint
          (FLocalLightSceneProxy *this,TVector<double> *__return_storage_ptr__,
          TBoxSphereBounds<double,double> *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&this->field_0x130;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = *(double *)&this->field_0x138;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = *(double *)&this->field_0x140;
  return __return_storage_ptr__;
}

// GetRadius @ 147ec50e0

float __thiscall FLocalLightSceneProxy::GetRadius(FLocalLightSceneProxy *this)

{
  return this->Radius;
}

// GetScissorRect @ 147ec5fb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FLocalLightSceneProxy::GetScissorRect
          (FLocalLightSceneProxy *this,TIntRect<int> *param_1,FSceneView *param_2,
          TIntRect<int> *param_3)

{
  uint uVar1;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  (param_1->field0_0x0)._s_0.Min.field0_0x0 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
  (param_1->field0_0x0)._s_0.Max.field0_0x0 = (param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_28._s_0.X = (param_2->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
  local_28._s_0.Y = (param_2->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
  local_28._s_0.Z = (param_2->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
  local_48._s_0.X = (double)*(undefined8 *)&this->field_0x130;
  local_48._s_0.Y = (double)*(undefined8 *)&this->field_0x138;
  local_48._s_0.Z = (double)*(undefined8 *)&this->field_0x140;
  uVar1 = FMath::ComputeProjectedSphereScissorRect
                    (param_1,(TVector<double> *)&local_48._s_0,this->Radius,
                     (TVector<double> *)&local_28._s_0,&(param_2->ViewMatrices).ViewMatrix,
                     &(param_2->ViewMatrices).ProjectionMatrix);
  return uVar1 == 1;
}

// IsLocalLight @ 147ecdce0

bool __thiscall FLocalLightSceneProxy::IsLocalLight(FLocalLightSceneProxy *this)

{
  return true;
}

// SetScissorRect @ 147edd1b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FLocalLightSceneProxy::SetScissorRect
          (FLocalLightSceneProxy *this,FRHICommandList *param_1,FSceneView *param_2,
          TIntRect<int> *param_3,TIntRect<int> *param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)this + 0xe0))();
  if (cVar1 != '\0') {
    FRHICommandList::SetScissorRect(param_1,true,0,0,0,0);
    if (param_4 != (TIntRect<int> *)0x0) {
      (param_4->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
      (param_4->field0_0x0)._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    }
    return true;
  }
  FRHICommandList::SetScissorRect(param_1,false,0,0,0,0);
  return false;
}

// UpdateRadius @ 147ee5630

void __thiscall FLocalLightSceneProxy::UpdateRadius(FLocalLightSceneProxy *this,float param_1)

{
  float fVar1;
  
  fVar1 = __real_3f800000;
  this->Radius = param_1;
  if (param_1 <= __real_3727c5ac) {
    param_1 = __real_3727c5ac;
  }
  this->InvRadius = fVar1 / param_1;
  return;
}

