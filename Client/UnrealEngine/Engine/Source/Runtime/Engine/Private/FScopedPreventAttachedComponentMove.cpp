// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FScopedPreventAttachedComponentMove @ 147929950

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FScopedPreventAttachedComponentMove * __thiscall
FScopedPreventAttachedComponentMove::FScopedPreventAttachedComponentMove
          (FScopedPreventAttachedComponentMove *this,USceneComponent *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  undefined4 uVar3;
  USceneComponent *pUVar4;
  double dVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  TRotator<double> *pTVar9;
  TRotator<double> local_28;
  
  this->Owner = param_1;
  uVar3 = *(undefined4 *)&this->field_0x8;
  if (param_1 == (USceneComponent *)0x0) {
    *(uint *)&this->field_0x8 = uVar3 & 0xfffffff8;
  }
  else {
    uVar7 = (param_1->bAbsoluteLocation ^ ZPULL(uVar3,0,1)) & 1 ^ uVar3;
    *(uint *)&this->field_0x8 = uVar7;
    uVar7 = ((byte)param_1->field_0x1a8 >> 2 ^ uVar7) & 2 ^ uVar7;
    *(uint *)&this->field_0x8 = uVar7;
    uVar7 = ((byte)param_1->field_0x1a8 >> 2 ^ uVar7) & 4 ^ uVar7;
    if ((param_1->bAbsoluteLocation == '\0' || (uVar7 & 2) == 0) || ((uVar7 & 4) == 0)) {
      uVar8 = 8;
    }
    else {
      uVar8 = 0;
    }
    *(uint *)&this->field_0x8 = uVar7 & 0xfffffff7 | uVar8;
    param_1->bAbsoluteLocation = '\x01';
    this->Owner->bAbsoluteRotation = '\x01';
    this->Owner->bAbsoluteScale = '\x01';
    if ((this->bSavedNonAbsoluteComponent != 0) &&
       ((this->Owner->AttachParent).field0_0x0.DebugPtr != (USceneComponent *)0x0)) {
      if (param_1->bComponentToWorldUpdated == 0) {
        USceneComponent::UpdateComponentToWorld(param_1,None,None);
      }
      pUVar4 = this->Owner;
      dVar5 = (pUVar4->ComponentToWorld).Translation.XY.m128d_f64[1];
      dVar2 = (pUVar4->ComponentToWorld).Translation.ZW.m128d_f64[0];
      (pUVar4->RelativeLocation).field0_0x0._s_0.X =
           (pUVar4->ComponentToWorld).Translation.XY.m128d_f64[0];
      (pUVar4->RelativeLocation).field0_0x0._s_0.Y = dVar5;
      (pUVar4->RelativeLocation).field0_0x0._s_0.Z = dVar2;
      pTVar9 = USceneComponent::GetComponentRotation(this->Owner,&local_28);
      dVar5 = pTVar9->Yaw;
      dVar2 = pTVar9->Roll;
      pUVar4 = this->Owner;
      (pUVar4->RelativeRotation).Pitch = pTVar9->Pitch;
      (pUVar4->RelativeRotation).Yaw = dVar5;
      (pUVar4->RelativeRotation).Roll = dVar2;
      pUVar4 = this->Owner;
      dVar5 = (pUVar4->ComponentToWorld).Scale3D.XY.m128d_f64[1];
      dVar2 = (pUVar4->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
      (pUVar4->RelativeScale3D).field0_0x0._s_0.X =
           (pUVar4->ComponentToWorld).Scale3D.XY.m128d_f64[0];
      (pUVar4->RelativeScale3D).field0_0x0._s_0.Y = dVar5;
      (pUVar4->RelativeScale3D).field0_0x0._s_0.Z = dVar2;
      return this;
    }
  }
  return this;
}

// ~FScopedPreventAttachedComponentMove @ 14792ca30

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

void __thiscall
FScopedPreventAttachedComponentMove::~FScopedPreventAttachedComponentMove
          (FScopedPreventAttachedComponentMove *this)

{
  byte bVar1;
  USceneComponent *pUVar2;
  undefined1 auVar3 [16];
  double dVar4;
  ulonglong uVar5;
  FPayload *this_00;
  TRotator<double> *pTVar6;
  int iVar7;
  FRotationConversionCache *this_01;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  undefined1 auStack_148 [40];
  TRotator<double> local_120;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  TTransform<double> *__return_storage_ptr__;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pUVar2 = this->Owner;
  if (pUVar2 != (USceneComponent *)0x0) {
    pUVar2->field_0x1a8 = (this->field_0x8 << 2 ^ pUVar2->field_0x1a8) & 4 ^ pUVar2->field_0x1a8;
    bVar1 = this->Owner->field_0x1a8;
    this->Owner->field_0x1a8 = ((char)(*(uint *)&this->field_0x8 >> 1) << 3 ^ bVar1) & 8 ^ bVar1;
    bVar1 = this->Owner->field_0x1a8;
    this->Owner->field_0x1a8 = ((char)(*(uint *)&this->field_0x8 >> 2) << 4 ^ bVar1) & 0x10 ^ bVar1;
    if (this->bSavedNonAbsoluteComponent != 0) {
      pUVar2 = (this->Owner->AttachParent).field0_0x0.DebugPtr;
      if (pUVar2 != (USceneComponent *)0x0) {
        (**(code **)(pUVar2->_padding_ + 0x520))(pUVar2,&local_a8,this->Owner->AttachSocketName,0);
        __return_storage_ptr__ = &local_108;
        UE::Math::TTransform<double>::GetRelativeTransform
                  (&this->Owner->ComponentToWorld,__return_storage_ptr__,&local_a8);
        uVar8 = SUB84(__return_storage_ptr__,0);
        if (this->bSavedAbsoluteLocation == 0) {
          pUVar2 = this->Owner;
          (pUVar2->RelativeLocation).field0_0x0._s_0.X = local_108.Translation.XY.m128d_f64[0];
          (pUVar2->RelativeLocation).field0_0x0._s_0.Y = local_108.Translation.XY.m128d_f64[1];
          (pUVar2->RelativeLocation).field0_0x0._s_0.Z = local_108.Translation.ZW.m128d_f64[0];
        }
        if (this->bSavedAbsoluteRotation == 0) {
          pUVar2 = this->Owner;
          this_01 = &pUVar2->RelativeRotationCache;
          this_00 = FRotationConversionCache::GetOrCreatePayload(this_01);
          lVar11 = -(ulonglong)((this_00->CachedQuat).W != local_108.Rotation.ZW.m128d_f64[1]);
          auVar18._8_4_ = (int)lVar11;
          auVar18._0_8_ =
               -(ulonglong)((this_00->CachedQuat).Z != local_108.Rotation.ZW.m128d_f64[0]);
          auVar18._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
          uVar9 = movmskpd(uVar8,auVar18);
          auVar19._8_8_ =
               -(ulonglong)((this_00->CachedQuat).Y != local_108.Rotation.XY.m128d_f64[1]);
          auVar19._0_8_ =
               -(ulonglong)((this_00->CachedQuat).X != local_108.Rotation.XY.m128d_f64[0]);
          iVar7 = movmskpd((int)this_01,auVar19);
          if ((uVar9 & 0x3fffffff) != 0 || iVar7 != 0) {
            dVar13 = local_108.Rotation.XY.m128d_f64[0] * local_108.Rotation.XY.m128d_f64[0] +
                     local_108.Rotation.ZW.m128d_f64[0] * local_108.Rotation.ZW.m128d_f64[0];
            dVar16 = local_108.Rotation.XY.m128d_f64[1] * local_108.Rotation.XY.m128d_f64[1] +
                     local_108.Rotation.ZW.m128d_f64[1] * local_108.Rotation.ZW.m128d_f64[1];
            dVar4 = dVar16 + dVar13;
            dVar13 = dVar13 + dVar16;
            auVar3._8_4_ = SUB84(dVar13,0);
            auVar3._0_8_ = dVar4;
            auVar3._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            auVar18 = sqrtpd(in_XMM4,auVar3);
            uVar10 = -(ulonglong)(__real_3e45798ee0000000 <= dVar4);
            uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= dVar13);
            uVar9 = (uint)(uVar10 >> 0x20);
            uVar21 = (uint)(uVar12 >> 0x20);
            auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18)
            ;
            auVar14._0_4_ =
                 ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar14._4_4_ =
                 ~uVar9 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                0x20);
            auVar14._8_4_ =
                 ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar14._12_4_ =
                 ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            auVar20._0_8_ = uVar10 & (ulonglong)(auVar19._0_8_ * local_108.Rotation.XY.m128d_f64[0])
            ;
            uVar5 = uVar12 & (ulonglong)(auVar19._8_8_ * local_108.Rotation.XY.m128d_f64[1]);
            auVar20._8_4_ = (undefined4)uVar5;
            auVar20._12_4_ = (undefined4)(uVar5 >> 0x20);
            auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar18)
            ;
            auVar17._0_4_ =
                 ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar17._4_4_ =
                 ~uVar9 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                0x20);
            auVar17._8_4_ =
                 ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar17._12_4_ =
                 ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            auVar15._0_8_ = (ulonglong)(auVar18._0_8_ * local_108.Rotation.ZW.m128d_f64[0]) & uVar10
            ;
            uVar12 = (ulonglong)(auVar18._8_8_ * local_108.Rotation.ZW.m128d_f64[1]) & uVar12;
            auVar15._8_4_ = (undefined4)uVar12;
            auVar15._12_4_ = (undefined4)(uVar12 >> 0x20);
            (this_00->CachedQuat).X = (double)SUB168(auVar20 | auVar14,0);
            (this_00->CachedQuat).Y = (double)SUB168(auVar20 | auVar14,8);
            (this_00->CachedQuat).Z = (double)SUB168(auVar17 | auVar15,0);
            (this_00->CachedQuat).W = (double)SUB168(auVar17 | auVar15,8);
            pTVar6 = UE::Math::TQuat<double>::Rotator(&this_00->CachedQuat,&local_120);
            dVar4 = pTVar6->Yaw;
            (this_00->CachedRotator).Pitch = pTVar6->Pitch;
            (this_00->CachedRotator).Yaw = dVar4;
            (this_00->CachedRotator).Roll = pTVar6->Roll;
          }
          dVar13 = (this_00->CachedRotator).Yaw;
          dVar4 = (this_00->CachedRotator).Roll;
          (pUVar2->RelativeRotation).Pitch = (this_00->CachedRotator).Pitch;
          (pUVar2->RelativeRotation).Yaw = dVar13;
          (pUVar2->RelativeRotation).Roll = dVar4;
        }
        if (this->bSavedAbsoluteScale == 0) {
          pUVar2 = this->Owner;
          (pUVar2->RelativeScale3D).field0_0x0._s_0.X = local_108.Scale3D.XY.m128d_f64[0];
          (pUVar2->RelativeScale3D).field0_0x0._s_0.Y = local_108.Scale3D.XY.m128d_f64[1];
          (pUVar2->RelativeScale3D).field0_0x0._s_0.Z = local_108.Scale3D.ZW.m128d_f64[0];
        }
      }
    }
  }
  return;
}

