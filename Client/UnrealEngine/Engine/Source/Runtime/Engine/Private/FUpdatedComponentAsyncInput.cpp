// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// AreSymmetricRotations @ 1476efe30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FUpdatedComponentAsyncInput::AreSymmetricRotations
          (FUpdatedComponentAsyncInput *this,TQuat<double> *param_1,TQuat<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38 [2];
  
  dVar1 = __real_3ff0000000000000;
  if ((param_3->field0_0x0)._s_0.Y == (param_3->field0_0x0)._s_0.X) {
    local_58._s_0.Z = __real_3ff0000000000000;
    local_58._s_0.X = 0.0;
    local_58._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (param_1,(TVector<double> *)&local_78._s_0,(TVector<double> *)&local_58._s_0);
    local_38[0]._s_0.Z = dVar1;
    local_38[0]._s_0.X = 0.0;
    local_38[0]._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (param_2,(TVector<double> *)&local_58._s_0,(TVector<double> *)&local_38[0]._s_0);
    uVar2 = SUB84(local_78._s_0.X - local_58._s_0.X,0) &
            (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar3 = (uint)((ulonglong)(local_78._s_0.X - local_58._s_0.X) >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((double)CONCAT44(uVar3,uVar2) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar3,uVar2) == __real_3f1a36e2e0000000) &&
        (uVar2 = SUB84(local_78._s_0.Y - local_58._s_0.Y,0) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar3 = (uint)((ulonglong)(local_78._s_0.Y - local_58._s_0.Y) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar3,uVar2) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar3,uVar2) == __real_3f1a36e2e0000000)) &&
       (uVar2 = SUB84(local_78._s_0.Z - local_58._s_0.Z,0) &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar3 = (uint)((ulonglong)(local_78._s_0.Z - local_58._s_0.Z) >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar3,uVar2) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar3,uVar2) == __real_3f1a36e2e0000000)) {
      return true;
    }
  }
  return false;
}

// GetPosition @ 147709c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FUpdatedComponentAsyncInput::GetPosition
          (FUpdatedComponentAsyncInput *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  FSingleParticlePhysicsProxy *pFVar4;
  TVector<double,3> *pTVar5;
  FSingleParticlePhysicsProxy *this_00;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this_00 = this->PhysicsHandle;
  if (this_00 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar4 = this_00;
    if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar4 = (FSingleParticlePhysicsProxy *)0x0;
    }
    if (pFVar4 != (FSingleParticlePhysicsProxy *)0x0) {
      if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        this_00 = (FSingleParticlePhysicsProxy *)0x0;
      }
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_00);
      pTVar5 = Chaos::TParticles<double,3>::GetX
                         ((TParticles<double,3> *)this_00->Handle->_padding_,
                          (int)this_00->Handle->_padding_);
      dVar2 = *(double *)&pTVar5->field_0x8;
      dVar1 = *(double *)&pTVar5->field_0x10;
      (__return_storage_ptr__->field0_0x0).XYZ[0] = *(double *)pTVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetRotation @ 14770a820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TQuat<double> * __thiscall
FUpdatedComponentAsyncInput::GetRotation
          (FUpdatedComponentAsyncInput *this,TQuat<double> *__return_storage_ptr__)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  FSingleParticlePhysicsProxy *pFVar11;
  TQuat<double> *pTVar12;
  uint uVar13;
  FSingleParticlePhysicsProxy *this_00;
  longlong lVar14;
  
  dVar9 = UE::Math::TQuat<double>::Identity.W;
  dVar8 = UE::Math::TQuat<double>::Identity.Z;
  dVar7 = UE::Math::TQuat<double>::Identity.Y;
  this_00 = this->PhysicsHandle;
  if (this_00 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar11 = this_00;
    if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar11 = (FSingleParticlePhysicsProxy *)0x0;
    }
    if (pFVar11 != (FSingleParticlePhysicsProxy *)0x0) {
      if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        this_00 = (FSingleParticlePhysicsProxy *)0x0;
      }
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_00);
      uVar3 = (uint)this_00->Handle->_padding_;
      lVar14 = (longlong)(int)uVar3;
      lVar4 = this_00->Handle->_padding_;
      uVar13 = 0;
      if ((int)uVar3 < *(int *)(lVar4 + 0x50)) {
        uVar13 = ~uVar3 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TQuat<double> *)(*pcVar5)();
          return pTVar12;
        }
      }
      lVar4 = *(longlong *)(lVar4 + 0x48);
      fVar1 = *(float *)(lVar4 + 4 + lVar14 * 0x10);
      uVar2 = *(undefined8 *)(lVar4 + 8 + lVar14 * 0x10);
      __return_storage_ptr__->X = (double)*(float *)(lVar4 + lVar14 * 0x10);
      __return_storage_ptr__->Y = (double)fVar1;
      dVar7 = (double)(float)uVar2;
      dVar8 = (double)(float)((ulonglong)uVar2 >> 0x20);
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      __return_storage_ptr__->Z = dVar7;
      __return_storage_ptr__->W = (double)auVar6._8_8_;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar7;
  __return_storage_ptr__->Z = dVar8;
  __return_storage_ptr__->W = dVar9;
  return __return_storage_ptr__;
}

// MoveComponent @ 14771ab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FUpdatedComponentAsyncInput::MoveComponent
          (FUpdatedComponentAsyncInput *this,TVector<double> *param_1,TQuat<double> *param_2,
          bool param_3,FHitResult *param_4,EMoveComponentFlags param_5,ETeleportType param_6,
          FCharacterMovementComponentAsyncInput *param_7,
          FCharacterMovementComponentAsyncOutput *param_8)

{
  int *piVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  FCharacterMovementComponentAsyncOutput *pFVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined1 uVar21;
  uint uVar22;
  FSingleParticlePhysicsProxy *pFVar23;
  TVector<double,3> *pTVar24;
  TQuat<double> *pTVar25;
  undefined8 *puVar26;
  UPrimitiveComponent *pUVar27;
  AActor *pAVar28;
  int iVar29;
  uint uVar30;
  FUpdatedComponentAsyncInput *pFVar31;
  FScriptContainerElement *pFVar32;
  ForElementType<FOverlapInfo> FVar33;
  FScriptContainerElement *pFVar34;
  FHitResult *pFVar35;
  TQuat<double> *pTVar36;
  FSingleParticlePhysicsProxy *this_00;
  FUpdatedComponentAsyncOutput *pFVar37;
  void *_Dst;
  uint uVar38;
  int iVar39;
  longlong lVar40;
  float fVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStackY_738 [32];
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_6e0;
  longlong local_6d0;
  TQuat<double> *local_6c8;
  TVector<double>_u_0 local_6c0;
  FCharacterMovementComponentAsyncInput *local_6a8;
  TVector<double>_u_0 local_6a0;
  TVector<double>_u_0 local_688;
  FUpdatedComponentAsyncInput *local_670;
  TVector<double> *local_668;
  longlong local_660;
  FCharacterMovementComponentAsyncOutput *local_658;
  TQuat<double> local_648 [2];
  undefined8 local_5f8;
  undefined4 uStack_5f0;
  undefined1 uStack_5ec;
  undefined2 uStack_5eb;
  undefined1 uStack_5e9;
  TVector<double>_u_0 local_5e8;
  double local_5d0;
  undefined8 local_5c8;
  byte local_51b;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined1 local_4f4;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4d8;
  undefined8 local_4d0;
  FScriptContainerElement local_4c8 [8];
  FHitResult local_4c0;
  ForElementType<FOverlapInfo> local_3c0;
  uint local_a0 [2];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_738;
  this_00 = this->PhysicsHandle;
  local_6a8 = param_7;
  local_658 = param_8;
  local_6c8 = param_2;
  local_670 = this;
  local_668 = param_1;
  if (this_00 == (FSingleParticlePhysicsProxy *)0x0) {
LAB_14771ac41:
    local_6c0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_6c0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_6c0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pFVar23 = this_00;
    if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar23 = (FSingleParticlePhysicsProxy *)0x0;
    }
    if (pFVar23 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_14771ac41;
    if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      this_00 = (FSingleParticlePhysicsProxy *)0x0;
    }
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_00);
    pTVar24 = Chaos::TParticles<double,3>::GetX
                        ((TParticles<double,3> *)this_00->Handle->_padding_,
                         (int)this_00->Handle->_padding_);
    local_6c0._s_0.X = (double)*(undefined8 *)pTVar24;
    local_6c0._s_0.Y = (double)*(undefined8 *)&pTVar24->field_0x8;
    local_6c0._s_0.Z = (double)*(undefined8 *)&pTVar24->field_0x10;
  }
  local_688._s_0.Y = local_6c0._s_0.Y + (param_1->field0_0x0)._s_0.Y;
  local_688._s_0.X = local_6c0._s_0.X + (param_1->field0_0x0)._s_0.X;
  local_688._s_0.Z = local_6c0._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  fVar45 = (float)((local_688._s_0.Y - local_6c0._s_0.Y) * (local_688._s_0.Y - local_6c0._s_0.Y) +
                   (local_688._s_0.X - local_6c0._s_0.X) * (local_688._s_0.X - local_6c0._s_0.X) +
                  (local_688._s_0.Z - local_6c0._s_0.Z) * (local_688._s_0.Z - local_6c0._s_0.Z));
  pFVar31 = this;
  pTVar25 = GetRotation(this,local_648);
  pTVar36 = local_6c8;
  fVar46 = __real_3f800000;
  dVar7 = __real_3e45798ee0000000;
  fVar47 = __real_342bcc76;
  if (!param_3) {
    fVar47 = 0.0;
  }
  if (fVar45 <= fVar47) {
    dVar11 = local_648[0].Z + param_2->Z;
    dVar12 = local_648[0].W + param_2->W;
    local_648[0].Z = param_2->Z - local_648[0].Z;
    local_648[0].W = param_2->W - local_648[0].W;
    dVar9 = local_648[0].X + param_2->X;
    dVar10 = local_648[0].Y + param_2->Y;
    local_648[0].X = param_2->X - local_648[0].X;
    local_648[0].Y = param_2->Y - local_648[0].Y;
    uVar38 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar42 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar43 = __xmm_7fffffffffffffff7fffffffffffffff._8_4_;
    uVar44 = __xmm_7fffffffffffffff7fffffffffffffff._12_4_;
    local_5d0 = __real_3e45798ee0000000;
    lVar40 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)local_648[0].W >> 0x20) & uVar44,
                               SUB84(local_648[0].W,0) & uVar43));
    auVar4._8_4_ = (int)lVar40;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)local_648[0].Z >> 0x20) & uVar42,
                                     SUB84(local_648[0].Z,0) & uVar38));
    auVar4._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
    iVar29 = movmskpd((int)pFVar31,auVar4);
    lVar40 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)local_648[0].Y >> 0x20) & uVar44,
                               SUB84(local_648[0].Y,0) & uVar43));
    auVar5._8_4_ = (int)lVar40;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)local_648[0].X >> 0x20) & uVar42,
                                     SUB84(local_648[0].X,0) & uVar38));
    auVar5._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
    uVar22 = movmskpd((int)pTVar25,auVar5);
    uVar30 = iVar29 << 2 | uVar22;
    if (uVar30 == 0) {
LAB_14771ae52:
      if (param_4 != (FHitResult *)0x0) {
        param_4->FaceIndex = 0;
        param_4->Distance = 0.0;
        param_4->_padding_ = 0;
        *(undefined8 *)&param_4->Location = 0;
        *(undefined8 *)&(param_4->Location).field_0x8 = 0;
        *(undefined8 *)&(param_4->Location).field_0x10 = 0;
        *(undefined8 *)&param_4->ImpactPoint = 0;
        *(undefined8 *)&(param_4->ImpactPoint).field_0x8 = 0;
        *(undefined8 *)&(param_4->ImpactPoint).field_0x10 = 0;
        *(undefined8 *)&param_4->Normal = 0;
        *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
        *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
        *(undefined8 *)&param_4->ImpactNormal = 0;
        *(undefined8 *)&(param_4->ImpactNormal).field_0x8 = 0;
        *(undefined8 *)&(param_4->ImpactNormal).field_0x10 = 0;
        param_4->PenetrationDepth = 0.0;
        param_4->Item = 0;
        param_4->ElementIndex = '\0';
        param_4->field_0xad = 0;
        param_4->_padding_ = 0;
        (param_4->PhysMaterial).WeakPtr = (FWeakObjectPtr)0x0;
        (param_4->Component).WeakPtr = (FWeakObjectPtr)0x0;
        (param_4->PhysicsObjectOwner).WeakPtr = (FWeakObjectPtr)0x0;
        param_4->PhysicsObject = (FPhysicsObject *)0x0;
        (param_4->BoneName).ComparisonIndex = 0;
        (param_4->BoneName).Number = 0;
        (param_4->MyBoneName).ComparisonIndex = 0;
        (param_4->MyBoneName).Number = 0;
        (param_4->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
        (param_4->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
        param_4->Time = 1.0;
        param_4->MyItem = -1;
        (param_4->HitObjectHandle).ManagerInterface.InterfaceInstance =
             (IActorInstanceManagerInterface *)0x0;
        (param_4->HitObjectHandle).InstanceIndex = -1;
        (param_4->HitObjectHandle).ResolutionStatus = Invalid;
        *(undefined3 *)&(param_4->HitObjectHandle).field_0x1d = 0;
        *(double *)&param_4->TraceStart = local_6c0._s_0.X;
        *(double *)&(param_4->TraceStart).field_0x8 = local_6c0._s_0.Y;
        *(double *)&(param_4->TraceStart).field_0x10 = local_6c0._s_0.Z;
        *(double *)&param_4->TraceEnd = local_688._s_0.X;
        *(double *)&(param_4->TraceEnd).field_0x8 = local_688._s_0.Y;
        *(double *)&(param_4->TraceEnd).field_0x10 = local_688._s_0.Z;
      }
      return true;
    }
    lVar40 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar44,SUB84(dVar12,0) & uVar43))
    ;
    auVar6._8_4_ = (int)lVar40;
    auVar6._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar42,
                                     SUB84(dVar11,0) & uVar38));
    auVar6._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
    uVar30 = movmskpd(uVar30,auVar6);
    lVar40 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar44,SUB84(dVar10,0) & uVar43))
    ;
    auVar8._8_4_ = (int)lVar40;
    auVar8._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar42,
                                     SUB84(dVar9,0) & uVar38));
    auVar8._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
    iVar29 = movmskpd(uVar22,auVar8);
    if ((uVar30 & 0x3fffffff) == 0 && iVar29 == 0) goto LAB_14771ae52;
    fVar45 = 0.0;
  }
  local_51b = local_51b & 0xfe;
  bVar18 = false;
  local_508 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_500 = 0;
  local_4f8 = 0xffffffff;
  local_4f4 = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  local_4d8 = 0;
  local_4d0 = 0;
  local_5c8._4_4_ = 1.0;
  bVar19 = false;
  local_3c0.SecondaryData = (ForElementType<FOverlapInfo>)0x0;
  local_a0[0] = 0;
  local_a0[1] = 3;
  if (!param_3) {
    SetPosition(this,(TVector<double> *)&local_688._s_0);
    pTVar36 = local_6c8;
    SetRotation(this,local_6c8);
    if (fVar45 == 0.0) {
      (**(code **)(this->_padding_ + 0x10))
                (this,local_648,pTVar36,&((param_7->UpdatedComponentInput).Ptr)->Scale);
    }
    goto LAB_14771b7e4;
  }
  local_6e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e0.ArrayNum = 0;
  local_6e0.ArrayMax = 0;
  local_6a0._s_0.X = local_6c0._s_0.X;
  local_6a0._s_0.Y = local_6c0._s_0.Y;
  local_6a0._s_0.Z = local_6c0._s_0.Z;
  if (fVar45 <= 0.0) {
    if ((fVar45 == 0.0) && (this->bIsQueryCollisionEnabled != false)) {
      (**(code **)(this->_padding_ + 0x10))
                (this,local_648,local_6c8,&((param_7->UpdatedComponentInput).Ptr)->Scale);
    }
  }
  else if (this->bIsQueryCollisionEnabled == false) {
    local_6a0._s_0.X = local_6c0._s_0.X + (param_1->field0_0x0)._s_0.X;
    local_6a0._s_0.Y = local_6c0._s_0.Y + (param_1->field0_0x0)._s_0.Y;
    local_6a0._s_0.Z = local_6c0._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  }
  else {
    bVar18 = UWorld::ComponentSweepMulti
                       (param_7->World,&local_6e0,this->UpdatedComponent,
                        (TVector<double> *)&local_6c0._s_0,(TVector<double> *)&local_688._s_0,
                        local_648,&this->MoveComponentQueryParams);
    uVar22 = 0;
    iVar29 = local_6e0.ArrayNum;
    if (0 < local_6e0.ArrayNum) {
      lVar40 = 0;
      fVar41 = fVar46 / SQRT(fVar45);
      fVar45 = fVar41;
      if (__real_3dcccccd <= fVar41) {
        fVar45 = __real_3dcccccd;
      }
      if (fVar45 <= fVar41 * __real_3dcccccd) {
        fVar45 = fVar41 * __real_3dcccccd;
      }
      fVar45 = fVar45 + __real_3a83126f;
      do {
        uVar30 = 0;
        if ((int)uVar22 < local_6e0.ArrayNum) {
          uVar30 = ~uVar22 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar3 = (code *)swi(3);
          uVar21 = (*pcVar3)();
          return (bool)uVar21;
        }
        uVar22 = uVar22 + 1;
        fVar41 = *(float *)(local_6e0.AllocatorInstance.Data + lVar40 + 4) - fVar45;
        if (fVar46 <= fVar41) {
          fVar41 = fVar46;
        }
        if (fVar41 <= 0.0) {
          fVar41 = 0.0;
        }
        *(float *)(local_6e0.AllocatorInstance.Data + lVar40 + 4) = fVar41;
        lVar40 = lVar40 + 0x100;
        param_7 = local_6a8;
        this = local_670;
        iVar29 = local_6e0.ArrayNum;
      } while ((int)uVar22 < local_6e0.ArrayNum);
    }
    uVar30 = 0;
    uVar22 = 0xffffffff;
    if (((bVar18) || (this->bGatherOverlaps != false)) &&
       (uVar38 = 0xffffffff, param_7 = local_6a8, 0 < iVar29)) {
      local_660 = -0x100;
      local_6d0 = 0;
      fVar46 = __real_7f7fc99e;
      do {
        uVar42 = 0;
        if ((int)uVar30 < iVar29) {
          uVar42 = ~uVar30 >> 0x1f;
        }
        if (uVar42 == 0) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar3 = (code *)swi(3);
            uVar21 = (*pcVar3)();
            return (bool)uVar21;
          }
          iVar29 = local_6e0.ArrayNum;
        }
        pFVar31 = local_670;
        pFVar35 = (FHitResult *)(local_6e0.AllocatorInstance.Data + local_6d0);
        if (pFVar35->bBlockingHit == 0) {
          if (local_670->bGatherOverlaps != false) {
            pUVar27 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(pFVar35->Component).WeakPtr);
            if (((pUVar27 == (UPrimitiveComponent *)0x0) ||
                (pAVar28 = FActorInstanceHandle::FetchActor(&pFVar35->HitObjectHandle),
                pFVar31->UpdatedComponent == pUVar27)) ||
               ((pAVar28 == (AActor *)0x0 || (local_6a8->World == (UWorld *)0x0)))) {
LAB_14771b4f4:
              iVar29 = local_6e0.ArrayNum;
            }
            else {
              if (-1 < (int)uVar38) {
                uVar42 = 0;
                if ((int)uVar38 < local_6e0.ArrayNum) {
                  uVar42 = ~uVar38 >> 0x1f;
                }
                iVar29 = local_6e0.ArrayNum;
                if (uVar42 == 0) {
                  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar18) {
                    pcVar3 = (code *)swi(3);
                    uVar21 = (*pcVar3)();
                    return (bool)uVar21;
                  }
                  iVar29 = local_6e0.ArrayNum;
                }
                if (*(float *)(local_6e0.AllocatorInstance.Data + local_660 + 4) < pFVar35->Time)
                goto LAB_14771b1d9;
              }
              pFVar17 = local_658;
              if ((uVar22 == 0xffffffff) && (0.0 < pFVar35->Time)) {
                uVar22 = local_a0[0];
              }
              local_4c8[0] = (FScriptContainerElement)0x1;
              pFVar37 = &local_658->UpdatedComponentOutput;
              FHitResult::FHitResult(&local_4c0,pFVar35);
              pFVar34 = (pFVar37->SpeculativeOverlaps).AllocatorInstance.Data;
              for (pFVar32 = pFVar34;
                  pFVar32 !=
                  pFVar34 + (longlong)(pFVar17->UpdatedComponentOutput).SpeculativeOverlaps.ArrayNum
                            * 0x108; pFVar32 = pFVar32 + 0x108) {
                if (((local_4c0.Component.WeakPtr.ObjectIndex == *(int *)(pFVar32 + 0xe0)) &&
                    (local_4c0.Component.WeakPtr.ObjectSerialNumber == *(int *)(pFVar32 + 0xe4))) &&
                   (local_4c0.Item == *(int *)(pFVar32 + 0xb0))) {
                  if ((int)(((longlong)pFVar32 - (longlong)pFVar34) / 0x108) != -1)
                  goto LAB_14771b4f4;
                  break;
                }
              }
              if (((pFVar34 <= local_4c8) &&
                  (local_4c8 <
                   pFVar34 + (longlong)
                             (pFVar17->UpdatedComponentOutput).SpeculativeOverlaps.ArrayMax * 0x108)
                  ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar18)) {
                pcVar3 = (code *)swi(3);
                uVar21 = (*pcVar3)();
                return (bool)uVar21;
              }
              iVar29 = (pFVar17->UpdatedComponentOutput).SpeculativeOverlaps.ArrayNum;
              piVar1 = &(pFVar17->UpdatedComponentOutput).SpeculativeOverlaps.ArrayMax;
              if (iVar29 == *piVar1) {
                iVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x108,8,(ForAnyElementType *)pFVar37,piVar1);
              }
              (pFVar17->UpdatedComponentOutput).SpeculativeOverlaps.ArrayNum = iVar29 + 1;
              pFVar34 = (pFVar37->SpeculativeOverlaps).AllocatorInstance.Data;
              pFVar34[(longlong)iVar29 * 0x108] = local_4c8[0];
              FHitResult::FHitResult
                        ((FHitResult *)(pFVar34 + (longlong)iVar29 * 0x108 + 8),&local_4c0);
              iVar29 = local_6e0.ArrayNum;
            }
          }
        }
        else if ((pFVar35->Distance <= PrimitiveComponentCVars::HitDistanceToleranceCVar &&
                  PrimitiveComponentCVars::HitDistanceToleranceCVar != pFVar35->Distance) ||
                (pFVar35->bStartPenetrating != '\0')) {
          if (((param_5 & MOVECOMP_NeverIgnoreBlockingOverlaps) != MOVECOMP_NoFlags) ||
             (UE::Math::TVector<double>::GetSafeNormal
                        (local_668,(TVector<double> *)&local_5e8._s_0,dVar7,
                         &UE::Math::TVector<double>::ZeroVector),
             (float)(local_5e8._s_0.Y * *(double *)&(pFVar35->ImpactNormal).field_0x8 +
                     local_5e8._s_0.X * *(double *)&pFVar35->ImpactNormal +
                    local_5e8._s_0.Z * *(double *)&(pFVar35->ImpactNormal).field_0x10) <=
             PrimitiveComponentCVars::InitialOverlapToleranceCVar)) {
            if (pFVar35->bStartPenetrating == '\0') goto LAB_14771b1c0;
            fVar45 = (float)(*(double *)&(pFVar35->ImpactNormal).field_0x8 *
                             (local_668->field0_0x0)._s_0.Y +
                             *(double *)&pFVar35->ImpactNormal * (local_668->field0_0x0)._s_0.X +
                            *(double *)&(pFVar35->ImpactNormal).field_0x10 *
                            (local_668->field0_0x0)._s_0.Z);
            if (fVar45 < fVar46) {
              fVar46 = fVar45;
              uVar38 = uVar30;
              local_660 = local_6d0;
            }
          }
        }
        else {
LAB_14771b1c0:
          uVar42 = uVar30;
          if (uVar38 == 0xffffffff) break;
        }
        local_6d0 = local_6d0 + 0x100;
        uVar30 = uVar30 + 1;
        uVar42 = uVar38;
      } while ((int)uVar30 < iVar29);
      uVar38 = uVar42;
      param_7 = local_6a8;
      if ((int)uVar38 < 0) goto LAB_14771b525;
LAB_14771b1d9:
      uVar30 = 0;
      if ((int)uVar38 < iVar29) {
        uVar30 = ~uVar38 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        uVar21 = (*pcVar3)();
        return (bool)uVar21;
      }
      lVar40 = 2;
      puVar26 = &local_5c8;
      pFVar34 = local_6e0.AllocatorInstance.Data + (ulonglong)uVar38 * 0x100;
      do {
        uVar13 = *(undefined8 *)(pFVar34 + 8);
        uVar14 = *(undefined8 *)(pFVar34 + 0x10);
        uVar15 = *(undefined8 *)(pFVar34 + 0x18);
        *puVar26 = *(undefined8 *)pFVar34;
        puVar26[1] = uVar13;
        uVar13 = *(undefined8 *)(pFVar34 + 0x20);
        uVar16 = *(undefined8 *)(pFVar34 + 0x28);
        puVar26[2] = uVar14;
        puVar26[3] = uVar15;
        uVar14 = *(undefined8 *)(pFVar34 + 0x30);
        uVar15 = *(undefined8 *)(pFVar34 + 0x38);
        puVar26[4] = uVar13;
        puVar26[5] = uVar16;
        uVar13 = *(undefined8 *)(pFVar34 + 0x40);
        uVar16 = *(undefined8 *)(pFVar34 + 0x48);
        puVar26[6] = uVar14;
        puVar26[7] = uVar15;
        uVar14 = *(undefined8 *)(pFVar34 + 0x50);
        uVar15 = *(undefined8 *)(pFVar34 + 0x58);
        puVar26[8] = uVar13;
        puVar26[9] = uVar16;
        uVar13 = *(undefined8 *)(pFVar34 + 0x60);
        uVar16 = *(undefined8 *)(pFVar34 + 0x68);
        puVar26[10] = uVar14;
        puVar26[0xb] = uVar15;
        uVar14 = *(undefined8 *)(pFVar34 + 0x70);
        uVar15 = *(undefined8 *)(pFVar34 + 0x78);
        puVar26[0xc] = uVar13;
        puVar26[0xd] = uVar16;
        puVar26[0xe] = uVar14;
        puVar26[0xf] = uVar15;
        lVar40 = lVar40 + -1;
        puVar26 = puVar26 + 0x10;
        pFVar34 = pFVar34 + 0x80;
      } while (lVar40 != 0);
      bVar18 = true;
      bVar19 = true;
      param_7 = local_6a8;
    }
    else {
LAB_14771b525:
      bVar18 = false;
    }
    if ((local_51b & 1) == 0) {
      local_6a0._s_0.X = local_688._s_0.X;
      local_6a0._s_0.Y = local_688._s_0.Y;
      local_6a0._s_0.Z = local_688._s_0.Z;
    }
    else {
      if ((!bVar18) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("bFilledHitResult",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                              ,0xab8,L""), bVar18)) {
        pcVar3 = (code *)swi(3);
        uVar21 = (*pcVar3)();
        return (bool)uVar21;
      }
      dVar7 = (double)local_5c8._4_4_;
      local_6a0._s_0.Y = (local_688._s_0.Y - local_6c0._s_0.Y) * dVar7 + local_6c0._s_0.Y;
      local_6a0._s_0.X = (local_688._s_0.X - local_6c0._s_0.X) * dVar7 + local_6c0._s_0.X;
      local_6a0._s_0.Z = (local_688._s_0.Z - local_6c0._s_0.Z) * dVar7 + local_6c0._s_0.Z;
      if ((local_6a0._s_0.Y - local_6c0._s_0.Y) * (local_6a0._s_0.Y - local_6c0._s_0.Y) +
          (local_6a0._s_0.X - local_6c0._s_0.X) * (local_6a0._s_0.X - local_6c0._s_0.X) +
          (local_6a0._s_0.Z - local_6c0._s_0.Z) * (local_6a0._s_0.Z - local_6c0._s_0.Z) <=
          (double)fVar47) {
        local_5c8._4_4_ = 0.0;
        local_6a0._s_0.X = local_6c0._s_0.X;
        local_6a0._s_0.Y = local_6c0._s_0.Y;
        local_6a0._s_0.Z = local_6c0._s_0.Z;
        if (uVar22 != 0xffffffff) {
          if ((int)local_a0[0] < (int)uVar22) {
            iVar39 = uVar22 - local_a0[0];
            iVar29 = UE::Core::Private::
                     ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FOverlapInfo>_>
                               (0x108,8,iVar39,&local_3c0,(int *)local_a0,(int *)(local_a0 + 1));
            FVar33 = (ForElementType<FOverlapInfo>)&local_3c0;
            if (local_3c0.SecondaryData != (ForElementType<FOverlapInfo>)0x0) {
              FVar33 = local_3c0.SecondaryData;
            }
            DefaultConstructItems<FOverlapInfo,int>
                      ((void *)((longlong)iVar29 * 0x108 + (longlong)FVar33),iVar39);
          }
          else {
            if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
            }
            if ((int)uVar22 < (int)local_a0[0]) {
              uVar30 = local_a0[0] - uVar22;
              if (((int)(uVar30 | uVar22) < 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     ), bVar18)) {
                pcVar3 = (code *)swi(3);
                uVar21 = (*pcVar3)();
                return (bool)uVar21;
              }
              if (uVar30 != 0) {
                FVar33 = (ForElementType<FOverlapInfo>)&local_3c0;
                if (local_3c0.SecondaryData != (ForElementType<FOverlapInfo>)0x0) {
                  FVar33 = local_3c0.SecondaryData;
                }
                _Dst = (void *)((longlong)(int)uVar22 * 0x108 + (longlong)FVar33);
                iVar29 = (local_a0[0] - uVar30) - uVar22;
                if (iVar29 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar30 * 0x108),
                          (longlong)iVar29 * 0x108);
                }
                local_a0[0] = local_a0[0] - uVar30;
              }
            }
          }
        }
      }
    }
    this = local_670;
    pTVar36 = local_6c8;
    (**(code **)(local_670->_padding_ + 0x10))
              (local_670,local_648,local_6c8,&((param_7->UpdatedComponentInput).Ptr)->Scale);
  }
  SetPosition(this,(TVector<double> *)&local_6a0._s_0);
  SetRotation(this,pTVar36);
  bVar18 = true;
  if (local_6e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e0.AllocatorInstance.Data);
  }
LAB_14771b7e4:
  lVar40 = 2;
  if (((local_51b & 2) == 0) ||
     ((param_5 & MOVECOMP_DisableBlockingOverlapDispatch) == MOVECOMP_NoFlags)) {
    bVar20 = true;
  }
  else {
    bVar20 = false;
  }
  if (((((local_51b & 1) != 0) && (bVar20)) && (!bVar19)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("bFilledHitResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                          ,0xb27,L""), bVar20)) {
    pcVar3 = (code *)swi(3);
    uVar21 = (*pcVar3)();
    return (bool)uVar21;
  }
  if (param_4 != (FHitResult *)0x0) {
    if (bVar19) {
      puVar26 = &local_5c8;
      do {
        uVar13 = *puVar26;
        uVar14 = puVar26[1];
        uVar15 = puVar26[2];
        uVar16 = puVar26[3];
        param_4->FaceIndex = (int)uVar13;
        param_4->Time = (float)(int)((ulonglong)uVar13 >> 0x20);
        param_4->Distance = (float)(int)uVar14;
        param_4->_padding_ = (int)((ulonglong)uVar14 >> 0x20);
        uVar13 = puVar26[4];
        uVar14 = puVar26[5];
        *(undefined8 *)&param_4->Location = uVar15;
        *(undefined8 *)&(param_4->Location).field_0x8 = uVar16;
        uVar15 = puVar26[6];
        uVar16 = puVar26[7];
        *(undefined8 *)&(param_4->Location).field_0x10 = uVar13;
        *(undefined8 *)&param_4->ImpactPoint = uVar14;
        uVar13 = puVar26[8];
        uVar14 = puVar26[9];
        *(undefined8 *)&(param_4->ImpactPoint).field_0x8 = uVar15;
        *(undefined8 *)&(param_4->ImpactPoint).field_0x10 = uVar16;
        uVar15 = puVar26[10];
        uVar16 = puVar26[0xb];
        *(undefined8 *)&param_4->Normal = uVar13;
        *(undefined8 *)&(param_4->Normal).field_0x8 = uVar14;
        uVar13 = puVar26[0xc];
        uVar14 = puVar26[0xd];
        *(undefined8 *)&(param_4->Normal).field_0x10 = uVar15;
        *(undefined8 *)&param_4->ImpactNormal = uVar16;
        uVar15 = puVar26[0xe];
        uVar16 = puVar26[0xf];
        *(undefined8 *)&(param_4->ImpactNormal).field_0x8 = uVar13;
        *(undefined8 *)&(param_4->ImpactNormal).field_0x10 = uVar14;
        *(undefined8 *)&param_4->TraceStart = uVar15;
        *(undefined8 *)&(param_4->TraceStart).field_0x8 = uVar16;
        lVar40 = lVar40 + -1;
        puVar26 = puVar26 + 0x10;
        param_4 = (FHitResult *)&(param_4->TraceStart).field_0x10;
      } while (lVar40 != 0);
    }
    else {
      uStack_5f0 = 0xffffffff;
      param_4->FaceIndex = 0;
      param_4->Distance = 0.0;
      param_4->_padding_ = 0;
      *(undefined8 *)&param_4->Location = 0;
      uStack_5eb = 0;
      *(undefined8 *)&(param_4->Location).field_0x8 = 0;
      *(undefined8 *)&(param_4->Location).field_0x10 = 0;
      uStack_5e9 = 0;
      *(undefined8 *)&param_4->ImpactPoint = 0;
      *(undefined8 *)&(param_4->ImpactPoint).field_0x8 = 0;
      local_5f8 = 0;
      *(undefined8 *)&(param_4->ImpactPoint).field_0x10 = 0;
      *(undefined8 *)&param_4->Normal = 0;
      uStack_5ec = 0;
      *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
      *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
      *(undefined8 *)&param_4->ImpactNormal = 0;
      *(undefined8 *)&(param_4->ImpactNormal).field_0x8 = 0;
      *(undefined8 *)&(param_4->ImpactNormal).field_0x10 = 0;
      param_4->PenetrationDepth = 0.0;
      param_4->Item = 0;
      param_4->ElementIndex = '\0';
      param_4->field_0xad = 0;
      param_4->_padding_ = 0;
      (param_4->PhysMaterial).WeakPtr = (FWeakObjectPtr)0x0;
      (param_4->Component).WeakPtr = (FWeakObjectPtr)0x0;
      (param_4->PhysicsObjectOwner).WeakPtr = (FWeakObjectPtr)0x0;
      param_4->PhysicsObject = (FPhysicsObject *)0x0;
      (param_4->BoneName).ComparisonIndex = 0;
      (param_4->BoneName).Number = 0;
      (param_4->MyBoneName).ComparisonIndex = 0;
      (param_4->MyBoneName).Number = 0;
      (param_4->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
      (param_4->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
      param_4->Time = 1.0;
      param_4->MyItem = -1;
      (param_4->HitObjectHandle).ManagerInterface.InterfaceInstance =
           (IActorInstanceManagerInterface *)0x0;
      (param_4->HitObjectHandle).InstanceIndex = -1;
      (param_4->HitObjectHandle).ResolutionStatus = Invalid;
      *(undefined3 *)&(param_4->HitObjectHandle).field_0x1d = 0;
      *(double *)&param_4->TraceStart = local_6c0._s_0.X;
      *(double *)&(param_4->TraceStart).field_0x8 = local_6c0._s_0.Y;
      *(double *)&(param_4->TraceStart).field_0x10 = local_6c0._s_0.Z;
      *(double *)&param_4->TraceEnd = local_688._s_0.X;
      *(double *)&(param_4->TraceEnd).field_0x8 = local_688._s_0.Y;
      *(double *)&(param_4->TraceEnd).field_0x10 = local_688._s_0.Z;
    }
  }
  if (local_3c0.SecondaryData != (ForElementType<FOverlapInfo>)0x0) {
    FMemory::Free((void *)local_3c0.SecondaryData);
  }
  return bVar18;
}

// PullBackHit @ 147722900

void __cdecl
FUpdatedComponentAsyncInput::PullBackHit
          (FHitResult *param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_3f800000 / param_4;
  fVar2 = fVar1;
  if (__real_3dcccccd <= fVar1) {
    fVar2 = __real_3dcccccd;
  }
  if (fVar2 <= fVar1 * __real_3dcccccd) {
    fVar2 = fVar1 * __real_3dcccccd;
  }
  fVar2 = param_1->Time - (fVar2 + __real_3a83126f);
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  param_1->Time = fVar2;
  return;
}

// SetPosition @ 147728ec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FUpdatedComponentAsyncInput::SetPosition(FUpdatedComponentAsyncInput *this,TVector<double> *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  FRewindData *this_00;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  EObjectStateType EVar11;
  bool bVar12;
  FSingleParticlePhysicsProxy *pFVar13;
  FSingleParticlePhysicsProxy *pFVar14;
  FSingleParticlePhysicsProxy *this_01;
  uint uVar15;
  FSingleParticlePhysicsProxy *this_02;
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  double dStack_38;
  double local_30;
  
  this_02 = this->PhysicsHandle;
  pFVar14 = (FSingleParticlePhysicsProxy *)0x0;
  pFVar3 = (FSingleParticlePhysicsProxy *)this_02->Handle;
  pFVar13 = this_02;
  if (pFVar3 == (FSingleParticlePhysicsProxy *)0x0) {
    pFVar13 = pFVar14;
  }
  if (pFVar13 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar13 = pFVar14;
    if (1 < *(byte *)((longlong)&pFVar3->_padding_ + 4)) {
      pFVar13 = pFVar3;
    }
    if (pFVar13 == (FSingleParticlePhysicsProxy *)0x0) {
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2137651385527694366>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                          ,0xbe2,"false");
      if (bVar12) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      local_58 = (param_1->field0_0x0)._s_0.X;
      dStack_50 = (param_1->field0_0x0)._s_0.Y;
      local_48 = (param_1->field0_0x0)._s_0.Z;
      if (pFVar3 == (FSingleParticlePhysicsProxy *)0x0) {
        this_02 = pFVar14;
      }
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_02);
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_02);
      this_00 = *(FRewindData **)(this_02->_padding_ + 0x238);
      if (this_00 != (FRewindData *)0x0) {
        Chaos::FRewindData::MarkDirtyFromPT(this_00,this_02->Handle);
      }
      pFVar3 = (FSingleParticlePhysicsProxy *)this_02->Handle;
      this_01 = pFVar14;
      if (1 < *(byte *)((longlong)&pFVar3->_padding_ + 4)) {
        this_01 = pFVar3;
      }
      if ((this_01 != (FSingleParticlePhysicsProxy *)0x0) &&
         (EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                             ((TPBDRigidParticleHandleImp<double,3,1> *)this_01), EVar11 == Sleeping
         )) {
        Chaos::SetObjectStateHelper
                  ((IPhysicsProxyBase *)this_02,(TPBDRigidParticleHandleImp<double,3,1> *)this_01,
                   Dynamic,true,true);
      }
      Chaos::TGeometryParticleHandleImp<double,3,1>::SetX
                ((TGeometryParticleHandleImp<double,3,1> *)pFVar3,(TVector<double,3> *)&local_58,
                 true);
      dVar10 = local_48;
      if (1 < *(byte *)((longlong)&((FSingleParticlePhysicsProxy *)this_02->Handle)->_padding_ + 4))
      {
        pFVar14 = (FSingleParticlePhysicsProxy *)this_02->Handle;
      }
      if (pFVar14 != (FSingleParticlePhysicsProxy *)0x0) {
        uVar2 = (uint)pFVar14->_padding_;
        lVar4 = pFVar14->_padding_;
        uVar6 = local_58._0_4_;
        uVar7 = local_58._4_4_;
        uVar8 = dStack_50._0_4_;
        uVar9 = dStack_50._4_4_;
        uVar15 = 0;
        if ((int)uVar2 < *(int *)(lVar4 + 0x550)) {
          uVar15 = ~uVar2 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)(lVar4 + 0x548);
        puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar2 * 0x18);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        *(double *)(lVar4 + 0x10 + (longlong)(int)uVar2 * 0x18) = dVar10;
      }
      local_40 = (param_1->field0_0x0)._s_0.X;
      dStack_38 = (param_1->field0_0x0)._s_0.Y;
      local_30 = (param_1->field0_0x0)._s_0.Z;
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetP
                ((TPBDRigidParticleHandleImp<double,3,1> *)pFVar13,(TVector<double,3> *)&local_40);
      EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pFVar13);
      if (EVar11 == Kinematic) {
        Chaos::FPBDRigidsSOAs::MarkTransientDirtyParticle
                  ((FPBDRigidsSOAs *)(this->PhysicsHandle->_padding_ + 0x4b8),
                   (TGeometryParticleHandleImp<double,3,1> *)pFVar13,true);
      }
    }
  }
  return;
}

// SetRotation @ 147729550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FUpdatedComponentAsyncInput::SetRotation(FUpdatedComponentAsyncInput *this,TQuat<double> *param_1)

{
  FSingleParticlePhysicsProxy *pFVar1;
  FRewindData *this_00;
  code *pcVar2;
  EObjectStateType EVar3;
  bool bVar4;
  FSingleParticlePhysicsProxy *pFVar5;
  FSingleParticlePhysicsProxy *this_01;
  FSingleParticlePhysicsProxy *this_02;
  FSingleParticlePhysicsProxy *this_03;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  this_03 = this->PhysicsHandle;
  this_01 = (FSingleParticlePhysicsProxy *)0x0;
  pFVar1 = (FSingleParticlePhysicsProxy *)this_03->Handle;
  pFVar5 = this_03;
  if (pFVar1 == (FSingleParticlePhysicsProxy *)0x0) {
    pFVar5 = this_01;
  }
  if (pFVar5 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar5 = this_01;
    if (1 < *(byte *)((longlong)&pFVar1->_padding_ + 4)) {
      pFVar5 = pFVar1;
    }
    if (pFVar5 == (FSingleParticlePhysicsProxy *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2137651385527694329>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                         ,0xc07,"false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_68 = param_1->X;
      dStack_60 = param_1->Y;
      local_58 = param_1->Z;
      dStack_50 = param_1->W;
      if (pFVar1 == (FSingleParticlePhysicsProxy *)0x0) {
        this_03 = this_01;
      }
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_03);
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_03);
      this_00 = *(FRewindData **)(this_03->_padding_ + 0x238);
      if (this_00 != (FRewindData *)0x0) {
        Chaos::FRewindData::MarkDirtyFromPT(this_00,this_03->Handle);
      }
      pFVar1 = (FSingleParticlePhysicsProxy *)this_03->Handle;
      this_02 = this_01;
      if (1 < *(byte *)((longlong)&pFVar1->_padding_ + 4)) {
        this_02 = pFVar1;
      }
      if ((this_02 != (FSingleParticlePhysicsProxy *)0x0) &&
         (EVar3 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_02), EVar3 == Sleeping))
      {
        Chaos::SetObjectStateHelper
                  ((IPhysicsProxyBase *)this_03,(TPBDRigidParticleHandleImp<double,3,1> *)this_02,
                   Dynamic,true,true);
      }
      Chaos::TGeometryParticleHandleImp<double,3,1>::SetR
                ((TGeometryParticleHandleImp<double,3,1> *)pFVar1,(TRotation<double,3> *)&local_68,
                 true);
      if (1 < *(byte *)((longlong)&((FSingleParticlePhysicsProxy *)this_03->Handle)->_padding_ + 4))
      {
        this_01 = (FSingleParticlePhysicsProxy *)this_03->Handle;
      }
      if (this_01 != (FSingleParticlePhysicsProxy *)0x0) {
        Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetQ
                  ((TPBDRigidParticleHandleImp<double,3,1> *)this_01,
                   (TRotation<double,3> *)&local_68);
      }
      local_48 = param_1->X;
      dStack_40 = param_1->Y;
      local_38 = param_1->Z;
      dStack_30 = param_1->W;
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetQ
                ((TPBDRigidParticleHandleImp<double,3,1> *)pFVar5,(TRotation<double,3> *)&local_48);
      EVar3 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pFVar5);
      if (EVar3 == Kinematic) {
        Chaos::FPBDRigidsSOAs::MarkTransientDirtyParticle
                  ((FPBDRigidsSOAs *)(this->PhysicsHandle->_padding_ + 0x4b8),
                   (TGeometryParticleHandleImp<double,3,1> *)pFVar5,true);
      }
    }
  }
  return;
}

// ShouldCheckOverlapFlagToQueueOverlaps @ 147729b30

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
FUpdatedComponentAsyncInput::ShouldCheckOverlapFlagToQueueOverlaps(UPrimitiveComponent *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  iVar1 = *(int *)&param_1->field_0x1d8;
  if (0 < iVar1) {
    uVar6 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar6 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    lVar2 = *(longlong *)
             (*(longlong *)&param_1->field_0x1d0 + -8 + (longlong)*(int *)&param_1->field_0x1d8 * 8)
    ;
    if (lVar2 != 0) {
      return (bool)(*(byte *)(lVar2 + 0x608) >> 2 & 1);
    }
  }
  return true;
}

// ShouldIgnoreHitResult @ 147729d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FUpdatedComponentAsyncInput::ShouldIgnoreHitResult
          (UWorld *param_1,FHitResult *param_2,TVector<double> *param_3,AActor *param_4,
          EMoveComponentFlags param_5)

{
  TVector<double>_u_0 local_28;
  
  if ((param_2->bBlockingHit != 0) &&
     (((param_2->Distance <= PrimitiveComponentCVars::HitDistanceToleranceCVar &&
        PrimitiveComponentCVars::HitDistanceToleranceCVar != param_2->Distance ||
       (param_2->bStartPenetrating != '\0')) &&
      ((param_5 & MOVECOMP_NeverIgnoreBlockingOverlaps) == MOVECOMP_NoFlags)))) {
    UE::Math::TVector<double>::GetSafeNormal
              (param_3,(TVector<double> *)&local_28._s_0,__real_3e45798ee0000000,
               &UE::Math::TVector<double>::ZeroVector);
    return PrimitiveComponentCVars::InitialOverlapToleranceCVar <
           (float)(local_28._s_0.Y * *(double *)&(param_2->ImpactNormal).field_0x8 +
                   local_28._s_0.X * *(double *)&param_2->ImpactNormal +
                  local_28._s_0.Z * *(double *)&(param_2->ImpactNormal).field_0x10);
  }
  return false;
}

// ShouldIgnoreOverlapResult @ 147729dd0

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
FUpdatedComponentAsyncInput::ShouldIgnoreOverlapResult
          (UWorld *param_1,AActor *param_2,UPrimitiveComponent *param_3,AActor *param_4,
          UPrimitiveComponent *param_5)

{
  if ((param_3 != param_5) && (param_4 != (AActor *)0x0)) {
    return param_1 == (UWorld *)0x0;
  }
  return true;
}

// FUpdatedComponentAsyncInput @ 1477ee6c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FUpdatedComponentAsyncInput * __thiscall
FUpdatedComponentAsyncInput::FUpdatedComponentAsyncInput(FUpdatedComponentAsyncInput *this)

{
  TStatId TVar1;
  
  this->_padding_ = (longlong)&___7FUpdatedComponentAsyncInput__6B_;
  TVar1 = FCollisionQueryParams::GetUnknownStatId();
  FCollisionQueryParams::FCollisionQueryParams
            ((FCollisionQueryParams *)&this->MoveComponentQueryParams,(FName)0x0,
             (TStatId *)TVar1.StatIdPtr,false,(AActor *)0x0);
  FCollisionEnabledMask::FCollisionEnabledMask
            (&(this->MoveComponentQueryParams).ShapeCollisionMask,'\0');
  FCollisionResponseContainer::FCollisionResponseContainer
            (&(this->MoveComponentCollisionResponseParams).CollisionResponse);
  FCollisionResponseContainer::SetAllChannels
            (&(this->MoveComponentCollisionResponseParams).CollisionResponse,ECR_Block);
  (this->CollisionShape).ShapeType = Line;
  return this;
}

// ~FUpdatedComponentAsyncInput @ 1477f3de0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FUpdatedComponentAsyncInput::~FUpdatedComponentAsyncInput(FUpdatedComponentAsyncInput *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FUpdatedComponentAsyncInput__6B_;
  pvVar1 = (void *)(this->MoveComponentQueryParams)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->MoveComponentQueryParams)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

