// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 247

// LowLevelOverlapGeom<Chaos::TBox<double,3>_> @ 143876290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelOverlapGeom<Chaos::TBox<double,3>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,TBox<double,3> *param_1
          ,TRigidTransform<double,3> *param_2,double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  uchar uVar7;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined1 local_148 [21];
  bool local_133;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  ulonglong local_114;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  TRefCountPtr<Chaos::TBox<double,3>_> local_d8;
  undefined1 local_c8 [40];
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_3 != 0.0) {
    if ((__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351320>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2e8,
                         "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
  }
  local_1a0 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_198 = (double)*(float *)&this->_padding_;
  local_190 = (double)*(float *)((longlong)&this->_padding_ + 4);
  bVar6 = FImplicitObject::GetType((FImplicitObject *)param_1);
  FImplicitObject::FImplicitObject((FImplicitObject *)local_148,2,bVar6 | 0x80);
  local_128 = ___xmm_3f8000003f8000003f8000003f800000;
  lStack_120 = _UNK_15076b1f8;
  local_108 = ___xmm_7fefffffffffffff7fefffffffffffff;
  lStack_100 = _UNK_150a9e648;
  local_e8 = ___xmm_ffefffffffffffffffefffffffffffff;
  lStack_e0 = _UNK_1508ffb58;
  local_118 = 0x3f800000;
  local_114 = 0x3f800000;
  local_f8 = ___xmm_ffefffffffffffff7fefffffffffffff;
  lStack_f0 = _UNK_150a9e6d8;
  local_148._0_8_ = &___7__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__6B_;
  if (param_1 != (TBox<double,3> *)0x0) {
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    UNLOCK();
    if ((int)param_1->_padding_ == 1) {
      LOCK();
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
      UNLOCK();
    }
  }
  local_d8.Reference = param_1;
  uVar7 = FImplicitObject::GetType((FImplicitObject *)param_1);
  if ((char)uVar7 < '\0') {
    local_1a8 = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(&local_1a8);
  }
  bVar6 = FImplicitObject::GetType((FImplicitObject *)local_d8.Reference);
  if ((bVar6 & 0x40) != 0) {
    local_1a7[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_1a7);
  }
  uVar7 = FImplicitObject::GetType((FImplicitObject *)local_d8.Reference);
  if ((uVar7 == '\x04') || (uVar7 == '\x05')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  local_148[0x14] = *(undefined1 *)((longlong)&(local_d8.Reference)->_padding_ + 4);
  local_133 = *(bool *)((longlong)&(local_d8.Reference)->_padding_ + 5);
  local_114 = local_114 & 0xffffffff;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1>::SetScale
            ((TImplicitObjectScaled<Chaos::TBox<double,3>,1> *)local_148,
             (TVector<double,3> *)&local_1a0);
  local_c8._0_8_ = *(undefined8 *)param_2;
  local_c8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_c8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_c8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  local_c8._32_8_ =
       (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
  dStack_a0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
  local_98 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  local_188 = (double)*(float *)&this->_padding_;
  uStack_90 = 0;
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  local_178 = (double)*(float *)&this->_padding_;
  local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
  bVar4 = FTriangleMeshImplicitObject::OverlapGeom
                    ((this->MObject).Reference,
                     (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *)local_148,
                     (TRigidTransform<double,3> *)local_c8,param_3,param_4,
                     (TVector<double,3> *)&local_188);
  local_148._0_8_ = &___7__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__6B_;
  if (local_d8.Reference != (TBox<double,3> *)0x0) {
    LOCK();
    plVar1 = &(local_d8.Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&(local_d8.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_d8.Reference)->_padding_)(local_d8.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)local_148);
  return bVar4;
}

// LowLevelOverlapGeom<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 1438765c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelOverlapGeom<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,TRigidTransform<double,3> *param_2
          ,double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  TBox<double,3> *this_00;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 auStackY_1d8 [32];
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> local_148;
  undefined1 local_c8 [40];
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_3 != 0.0) {
    if ((__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351320>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2e8,
                         "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
  }
  local_1a0 = (double)*(float *)&param_1->_padding_ *
              (double)*(float *)((longlong)&this->_padding_ + 4);
  this_00 = (param_1->MObject).Reference;
  local_198 = (double)*(float *)((longlong)&param_1->_padding_ + 4) *
              (double)*(float *)&this->_padding_;
  local_190 = (double)*(float *)&param_1->_padding_ *
              (double)*(float *)((longlong)&this->_padding_ + 4);
  if (this_00 != (TBox<double,3> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  bVar6 = FImplicitObject::GetType((FImplicitObject *)this_00);
  FImplicitObject::FImplicitObject((FImplicitObject *)&local_148,2,bVar6 | 0x80);
  local_148._padding_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_148._padding_ = _UNK_15076b1f8;
  local_148._padding_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e648;
  local_148._padding_ = ___xmm_ffefffffffffffffffefffffffffffff;
  local_148._padding_ = _UNK_1508ffb58;
  local_148._padding_._0_4_ = 0x3f800000;
  local_148._52_8_ = 0x3f800000;
  local_148._padding_ = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e6d8;
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__6B_;
  local_148.MObject.Reference = this_00;
  if (this_00 == (TBox<double,3> *)0x0) {
    TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_1a0,0.0);
  }
  else {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_1a0,0.0);
    LOCK();
    plVar1 = &this_00->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  local_c8._0_8_ = *(undefined8 *)param_2;
  local_c8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_c8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_c8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  local_c8._32_8_ =
       (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
  dStack_a0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
  local_98 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  local_188 = (double)*(float *)&this->_padding_;
  uStack_90 = 0;
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  local_178 = (double)*(float *)&this->_padding_;
  local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
  bVar4 = FTriangleMeshImplicitObject::OverlapGeom
                    ((this->MObject).Reference,&local_148,(TRigidTransform<double,3> *)local_c8,
                     param_3,param_4,(TVector<double,3> *)&local_188);
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__6B_;
  if (local_148.MObject.Reference != (TBox<double,3> *)0x0) {
    LOCK();
    plVar1 = &(local_148.MObject.Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) &&
       (*(int *)((longlong)&(local_148.MObject.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_148.MObject.Reference)->_padding_)(local_148.MObject.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)&local_148);
  return bVar4;
}

// LowLevelOverlapGeom<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 1438768b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelOverlapGeom<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2,double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  TSphere<double,3> *this_00;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 auStackY_1d8 [32];
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> local_148;
  undefined1 local_c8 [40];
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_3 != 0.0) {
    if ((__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351320>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2e8,
                         "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
  }
  local_1a0 = (double)*(float *)&param_1->_padding_ *
              (double)*(float *)((longlong)&this->_padding_ + 4);
  this_00 = (param_1->MObject).Reference;
  local_198 = (double)*(float *)((longlong)&param_1->_padding_ + 4) *
              (double)*(float *)&this->_padding_;
  local_190 = (double)*(float *)&param_1->_padding_ *
              (double)*(float *)((longlong)&this->_padding_ + 4);
  if (this_00 != (TSphere<double,3> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  bVar6 = FImplicitObject::GetType((FImplicitObject *)this_00);
  FImplicitObject::FImplicitObject((FImplicitObject *)&local_148,2,bVar6 | 0x80);
  local_148._padding_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_148._padding_ = _UNK_15076b1f8;
  local_148._padding_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e648;
  local_148._padding_ = ___xmm_ffefffffffffffffffefffffffffffff;
  local_148._padding_ = _UNK_1508ffb58;
  local_148._padding_._0_4_ = 0x3f800000;
  local_148._52_8_ = 0x3f800000;
  local_148._padding_ = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e6d8;
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__6B_
  ;
  local_148.MObject.Reference = this_00;
  if (this_00 == (TSphere<double,3> *)0x0) {
    TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_1a0,0.0);
  }
  else {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_1a0,0.0);
    LOCK();
    plVar1 = &this_00->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  local_c8._0_8_ = *(undefined8 *)param_2;
  local_c8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_c8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_c8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  local_c8._32_8_ =
       (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
  dStack_a0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
  local_98 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  local_188 = (double)*(float *)&this->_padding_;
  uStack_90 = 0;
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  local_178 = (double)*(float *)&this->_padding_;
  local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
  bVar4 = FTriangleMeshImplicitObject::OverlapGeom
                    ((this->MObject).Reference,&local_148,(TRigidTransform<double,3> *)local_c8,
                     param_3,param_4,(TVector<double,3> *)&local_188);
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__6B_
  ;
  if (local_148.MObject.Reference != (TSphere<double,3> *)0x0) {
    LOCK();
    plVar1 = &(local_148.MObject.Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) &&
       (*(int *)((longlong)&(local_148.MObject.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_148.MObject.Reference)->_padding_)(local_148.MObject.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)&local_148);
  return bVar4;
}

// LowLevelOverlapGeom<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 143876ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelOverlapGeom<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,TRigidTransform<double,3> *param_2,
          double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  FCapsule *this_00;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 auStackY_1d8 [32];
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  TImplicitObjectScaled<Chaos::FCapsule,1> local_148;
  undefined1 local_c8 [40];
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_3 != 0.0) {
    if ((__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351320>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2e8,
                         "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
  }
  local_1a0 = (double)*(float *)&param_1->_padding_ *
              (double)*(float *)((longlong)&this->_padding_ + 4);
  this_00 = (param_1->MObject).Reference;
  local_198 = (double)*(float *)((longlong)&param_1->_padding_ + 4) *
              (double)*(float *)&this->_padding_;
  local_190 = (double)*(float *)&param_1->_padding_ *
              (double)*(float *)((longlong)&this->_padding_ + 4);
  if (this_00 != (FCapsule *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  bVar6 = FImplicitObject::GetType((FImplicitObject *)this_00);
  FImplicitObject::FImplicitObject((FImplicitObject *)&local_148,2,bVar6 | 0x80);
  local_148._padding_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_148._padding_ = _UNK_15076b1f8;
  local_148._padding_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e648;
  local_148._padding_ = ___xmm_ffefffffffffffffffefffffffffffff;
  local_148._padding_ = _UNK_1508ffb58;
  local_148._padding_._0_4_ = 0x3f800000;
  local_148._52_8_ = 0x3f800000;
  local_148._padding_ = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e6d8;
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__6B_;
  local_148.MObject.Reference = this_00;
  if (this_00 == (FCapsule *)0x0) {
    TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_1a0,0.0);
  }
  else {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_1a0,0.0);
    LOCK();
    plVar1 = &this_00->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  local_c8._0_8_ = *(undefined8 *)param_2;
  local_c8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_c8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_c8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  local_c8._32_8_ =
       (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
  dStack_a0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
  local_98 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  local_188 = (double)*(float *)&this->_padding_;
  uStack_90 = 0;
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  local_178 = (double)*(float *)&this->_padding_;
  local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
  bVar4 = FTriangleMeshImplicitObject::OverlapGeom
                    ((this->MObject).Reference,&local_148,(TRigidTransform<double,3> *)local_c8,
                     param_3,param_4,(TVector<double,3> *)&local_188);
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__6B_;
  if (local_148.MObject.Reference != (FCapsule *)0x0) {
    LOCK();
    plVar1 = &(local_148.MObject.Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) &&
       (*(int *)((longlong)&(local_148.MObject.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_148.MObject.Reference)->_padding_)(local_148.MObject.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)&local_148);
  return bVar4;
}

// LowLevelOverlapGeom<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 143876e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelOverlapGeom<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::FConvex,1> *param_1,TRigidTransform<double,3> *param_2,
          double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  FConvex *this_00;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 auStackY_1d8 [32];
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  TImplicitObjectScaled<Chaos::FConvex,1> local_148;
  undefined1 local_c8 [40];
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_3 != 0.0) {
    if ((__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351320>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2e8,
                         "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
  }
  local_1a0 = (double)*(float *)&param_1->_padding_ *
              (double)*(float *)((longlong)&this->_padding_ + 4);
  this_00 = (param_1->MObject).Reference;
  local_198 = (double)*(float *)((longlong)&param_1->_padding_ + 4) *
              (double)*(float *)&this->_padding_;
  local_190 = (double)*(float *)&param_1->_padding_ *
              (double)*(float *)((longlong)&this->_padding_ + 4);
  if (this_00 != (FConvex *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  bVar6 = FImplicitObject::GetType((FImplicitObject *)this_00);
  FImplicitObject::FImplicitObject((FImplicitObject *)&local_148,2,bVar6 | 0x80);
  local_148._padding_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_148._padding_ = _UNK_15076b1f8;
  local_148._padding_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e648;
  local_148._padding_ = ___xmm_ffefffffffffffffffefffffffffffff;
  local_148._padding_ = _UNK_1508ffb58;
  local_148._padding_._0_4_ = 0x3f800000;
  local_148._52_8_ = 0x3f800000;
  local_148._padding_ = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e6d8;
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__6B_;
  local_148.MObject.Reference = this_00;
  if (this_00 == (FConvex *)0x0) {
    TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_1a0,0.0);
  }
  else {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_1a0,0.0);
    LOCK();
    plVar1 = &this_00->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  local_c8._0_8_ = *(undefined8 *)param_2;
  local_c8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_c8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_c8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  local_c8._32_8_ =
       (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
  dStack_a0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
  local_98 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  local_188 = (double)*(float *)&this->_padding_;
  uStack_90 = 0;
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  local_178 = (double)*(float *)&this->_padding_;
  local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
  bVar4 = FTriangleMeshImplicitObject::OverlapGeom
                    ((this->MObject).Reference,&local_148,(TRigidTransform<double,3> *)local_c8,
                     param_3,param_4,(TVector<double,3> *)&local_188);
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__6B_;
  if (local_148.MObject.Reference != (FConvex *)0x0) {
    LOCK();
    plVar1 = &(local_148.MObject.Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) &&
       (*(int *)((longlong)&(local_148.MObject.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_148.MObject.Reference)->_padding_)(local_148.MObject.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)&local_148);
  return bVar4;
}

// LowLevelOverlapGeom<Chaos::TSphere<double,3>_> @ 143877180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelOverlapGeom<Chaos::TSphere<double,3>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TSphere<double,3> *param_1,TRigidTransform<double,3> *param_2,double param_3,
          FMTDInfo *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  uchar uVar7;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined1 local_148 [21];
  bool local_133;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  ulonglong local_114;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  TRefCountPtr<Chaos::TSphere<double,3>_> local_d8;
  undefined1 local_c8 [40];
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_3 != 0.0) {
    if ((__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351320>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2e8,
                         "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
  }
  local_1a0 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_198 = (double)*(float *)&this->_padding_;
  local_190 = (double)*(float *)((longlong)&this->_padding_ + 4);
  bVar6 = FImplicitObject::GetType((FImplicitObject *)param_1);
  FImplicitObject::FImplicitObject((FImplicitObject *)local_148,2,bVar6 | 0x80);
  local_128 = ___xmm_3f8000003f8000003f8000003f800000;
  lStack_120 = _UNK_15076b1f8;
  local_108 = ___xmm_7fefffffffffffff7fefffffffffffff;
  lStack_100 = _UNK_150a9e648;
  local_e8 = ___xmm_ffefffffffffffffffefffffffffffff;
  lStack_e0 = _UNK_1508ffb58;
  local_118 = 0x3f800000;
  local_114 = 0x3f800000;
  local_f8 = ___xmm_ffefffffffffffff7fefffffffffffff;
  lStack_f0 = _UNK_150a9e6d8;
  local_148._0_8_ = &___7__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__6B_;
  if (param_1 != (TSphere<double,3> *)0x0) {
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    UNLOCK();
    if ((int)param_1->_padding_ == 1) {
      LOCK();
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
      UNLOCK();
    }
  }
  local_d8.Reference = param_1;
  uVar7 = FImplicitObject::GetType((FImplicitObject *)param_1);
  if ((char)uVar7 < '\0') {
    local_1a8 = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit'::__l2::<lambda_1>
    ::operator()(&local_1a8);
  }
  bVar6 = FImplicitObject::GetType((FImplicitObject *)local_d8.Reference);
  if ((bVar6 & 0x40) != 0) {
    local_1a7[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit'::__l2::<lambda_2>
    ::operator()(local_1a7);
  }
  uVar7 = FImplicitObject::GetType((FImplicitObject *)local_d8.Reference);
  if ((uVar7 == '\x04') || (uVar7 == '\x05')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  local_148[0x14] = *(undefined1 *)((longlong)&(local_d8.Reference)->_padding_ + 4);
  local_133 = *(bool *)((longlong)&(local_d8.Reference)->_padding_ + 5);
  local_114 = local_114 & 0xffffffff;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::SetScale
            ((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_148,
             (TVector<double,3> *)&local_1a0);
  local_c8._0_8_ = *(undefined8 *)param_2;
  local_c8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_c8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_c8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  local_c8._32_8_ =
       (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
  dStack_a0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
  local_98 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  local_188 = (double)*(float *)&this->_padding_;
  uStack_90 = 0;
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  local_178 = (double)*(float *)&this->_padding_;
  local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
  bVar4 = FTriangleMeshImplicitObject::OverlapGeom
                    ((this->MObject).Reference,
                     (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_148,
                     (TRigidTransform<double,3> *)local_c8,param_3,param_4,
                     (TVector<double,3> *)&local_188);
  local_148._0_8_ = &___7__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__6B_;
  if (local_d8.Reference != (TSphere<double,3> *)0x0) {
    LOCK();
    plVar1 = &(local_d8.Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&(local_d8.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_d8.Reference)->_padding_)(local_d8.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)local_148);
  return bVar4;
}

// LowLevelOverlapGeom<Chaos::FCapsule> @ 1438774b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelOverlapGeom<Chaos::FCapsule>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,FCapsule *param_1,
          TRigidTransform<double,3> *param_2,double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  uchar uVar7;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined1 local_148 [21];
  bool local_133;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  ulonglong local_114;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  TRefCountPtr<Chaos::FCapsule> local_d8;
  undefined1 local_c8 [40];
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_3 != 0.0) {
    if ((__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351320>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2e8,
                         "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
  }
  local_1a0 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_198 = (double)*(float *)&this->_padding_;
  local_190 = (double)*(float *)((longlong)&this->_padding_ + 4);
  bVar6 = FImplicitObject::GetType((FImplicitObject *)param_1);
  FImplicitObject::FImplicitObject((FImplicitObject *)local_148,2,bVar6 | 0x80);
  local_128 = ___xmm_3f8000003f8000003f8000003f800000;
  lStack_120 = _UNK_15076b1f8;
  local_108 = ___xmm_7fefffffffffffff7fefffffffffffff;
  lStack_100 = _UNK_150a9e648;
  local_e8 = ___xmm_ffefffffffffffffffefffffffffffff;
  lStack_e0 = _UNK_1508ffb58;
  local_118 = 0x3f800000;
  local_114 = 0x3f800000;
  local_f8 = ___xmm_ffefffffffffffff7fefffffffffffff;
  lStack_f0 = _UNK_150a9e6d8;
  local_148._0_8_ = &___7__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__6B_;
  if (param_1 != (FCapsule *)0x0) {
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    UNLOCK();
    if ((int)param_1->_padding_ == 1) {
      LOCK();
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
      UNLOCK();
    }
  }
  local_d8.Reference = param_1;
  uVar7 = FImplicitObject::GetType((FImplicitObject *)param_1);
  if ((char)uVar7 < '\0') {
    local_1a8 = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(&local_1a8);
  }
  bVar6 = FImplicitObject::GetType((FImplicitObject *)local_d8.Reference);
  if ((bVar6 & 0x40) != 0) {
    local_1a7[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_1a7);
  }
  uVar7 = FImplicitObject::GetType((FImplicitObject *)local_d8.Reference);
  if ((uVar7 == '\x04') || (uVar7 == '\x05')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  local_148[0x14] = *(undefined1 *)((longlong)&(local_d8.Reference)->_padding_ + 4);
  local_133 = *(bool *)((longlong)&(local_d8.Reference)->_padding_ + 5);
  local_114 = local_114 & 0xffffffff;
  TImplicitObjectScaled<Chaos::FCapsule,1>::SetScale
            ((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_148,(TVector<double,3> *)&local_1a0);
  local_c8._0_8_ = *(undefined8 *)param_2;
  local_c8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_c8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_c8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  local_c8._32_8_ =
       (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
  dStack_a0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
  local_98 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  local_188 = (double)*(float *)&this->_padding_;
  uStack_90 = 0;
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  local_178 = (double)*(float *)&this->_padding_;
  local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
  bVar4 = FTriangleMeshImplicitObject::OverlapGeom
                    ((this->MObject).Reference,(TImplicitObjectScaled<Chaos::FCapsule,1> *)local_148
                     ,(TRigidTransform<double,3> *)local_c8,param_3,param_4,
                     (TVector<double,3> *)&local_188);
  local_148._0_8_ = &___7__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__6B_;
  if (local_d8.Reference != (FCapsule *)0x0) {
    LOCK();
    plVar1 = &(local_d8.Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&(local_d8.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_d8.Reference)->_padding_)(local_d8.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)local_148);
  return bVar4;
}

// LowLevelOverlapGeom<Chaos::FConvex> @ 1438777e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelOverlapGeom<Chaos::FConvex>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,FConvex *param_1,
          TRigidTransform<double,3> *param_2,double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  uchar uVar7;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined1 local_148 [21];
  bool local_133;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  ulonglong local_114;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  TRefCountPtr<Chaos::FConvex> local_d8;
  undefined1 local_c8 [40];
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_3 != 0.0) {
    if ((__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351320>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2e8,
                         "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
  }
  local_1a0 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_198 = (double)*(float *)&this->_padding_;
  local_190 = (double)*(float *)((longlong)&this->_padding_ + 4);
  bVar6 = FImplicitObject::GetType((FImplicitObject *)param_1);
  FImplicitObject::FImplicitObject((FImplicitObject *)local_148,2,bVar6 | 0x80);
  local_128 = ___xmm_3f8000003f8000003f8000003f800000;
  lStack_120 = _UNK_15076b1f8;
  local_108 = ___xmm_7fefffffffffffff7fefffffffffffff;
  lStack_100 = _UNK_150a9e648;
  local_e8 = ___xmm_ffefffffffffffffffefffffffffffff;
  lStack_e0 = _UNK_1508ffb58;
  local_118 = 0x3f800000;
  local_114 = 0x3f800000;
  local_f8 = ___xmm_ffefffffffffffff7fefffffffffffff;
  lStack_f0 = _UNK_150a9e6d8;
  local_148._0_8_ = &___7__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__6B_;
  if (param_1 != (FConvex *)0x0) {
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    UNLOCK();
    if ((int)param_1->_padding_ == 1) {
      LOCK();
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
      UNLOCK();
    }
  }
  local_d8.Reference = param_1;
  uVar7 = FImplicitObject::GetType((FImplicitObject *)param_1);
  if ((char)uVar7 < '\0') {
    local_1a8 = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(&local_1a8);
  }
  bVar6 = FImplicitObject::GetType((FImplicitObject *)local_d8.Reference);
  if ((bVar6 & 0x40) != 0) {
    local_1a7[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_1a7);
  }
  uVar7 = FImplicitObject::GetType((FImplicitObject *)local_d8.Reference);
  if ((uVar7 == '\x04') || (uVar7 == '\x05')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  local_148[0x14] = *(undefined1 *)((longlong)&(local_d8.Reference)->_padding_ + 4);
  local_133 = *(bool *)((longlong)&(local_d8.Reference)->_padding_ + 5);
  local_114 = local_114 & 0xffffffff;
  TImplicitObjectScaled<Chaos::FConvex,1>::SetScale
            ((TImplicitObjectScaled<Chaos::FConvex,1> *)local_148,(TVector<double,3> *)&local_1a0);
  local_c8._0_8_ = *(undefined8 *)param_2;
  local_c8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_c8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_c8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  local_c8._32_8_ =
       (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
  dStack_a0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
  local_98 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  local_188 = (double)*(float *)&this->_padding_;
  uStack_90 = 0;
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  local_178 = (double)*(float *)&this->_padding_;
  local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
  bVar4 = FTriangleMeshImplicitObject::OverlapGeom
                    ((this->MObject).Reference,(TImplicitObjectScaled<Chaos::FConvex,1> *)local_148,
                     (TRigidTransform<double,3> *)local_c8,param_3,param_4,
                     (TVector<double,3> *)&local_188);
  local_148._0_8_ = &___7__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__6B_;
  if (local_d8.Reference != (FConvex *)0x0) {
    LOCK();
    plVar1 = &(local_d8.Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&(local_d8.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_d8.Reference)->_padding_)(local_d8.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)local_148);
  return bVar4;
}

// AsScaledChecked @ 14389e790

TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> * __cdecl
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::AsScaledChecked
          (FImplicitObject *param_1)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *pTVar4;
  
  uVar2 = FImplicitObject::GetType(param_1);
  if (uVar2 != 0x8b) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StaticType() == Obj.GetType()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x213,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *)param_1;
}

// CopyGeometry @ 1438aa520

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::CopyGeometry
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this)

{
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar1;
  FImplicitObject *in_RDX;
  
  pTVar1 = CopyHelper(this);
  in_RDX->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *)0x0) {
    LOCK();
    *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometry @ 1438aa550

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::CopyGeometry
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this)

{
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar1;
  FImplicitObject *in_RDX;
  
  pTVar1 = CopyHelper(this);
  in_RDX->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)0x0) {
    LOCK();
    *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometry @ 1438aa580

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::CopyGeometry
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this)

{
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar1;
  FImplicitObject *in_RDX;
  
  pTVar1 = CopyHelper(this);
  in_RDX->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TImplicitObjectScaled<Chaos::FCapsule,1> *)0x0) {
    LOCK();
    *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometry @ 1438aa5b0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::CopyGeometry
          (TImplicitObjectScaled<Chaos::FConvex,1> *this)

{
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar1;
  FImplicitObject *in_RDX;
  
  pTVar1 = CopyHelper(this);
  in_RDX->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TImplicitObjectScaled<Chaos::FConvex,1> *)0x0) {
    LOCK();
    *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 1438aa600

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::CopyGeometryWithScale
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,TVector<double,3> *param_1)

{
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this_00;
  double *in_R8;
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = CopyHelper(this);
  local_28 = (double)*(float *)&this_00->_padding_ * *in_R8;
  local_20 = (double)*(float *)((longlong)&this_00->_padding_ + 4) * in_R8[1];
  local_18 = (double)*(float *)&this_00->_padding_ * in_R8[2];
  SetScale(this_00,(TVector<double,3> *)&local_28);
  *(TImplicitObjectScaled<Chaos::TBox<double,3>,1> **)param_1 = this_00;
  if (this_00 != (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CopyGeometryWithScale @ 1438aa690

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::CopyGeometryWithScale
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,TVector<double,3> *param_1)

{
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this_00;
  double *in_R8;
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = CopyHelper(this);
  local_28 = (double)*(float *)&this_00->_padding_ * *in_R8;
  local_20 = (double)*(float *)((longlong)&this_00->_padding_ + 4) * in_R8[1];
  local_18 = (double)*(float *)&this_00->_padding_ * in_R8[2];
  SetScale(this_00,(TVector<double,3> *)&local_28);
  *(TImplicitObjectScaled<Chaos::TSphere<double,3>,1> **)param_1 = this_00;
  if (this_00 != (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CopyGeometryWithScale @ 1438aa720

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::CopyGeometryWithScale
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,TVector<double,3> *param_1)

{
  TImplicitObjectScaled<Chaos::FCapsule,1> *this_00;
  double *in_R8;
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = CopyHelper(this);
  local_28 = (double)*(float *)&this_00->_padding_ * *in_R8;
  local_20 = (double)*(float *)((longlong)&this_00->_padding_ + 4) * in_R8[1];
  local_18 = (double)*(float *)&this_00->_padding_ * in_R8[2];
  SetScale(this_00,(TVector<double,3> *)&local_28);
  *(TImplicitObjectScaled<Chaos::FCapsule,1> **)param_1 = this_00;
  if (this_00 != (TImplicitObjectScaled<Chaos::FCapsule,1> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CopyGeometryWithScale @ 1438aa7b0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::CopyGeometryWithScale
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,TVector<double,3> *param_1)

{
  TImplicitObjectScaled<Chaos::FConvex,1> *this_00;
  double *in_R8;
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = CopyHelper(this);
  local_28 = (double)*(float *)&this_00->_padding_ * *in_R8;
  local_20 = (double)*(float *)((longlong)&this_00->_padding_ + 4) * in_R8[1];
  local_18 = (double)*(float *)&this_00->_padding_ * in_R8[2];
  SetScale(this_00,(TVector<double,3> *)&local_28);
  *(TImplicitObjectScaled<Chaos::FConvex,1> **)param_1 = this_00;
  if (this_00 != (TImplicitObjectScaled<Chaos::FConvex,1> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CopyHelper @ 1438aa980

TImplicitObjectScaled<Chaos::TBox<double,3>,1> * __cdecl
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::CopyHelper
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1)

{
  longlong *plVar1;
  float fVar2;
  TBox<double,3> *this;
  longlong lVar3;
  uchar uVar4;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this_00;
  double local_38;
  double local_30;
  double local_28;
  
  this_00 = ::operator_new(0x78);
  if (this_00 == (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *)0x0) {
    return (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *)0x0;
  }
  local_38 = (double)*(float *)&param_1->_padding_;
  fVar2 = *(float *)&param_1->_padding_;
  this = (param_1->MObject).Reference;
  local_28 = (double)*(float *)&param_1->_padding_;
  local_30 = (double)*(float *)((longlong)&param_1->_padding_ + 4);
  if (this != (TBox<double,3> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  uVar4 = FImplicitObject::GetType((FImplicitObject *)this);
  FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this_00,2,uVar4);
  this_00->_padding_ = (longlong)&___7__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__6B_;
  (this_00->MObject).Reference = this;
  if (this == (TBox<double,3> *)0x0) {
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
  }
  else {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
    LOCK();
    plVar1 = &this->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
      (**(code **)this->_padding_)(this,1);
      return this_00;
    }
  }
  return this_00;
}

// CopyHelper @ 1438aaaa0

TImplicitObjectScaled<Chaos::TSphere<double,3>,1> * __cdecl
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::CopyHelper
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1)

{
  longlong *plVar1;
  float fVar2;
  TSphere<double,3> *this;
  longlong lVar3;
  uchar uVar4;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this_00;
  double local_38;
  double local_30;
  double local_28;
  
  this_00 = ::operator_new(0x78);
  if (this_00 == (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)0x0) {
    return (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)0x0;
  }
  local_38 = (double)*(float *)&param_1->_padding_;
  fVar2 = *(float *)&param_1->_padding_;
  this = (param_1->MObject).Reference;
  local_28 = (double)*(float *)&param_1->_padding_;
  local_30 = (double)*(float *)((longlong)&param_1->_padding_ + 4);
  if (this != (TSphere<double,3> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  uVar4 = FImplicitObject::GetType((FImplicitObject *)this);
  FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this_00,2,uVar4);
  this_00->_padding_ = (longlong)&___7__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__6B_;
  (this_00->MObject).Reference = this;
  if (this == (TSphere<double,3> *)0x0) {
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
  }
  else {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
    LOCK();
    plVar1 = &this->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
      (**(code **)this->_padding_)(this,1);
      return this_00;
    }
  }
  return this_00;
}

// CopyHelper @ 1438aabc0

TImplicitObjectScaled<Chaos::FCapsule,1> * __cdecl
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::CopyHelper
          (TImplicitObjectScaled<Chaos::FCapsule,1> *param_1)

{
  longlong *plVar1;
  float fVar2;
  FCapsule *this;
  longlong lVar3;
  uchar uVar4;
  TImplicitObjectScaled<Chaos::FCapsule,1> *this_00;
  double local_38;
  double local_30;
  double local_28;
  
  this_00 = ::operator_new(0x78);
  if (this_00 == (TImplicitObjectScaled<Chaos::FCapsule,1> *)0x0) {
    return (TImplicitObjectScaled<Chaos::FCapsule,1> *)0x0;
  }
  local_38 = (double)*(float *)&param_1->_padding_;
  fVar2 = *(float *)&param_1->_padding_;
  this = (param_1->MObject).Reference;
  local_28 = (double)*(float *)&param_1->_padding_;
  local_30 = (double)*(float *)((longlong)&param_1->_padding_ + 4);
  if (this != (FCapsule *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  uVar4 = FImplicitObject::GetType((FImplicitObject *)this);
  FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this_00,2,uVar4);
  this_00->_padding_ = (longlong)&___7__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__6B_;
  (this_00->MObject).Reference = this;
  if (this == (FCapsule *)0x0) {
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
  }
  else {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
    LOCK();
    plVar1 = &this->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
      (**(code **)this->_padding_)(this,1);
      return this_00;
    }
  }
  return this_00;
}

// CopyHelper @ 1438aace0

TImplicitObjectScaled<Chaos::FConvex,1> * __cdecl
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::CopyHelper
          (TImplicitObjectScaled<Chaos::FConvex,1> *param_1)

{
  longlong *plVar1;
  float fVar2;
  FConvex *this;
  longlong lVar3;
  uchar uVar4;
  TImplicitObjectScaled<Chaos::FConvex,1> *this_00;
  double local_38;
  double local_30;
  double local_28;
  
  this_00 = ::operator_new(0x78);
  if (this_00 == (TImplicitObjectScaled<Chaos::FConvex,1> *)0x0) {
    return (TImplicitObjectScaled<Chaos::FConvex,1> *)0x0;
  }
  local_38 = (double)*(float *)&param_1->_padding_;
  fVar2 = *(float *)&param_1->_padding_;
  this = (param_1->MObject).Reference;
  local_28 = (double)*(float *)&param_1->_padding_;
  local_30 = (double)*(float *)((longlong)&param_1->_padding_ + 4);
  if (this != (FConvex *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  uVar4 = FImplicitObject::GetType((FImplicitObject *)this);
  FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this_00,2,uVar4);
  this_00->_padding_ = (longlong)&___7__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__6B_;
  (this_00->MObject).Reference = this;
  if (this == (FConvex *)0x0) {
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
  }
  else {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
    LOCK();
    plVar1 = &this->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
      (**(code **)this->_padding_)(this,1);
      return this_00;
    }
  }
  return this_00;
}

// FindClosestFaceAndVertices @ 1438b0fd0

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::FindClosestFaceAndVertices
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,TVector<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  return -1;
}

// FindClosestFaceAndVertices @ 1438b0fe0

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::FindClosestFaceAndVertices
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,TVector<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  return -1;
}

// FindClosestFaceAndVertices @ 1438b0ff0

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::FindClosestFaceAndVertices
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,TVector<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  return -1;
}

// FindClosestFaceAndVertices @ 1438b1000

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::FindClosestFaceAndVertices
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,TVector<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  undefined1 local_res8 [8];
  double local_38;
  double local_30;
  double local_28;
  
  fVar8 = *(float *)((longlong)&this->_padding_ + 4);
  local_38 = (double)((float)*(double *)param_1 * fVar8);
  local_30 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  fVar3 = *(float *)&this->_padding_;
  local_28 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  if (((fVar8 <= fVar3) ||
      (pfVar1 = (float *)((longlong)&this->_padding_ + 4), fVar8 < *pfVar1 || fVar8 == *pfVar1)) &&
     (fVar4 = *(float *)((longlong)&this->_padding_ + 4), fVar8 = fVar3, fVar3 <= fVar4)) {
    fVar8 = fVar4;
  }
  iVar6 = FConvex::FindClosestFaceAndVertices
                    ((this->MObject).Reference,(TVector<double,3> *)&local_38,param_2,
                     (double)fVar8 * param_3);
  if (iVar6 != -1) {
    pFVar7 = (param_2->AllocatorInstance).Data;
    iVar5 = param_2->ArrayNum;
    pFVar2 = pFVar7 + (longlong)iVar5 * 0x18;
    while( true ) {
      if (param_2->ArrayNum != iVar5) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar2) break;
      fVar8 = *(float *)&this->_padding_;
      fVar3 = *(float *)&this->_padding_;
      *(double *)(pFVar7 + 8) =
           (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)(pFVar7 + 8);
      *(double *)(pFVar7 + 0x10) = (double)fVar8 * *(double *)(pFVar7 + 0x10);
      *(double *)pFVar7 = (double)fVar3 * *(double *)pFVar7;
      pFVar7 = pFVar7 + 0x18;
    }
  }
  return iVar6;
}

// FindClosestIntersectionImp @ 1438b14f0

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::FindClosestIntersectionImp
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,
          Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  Pair<Chaos::TVector<double,3>,bool> *pPVar6;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (*(float *)&this->_padding_ != 0.0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351169>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x37f,"OuterMargin == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pPVar6 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar6;
    }
  }
  local_20 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_18 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_10 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_38 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_30 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_28 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  FImplicitObject::FindClosestIntersection
            ((FImplicitObject *)(this->MObject).Reference,__return_storage_ptr__,
             (TVector<double,3> *)&local_20,(TVector<double,3> *)&local_38,param_3);
  if (__return_storage_ptr__->Second != false) {
    fVar1 = *(float *)&this->_padding_;
    dVar3 = *(double *)&__return_storage_ptr__->First;
    fVar2 = *(float *)&this->_padding_;
    *(double *)&(__return_storage_ptr__->First).field_0x8 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x8 *
                 *(float *)((longlong)&this->_padding_ + 4));
    *(double *)&(__return_storage_ptr__->First).field_0x10 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x10 * fVar1);
    *(double *)&__return_storage_ptr__->First = (double)((float)dVar3 * fVar2);
  }
  return __return_storage_ptr__;
}

// FindClosestIntersectionImp @ 1438b1660

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::FindClosestIntersectionImp
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,
          Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  Pair<Chaos::TVector<double,3>,bool> *pPVar6;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (*(float *)&this->_padding_ != 0.0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351169>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x37f,"OuterMargin == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pPVar6 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar6;
    }
  }
  local_20 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_18 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_10 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_38 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_30 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_28 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  FImplicitObject::FindClosestIntersection
            ((FImplicitObject *)(this->MObject).Reference,__return_storage_ptr__,
             (TVector<double,3> *)&local_20,(TVector<double,3> *)&local_38,param_3);
  if (__return_storage_ptr__->Second != false) {
    fVar1 = *(float *)&this->_padding_;
    dVar3 = *(double *)&__return_storage_ptr__->First;
    fVar2 = *(float *)&this->_padding_;
    *(double *)&(__return_storage_ptr__->First).field_0x8 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x8 *
                 *(float *)((longlong)&this->_padding_ + 4));
    *(double *)&(__return_storage_ptr__->First).field_0x10 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x10 * fVar1);
    *(double *)&__return_storage_ptr__->First = (double)((float)dVar3 * fVar2);
  }
  return __return_storage_ptr__;
}

// FindClosestIntersectionImp @ 1438b17d0

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::FindClosestIntersectionImp
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,
          Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  Pair<Chaos::TVector<double,3>,bool> *pPVar6;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (*(float *)&this->_padding_ != 0.0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351169>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x37f,"OuterMargin == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pPVar6 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar6;
    }
  }
  local_20 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_18 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_10 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_38 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_30 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_28 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  FImplicitObject::FindClosestIntersection
            ((FImplicitObject *)(this->MObject).Reference,__return_storage_ptr__,
             (TVector<double,3> *)&local_20,(TVector<double,3> *)&local_38,param_3);
  if (__return_storage_ptr__->Second != false) {
    fVar1 = *(float *)&this->_padding_;
    dVar3 = *(double *)&__return_storage_ptr__->First;
    fVar2 = *(float *)&this->_padding_;
    *(double *)&(__return_storage_ptr__->First).field_0x8 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x8 *
                 *(float *)((longlong)&this->_padding_ + 4));
    *(double *)&(__return_storage_ptr__->First).field_0x10 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x10 * fVar1);
    *(double *)&__return_storage_ptr__->First = (double)((float)dVar3 * fVar2);
  }
  return __return_storage_ptr__;
}

// FindClosestIntersectionImp @ 1438b1940

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::FindClosestIntersectionImp
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,
          Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  Pair<Chaos::TVector<double,3>,bool> *pPVar6;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (*(float *)&this->_padding_ != 0.0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351169>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x37f,"OuterMargin == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pPVar6 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar6;
    }
  }
  local_20 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_18 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_10 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_38 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_30 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_28 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  FImplicitObject::FindClosestIntersection
            ((FImplicitObject *)(this->MObject).Reference,__return_storage_ptr__,
             (TVector<double,3> *)&local_20,(TVector<double,3> *)&local_38,param_3);
  if (__return_storage_ptr__->Second != false) {
    fVar1 = *(float *)&this->_padding_;
    dVar3 = *(double *)&__return_storage_ptr__->First;
    fVar2 = *(float *)&this->_padding_;
    *(double *)&(__return_storage_ptr__->First).field_0x8 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x8 *
                 *(float *)((longlong)&this->_padding_ + 4));
    *(double *)&(__return_storage_ptr__->First).field_0x10 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x10 * fVar1);
    *(double *)&__return_storage_ptr__->First = (double)((float)dVar3 * fVar2);
  }
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 1438b2670

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::FindGeometryOpposingNormal
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,
          TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,int param_2,
          TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double local_88 [16];
  
  dVar5 = __real_3f1a36e2e0000000;
  dVar9 = __real_3ff0000000000000;
  dVar14 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar12 = SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar14 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar13,uVar12) &&
      (double)CONCAT44(uVar13,uVar12) != __real_3f1a36e2e0000000) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351205>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x35b,
                       "FMath::IsNearlyEqual(OriginalNormal.SizeSquared(), FReal(1), FReal((1.e-4f)))"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  dVar16 = (double)*(float *)&this->_padding_ * *(double *)param_3;
  dVar15 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_88[3] = (double)*(float *)&this->_padding_ * *(double *)param_1;
  local_88[1] = dVar15 * *(double *)&param_3->field_0x8;
  dVar14 = (double)*(float *)&this->_padding_ * *(double *)&param_3->field_0x10;
  local_88[5] = (double)*(float *)&this->_padding_ * *(double *)&param_1->field_0x10;
  local_88[4] = dVar15 * *(double *)&param_1->field_0x8;
  auVar10._0_8_ = local_88[1] * local_88[1];
  auVar10._8_8_ = 0;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar16 * dVar16 + auVar10._0_8_ + dVar14 * dVar14;
  auVar11 = sqrtpd(auVar10,auVar11);
  if (auVar11._0_8_ <= __real_3e45798ee0000000) {
    local_88[1] = 0.0;
    local_88[0] = 0.0;
  }
  else {
    local_88[0] = dVar9 / auVar11._0_8_;
    dVar9 = local_88[0] * dVar14;
    local_88[1] = local_88[0] * local_88[1];
    local_88[0] = local_88[0] * dVar16;
  }
  lVar8 = 0;
  local_88[7] = local_88[1];
  local_88[6] = local_88[0];
  local_88[8] = dVar9;
  dVar14 = __real_7fefffffffffffff;
  local_88[2] = dVar9;
  do {
    dVar9 = *(double *)((longlong)local_88 + lVar8 + 0x30);
    if (dVar9 <= dVar5) {
      if ((dVar9 < __real_bf1a36e2e0000000) &&
         (uVar3 = *(undefined8 *)((longlong)local_88 + lVar8 + 0x18),
         dVar9 = (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^
                                  (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20),
                                  (uint)uVar3 ^ (uint)__xmm_80000000000000008000000000000000),
         dVar9 < dVar14)) {
        local_88[2] = 0.0;
        local_88[0] = 0.0;
        local_88[1] = 0.0;
        *(undefined8 *)((longlong)local_88 + lVar8) = 0xbff0000000000000;
        dVar14 = dVar9;
      }
    }
    else {
      dVar9 = *(double *)((longlong)local_88 + lVar8 + 0x18);
      if (dVar9 < dVar14) {
        local_88[2] = 0.0;
        local_88[0] = 0.0;
        local_88[1] = 0.0;
        *(undefined8 *)((longlong)local_88 + lVar8) = 0x3ff0000000000000;
        dVar14 = dVar9;
      }
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 < 0x18);
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)*(float *)&this->_padding_ * local_88[1];
  dVar14 = __real_0010000000000000;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar1 * local_88[2];
  *(double *)__return_storage_ptr__ = (double)fVar2 * local_88[0];
  dVar14 = TVector<double,3>::SafeNormalize(__return_storage_ptr__,dVar14);
  if (dVar14 == 0.0) {
    uVar3 = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  }
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 1438b2910

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::FindGeometryOpposingNormal
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,
          TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,int param_2,
          TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  TVector<double,3> *pTVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar8 = __real_3ff0000000000000;
  dVar13 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar11 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar11) &&
      (double)CONCAT44(uVar12,uVar11) != __real_3f1a36e2e0000000) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351205>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x35b,
                       "FMath::IsNearlyEqual(OriginalNormal.SizeSquared(), FReal(1), FReal((1.e-4f)))"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar3)();
      return pTVar7;
    }
  }
  dVar14 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_3->field_0x8;
  dVar15 = (double)*(float *)&this->_padding_ * *(double *)param_3;
  dVar13 = (double)*(float *)&this->_padding_ * *(double *)&param_3->field_0x10;
  auVar9._0_8_ = dVar15 * dVar15;
  auVar9._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar14 * dVar14 + auVar9._0_8_ + dVar13 * dVar13;
  auVar10 = sqrtpd(auVar9,auVar10);
  if (auVar10._0_8_ <= __real_3e45798ee0000000) {
    dVar14 = 0.0;
    dVar4 = 0.0;
  }
  else {
    dVar4 = dVar8 / auVar10._0_8_;
    dVar8 = dVar4 * dVar13;
    dVar14 = dVar4 * dVar14;
    dVar4 = dVar4 * dVar15;
  }
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)*(float *)&this->_padding_ * dVar14;
  dVar13 = __real_0010000000000000;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar1 * dVar8;
  *(double *)__return_storage_ptr__ = (double)fVar2 * dVar4;
  dVar13 = TVector<double,3>::SafeNormalize(__return_storage_ptr__,dVar13);
  if (dVar13 == 0.0) {
    uVar5 = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  }
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 1438b2aa0

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::FindGeometryOpposingNormal
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,int param_2,TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  TVector<double,3> *pTVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar8 = __real_3ff0000000000000;
  dVar13 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar11 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar11) &&
      (double)CONCAT44(uVar12,uVar11) != __real_3f1a36e2e0000000) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351205>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x35b,
                       "FMath::IsNearlyEqual(OriginalNormal.SizeSquared(), FReal(1), FReal((1.e-4f)))"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar3)();
      return pTVar7;
    }
  }
  dVar14 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_3->field_0x8;
  dVar15 = (double)*(float *)&this->_padding_ * *(double *)param_3;
  dVar13 = (double)*(float *)&this->_padding_ * *(double *)&param_3->field_0x10;
  auVar9._0_8_ = dVar15 * dVar15;
  auVar9._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar14 * dVar14 + auVar9._0_8_ + dVar13 * dVar13;
  auVar10 = sqrtpd(auVar9,auVar10);
  if (auVar10._0_8_ <= __real_3e45798ee0000000) {
    dVar14 = 0.0;
    dVar4 = 0.0;
  }
  else {
    dVar4 = dVar8 / auVar10._0_8_;
    dVar8 = dVar4 * dVar13;
    dVar14 = dVar4 * dVar14;
    dVar4 = dVar4 * dVar15;
  }
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)*(float *)&this->_padding_ * dVar14;
  dVar13 = __real_0010000000000000;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar1 * dVar8;
  *(double *)__return_storage_ptr__ = (double)fVar2 * dVar4;
  dVar13 = TVector<double,3>::SafeNormalize(__return_storage_ptr__,dVar13);
  if (dVar13 == 0.0) {
    uVar5 = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  }
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 1438b2c30

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::FindGeometryOpposingNormal
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,int param_2,TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  FConvex *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  TVector<double,3> *pTVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar13 = __real_3ff0000000000000;
  lVar10 = (longlong)param_2;
  dVar17 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar14 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar15 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar14) &&
      (double)CONCAT44(uVar15,uVar14) != __real_3f1a36e2e0000000) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351205>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x35b,
                       "FMath::IsNearlyEqual(OriginalNormal.SizeSquared(), FReal(1), FReal((1.e-4f)))"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TVector<double,3> *)(*pcVar5)();
      return pTVar9;
    }
  }
  dVar17 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_3->field_0x8;
  dVar18 = (double)*(float *)&this->_padding_ * *(double *)param_3;
  dVar16 = (double)*(float *)&this->_padding_ * *(double *)&param_3->field_0x10;
  auVar11._0_8_ = dVar17 * dVar17;
  auVar11._8_8_ = 0;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar18 * dVar18 + auVar11._0_8_ + dVar16 * dVar16;
  auVar12 = sqrtpd(auVar11,auVar12);
  if (auVar12._0_8_ <= __real_3e45798ee0000000) {
    dVar17 = 0.0;
    dVar6 = 0.0;
  }
  else {
    dVar6 = dVar13 / auVar12._0_8_;
    dVar13 = dVar6 * dVar16;
    dVar17 = dVar6 * dVar17;
    dVar6 = dVar6 * dVar18;
  }
  if (param_2 != -1) {
    pFVar3 = (this->MObject).Reference;
    uVar14 = 0;
    if (param_2 < (pFVar3->Planes).ArrayNum) {
      uVar14 = (uint)~param_2 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TVector<double,3> *)(*pcVar5)();
        return pTVar9;
      }
    }
    pFVar4 = (pFVar3->Planes).AllocatorInstance.Data;
    dVar6 = (double)*(float *)(pFVar4 + lVar10 * 0x18 + 0xc);
    dVar17 = (double)*(float *)(pFVar4 + lVar10 * 0x18 + 0x10);
    dVar13 = (double)*(float *)(pFVar4 + lVar10 * 0x18 + 0x14);
  }
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)*(float *)&this->_padding_ * dVar17;
  dVar17 = __real_0010000000000000;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar1 * dVar13;
  *(double *)__return_storage_ptr__ = (double)fVar2 * dVar6;
  dVar17 = TVector<double,3>::SafeNormalize(__return_storage_ptr__,dVar17);
  if (dVar17 == 0.0) {
    uVar7 = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar7;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  }
  return __return_storage_ptr__;
}

// FindMostOpposingFace @ 1438b31b0

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::FindMostOpposingFace
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,int param_3,double param_4)

{
  int iVar1;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = (double)*(float *)&this->_padding_;
  local_20 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_18 = (double)*(float *)&this->_padding_;
  iVar1 = FImplicitObject::FindMostOpposingFaceScaled
                    ((FImplicitObject *)(this->MObject).Reference,param_1,param_2,param_3,param_4,
                     (TVector<double,3> *)&local_28);
  return iVar1;
}

// FindMostOpposingFace @ 1438b3210

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::FindMostOpposingFace
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,int param_3,double param_4)

{
  int iVar1;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = (double)*(float *)&this->_padding_;
  local_20 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_18 = (double)*(float *)&this->_padding_;
  iVar1 = FImplicitObject::FindMostOpposingFaceScaled
                    ((FImplicitObject *)(this->MObject).Reference,param_1,param_2,param_3,param_4,
                     (TVector<double,3> *)&local_28);
  return iVar1;
}

// FindMostOpposingFace @ 1438b3270

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::FindMostOpposingFace
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,int param_3,double param_4)

{
  int iVar1;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = (double)*(float *)&this->_padding_;
  local_20 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_18 = (double)*(float *)&this->_padding_;
  iVar1 = FImplicitObject::FindMostOpposingFaceScaled
                    ((FImplicitObject *)(this->MObject).Reference,param_1,param_2,param_3,param_4,
                     (TVector<double,3> *)&local_28);
  return iVar1;
}

// FindMostOpposingFace @ 1438b32d0

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::FindMostOpposingFace
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,int param_3,double param_4)

{
  int iVar1;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = (double)*(float *)&this->_padding_;
  local_20 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_18 = (double)*(float *)&this->_padding_;
  iVar1 = FConvex::FindMostOpposingFaceScaled
                    ((this->MObject).Reference,param_1,param_2,param_3,param_4,
                     (TVector<double,3> *)&local_28);
  return iVar1;
}

// GetClosestEdgePosition @ 1438ba000

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::GetClosestEdgePosition
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  TVector<double,3> local_38;
  TVector<double,3> local_20;
  
  local_68 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_60 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_58 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  TBox<double,3>::GetClosestEdge
            ((this->MObject).Reference,(TVector<double,3> *)&local_50,param_1,
             (TVector<double,3> *)&local_68,&local_20,&local_38);
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)__return_storage_ptr__ = (double)*(float *)&this->_padding_ * local_50;
  fVar2 = *(float *)&this->_padding_;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1 * local_48;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2 * local_40;
  return __return_storage_ptr__;
}

// GetClosestEdgePosition @ 1438ba0d0

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::GetClosestEdgePosition
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,TVector<double,3> *__return_storage_ptr__,
          int param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  TVector<double,3> local_38;
  TVector<double,3> local_20;
  
  local_68 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_60 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_58 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  FConvex::GetClosestEdge
            ((this->MObject).Reference,(TVector<double,3> *)&local_50,param_1,
             (TVector<double,3> *)&local_68,&local_20,&local_38);
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)__return_storage_ptr__ = (double)*(float *)&this->_padding_ * local_50;
  fVar2 = *(float *)&this->_padding_;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1 * local_48;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2 * local_40;
  return __return_storage_ptr__;
}

// GetInnerObject @ 1438ba700

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::GetInnerObject
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)(this->MObject).Reference;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GetInnerObject @ 1438ba720

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::GetInnerObject
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)(this->MObject).Reference;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GetInnerObject @ 1438ba740

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::GetInnerObject
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)(this->MObject).Reference;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GetInnerObject @ 1438ba760

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::GetInnerObject
          (TImplicitObjectScaled<Chaos::FConvex,1> *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)(this->MObject).Reference;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GetMaterialIndex @ 1438bb1d0

ushort __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::GetMaterialIndex
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,uint param_1)

{
  return 0;
}

// GetMaterialIndex @ 1438bb1e0

ushort __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::GetMaterialIndex
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,uint param_1)

{
  return 0;
}

// GetMaterialIndex @ 1438bb1f0

ushort __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::GetMaterialIndex
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,uint param_1)

{
  return 0;
}

// GetMaterialIndex @ 1438bb200

ushort __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::GetMaterialIndex
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,uint param_1)

{
  return 0;
}

// GetNestedType @ 1438bb230

uchar __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::GetNestedType
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this)

{
  uchar uVar1;
  
  uVar1 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  return uVar1;
}

// GetNestedType @ 1438bb240

uchar __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::GetNestedType
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this)

{
  uchar uVar1;
  
  uVar1 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  return uVar1;
}

// GetNestedType @ 1438bb250

uchar __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::GetNestedType
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this)

{
  uchar uVar1;
  
  uVar1 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  return uVar1;
}

// GetNestedType @ 1438bb260

uchar __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::GetNestedType
          (TImplicitObjectScaled<Chaos::FConvex,1> *this)

{
  uchar uVar1;
  
  uVar1 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  return uVar1;
}

// GetPlaneNX @ 1438bbc20

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::GetPlaneNX
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,int param_1,
          TVector<double,3> *param_2,TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  TBox<double,3>::GetPlaneNX
            ((this->MObject).Reference,param_1,(TVector<double,3> *)&local_78,
             (TVector<double,3> *)&local_60);
  fVar1 = *(float *)&this->_padding_;
  fVar2 = *(float *)&this->_padding_;
  dVar8 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_78;
  dVar4 = (double)*(float *)&this->_padding_ * local_70;
  dVar7 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_68;
  dVar6 = dVar8 * dVar8 + dVar4 * dVar4 + dVar7 * dVar7;
  local_58 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_58;
  if (__real_3e45798ee0000000 < dVar6) {
    local_68 = __real_3ff0000000000000 / SQRT(dVar6);
    local_78 = dVar8 * local_68;
    local_70 = dVar4 * local_68;
    local_68 = dVar7 * local_68;
  }
  auVar3._8_4_ = SUB84(local_70,0);
  auVar3._0_8_ = local_78;
  auVar3._12_4_ = (int)((ulonglong)local_70 >> 0x20);
  *(undefined1 (*) [16])param_2 = auVar3;
  *(double *)&param_2->field_0x10 = local_68;
  auVar5._8_4_ = SUB84(local_58,0);
  auVar5._0_8_ = (double)fVar2 * local_60;
  auVar5._12_4_ = (int)((ulonglong)local_58 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar5;
  *(double *)&param_3->field_0x10 = (double)fVar1 * local_50;
  return;
}

// GetPlaneNX @ 1438bbd80

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::GetPlaneNX
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,int param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  FConvex::GetPlaneNX((this->MObject).Reference,param_1,(TVector<double,3> *)&local_78,
                      (TVector<double,3> *)&local_60);
  fVar1 = *(float *)&this->_padding_;
  fVar2 = *(float *)&this->_padding_;
  dVar8 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_78;
  dVar4 = (double)*(float *)&this->_padding_ * local_70;
  dVar7 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_68;
  dVar6 = dVar8 * dVar8 + dVar4 * dVar4 + dVar7 * dVar7;
  local_58 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_58;
  if (__real_3e45798ee0000000 < dVar6) {
    local_68 = __real_3ff0000000000000 / SQRT(dVar6);
    local_78 = dVar8 * local_68;
    local_70 = dVar4 * local_68;
    local_68 = dVar7 * local_68;
  }
  auVar3._8_4_ = SUB84(local_70,0);
  auVar3._0_8_ = local_78;
  auVar3._12_4_ = (int)((ulonglong)local_70 >> 0x20);
  *(undefined1 (*) [16])param_2 = auVar3;
  *(double *)&param_2->field_0x10 = local_68;
  auVar5._8_4_ = SUB84(local_58,0);
  auVar5._0_8_ = (double)fVar2 * local_60;
  auVar5._12_4_ = (int)((ulonglong)local_58 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar5;
  *(double *)&param_3->field_0x10 = (double)fVar1 * local_50;
  return;
}

// GetRadius @ 1438bc290

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::GetRadius
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this)

{
  return 0.0;
}

// GetRadius @ 1438bc2a0

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::GetRadius
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 < *(float *)&((this->MObject).Reference)->_padding_) {
    fVar1 = *(float *)&this->_padding_;
  }
  return (double)fVar1;
}

// GetRadius @ 1438bc2c0

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::GetRadius
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 < *(float *)&((this->MObject).Reference)->_padding_) {
    fVar1 = *(float *)&this->_padding_;
  }
  return (double)fVar1;
}

// GetRadius @ 1438bc2e0

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::GetRadius
          (TImplicitObjectScaled<Chaos::FConvex,1> *this)

{
  return 0.0;
}

// GetRadiusf @ 1438bc340

float __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::GetRadiusf
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this)

{
  return 0.0;
}

// GetRadiusf @ 1438bc350

float __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::GetRadiusf
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 < *(float *)&((this->MObject).Reference)->_padding_) {
    fVar1 = *(float *)&this->_padding_;
  }
  return fVar1;
}

// GetRadiusf @ 1438bc370

float __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::GetRadiusf
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 < *(float *)&((this->MObject).Reference)->_padding_) {
    fVar1 = *(float *)&this->_padding_;
  }
  return fVar1;
}

// GetRadiusf @ 1438bc390

float __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::GetRadiusf
          (TImplicitObjectScaled<Chaos::FConvex,1> *this)

{
  return 0.0;
}

// GetTypeHash @ 1438bcc50

uint __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::GetTypeHash
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&this->_padding_,0xc,0);
  uVar2 = TBox<double,3>::GetTypeHash((this->MObject).Reference);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// GetTypeHash @ 1438bcd10

uint __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::GetTypeHash
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&this->_padding_,0xc,0);
  uVar2 = TSphere<double,3>::GetTypeHash((this->MObject).Reference);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// GetTypeHash @ 1438bcdd0

uint __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::GetTypeHash
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&this->_padding_,0xc,0);
  uVar2 = FCapsule::GetTypeHash((this->MObject).Reference);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// GetTypeHash @ 1438bce90

uint __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::GetTypeHash
          (TImplicitObjectScaled<Chaos::FConvex,1> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&this->_padding_,0xc,0);
  uVar2 = FConvex::GetTypeHash((this->MObject).Reference);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// GetVertex @ 1438bd430

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::GetVertex
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,TVector<double,3> *__return_storage_ptr__,
          int param_1)

{
  float fVar1;
  undefined8 uVar2;
  FCapsule *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pFVar3 = (this->MObject).Reference;
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  if (param_1 == 0) {
    uVar2 = *(undefined8 *)&(pFVar3->MSegment).MPoint;
    fVar4 = (float)uVar2;
    fVar5 = (float)((ulonglong)uVar2 >> 0x20);
    fVar6 = *(float *)&(pFVar3->MSegment).MPoint.field_0x8;
  }
  else if (param_1 == 1) {
    fVar6 = (pFVar3->MSegment).MLength;
    fVar4 = fVar6 * *(float *)&(pFVar3->MSegment).MAxis + *(float *)&(pFVar3->MSegment).MPoint;
    fVar5 = fVar6 * *(float *)&(pFVar3->MSegment).MAxis.field_0x4 +
            *(float *)&(pFVar3->MSegment).MPoint.field_0x4;
    fVar6 = fVar6 * *(float *)&(pFVar3->MSegment).MAxis.field_0x8 +
            *(float *)&(pFVar3->MSegment).MPoint.field_0x8;
  }
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)__return_storage_ptr__ = (double)(fVar4 * *(float *)&this->_padding_);
  fVar4 = *(float *)&this->_padding_;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(fVar5 * fVar1);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(fVar6 * fVar4);
  return __return_storage_ptr__;
}

// InitScaledImplicit @ 1438c2570

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,TVector<double,3> *param_1,
          float param_2)

{
  TBox<double,3> *pTVar1;
  code *pcVar2;
  uchar uVar3;
  byte bVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((char)uVar3 < '\0') {
    local_res18[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(local_res18);
  }
  bVar4 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((bVar4 & 0x40) != 0) {
    local_res8[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_res8);
  }
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((uVar3 == '\x04') || (uVar3 == '\x05')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&pTVar1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&pTVar1->_padding_ + 5);
  *(float *)&this->_padding_ = param_2;
  SetScale(this,param_1);
  return;
}

// InitScaledImplicit @ 1438c2640

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,TVector<double,3> *param_1,
          float param_2)

{
  TSphere<double,3> *pTVar1;
  code *pcVar2;
  uchar uVar3;
  byte bVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((char)uVar3 < '\0') {
    local_res18[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit'::__l2::<lambda_1>
    ::operator()(local_res18);
  }
  bVar4 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((bVar4 & 0x40) != 0) {
    local_res8[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit'::__l2::<lambda_2>
    ::operator()(local_res8);
  }
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((uVar3 == '\x04') || (uVar3 == '\x05')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&pTVar1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&pTVar1->_padding_ + 5);
  *(float *)&this->_padding_ = param_2;
  SetScale(this,param_1);
  return;
}

// InitScaledImplicit @ 1438c2710

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,TVector<double,3> *param_1,float param_2)

{
  FCapsule *pFVar1;
  code *pcVar2;
  uchar uVar3;
  byte bVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((char)uVar3 < '\0') {
    local_res18[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(local_res18);
  }
  bVar4 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((bVar4 & 0x40) != 0) {
    local_res8[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_res8);
  }
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((uVar3 == '\x04') || (uVar3 == '\x05')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&pFVar1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&pFVar1->_padding_ + 5);
  *(float *)&this->_padding_ = param_2;
  SetScale(this,param_1);
  return;
}

// InitScaledImplicit @ 1438c27e0

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,TVector<double,3> *param_1,float param_2)

{
  FConvex *pFVar1;
  code *pcVar2;
  uchar uVar3;
  byte bVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((char)uVar3 < '\0') {
    local_res18[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(local_res18);
  }
  bVar4 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((bVar4 & 0x40) != 0) {
    local_res8[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_res8);
  }
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((uVar3 == '\x04') || (uVar3 == '\x05')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&pFVar1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&pFVar1->_padding_ + 5);
  *(float *)&this->_padding_ = param_2;
  SetScale(this,param_1);
  return;
}

// Overlap @ 1438c4840

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::Overlap
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,TVector<double,3> *param_1,
          double param_2)

{
  float fVar1;
  double dVar2;
  double local_48;
  double local_40;
  double local_38;
  
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  local_48 = (double)((float)*(double *)param_1 * fVar1);
  local_40 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_38 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  dVar2 = FImplicitObject::SignedDistance
                    ((FImplicitObject *)(this->MObject).Reference,(TVector<double,3> *)&local_48);
  return dVar2 <= (double)fVar1 * param_2;
}

// Overlap @ 1438c48d0

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::Overlap
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,TVector<double,3> *param_1,
          double param_2)

{
  float fVar1;
  double dVar2;
  double local_48;
  double local_40;
  double local_38;
  
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  local_48 = (double)((float)*(double *)param_1 * fVar1);
  local_40 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_38 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  dVar2 = FImplicitObject::SignedDistance
                    ((FImplicitObject *)(this->MObject).Reference,(TVector<double,3> *)&local_48);
  return dVar2 <= (double)fVar1 * param_2;
}

// Overlap @ 1438c4960

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::Overlap
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,TVector<double,3> *param_1,double param_2)

{
  float fVar1;
  double dVar2;
  double local_48;
  double local_40;
  double local_38;
  
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  local_48 = (double)((float)*(double *)param_1 * fVar1);
  local_40 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_38 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  dVar2 = FImplicitObject::SignedDistance
                    ((FImplicitObject *)(this->MObject).Reference,(TVector<double,3> *)&local_48);
  return dVar2 <= (double)fVar1 * param_2;
}

// Overlap @ 1438c49f0

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::Overlap
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,TVector<double,3> *param_1,double param_2)

{
  float fVar1;
  double dVar2;
  double local_48;
  double local_40;
  double local_38;
  
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  local_48 = (double)((float)*(double *)param_1 * fVar1);
  local_40 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_38 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  dVar2 = FImplicitObject::SignedDistance
                    ((FImplicitObject *)(this->MObject).Reference,(TVector<double,3> *)&local_48);
  return dVar2 <= (double)fVar1 * param_2;
}

// PhiWithNormal @ 1438c4d80

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::PhiWithNormal
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2)

{
  double dVar1;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = (double)*(float *)&this->_padding_;
  local_20 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_18 = (double)*(float *)&this->_padding_;
  dVar1 = TBox<double,3>::PhiWithNormalScaled
                    ((this->MObject).Reference,param_1,(TVector<double,3> *)&local_28,param_2);
  return dVar1;
}

// PhiWithNormal @ 1438c4dd0

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::PhiWithNormal
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  TSphere<double,3> *pTVar3;
  double dVar4;
  double dVar5;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  pTVar3 = (this->MObject).Reference;
  fVar1 = *(float *)&this->_padding_;
  fVar2 = *(float *)&this->_padding_;
  dVar5 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_78 = *(double *)param_1 / (double)fVar2;
  local_68 = *(double *)&param_1->field_0x10 / (double)fVar1;
  local_70 = *(double *)&param_1->field_0x8 / dVar5;
  dVar4 = (double)(**(code **)(pTVar3->_padding_ + 0x80))(pTVar3,&local_78,&local_60);
  *(double *)param_2 = (double)fVar2 * local_60;
  *(double *)&param_2->field_0x8 = dVar5 * local_58;
  *(double *)&param_2->field_0x10 = (double)fVar1 * local_50;
  dVar5 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
  return dVar5 * dVar4;
}

// PhiWithNormal @ 1438c4ec0

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::PhiWithNormal
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  FCapsule *pFVar3;
  double dVar4;
  double dVar5;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  pFVar3 = (this->MObject).Reference;
  fVar1 = *(float *)&this->_padding_;
  fVar2 = *(float *)&this->_padding_;
  dVar5 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_78 = *(double *)param_1 / (double)fVar2;
  local_68 = *(double *)&param_1->field_0x10 / (double)fVar1;
  local_70 = *(double *)&param_1->field_0x8 / dVar5;
  dVar4 = (double)(**(code **)(pFVar3->_padding_ + 0x80))(pFVar3,&local_78,&local_60);
  *(double *)param_2 = (double)fVar2 * local_60;
  *(double *)&param_2->field_0x8 = dVar5 * local_58;
  *(double *)&param_2->field_0x10 = (double)fVar1 * local_50;
  dVar5 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
  return dVar5 * dVar4;
}

// PhiWithNormal @ 1438c4fb0

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::PhiWithNormal
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2)

{
  double dVar1;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = (double)*(float *)&this->_padding_;
  local_20 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_18 = (double)*(float *)&this->_padding_;
  dVar1 = FConvex::PhiWithNormalScaledInternal
                    ((this->MObject).Reference,param_1,(TVector<double,3> *)&local_28,param_2);
  return dVar1;
}

// Raycast @ 1438c68f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::Raycast
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,double param_4,double *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  double dVar12;
  uint uVar14;
  undefined1 auVar13 [16];
  undefined8 in_XMM3_Qb;
  undefined1 auVar15 [16];
  float fVar16;
  double local_res8;
  float fStack_d4;
  float local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  
  auVar15._8_8_ = in_XMM3_Qb;
  auVar15._0_8_ = param_3;
  if ((param_3 <= 0.0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351456>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x260,"Length > 0"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  dVar3 = __real_3ff0000000000000;
  dVar12 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
           __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351455>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x261,"FMath::IsNearlyEqual(Dir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if (param_4 != 0.0) {
    auVar15 = ZEXT416((uint)__real_322bcc77);
    if (((__real_322bcc77 <
          (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
        (__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
                __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3369118521899351454>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                           ,0x262,
                           "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  local_b0 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_a8 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_a0 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_c8 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_c0 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_b8 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  auVar13._0_8_ = local_c0 * local_c0 + local_c8 * local_c8 + local_b8 * local_b8;
  auVar13._8_8_ = 0;
  auVar15 = sqrtpd(auVar15,auVar13);
  dVar12 = auVar15._0_8_;
  if (__real_0010000000000000 < dVar12) {
    dVar3 = dVar3 / dVar12;
    local_c8 = local_c8 * dVar3;
    local_c0 = local_c0 * dVar3;
    local_b8 = local_b8 * dVar3;
    bVar5 = TAABB<double,3>::Raycast
                      (&((this->MObject).Reference)->AABB,(TVector<double,3> *)&local_b0,
                       (TVector<double,3> *)&local_c8,dVar12 * param_3,
                       (double)*(float *)((longlong)&this->_padding_ + 4) * param_4,&local_res8,
                       (TVector<double,3> *)&local_98,(TVector<double,3> *)&local_80,param_8);
    if (bVar5) {
      local_res8 = local_res8 * dVar3;
      if (local_res8 == 0.0) {
        uVar4 = *(undefined8 *)&param_1->field_0x8;
        *(undefined8 *)param_6 = *(undefined8 *)param_1;
        *(undefined8 *)&param_6->field_0x8 = uVar4;
        *(undefined8 *)&param_6->field_0x10 = *(undefined8 *)&param_1->field_0x10;
        uVar7 = *(uint *)&param_2->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar8 = *(uint *)&param_2->field_0x8 ^ _UNK_15066df78;
        uVar9 = *(uint *)&param_2->field_0xc ^ _UNK_15066df7c;
        uVar10 = (uint)*(undefined8 *)&param_2->field_0x10 ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar14 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        *(uint *)param_7 = *(uint *)param_2 ^ (uint)__xmm_80000000000000008000000000000000;
        *(uint *)&param_7->field_0x4 = uVar7;
        *(uint *)&param_7->field_0x8 = uVar8;
        *(uint *)&param_7->field_0xc = uVar9;
        *(ulonglong *)&param_7->field_0x10 = CONCAT44(uVar14,uVar10);
        *param_5 = local_res8;
        return true;
      }
      if (local_res8 < param_3) {
        fVar16 = *(float *)((longlong)&this->_padding_ + 4);
        fVar1 = *(float *)&this->_padding_;
        *(double *)param_6 = (double)((float)local_98 * *(float *)&this->_padding_);
        *(double *)&param_6->field_0x8 = (double)((float)local_90 * fVar16);
        *(double *)&param_6->field_0x10 = (double)((float)local_88 * fVar1);
        fStack_d4 = (float)local_78 * *(float *)&this->_padding_;
        uVar11 = (float)local_80 * *(float *)((longlong)&this->_padding_ + 4);
        local_d0 = (float)local_70 * *(float *)((longlong)&this->_padding_ + 4);
        fVar16 = (float)uVar11 * (float)uVar11 + fStack_d4 * fStack_d4 + local_d0 * local_d0;
        if (fVar16 != __real_3f800000) {
          if (__real_00800000 <= fVar16) {
            fVar16 = __real_3f800000 / SQRT(fVar16);
            fStack_d4 = fStack_d4 * fVar16;
            local_d0 = local_d0 * fVar16;
            uVar11 = (float)uVar11 * fVar16;
          }
          else {
            fStack_d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
            local_d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          }
        }
        *(double *)param_7 = (double)(float)uVar11;
        *(double *)&param_7->field_0x8 = (double)fStack_d4;
        *(double *)&param_7->field_0x10 = (double)local_d0;
        *param_5 = local_res8;
        return true;
      }
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351449>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x267,"LengthScale > TNumericLimits<FReal>::Min()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  return false;
}

// Raycast @ 1438c6d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::Raycast
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,double param_4,double *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8)

{
  float fVar1;
  TSphere<double,3> *pTVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  double dVar13;
  uint uVar15;
  undefined1 auVar14 [16];
  float fVar16;
  double local_res8;
  float fStack_d4;
  float local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  
  if ((param_3 <= 0.0) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351456>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x260,"Length > 0"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  dVar4 = __real_3ff0000000000000;
  dVar13 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
           __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351455>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x261,"FMath::IsNearlyEqual(Dir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((param_4 != 0.0) &&
     (((__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
      (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3369118521899351454>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                          ,0x262,
                          "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                         ), bVar6)))) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  fVar16 = *(float *)((longlong)&this->_padding_ + 4);
  local_b0 = (double)((float)*(double *)param_1 * fVar16);
  local_a8 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_a0 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_c8 = (double)((float)*(double *)param_2 * fVar16);
  local_c0 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_b8 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  auVar14._0_8_ = local_c0 * local_c0 + local_c8 * local_c8 + local_b8 * local_b8;
  auVar14._8_8_ = 0;
  auVar14 = sqrtpd(auVar14,auVar14);
  dVar13 = auVar14._0_8_;
  if (__real_0010000000000000 < dVar13) {
    pTVar2 = (this->MObject).Reference;
    dVar4 = dVar4 / dVar13;
    *param_8 = -1;
    local_c0 = local_c0 * dVar4;
    local_c8 = local_c8 * dVar4;
    local_b8 = local_b8 * dVar4;
    bVar6 = Raycasts::RaySphere<double,3>
                      ((TVector<double,3> *)&local_b0,(TVector<double,3> *)&local_c8,
                       dVar13 * param_3,(double)fVar16 * param_4,&pTVar2->Center,
                       *(float *)&pTVar2->_padding_,&local_res8,(TVector<double,3> *)&local_98,
                       (TVector<double,3> *)&local_80);
    if (bVar6) {
      local_res8 = local_res8 * dVar4;
      if (local_res8 == 0.0) {
        uVar5 = *(undefined8 *)&param_1->field_0x8;
        *(undefined8 *)param_6 = *(undefined8 *)param_1;
        *(undefined8 *)&param_6->field_0x8 = uVar5;
        *(undefined8 *)&param_6->field_0x10 = *(undefined8 *)&param_1->field_0x10;
        uVar8 = *(uint *)&param_2->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar9 = *(uint *)&param_2->field_0x8 ^ _UNK_15066df78;
        uVar10 = *(uint *)&param_2->field_0xc ^ _UNK_15066df7c;
        uVar11 = (uint)*(undefined8 *)&param_2->field_0x10 ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar15 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        *(uint *)param_7 = *(uint *)param_2 ^ (uint)__xmm_80000000000000008000000000000000;
        *(uint *)&param_7->field_0x4 = uVar8;
        *(uint *)&param_7->field_0x8 = uVar9;
        *(uint *)&param_7->field_0xc = uVar10;
        *(ulonglong *)&param_7->field_0x10 = CONCAT44(uVar15,uVar11);
        *param_5 = local_res8;
        return true;
      }
      if (local_res8 < param_3) {
        fVar16 = *(float *)((longlong)&this->_padding_ + 4);
        fVar1 = *(float *)&this->_padding_;
        *(double *)param_6 = (double)((float)local_98 * *(float *)&this->_padding_);
        *(double *)&param_6->field_0x8 = (double)((float)local_90 * fVar16);
        *(double *)&param_6->field_0x10 = (double)((float)local_88 * fVar1);
        fStack_d4 = (float)local_78 * *(float *)&this->_padding_;
        uVar12 = (float)local_80 * *(float *)((longlong)&this->_padding_ + 4);
        local_d0 = (float)local_70 * *(float *)((longlong)&this->_padding_ + 4);
        fVar16 = (float)uVar12 * (float)uVar12 + fStack_d4 * fStack_d4 + local_d0 * local_d0;
        if (fVar16 != __real_3f800000) {
          if (__real_00800000 <= fVar16) {
            fVar16 = __real_3f800000 / SQRT(fVar16);
            fStack_d4 = fStack_d4 * fVar16;
            local_d0 = local_d0 * fVar16;
            uVar12 = (float)uVar12 * fVar16;
          }
          else {
            fStack_d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
            local_d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          }
        }
        *(double *)param_7 = (double)(float)uVar12;
        *(double *)&param_7->field_0x8 = (double)fStack_d4;
        *(double *)&param_7->field_0x10 = (double)local_d0;
        *param_5 = local_res8;
        return true;
      }
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351449>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x267,"LengthScale > TNumericLimits<FReal>::Min()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  return false;
}

// Raycast @ 1438c71d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::Raycast
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,double param_4,double *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  FCapsule *pFVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  double dVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar18 [16];
  double local_res8;
  float fStack_144;
  float local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  
  if ((param_3 <= 0.0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351456>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x260,"Length > 0"), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  dVar7 = __real_3ff0000000000000;
  dVar15 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
           __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351455>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x261,"FMath::IsNearlyEqual(Dir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  if ((param_4 != 0.0) &&
     (((__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
      (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3369118521899351454>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                          ,0x262,
                          "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                         ), bVar8)))) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  fVar14 = *(float *)((longlong)&this->_padding_ + 4);
  local_d8 = (double)((float)*(double *)param_1 * fVar14);
  local_d0 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_c8 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_f0 = (double)((float)*(double *)param_2 * fVar14);
  local_e8 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_e0 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  auVar18._0_8_ = local_e8 * local_e8 + local_f0 * local_f0 + local_e0 * local_e0;
  auVar18._8_8_ = 0;
  auVar18 = sqrtpd(unaff_XMM11,auVar18);
  dVar15 = auVar18._0_8_;
  if (__real_0010000000000000 < dVar15) {
    pFVar5 = (this->MObject).Reference;
    dVar7 = dVar7 / dVar15;
    local_e8 = local_e8 * dVar7;
    local_e0 = local_e0 * dVar7;
    local_f0 = local_f0 * dVar7;
    fVar1 = (pFVar5->MSegment).MLength;
    fVar2 = *(float *)&pFVar5->_padding_;
    local_138 = (double)(fVar1 * *(float *)&(pFVar5->MSegment).MAxis +
                        *(float *)&(pFVar5->MSegment).MPoint);
    local_130 = (double)(fVar1 * *(float *)&(pFVar5->MSegment).MAxis.field_0x4 +
                        *(float *)&(pFVar5->MSegment).MPoint.field_0x4);
    local_128 = (double)(fVar1 * *(float *)&(pFVar5->MSegment).MAxis.field_0x8 +
                        *(float *)&(pFVar5->MSegment).MPoint.field_0x8);
    uVar4 = *(undefined8 *)&(pFVar5->MSegment).MPoint;
    local_120 = (double)(float)uVar4;
    local_118 = (double)(float)((ulonglong)uVar4 >> 0x20);
    local_110 = (double)*(float *)&(pFVar5->MSegment).MPoint.field_0x8;
    local_108 = (double)*(float *)&(pFVar5->MSegment).MAxis;
    local_100 = (double)*(float *)&(pFVar5->MSegment).MAxis.field_0x4;
    fVar1 = *(float *)&(pFVar5->MSegment).MAxis.field_0x8;
    fVar3 = (pFVar5->MSegment).MLength;
    *param_8 = -1;
    local_f8 = (double)fVar1;
    bVar8 = Raycasts::RayCapsule
                      ((TVector<double,3> *)&local_d8,(TVector<double,3> *)&local_f0,
                       dVar15 * param_3,(double)fVar14 * param_4,(double)fVar2,(double)fVar3,
                       (TVector<double,3> *)&local_108,(TVector<double,3> *)&local_120,
                       (TVector<double,3> *)&local_138,&local_res8,(TVector<double,3> *)&local_c0,
                       (TVector<double,3> *)&local_a8);
    if (bVar8) {
      local_res8 = local_res8 * dVar7;
      if (local_res8 == 0.0) {
        uVar4 = *(undefined8 *)&param_1->field_0x8;
        *(undefined8 *)param_6 = *(undefined8 *)param_1;
        *(undefined8 *)&param_6->field_0x8 = uVar4;
        *(undefined8 *)&param_6->field_0x10 = *(undefined8 *)&param_1->field_0x10;
        uVar10 = *(uint *)&param_2->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar11 = *(uint *)&param_2->field_0x8 ^ _UNK_15066df78;
        uVar12 = *(uint *)&param_2->field_0xc ^ _UNK_15066df7c;
        uVar13 = (uint)*(undefined8 *)&param_2->field_0x10 ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar16 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        *(uint *)param_7 = *(uint *)param_2 ^ (uint)__xmm_80000000000000008000000000000000;
        *(uint *)&param_7->field_0x4 = uVar10;
        *(uint *)&param_7->field_0x8 = uVar11;
        *(uint *)&param_7->field_0xc = uVar12;
        *(ulonglong *)&param_7->field_0x10 = CONCAT44(uVar16,uVar13);
        *param_5 = local_res8;
        return true;
      }
      if (local_res8 < param_3) {
        fVar14 = *(float *)((longlong)&this->_padding_ + 4);
        fVar1 = *(float *)&this->_padding_;
        *(double *)param_6 = (double)((float)local_c0 * *(float *)&this->_padding_);
        *(double *)&param_6->field_0x8 = (double)((float)local_b8 * fVar14);
        *(double *)&param_6->field_0x10 = (double)((float)local_b0 * fVar1);
        fStack_144 = (float)local_a0 * *(float *)&this->_padding_;
        uVar17 = (float)local_a8 * *(float *)((longlong)&this->_padding_ + 4);
        local_140 = (float)local_98 * *(float *)((longlong)&this->_padding_ + 4);
        fVar14 = (float)uVar17 * (float)uVar17 + fStack_144 * fStack_144 + local_140 * local_140;
        if (fVar14 != __real_3f800000) {
          if (__real_00800000 <= fVar14) {
            fVar14 = __real_3f800000 / SQRT(fVar14);
            fStack_144 = fVar14 * fStack_144;
            local_140 = fVar14 * local_140;
            uVar17 = fVar14 * (float)uVar17;
          }
          else {
            fStack_144 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
            local_140 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          }
        }
        *(double *)param_7 = (double)(float)uVar17;
        *(double *)&param_7->field_0x8 = (double)fStack_144;
        *(double *)&param_7->field_0x10 = (double)local_140;
        *param_5 = local_res8;
        return true;
      }
    }
  }
  else {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351449>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x267,"LengthScale > TNumericLimits<FReal>::Min()");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
  }
  return false;
}

// Raycast @ 1438c7740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::Raycast
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,double param_4,double *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  double dVar12;
  uint uVar14;
  undefined1 auVar13 [16];
  undefined8 in_XMM3_Qb;
  undefined1 auVar15 [16];
  float fVar16;
  double local_res8;
  float fStack_d4;
  float local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  
  auVar15._8_8_ = in_XMM3_Qb;
  auVar15._0_8_ = param_3;
  if ((param_3 <= 0.0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351456>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x260,"Length > 0"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  dVar3 = __real_3ff0000000000000;
  dVar12 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
           __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351455>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x261,"FMath::IsNearlyEqual(Dir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if (param_4 != 0.0) {
    auVar15 = ZEXT416((uint)__real_322bcc77);
    if (((__real_322bcc77 <
          (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
        (__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
                __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3369118521899351454>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                           ,0x262,
                           "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  local_b0 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_a8 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_a0 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_c8 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_c0 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_b8 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  auVar13._0_8_ = local_c0 * local_c0 + local_c8 * local_c8 + local_b8 * local_b8;
  auVar13._8_8_ = 0;
  auVar15 = sqrtpd(auVar15,auVar13);
  dVar12 = auVar15._0_8_;
  if (__real_0010000000000000 < dVar12) {
    dVar3 = dVar3 / dVar12;
    local_c8 = local_c8 * dVar3;
    local_c0 = local_c0 * dVar3;
    local_b8 = local_b8 * dVar3;
    bVar5 = FConvex::Raycast((this->MObject).Reference,(TVector<double,3> *)&local_b0,
                             (TVector<double,3> *)&local_c8,dVar12 * param_3,
                             (double)*(float *)((longlong)&this->_padding_ + 4) * param_4,
                             &local_res8,(TVector<double,3> *)&local_98,
                             (TVector<double,3> *)&local_80,param_8);
    if (bVar5) {
      local_res8 = local_res8 * dVar3;
      if (local_res8 == 0.0) {
        uVar4 = *(undefined8 *)&param_1->field_0x8;
        *(undefined8 *)param_6 = *(undefined8 *)param_1;
        *(undefined8 *)&param_6->field_0x8 = uVar4;
        *(undefined8 *)&param_6->field_0x10 = *(undefined8 *)&param_1->field_0x10;
        uVar7 = *(uint *)&param_2->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar8 = *(uint *)&param_2->field_0x8 ^ _UNK_15066df78;
        uVar9 = *(uint *)&param_2->field_0xc ^ _UNK_15066df7c;
        uVar10 = (uint)*(undefined8 *)&param_2->field_0x10 ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar14 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        *(uint *)param_7 = *(uint *)param_2 ^ (uint)__xmm_80000000000000008000000000000000;
        *(uint *)&param_7->field_0x4 = uVar7;
        *(uint *)&param_7->field_0x8 = uVar8;
        *(uint *)&param_7->field_0xc = uVar9;
        *(ulonglong *)&param_7->field_0x10 = CONCAT44(uVar14,uVar10);
        *param_5 = local_res8;
        return true;
      }
      if (local_res8 < param_3) {
        fVar16 = *(float *)((longlong)&this->_padding_ + 4);
        fVar1 = *(float *)&this->_padding_;
        *(double *)param_6 = (double)((float)local_98 * *(float *)&this->_padding_);
        *(double *)&param_6->field_0x8 = (double)((float)local_90 * fVar16);
        *(double *)&param_6->field_0x10 = (double)((float)local_88 * fVar1);
        fStack_d4 = (float)local_78 * *(float *)&this->_padding_;
        uVar11 = (float)local_80 * *(float *)((longlong)&this->_padding_ + 4);
        local_d0 = (float)local_70 * *(float *)((longlong)&this->_padding_ + 4);
        fVar16 = (float)uVar11 * (float)uVar11 + fStack_d4 * fStack_d4 + local_d0 * local_d0;
        if (fVar16 != __real_3f800000) {
          if (__real_00800000 <= fVar16) {
            fVar16 = __real_3f800000 / SQRT(fVar16);
            fStack_d4 = fStack_d4 * fVar16;
            local_d0 = local_d0 * fVar16;
            uVar11 = (float)uVar11 * fVar16;
          }
          else {
            fStack_d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
            local_d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          }
        }
        *(double *)param_7 = (double)(float)uVar11;
        *(double *)&param_7->field_0x8 = (double)fStack_d4;
        *(double *)&param_7->field_0x10 = (double)local_d0;
        *param_5 = local_res8;
        return true;
      }
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351449>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x267,"LengthScale > TNumericLimits<FReal>::Min()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  return false;
}

// Serialize @ 1438d1050

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::Serialize
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,FChaosArchive *param_1)

{
  byte bVar1;
  int iVar2;
  FChaosArchive *pFVar3;
  FArchive *pFVar4;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  pFVar3 = operator<<<Chaos::TBox<double,3>_>(param_1,&this->MObject);
  pFVar4 = operator<<<3>((FArchive *)pFVar3,(TVector<float,3> *)&this->_padding_);
  operator<<<3>(pFVar4,(TVector<float,3> *)((longlong)&this->_padding_ + 4));
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,(TAABB<double,3> *)&this->_padding_);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar2 < 0xc) {
    bVar1 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
    *(byte *)&this->_padding_ = bVar1 | 0x80;
  }
  return;
}

// Serialize @ 1438d1110

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::Serialize
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,FChaosArchive *param_1)

{
  byte bVar1;
  int iVar2;
  FChaosArchive *pFVar3;
  FArchive *pFVar4;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  pFVar3 = operator<<<Chaos::TSphere<double,3>_>(param_1,&this->MObject);
  pFVar4 = operator<<<3>((FArchive *)pFVar3,(TVector<float,3> *)&this->_padding_);
  operator<<<3>(pFVar4,(TVector<float,3> *)((longlong)&this->_padding_ + 4));
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,(TAABB<double,3> *)&this->_padding_);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar2 < 0xc) {
    bVar1 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
    *(byte *)&this->_padding_ = bVar1 | 0x80;
  }
  return;
}

// Serialize @ 1438d11d0

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::Serialize
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,FChaosArchive *param_1)

{
  byte bVar1;
  int iVar2;
  FChaosArchive *pFVar3;
  FArchive *pFVar4;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  pFVar3 = operator<<<Chaos::FCapsule>(param_1,&this->MObject);
  pFVar4 = operator<<<3>((FArchive *)pFVar3,(TVector<float,3> *)&this->_padding_);
  operator<<<3>(pFVar4,(TVector<float,3> *)((longlong)&this->_padding_ + 4));
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,(TAABB<double,3> *)&this->_padding_);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar2 < 0xc) {
    bVar1 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
    *(byte *)&this->_padding_ = bVar1 | 0x80;
  }
  return;
}

// Serialize @ 1438d1290

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::Serialize
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,FChaosArchive *param_1)

{
  byte bVar1;
  int iVar2;
  FChaosArchive *pFVar3;
  FArchive *pFVar4;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  pFVar3 = operator<<<Chaos::FConvex>(param_1,&this->MObject);
  pFVar4 = operator<<<3>((FArchive *)pFVar3,(TVector<float,3> *)&this->_padding_);
  operator<<<3>(pFVar4,(TVector<float,3> *)((longlong)&this->_padding_ + 4));
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,(TAABB<double,3> *)&this->_padding_);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar2 < 0xc) {
    bVar1 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
    *(byte *)&this->_padding_ = bVar1 | 0x80;
  }
  return;
}

// SetScale @ 1438d40c0

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::SetScale
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,TVector<double,3> *param_1)

{
  TBox<double,3> *pTVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  fVar10 = __real_358637bd;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar13 = *(double *)&param_1->field_0x8;
  dVar9 = *(double *)&param_1->field_0x10;
  fVar2 = (float)*(double *)param_1;
  if ((float)((uint)(float)*(double *)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      __real_358637bd) {
    fVar2 = __real_358637bd;
  }
  *(float *)&this->_padding_ = fVar2;
  fVar3 = __real_3f800000;
  *(float *)((longlong)&this->_padding_ + 4) = __real_3f800000 / fVar2;
  fVar12 = (float)dVar13;
  if ((float)((uint)(float)dVar13 & uVar4) < fVar10) {
    fVar12 = fVar10;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar12;
  *(float *)&this->_padding_ = fVar3 / fVar12;
  if (fVar10 <= (float)((uint)(float)dVar9 & uVar4)) {
    fVar10 = (float)dVar9;
  }
  *(float *)&this->_padding_ = fVar10;
  *(float *)((longlong)&this->_padding_ + 4) = fVar3 / fVar10;
  pTVar1 = (this->MObject).Reference;
  *(float *)&this->_padding_ = fVar2 * *(float *)&pTVar1->_padding_ + *(float *)&this->_padding_;
  dVar13 = *(double *)&(pTVar1->AABB).MMax.field_0x10;
  dVar15 = *(double *)&(pTVar1->AABB).MMax;
  dVar14 = *(double *)&(pTVar1->AABB).MMax.field_0x8;
  dVar7 = (double)fVar2 * *(double *)&(pTVar1->AABB).MMin;
  dVar11 = (double)*(float *)((longlong)&this->_padding_ + 4) *
           *(double *)&(pTVar1->AABB).MMin.field_0x8;
  dVar9 = (double)*(float *)&this->_padding_ * *(double *)&(pTVar1->AABB).MMin.field_0x10;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar11;
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar11;
  this->_padding_ = (longlong)dVar9;
  dVar15 = (double)*(float *)&this->_padding_ * dVar15;
  dVar14 = (double)*(float *)((longlong)&this->_padding_ + 4) * dVar14;
  dVar7 = dVar15;
  if ((double)this->_padding_ <= dVar15) {
    dVar7 = (double)this->_padding_;
  }
  dVar13 = (double)*(float *)&this->_padding_ * dVar13;
  dVar8 = dVar14;
  if (dVar11 <= dVar14) {
    dVar8 = dVar11;
  }
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar8;
  dVar7 = dVar13;
  if (dVar9 <= dVar13) {
    dVar7 = dVar9;
  }
  this->_padding_ = (longlong)dVar7;
  dVar9 = (double)this->_padding_;
  uVar5 = SUB84(dVar9,0);
  uVar6 = (undefined4)((ulonglong)dVar9 >> 0x20);
  if (dVar9 <= dVar15) {
    uVar5 = SUB84(dVar15,0);
    uVar6 = (undefined4)((ulonglong)dVar15 >> 0x20);
  }
  dVar9 = (double)this->_padding_;
  if ((double)this->_padding_ <= dVar14) {
    dVar9 = dVar14;
  }
  dVar7 = (double)this->_padding_;
  if ((double)this->_padding_ <= dVar13) {
    dVar7 = dVar13;
  }
  this->_padding_ = CONCAT44(uVar6,uVar5);
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar7;
  return;
}

// SetScale @ 1438d4280

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::SetScale
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,TVector<double,3> *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  TSphere<double,3> *pTVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  
  fVar10 = __real_358637bd;
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar9 = *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  fVar5 = (float)*(double *)param_1;
  if ((float)((uint)(float)*(double *)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      __real_358637bd) {
    fVar5 = __real_358637bd;
  }
  *(float *)&this->_padding_ = fVar5;
  fVar1 = __real_3f800000;
  *(float *)((longlong)&this->_padding_ + 4) = __real_3f800000 / fVar5;
  fVar12 = (float)dVar9;
  if ((float)((uint)(float)dVar9 & uVar6) < fVar10) {
    fVar12 = fVar10;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar12;
  *(float *)&this->_padding_ = fVar1 / fVar12;
  if (fVar10 <= (float)((uint)(float)dVar3 & uVar6)) {
    fVar10 = (float)dVar3;
  }
  *(float *)&this->_padding_ = fVar10;
  *(float *)((longlong)&this->_padding_ + 4) = fVar1 / fVar10;
  pTVar4 = (this->MObject).Reference;
  *(float *)&this->_padding_ = fVar5 * *(float *)&pTVar4->_padding_ + *(float *)&this->_padding_;
  fVar10 = *(float *)&pTVar4->_padding_;
  fVar1 = *(float *)&(pTVar4->Center).field_0x8;
  fVar12 = *(float *)&pTVar4->Center;
  fVar2 = *(float *)&(pTVar4->Center).field_0x4;
  dVar3 = (double)(fVar1 - fVar10) * (double)*(float *)&this->_padding_;
  dVar9 = (double)(fVar2 - fVar10) * (double)*(float *)((longlong)&this->_padding_ + 4);
  dVar11 = (double)(fVar12 - fVar10) * (double)fVar5;
  this->_padding_ = (longlong)dVar11;
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar3;
  this->_padding_ = (longlong)dVar11;
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar3;
  dVar14 = (double)(fVar12 + fVar10) * (double)*(float *)&this->_padding_;
  dVar11 = dVar14;
  if ((double)this->_padding_ <= dVar14) {
    dVar11 = (double)this->_padding_;
  }
  dVar13 = (double)(fVar2 + fVar10) * (double)*(float *)((longlong)&this->_padding_ + 4);
  this->_padding_ = (longlong)dVar11;
  if (dVar13 <= dVar9) {
    dVar9 = dVar13;
  }
  dVar11 = (double)(fVar1 + fVar10) * (double)*(float *)&this->_padding_;
  this->_padding_ = (longlong)dVar9;
  if (dVar11 <= dVar3) {
    dVar3 = dVar11;
  }
  this->_padding_ = (longlong)dVar3;
  dVar9 = (double)this->_padding_;
  uVar7 = SUB84(dVar9,0);
  uVar8 = (undefined4)((ulonglong)dVar9 >> 0x20);
  if (dVar9 <= dVar13) {
    uVar7 = SUB84(dVar13,0);
    uVar8 = (undefined4)((ulonglong)dVar13 >> 0x20);
  }
  if (dVar14 <= (double)this->_padding_) {
    dVar14 = (double)this->_padding_;
  }
  dVar9 = (double)this->_padding_;
  if ((double)this->_padding_ <= dVar11) {
    dVar9 = dVar11;
  }
  this->_padding_ = (longlong)dVar14;
  this->_padding_ = CONCAT44(uVar8,uVar7);
  this->_padding_ = (longlong)dVar9;
  return;
}

// SetScale @ 1438d4470

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::SetScale
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,TVector<double,3> *param_1)

{
  FCapsule *this_00;
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  
  fVar7 = __real_358637bd;
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar6 = *(double *)&param_1->field_0x8;
  dVar5 = *(double *)&param_1->field_0x10;
  fVar8 = (float)*(double *)param_1;
  if ((float)((uint)(float)*(double *)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      __real_358637bd) {
    fVar8 = __real_358637bd;
  }
  *(float *)&this->_padding_ = fVar8;
  fVar1 = __real_3f800000;
  *(float *)((longlong)&this->_padding_ + 4) = __real_3f800000 / fVar8;
  fVar9 = (float)dVar6;
  if ((float)((uint)(float)dVar6 & uVar2) < fVar7) {
    fVar9 = fVar7;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar9;
  *(float *)&this->_padding_ = fVar1 / fVar9;
  if (fVar7 <= (float)((uint)(float)dVar5 & uVar2)) {
    fVar7 = (float)dVar5;
  }
  *(float *)&this->_padding_ = fVar7;
  *(float *)((longlong)&this->_padding_ + 4) = fVar1 / fVar7;
  this_00 = (this->MObject).Reference;
  *(float *)&this->_padding_ = fVar8 * *(float *)&this_00->_padding_ + *(float *)&this->_padding_;
  FCapsule::BoundingBox(this_00,(TAABB<double,3> *)&local_88);
  local_88 = (double)*(float *)&this->_padding_ * local_88;
  local_78 = (double)*(float *)&this->_padding_ * local_78;
  local_80 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_80;
  this->_padding_ = (longlong)local_88;
  this->_padding_ = (longlong)local_80;
  this->_padding_ = (longlong)local_78;
  this->_padding_ = (longlong)local_88;
  this->_padding_ = (longlong)local_80;
  this->_padding_ = (longlong)local_78;
  local_70 = (double)*(float *)&this->_padding_ * local_70;
  local_68 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_68;
  dVar6 = local_70;
  if ((double)this->_padding_ <= local_70) {
    dVar6 = (double)this->_padding_;
  }
  local_60 = (double)*(float *)&this->_padding_ * local_60;
  dVar5 = local_68;
  if (local_80 <= local_68) {
    dVar5 = local_80;
  }
  this->_padding_ = (longlong)dVar6;
  this->_padding_ = (longlong)dVar5;
  dVar6 = local_60;
  if (local_78 <= local_60) {
    dVar6 = local_78;
  }
  this->_padding_ = (longlong)dVar6;
  dVar6 = (double)this->_padding_;
  uVar3 = SUB84(dVar6,0);
  uVar4 = (int)((ulonglong)dVar6 >> 0x20);
  if (dVar6 <= local_68) {
    uVar3 = SUB84(local_68,0);
    uVar4 = (int)((ulonglong)local_68 >> 0x20);
  }
  if (local_70 <= (double)this->_padding_) {
    local_70 = (double)this->_padding_;
  }
  dVar6 = (double)this->_padding_;
  if ((double)this->_padding_ <= local_60) {
    dVar6 = local_60;
  }
  this->_padding_ = (longlong)local_70;
  this->_padding_ = CONCAT44(uVar4,uVar3);
  this->_padding_ = (longlong)dVar6;
  return;
}

// SetScale @ 1438d4630

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::SetScale
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,TVector<double,3> *param_1)

{
  float fVar1;
  float fVar2;
  FConvex *pFVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  
  fVar10 = __real_358637bd;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar9 = *(double *)&param_1->field_0x8;
  dVar8 = *(double *)&param_1->field_0x10;
  fVar2 = (float)*(double *)param_1;
  if ((float)((uint)(float)*(double *)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      __real_358637bd) {
    fVar2 = __real_358637bd;
  }
  *(float *)&this->_padding_ = fVar2;
  fVar1 = __real_3f800000;
  *(float *)((longlong)&this->_padding_ + 4) = __real_3f800000 / fVar2;
  fVar13 = (float)dVar9;
  if ((float)((uint)(float)dVar9 & uVar4) < fVar10) {
    fVar13 = fVar10;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar13;
  *(float *)&this->_padding_ = fVar1 / fVar13;
  if (fVar10 <= (float)((uint)(float)dVar8 & uVar4)) {
    fVar10 = (float)dVar8;
  }
  *(float *)&this->_padding_ = fVar10;
  *(float *)((longlong)&this->_padding_ + 4) = fVar1 / fVar10;
  pFVar3 = (this->MObject).Reference;
  *(float *)&this->_padding_ = fVar2 * *(float *)&pFVar3->_padding_ + *(float *)&this->_padding_;
  fVar10 = *(float *)&(pFVar3->LocalBoundingBox).MMax;
  fVar1 = *(float *)&(pFVar3->LocalBoundingBox).MMax.field_0x4;
  fVar13 = *(float *)&(pFVar3->LocalBoundingBox).MMax.field_0x8;
  dVar8 = (double)*(float *)&(pFVar3->LocalBoundingBox).MMin.field_0x8 *
          (double)*(float *)&this->_padding_;
  dVar9 = (double)*(float *)&(pFVar3->LocalBoundingBox).MMin.field_0x4 *
          (double)*(float *)((longlong)&this->_padding_ + 4);
  dVar7 = (double)*(float *)&(pFVar3->LocalBoundingBox).MMin * (double)fVar2;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar8;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar8;
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  dVar14 = (double)*(float *)&this->_padding_ * (double)fVar10;
  dVar7 = dVar14;
  if ((double)this->_padding_ <= dVar14) {
    dVar7 = (double)this->_padding_;
  }
  dVar11 = (double)*(float *)&this->_padding_ * (double)fVar13;
  this->_padding_ = (longlong)dVar7;
  dVar7 = dVar11;
  if (dVar8 <= dVar11) {
    dVar7 = dVar8;
  }
  dVar12 = (double)fVar2 * (double)fVar1;
  dVar8 = dVar12;
  if (dVar9 <= dVar12) {
    dVar8 = dVar9;
  }
  this->_padding_ = (longlong)dVar8;
  this->_padding_ = (longlong)dVar7;
  dVar9 = (double)this->_padding_;
  uVar5 = SUB84(dVar9,0);
  uVar6 = (int)((ulonglong)dVar9 >> 0x20);
  if (dVar9 <= dVar12) {
    uVar5 = SUB84(dVar12,0);
    uVar6 = (int)((ulonglong)dVar12 >> 0x20);
  }
  if (dVar14 <= (double)this->_padding_) {
    dVar14 = (double)this->_padding_;
  }
  dVar9 = (double)this->_padding_;
  if ((double)this->_padding_ <= dVar11) {
    dVar9 = dVar11;
  }
  this->_padding_ = (longlong)dVar14;
  this->_padding_ = CONCAT44(uVar6,uVar5);
  this->_padding_ = (longlong)dVar9;
  return;
}

// ToString @ 1438d8bf0

FString * __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::ToString
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,FString *__return_storage_ptr__)

{
  FString local_58 [5];
  
  TBox<double,3>::ToString((this->MObject).Reference,local_58);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f");
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 1438d8cc0

FString * __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::ToString
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,FString *__return_storage_ptr__)

{
  FString local_78;
  FString local_68 [6];
  
  ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(local_68,L"Sphere: Center:%s, Radius:%f");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f");
  if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 1438d8e10

FString * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::ToString
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,FString *__return_storage_ptr__)

{
  FString local_58 [5];
  
  ::FString::PrintfImpl(local_58,L"Capsule: Height: %f Radius: %f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f");
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 1438d8f00

FString * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::ToString
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,FString *__return_storage_ptr__)

{
  FString local_58 [5];
  
  ::FString::PrintfImpl(local_58,L"Convex: Verts: %d, Edges %d, Planes: %d, Margin %f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f");
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GJKContactPoint<Chaos::TBox<double,3>_> @ 143998e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
GJKContactPoint<Chaos::TBox<double,3>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,TBox<double,3> *param_1
          ,TRigidTransform<double,3> *param_2,double param_3,TVector<double,3> *param_4,
          TVector<double,3> *param_5,double *param_6,int *param_7)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  uchar uVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_158 [21];
  bool local_143;
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  ulonglong local_124;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  TRefCountPtr<Chaos::TBox<double,3>_> local_e8;
  undefined1 local_d8 [40];
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_178 = *(double *)&param_2->field_0x20;
  dStack_170 = *(double *)&param_2->field_0x28;
  local_168 = *(double *)&param_2->field_0x30;
  local_d8._0_8_ = *(undefined8 *)param_2;
  local_d8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_d8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_d8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  local_1a8 = (double)*(float *)&this->_padding_;
  local_1b0 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_d8._32_8_ = local_178 * local_1b0;
  local_1a0 = (double)*(float *)((longlong)&this->_padding_ + 4);
  dStack_b0 = dStack_170 * local_1a8;
  local_a8 = local_168 * local_1a0;
  uStack_a0 = 0;
  local_88 = ___xmm_00000000000000003ff0000000000000;
  uStack_80 = _UNK_150689518;
  local_98 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_90 = _UNK_150689688;
  bVar4 = FImplicitObject::GetType((FImplicitObject *)param_1);
  FImplicitObject::FImplicitObject((FImplicitObject *)local_158,2,bVar4 | 0x80);
  local_138 = ___xmm_3f8000003f8000003f8000003f800000;
  lStack_130 = _UNK_15076b1f8;
  local_118 = ___xmm_7fefffffffffffff7fefffffffffffff;
  lStack_110 = _UNK_150a9e648;
  local_f8 = ___xmm_ffefffffffffffffffefffffffffffff;
  lStack_f0 = _UNK_1508ffb58;
  local_128 = 0x3f800000;
  local_124 = 0x3f800000;
  local_108 = ___xmm_ffefffffffffffff7fefffffffffffff;
  lStack_100 = _UNK_150a9e6d8;
  local_158._0_8_ = &___7__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__6B_;
  if (param_1 != (TBox<double,3> *)0x0) {
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    UNLOCK();
    if ((int)param_1->_padding_ == 1) {
      LOCK();
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
      UNLOCK();
    }
  }
  local_e8.Reference = param_1;
  uVar5 = FImplicitObject::GetType((FImplicitObject *)param_1);
  if ((char)uVar5 < '\0') {
    local_1b8 = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(&local_1b8);
  }
  bVar4 = FImplicitObject::GetType((FImplicitObject *)local_e8.Reference);
  if ((bVar4 & 0x40) != 0) {
    local_1b7[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_1b7);
  }
  uVar5 = FImplicitObject::GetType((FImplicitObject *)local_e8.Reference);
  if ((uVar5 == '\x04') || (uVar5 == '\x05')) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  local_158[0x14] = *(undefined1 *)((longlong)&(local_e8.Reference)->_padding_ + 4);
  local_143 = *(bool *)((longlong)&(local_e8.Reference)->_padding_ + 5);
  local_124 = local_124 & 0xffffffff;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1>::SetScale
            ((TImplicitObjectScaled<Chaos::TBox<double,3>,1> *)local_158,
             (TVector<double,3> *)&local_1b0);
  local_198 = (double)*(float *)&this->_padding_;
  local_190 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_188 = (double)*(float *)&this->_padding_;
  bVar6 = FTriangleMeshImplicitObject::GJKContactPoint
                    ((this->MObject).Reference,
                     (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *)local_158,
                     (TRigidTransform<double,3> *)local_d8,param_3,param_4,param_5,param_6,param_7,
                     (TVector<double,3> *)&local_198);
  local_158._0_8_ = &___7__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__6B_;
  if (local_e8.Reference != (TBox<double,3> *)0x0) {
    LOCK();
    plVar1 = &(local_e8.Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&(local_e8.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_e8.Reference)->_padding_)(local_e8.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)local_158);
  return bVar6;
}

// GJKContactPoint<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 143999110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
GJKContactPoint<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,TRigidTransform<double,3> *param_2
          ,double param_3,TVector<double,3> *param_4,TVector<double,3> *param_5,double *param_6,
          int *param_7)

{
  longlong *plVar1;
  TBox<double,3> *this_00;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  undefined1 auStackY_1d8 [32];
  double local_178;
  double local_170;
  double local_168;
  int *local_158;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> local_148;
  undefined1 local_c8 [40];
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_c8._0_8_ = *(undefined8 *)param_2;
  local_c8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_c8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_c8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  this_00 = (param_1->MObject).Reference;
  local_158 = param_7;
  local_178 = (double)*(float *)((longlong)&this->_padding_ + 4);
  dStack_a0 = *(double *)&param_2->field_0x28 * (double)*(float *)&this->_padding_;
  local_c8._32_8_ = *(double *)&param_2->field_0x20 * local_178;
  local_168 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_98 = *(double *)&param_2->field_0x30 * local_168;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  uStack_90 = 0;
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  local_178 = (double)*(float *)&param_1->_padding_ * local_178;
  local_170 = (double)*(float *)((longlong)&param_1->_padding_ + 4) *
              (double)*(float *)&this->_padding_;
  local_168 = (double)*(float *)&param_1->_padding_ * local_168;
  if (this_00 != (TBox<double,3> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  bVar3 = FImplicitObject::GetType((FImplicitObject *)this_00);
  FImplicitObject::FImplicitObject((FImplicitObject *)&local_148,2,bVar3 | 0x80);
  local_148._padding_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_148._padding_ = _UNK_15076b1f8;
  local_148._padding_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e648;
  local_148._padding_ = ___xmm_ffefffffffffffffffefffffffffffff;
  local_148._padding_ = _UNK_1508ffb58;
  local_148._padding_._0_4_ = 0x3f800000;
  local_148._52_8_ = 0x3f800000;
  local_148._padding_ = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e6d8;
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__6B_;
  local_148.MObject.Reference = this_00;
  if (this_00 == (TBox<double,3> *)0x0) {
    TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_178,0.0);
  }
  else {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_178,0.0);
    LOCK();
    plVar1 = &this_00->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  local_178 = (double)*(float *)&this->_padding_;
  local_170 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_168 = (double)*(float *)&this->_padding_;
  bVar4 = FTriangleMeshImplicitObject::GJKContactPoint
                    ((this->MObject).Reference,&local_148,(TRigidTransform<double,3> *)local_c8,
                     param_3,param_4,param_5,param_6,local_158,(TVector<double,3> *)&local_178);
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__6B_;
  if (local_148.MObject.Reference != (TBox<double,3> *)0x0) {
    LOCK();
    plVar1 = &(local_148.MObject.Reference)->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) &&
       (*(int *)((longlong)&(local_148.MObject.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_148.MObject.Reference)->_padding_)(local_148.MObject.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)&local_148);
  return bVar4;
}

// GJKContactPoint<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 1439993c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
GJKContactPoint<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2,double param_3,TVector<double,3> *param_4,
          TVector<double,3> *param_5,double *param_6,int *param_7)

{
  longlong *plVar1;
  TSphere<double,3> *this_00;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  undefined1 auStackY_1d8 [32];
  double local_178;
  double local_170;
  double local_168;
  int *local_158;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> local_148;
  undefined1 local_c8 [40];
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_c8._0_8_ = *(undefined8 *)param_2;
  local_c8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_c8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_c8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  this_00 = (param_1->MObject).Reference;
  local_158 = param_7;
  local_178 = (double)*(float *)((longlong)&this->_padding_ + 4);
  dStack_a0 = *(double *)&param_2->field_0x28 * (double)*(float *)&this->_padding_;
  local_c8._32_8_ = *(double *)&param_2->field_0x20 * local_178;
  local_168 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_98 = *(double *)&param_2->field_0x30 * local_168;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  uStack_90 = 0;
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  local_178 = (double)*(float *)&param_1->_padding_ * local_178;
  local_170 = (double)*(float *)((longlong)&param_1->_padding_ + 4) *
              (double)*(float *)&this->_padding_;
  local_168 = (double)*(float *)&param_1->_padding_ * local_168;
  if (this_00 != (TSphere<double,3> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  bVar3 = FImplicitObject::GetType((FImplicitObject *)this_00);
  FImplicitObject::FImplicitObject((FImplicitObject *)&local_148,2,bVar3 | 0x80);
  local_148._padding_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_148._padding_ = _UNK_15076b1f8;
  local_148._padding_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e648;
  local_148._padding_ = ___xmm_ffefffffffffffffffefffffffffffff;
  local_148._padding_ = _UNK_1508ffb58;
  local_148._padding_._0_4_ = 0x3f800000;
  local_148._52_8_ = 0x3f800000;
  local_148._padding_ = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e6d8;
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__6B_
  ;
  local_148.MObject.Reference = this_00;
  if (this_00 == (TSphere<double,3> *)0x0) {
    TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_178,0.0);
  }
  else {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_178,0.0);
    LOCK();
    plVar1 = &this_00->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  local_178 = (double)*(float *)&this->_padding_;
  local_170 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_168 = (double)*(float *)&this->_padding_;
  bVar4 = FTriangleMeshImplicitObject::GJKContactPoint
                    ((this->MObject).Reference,&local_148,(TRigidTransform<double,3> *)local_c8,
                     param_3,param_4,param_5,param_6,local_158,(TVector<double,3> *)&local_178);
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__6B_
  ;
  if (local_148.MObject.Reference != (TSphere<double,3> *)0x0) {
    LOCK();
    plVar1 = &(local_148.MObject.Reference)->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) &&
       (*(int *)((longlong)&(local_148.MObject.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_148.MObject.Reference)->_padding_)(local_148.MObject.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)&local_148);
  return bVar4;
}

// GJKContactPoint<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 143999670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
GJKContactPoint<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,TRigidTransform<double,3> *param_2,
          double param_3,TVector<double,3> *param_4,TVector<double,3> *param_5,double *param_6,
          int *param_7)

{
  longlong *plVar1;
  FCapsule *this_00;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  undefined1 auStackY_1d8 [32];
  double local_178;
  double local_170;
  double local_168;
  int *local_158;
  TImplicitObjectScaled<Chaos::FCapsule,1> local_148;
  undefined1 local_c8 [40];
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_c8._0_8_ = *(undefined8 *)param_2;
  local_c8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_c8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_c8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  this_00 = (param_1->MObject).Reference;
  local_158 = param_7;
  local_178 = (double)*(float *)((longlong)&this->_padding_ + 4);
  dStack_a0 = *(double *)&param_2->field_0x28 * (double)*(float *)&this->_padding_;
  local_c8._32_8_ = *(double *)&param_2->field_0x20 * local_178;
  local_168 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_98 = *(double *)&param_2->field_0x30 * local_168;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  uStack_90 = 0;
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  local_178 = (double)*(float *)&param_1->_padding_ * local_178;
  local_170 = (double)*(float *)((longlong)&param_1->_padding_ + 4) *
              (double)*(float *)&this->_padding_;
  local_168 = (double)*(float *)&param_1->_padding_ * local_168;
  if (this_00 != (FCapsule *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  bVar3 = FImplicitObject::GetType((FImplicitObject *)this_00);
  FImplicitObject::FImplicitObject((FImplicitObject *)&local_148,2,bVar3 | 0x80);
  local_148._padding_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_148._padding_ = _UNK_15076b1f8;
  local_148._padding_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e648;
  local_148._padding_ = ___xmm_ffefffffffffffffffefffffffffffff;
  local_148._padding_ = _UNK_1508ffb58;
  local_148._padding_._0_4_ = 0x3f800000;
  local_148._52_8_ = 0x3f800000;
  local_148._padding_ = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e6d8;
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__6B_;
  local_148.MObject.Reference = this_00;
  if (this_00 == (FCapsule *)0x0) {
    TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_178,0.0);
  }
  else {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_178,0.0);
    LOCK();
    plVar1 = &this_00->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  local_178 = (double)*(float *)&this->_padding_;
  local_170 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_168 = (double)*(float *)&this->_padding_;
  bVar4 = FTriangleMeshImplicitObject::GJKContactPoint
                    ((this->MObject).Reference,&local_148,(TRigidTransform<double,3> *)local_c8,
                     param_3,param_4,param_5,param_6,local_158,(TVector<double,3> *)&local_178);
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__6B_;
  if (local_148.MObject.Reference != (FCapsule *)0x0) {
    LOCK();
    plVar1 = &(local_148.MObject.Reference)->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) &&
       (*(int *)((longlong)&(local_148.MObject.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_148.MObject.Reference)->_padding_)(local_148.MObject.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)&local_148);
  return bVar4;
}

// GJKContactPoint<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 143999920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
GJKContactPoint<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::FConvex,1> *param_1,TRigidTransform<double,3> *param_2,
          double param_3,TVector<double,3> *param_4,TVector<double,3> *param_5,double *param_6,
          int *param_7)

{
  longlong *plVar1;
  FConvex *this_00;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  undefined1 auStackY_1d8 [32];
  double local_178;
  double local_170;
  double local_168;
  int *local_158;
  TImplicitObjectScaled<Chaos::FConvex,1> local_148;
  undefined1 local_c8 [40];
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_c8._0_8_ = *(undefined8 *)param_2;
  local_c8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_c8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_c8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  this_00 = (param_1->MObject).Reference;
  local_158 = param_7;
  local_178 = (double)*(float *)((longlong)&this->_padding_ + 4);
  dStack_a0 = *(double *)&param_2->field_0x28 * (double)*(float *)&this->_padding_;
  local_c8._32_8_ = *(double *)&param_2->field_0x20 * local_178;
  local_168 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_98 = *(double *)&param_2->field_0x30 * local_168;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  uStack_90 = 0;
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  local_178 = (double)*(float *)&param_1->_padding_ * local_178;
  local_170 = (double)*(float *)((longlong)&param_1->_padding_ + 4) *
              (double)*(float *)&this->_padding_;
  local_168 = (double)*(float *)&param_1->_padding_ * local_168;
  if (this_00 != (FConvex *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  bVar3 = FImplicitObject::GetType((FImplicitObject *)this_00);
  FImplicitObject::FImplicitObject((FImplicitObject *)&local_148,2,bVar3 | 0x80);
  local_148._padding_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_148._padding_ = _UNK_15076b1f8;
  local_148._padding_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e648;
  local_148._padding_ = ___xmm_ffefffffffffffffffefffffffffffff;
  local_148._padding_ = _UNK_1508ffb58;
  local_148._padding_._0_4_ = 0x3f800000;
  local_148._52_8_ = 0x3f800000;
  local_148._padding_ = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_148._padding_ = _UNK_150a9e6d8;
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__6B_;
  local_148.MObject.Reference = this_00;
  if (this_00 == (FConvex *)0x0) {
    TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_178,0.0);
  }
  else {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit
              (&local_148,(TVector<double,3> *)&local_178,0.0);
    LOCK();
    plVar1 = &this_00->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  local_178 = (double)*(float *)&this->_padding_;
  local_170 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_168 = (double)*(float *)&this->_padding_;
  bVar4 = FTriangleMeshImplicitObject::GJKContactPoint
                    ((this->MObject).Reference,&local_148,(TRigidTransform<double,3> *)local_c8,
                     param_3,param_4,param_5,param_6,local_158,(TVector<double,3> *)&local_178);
  local_148._padding_ = (longlong)&___7__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__6B_;
  if (local_148.MObject.Reference != (FConvex *)0x0) {
    LOCK();
    plVar1 = &(local_148.MObject.Reference)->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) &&
       (*(int *)((longlong)&(local_148.MObject.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_148.MObject.Reference)->_padding_)(local_148.MObject.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)&local_148);
  return bVar4;
}

// GJKContactPoint<Chaos::TSphere<double,3>_> @ 143999bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
GJKContactPoint<Chaos::TSphere<double,3>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TSphere<double,3> *param_1,TRigidTransform<double,3> *param_2,double param_3,
          TVector<double,3> *param_4,TVector<double,3> *param_5,double *param_6,int *param_7)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  uchar uVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_158 [21];
  bool local_143;
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  ulonglong local_124;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  TRefCountPtr<Chaos::TSphere<double,3>_> local_e8;
  undefined1 local_d8 [40];
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_178 = *(double *)&param_2->field_0x20;
  dStack_170 = *(double *)&param_2->field_0x28;
  local_168 = *(double *)&param_2->field_0x30;
  local_d8._0_8_ = *(undefined8 *)param_2;
  local_d8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_d8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_d8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  local_1a8 = (double)*(float *)&this->_padding_;
  local_1b0 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_d8._32_8_ = local_178 * local_1b0;
  local_1a0 = (double)*(float *)((longlong)&this->_padding_ + 4);
  dStack_b0 = dStack_170 * local_1a8;
  local_a8 = local_168 * local_1a0;
  uStack_a0 = 0;
  local_88 = ___xmm_00000000000000003ff0000000000000;
  uStack_80 = _UNK_150689518;
  local_98 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_90 = _UNK_150689688;
  bVar4 = FImplicitObject::GetType((FImplicitObject *)param_1);
  FImplicitObject::FImplicitObject((FImplicitObject *)local_158,2,bVar4 | 0x80);
  local_138 = ___xmm_3f8000003f8000003f8000003f800000;
  lStack_130 = _UNK_15076b1f8;
  local_118 = ___xmm_7fefffffffffffff7fefffffffffffff;
  lStack_110 = _UNK_150a9e648;
  local_f8 = ___xmm_ffefffffffffffffffefffffffffffff;
  lStack_f0 = _UNK_1508ffb58;
  local_128 = 0x3f800000;
  local_124 = 0x3f800000;
  local_108 = ___xmm_ffefffffffffffff7fefffffffffffff;
  lStack_100 = _UNK_150a9e6d8;
  local_158._0_8_ = &___7__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__6B_;
  if (param_1 != (TSphere<double,3> *)0x0) {
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    UNLOCK();
    if ((int)param_1->_padding_ == 1) {
      LOCK();
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
      UNLOCK();
    }
  }
  local_e8.Reference = param_1;
  uVar5 = FImplicitObject::GetType((FImplicitObject *)param_1);
  if ((char)uVar5 < '\0') {
    local_1b8 = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit'::__l2::<lambda_1>
    ::operator()(&local_1b8);
  }
  bVar4 = FImplicitObject::GetType((FImplicitObject *)local_e8.Reference);
  if ((bVar4 & 0x40) != 0) {
    local_1b7[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit'::__l2::<lambda_2>
    ::operator()(local_1b7);
  }
  uVar5 = FImplicitObject::GetType((FImplicitObject *)local_e8.Reference);
  if ((uVar5 == '\x04') || (uVar5 == '\x05')) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  local_158[0x14] = *(undefined1 *)((longlong)&(local_e8.Reference)->_padding_ + 4);
  local_143 = *(bool *)((longlong)&(local_e8.Reference)->_padding_ + 5);
  local_124 = local_124 & 0xffffffff;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::SetScale
            ((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_158,
             (TVector<double,3> *)&local_1b0);
  local_198 = (double)*(float *)&this->_padding_;
  local_190 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_188 = (double)*(float *)&this->_padding_;
  bVar6 = FTriangleMeshImplicitObject::GJKContactPoint
                    ((this->MObject).Reference,
                     (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_158,
                     (TRigidTransform<double,3> *)local_d8,param_3,param_4,param_5,param_6,param_7,
                     (TVector<double,3> *)&local_198);
  local_158._0_8_ = &___7__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__6B_;
  if (local_e8.Reference != (TSphere<double,3> *)0x0) {
    LOCK();
    plVar1 = &(local_e8.Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&(local_e8.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_e8.Reference)->_padding_)(local_e8.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)local_158);
  return bVar6;
}

// GJKContactPoint<Chaos::FCapsule> @ 143999ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::GJKContactPoint<Chaos::FCapsule>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,FCapsule *param_1,
          TRigidTransform<double,3> *param_2,double param_3,TVector<double,3> *param_4,
          TVector<double,3> *param_5,double *param_6,int *param_7)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  uchar uVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_158 [21];
  bool local_143;
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  ulonglong local_124;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  TRefCountPtr<Chaos::FCapsule> local_e8;
  undefined1 local_d8 [40];
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_178 = *(double *)&param_2->field_0x20;
  dStack_170 = *(double *)&param_2->field_0x28;
  local_168 = *(double *)&param_2->field_0x30;
  local_d8._0_8_ = *(undefined8 *)param_2;
  local_d8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_d8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_d8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  local_1a8 = (double)*(float *)&this->_padding_;
  local_1b0 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_d8._32_8_ = local_178 * local_1b0;
  local_1a0 = (double)*(float *)((longlong)&this->_padding_ + 4);
  dStack_b0 = dStack_170 * local_1a8;
  local_a8 = local_168 * local_1a0;
  uStack_a0 = 0;
  local_88 = ___xmm_00000000000000003ff0000000000000;
  uStack_80 = _UNK_150689518;
  local_98 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_90 = _UNK_150689688;
  bVar4 = FImplicitObject::GetType((FImplicitObject *)param_1);
  FImplicitObject::FImplicitObject((FImplicitObject *)local_158,2,bVar4 | 0x80);
  local_138 = ___xmm_3f8000003f8000003f8000003f800000;
  lStack_130 = _UNK_15076b1f8;
  local_118 = ___xmm_7fefffffffffffff7fefffffffffffff;
  lStack_110 = _UNK_150a9e648;
  local_f8 = ___xmm_ffefffffffffffffffefffffffffffff;
  lStack_f0 = _UNK_1508ffb58;
  local_128 = 0x3f800000;
  local_124 = 0x3f800000;
  local_108 = ___xmm_ffefffffffffffff7fefffffffffffff;
  lStack_100 = _UNK_150a9e6d8;
  local_158._0_8_ = &___7__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__6B_;
  if (param_1 != (FCapsule *)0x0) {
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    UNLOCK();
    if ((int)param_1->_padding_ == 1) {
      LOCK();
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
      UNLOCK();
    }
  }
  local_e8.Reference = param_1;
  uVar5 = FImplicitObject::GetType((FImplicitObject *)param_1);
  if ((char)uVar5 < '\0') {
    local_1b8 = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(&local_1b8);
  }
  bVar4 = FImplicitObject::GetType((FImplicitObject *)local_e8.Reference);
  if ((bVar4 & 0x40) != 0) {
    local_1b7[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_1b7);
  }
  uVar5 = FImplicitObject::GetType((FImplicitObject *)local_e8.Reference);
  if ((uVar5 == '\x04') || (uVar5 == '\x05')) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  local_158[0x14] = *(undefined1 *)((longlong)&(local_e8.Reference)->_padding_ + 4);
  local_143 = *(bool *)((longlong)&(local_e8.Reference)->_padding_ + 5);
  local_124 = local_124 & 0xffffffff;
  TImplicitObjectScaled<Chaos::FCapsule,1>::SetScale
            ((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_158,(TVector<double,3> *)&local_1b0);
  local_198 = (double)*(float *)&this->_padding_;
  local_190 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_188 = (double)*(float *)&this->_padding_;
  bVar6 = FTriangleMeshImplicitObject::GJKContactPoint
                    ((this->MObject).Reference,(TImplicitObjectScaled<Chaos::FCapsule,1> *)local_158
                     ,(TRigidTransform<double,3> *)local_d8,param_3,param_4,param_5,param_6,param_7,
                     (TVector<double,3> *)&local_198);
  local_158._0_8_ = &___7__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__6B_;
  if (local_e8.Reference != (FCapsule *)0x0) {
    LOCK();
    plVar1 = &(local_e8.Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&(local_e8.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_e8.Reference)->_padding_)(local_e8.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)local_158);
  return bVar6;
}

// GJKContactPoint<Chaos::FConvex> @ 14399a1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::GJKContactPoint<Chaos::FConvex>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,FConvex *param_1,
          TRigidTransform<double,3> *param_2,double param_3,TVector<double,3> *param_4,
          TVector<double,3> *param_5,double *param_6,int *param_7)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  uchar uVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_158 [21];
  bool local_143;
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  ulonglong local_124;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  TRefCountPtr<Chaos::FConvex> local_e8;
  undefined1 local_d8 [40];
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_178 = *(double *)&param_2->field_0x20;
  dStack_170 = *(double *)&param_2->field_0x28;
  local_168 = *(double *)&param_2->field_0x30;
  local_d8._0_8_ = *(undefined8 *)param_2;
  local_d8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_d8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_d8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  local_1a8 = (double)*(float *)&this->_padding_;
  local_1b0 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_d8._32_8_ = local_178 * local_1b0;
  local_1a0 = (double)*(float *)((longlong)&this->_padding_ + 4);
  dStack_b0 = dStack_170 * local_1a8;
  local_a8 = local_168 * local_1a0;
  uStack_a0 = 0;
  local_88 = ___xmm_00000000000000003ff0000000000000;
  uStack_80 = _UNK_150689518;
  local_98 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_90 = _UNK_150689688;
  bVar4 = FImplicitObject::GetType((FImplicitObject *)param_1);
  FImplicitObject::FImplicitObject((FImplicitObject *)local_158,2,bVar4 | 0x80);
  local_138 = ___xmm_3f8000003f8000003f8000003f800000;
  lStack_130 = _UNK_15076b1f8;
  local_118 = ___xmm_7fefffffffffffff7fefffffffffffff;
  lStack_110 = _UNK_150a9e648;
  local_f8 = ___xmm_ffefffffffffffffffefffffffffffff;
  lStack_f0 = _UNK_1508ffb58;
  local_128 = 0x3f800000;
  local_124 = 0x3f800000;
  local_108 = ___xmm_ffefffffffffffff7fefffffffffffff;
  lStack_100 = _UNK_150a9e6d8;
  local_158._0_8_ = &___7__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__6B_;
  if (param_1 != (FConvex *)0x0) {
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    UNLOCK();
    if ((int)param_1->_padding_ == 1) {
      LOCK();
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
      UNLOCK();
    }
  }
  local_e8.Reference = param_1;
  uVar5 = FImplicitObject::GetType((FImplicitObject *)param_1);
  if ((char)uVar5 < '\0') {
    local_1b8 = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(&local_1b8);
  }
  bVar4 = FImplicitObject::GetType((FImplicitObject *)local_e8.Reference);
  if ((bVar4 & 0x40) != 0) {
    local_1b7[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_1b7);
  }
  uVar5 = FImplicitObject::GetType((FImplicitObject *)local_e8.Reference);
  if ((uVar5 == '\x04') || (uVar5 == '\x05')) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  local_158[0x14] = *(undefined1 *)((longlong)&(local_e8.Reference)->_padding_ + 4);
  local_143 = *(bool *)((longlong)&(local_e8.Reference)->_padding_ + 5);
  local_124 = local_124 & 0xffffffff;
  TImplicitObjectScaled<Chaos::FConvex,1>::SetScale
            ((TImplicitObjectScaled<Chaos::FConvex,1> *)local_158,(TVector<double,3> *)&local_1b0);
  local_198 = (double)*(float *)&this->_padding_;
  local_190 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_188 = (double)*(float *)&this->_padding_;
  bVar6 = FTriangleMeshImplicitObject::GJKContactPoint
                    ((this->MObject).Reference,(TImplicitObjectScaled<Chaos::FConvex,1> *)local_158,
                     (TRigidTransform<double,3> *)local_d8,param_3,param_4,param_5,param_6,param_7,
                     (TVector<double,3> *)&local_198);
  local_158._0_8_ = &___7__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__6B_;
  if (local_e8.Reference != (FConvex *)0x0) {
    LOCK();
    plVar1 = &(local_e8.Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&(local_e8.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_e8.Reference)->_padding_)(local_e8.Reference,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)local_158);
  return bVar6;
}

// LowLevelSweepGeomCCD<Chaos::TBox<double,3>_> @ 1439aadc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeomCCD<Chaos::TBox<double,3>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,TBox<double,3> *param_1
          ,TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double param_5,double param_6,double *param_7,double *param_8,TVector<double,3> *param_9,
          TVector<double,3> *param_10,int *param_11,TVector<double,3> *param_12)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  double dVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar12 [16];
  undefined1 auStackY_208 [32];
  float fStack_194;
  float local_190;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_e8 [40];
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_4 <= 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351372>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b4,"Length > 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar11 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar7 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
       (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351371>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b5,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_148 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_140 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_138 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_140 * local_140 + local_148 * local_148 + local_138 * local_138;
  auVar12 = sqrtpd(unaff_XMM9,auVar12);
  dVar11 = auVar12._0_8_;
  if (__real_0010000000000000 < dVar11) {
    local_e8._0_8_ = *(undefined8 *)param_2;
    local_e8._8_8_ = *(undefined8 *)&param_2->field_0x8;
    dVar6 = dVar3 / dVar11;
    local_148 = local_148 * dVar6;
    local_140 = local_140 * dVar6;
    local_138 = local_138 * dVar6;
    local_e8._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_e8._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_e8._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dStack_c0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_b8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_a8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_a0 = _UNK_150689688;
    local_160 = (double)*(float *)&this->_padding_;
    uStack_b0 = 0;
    local_158 = (double)*(float *)((longlong)&this->_padding_ + 4);
    local_98 = ___xmm_00000000000000003ff0000000000000;
    uStack_90 = _UNK_150689518;
    local_150 = (double)*(float *)&this->_padding_;
    bVar4 = FTriangleMeshImplicitObject::SweepGeomCCD
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_e8,
                       (TVector<double,3> *)&local_148,dVar11 * param_4,param_5,param_6,&local_170,
                       &local_168,(TVector<double,3> *)&local_130,(TVector<double,3> *)&local_118,
                       param_11,param_12,(TVector<double,3> *)&local_160);
    if ((bVar4) && (local_170 < dVar3)) {
      *param_7 = local_170;
      *param_8 = local_168;
      fVar8 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_9 = (double)((float)local_130 * *(float *)&this->_padding_);
      *(double *)&param_9->field_0x8 = (double)((float)local_128 * fVar8);
      *(double *)&param_9->field_0x10 = (double)((float)local_120 * fVar1);
      fStack_194 = (float)local_110 * *(float *)&this->_padding_;
      uVar10 = (float)local_118 * *(float *)((longlong)&this->_padding_ + 4);
      local_190 = (float)local_108 * *(float *)((longlong)&this->_padding_ + 4);
      fVar8 = (float)uVar10 * (float)uVar10 + fStack_194 * fStack_194 + local_190 * local_190;
      if (fVar8 != __real_3f800000) {
        if (__real_322bcc77 <= fVar8) {
          fVar8 = __real_3f800000 / SQRT(fVar8);
          fStack_194 = fStack_194 * fVar8;
          local_190 = local_190 * fVar8;
          uVar10 = (float)uVar10 * fVar8;
        }
        else {
          fStack_194 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_190 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_10 = (double)(float)uVar10;
      *(double *)&param_10->field_0x8 = (double)fStack_194;
      *(double *)&param_10->field_0x10 = (double)local_190;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351367>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x2b9,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeomCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 1439ab240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeomCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,TRigidTransform<double,3> *param_2
          ,TVector<double,3> *param_3,double param_4,double param_5,double param_6,double *param_7,
          double *param_8,TVector<double,3> *param_9,TVector<double,3> *param_10,int *param_11,
          TVector<double,3> *param_12)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  double dVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar12 [16];
  undefined1 auStackY_208 [32];
  float fStack_194;
  float local_190;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_e8 [40];
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_4 <= 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351372>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b4,"Length > 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar11 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar7 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
       (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351371>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b5,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_148 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_140 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_138 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_140 * local_140 + local_148 * local_148 + local_138 * local_138;
  auVar12 = sqrtpd(unaff_XMM9,auVar12);
  dVar11 = auVar12._0_8_;
  if (__real_0010000000000000 < dVar11) {
    local_e8._0_8_ = *(undefined8 *)param_2;
    local_e8._8_8_ = *(undefined8 *)&param_2->field_0x8;
    dVar6 = dVar3 / dVar11;
    local_148 = local_148 * dVar6;
    local_140 = local_140 * dVar6;
    local_138 = local_138 * dVar6;
    local_e8._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_e8._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_e8._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dStack_c0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_b8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_a8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_a0 = _UNK_150689688;
    local_160 = (double)*(float *)&this->_padding_;
    uStack_b0 = 0;
    local_158 = (double)*(float *)((longlong)&this->_padding_ + 4);
    local_98 = ___xmm_00000000000000003ff0000000000000;
    uStack_90 = _UNK_150689518;
    local_150 = (double)*(float *)&this->_padding_;
    bVar4 = FTriangleMeshImplicitObject::SweepGeomCCD
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_e8,
                       (TVector<double,3> *)&local_148,dVar11 * param_4,param_5,param_6,&local_170,
                       &local_168,(TVector<double,3> *)&local_130,(TVector<double,3> *)&local_118,
                       param_11,param_12,(TVector<double,3> *)&local_160);
    if ((bVar4) && (local_170 < dVar3)) {
      *param_7 = local_170;
      *param_8 = local_168;
      fVar8 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_9 = (double)((float)local_130 * *(float *)&this->_padding_);
      *(double *)&param_9->field_0x8 = (double)((float)local_128 * fVar8);
      *(double *)&param_9->field_0x10 = (double)((float)local_120 * fVar1);
      fStack_194 = (float)local_110 * *(float *)&this->_padding_;
      uVar10 = (float)local_118 * *(float *)((longlong)&this->_padding_ + 4);
      local_190 = (float)local_108 * *(float *)((longlong)&this->_padding_ + 4);
      fVar8 = (float)uVar10 * (float)uVar10 + fStack_194 * fStack_194 + local_190 * local_190;
      if (fVar8 != __real_3f800000) {
        if (__real_322bcc77 <= fVar8) {
          fVar8 = __real_3f800000 / SQRT(fVar8);
          fStack_194 = fStack_194 * fVar8;
          local_190 = local_190 * fVar8;
          uVar10 = (float)uVar10 * fVar8;
        }
        else {
          fStack_194 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_190 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_10 = (double)(float)uVar10;
      *(double *)&param_10->field_0x8 = (double)fStack_194;
      *(double *)&param_10->field_0x10 = (double)local_190;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351367>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x2b9,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeomCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 1439ab6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeomCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double param_5,double param_6,double *param_7,double *param_8,TVector<double,3> *param_9,
          TVector<double,3> *param_10,int *param_11,TVector<double,3> *param_12)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  double dVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar12 [16];
  undefined1 auStackY_208 [32];
  float fStack_194;
  float local_190;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_e8 [40];
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_4 <= 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351372>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b4,"Length > 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar11 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar7 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
       (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351371>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b5,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_148 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_140 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_138 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_140 * local_140 + local_148 * local_148 + local_138 * local_138;
  auVar12 = sqrtpd(unaff_XMM9,auVar12);
  dVar11 = auVar12._0_8_;
  if (__real_0010000000000000 < dVar11) {
    local_e8._0_8_ = *(undefined8 *)param_2;
    local_e8._8_8_ = *(undefined8 *)&param_2->field_0x8;
    dVar6 = dVar3 / dVar11;
    local_148 = local_148 * dVar6;
    local_140 = local_140 * dVar6;
    local_138 = local_138 * dVar6;
    local_e8._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_e8._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_e8._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dStack_c0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_b8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_a8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_a0 = _UNK_150689688;
    local_160 = (double)*(float *)&this->_padding_;
    uStack_b0 = 0;
    local_158 = (double)*(float *)((longlong)&this->_padding_ + 4);
    local_98 = ___xmm_00000000000000003ff0000000000000;
    uStack_90 = _UNK_150689518;
    local_150 = (double)*(float *)&this->_padding_;
    bVar4 = FTriangleMeshImplicitObject::SweepGeomCCD
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_e8,
                       (TVector<double,3> *)&local_148,dVar11 * param_4,param_5,param_6,&local_170,
                       &local_168,(TVector<double,3> *)&local_130,(TVector<double,3> *)&local_118,
                       param_11,param_12,(TVector<double,3> *)&local_160);
    if ((bVar4) && (local_170 < dVar3)) {
      *param_7 = local_170;
      *param_8 = local_168;
      fVar8 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_9 = (double)((float)local_130 * *(float *)&this->_padding_);
      *(double *)&param_9->field_0x8 = (double)((float)local_128 * fVar8);
      *(double *)&param_9->field_0x10 = (double)((float)local_120 * fVar1);
      fStack_194 = (float)local_110 * *(float *)&this->_padding_;
      uVar10 = (float)local_118 * *(float *)((longlong)&this->_padding_ + 4);
      local_190 = (float)local_108 * *(float *)((longlong)&this->_padding_ + 4);
      fVar8 = (float)uVar10 * (float)uVar10 + fStack_194 * fStack_194 + local_190 * local_190;
      if (fVar8 != __real_3f800000) {
        if (__real_322bcc77 <= fVar8) {
          fVar8 = __real_3f800000 / SQRT(fVar8);
          fStack_194 = fStack_194 * fVar8;
          local_190 = local_190 * fVar8;
          uVar10 = (float)uVar10 * fVar8;
        }
        else {
          fStack_194 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_190 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_10 = (double)(float)uVar10;
      *(double *)&param_10->field_0x8 = (double)fStack_194;
      *(double *)&param_10->field_0x10 = (double)local_190;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351367>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x2b9,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeomCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 1439abb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeomCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,double param_4,double param_5,double param_6,double *param_7,
          double *param_8,TVector<double,3> *param_9,TVector<double,3> *param_10,int *param_11,
          TVector<double,3> *param_12)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  double dVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar12 [16];
  undefined1 auStackY_208 [32];
  float fStack_194;
  float local_190;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_e8 [40];
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_4 <= 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351372>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b4,"Length > 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar11 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar7 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
       (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351371>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b5,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_148 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_140 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_138 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_140 * local_140 + local_148 * local_148 + local_138 * local_138;
  auVar12 = sqrtpd(unaff_XMM9,auVar12);
  dVar11 = auVar12._0_8_;
  if (__real_0010000000000000 < dVar11) {
    local_e8._0_8_ = *(undefined8 *)param_2;
    local_e8._8_8_ = *(undefined8 *)&param_2->field_0x8;
    dVar6 = dVar3 / dVar11;
    local_148 = local_148 * dVar6;
    local_140 = local_140 * dVar6;
    local_138 = local_138 * dVar6;
    local_e8._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_e8._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_e8._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dStack_c0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_b8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_a8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_a0 = _UNK_150689688;
    local_160 = (double)*(float *)&this->_padding_;
    uStack_b0 = 0;
    local_158 = (double)*(float *)((longlong)&this->_padding_ + 4);
    local_98 = ___xmm_00000000000000003ff0000000000000;
    uStack_90 = _UNK_150689518;
    local_150 = (double)*(float *)&this->_padding_;
    bVar4 = FTriangleMeshImplicitObject::SweepGeomCCD
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_e8,
                       (TVector<double,3> *)&local_148,dVar11 * param_4,param_5,param_6,&local_170,
                       &local_168,(TVector<double,3> *)&local_130,(TVector<double,3> *)&local_118,
                       param_11,param_12,(TVector<double,3> *)&local_160);
    if ((bVar4) && (local_170 < dVar3)) {
      *param_7 = local_170;
      *param_8 = local_168;
      fVar8 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_9 = (double)((float)local_130 * *(float *)&this->_padding_);
      *(double *)&param_9->field_0x8 = (double)((float)local_128 * fVar8);
      *(double *)&param_9->field_0x10 = (double)((float)local_120 * fVar1);
      fStack_194 = (float)local_110 * *(float *)&this->_padding_;
      uVar10 = (float)local_118 * *(float *)((longlong)&this->_padding_ + 4);
      local_190 = (float)local_108 * *(float *)((longlong)&this->_padding_ + 4);
      fVar8 = (float)uVar10 * (float)uVar10 + fStack_194 * fStack_194 + local_190 * local_190;
      if (fVar8 != __real_3f800000) {
        if (__real_322bcc77 <= fVar8) {
          fVar8 = __real_3f800000 / SQRT(fVar8);
          fStack_194 = fStack_194 * fVar8;
          local_190 = local_190 * fVar8;
          uVar10 = (float)uVar10 * fVar8;
        }
        else {
          fStack_194 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_190 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_10 = (double)(float)uVar10;
      *(double *)&param_10->field_0x8 = (double)fStack_194;
      *(double *)&param_10->field_0x10 = (double)local_190;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351367>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x2b9,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeomCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 1439abfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeomCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::FConvex,1> *param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,double param_4,double param_5,double param_6,double *param_7,
          double *param_8,TVector<double,3> *param_9,TVector<double,3> *param_10,int *param_11,
          TVector<double,3> *param_12)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  double dVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar12 [16];
  undefined1 auStackY_208 [32];
  float fStack_194;
  float local_190;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_e8 [40];
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_4 <= 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351372>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b4,"Length > 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar11 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar7 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
       (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351371>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b5,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_148 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_140 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_138 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_140 * local_140 + local_148 * local_148 + local_138 * local_138;
  auVar12 = sqrtpd(unaff_XMM9,auVar12);
  dVar11 = auVar12._0_8_;
  if (__real_0010000000000000 < dVar11) {
    local_e8._0_8_ = *(undefined8 *)param_2;
    local_e8._8_8_ = *(undefined8 *)&param_2->field_0x8;
    dVar6 = dVar3 / dVar11;
    local_148 = local_148 * dVar6;
    local_140 = local_140 * dVar6;
    local_138 = local_138 * dVar6;
    local_e8._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_e8._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_e8._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dStack_c0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_b8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_a8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_a0 = _UNK_150689688;
    local_160 = (double)*(float *)&this->_padding_;
    uStack_b0 = 0;
    local_158 = (double)*(float *)((longlong)&this->_padding_ + 4);
    local_98 = ___xmm_00000000000000003ff0000000000000;
    uStack_90 = _UNK_150689518;
    local_150 = (double)*(float *)&this->_padding_;
    bVar4 = FTriangleMeshImplicitObject::SweepGeomCCD
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_e8,
                       (TVector<double,3> *)&local_148,dVar11 * param_4,param_5,param_6,&local_170,
                       &local_168,(TVector<double,3> *)&local_130,(TVector<double,3> *)&local_118,
                       param_11,param_12,(TVector<double,3> *)&local_160);
    if ((bVar4) && (local_170 < dVar3)) {
      *param_7 = local_170;
      *param_8 = local_168;
      fVar8 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_9 = (double)((float)local_130 * *(float *)&this->_padding_);
      *(double *)&param_9->field_0x8 = (double)((float)local_128 * fVar8);
      *(double *)&param_9->field_0x10 = (double)((float)local_120 * fVar1);
      fStack_194 = (float)local_110 * *(float *)&this->_padding_;
      uVar10 = (float)local_118 * *(float *)((longlong)&this->_padding_ + 4);
      local_190 = (float)local_108 * *(float *)((longlong)&this->_padding_ + 4);
      fVar8 = (float)uVar10 * (float)uVar10 + fStack_194 * fStack_194 + local_190 * local_190;
      if (fVar8 != __real_3f800000) {
        if (__real_322bcc77 <= fVar8) {
          fVar8 = __real_3f800000 / SQRT(fVar8);
          fStack_194 = fStack_194 * fVar8;
          local_190 = local_190 * fVar8;
          uVar10 = (float)uVar10 * fVar8;
        }
        else {
          fStack_194 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_190 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_10 = (double)(float)uVar10;
      *(double *)&param_10->field_0x8 = (double)fStack_194;
      *(double *)&param_10->field_0x10 = (double)local_190;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351367>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x2b9,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeomCCD<Chaos::TSphere<double,3>_> @ 1439ac440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeomCCD<Chaos::TSphere<double,3>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TSphere<double,3> *param_1,TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,
          double param_4,double param_5,double param_6,double *param_7,double *param_8,
          TVector<double,3> *param_9,TVector<double,3> *param_10,int *param_11,
          TVector<double,3> *param_12)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  double dVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar12 [16];
  undefined1 auStackY_208 [32];
  float fStack_194;
  float local_190;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_e8 [40];
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_4 <= 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351372>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b4,"Length > 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar11 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar7 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
       (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351371>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b5,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_148 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_140 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_138 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_140 * local_140 + local_148 * local_148 + local_138 * local_138;
  auVar12 = sqrtpd(unaff_XMM9,auVar12);
  dVar11 = auVar12._0_8_;
  if (__real_0010000000000000 < dVar11) {
    local_e8._0_8_ = *(undefined8 *)param_2;
    local_e8._8_8_ = *(undefined8 *)&param_2->field_0x8;
    dVar6 = dVar3 / dVar11;
    local_148 = local_148 * dVar6;
    local_140 = local_140 * dVar6;
    local_138 = local_138 * dVar6;
    local_e8._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_e8._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_e8._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dStack_c0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_b8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_a8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_a0 = _UNK_150689688;
    local_160 = (double)*(float *)&this->_padding_;
    uStack_b0 = 0;
    local_158 = (double)*(float *)((longlong)&this->_padding_ + 4);
    local_98 = ___xmm_00000000000000003ff0000000000000;
    uStack_90 = _UNK_150689518;
    local_150 = (double)*(float *)&this->_padding_;
    bVar4 = FTriangleMeshImplicitObject::SweepGeomCCD
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_e8,
                       (TVector<double,3> *)&local_148,dVar11 * param_4,param_5,param_6,&local_170,
                       &local_168,(TVector<double,3> *)&local_130,(TVector<double,3> *)&local_118,
                       param_11,param_12,(TVector<double,3> *)&local_160);
    if ((bVar4) && (local_170 < dVar3)) {
      *param_7 = local_170;
      *param_8 = local_168;
      fVar8 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_9 = (double)((float)local_130 * *(float *)&this->_padding_);
      *(double *)&param_9->field_0x8 = (double)((float)local_128 * fVar8);
      *(double *)&param_9->field_0x10 = (double)((float)local_120 * fVar1);
      fStack_194 = (float)local_110 * *(float *)&this->_padding_;
      uVar10 = (float)local_118 * *(float *)((longlong)&this->_padding_ + 4);
      local_190 = (float)local_108 * *(float *)((longlong)&this->_padding_ + 4);
      fVar8 = (float)uVar10 * (float)uVar10 + fStack_194 * fStack_194 + local_190 * local_190;
      if (fVar8 != __real_3f800000) {
        if (__real_322bcc77 <= fVar8) {
          fVar8 = __real_3f800000 / SQRT(fVar8);
          fStack_194 = fStack_194 * fVar8;
          local_190 = local_190 * fVar8;
          uVar10 = (float)uVar10 * fVar8;
        }
        else {
          fStack_194 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_190 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_10 = (double)(float)uVar10;
      *(double *)&param_10->field_0x8 = (double)fStack_194;
      *(double *)&param_10->field_0x10 = (double)local_190;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351367>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x2b9,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeomCCD<Chaos::FCapsule> @ 1439ac8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeomCCD<Chaos::FCapsule>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,FCapsule *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double param_5,double param_6,double *param_7,double *param_8,TVector<double,3> *param_9,
          TVector<double,3> *param_10,int *param_11,TVector<double,3> *param_12)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  double dVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar12 [16];
  undefined1 auStackY_208 [32];
  float fStack_194;
  float local_190;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_e8 [40];
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_4 <= 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351372>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b4,"Length > 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar11 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar7 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
       (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351371>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b5,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_148 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_140 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_138 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_140 * local_140 + local_148 * local_148 + local_138 * local_138;
  auVar12 = sqrtpd(unaff_XMM9,auVar12);
  dVar11 = auVar12._0_8_;
  if (__real_0010000000000000 < dVar11) {
    local_e8._0_8_ = *(undefined8 *)param_2;
    local_e8._8_8_ = *(undefined8 *)&param_2->field_0x8;
    dVar6 = dVar3 / dVar11;
    local_148 = local_148 * dVar6;
    local_140 = local_140 * dVar6;
    local_138 = local_138 * dVar6;
    local_e8._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_e8._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_e8._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dStack_c0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_b8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_a8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_a0 = _UNK_150689688;
    local_160 = (double)*(float *)&this->_padding_;
    uStack_b0 = 0;
    local_158 = (double)*(float *)((longlong)&this->_padding_ + 4);
    local_98 = ___xmm_00000000000000003ff0000000000000;
    uStack_90 = _UNK_150689518;
    local_150 = (double)*(float *)&this->_padding_;
    bVar4 = FTriangleMeshImplicitObject::SweepGeomCCD
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_e8,
                       (TVector<double,3> *)&local_148,dVar11 * param_4,param_5,param_6,&local_170,
                       &local_168,(TVector<double,3> *)&local_130,(TVector<double,3> *)&local_118,
                       param_11,param_12,(TVector<double,3> *)&local_160);
    if ((bVar4) && (local_170 < dVar3)) {
      *param_7 = local_170;
      *param_8 = local_168;
      fVar8 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_9 = (double)((float)local_130 * *(float *)&this->_padding_);
      *(double *)&param_9->field_0x8 = (double)((float)local_128 * fVar8);
      *(double *)&param_9->field_0x10 = (double)((float)local_120 * fVar1);
      fStack_194 = (float)local_110 * *(float *)&this->_padding_;
      uVar10 = (float)local_118 * *(float *)((longlong)&this->_padding_ + 4);
      local_190 = (float)local_108 * *(float *)((longlong)&this->_padding_ + 4);
      fVar8 = (float)uVar10 * (float)uVar10 + fStack_194 * fStack_194 + local_190 * local_190;
      if (fVar8 != __real_3f800000) {
        if (__real_322bcc77 <= fVar8) {
          fVar8 = __real_3f800000 / SQRT(fVar8);
          fStack_194 = fStack_194 * fVar8;
          local_190 = local_190 * fVar8;
          uVar10 = (float)uVar10 * fVar8;
        }
        else {
          fStack_194 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_190 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_10 = (double)(float)uVar10;
      *(double *)&param_10->field_0x8 = (double)fStack_194;
      *(double *)&param_10->field_0x10 = (double)local_190;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351367>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x2b9,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeomCCD<Chaos::FConvex> @ 1439acd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeomCCD<Chaos::FConvex>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,FConvex *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double param_5,double param_6,double *param_7,double *param_8,TVector<double,3> *param_9,
          TVector<double,3> *param_10,int *param_11,TVector<double,3> *param_12)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  double dVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar12 [16];
  undefined1 auStackY_208 [32];
  float fStack_194;
  float local_190;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_e8 [40];
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_4 <= 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351372>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b4,"Length > 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar11 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar7 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
       (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351371>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x2b5,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_148 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_140 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_138 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_140 * local_140 + local_148 * local_148 + local_138 * local_138;
  auVar12 = sqrtpd(unaff_XMM9,auVar12);
  dVar11 = auVar12._0_8_;
  if (__real_0010000000000000 < dVar11) {
    local_e8._0_8_ = *(undefined8 *)param_2;
    local_e8._8_8_ = *(undefined8 *)&param_2->field_0x8;
    dVar6 = dVar3 / dVar11;
    local_148 = local_148 * dVar6;
    local_140 = local_140 * dVar6;
    local_138 = local_138 * dVar6;
    local_e8._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_e8._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_e8._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dStack_c0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_b8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_a8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_a0 = _UNK_150689688;
    local_160 = (double)*(float *)&this->_padding_;
    uStack_b0 = 0;
    local_158 = (double)*(float *)((longlong)&this->_padding_ + 4);
    local_98 = ___xmm_00000000000000003ff0000000000000;
    uStack_90 = _UNK_150689518;
    local_150 = (double)*(float *)&this->_padding_;
    bVar4 = FTriangleMeshImplicitObject::SweepGeomCCD
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_e8,
                       (TVector<double,3> *)&local_148,dVar11 * param_4,param_5,param_6,&local_170,
                       &local_168,(TVector<double,3> *)&local_130,(TVector<double,3> *)&local_118,
                       param_11,param_12,(TVector<double,3> *)&local_160);
    if ((bVar4) && (local_170 < dVar3)) {
      *param_7 = local_170;
      *param_8 = local_168;
      fVar8 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_9 = (double)((float)local_130 * *(float *)&this->_padding_);
      *(double *)&param_9->field_0x8 = (double)((float)local_128 * fVar8);
      *(double *)&param_9->field_0x10 = (double)((float)local_120 * fVar1);
      fStack_194 = (float)local_110 * *(float *)&this->_padding_;
      uVar10 = (float)local_118 * *(float *)((longlong)&this->_padding_ + 4);
      local_190 = (float)local_108 * *(float *)((longlong)&this->_padding_ + 4);
      fVar8 = (float)uVar10 * (float)uVar10 + fStack_194 * fStack_194 + local_190 * local_190;
      if (fVar8 != __real_3f800000) {
        if (__real_322bcc77 <= fVar8) {
          fVar8 = __real_3f800000 / SQRT(fVar8);
          fStack_194 = fStack_194 * fVar8;
          local_190 = local_190 * fVar8;
          uVar10 = (float)uVar10 * fVar8;
        }
        else {
          fStack_194 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_190 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_10 = (double)(float)uVar10;
      *(double *)&param_10->field_0x8 = (double)fStack_194;
      *(double *)&param_10->field_0x10 = (double)local_190;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351367>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x2b9,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// GetCenterOfMass @ 1439d2ef0

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::GetCenterOfMass
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,
          TVector<double,3> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  TBox<double,3> *pTVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = __real_3fe0000000000000;
  pTVar3 = (this->MObject).Reference;
  dVar5 = (*(double *)&(pTVar3->AABB).MMax.field_0x8 - *(double *)&(pTVar3->AABB).MMin.field_0x8) *
          __real_3fe0000000000000;
  *(double *)__return_storage_ptr__ =
       (double)((float)((*(double *)&(pTVar3->AABB).MMax - *(double *)&(pTVar3->AABB).MMin) *
                        __real_3fe0000000000000 + *(double *)&(pTVar3->AABB).MMin) *
               *(float *)&this->_padding_);
  dVar1 = *(double *)&(pTVar3->AABB).MMax.field_0x10;
  dVar2 = *(double *)&(pTVar3->AABB).MMin.field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 =
       (double)((float)(dVar5 + *(double *)&(pTVar3->AABB).MMin.field_0x8) *
               *(float *)((longlong)&this->_padding_ + 4));
  *(double *)&__return_storage_ptr__->field_0x10 =
       (double)((float)((dVar1 - dVar2) * dVar4 + *(double *)&(pTVar3->AABB).MMin.field_0x10) *
               *(float *)&this->_padding_);
  return __return_storage_ptr__;
}

// GetMostOpposingPlane @ 1439d3330

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::GetMostOpposingPlane
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,TVector<double,3> *param_1)

{
  int iVar1;
  uint uVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar3;
  
  dVar5 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)param_1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)param_1 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar6 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field_0x8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&param_1->field_0x8 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field_0x10 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&param_1->field_0x10 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if ((dVar6 < dVar5) && (dVar4 < dVar5)) {
    iVar1 = 3;
    if (0.0 <= *(double *)param_1) {
      iVar1 = 0;
    }
    return iVar1;
  }
  uVar3 = (uint)(dVar6 <= dVar4);
  uVar2 = uVar3 + 1;
  uVar3 = uVar3 + 4;
  if (0.0 <= *(double *)(&param_1->field_0x0 + (ulonglong)uVar2 * 8)) {
    uVar3 = uVar2;
  }
  return uVar3;
}

// GetVertex @ 1439d4550

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::GetVertex
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  double local_28;
  double local_20;
  double local_18;
  
  TBox<double,3>::GetVertex((this->MObject).Reference,(TVector<double,3> *)&local_28,param_1);
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)__return_storage_ptr__ = (double)((float)local_28 * *(float *)&this->_padding_);
  fVar2 = *(float *)&this->_padding_;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)((float)local_20 * fVar1);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)((float)local_18 * fVar2);
  return __return_storage_ptr__;
}

// GetVertex @ 1439d45d0

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::GetVertex
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,TVector<double,3> *__return_storage_ptr__,
          int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TVector<float,3> *pTVar5;
  
  pTVar5 = FConvex::GetVertex((this->MObject).Reference,param_1);
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  fVar2 = *(float *)&this->_padding_;
  fVar3 = *(float *)&pTVar5->field_0x4;
  fVar4 = *(float *)&pTVar5->field_0x8;
  *(double *)__return_storage_ptr__ = (double)(*(float *)&this->_padding_ * *(float *)pTVar5);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(fVar1 * fVar3);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(fVar2 * fVar4);
  return __return_storage_ptr__;
}

// LowLevelSweepGeom<Chaos::TBox<double,3>_> @ 1439f2620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeom<Chaos::TBox<double,3>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,TBox<double,3> *param_1
          ,TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,
          TVector<double,3> *param_9,double param_10,bool param_11)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined4 uVar9;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar10 [16];
  undefined1 auStackY_228 [32];
  float fStack_1b4;
  float local_1b0;
  double local_198 [2];
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_108 [40];
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((param_4 < 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351411>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28d,"Length >= 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar8 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
           *(double *)param_3 * *(double *)param_3 +
          *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
          __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351410>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28e,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar7 = __real_322bcc77;
  if ((param_10 != 0.0) &&
     (((__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
      (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3369118521899351409>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                          ,0x28f,
                          "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                         ), bVar4)))) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_168 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_160 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_158 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar10._0_8_ = local_160 * local_160 + local_168 * local_168 + local_158 * local_158;
  auVar10._8_8_ = 0;
  auVar10 = sqrtpd(unaff_XMM11,auVar10);
  dVar8 = auVar10._0_8_;
  if (__real_0010000000000000 < dVar8) {
    local_108._0_8_ = *(undefined8 *)param_2;
    local_108._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_108._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_108._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_108._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dVar3 = dVar3 / dVar8;
    local_168 = local_168 * dVar3;
    dStack_e0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_160 = local_160 * dVar3;
    local_158 = local_158 * dVar3;
    local_d8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_c8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_c0 = _UNK_150689688;
    local_188 = (double)*(float *)&this->_padding_;
    uStack_d0 = 0;
    local_b8 = ___xmm_00000000000000003ff0000000000000;
    uStack_b0 = _UNK_150689518;
    local_178 = (double)*(float *)&this->_padding_;
    local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
    bVar4 = FTriangleMeshImplicitObject::SweepGeom
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_108,
                       (TVector<double,3> *)&local_168,dVar8 * param_4,local_198,
                       (TVector<double,3> *)&local_150,(TVector<double,3> *)&local_138,param_8,
                       param_9,param_10,param_11,(TVector<double,3> *)&local_188);
    if ((bVar4) && (local_198[0] * dVar3 < param_4)) {
      *param_5 = local_198[0] * dVar3;
      fVar6 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_6 = (double)((float)local_150 * *(float *)&this->_padding_);
      *(double *)&param_6->field_0x8 = (double)((float)local_148 * fVar6);
      *(double *)&param_6->field_0x10 = (double)((float)local_140 * fVar1);
      fStack_1b4 = (float)local_130 * *(float *)&this->_padding_;
      uVar9 = (float)local_138 * *(float *)((longlong)&this->_padding_ + 4);
      local_1b0 = (float)local_128 * *(float *)((longlong)&this->_padding_ + 4);
      fVar6 = (float)uVar9 * (float)uVar9 + fStack_1b4 * fStack_1b4 + local_1b0 * local_1b0;
      if (fVar6 != __real_3f800000) {
        if (fVar7 <= fVar6) {
          fVar7 = __real_3f800000 / SQRT(fVar6);
          fStack_1b4 = fStack_1b4 * fVar7;
          local_1b0 = local_1b0 * fVar7;
          uVar9 = (float)uVar9 * fVar7;
        }
        else {
          fStack_1b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_1b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_7 = (double)(float)uVar9;
      *(double *)&param_7->field_0x8 = (double)fStack_1b4;
      *(double *)&param_7->field_0x10 = (double)local_1b0;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351405>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x293,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeom<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 1439f2b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeom<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,TRigidTransform<double,3> *param_2
          ,TVector<double,3> *param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,TVector<double,3> *param_9,double param_10,
          bool param_11)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined4 uVar9;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar10 [16];
  undefined1 auStackY_228 [32];
  float fStack_1b4;
  float local_1b0;
  double local_198 [2];
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_108 [40];
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((param_4 < 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351411>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28d,"Length >= 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar8 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
           *(double *)param_3 * *(double *)param_3 +
          *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
          __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351410>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28e,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar7 = __real_322bcc77;
  if ((param_10 != 0.0) &&
     (((__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
      (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3369118521899351409>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                          ,0x28f,
                          "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                         ), bVar4)))) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_168 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_160 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_158 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar10._0_8_ = local_160 * local_160 + local_168 * local_168 + local_158 * local_158;
  auVar10._8_8_ = 0;
  auVar10 = sqrtpd(unaff_XMM11,auVar10);
  dVar8 = auVar10._0_8_;
  if (__real_0010000000000000 < dVar8) {
    local_108._0_8_ = *(undefined8 *)param_2;
    local_108._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_108._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_108._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_108._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dVar3 = dVar3 / dVar8;
    local_168 = local_168 * dVar3;
    dStack_e0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_160 = local_160 * dVar3;
    local_158 = local_158 * dVar3;
    local_d8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_c8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_c0 = _UNK_150689688;
    local_188 = (double)*(float *)&this->_padding_;
    uStack_d0 = 0;
    local_b8 = ___xmm_00000000000000003ff0000000000000;
    uStack_b0 = _UNK_150689518;
    local_178 = (double)*(float *)&this->_padding_;
    local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
    bVar4 = FTriangleMeshImplicitObject::SweepGeom
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_108,
                       (TVector<double,3> *)&local_168,dVar8 * param_4,local_198,
                       (TVector<double,3> *)&local_150,(TVector<double,3> *)&local_138,param_8,
                       param_9,param_10,param_11,(TVector<double,3> *)&local_188);
    if ((bVar4) && (local_198[0] * dVar3 < param_4)) {
      *param_5 = local_198[0] * dVar3;
      fVar6 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_6 = (double)((float)local_150 * *(float *)&this->_padding_);
      *(double *)&param_6->field_0x8 = (double)((float)local_148 * fVar6);
      *(double *)&param_6->field_0x10 = (double)((float)local_140 * fVar1);
      fStack_1b4 = (float)local_130 * *(float *)&this->_padding_;
      uVar9 = (float)local_138 * *(float *)((longlong)&this->_padding_ + 4);
      local_1b0 = (float)local_128 * *(float *)((longlong)&this->_padding_ + 4);
      fVar6 = (float)uVar9 * (float)uVar9 + fStack_1b4 * fStack_1b4 + local_1b0 * local_1b0;
      if (fVar6 != __real_3f800000) {
        if (fVar7 <= fVar6) {
          fVar7 = __real_3f800000 / SQRT(fVar6);
          fStack_1b4 = fStack_1b4 * fVar7;
          local_1b0 = local_1b0 * fVar7;
          uVar9 = (float)uVar9 * fVar7;
        }
        else {
          fStack_1b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_1b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_7 = (double)(float)uVar9;
      *(double *)&param_7->field_0x8 = (double)fStack_1b4;
      *(double *)&param_7->field_0x10 = (double)local_1b0;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351405>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x293,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeom<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 1439f3000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeom<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,
          TVector<double,3> *param_9,double param_10,bool param_11)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined4 uVar9;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar10 [16];
  undefined1 auStackY_228 [32];
  float fStack_1b4;
  float local_1b0;
  double local_198 [2];
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_108 [40];
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((param_4 < 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351411>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28d,"Length >= 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar8 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
           *(double *)param_3 * *(double *)param_3 +
          *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
          __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351410>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28e,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar7 = __real_322bcc77;
  if ((param_10 != 0.0) &&
     (((__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
      (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3369118521899351409>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                          ,0x28f,
                          "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                         ), bVar4)))) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_168 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_160 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_158 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar10._0_8_ = local_160 * local_160 + local_168 * local_168 + local_158 * local_158;
  auVar10._8_8_ = 0;
  auVar10 = sqrtpd(unaff_XMM11,auVar10);
  dVar8 = auVar10._0_8_;
  if (__real_0010000000000000 < dVar8) {
    local_108._0_8_ = *(undefined8 *)param_2;
    local_108._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_108._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_108._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_108._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dVar3 = dVar3 / dVar8;
    local_168 = local_168 * dVar3;
    dStack_e0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_160 = local_160 * dVar3;
    local_158 = local_158 * dVar3;
    local_d8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_c8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_c0 = _UNK_150689688;
    local_188 = (double)*(float *)&this->_padding_;
    uStack_d0 = 0;
    local_b8 = ___xmm_00000000000000003ff0000000000000;
    uStack_b0 = _UNK_150689518;
    local_178 = (double)*(float *)&this->_padding_;
    local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
    bVar4 = FTriangleMeshImplicitObject::SweepGeom
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_108,
                       (TVector<double,3> *)&local_168,dVar8 * param_4,local_198,
                       (TVector<double,3> *)&local_150,(TVector<double,3> *)&local_138,param_8,
                       param_9,param_10,param_11,(TVector<double,3> *)&local_188);
    if ((bVar4) && (local_198[0] * dVar3 < param_4)) {
      *param_5 = local_198[0] * dVar3;
      fVar6 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_6 = (double)((float)local_150 * *(float *)&this->_padding_);
      *(double *)&param_6->field_0x8 = (double)((float)local_148 * fVar6);
      *(double *)&param_6->field_0x10 = (double)((float)local_140 * fVar1);
      fStack_1b4 = (float)local_130 * *(float *)&this->_padding_;
      uVar9 = (float)local_138 * *(float *)((longlong)&this->_padding_ + 4);
      local_1b0 = (float)local_128 * *(float *)((longlong)&this->_padding_ + 4);
      fVar6 = (float)uVar9 * (float)uVar9 + fStack_1b4 * fStack_1b4 + local_1b0 * local_1b0;
      if (fVar6 != __real_3f800000) {
        if (fVar7 <= fVar6) {
          fVar7 = __real_3f800000 / SQRT(fVar6);
          fStack_1b4 = fStack_1b4 * fVar7;
          local_1b0 = local_1b0 * fVar7;
          uVar9 = (float)uVar9 * fVar7;
        }
        else {
          fStack_1b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_1b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_7 = (double)(float)uVar9;
      *(double *)&param_7->field_0x8 = (double)fStack_1b4;
      *(double *)&param_7->field_0x10 = (double)local_1b0;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351405>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x293,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeom<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 1439f34f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeom<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,TVector<double,3> *param_9,double param_10,
          bool param_11)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined4 uVar9;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar10 [16];
  undefined1 auStackY_228 [32];
  float fStack_1b4;
  float local_1b0;
  double local_198 [2];
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_108 [40];
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((param_4 < 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351411>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28d,"Length >= 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar8 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
           *(double *)param_3 * *(double *)param_3 +
          *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
          __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351410>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28e,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar7 = __real_322bcc77;
  if ((param_10 != 0.0) &&
     (((__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
      (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3369118521899351409>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                          ,0x28f,
                          "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                         ), bVar4)))) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_168 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_160 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_158 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar10._0_8_ = local_160 * local_160 + local_168 * local_168 + local_158 * local_158;
  auVar10._8_8_ = 0;
  auVar10 = sqrtpd(unaff_XMM11,auVar10);
  dVar8 = auVar10._0_8_;
  if (__real_0010000000000000 < dVar8) {
    local_108._0_8_ = *(undefined8 *)param_2;
    local_108._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_108._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_108._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_108._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dVar3 = dVar3 / dVar8;
    local_168 = local_168 * dVar3;
    dStack_e0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_160 = local_160 * dVar3;
    local_158 = local_158 * dVar3;
    local_d8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_c8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_c0 = _UNK_150689688;
    local_188 = (double)*(float *)&this->_padding_;
    uStack_d0 = 0;
    local_b8 = ___xmm_00000000000000003ff0000000000000;
    uStack_b0 = _UNK_150689518;
    local_178 = (double)*(float *)&this->_padding_;
    local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
    bVar4 = FTriangleMeshImplicitObject::SweepGeom
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_108,
                       (TVector<double,3> *)&local_168,dVar8 * param_4,local_198,
                       (TVector<double,3> *)&local_150,(TVector<double,3> *)&local_138,param_8,
                       param_9,param_10,param_11,(TVector<double,3> *)&local_188);
    if ((bVar4) && (local_198[0] * dVar3 < param_4)) {
      *param_5 = local_198[0] * dVar3;
      fVar6 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_6 = (double)((float)local_150 * *(float *)&this->_padding_);
      *(double *)&param_6->field_0x8 = (double)((float)local_148 * fVar6);
      *(double *)&param_6->field_0x10 = (double)((float)local_140 * fVar1);
      fStack_1b4 = (float)local_130 * *(float *)&this->_padding_;
      uVar9 = (float)local_138 * *(float *)((longlong)&this->_padding_ + 4);
      local_1b0 = (float)local_128 * *(float *)((longlong)&this->_padding_ + 4);
      fVar6 = (float)uVar9 * (float)uVar9 + fStack_1b4 * fStack_1b4 + local_1b0 * local_1b0;
      if (fVar6 != __real_3f800000) {
        if (fVar7 <= fVar6) {
          fVar7 = __real_3f800000 / SQRT(fVar6);
          fStack_1b4 = fStack_1b4 * fVar7;
          local_1b0 = local_1b0 * fVar7;
          uVar9 = (float)uVar9 * fVar7;
        }
        else {
          fStack_1b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_1b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_7 = (double)(float)uVar9;
      *(double *)&param_7->field_0x8 = (double)fStack_1b4;
      *(double *)&param_7->field_0x10 = (double)local_1b0;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351405>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x293,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeom<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 1439f39e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeom<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TImplicitObjectScaled<Chaos::FConvex,1> *param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,TVector<double,3> *param_9,double param_10,
          bool param_11)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined4 uVar9;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar10 [16];
  undefined1 auStackY_228 [32];
  float fStack_1b4;
  float local_1b0;
  double local_198 [2];
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_108 [40];
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((param_4 < 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351411>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28d,"Length >= 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar8 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
           *(double *)param_3 * *(double *)param_3 +
          *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
          __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351410>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28e,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar7 = __real_322bcc77;
  if ((param_10 != 0.0) &&
     (((__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
      (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3369118521899351409>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                          ,0x28f,
                          "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                         ), bVar4)))) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_168 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_160 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_158 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar10._0_8_ = local_160 * local_160 + local_168 * local_168 + local_158 * local_158;
  auVar10._8_8_ = 0;
  auVar10 = sqrtpd(unaff_XMM11,auVar10);
  dVar8 = auVar10._0_8_;
  if (__real_0010000000000000 < dVar8) {
    local_108._0_8_ = *(undefined8 *)param_2;
    local_108._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_108._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_108._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_108._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dVar3 = dVar3 / dVar8;
    local_168 = local_168 * dVar3;
    dStack_e0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_160 = local_160 * dVar3;
    local_158 = local_158 * dVar3;
    local_d8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_c8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_c0 = _UNK_150689688;
    local_188 = (double)*(float *)&this->_padding_;
    uStack_d0 = 0;
    local_b8 = ___xmm_00000000000000003ff0000000000000;
    uStack_b0 = _UNK_150689518;
    local_178 = (double)*(float *)&this->_padding_;
    local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
    bVar4 = FTriangleMeshImplicitObject::SweepGeom
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_108,
                       (TVector<double,3> *)&local_168,dVar8 * param_4,local_198,
                       (TVector<double,3> *)&local_150,(TVector<double,3> *)&local_138,param_8,
                       param_9,param_10,param_11,(TVector<double,3> *)&local_188);
    if ((bVar4) && (local_198[0] * dVar3 < param_4)) {
      *param_5 = local_198[0] * dVar3;
      fVar6 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_6 = (double)((float)local_150 * *(float *)&this->_padding_);
      *(double *)&param_6->field_0x8 = (double)((float)local_148 * fVar6);
      *(double *)&param_6->field_0x10 = (double)((float)local_140 * fVar1);
      fStack_1b4 = (float)local_130 * *(float *)&this->_padding_;
      uVar9 = (float)local_138 * *(float *)((longlong)&this->_padding_ + 4);
      local_1b0 = (float)local_128 * *(float *)((longlong)&this->_padding_ + 4);
      fVar6 = (float)uVar9 * (float)uVar9 + fStack_1b4 * fStack_1b4 + local_1b0 * local_1b0;
      if (fVar6 != __real_3f800000) {
        if (fVar7 <= fVar6) {
          fVar7 = __real_3f800000 / SQRT(fVar6);
          fStack_1b4 = fStack_1b4 * fVar7;
          local_1b0 = local_1b0 * fVar7;
          uVar9 = (float)uVar9 * fVar7;
        }
        else {
          fStack_1b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_1b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_7 = (double)(float)uVar9;
      *(double *)&param_7->field_0x8 = (double)fStack_1b4;
      *(double *)&param_7->field_0x10 = (double)local_1b0;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351405>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x293,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeom<Chaos::TSphere<double,3>_> @ 1439f3ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeom<Chaos::TSphere<double,3>_>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TSphere<double,3> *param_1,TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,
          double param_4,double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,
          int *param_8,TVector<double,3> *param_9,double param_10,bool param_11)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined4 uVar9;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar10 [16];
  undefined1 auStackY_228 [32];
  float fStack_1b4;
  float local_1b0;
  double local_198 [2];
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_108 [40];
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((param_4 < 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351411>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28d,"Length >= 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar8 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
           *(double *)param_3 * *(double *)param_3 +
          *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
          __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351410>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28e,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar7 = __real_322bcc77;
  if ((param_10 != 0.0) &&
     (((__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
      (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3369118521899351409>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                          ,0x28f,
                          "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                         ), bVar4)))) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_168 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_160 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_158 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar10._0_8_ = local_160 * local_160 + local_168 * local_168 + local_158 * local_158;
  auVar10._8_8_ = 0;
  auVar10 = sqrtpd(unaff_XMM11,auVar10);
  dVar8 = auVar10._0_8_;
  if (__real_0010000000000000 < dVar8) {
    local_108._0_8_ = *(undefined8 *)param_2;
    local_108._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_108._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_108._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_108._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dVar3 = dVar3 / dVar8;
    local_168 = local_168 * dVar3;
    dStack_e0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_160 = local_160 * dVar3;
    local_158 = local_158 * dVar3;
    local_d8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_c8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_c0 = _UNK_150689688;
    local_188 = (double)*(float *)&this->_padding_;
    uStack_d0 = 0;
    local_b8 = ___xmm_00000000000000003ff0000000000000;
    uStack_b0 = _UNK_150689518;
    local_178 = (double)*(float *)&this->_padding_;
    local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
    bVar4 = FTriangleMeshImplicitObject::SweepGeom
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_108,
                       (TVector<double,3> *)&local_168,dVar8 * param_4,local_198,
                       (TVector<double,3> *)&local_150,(TVector<double,3> *)&local_138,param_8,
                       param_9,param_10,param_11,(TVector<double,3> *)&local_188);
    if ((bVar4) && (local_198[0] * dVar3 < param_4)) {
      *param_5 = local_198[0] * dVar3;
      fVar6 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_6 = (double)((float)local_150 * *(float *)&this->_padding_);
      *(double *)&param_6->field_0x8 = (double)((float)local_148 * fVar6);
      *(double *)&param_6->field_0x10 = (double)((float)local_140 * fVar1);
      fStack_1b4 = (float)local_130 * *(float *)&this->_padding_;
      uVar9 = (float)local_138 * *(float *)((longlong)&this->_padding_ + 4);
      local_1b0 = (float)local_128 * *(float *)((longlong)&this->_padding_ + 4);
      fVar6 = (float)uVar9 * (float)uVar9 + fStack_1b4 * fStack_1b4 + local_1b0 * local_1b0;
      if (fVar6 != __real_3f800000) {
        if (fVar7 <= fVar6) {
          fVar7 = __real_3f800000 / SQRT(fVar6);
          fStack_1b4 = fStack_1b4 * fVar7;
          local_1b0 = local_1b0 * fVar7;
          uVar9 = (float)uVar9 * fVar7;
        }
        else {
          fStack_1b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_1b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_7 = (double)(float)uVar9;
      *(double *)&param_7->field_0x8 = (double)fStack_1b4;
      *(double *)&param_7->field_0x10 = (double)local_1b0;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351405>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x293,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeom<Chaos::FCapsule> @ 1439f43c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeom<Chaos::FCapsule>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,FCapsule *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,
          TVector<double,3> *param_9,double param_10,bool param_11)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined4 uVar9;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar10 [16];
  undefined1 auStackY_228 [32];
  float fStack_1b4;
  float local_1b0;
  double local_198 [2];
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_108 [40];
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((param_4 < 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351411>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28d,"Length >= 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar8 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
           *(double *)param_3 * *(double *)param_3 +
          *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
          __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351410>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28e,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar7 = __real_322bcc77;
  if ((param_10 != 0.0) &&
     (((__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
      (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3369118521899351409>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                          ,0x28f,
                          "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                         ), bVar4)))) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_168 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_160 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_158 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar10._0_8_ = local_160 * local_160 + local_168 * local_168 + local_158 * local_158;
  auVar10._8_8_ = 0;
  auVar10 = sqrtpd(unaff_XMM11,auVar10);
  dVar8 = auVar10._0_8_;
  if (__real_0010000000000000 < dVar8) {
    local_108._0_8_ = *(undefined8 *)param_2;
    local_108._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_108._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_108._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_108._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dVar3 = dVar3 / dVar8;
    local_168 = local_168 * dVar3;
    dStack_e0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_160 = local_160 * dVar3;
    local_158 = local_158 * dVar3;
    local_d8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_c8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_c0 = _UNK_150689688;
    local_188 = (double)*(float *)&this->_padding_;
    uStack_d0 = 0;
    local_b8 = ___xmm_00000000000000003ff0000000000000;
    uStack_b0 = _UNK_150689518;
    local_178 = (double)*(float *)&this->_padding_;
    local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
    bVar4 = FTriangleMeshImplicitObject::SweepGeom
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_108,
                       (TVector<double,3> *)&local_168,dVar8 * param_4,local_198,
                       (TVector<double,3> *)&local_150,(TVector<double,3> *)&local_138,param_8,
                       param_9,param_10,param_11,(TVector<double,3> *)&local_188);
    if ((bVar4) && (local_198[0] * dVar3 < param_4)) {
      *param_5 = local_198[0] * dVar3;
      fVar6 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_6 = (double)((float)local_150 * *(float *)&this->_padding_);
      *(double *)&param_6->field_0x8 = (double)((float)local_148 * fVar6);
      *(double *)&param_6->field_0x10 = (double)((float)local_140 * fVar1);
      fStack_1b4 = (float)local_130 * *(float *)&this->_padding_;
      uVar9 = (float)local_138 * *(float *)((longlong)&this->_padding_ + 4);
      local_1b0 = (float)local_128 * *(float *)((longlong)&this->_padding_ + 4);
      fVar6 = (float)uVar9 * (float)uVar9 + fStack_1b4 * fStack_1b4 + local_1b0 * local_1b0;
      if (fVar6 != __real_3f800000) {
        if (fVar7 <= fVar6) {
          fVar7 = __real_3f800000 / SQRT(fVar6);
          fStack_1b4 = fStack_1b4 * fVar7;
          local_1b0 = local_1b0 * fVar7;
          uVar9 = (float)uVar9 * fVar7;
        }
        else {
          fStack_1b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_1b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_7 = (double)(float)uVar9;
      *(double *)&param_7->field_0x8 = (double)fStack_1b4;
      *(double *)&param_7->field_0x10 = (double)local_1b0;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351405>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x293,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// LowLevelSweepGeom<Chaos::FConvex> @ 1439f48b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
LowLevelSweepGeom<Chaos::FConvex>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,FConvex *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,
          TVector<double,3> *param_9,double param_10,bool param_11)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined4 uVar9;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar10 [16];
  undefined1 auStackY_228 [32];
  float fStack_1b4;
  float local_1b0;
  double local_198 [2];
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_108 [40];
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((param_4 < 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351411>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28d,"Length >= 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = __real_3ff0000000000000;
  dVar8 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
           *(double *)param_3 * *(double *)param_3 +
          *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
          __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351410>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x28e,"FMath::IsNearlyEqual(LocalDir.SizeSquared(), (T)1, (T)(1.e-4f))"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar7 = __real_322bcc77;
  if ((param_10 != 0.0) &&
     (((__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
      (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3369118521899351409>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                          ,0x28f,
                          "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                         ), bVar4)))) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_168 = (double)((float)*(double *)param_3 * *(float *)((longlong)&this->_padding_ + 4));
  local_160 = (double)((float)*(double *)&param_3->field_0x8 * *(float *)&this->_padding_);
  local_158 = (double)((float)*(double *)&param_3->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  auVar10._0_8_ = local_160 * local_160 + local_168 * local_168 + local_158 * local_158;
  auVar10._8_8_ = 0;
  auVar10 = sqrtpd(unaff_XMM11,auVar10);
  dVar8 = auVar10._0_8_;
  if (__real_0010000000000000 < dVar8) {
    local_108._0_8_ = *(undefined8 *)param_2;
    local_108._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_108._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_108._24_8_ = *(undefined8 *)&param_2->field_0x18;
    local_108._32_8_ =
         (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x20;
    dVar3 = dVar3 / dVar8;
    local_168 = local_168 * dVar3;
    dStack_e0 = (double)*(float *)&this->_padding_ * *(double *)&param_2->field_0x28;
    local_160 = local_160 * dVar3;
    local_158 = local_158 * dVar3;
    local_d8 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_2->field_0x30;
    local_c8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_c0 = _UNK_150689688;
    local_188 = (double)*(float *)&this->_padding_;
    uStack_d0 = 0;
    local_b8 = ___xmm_00000000000000003ff0000000000000;
    uStack_b0 = _UNK_150689518;
    local_178 = (double)*(float *)&this->_padding_;
    local_180 = (double)*(float *)((longlong)&this->_padding_ + 4);
    bVar4 = FTriangleMeshImplicitObject::SweepGeom
                      ((this->MObject).Reference,param_1,(TRigidTransform<double,3> *)local_108,
                       (TVector<double,3> *)&local_168,dVar8 * param_4,local_198,
                       (TVector<double,3> *)&local_150,(TVector<double,3> *)&local_138,param_8,
                       param_9,param_10,param_11,(TVector<double,3> *)&local_188);
    if ((bVar4) && (local_198[0] * dVar3 < param_4)) {
      *param_5 = local_198[0] * dVar3;
      fVar6 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      *(double *)param_6 = (double)((float)local_150 * *(float *)&this->_padding_);
      *(double *)&param_6->field_0x8 = (double)((float)local_148 * fVar6);
      *(double *)&param_6->field_0x10 = (double)((float)local_140 * fVar1);
      fStack_1b4 = (float)local_130 * *(float *)&this->_padding_;
      uVar9 = (float)local_138 * *(float *)((longlong)&this->_padding_ + 4);
      local_1b0 = (float)local_128 * *(float *)((longlong)&this->_padding_ + 4);
      fVar6 = (float)uVar9 * (float)uVar9 + fStack_1b4 * fStack_1b4 + local_1b0 * local_1b0;
      if (fVar6 != __real_3f800000) {
        if (fVar7 <= fVar6) {
          fVar7 = __real_3f800000 / SQRT(fVar6);
          fStack_1b4 = fStack_1b4 * fVar7;
          local_1b0 = local_1b0 * fVar7;
          uVar9 = (float)uVar9 * fVar7;
        }
        else {
          fStack_1b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_1b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)param_7 = (double)(float)uVar9;
      *(double *)&param_7->field_0x8 = (double)fStack_1b4;
      *(double *)&param_7->field_0x10 = (double)local_1b0;
      return true;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351405>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x293,"LengthScale > TNumericLimits<T>::Min()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// AsScaledChecked @ 143a098f0

TImplicitObjectScaled<Chaos::FImplicitObject,1> * __cdecl
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::AsScaledChecked(FImplicitObject *param_1)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TImplicitObjectScaled<Chaos::FImplicitObject,1> *pTVar4;
  
  uVar2 = FImplicitObject::GetType(param_1);
  if (-1 < (char)uVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsScaled(Obj.GetType())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x20f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TImplicitObjectScaled<Chaos::FImplicitObject,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TImplicitObjectScaled<Chaos::FImplicitObject,1> *)param_1;
}

// GetPlane @ 143a0f450

TCorePlane<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::GetPlane
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,
          TCorePlane<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  
  FConvex::GetPlane((this->MObject).Reference,(TCorePlane<double,3> *)&local_80,param_1);
  fVar1 = *(float *)&this->_padding_;
  dVar7 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_68;
  dVar3 = (double)*(float *)&this->_padding_ * local_60;
  dVar6 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_58;
  dVar5 = dVar7 * dVar7 + dVar3 * dVar3 + dVar6 * dVar6;
  local_78 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_78;
  if (__real_3e45798ee0000000 < dVar5) {
    local_58 = __real_3ff0000000000000 / SQRT(dVar5);
    local_68 = dVar7 * local_58;
    local_60 = dVar3 * local_58;
    local_58 = dVar6 * local_58;
  }
  auVar4._8_4_ = SUB84(local_78,0);
  auVar4._0_8_ = (double)*(float *)&this->_padding_ * local_80;
  auVar4._12_4_ = (int)((ulonglong)local_78 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->MX = auVar4;
  auVar2._8_4_ = SUB84(local_60,0);
  auVar2._0_8_ = local_68;
  auVar2._12_4_ = (int)((ulonglong)local_60 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->MNormal = auVar2;
  *(double *)&(__return_storage_ptr__->MX).field_0x10 = (double)fVar1 * local_70;
  *(double *)&(__return_storage_ptr__->MNormal).field_0x10 = local_58;
  return __return_storage_ptr__;
}

// TImplicitObjectScaled<Chaos::FConvex,1> @ 143a36dd0

TImplicitObjectScaled<Chaos::FConvex,1> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::TImplicitObjectScaled<Chaos::FConvex,1>
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,FConvex *param_1,TVector<double,3> *param_2
          ,double param_3)

{
  uchar uVar1;
  
  uVar1 = FImplicitObject::GetType((FImplicitObject *)param_1);
  FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this,2,uVar1);
  this->_padding_ = (longlong)&___7__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__6B_;
  (this->MObject).Reference = param_1;
  if (param_1 != (FConvex *)0x0) {
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    UNLOCK();
    if ((int)param_1->_padding_ == 1) {
      LOCK();
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
      UNLOCK();
    }
  }
  InitScaledImplicit(this,param_2,(float)param_3);
  return this;
}

// TImplicitObjectScaled<Chaos::FConvex,1> @ 143b560b0

TImplicitObjectScaled<Chaos::FConvex,1> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::TImplicitObjectScaled<Chaos::FConvex,1>
          (TImplicitObjectScaled<Chaos::FConvex,1> *this,TRefCountPtr<Chaos::FConvex> param_1,
          TVector<double,3> *param_2,double param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  FConvex *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar8;
  byte bVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  bVar9 = *(byte *)((param_1.Reference)->_padding_ + 0x18);
  this->_padding_ = 0;
  bVar9 = bVar9 | 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10100;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(byte *)&this->_padding_ = bVar9;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar9;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = -0x10000000000001;
  this->_padding_ = -0x10000000000001;
  this->_padding_ = -0x10000000000001;
  this->_padding_ = (longlong)&___7__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__6B_;
  (this->MObject).Reference = (FConvex *)0x0;
  pFVar4 = (FConvex *)(param_1.Reference)->_padding_;
  (this->MObject).Reference = pFVar4;
  if (pFVar4 != (FConvex *)0x0) {
    LOCK();
    *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
    UNLOCK();
  }
  if ((((this->MObject).Reference)->_padding_ & 0x80) != 0) {
    local_res8[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  if ((((this->MObject).Reference)->_padding_ & 0x40) != 0) {
    local_res10[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_res10);
  }
  cVar3 = (char)((this->MObject).Reference)->_padding_;
  if ((cVar3 == '\x04') || (cVar3 == '\x05')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TImplicitObjectScaled<Chaos::FConvex,1> *)(*pcVar6)();
      return pTVar8;
    }
  }
  pFVar4 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&pFVar4->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&pFVar4->_padding_ + 5);
  *(float *)&this->_padding_ = (float)param_3;
  SetScale(this,param_2);
  puVar5 = (undefined8 *)(param_1.Reference)->_padding_;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  return this;
}

// TImplicitObjectScaled<Chaos::FImplicitObject,1> @ 143b56250

TImplicitObjectScaled<Chaos::FImplicitObject,1> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::
TImplicitObjectScaled<Chaos::FImplicitObject,1>
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,
          TRefCountPtr<Chaos::FImplicitObject> param_1,TVector<double,3> *param_2,double param_3)

{
  int *piVar1;
  int iVar2;
  uchar uVar3;
  FImplicitObject *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  TImplicitObjectScaled<Chaos::FImplicitObject,1> *pTVar8;
  byte bVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  bVar9 = *(byte *)((param_1.Reference)->_padding_ + 0x18);
  this->_padding_ = 0;
  bVar9 = bVar9 | 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10100;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(byte *)&this->_padding_ = bVar9;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar9;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = -0x10000000000001;
  this->_padding_ = -0x10000000000001;
  this->_padding_ = -0x10000000000001;
  this->_padding_ = (longlong)&___7__TImplicitObjectScaled_VFImplicitObject_Chaos___00_Chaos__6B_;
  (this->MObject).Reference = (FImplicitObject *)0x0;
  pFVar4 = (FImplicitObject *)(param_1.Reference)->_padding_;
  (this->MObject).Reference = pFVar4;
  if (pFVar4 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
    UNLOCK();
  }
  if ((((this->MObject).Reference)->Type & 0x80) != 0) {
    local_res8[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  if ((((this->MObject).Reference)->Type & 0x40) != 0) {
    local_res10[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_res10);
  }
  uVar3 = ((this->MObject).Reference)->Type;
  if ((uVar3 == '\x04') || (uVar3 == '\x05')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TImplicitObjectScaled<Chaos::FImplicitObject,1> *)(*pcVar6)();
      return pTVar8;
    }
  }
  pFVar4 = (this->MObject).Reference;
  *(bool *)((longlong)&this->_padding_ + 4) = pFVar4->bIsConvex;
  *(bool *)((longlong)&this->_padding_ + 5) = pFVar4->bDoCollide;
  *(float *)&this->_padding_ = (float)param_3;
  SetScale(this,param_2);
  puVar5 = (undefined8 *)(param_1.Reference)->_padding_;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  return this;
}

// TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> @ 143b563f0

TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TRefCountPtr<Chaos::FTriangleMeshImplicitObject> param_1,TVector<double,3> *param_2,
          double param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  FTriangleMeshImplicitObject *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *pTVar8;
  byte bVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  bVar9 = *(byte *)((param_1.Reference)->_padding_ + 0x18);
  this->_padding_ = 0;
  bVar9 = bVar9 | 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10100;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(byte *)&this->_padding_ = bVar9;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar9;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = -0x10000000000001;
  this->_padding_ = -0x10000000000001;
  this->_padding_ = -0x10000000000001;
  this->_padding_ =
       (longlong)&___7__TImplicitObjectScaled_VFTriangleMeshImplicitObject_Chaos___00_Chaos__6B_;
  (this->MObject).Reference = (FTriangleMeshImplicitObject *)0x0;
  pFVar4 = (FTriangleMeshImplicitObject *)(param_1.Reference)->_padding_;
  (this->MObject).Reference = pFVar4;
  if (pFVar4 != (FTriangleMeshImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
    UNLOCK();
  }
  if ((((this->MObject).Reference)->_padding_ & 0x80) != 0) {
    local_res8[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::InitScaledImplicit'::__l2::
    <lambda_1>::operator()(local_res8);
  }
  if ((((this->MObject).Reference)->_padding_ & 0x40) != 0) {
    local_res10[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::InitScaledImplicit'::__l2::
    <lambda_2>::operator()(local_res10);
  }
  cVar3 = (char)((this->MObject).Reference)->_padding_;
  if ((cVar3 == '\x04') || (cVar3 == '\x05')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *)(*pcVar6)();
      return pTVar8;
    }
  }
  pFVar4 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&pFVar4->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&pFVar4->_padding_ + 5);
  *(float *)&this->_padding_ = (float)param_3;
  SetScale(this,param_2);
  puVar5 = (undefined8 *)(param_1.Reference)->_padding_;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  return this;
}

// CopyGeometry @ 143b60990

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::CopyGeometry
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this)

{
  TImplicitObjectScaled<Chaos::FImplicitObject,1> *pTVar1;
  FImplicitObject *in_RDX;
  
  pTVar1 = CopyHelper(this);
  in_RDX->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TImplicitObjectScaled<Chaos::FImplicitObject,1> *)0x0) {
    LOCK();
    *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometry @ 143b609c0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::CopyGeometry
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this)

{
  TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *pTVar1;
  FImplicitObject *in_RDX;
  
  pTVar1 = CopyHelper(this);
  in_RDX->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *)0x0) {
    LOCK();
    *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 143b60cf0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::CopyGeometryWithScale
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,TVector<double,3> *param_1)

{
  TImplicitObjectScaled<Chaos::FImplicitObject,1> *this_00;
  double *in_R8;
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = CopyHelper(this);
  local_28 = (double)*(float *)&this_00->_padding_ * *in_R8;
  local_20 = (double)*(float *)((longlong)&this_00->_padding_ + 4) * in_R8[1];
  local_18 = (double)*(float *)&this_00->_padding_ * in_R8[2];
  SetScale(this_00,(TVector<double,3> *)&local_28);
  *(TImplicitObjectScaled<Chaos::FImplicitObject,1> **)param_1 = this_00;
  if (this_00 != (TImplicitObjectScaled<Chaos::FImplicitObject,1> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CopyGeometryWithScale @ 143b60d80

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::CopyGeometryWithScale
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TVector<double,3> *param_1)

{
  TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this_00;
  double *in_R8;
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = CopyHelper(this);
  local_28 = (double)*(float *)&this_00->_padding_ * *in_R8;
  local_20 = (double)*(float *)((longlong)&this_00->_padding_ + 4) * in_R8[1];
  local_18 = (double)*(float *)&this_00->_padding_ * in_R8[2];
  SetScale(this_00,(TVector<double,3> *)&local_28);
  *(TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> **)param_1 = this_00;
  if (this_00 != (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CopyHelper @ 143b61000

TImplicitObjectScaled<Chaos::FImplicitObject,1> * __cdecl
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::CopyHelper
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *param_1)

{
  float fVar1;
  TImplicitObjectScaled<Chaos::FImplicitObject,1> *pTVar2;
  FImplicitObject *local_res10 [3];
  double local_28;
  double local_20;
  double local_18;
  
  pTVar2 = ::operator_new(0x78);
  if (pTVar2 != (TImplicitObjectScaled<Chaos::FImplicitObject,1> *)0x0) {
    local_res10[0] = (param_1->MObject).Reference;
    fVar1 = *(float *)&param_1->_padding_;
    local_28 = (double)*(float *)&param_1->_padding_;
    local_20 = (double)*(float *)((longlong)&param_1->_padding_ + 4);
    local_18 = (double)*(float *)&param_1->_padding_;
    if (local_res10[0] != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&local_res10[0]->_padding_ = (int)local_res10[0]->_padding_ + 1;
      UNLOCK();
    }
    pTVar2 = TImplicitObjectScaled<Chaos::FImplicitObject,1>
                       (pTVar2,(FImplicitObject *)local_res10,(TVector<double,3> *)&local_28,
                        (double)fVar1);
    return pTVar2;
  }
  return (TImplicitObjectScaled<Chaos::FImplicitObject,1> *)0x0;
}

// CopyHelper @ 143b61080

TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> * __cdecl
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::CopyHelper
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *param_1)

{
  float fVar1;
  TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *pTVar2;
  FTriangleMeshImplicitObject *local_res10 [3];
  double local_28;
  double local_20;
  double local_18;
  
  pTVar2 = ::operator_new(0x78);
  if (pTVar2 != (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *)0x0) {
    local_res10[0] = (param_1->MObject).Reference;
    fVar1 = *(float *)&param_1->_padding_;
    local_28 = (double)*(float *)&param_1->_padding_;
    local_20 = (double)*(float *)((longlong)&param_1->_padding_ + 4);
    local_18 = (double)*(float *)&param_1->_padding_;
    if (local_res10[0] != (FTriangleMeshImplicitObject *)0x0) {
      LOCK();
      *(int *)&local_res10[0]->_padding_ = (int)local_res10[0]->_padding_ + 1;
      UNLOCK();
    }
    pTVar2 = TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>
                       (pTVar2,(FTriangleMeshImplicitObject *)local_res10,
                        (TVector<double,3> *)&local_28,(double)fVar1);
    return pTVar2;
  }
  return (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *)0x0;
}

// FindClosestFaceAndVertices @ 143b63c10

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::FindClosestFaceAndVertices
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,TVector<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  FImplicitObject *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  float fVar10;
  undefined1 local_res8 [8];
  double local_38;
  double local_30;
  double local_28;
  
  fVar10 = *(float *)((longlong)&this->_padding_ + 4);
  local_38 = (double)((float)*(double *)param_1 * fVar10);
  fVar9 = (float)*(double *)&param_1->field_0x10 * *(float *)((longlong)&this->_padding_ + 4);
  local_30 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  fVar3 = *(float *)&this->_padding_;
  local_28 = (double)fVar9;
  if (((fVar10 <= fVar3) ||
      (pfVar1 = (float *)((longlong)&this->_padding_ + 4), fVar10 < *pfVar1 || fVar10 == *pfVar1))
     && (fVar4 = *(float *)((longlong)&this->_padding_ + 4), fVar10 = fVar3, fVar3 <= fVar4)) {
    fVar10 = fVar4;
  }
  pFVar6 = (this->MObject).Reference;
  iVar7 = (**(code **)(pFVar6->_padding_ + 200))(pFVar6,&local_38,fVar9,(double)fVar10 * param_3);
  if (iVar7 != -1) {
    pFVar8 = (param_2->AllocatorInstance).Data;
    iVar5 = param_2->ArrayNum;
    pFVar2 = pFVar8 + (longlong)iVar5 * 0x18;
    while( true ) {
      if (param_2->ArrayNum != iVar5) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar2) break;
      fVar10 = *(float *)&this->_padding_;
      fVar3 = *(float *)&this->_padding_;
      *(double *)(pFVar8 + 8) =
           (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)(pFVar8 + 8);
      *(double *)(pFVar8 + 0x10) = (double)fVar10 * *(double *)(pFVar8 + 0x10);
      *(double *)pFVar8 = (double)fVar3 * *(double *)pFVar8;
      pFVar8 = pFVar8 + 0x18;
    }
  }
  return iVar7;
}

// FindClosestFaceAndVertices @ 143b63d40

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::FindClosestFaceAndVertices
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TVector<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  return -1;
}

// FindClosestIntersectionImp @ 143b64040

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::FindClosestIntersectionImp
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,
          Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  Pair<Chaos::TVector<double,3>,bool> *pPVar6;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (*(float *)&this->_padding_ != 0.0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351169>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x37f,"OuterMargin == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pPVar6 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar6;
    }
  }
  local_20 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_18 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_10 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_38 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_30 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_28 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  FImplicitObject::FindClosestIntersection
            ((this->MObject).Reference,__return_storage_ptr__,(TVector<double,3> *)&local_20,
             (TVector<double,3> *)&local_38,param_3);
  if (__return_storage_ptr__->Second != false) {
    fVar1 = *(float *)&this->_padding_;
    dVar3 = *(double *)&__return_storage_ptr__->First;
    fVar2 = *(float *)&this->_padding_;
    *(double *)&(__return_storage_ptr__->First).field_0x8 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x8 *
                 *(float *)((longlong)&this->_padding_ + 4));
    *(double *)&(__return_storage_ptr__->First).field_0x10 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x10 * fVar1);
    *(double *)&__return_storage_ptr__->First = (double)((float)dVar3 * fVar2);
  }
  return __return_storage_ptr__;
}

// FindClosestIntersectionImp @ 143b641b0

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::FindClosestIntersectionImp
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  Pair<Chaos::TVector<double,3>,bool> *pPVar6;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (*(float *)&this->_padding_ != 0.0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351169>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x37f,"OuterMargin == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pPVar6 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar6;
    }
  }
  local_20 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_18 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_10 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_38 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_30 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_28 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  FImplicitObject::FindClosestIntersection
            ((FImplicitObject *)(this->MObject).Reference,__return_storage_ptr__,
             (TVector<double,3> *)&local_20,(TVector<double,3> *)&local_38,param_3);
  if (__return_storage_ptr__->Second != false) {
    fVar1 = *(float *)&this->_padding_;
    dVar3 = *(double *)&__return_storage_ptr__->First;
    fVar2 = *(float *)&this->_padding_;
    *(double *)&(__return_storage_ptr__->First).field_0x8 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x8 *
                 *(float *)((longlong)&this->_padding_ + 4));
    *(double *)&(__return_storage_ptr__->First).field_0x10 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x10 * fVar1);
    *(double *)&__return_storage_ptr__->First = (double)((float)dVar3 * fVar2);
  }
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 143b65be0

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::FindGeometryOpposingNormal
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,
          TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,int param_2,
          TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  FImplicitObject *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TVector<double,3> *pTVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  dVar8 = __real_3ff0000000000000;
  dVar13 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar11 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar11) &&
      (double)CONCAT44(uVar12,uVar11) != __real_3f1a36e2e0000000) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351205>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x35b,
                       "FMath::IsNearlyEqual(OriginalNormal.SizeSquared(), FReal(1), FReal((1.e-4f)))"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  dVar14 = (double)*(float *)&this->_padding_ * *(double *)param_3;
  local_60 = (double)*(float *)&this->_padding_ * *(double *)param_1;
  local_70 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_50 = (double)*(float *)&this->_padding_ * *(double *)&param_1->field_0x10;
  local_58 = local_70 * *(double *)&param_1->field_0x8;
  local_70 = local_70 * *(double *)&param_3->field_0x8;
  dVar13 = (double)*(float *)&this->_padding_ * *(double *)&param_3->field_0x10;
  auVar9._0_8_ = local_70 * local_70;
  auVar9._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar14 * dVar14 + auVar9._0_8_ + dVar13 * dVar13;
  auVar10 = sqrtpd(auVar9,auVar10);
  if (auVar10._0_8_ <= __real_3e45798ee0000000) {
    local_70 = 0.0;
    local_78 = 0.0;
  }
  else {
    local_78 = dVar8 / auVar10._0_8_;
    dVar8 = local_78 * dVar13;
    local_70 = local_78 * local_70;
    local_78 = local_78 * dVar14;
  }
  pFVar3 = (this->MObject).Reference;
  local_68 = dVar8;
  (**(code **)(pFVar3->_padding_ + 0xd0))(pFVar3,&local_48,&local_60,param_2,&local_78);
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)*(float *)&this->_padding_ * local_40;
  dVar13 = __real_0010000000000000;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar1 * local_38;
  *(double *)__return_storage_ptr__ = (double)fVar2 * local_48;
  dVar13 = TVector<double,3>::SafeNormalize(__return_storage_ptr__,dVar13);
  if (dVar13 == 0.0) {
    uVar5 = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  }
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 143b65df0

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::FindGeometryOpposingNormal
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,int param_2,
          TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  TVector<double,3> *pTVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  dVar7 = __real_3ff0000000000000;
  dVar12 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar10 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar11 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
      (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351205>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x35b,
                       "FMath::IsNearlyEqual(OriginalNormal.SizeSquared(), FReal(1), FReal((1.e-4f)))"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  dVar13 = (double)*(float *)&this->_padding_ * *(double *)param_3;
  local_60 = (double)*(float *)&this->_padding_ * *(double *)param_1;
  local_70 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_50 = (double)*(float *)&this->_padding_ * *(double *)&param_1->field_0x10;
  local_58 = local_70 * *(double *)&param_1->field_0x8;
  local_70 = local_70 * *(double *)&param_3->field_0x8;
  dVar12 = (double)*(float *)&this->_padding_ * *(double *)&param_3->field_0x10;
  auVar8._0_8_ = local_70 * local_70;
  auVar8._8_8_ = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar13 * dVar13 + auVar8._0_8_ + dVar12 * dVar12;
  auVar9 = sqrtpd(auVar8,auVar9);
  if (auVar9._0_8_ <= __real_3e45798ee0000000) {
    local_70 = 0.0;
    local_78 = 0.0;
  }
  else {
    local_78 = dVar7 / auVar9._0_8_;
    dVar7 = local_78 * dVar12;
    local_70 = local_78 * local_70;
    local_78 = local_78 * dVar13;
  }
  local_68 = dVar7;
  FTriangleMeshImplicitObject::FindGeometryOpposingNormal
            ((this->MObject).Reference,(TVector<double,3> *)&local_48,(TVector<double,3> *)&local_60
             ,param_2,(TVector<double,3> *)&local_78);
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)*(float *)&this->_padding_ * local_40;
  dVar12 = __real_0010000000000000;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar1 * local_38;
  *(double *)__return_storage_ptr__ = (double)fVar2 * local_48;
  dVar12 = TVector<double,3>::SafeNormalize(__return_storage_ptr__,dVar12);
  if (dVar12 == 0.0) {
    uVar4 = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  }
  return __return_storage_ptr__;
}

// FindMostOpposingFace @ 143b66020

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::FindMostOpposingFace
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,int param_3,double param_4)

{
  FImplicitObject *pFVar1;
  int iVar2;
  
  pFVar1 = (this->MObject).Reference;
  iVar2 = (**(code **)(pFVar1->_padding_ + 0xc0))(pFVar1);
  return iVar2;
}

// FindMostOpposingFace @ 143b66090

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::FindMostOpposingFace
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,int param_3,double param_4)

{
  int iVar1;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = (double)*(float *)&this->_padding_;
  local_20 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_18 = (double)*(float *)&this->_padding_;
  iVar1 = FTriangleMeshImplicitObject::FindMostOpposingFaceScaled
                    ((this->MObject).Reference,param_1,param_2,param_3,param_4,
                     (TVector<double,3> *)&local_28);
  return iVar1;
}

// GetInnerObject @ 143b67900

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::GetInnerObject
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)(this->MObject).Reference;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GetInnerObject @ 143b67920

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::GetInnerObject
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)(this->MObject).Reference;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GetMaterialIndex @ 143b67df0

ushort __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::GetMaterialIndex
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,uint param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143b67df7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->MObject).Reference)->_padding_ + 0x120))();
  return uVar1;
}

// GetMaterialIndex @ 143b67e10

ushort __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::GetMaterialIndex
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,uint param_1)

{
  ushort uVar1;
  
  uVar1 = FTriangleMeshImplicitObject::GetMaterialIndex((this->MObject).Reference,param_1);
  return uVar1;
}

// GetNestedType @ 143b680c0

uchar __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::GetNestedType
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this)

{
  uchar uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143b680c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->MObject).Reference)->_padding_ + 8))();
  return uVar1;
}

// GetNestedType @ 143b680e0

uchar __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::GetNestedType
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this)

{
  return (uchar)((this->MObject).Reference)->_padding_;
}

// GetRadius @ 143b68710

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::GetRadius
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(((this->MObject).Reference)->_padding_ + 0x18))();
  if (0.0 < fVar1) {
    return (double)*(float *)&this->_padding_;
  }
  return 0.0;
}

// GetRadius @ 143b68750

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::GetRadius
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this)

{
  return 0.0;
}

// GetRadiusf @ 143b68790

float __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::GetRadiusf
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(((this->MObject).Reference)->_padding_ + 0x18))();
  if (0.0 < fVar1) {
    return *(float *)&this->_padding_;
  }
  return 0.0;
}

// GetRadiusf @ 143b687d0

float __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::GetRadiusf
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this)

{
  return 0.0;
}

// GetTypeHash @ 143b68b00

uint __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::GetTypeHash
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&this->_padding_,0xc,0);
  iVar2 = (**(code **)(((this->MObject).Reference)->_padding_ + 0x110))();
  uVar5 = iVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar1 ^ uVar5 << 8;
  uVar4 = (uVar1 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar1 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar3 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 5;
  uVar4 = (uVar5 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  return (uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xf;
}

// GetTypeHash @ 143b68bc0

uint __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::GetTypeHash
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&this->_padding_,0xc,0);
  uVar2 = FTriangleMeshImplicitObject::GetTypeHash((this->MObject).Reference);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// Overlap @ 143b6ac30

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::Overlap
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,TVector<double,3> *param_1,
          double param_2)

{
  float fVar1;
  FImplicitObject *pFVar2;
  undefined1 uVar3;
  double local_28;
  double local_20;
  double local_18;
  
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  local_28 = (double)((float)*(double *)param_1 * fVar1);
  pFVar2 = (this->MObject).Reference;
  local_20 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_18 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  uVar3 = (**(code **)(pFVar2->_padding_ + 0xd8))(pFVar2,&local_28,(double)fVar1 * param_2);
  return (bool)uVar3;
}

// Overlap @ 143b6acb0

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::Overlap
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TVector<double,3> *param_1,double param_2)

{
  float fVar1;
  bool bVar2;
  double local_28;
  double local_20;
  double local_18;
  
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  local_28 = (double)((float)*(double *)param_1 * fVar1);
  local_20 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_18 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  bVar2 = FTriangleMeshImplicitObject::Overlap
                    ((this->MObject).Reference,(TVector<double,3> *)&local_28,
                     (double)fVar1 * param_2);
  return bVar2;
}

// PhiWithNormal @ 143b6b880

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::PhiWithNormal
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2)

{
  FImplicitObject *pFVar1;
  double dVar2;
  double local_28;
  double local_20;
  double local_18;
  
  pFVar1 = (this->MObject).Reference;
  local_28 = (double)*(float *)&this->_padding_;
  local_20 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_18 = (double)*(float *)&this->_padding_;
  dVar2 = (double)(**(code **)(pFVar1->_padding_ + 0x88))(pFVar1,local_20,&local_28,param_2);
  return dVar2;
}

// PhiWithNormal @ 143b6b8e0

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::PhiWithNormal
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  FTriangleMeshImplicitObject *pFVar3;
  double dVar4;
  double dVar5;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  pFVar3 = (this->MObject).Reference;
  fVar1 = *(float *)&this->_padding_;
  fVar2 = *(float *)&this->_padding_;
  dVar5 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_78 = *(double *)param_1 / (double)fVar2;
  local_68 = *(double *)&param_1->field_0x10 / (double)fVar1;
  local_70 = *(double *)&param_1->field_0x8 / dVar5;
  dVar4 = (double)(**(code **)(pFVar3->_padding_ + 0x80))(pFVar3,&local_78,&local_60);
  *(double *)param_2 = (double)fVar2 * local_60;
  *(double *)&param_2->field_0x8 = dVar5 * local_58;
  *(double *)&param_2->field_0x10 = (double)fVar1 * local_50;
  dVar5 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
  return dVar5 * dVar4;
}

// Raycast @ 143b71ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::Raycast
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,double param_4,double *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8)

{
  float fVar1;
  FImplicitObject *pFVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  double dVar14;
  uint uVar16;
  undefined1 auVar15 [16];
  undefined8 in_XMM3_Qb;
  undefined1 auVar17 [16];
  float fVar18;
  double local_res8;
  float fStack_d4;
  float local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  
  auVar17._8_8_ = in_XMM3_Qb;
  auVar17._0_8_ = param_3;
  if ((param_3 <= 0.0) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351456>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x260,"Length > 0"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  dVar4 = __real_3ff0000000000000;
  dVar14 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
           __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351455>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x261,"FMath::IsNearlyEqual(Dir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if (param_4 != 0.0) {
    auVar17 = ZEXT416((uint)__real_322bcc77);
    if (((__real_322bcc77 <
          (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
        (__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
                __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3369118521899351454>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                           ,0x262,
                           "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  local_b0 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_a8 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_a0 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_c8 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_c0 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_b8 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  auVar15._0_8_ = local_c0 * local_c0 + local_c8 * local_c8 + local_b8 * local_b8;
  auVar15._8_8_ = 0;
  auVar17 = sqrtpd(auVar17,auVar15);
  dVar14 = auVar17._0_8_;
  if (__real_0010000000000000 < dVar14) {
    pFVar2 = (this->MObject).Reference;
    dVar4 = dVar4 / dVar14;
    local_c8 = local_c8 * dVar4;
    local_c0 = local_c0 * dVar4;
    local_b8 = local_b8 * dVar4;
    cVar8 = (**(code **)(pFVar2->_padding_ + 0xb0))
                      (pFVar2,&local_b0,&local_c8,dVar14 * param_3,
                       (double)*(float *)((longlong)&this->_padding_ + 4) * param_4,&local_res8,
                       &local_98,&local_80,param_8);
    if (cVar8 != '\0') {
      local_res8 = local_res8 * dVar4;
      if (local_res8 == 0.0) {
        uVar5 = *(undefined8 *)&param_1->field_0x8;
        *(undefined8 *)param_6 = *(undefined8 *)param_1;
        *(undefined8 *)&param_6->field_0x8 = uVar5;
        *(undefined8 *)&param_6->field_0x10 = *(undefined8 *)&param_1->field_0x10;
        uVar9 = *(uint *)&param_2->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar10 = *(uint *)&param_2->field_0x8 ^ _UNK_15066df78;
        uVar11 = *(uint *)&param_2->field_0xc ^ _UNK_15066df7c;
        uVar12 = (uint)*(undefined8 *)&param_2->field_0x10 ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar16 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        *(uint *)param_7 = *(uint *)param_2 ^ (uint)__xmm_80000000000000008000000000000000;
        *(uint *)&param_7->field_0x4 = uVar9;
        *(uint *)&param_7->field_0x8 = uVar10;
        *(uint *)&param_7->field_0xc = uVar11;
        *(ulonglong *)&param_7->field_0x10 = CONCAT44(uVar16,uVar12);
        *param_5 = local_res8;
        return true;
      }
      if (local_res8 < param_3) {
        fVar18 = *(float *)((longlong)&this->_padding_ + 4);
        fVar1 = *(float *)&this->_padding_;
        *(double *)param_6 = (double)((float)local_98 * *(float *)&this->_padding_);
        *(double *)&param_6->field_0x8 = (double)((float)local_90 * fVar18);
        *(double *)&param_6->field_0x10 = (double)((float)local_88 * fVar1);
        fStack_d4 = (float)local_78 * *(float *)&this->_padding_;
        uVar13 = (float)local_80 * *(float *)((longlong)&this->_padding_ + 4);
        local_d0 = (float)local_70 * *(float *)((longlong)&this->_padding_ + 4);
        fVar18 = (float)uVar13 * (float)uVar13 + fStack_d4 * fStack_d4 + local_d0 * local_d0;
        if (fVar18 != __real_3f800000) {
          if (__real_00800000 <= fVar18) {
            fVar18 = __real_3f800000 / SQRT(fVar18);
            fStack_d4 = fStack_d4 * fVar18;
            local_d0 = local_d0 * fVar18;
            uVar13 = (float)uVar13 * fVar18;
          }
          else {
            fStack_d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
            local_d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          }
        }
        *(double *)param_7 = (double)(float)uVar13;
        *(double *)&param_7->field_0x8 = (double)fStack_d4;
        *(double *)&param_7->field_0x10 = (double)local_d0;
        *param_5 = local_res8;
        return true;
      }
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351449>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x267,"LengthScale > TNumericLimits<FReal>::Min()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  return false;
}

// Raycast @ 143b71f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::Raycast
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  double dVar12;
  uint uVar14;
  undefined1 auVar13 [16];
  undefined8 in_XMM3_Qb;
  undefined1 auVar15 [16];
  float fVar16;
  double local_res8;
  float fStack_d4;
  float local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  
  auVar15._8_8_ = in_XMM3_Qb;
  auVar15._0_8_ = param_3;
  if ((param_3 <= 0.0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351456>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x260,"Length > 0"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  dVar3 = __real_3ff0000000000000;
  dVar12 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
           __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351455>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x261,"FMath::IsNearlyEqual(Dir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if (param_4 != 0.0) {
    auVar15 = ZEXT416((uint)__real_322bcc77);
    if (((__real_322bcc77 <
          (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
        (__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
                __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3369118521899351454>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                           ,0x262,
                           "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  local_b0 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_a8 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_a0 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_c8 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_c0 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_b8 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  auVar13._0_8_ = local_c0 * local_c0 + local_c8 * local_c8 + local_b8 * local_b8;
  auVar13._8_8_ = 0;
  auVar15 = sqrtpd(auVar15,auVar13);
  dVar12 = auVar15._0_8_;
  if (__real_0010000000000000 < dVar12) {
    dVar3 = dVar3 / dVar12;
    local_c8 = local_c8 * dVar3;
    local_c0 = local_c0 * dVar3;
    local_b8 = local_b8 * dVar3;
    bVar5 = FTriangleMeshImplicitObject::Raycast
                      ((this->MObject).Reference,(TVector<double,3> *)&local_b0,
                       (TVector<double,3> *)&local_c8,dVar12 * param_3,
                       (double)*(float *)((longlong)&this->_padding_ + 4) * param_4,&local_res8,
                       (TVector<double,3> *)&local_98,(TVector<double,3> *)&local_80,param_8);
    if (bVar5) {
      local_res8 = local_res8 * dVar3;
      if (local_res8 == 0.0) {
        uVar4 = *(undefined8 *)&param_1->field_0x8;
        *(undefined8 *)param_6 = *(undefined8 *)param_1;
        *(undefined8 *)&param_6->field_0x8 = uVar4;
        *(undefined8 *)&param_6->field_0x10 = *(undefined8 *)&param_1->field_0x10;
        uVar7 = *(uint *)&param_2->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar8 = *(uint *)&param_2->field_0x8 ^ _UNK_15066df78;
        uVar9 = *(uint *)&param_2->field_0xc ^ _UNK_15066df7c;
        uVar10 = (uint)*(undefined8 *)&param_2->field_0x10 ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar14 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        *(uint *)param_7 = *(uint *)param_2 ^ (uint)__xmm_80000000000000008000000000000000;
        *(uint *)&param_7->field_0x4 = uVar7;
        *(uint *)&param_7->field_0x8 = uVar8;
        *(uint *)&param_7->field_0xc = uVar9;
        *(ulonglong *)&param_7->field_0x10 = CONCAT44(uVar14,uVar10);
        *param_5 = local_res8;
        return true;
      }
      if (local_res8 < param_3) {
        fVar16 = *(float *)((longlong)&this->_padding_ + 4);
        fVar1 = *(float *)&this->_padding_;
        *(double *)param_6 = (double)((float)local_98 * *(float *)&this->_padding_);
        *(double *)&param_6->field_0x8 = (double)((float)local_90 * fVar16);
        *(double *)&param_6->field_0x10 = (double)((float)local_88 * fVar1);
        fStack_d4 = (float)local_78 * *(float *)&this->_padding_;
        uVar11 = (float)local_80 * *(float *)((longlong)&this->_padding_ + 4);
        local_d0 = (float)local_70 * *(float *)((longlong)&this->_padding_ + 4);
        fVar16 = (float)uVar11 * (float)uVar11 + fStack_d4 * fStack_d4 + local_d0 * local_d0;
        if (fVar16 != __real_3f800000) {
          if (__real_00800000 <= fVar16) {
            fVar16 = __real_3f800000 / SQRT(fVar16);
            fStack_d4 = fStack_d4 * fVar16;
            local_d0 = local_d0 * fVar16;
            uVar11 = (float)uVar11 * fVar16;
          }
          else {
            fStack_d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
            local_d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          }
        }
        *(double *)param_7 = (double)(float)uVar11;
        *(double *)&param_7->field_0x8 = (double)fStack_d4;
        *(double *)&param_7->field_0x10 = (double)local_d0;
        *param_5 = local_res8;
        return true;
      }
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351449>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x267,"LengthScale > TNumericLimits<FReal>::Min()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  return false;
}

// Serialize @ 143b76860

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::Serialize
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,FChaosArchive *param_1)

{
  int iVar1;
  FArchive *pFVar2;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  FChaosArchive::SerializePtr<Chaos::FImplicitObject>(param_1,&this->MObject);
  pFVar2 = operator<<<3>((FArchive *)param_1,(TVector<float,3> *)&this->_padding_);
  operator<<<3>(pFVar2,(TVector<float,3> *)((longlong)&this->_padding_ + 4));
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,(TAABB<double,3> *)&this->_padding_);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar1 < 0xc) {
    *(byte *)&this->_padding_ = ((this->MObject).Reference)->Type | 0x80;
  }
  return;
}

// Serialize @ 143b76920

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::Serialize
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,FChaosArchive *param_1)

{
  int iVar1;
  FChaosArchive *pFVar2;
  FArchive *pFVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  pFVar2 = operator<<<Chaos::FTriangleMeshImplicitObject>(param_1,&this->MObject);
  pFVar3 = operator<<<3>((FArchive *)pFVar2,(TVector<float,3> *)&this->_padding_);
  operator<<<3>(pFVar3,(TVector<float,3> *)((longlong)&this->_padding_ + 4));
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,(TAABB<double,3> *)&this->_padding_);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar1 < 0xc) {
    *(byte *)&this->_padding_ = (byte)((this->MObject).Reference)->_padding_ | 0x80;
  }
  return;
}

// SetScale @ 143b78c40

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::SetScale
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,TVector<double,3> *param_1)

{
  float fVar1;
  FImplicitObject *pFVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  fVar1 = __real_358637bd;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar9 = *(double *)&param_1->field_0x8;
  dVar8 = *(double *)&param_1->field_0x10;
  fVar5 = (float)*(double *)param_1;
  if ((float)((uint)(float)*(double *)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      __real_358637bd) {
    fVar5 = __real_358637bd;
  }
  *(float *)&this->_padding_ = fVar5;
  fVar3 = __real_3f800000;
  *(float *)((longlong)&this->_padding_ + 4) = __real_3f800000 / fVar5;
  fVar5 = (float)dVar9;
  if ((float)((uint)(float)dVar9 & uVar4) < fVar1) {
    fVar5 = fVar1;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar5;
  *(float *)&this->_padding_ = fVar3 / fVar5;
  if (fVar1 <= (float)((uint)(float)dVar8 & uVar4)) {
    fVar1 = (float)dVar8;
  }
  *(float *)&this->_padding_ = fVar1;
  *(float *)((longlong)&this->_padding_ + 4) = fVar3 / fVar1;
  fVar1 = *(float *)&this->_padding_;
  fVar5 = (float)(**(code **)(((this->MObject).Reference)->_padding_ + 0x28))();
  pFVar2 = (this->MObject).Reference;
  *(float *)&this->_padding_ = fVar5 * fVar1 + *(float *)&this->_padding_;
  (**(code **)(pFVar2->_padding_ + 0x90))(pFVar2,&local_78);
  local_78 = (double)*(float *)&this->_padding_ * local_78;
  local_68 = (double)*(float *)&this->_padding_ * local_68;
  local_70 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_70;
  this->_padding_ = (longlong)local_78;
  this->_padding_ = (longlong)local_70;
  this->_padding_ = (longlong)local_68;
  this->_padding_ = (longlong)local_78;
  this->_padding_ = (longlong)local_70;
  this->_padding_ = (longlong)local_68;
  local_60 = (double)*(float *)&this->_padding_ * local_60;
  local_58 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_58;
  dVar9 = local_60;
  if ((double)this->_padding_ <= local_60) {
    dVar9 = (double)this->_padding_;
  }
  local_50 = (double)*(float *)&this->_padding_ * local_50;
  dVar8 = local_58;
  if (local_70 <= local_58) {
    dVar8 = local_70;
  }
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar8;
  dVar9 = local_50;
  if (local_68 <= local_50) {
    dVar9 = local_68;
  }
  this->_padding_ = (longlong)dVar9;
  dVar9 = (double)this->_padding_;
  uVar6 = SUB84(dVar9,0);
  uVar7 = (int)((ulonglong)dVar9 >> 0x20);
  if (dVar9 <= local_58) {
    uVar6 = SUB84(local_58,0);
    uVar7 = (int)((ulonglong)local_58 >> 0x20);
  }
  if (local_60 <= (double)this->_padding_) {
    local_60 = (double)this->_padding_;
  }
  dVar9 = (double)this->_padding_;
  if ((double)this->_padding_ <= local_50) {
    dVar9 = local_50;
  }
  this->_padding_ = (longlong)local_60;
  this->_padding_ = CONCAT44(uVar7,uVar6);
  this->_padding_ = (longlong)dVar9;
  return;
}

// SetScale @ 143b78e00

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::SetScale
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          TVector<double,3> *param_1)

{
  FTriangleMeshImplicitObject *pFVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  fVar10 = __real_358637bd;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar13 = *(double *)&param_1->field_0x8;
  dVar9 = *(double *)&param_1->field_0x10;
  fVar2 = (float)*(double *)param_1;
  if ((float)((uint)(float)*(double *)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      __real_358637bd) {
    fVar2 = __real_358637bd;
  }
  *(float *)&this->_padding_ = fVar2;
  fVar3 = __real_3f800000;
  *(float *)((longlong)&this->_padding_ + 4) = __real_3f800000 / fVar2;
  fVar12 = (float)dVar13;
  if ((float)((uint)(float)dVar13 & uVar4) < fVar10) {
    fVar12 = fVar10;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar12;
  *(float *)&this->_padding_ = fVar3 / fVar12;
  if (fVar10 <= (float)((uint)(float)dVar9 & uVar4)) {
    fVar10 = (float)dVar9;
  }
  *(float *)&this->_padding_ = fVar10;
  *(float *)((longlong)&this->_padding_ + 4) = fVar3 / fVar10;
  pFVar1 = (this->MObject).Reference;
  *(float *)&this->_padding_ = fVar2 * *(float *)&pFVar1->_padding_ + *(float *)&this->_padding_;
  dVar13 = *(double *)&(pFVar1->MLocalBoundingBox).MMax.field_0x10;
  dVar15 = *(double *)&(pFVar1->MLocalBoundingBox).MMax;
  dVar14 = *(double *)&(pFVar1->MLocalBoundingBox).MMax.field_0x8;
  dVar7 = (double)fVar2 * *(double *)&(pFVar1->MLocalBoundingBox).MMin;
  dVar11 = (double)*(float *)((longlong)&this->_padding_ + 4) *
           *(double *)&(pFVar1->MLocalBoundingBox).MMin.field_0x8;
  dVar9 = (double)*(float *)&this->_padding_ *
          *(double *)&(pFVar1->MLocalBoundingBox).MMin.field_0x10;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar11;
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar11;
  this->_padding_ = (longlong)dVar9;
  dVar15 = (double)*(float *)&this->_padding_ * dVar15;
  dVar14 = (double)*(float *)((longlong)&this->_padding_ + 4) * dVar14;
  dVar7 = dVar15;
  if ((double)this->_padding_ <= dVar15) {
    dVar7 = (double)this->_padding_;
  }
  dVar13 = (double)*(float *)&this->_padding_ * dVar13;
  dVar8 = dVar14;
  if (dVar11 <= dVar14) {
    dVar8 = dVar11;
  }
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar8;
  dVar7 = dVar13;
  if (dVar9 <= dVar13) {
    dVar7 = dVar9;
  }
  this->_padding_ = (longlong)dVar7;
  dVar9 = (double)this->_padding_;
  uVar5 = SUB84(dVar9,0);
  uVar6 = (undefined4)((ulonglong)dVar9 >> 0x20);
  if (dVar9 <= dVar15) {
    uVar5 = SUB84(dVar15,0);
    uVar6 = (undefined4)((ulonglong)dVar15 >> 0x20);
  }
  dVar9 = (double)this->_padding_;
  if ((double)this->_padding_ <= dVar14) {
    dVar9 = dVar14;
  }
  dVar7 = (double)this->_padding_;
  if ((double)this->_padding_ <= dVar13) {
    dVar7 = dVar13;
  }
  this->_padding_ = CONCAT44(uVar6,uVar5);
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar7;
  return;
}

// ToString @ 143b7c750

FString * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::ToString
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,FString *__return_storage_ptr__)

{
  FImplicitObject *pFVar1;
  void *local_58 [10];
  
  pFVar1 = (this->MObject).Reference;
  (**(code **)(pFVar1->_padding_ + 0xf8))(pFVar1,local_58);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  return __return_storage_ptr__;
}

// ToString @ 143b7c820

FString * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::ToString
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,
          FString *__return_storage_ptr__)

{
  FString local_58 [5];
  
  ::FString::PrintfImpl(local_58,L"TriangleMesh");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f");
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CopyGeometry @ 143bfe7b0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::CopyGeometry
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this)

{
  TImplicitObjectScaled<Chaos::FLevelSet,1> *pTVar1;
  FImplicitObject *in_RDX;
  
  pTVar1 = CopyHelper(this);
  in_RDX->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TImplicitObjectScaled<Chaos::FLevelSet,1> *)0x0) {
    LOCK();
    *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometry @ 143bfe7e0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::CopyGeometry
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this)

{
  TImplicitObjectScaled<Chaos::FMLLevelSet,1> *pTVar1;
  FImplicitObject *in_RDX;
  
  pTVar1 = CopyHelper(this);
  in_RDX->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *)0x0) {
    LOCK();
    *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 143bfec20

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::CopyGeometryWithScale
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this,TVector<double,3> *param_1)

{
  TImplicitObjectScaled<Chaos::FLevelSet,1> *this_00;
  double *in_R8;
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = CopyHelper(this);
  local_28 = (double)*(float *)&this_00->_padding_ * *in_R8;
  local_20 = (double)*(float *)((longlong)&this_00->_padding_ + 4) * in_R8[1];
  local_18 = (double)*(float *)&this_00->_padding_ * in_R8[2];
  SetScale(this_00,(TVector<double,3> *)&local_28);
  *(TImplicitObjectScaled<Chaos::FLevelSet,1> **)param_1 = this_00;
  if (this_00 != (TImplicitObjectScaled<Chaos::FLevelSet,1> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CopyGeometryWithScale @ 143bfecb0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::CopyGeometryWithScale
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this,TVector<double,3> *param_1)

{
  TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this_00;
  double *in_R8;
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = CopyHelper(this);
  local_28 = (double)*(float *)&this_00->_padding_ * *in_R8;
  local_20 = (double)*(float *)((longlong)&this_00->_padding_ + 4) * in_R8[1];
  local_18 = (double)*(float *)&this_00->_padding_ * in_R8[2];
  SetScale(this_00,(TVector<double,3> *)&local_28);
  *(TImplicitObjectScaled<Chaos::FMLLevelSet,1> **)param_1 = this_00;
  if (this_00 != (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CopyHelper @ 143bff230

TImplicitObjectScaled<Chaos::FLevelSet,1> * __cdecl
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::CopyHelper
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *param_1)

{
  longlong *plVar1;
  float fVar2;
  FLevelSet *this;
  longlong lVar3;
  uchar uVar4;
  TImplicitObjectScaled<Chaos::FLevelSet,1> *this_00;
  double local_38;
  double local_30;
  double local_28;
  
  this_00 = ::operator_new(0x78);
  if (this_00 == (TImplicitObjectScaled<Chaos::FLevelSet,1> *)0x0) {
    return (TImplicitObjectScaled<Chaos::FLevelSet,1> *)0x0;
  }
  local_38 = (double)*(float *)&param_1->_padding_;
  fVar2 = *(float *)&param_1->_padding_;
  this = (param_1->MObject).Reference;
  local_28 = (double)*(float *)&param_1->_padding_;
  local_30 = (double)*(float *)((longlong)&param_1->_padding_ + 4);
  if (this != (FLevelSet *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  uVar4 = FImplicitObject::GetType((FImplicitObject *)this);
  FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this_00,2,uVar4);
  this_00->_padding_ = (longlong)&___7__TImplicitObjectScaled_VFLevelSet_Chaos___00_Chaos__6B_;
  (this_00->MObject).Reference = this;
  if (this == (FLevelSet *)0x0) {
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
  }
  else {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
    LOCK();
    plVar1 = &this->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
      (**(code **)this->_padding_)(this,1);
      return this_00;
    }
  }
  return this_00;
}

// CopyHelper @ 143bff350

TImplicitObjectScaled<Chaos::FMLLevelSet,1> * __cdecl
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::CopyHelper
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *param_1)

{
  longlong *plVar1;
  float fVar2;
  FMLLevelSet *this;
  longlong lVar3;
  uchar uVar4;
  TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this_00;
  double local_38;
  double local_30;
  double local_28;
  
  this_00 = ::operator_new(0x78);
  if (this_00 == (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *)0x0) {
    return (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *)0x0;
  }
  local_38 = (double)*(float *)&param_1->_padding_;
  fVar2 = *(float *)&param_1->_padding_;
  this = (param_1->MObject).Reference;
  local_28 = (double)*(float *)&param_1->_padding_;
  local_30 = (double)*(float *)((longlong)&param_1->_padding_ + 4);
  if (this != (FMLLevelSet *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  uVar4 = FImplicitObject::GetType((FImplicitObject *)this);
  FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this_00,2,uVar4);
  this_00->_padding_ = (longlong)&___7__TImplicitObjectScaled_VFMLLevelSet_Chaos___00_Chaos__6B_;
  (this_00->MObject).Reference = this;
  if (this == (FMLLevelSet *)0x0) {
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
  }
  else {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
    LOCK();
    plVar1 = &this->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
      (**(code **)this->_padding_)(this,1);
      return this_00;
    }
  }
  return this_00;
}

// FindClosestFaceAndVertices @ 143c034c0

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::FindClosestFaceAndVertices
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this,TVector<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  return -1;
}

// FindClosestFaceAndVertices @ 143c034d0

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::FindClosestFaceAndVertices
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this,TVector<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  return -1;
}

// FindClosestIntersectionImp @ 143c034e0

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::FindClosestIntersectionImp
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this,
          Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  Pair<Chaos::TVector<double,3>,bool> *pPVar6;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (*(float *)&this->_padding_ != 0.0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351169>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x37f,"OuterMargin == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pPVar6 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar6;
    }
  }
  local_20 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_18 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_10 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_38 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_30 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_28 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  FImplicitObject::FindClosestIntersection
            ((FImplicitObject *)(this->MObject).Reference,__return_storage_ptr__,
             (TVector<double,3> *)&local_20,(TVector<double,3> *)&local_38,param_3);
  if (__return_storage_ptr__->Second != false) {
    fVar1 = *(float *)&this->_padding_;
    dVar3 = *(double *)&__return_storage_ptr__->First;
    fVar2 = *(float *)&this->_padding_;
    *(double *)&(__return_storage_ptr__->First).field_0x8 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x8 *
                 *(float *)((longlong)&this->_padding_ + 4));
    *(double *)&(__return_storage_ptr__->First).field_0x10 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x10 * fVar1);
    *(double *)&__return_storage_ptr__->First = (double)((float)dVar3 * fVar2);
  }
  return __return_storage_ptr__;
}

// FindClosestIntersectionImp @ 143c03650

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::FindClosestIntersectionImp
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this,
          Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  Pair<Chaos::TVector<double,3>,bool> *pPVar6;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (*(float *)&this->_padding_ != 0.0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351169>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x37f,"OuterMargin == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pPVar6 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar6;
    }
  }
  local_20 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_18 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_10 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_38 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_30 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_28 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  FImplicitObject::FindClosestIntersection
            ((FImplicitObject *)(this->MObject).Reference,__return_storage_ptr__,
             (TVector<double,3> *)&local_20,(TVector<double,3> *)&local_38,param_3);
  if (__return_storage_ptr__->Second != false) {
    fVar1 = *(float *)&this->_padding_;
    dVar3 = *(double *)&__return_storage_ptr__->First;
    fVar2 = *(float *)&this->_padding_;
    *(double *)&(__return_storage_ptr__->First).field_0x8 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x8 *
                 *(float *)((longlong)&this->_padding_ + 4));
    *(double *)&(__return_storage_ptr__->First).field_0x10 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x10 * fVar1);
    *(double *)&__return_storage_ptr__->First = (double)((float)dVar3 * fVar2);
  }
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 143c037c0

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::FindGeometryOpposingNormal
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this,TVector<double,3> *__return_storage_ptr__
          ,TVector<double,3> *param_1,int param_2,TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  TVector<double,3> *pTVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar8 = __real_3ff0000000000000;
  dVar13 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar11 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar11) &&
      (double)CONCAT44(uVar12,uVar11) != __real_3f1a36e2e0000000) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351205>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x35b,
                       "FMath::IsNearlyEqual(OriginalNormal.SizeSquared(), FReal(1), FReal((1.e-4f)))"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar3)();
      return pTVar7;
    }
  }
  dVar14 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_3->field_0x8;
  dVar15 = (double)*(float *)&this->_padding_ * *(double *)param_3;
  dVar13 = (double)*(float *)&this->_padding_ * *(double *)&param_3->field_0x10;
  auVar9._0_8_ = dVar15 * dVar15;
  auVar9._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar14 * dVar14 + auVar9._0_8_ + dVar13 * dVar13;
  auVar10 = sqrtpd(auVar9,auVar10);
  if (auVar10._0_8_ <= __real_3e45798ee0000000) {
    dVar14 = 0.0;
    dVar4 = 0.0;
  }
  else {
    dVar4 = dVar8 / auVar10._0_8_;
    dVar8 = dVar4 * dVar13;
    dVar14 = dVar4 * dVar14;
    dVar4 = dVar4 * dVar15;
  }
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)*(float *)&this->_padding_ * dVar14;
  dVar13 = __real_0010000000000000;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar1 * dVar8;
  *(double *)__return_storage_ptr__ = (double)fVar2 * dVar4;
  dVar13 = TVector<double,3>::SafeNormalize(__return_storage_ptr__,dVar13);
  if (dVar13 == 0.0) {
    uVar5 = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  }
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 143c03950

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::FindGeometryOpposingNormal
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this,
          TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,int param_2,
          TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  TVector<double,3> *pTVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar8 = __real_3ff0000000000000;
  dVar13 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar11 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar11) &&
      (double)CONCAT44(uVar12,uVar11) != __real_3f1a36e2e0000000) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351205>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x35b,
                       "FMath::IsNearlyEqual(OriginalNormal.SizeSquared(), FReal(1), FReal((1.e-4f)))"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar3)();
      return pTVar7;
    }
  }
  dVar14 = (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)&param_3->field_0x8;
  dVar15 = (double)*(float *)&this->_padding_ * *(double *)param_3;
  dVar13 = (double)*(float *)&this->_padding_ * *(double *)&param_3->field_0x10;
  auVar9._0_8_ = dVar15 * dVar15;
  auVar9._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar14 * dVar14 + auVar9._0_8_ + dVar13 * dVar13;
  auVar10 = sqrtpd(auVar9,auVar10);
  if (auVar10._0_8_ <= __real_3e45798ee0000000) {
    dVar14 = 0.0;
    dVar4 = 0.0;
  }
  else {
    dVar4 = dVar8 / auVar10._0_8_;
    dVar8 = dVar4 * dVar13;
    dVar14 = dVar4 * dVar14;
    dVar4 = dVar4 * dVar15;
  }
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)*(float *)&this->_padding_ * dVar14;
  dVar13 = __real_0010000000000000;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar1 * dVar8;
  *(double *)__return_storage_ptr__ = (double)fVar2 * dVar4;
  dVar13 = TVector<double,3>::SafeNormalize(__return_storage_ptr__,dVar13);
  if (dVar13 == 0.0) {
    uVar5 = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  }
  return __return_storage_ptr__;
}

// FindMostOpposingFace @ 143c03ae0

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::FindMostOpposingFace
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,int param_3,double param_4)

{
  int iVar1;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = (double)*(float *)&this->_padding_;
  local_20 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_18 = (double)*(float *)&this->_padding_;
  iVar1 = FImplicitObject::FindMostOpposingFaceScaled
                    ((FImplicitObject *)(this->MObject).Reference,param_1,param_2,param_3,param_4,
                     (TVector<double,3> *)&local_28);
  return iVar1;
}

// FindMostOpposingFace @ 143c03b40

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::FindMostOpposingFace
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,int param_3,double param_4)

{
  int iVar1;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = (double)*(float *)&this->_padding_;
  local_20 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_18 = (double)*(float *)&this->_padding_;
  iVar1 = FImplicitObject::FindMostOpposingFaceScaled
                    ((FImplicitObject *)(this->MObject).Reference,param_1,param_2,param_3,param_4,
                     (TVector<double,3> *)&local_28);
  return iVar1;
}

// GetInnerObject @ 143c06b80

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::GetInnerObject
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)(this->MObject).Reference;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GetInnerObject @ 143c06ba0

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::GetInnerObject
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)(this->MObject).Reference;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GetMaterialIndex @ 143c06f50

ushort __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::GetMaterialIndex
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this,uint param_1)

{
  return 0;
}

// GetMaterialIndex @ 143c06f60

ushort __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::GetMaterialIndex
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this,uint param_1)

{
  return 0;
}

// GetNestedType @ 143c071b0

uchar __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::GetNestedType
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this)

{
  uchar uVar1;
  
  uVar1 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  return uVar1;
}

// GetNestedType @ 143c071c0

uchar __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::GetNestedType
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this)

{
  uchar uVar1;
  
  uVar1 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  return uVar1;
}

// GetRadius @ 143c07560

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::GetRadius
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this)

{
  return 0.0;
}

// GetRadius @ 143c07570

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::GetRadius
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this)

{
  return 0.0;
}

// GetRadiusf @ 143c07580

float __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::GetRadiusf
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this)

{
  return 0.0;
}

// GetRadiusf @ 143c07590

float __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::GetRadiusf
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this)

{
  return 0.0;
}

// GetTypeHash @ 143c07710

uint __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::GetTypeHash
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this)

{
  FLevelSet *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar5 = FCrc::MemCrc_DEPRECATED(&this->_padding_,0xc,0);
  pFVar1 = (this->MObject).Reference;
  uVar8 = 0;
  uVar7 = 0;
  lVar10 = (longlong)*(int *)&(pFVar1->MPhi).field_0x18;
  if (0 < lVar10) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&(pFVar1->MPhi).field_0x18) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      uVar8 = uVar8 + 1;
      uVar2 = *(undefined8 *)(*(longlong *)&(pFVar1->MPhi).field_0x10 + lVar11 * 8);
      lVar11 = lVar11 + 1;
      uVar6 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
      uVar7 = uVar7 - uVar6 ^ uVar6 >> 0xd;
      uVar9 = (-0x61c88647 - uVar7) - uVar6 ^ uVar7 << 8;
      uVar6 = (uVar6 - uVar9) - uVar7 ^ uVar9 >> 0xd;
      uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 >> 0xc;
      uVar9 = (uVar9 - uVar7) - uVar6 ^ uVar7 << 0x10;
      uVar6 = (uVar6 - uVar9) - uVar7 ^ uVar9 >> 5;
      uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 >> 3;
      uVar9 = (uVar9 - uVar7) - uVar6 ^ uVar7 << 10;
      uVar7 = (uVar6 - uVar9) - uVar7 ^ uVar9 >> 0xf;
    } while (lVar11 < lVar10);
  }
  uVar7 = uVar7 - uVar5 ^ uVar5 >> 0xd;
  uVar6 = (-0x61c88647 - uVar7) - uVar5 ^ uVar7 << 8;
  uVar8 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar5 = (uVar7 - uVar8) - uVar6 ^ uVar8 >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 0x10;
  uVar7 = (uVar8 - uVar6) - uVar5 ^ uVar6 >> 5;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar8 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 10;
  return (uVar7 - uVar8) - uVar5 ^ uVar8 >> 0xf;
}

// GetTypeHash @ 143c078e0

uint __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::GetTypeHash
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&this->_padding_,0xc,0);
  uVar2 = FMLLevelSet::GetTypeHash((this->MObject).Reference);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// InitScaledImplicit @ 143c0a960

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::InitScaledImplicit
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this,TVector<double,3> *param_1,float param_2)

{
  FLevelSet *pFVar1;
  code *pcVar2;
  uchar uVar3;
  byte bVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((char)uVar3 < '\0') {
    local_res18[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(local_res18);
  }
  bVar4 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((bVar4 & 0x40) != 0) {
    local_res8[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_res8);
  }
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((uVar3 == '\x04') || (uVar3 == '\x05')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&pFVar1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&pFVar1->_padding_ + 5);
  *(float *)&this->_padding_ = param_2;
  SetScale(this,param_1);
  return;
}

// InitScaledImplicit @ 143c0aa30

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::InitScaledImplicit
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this,TVector<double,3> *param_1,
          float param_2)

{
  FMLLevelSet *pFVar1;
  code *pcVar2;
  uchar uVar3;
  byte bVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((char)uVar3 < '\0') {
    local_res18[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(local_res18);
  }
  bVar4 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((bVar4 & 0x40) != 0) {
    local_res8[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_res8);
  }
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((uVar3 == '\x04') || (uVar3 == '\x05')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&pFVar1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&pFVar1->_padding_ + 5);
  *(float *)&this->_padding_ = param_2;
  SetScale(this,param_1);
  return;
}

// Overlap @ 143c0e1c0

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::Overlap
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this,TVector<double,3> *param_1,double param_2
          )

{
  float fVar1;
  double dVar2;
  double local_48;
  double local_40;
  double local_38;
  
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  local_48 = (double)((float)*(double *)param_1 * fVar1);
  local_40 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_38 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  dVar2 = FImplicitObject::SignedDistance
                    ((FImplicitObject *)(this->MObject).Reference,(TVector<double,3> *)&local_48);
  return dVar2 <= (double)fVar1 * param_2;
}

// Overlap @ 143c0e250

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::Overlap
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this,TVector<double,3> *param_1,
          double param_2)

{
  float fVar1;
  double dVar2;
  double local_48;
  double local_40;
  double local_38;
  
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  local_48 = (double)((float)*(double *)param_1 * fVar1);
  local_40 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_38 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  dVar2 = FImplicitObject::SignedDistance
                    ((FImplicitObject *)(this->MObject).Reference,(TVector<double,3> *)&local_48);
  return dVar2 <= (double)fVar1 * param_2;
}

// PhiWithNormal @ 143c0efc0

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::PhiWithNormal
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  FLevelSet *pFVar3;
  double dVar4;
  double dVar5;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  pFVar3 = (this->MObject).Reference;
  fVar1 = *(float *)&this->_padding_;
  fVar2 = *(float *)&this->_padding_;
  dVar5 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_78 = *(double *)param_1 / (double)fVar2;
  local_68 = *(double *)&param_1->field_0x10 / (double)fVar1;
  local_70 = *(double *)&param_1->field_0x8 / dVar5;
  dVar4 = (double)(**(code **)(pFVar3->_padding_ + 0x80))(pFVar3,&local_78,&local_60);
  *(double *)param_2 = (double)fVar2 * local_60;
  *(double *)&param_2->field_0x8 = dVar5 * local_58;
  *(double *)&param_2->field_0x10 = (double)fVar1 * local_50;
  dVar5 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
  return dVar5 * dVar4;
}

// PhiWithNormal @ 143c0f0b0

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::PhiWithNormal
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  FMLLevelSet *pFVar3;
  double dVar4;
  double dVar5;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  pFVar3 = (this->MObject).Reference;
  fVar1 = *(float *)&this->_padding_;
  fVar2 = *(float *)&this->_padding_;
  dVar5 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_78 = *(double *)param_1 / (double)fVar2;
  local_68 = *(double *)&param_1->field_0x10 / (double)fVar1;
  local_70 = *(double *)&param_1->field_0x8 / dVar5;
  dVar4 = (double)(**(code **)(pFVar3->_padding_ + 0x80))(pFVar3,&local_78,&local_60);
  *(double *)param_2 = (double)fVar2 * local_60;
  *(double *)&param_2->field_0x8 = dVar5 * local_58;
  *(double *)&param_2->field_0x10 = (double)fVar1 * local_50;
  dVar5 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
  return dVar5 * dVar4;
}

// Raycast @ 143c102a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::Raycast
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,double param_4,double *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8)

{
  float fVar1;
  FLevelSet *this_00;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  TVector<double,3> *pTVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  uint uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar20 [16];
  float fStack_154;
  float local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_100 [16];
  double local_f0;
  bool local_e8;
  TVector<double,3> local_e0 [4];
  
  if ((param_3 <= 0.0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351456>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x260,"Length > 0"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  dVar3 = __real_3ff0000000000000;
  dVar13 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
           __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351455>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x261,"FMath::IsNearlyEqual(Dir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((param_4 != 0.0) &&
     (((__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
      (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3369118521899351454>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                          ,0x262,
                          "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                         ), bVar5)))) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  fVar12 = *(float *)((longlong)&this->_padding_ + 4);
  local_148 = (double)((float)*(double *)param_1 * fVar12);
  dVar13 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_140 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_138 = (double)((float)*(double *)&param_1->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  dVar18 = (double)((float)*(double *)param_2 * fVar12);
  dVar16 = (double)((float)*(double *)&param_2->field_0x10 *
                   *(float *)((longlong)&this->_padding_ + 4));
  auVar20._0_8_ = dVar13 * dVar13 + dVar18 * dVar18 + dVar16 * dVar16;
  auVar20._8_8_ = 0;
  auVar20 = sqrtpd(unaff_XMM11,auVar20);
  dVar19 = auVar20._0_8_;
  if (__real_0010000000000000 < dVar19) {
    this_00 = (this->MObject).Reference;
    dVar3 = dVar3 / dVar19;
    *param_8 = -1;
    dVar19 = dVar19 * param_3;
    local_118 = dVar3 * dVar18 * dVar19 + local_148;
    local_110 = dVar3 * dVar13 * dVar19 + local_140;
    local_108 = dVar3 * dVar16 * dVar19 + local_138;
    FImplicitObject::FindClosestIntersection
              ((FImplicitObject *)this_00,(Pair<Chaos::TVector<double,3>,bool> *)local_100,
               (TVector<double,3> *)&local_148,(TVector<double,3> *)&local_118,
               (double)fVar12 * param_4);
    if (local_e8 != false) {
      pTVar7 = FImplicitObject::Normal
                         ((FImplicitObject *)this_00,local_e0,(TVector<double,3> *)local_100);
      dVar13 = *(double *)&pTVar7->field_0x10;
      dVar17 = 0.0;
      dVar16 = *(double *)pTVar7;
      dVar18 = *(double *)&pTVar7->field_0x8;
      if (0.0 < dVar19) {
        dVar17 = SQRT(((double)local_100._0_8_ - local_148) * ((double)local_100._0_8_ - local_148)
                      + ((double)local_100._8_8_ - local_140) *
                        ((double)local_100._8_8_ - local_140) +
                      (local_f0 - local_138) * (local_f0 - local_138));
      }
      dVar17 = dVar17 * dVar3;
      if (dVar17 == 0.0) {
        uVar4 = *(undefined8 *)&param_1->field_0x8;
        *(undefined8 *)param_6 = *(undefined8 *)param_1;
        *(undefined8 *)&param_6->field_0x8 = uVar4;
        *(undefined8 *)&param_6->field_0x10 = *(undefined8 *)&param_1->field_0x10;
        uVar8 = *(uint *)&param_2->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar9 = *(uint *)&param_2->field_0x8 ^ _UNK_15066df78;
        uVar10 = *(uint *)&param_2->field_0xc ^ _UNK_15066df7c;
        uVar11 = (uint)*(undefined8 *)&param_2->field_0x10 ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar14 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        *(uint *)param_7 = *(uint *)param_2 ^ (uint)__xmm_80000000000000008000000000000000;
        *(uint *)&param_7->field_0x4 = uVar8;
        *(uint *)&param_7->field_0x8 = uVar9;
        *(uint *)&param_7->field_0xc = uVar10;
        *(ulonglong *)&param_7->field_0x10 = CONCAT44(uVar14,uVar11);
        *param_5 = dVar17;
        return true;
      }
      if (dVar17 < param_3) {
        fVar12 = *(float *)((longlong)&this->_padding_ + 4);
        fVar1 = *(float *)&this->_padding_;
        *(double *)param_6 = (double)((float)(double)local_100._0_8_ * *(float *)&this->_padding_);
        *(double *)&param_6->field_0x8 = (double)((float)(double)local_100._8_8_ * fVar12);
        *(double *)&param_6->field_0x10 = (double)((float)local_f0 * fVar1);
        fStack_154 = (float)dVar18 * *(float *)&this->_padding_;
        uVar15 = (float)dVar16 * *(float *)((longlong)&this->_padding_ + 4);
        local_150 = (float)dVar13 * *(float *)((longlong)&this->_padding_ + 4);
        fVar12 = (float)uVar15 * (float)uVar15 + fStack_154 * fStack_154 + local_150 * local_150;
        if (fVar12 != __real_3f800000) {
          if (__real_00800000 <= fVar12) {
            fVar12 = __real_3f800000 / SQRT(fVar12);
            uVar15 = (float)uVar15 * fVar12;
            fStack_154 = fVar12 * fStack_154;
            local_150 = fVar12 * local_150;
          }
          else {
            fStack_154 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
            local_150 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          }
        }
        *(double *)param_7 = (double)(float)uVar15;
        *(double *)&param_7->field_0x8 = (double)fStack_154;
        *(double *)&param_7->field_0x10 = (double)local_150;
        *param_5 = dVar17;
        return true;
      }
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351449>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x267,"LengthScale > TNumericLimits<FReal>::Min()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  return false;
}

// Raycast @ 143c107f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::Raycast
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,double param_4,double *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8)

{
  float fVar1;
  FMLLevelSet *this_00;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  TVector<double,3> *pTVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  uint uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar20 [16];
  float fStack_154;
  float local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_100 [16];
  double local_f0;
  bool local_e8;
  TVector<double,3> local_e0 [4];
  
  if ((param_3 <= 0.0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351456>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x260,"Length > 0"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  dVar3 = __real_3ff0000000000000;
  dVar13 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
           __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351455>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x261,"FMath::IsNearlyEqual(Dir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((param_4 != 0.0) &&
     (((__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) ||
       (__real_322bcc77 <
        (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
      (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3369118521899351454>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                          ,0x262,
                          "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                         ), bVar5)))) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  fVar12 = *(float *)((longlong)&this->_padding_ + 4);
  local_148 = (double)((float)*(double *)param_1 * fVar12);
  dVar13 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_140 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_138 = (double)((float)*(double *)&param_1->field_0x10 *
                      *(float *)((longlong)&this->_padding_ + 4));
  dVar18 = (double)((float)*(double *)param_2 * fVar12);
  dVar16 = (double)((float)*(double *)&param_2->field_0x10 *
                   *(float *)((longlong)&this->_padding_ + 4));
  auVar20._0_8_ = dVar13 * dVar13 + dVar18 * dVar18 + dVar16 * dVar16;
  auVar20._8_8_ = 0;
  auVar20 = sqrtpd(unaff_XMM11,auVar20);
  dVar19 = auVar20._0_8_;
  if (__real_0010000000000000 < dVar19) {
    this_00 = (this->MObject).Reference;
    dVar3 = dVar3 / dVar19;
    *param_8 = -1;
    dVar19 = dVar19 * param_3;
    local_118 = dVar3 * dVar18 * dVar19 + local_148;
    local_110 = dVar3 * dVar13 * dVar19 + local_140;
    local_108 = dVar3 * dVar16 * dVar19 + local_138;
    FImplicitObject::FindClosestIntersection
              ((FImplicitObject *)this_00,(Pair<Chaos::TVector<double,3>,bool> *)local_100,
               (TVector<double,3> *)&local_148,(TVector<double,3> *)&local_118,
               (double)fVar12 * param_4);
    if (local_e8 != false) {
      pTVar7 = FImplicitObject::Normal
                         ((FImplicitObject *)this_00,local_e0,(TVector<double,3> *)local_100);
      dVar13 = *(double *)&pTVar7->field_0x10;
      dVar17 = 0.0;
      dVar16 = *(double *)pTVar7;
      dVar18 = *(double *)&pTVar7->field_0x8;
      if (0.0 < dVar19) {
        dVar17 = SQRT(((double)local_100._0_8_ - local_148) * ((double)local_100._0_8_ - local_148)
                      + ((double)local_100._8_8_ - local_140) *
                        ((double)local_100._8_8_ - local_140) +
                      (local_f0 - local_138) * (local_f0 - local_138));
      }
      dVar17 = dVar17 * dVar3;
      if (dVar17 == 0.0) {
        uVar4 = *(undefined8 *)&param_1->field_0x8;
        *(undefined8 *)param_6 = *(undefined8 *)param_1;
        *(undefined8 *)&param_6->field_0x8 = uVar4;
        *(undefined8 *)&param_6->field_0x10 = *(undefined8 *)&param_1->field_0x10;
        uVar8 = *(uint *)&param_2->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar9 = *(uint *)&param_2->field_0x8 ^ _UNK_15066df78;
        uVar10 = *(uint *)&param_2->field_0xc ^ _UNK_15066df7c;
        uVar11 = (uint)*(undefined8 *)&param_2->field_0x10 ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar14 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        *(uint *)param_7 = *(uint *)param_2 ^ (uint)__xmm_80000000000000008000000000000000;
        *(uint *)&param_7->field_0x4 = uVar8;
        *(uint *)&param_7->field_0x8 = uVar9;
        *(uint *)&param_7->field_0xc = uVar10;
        *(ulonglong *)&param_7->field_0x10 = CONCAT44(uVar14,uVar11);
        *param_5 = dVar17;
        return true;
      }
      if (dVar17 < param_3) {
        fVar12 = *(float *)((longlong)&this->_padding_ + 4);
        fVar1 = *(float *)&this->_padding_;
        *(double *)param_6 = (double)((float)(double)local_100._0_8_ * *(float *)&this->_padding_);
        *(double *)&param_6->field_0x8 = (double)((float)(double)local_100._8_8_ * fVar12);
        *(double *)&param_6->field_0x10 = (double)((float)local_f0 * fVar1);
        fStack_154 = (float)dVar18 * *(float *)&this->_padding_;
        uVar15 = (float)dVar16 * *(float *)((longlong)&this->_padding_ + 4);
        local_150 = (float)dVar13 * *(float *)((longlong)&this->_padding_ + 4);
        fVar12 = (float)uVar15 * (float)uVar15 + fStack_154 * fStack_154 + local_150 * local_150;
        if (fVar12 != __real_3f800000) {
          if (__real_00800000 <= fVar12) {
            fVar12 = __real_3f800000 / SQRT(fVar12);
            uVar15 = (float)uVar15 * fVar12;
            fStack_154 = fVar12 * fStack_154;
            local_150 = fVar12 * local_150;
          }
          else {
            fStack_154 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
            local_150 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          }
        }
        *(double *)param_7 = (double)(float)uVar15;
        *(double *)&param_7->field_0x8 = (double)fStack_154;
        *(double *)&param_7->field_0x10 = (double)local_150;
        *param_5 = dVar17;
        return true;
      }
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351449>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x267,"LengthScale > TNumericLimits<FReal>::Min()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  return false;
}

// Serialize @ 143c13a40

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::Serialize
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this,FChaosArchive *param_1)

{
  longlong *plVar1;
  FChaosArchiveContext *pFVar2;
  FLevelSet *pFVar3;
  FLevelSet *pFVar4;
  longlong lVar5;
  void **ppvVar6;
  byte bVar7;
  int iVar8;
  TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*> *pTVar9;
  undefined8 *puVar10;
  FArchive *pFVar11;
  TPairInitializer<void_*_&&,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*_&&> local_res8;
  undefined8 *local_res18 [2];
  FRefCountPtrHolder ***local_38;
  undefined8 **local_30;
  
  (**(code **)(this->_padding_ + 0x118))(this,&local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  local_res8.Key = (void **)(this->MObject).Reference;
  FChaosArchive::SerializePtr<Chaos::FLevelSet>
            (param_1,(TSerializablePtr<Chaos::FLevelSet> *)&local_res8);
  ppvVar6 = local_res8.Key;
  if ((param_1->_padding_ & 1) != 0) {
    pFVar2 = (param_1->Context).Ptr;
    pTVar9 = TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
                     *)&pFVar2->ObjToRefCountPtrHolder,local_res8.Key);
    if ((pTVar9 == (TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*> *)0x0) ||
       (puVar10 = *(undefined8 **)&pTVar9->field_0x8, puVar10 == (undefined8 *)0x0)) {
      puVar10 = ::operator_new(0x10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        *puVar10 = &___7__TRefCountPtrHolder_VFLevelSet_Chaos___FChaosArchiveContext_Chaos__6B_;
        puVar10[1] = ppvVar6;
        if ((FLevelSet *)ppvVar6 != (FLevelSet *)0x0) {
          LOCK();
          *(int *)((longlong)ppvVar6 + 8) = (int)*(longlong *)((longlong)ppvVar6 + 8) + 1;
          UNLOCK();
        }
      }
      local_38 = &local_res8.Value;
      local_30 = local_res18;
      local_res8.Value = ppvVar6;
      local_res18[0] = puVar10;
      TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<void_*_&&,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*_&&>_>
                ((TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
                  *)&pFVar2->ObjToRefCountPtrHolder,&local_res8,(bool *)&local_38);
    }
    pFVar3 = (FLevelSet *)puVar10[1];
    pFVar4 = (this->MObject).Reference;
    if (pFVar4 != pFVar3) {
      (this->MObject).Reference = pFVar3;
      if (pFVar3 != (FLevelSet *)0x0) {
        LOCK();
        *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar4 != (FLevelSet *)0x0) {
        LOCK();
        plVar1 = &pFVar4->_padding_;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar5 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
  }
  pFVar11 = operator<<<3>((FArchive *)param_1,(TVector<float,3> *)&this->_padding_);
  operator<<<3>(pFVar11,(TVector<float,3> *)((longlong)&this->_padding_ + 4));
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,(TAABB<double,3> *)&this->_padding_);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar8 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar8 < 0xc) {
    bVar7 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
    *(byte *)&this->_padding_ = bVar7 | 0x80;
  }
  return;
}

// Serialize @ 143c13be0

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::Serialize
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this,FChaosArchive *param_1)

{
  longlong *plVar1;
  FChaosArchiveContext *pFVar2;
  FMLLevelSet *pFVar3;
  FMLLevelSet *pFVar4;
  longlong lVar5;
  void **ppvVar6;
  byte bVar7;
  int iVar8;
  TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*> *pTVar9;
  undefined8 *puVar10;
  FArchive *pFVar11;
  TPairInitializer<void_*_&&,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*_&&> local_res8;
  undefined8 *local_res18 [2];
  FRefCountPtrHolder ***local_38;
  undefined8 **local_30;
  
  (**(code **)(this->_padding_ + 0x118))(this,&local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  local_res8.Key = (void **)(this->MObject).Reference;
  FChaosArchive::SerializePtr<Chaos::FMLLevelSet>
            (param_1,(TSerializablePtr<Chaos::FMLLevelSet> *)&local_res8);
  ppvVar6 = local_res8.Key;
  if ((param_1->_padding_ & 1) != 0) {
    pFVar2 = (param_1->Context).Ptr;
    pTVar9 = TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
                     *)&pFVar2->ObjToRefCountPtrHolder,local_res8.Key);
    if ((pTVar9 == (TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*> *)0x0) ||
       (puVar10 = *(undefined8 **)&pTVar9->field_0x8, puVar10 == (undefined8 *)0x0)) {
      puVar10 = ::operator_new(0x10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        *puVar10 = &___7__TRefCountPtrHolder_VFMLLevelSet_Chaos___FChaosArchiveContext_Chaos__6B_;
        puVar10[1] = ppvVar6;
        if ((FMLLevelSet *)ppvVar6 != (FMLLevelSet *)0x0) {
          LOCK();
          *(int *)((longlong)ppvVar6 + 8) = (int)*(longlong *)((longlong)ppvVar6 + 8) + 1;
          UNLOCK();
        }
      }
      local_38 = &local_res8.Value;
      local_30 = local_res18;
      local_res8.Value = ppvVar6;
      local_res18[0] = puVar10;
      TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<void_*_&&,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*_&&>_>
                ((TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
                  *)&pFVar2->ObjToRefCountPtrHolder,&local_res8,(bool *)&local_38);
    }
    pFVar3 = (FMLLevelSet *)puVar10[1];
    pFVar4 = (this->MObject).Reference;
    if (pFVar4 != pFVar3) {
      (this->MObject).Reference = pFVar3;
      if (pFVar3 != (FMLLevelSet *)0x0) {
        LOCK();
        *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar4 != (FMLLevelSet *)0x0) {
        LOCK();
        plVar1 = &pFVar4->_padding_;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar5 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
  }
  pFVar11 = operator<<<3>((FArchive *)param_1,(TVector<float,3> *)&this->_padding_);
  operator<<<3>(pFVar11,(TVector<float,3> *)((longlong)&this->_padding_ + 4));
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,(TAABB<double,3> *)&this->_padding_);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar8 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar8 < 0xc) {
    bVar7 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
    *(byte *)&this->_padding_ = bVar7 | 0x80;
  }
  return;
}

// SetScale @ 143c18ae0

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::SetScale
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this,TVector<double,3> *param_1)

{
  FLevelSet *pFVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  fVar10 = __real_358637bd;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar13 = *(double *)&param_1->field_0x8;
  dVar9 = *(double *)&param_1->field_0x10;
  fVar2 = (float)*(double *)param_1;
  if ((float)((uint)(float)*(double *)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      __real_358637bd) {
    fVar2 = __real_358637bd;
  }
  *(float *)&this->_padding_ = fVar2;
  fVar3 = __real_3f800000;
  *(float *)((longlong)&this->_padding_ + 4) = __real_3f800000 / fVar2;
  fVar12 = (float)dVar13;
  if ((float)((uint)(float)dVar13 & uVar4) < fVar10) {
    fVar12 = fVar10;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar12;
  *(float *)&this->_padding_ = fVar3 / fVar12;
  if (fVar10 <= (float)((uint)(float)dVar9 & uVar4)) {
    fVar10 = (float)dVar9;
  }
  *(float *)&this->_padding_ = fVar10;
  *(float *)((longlong)&this->_padding_ + 4) = fVar3 / fVar10;
  pFVar1 = (this->MObject).Reference;
  *(float *)&this->_padding_ = fVar2 * *(float *)&pFVar1->_padding_ + *(float *)&this->_padding_;
  dVar13 = *(double *)&(pFVar1->MLocalBoundingBox).MMax.field_0x10;
  dVar15 = *(double *)&(pFVar1->MLocalBoundingBox).MMax;
  dVar14 = *(double *)&(pFVar1->MLocalBoundingBox).MMax.field_0x8;
  dVar7 = (double)fVar2 * *(double *)&(pFVar1->MLocalBoundingBox).MMin;
  dVar11 = (double)*(float *)((longlong)&this->_padding_ + 4) *
           *(double *)&(pFVar1->MLocalBoundingBox).MMin.field_0x8;
  dVar9 = (double)*(float *)&this->_padding_ *
          *(double *)&(pFVar1->MLocalBoundingBox).MMin.field_0x10;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar11;
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar11;
  this->_padding_ = (longlong)dVar9;
  dVar15 = (double)*(float *)&this->_padding_ * dVar15;
  dVar14 = (double)*(float *)((longlong)&this->_padding_ + 4) * dVar14;
  dVar7 = dVar15;
  if ((double)this->_padding_ <= dVar15) {
    dVar7 = (double)this->_padding_;
  }
  dVar13 = (double)*(float *)&this->_padding_ * dVar13;
  dVar8 = dVar14;
  if (dVar11 <= dVar14) {
    dVar8 = dVar11;
  }
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar8;
  dVar7 = dVar13;
  if (dVar9 <= dVar13) {
    dVar7 = dVar9;
  }
  this->_padding_ = (longlong)dVar7;
  dVar9 = (double)this->_padding_;
  uVar5 = SUB84(dVar9,0);
  uVar6 = (undefined4)((ulonglong)dVar9 >> 0x20);
  if (dVar9 <= dVar15) {
    uVar5 = SUB84(dVar15,0);
    uVar6 = (undefined4)((ulonglong)dVar15 >> 0x20);
  }
  dVar9 = (double)this->_padding_;
  if ((double)this->_padding_ <= dVar14) {
    dVar9 = dVar14;
  }
  dVar7 = (double)this->_padding_;
  if ((double)this->_padding_ <= dVar13) {
    dVar7 = dVar13;
  }
  this->_padding_ = CONCAT44(uVar6,uVar5);
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar7;
  return;
}

// SetScale @ 143c18cb0

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::SetScale
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this,TVector<double,3> *param_1)

{
  FMLLevelSet *pFVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  fVar10 = __real_358637bd;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar13 = *(double *)&param_1->field_0x8;
  dVar9 = *(double *)&param_1->field_0x10;
  fVar2 = (float)*(double *)param_1;
  if ((float)((uint)(float)*(double *)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      __real_358637bd) {
    fVar2 = __real_358637bd;
  }
  *(float *)&this->_padding_ = fVar2;
  fVar3 = __real_3f800000;
  *(float *)((longlong)&this->_padding_ + 4) = __real_3f800000 / fVar2;
  fVar12 = (float)dVar13;
  if ((float)((uint)(float)dVar13 & uVar4) < fVar10) {
    fVar12 = fVar10;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar12;
  *(float *)&this->_padding_ = fVar3 / fVar12;
  if (fVar10 <= (float)((uint)(float)dVar9 & uVar4)) {
    fVar10 = (float)dVar9;
  }
  *(float *)&this->_padding_ = fVar10;
  *(float *)((longlong)&this->_padding_ + 4) = fVar3 / fVar10;
  pFVar1 = (this->MObject).Reference;
  *(float *)&this->_padding_ = fVar2 * *(float *)&pFVar1->_padding_ + *(float *)&this->_padding_;
  dVar13 = *(double *)&(pFVar1->LocalBoundingBox).MMax.field_0x10;
  dVar15 = *(double *)&(pFVar1->LocalBoundingBox).MMax;
  dVar14 = *(double *)&(pFVar1->LocalBoundingBox).MMax.field_0x8;
  dVar7 = (double)fVar2 * *(double *)&(pFVar1->LocalBoundingBox).MMin;
  dVar11 = (double)*(float *)((longlong)&this->_padding_ + 4) *
           *(double *)&(pFVar1->LocalBoundingBox).MMin.field_0x8;
  dVar9 = (double)*(float *)&this->_padding_ *
          *(double *)&(pFVar1->LocalBoundingBox).MMin.field_0x10;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar11;
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar11;
  this->_padding_ = (longlong)dVar9;
  dVar15 = (double)*(float *)&this->_padding_ * dVar15;
  dVar14 = (double)*(float *)((longlong)&this->_padding_ + 4) * dVar14;
  dVar7 = dVar15;
  if ((double)this->_padding_ <= dVar15) {
    dVar7 = (double)this->_padding_;
  }
  dVar13 = (double)*(float *)&this->_padding_ * dVar13;
  dVar8 = dVar14;
  if (dVar11 <= dVar14) {
    dVar8 = dVar11;
  }
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar8;
  dVar7 = dVar13;
  if (dVar9 <= dVar13) {
    dVar7 = dVar9;
  }
  this->_padding_ = (longlong)dVar7;
  dVar9 = (double)this->_padding_;
  uVar5 = SUB84(dVar9,0);
  uVar6 = (undefined4)((ulonglong)dVar9 >> 0x20);
  if (dVar9 <= dVar15) {
    uVar5 = SUB84(dVar15,0);
    uVar6 = (undefined4)((ulonglong)dVar15 >> 0x20);
  }
  dVar9 = (double)this->_padding_;
  if ((double)this->_padding_ <= dVar14) {
    dVar9 = dVar14;
  }
  dVar7 = (double)this->_padding_;
  if ((double)this->_padding_ <= dVar13) {
    dVar7 = dVar13;
  }
  this->_padding_ = CONCAT44(uVar6,uVar5);
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar7;
  return;
}

// ToString @ 143c1ae80

FString * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::ToString
          (TImplicitObjectScaled<Chaos::FLevelSet,1> *this,FString *__return_storage_ptr__)

{
  FString local_58 [5];
  
  ::FString::PrintfImpl(local_58,L"ImplicitObject bIsConvex:%d, bDoCollide:%d, bHasBoundingBox:%d");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f");
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 143c1af60

FString * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::ToString
          (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this,FString *__return_storage_ptr__)

{
  FString local_58 [5];
  
  ::FString::PrintfImpl(local_58,L"ImplicitObject bIsConvex:%d, bDoCollide:%d, bHasBoundingBox:%d");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f");
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CopyGeometry @ 143e18230

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::CopyGeometry
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this)

{
  TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *pTVar1;
  FImplicitObject *in_RDX;
  
  pTVar1 = CopyHelper(this);
  in_RDX->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *)0x0) {
    LOCK();
    *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 143e18450

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::CopyGeometryWithScale
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this,TVector<double,3> *param_1)

{
  TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this_00;
  double *in_R8;
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = CopyHelper(this);
  local_28 = (double)*(float *)&this_00->_padding_ * *in_R8;
  local_20 = (double)*(float *)((longlong)&this_00->_padding_ + 4) * in_R8[1];
  local_18 = (double)*(float *)&this_00->_padding_ * in_R8[2];
  SetScale(this_00,(TVector<double,3> *)&local_28);
  *(TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> **)param_1 = this_00;
  if (this_00 != (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CopyHelper @ 143e18750

TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> * __cdecl
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::CopyHelper
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *param_1)

{
  longlong *plVar1;
  float fVar2;
  FSkinnedTriangleMesh *this;
  longlong lVar3;
  uchar uVar4;
  TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this_00;
  double local_38;
  double local_30;
  double local_28;
  
  this_00 = ::operator_new(0x78);
  if (this_00 == (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *)0x0) {
    return (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *)0x0;
  }
  local_38 = (double)*(float *)&param_1->_padding_;
  fVar2 = *(float *)&param_1->_padding_;
  this = (param_1->MObject).Reference;
  local_28 = (double)*(float *)&param_1->_padding_;
  local_30 = (double)*(float *)((longlong)&param_1->_padding_ + 4);
  if (this != (FSkinnedTriangleMesh *)0x0) {
    LOCK();
    *(int *)&this->field_0x8 = (int)*(longlong *)&this->field_0x8 + 1;
    UNLOCK();
  }
  uVar4 = FImplicitObject::GetType((FImplicitObject *)this);
  FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this_00,2,uVar4);
  this_00->_padding_ =
       (longlong)&___7__TImplicitObjectScaled_VFSkinnedTriangleMesh_Chaos___00_Chaos__6B_;
  (this_00->MObject).Reference = this;
  if (this == (FSkinnedTriangleMesh *)0x0) {
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
  }
  else {
    LOCK();
    *(int *)&this->field_0x8 = (int)*(longlong *)&this->field_0x8 + 1;
    UNLOCK();
    InitScaledImplicit(this_00,(TVector<double,3> *)&local_38,fVar2);
    LOCK();
    plVar1 = (longlong *)&this->field_0x8;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)&this->field_0xc == 0)) {
      (*(code *)**(undefined8 **)this)(this,1);
      return this_00;
    }
  }
  return this_00;
}

// FindClosestFaceAndVertices @ 143e218f0

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::FindClosestFaceAndVertices
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this,TVector<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  int iVar4;
  FSkinnedTriangleMesh *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  double local_38;
  double local_30;
  double local_28;
  
  fVar9 = *(float *)((longlong)&this->_padding_ + 4);
  local_38 = (double)((float)*(double *)param_1 * fVar9);
  fVar8 = (float)*(double *)&param_1->field_0x10 * *(float *)((longlong)&this->_padding_ + 4);
  local_30 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  fVar3 = *(float *)&this->_padding_;
  local_28 = (double)fVar8;
  if (((fVar9 <= fVar3) ||
      (pfVar1 = (float *)((longlong)&this->_padding_ + 4), fVar9 < *pfVar1 || fVar9 == *pfVar1)) &&
     (fVar9 = *(float *)((longlong)&this->_padding_ + 4), fVar9 <= fVar3)) {
    fVar9 = fVar3;
  }
  pFVar5 = (this->MObject).Reference;
  iVar6 = (**(code **)(*(longlong *)pFVar5 + 200))(pFVar5,&local_38,fVar8,(double)fVar9 * param_3);
  if (iVar6 != -1) {
    pFVar7 = (param_2->AllocatorInstance).Data;
    iVar4 = param_2->ArrayNum;
    pFVar2 = pFVar7 + (longlong)iVar4 * 0x18;
    while( true ) {
      if (param_2->ArrayNum != iVar4) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar2) break;
      fVar9 = *(float *)&this->_padding_;
      fVar3 = *(float *)&this->_padding_;
      *(double *)(pFVar7 + 8) =
           (double)*(float *)((longlong)&this->_padding_ + 4) * *(double *)(pFVar7 + 8);
      *(double *)(pFVar7 + 0x10) = (double)fVar9 * *(double *)(pFVar7 + 0x10);
      *(double *)pFVar7 = (double)fVar3 * *(double *)pFVar7;
      pFVar7 = pFVar7 + 0x18;
    }
  }
  return iVar6;
}

// FindClosestIntersectionImp @ 143e21a20

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::FindClosestIntersectionImp
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this,
          Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  Pair<Chaos::TVector<double,3>,bool> *pPVar6;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (*(float *)&this->_padding_ != 0.0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351169>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x37f,"OuterMargin == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pPVar6 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar6;
    }
  }
  local_20 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_18 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_10 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_38 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_30 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_28 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  FImplicitObject::FindClosestIntersection
            ((FImplicitObject *)(this->MObject).Reference,__return_storage_ptr__,
             (TVector<double,3> *)&local_20,(TVector<double,3> *)&local_38,param_3);
  if (__return_storage_ptr__->Second != false) {
    fVar1 = *(float *)&this->_padding_;
    dVar3 = *(double *)&__return_storage_ptr__->First;
    fVar2 = *(float *)&this->_padding_;
    *(double *)&(__return_storage_ptr__->First).field_0x8 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x8 *
                 *(float *)((longlong)&this->_padding_ + 4));
    *(double *)&(__return_storage_ptr__->First).field_0x10 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x10 * fVar1);
    *(double *)&__return_storage_ptr__->First = (double)((float)dVar3 * fVar2);
  }
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 143e22c10

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::FindGeometryOpposingNormal
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this,
          TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,int param_2,
          TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  FSkinnedTriangleMesh *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TVector<double,3> *pTVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  dVar8 = __real_3ff0000000000000;
  dVar13 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar11 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar11) &&
      (double)CONCAT44(uVar12,uVar11) != __real_3f1a36e2e0000000) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351205>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x35b,
                       "FMath::IsNearlyEqual(OriginalNormal.SizeSquared(), FReal(1), FReal((1.e-4f)))"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  dVar14 = (double)*(float *)&this->_padding_ * *(double *)param_3;
  local_60 = (double)*(float *)&this->_padding_ * *(double *)param_1;
  local_70 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_50 = (double)*(float *)&this->_padding_ * *(double *)&param_1->field_0x10;
  local_58 = local_70 * *(double *)&param_1->field_0x8;
  local_70 = local_70 * *(double *)&param_3->field_0x8;
  dVar13 = (double)*(float *)&this->_padding_ * *(double *)&param_3->field_0x10;
  auVar9._0_8_ = local_70 * local_70;
  auVar9._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar14 * dVar14 + auVar9._0_8_ + dVar13 * dVar13;
  auVar10 = sqrtpd(auVar9,auVar10);
  if (auVar10._0_8_ <= __real_3e45798ee0000000) {
    local_70 = 0.0;
    local_78 = 0.0;
  }
  else {
    local_78 = dVar8 / auVar10._0_8_;
    dVar8 = local_78 * dVar13;
    local_70 = local_78 * local_70;
    local_78 = local_78 * dVar14;
  }
  pFVar3 = (this->MObject).Reference;
  local_68 = dVar8;
  (**(code **)(*(longlong *)pFVar3 + 0xd0))(pFVar3,&local_48,&local_60,param_2,&local_78);
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)*(float *)&this->_padding_ * local_40;
  dVar13 = __real_0010000000000000;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar1 * local_38;
  *(double *)__return_storage_ptr__ = (double)fVar2 * local_48;
  dVar13 = TVector<double,3>::SafeNormalize(__return_storage_ptr__,dVar13);
  if (dVar13 == 0.0) {
    uVar5 = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  }
  return __return_storage_ptr__;
}

// FindMostOpposingFace @ 143e22e20

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::FindMostOpposingFace
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,int param_3,double param_4)

{
  FSkinnedTriangleMesh *pFVar1;
  int iVar2;
  
  pFVar1 = (this->MObject).Reference;
  iVar2 = (**(code **)(*(longlong *)pFVar1 + 0xc0))(pFVar1);
  return iVar2;
}

// GetInnerObject @ 143e293b0

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::GetInnerObject
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)(this->MObject).Reference;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GetMaterialIndex @ 143e2a030

ushort __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::GetMaterialIndex
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this,uint param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143e2a037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this->MObject).Reference + 0x120))();
  return uVar1;
}

// GetNestedType @ 143e2a930

uchar __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::GetNestedType
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this)

{
  uchar uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143e2a937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this->MObject).Reference + 8))();
  return uVar1;
}

// GetRadius @ 143e2bdb0

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::GetRadius
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*(longlong *)(this->MObject).Reference + 0x18))();
  if (0.0 < fVar1) {
    return (double)*(float *)&this->_padding_;
  }
  return 0.0;
}

// GetRadiusf @ 143e2bdf0

float __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::GetRadiusf
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*(longlong *)(this->MObject).Reference + 0x18))();
  if (0.0 < fVar1) {
    return *(float *)&this->_padding_;
  }
  return 0.0;
}

// GetTypeHash @ 143e2cc20

uint __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::GetTypeHash
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&this->_padding_,0xc,0);
  iVar2 = (**(code **)(*(longlong *)(this->MObject).Reference + 0x110))();
  uVar5 = iVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar1 ^ uVar5 << 8;
  uVar4 = (uVar1 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar1 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar3 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 5;
  uVar4 = (uVar5 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  return (uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xf;
}

// InitScaledImplicit @ 143e32ec0

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::InitScaledImplicit
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this,TVector<double,3> *param_1,
          float param_2)

{
  FSkinnedTriangleMesh *pFVar1;
  code *pcVar2;
  uchar uVar3;
  byte bVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((char)uVar3 < '\0') {
    local_res18[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::InitScaledImplicit'::__l2::
    <lambda_1>::operator()(local_res18);
  }
  bVar4 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((bVar4 & 0x40) != 0) {
    local_res8[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::InitScaledImplicit'::__l2::
    <lambda_2>::operator()(local_res8);
  }
  uVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((uVar3 == '\x04') || (uVar3 == '\x05')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = pFVar1->field_0x14;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = pFVar1->field_0x15;
  *(float *)&this->_padding_ = param_2;
  SetScale(this,param_1);
  return;
}

// Overlap @ 143e377f0

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::Overlap
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this,TVector<double,3> *param_1,
          double param_2)

{
  float fVar1;
  FSkinnedTriangleMesh *pFVar2;
  undefined1 uVar3;
  double local_28;
  double local_20;
  double local_18;
  
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  local_28 = (double)((float)*(double *)param_1 * fVar1);
  pFVar2 = (this->MObject).Reference;
  local_20 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_18 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  uVar3 = (**(code **)(*(longlong *)pFVar2 + 0xd8))(pFVar2,&local_28,(double)fVar1 * param_2);
  return (bool)uVar3;
}

// PhiWithNormal @ 143e37990

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::PhiWithNormal
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2)

{
  FSkinnedTriangleMesh *pFVar1;
  double dVar2;
  double local_28;
  double local_20;
  double local_18;
  
  pFVar1 = (this->MObject).Reference;
  local_28 = (double)*(float *)&this->_padding_;
  local_20 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_18 = (double)*(float *)&this->_padding_;
  dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x88))(pFVar1,local_20,&local_28,param_2);
  return dVar2;
}

// Raycast @ 143e3b8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::Raycast
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,double param_4,double *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8)

{
  float fVar1;
  FSkinnedTriangleMesh *pFVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  double dVar14;
  uint uVar16;
  undefined1 auVar15 [16];
  undefined8 in_XMM3_Qb;
  undefined1 auVar17 [16];
  float fVar18;
  double local_res8;
  float fStack_d4;
  float local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  
  auVar17._8_8_ = in_XMM3_Qb;
  auVar17._0_8_ = param_3;
  if ((param_3 <= 0.0) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351456>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x260,"Length > 0"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  dVar4 = __real_3ff0000000000000;
  dVar14 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
           __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351455>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x261,"FMath::IsNearlyEqual(Dir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if (param_4 != 0.0) {
    auVar17 = ZEXT416((uint)__real_322bcc77);
    if (((__real_322bcc77 <
          (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
        (__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
                __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3369118521899351454>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                           ,0x262,
                           "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  local_b0 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_a8 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_a0 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_c8 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_c0 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_b8 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  auVar15._0_8_ = local_c0 * local_c0 + local_c8 * local_c8 + local_b8 * local_b8;
  auVar15._8_8_ = 0;
  auVar17 = sqrtpd(auVar17,auVar15);
  dVar14 = auVar17._0_8_;
  if (__real_0010000000000000 < dVar14) {
    pFVar2 = (this->MObject).Reference;
    dVar4 = dVar4 / dVar14;
    local_c8 = local_c8 * dVar4;
    local_c0 = local_c0 * dVar4;
    local_b8 = local_b8 * dVar4;
    cVar8 = (**(code **)(*(longlong *)pFVar2 + 0xb0))
                      (pFVar2,&local_b0,&local_c8,dVar14 * param_3,
                       (double)*(float *)((longlong)&this->_padding_ + 4) * param_4,&local_res8,
                       &local_98,&local_80,param_8);
    if (cVar8 != '\0') {
      local_res8 = local_res8 * dVar4;
      if (local_res8 == 0.0) {
        uVar5 = *(undefined8 *)&param_1->field_0x8;
        *(undefined8 *)param_6 = *(undefined8 *)param_1;
        *(undefined8 *)&param_6->field_0x8 = uVar5;
        *(undefined8 *)&param_6->field_0x10 = *(undefined8 *)&param_1->field_0x10;
        uVar9 = *(uint *)&param_2->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar10 = *(uint *)&param_2->field_0x8 ^ _UNK_15066df78;
        uVar11 = *(uint *)&param_2->field_0xc ^ _UNK_15066df7c;
        uVar12 = (uint)*(undefined8 *)&param_2->field_0x10 ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar16 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        *(uint *)param_7 = *(uint *)param_2 ^ (uint)__xmm_80000000000000008000000000000000;
        *(uint *)&param_7->field_0x4 = uVar9;
        *(uint *)&param_7->field_0x8 = uVar10;
        *(uint *)&param_7->field_0xc = uVar11;
        *(ulonglong *)&param_7->field_0x10 = CONCAT44(uVar16,uVar12);
        *param_5 = local_res8;
        return true;
      }
      if (local_res8 < param_3) {
        fVar18 = *(float *)((longlong)&this->_padding_ + 4);
        fVar1 = *(float *)&this->_padding_;
        *(double *)param_6 = (double)((float)local_98 * *(float *)&this->_padding_);
        *(double *)&param_6->field_0x8 = (double)((float)local_90 * fVar18);
        *(double *)&param_6->field_0x10 = (double)((float)local_88 * fVar1);
        fStack_d4 = (float)local_78 * *(float *)&this->_padding_;
        uVar13 = (float)local_80 * *(float *)((longlong)&this->_padding_ + 4);
        local_d0 = (float)local_70 * *(float *)((longlong)&this->_padding_ + 4);
        fVar18 = (float)uVar13 * (float)uVar13 + fStack_d4 * fStack_d4 + local_d0 * local_d0;
        if (fVar18 != __real_3f800000) {
          if (__real_00800000 <= fVar18) {
            fVar18 = __real_3f800000 / SQRT(fVar18);
            fStack_d4 = fStack_d4 * fVar18;
            local_d0 = local_d0 * fVar18;
            uVar13 = (float)uVar13 * fVar18;
          }
          else {
            fStack_d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
            local_d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          }
        }
        *(double *)param_7 = (double)(float)uVar13;
        *(double *)&param_7->field_0x8 = (double)fStack_d4;
        *(double *)&param_7->field_0x10 = (double)local_d0;
        *param_5 = local_res8;
        return true;
      }
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351449>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x267,"LengthScale > TNumericLimits<FReal>::Min()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  return false;
}

// Serialize @ 143e4b320

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::Serialize
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this,FChaosArchive *param_1)

{
  undefined1 *puVar1;
  FChaosArchiveContext *pFVar2;
  FSkinnedTriangleMesh *pFVar3;
  FSkinnedTriangleMesh *pFVar4;
  void **ppvVar5;
  byte bVar6;
  int iVar7;
  TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*> *pTVar8;
  undefined8 *puVar9;
  FArchive *pFVar10;
  TPairInitializer<void_*_&&,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*_&&> local_res8;
  undefined8 *local_res18 [2];
  FRefCountPtrHolder ***local_38;
  undefined8 **local_30;
  
  (**(code **)(this->_padding_ + 0x118))(this,&local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  local_res8.Key = (void **)(this->MObject).Reference;
  FChaosArchive::SerializePtr<Chaos::FSkinnedTriangleMesh>
            (param_1,(TSerializablePtr<Chaos::FSkinnedTriangleMesh> *)&local_res8);
  ppvVar5 = local_res8.Key;
  if ((param_1->_padding_ & 1) != 0) {
    pFVar2 = (param_1->Context).Ptr;
    pTVar8 = TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
                     *)&pFVar2->ObjToRefCountPtrHolder,local_res8.Key);
    if ((pTVar8 == (TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*> *)0x0) ||
       (puVar9 = *(undefined8 **)&pTVar8->field_0x8, puVar9 == (undefined8 *)0x0)) {
      puVar9 = ::operator_new(0x10);
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        *puVar9 = &
                  ___7__TRefCountPtrHolder_VFSkinnedTriangleMesh_Chaos___FChaosArchiveContext_Chaos__6B_
        ;
        puVar9[1] = ppvVar5;
        if ((FSkinnedTriangleMesh *)ppvVar5 != (FSkinnedTriangleMesh *)0x0) {
          LOCK();
          *(int *)((longlong)ppvVar5 + 8) = *(int *)((longlong)ppvVar5 + 8) + 1;
          UNLOCK();
        }
      }
      local_38 = &local_res8.Value;
      local_30 = local_res18;
      local_res8.Value = ppvVar5;
      local_res18[0] = puVar9;
      TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<void_*_&&,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*_&&>_>
                ((TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
                  *)&pFVar2->ObjToRefCountPtrHolder,&local_res8,(bool *)&local_38);
    }
    pFVar3 = (FSkinnedTriangleMesh *)puVar9[1];
    pFVar4 = (this->MObject).Reference;
    if (pFVar4 != pFVar3) {
      (this->MObject).Reference = pFVar3;
      if (pFVar3 != (FSkinnedTriangleMesh *)0x0) {
        LOCK();
        *(int *)&pFVar3->field_0x8 = *(int *)&pFVar3->field_0x8 + 1;
        UNLOCK();
      }
      if (pFVar4 != (FSkinnedTriangleMesh *)0x0) {
        LOCK();
        puVar1 = &pFVar4->field_0x8;
        iVar7 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar7 == 1) && (*(int *)&pFVar4->field_0xc == 0)) {
          (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
        }
      }
    }
  }
  pFVar10 = operator<<<3>((FArchive *)param_1,(TVector<float,3> *)&this->_padding_);
  operator<<<3>(pFVar10,(TVector<float,3> *)((longlong)&this->_padding_ + 4));
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,(TAABB<double,3> *)&this->_padding_);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar7 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar7 < 0xc) {
    bVar6 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
    *(byte *)&this->_padding_ = bVar6 | 0x80;
  }
  return;
}

// SetScale @ 143e4e2c0

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::SetScale
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this,TVector<double,3> *param_1)

{
  float fVar1;
  FSkinnedTriangleMesh *pFVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  fVar1 = __real_358637bd;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar9 = *(double *)&param_1->field_0x8;
  dVar8 = *(double *)&param_1->field_0x10;
  fVar5 = (float)*(double *)param_1;
  if ((float)((uint)(float)*(double *)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      __real_358637bd) {
    fVar5 = __real_358637bd;
  }
  *(float *)&this->_padding_ = fVar5;
  fVar3 = __real_3f800000;
  *(float *)((longlong)&this->_padding_ + 4) = __real_3f800000 / fVar5;
  fVar5 = (float)dVar9;
  if ((float)((uint)(float)dVar9 & uVar4) < fVar1) {
    fVar5 = fVar1;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar5;
  *(float *)&this->_padding_ = fVar3 / fVar5;
  if (fVar1 <= (float)((uint)(float)dVar8 & uVar4)) {
    fVar1 = (float)dVar8;
  }
  *(float *)&this->_padding_ = fVar1;
  *(float *)((longlong)&this->_padding_ + 4) = fVar3 / fVar1;
  fVar1 = *(float *)&this->_padding_;
  fVar5 = (float)(**(code **)(*(longlong *)(this->MObject).Reference + 0x28))();
  pFVar2 = (this->MObject).Reference;
  *(float *)&this->_padding_ = fVar5 * fVar1 + *(float *)&this->_padding_;
  (**(code **)(*(longlong *)pFVar2 + 0x90))(pFVar2,&local_78);
  local_78 = (double)*(float *)&this->_padding_ * local_78;
  local_68 = (double)*(float *)&this->_padding_ * local_68;
  local_70 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_70;
  this->_padding_ = (longlong)local_78;
  this->_padding_ = (longlong)local_70;
  this->_padding_ = (longlong)local_68;
  this->_padding_ = (longlong)local_78;
  this->_padding_ = (longlong)local_70;
  this->_padding_ = (longlong)local_68;
  local_60 = (double)*(float *)&this->_padding_ * local_60;
  local_58 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_58;
  dVar9 = local_60;
  if ((double)this->_padding_ <= local_60) {
    dVar9 = (double)this->_padding_;
  }
  local_50 = (double)*(float *)&this->_padding_ * local_50;
  dVar8 = local_58;
  if (local_70 <= local_58) {
    dVar8 = local_70;
  }
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar8;
  dVar9 = local_50;
  if (local_68 <= local_50) {
    dVar9 = local_68;
  }
  this->_padding_ = (longlong)dVar9;
  dVar9 = (double)this->_padding_;
  uVar6 = SUB84(dVar9,0);
  uVar7 = (int)((ulonglong)dVar9 >> 0x20);
  if (dVar9 <= local_58) {
    uVar6 = SUB84(local_58,0);
    uVar7 = (int)((ulonglong)local_58 >> 0x20);
  }
  if (local_60 <= (double)this->_padding_) {
    local_60 = (double)this->_padding_;
  }
  dVar9 = (double)this->_padding_;
  if ((double)this->_padding_ <= local_50) {
    dVar9 = local_50;
  }
  this->_padding_ = (longlong)local_60;
  this->_padding_ = CONCAT44(uVar7,uVar6);
  this->_padding_ = (longlong)dVar9;
  return;
}

// ToString @ 143e56220

FString * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::ToString
          (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this,
          FString *__return_storage_ptr__)

{
  FSkinnedTriangleMesh *pFVar1;
  void *local_58 [10];
  
  pFVar1 = (this->MObject).Reference;
  (**(code **)(*(longlong *)pFVar1 + 0xf8))(pFVar1,local_58);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  return __return_storage_ptr__;
}

// TImplicitObjectScaled<Chaos::TBox<double,3>,1> @ 143eb0070

TImplicitObjectScaled<Chaos::TBox<double,3>,1> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::
TImplicitObjectScaled<Chaos::TBox<double,3>,1>
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *this,
          TRefCountPtr<Chaos::TBox<double,3>_> param_1,TVector<double,3> *param_2,double param_3)

{
  int *piVar1;
  int iVar2;
  TBox<double,3> *pTVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uchar uVar6;
  byte bVar7;
  bool bVar8;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  uVar6 = FImplicitObject::GetType((FImplicitObject *)(param_1.Reference)->_padding_);
  FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this,2,uVar6);
  this->_padding_ = (longlong)&___7__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__6B_;
  (this->MObject).Reference = (TBox<double,3> *)0x0;
  pTVar3 = (TBox<double,3> *)(param_1.Reference)->_padding_;
  (this->MObject).Reference = pTVar3;
  if (pTVar3 != (TBox<double,3> *)0x0) {
    LOCK();
    *(int *)&pTVar3->_padding_ = (int)pTVar3->_padding_ + 1;
    UNLOCK();
  }
  uVar6 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((char)uVar6 < '\0') {
    local_res8[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  bVar7 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((bVar7 & 0x40) != 0) {
    local_res10[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_res10);
  }
  uVar6 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((uVar6 == '\x04') || (uVar6 == '\x05')) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  pTVar3 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&pTVar3->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&pTVar3->_padding_ + 5);
  *(float *)&this->_padding_ = (float)param_3;
  SetScale(this,param_2);
  puVar4 = (undefined8 *)(param_1.Reference)->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return this;
}

// TImplicitObjectScaled<Chaos::TSphere<double,3>,1> @ 143eb01b0

TImplicitObjectScaled<Chaos::TSphere<double,3>,1> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::
TImplicitObjectScaled<Chaos::TSphere<double,3>,1>
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *this,
          TRefCountPtr<Chaos::TSphere<double,3>_> param_1,TVector<double,3> *param_2,double param_3)

{
  int *piVar1;
  int iVar2;
  TSphere<double,3> *pTVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uchar uVar6;
  byte bVar7;
  bool bVar8;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  uVar6 = FImplicitObject::GetType((FImplicitObject *)(param_1.Reference)->_padding_);
  FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this,2,uVar6);
  this->_padding_ = (longlong)&___7__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__6B_;
  (this->MObject).Reference = (TSphere<double,3> *)0x0;
  pTVar3 = (TSphere<double,3> *)(param_1.Reference)->_padding_;
  (this->MObject).Reference = pTVar3;
  if (pTVar3 != (TSphere<double,3> *)0x0) {
    LOCK();
    *(int *)&pTVar3->_padding_ = (int)pTVar3->_padding_ + 1;
    UNLOCK();
  }
  uVar6 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((char)uVar6 < '\0') {
    local_res8[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit'::__l2::<lambda_1>
    ::operator()(local_res8);
  }
  bVar7 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((bVar7 & 0x40) != 0) {
    local_res10[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit'::__l2::<lambda_2>
    ::operator()(local_res10);
  }
  uVar6 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((uVar6 == '\x04') || (uVar6 == '\x05')) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  pTVar3 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&pTVar3->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&pTVar3->_padding_ + 5);
  *(float *)&this->_padding_ = (float)param_3;
  SetScale(this,param_2);
  puVar4 = (undefined8 *)(param_1.Reference)->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return this;
}

// TImplicitObjectScaled<Chaos::FCapsule,1> @ 143eb02f0

TImplicitObjectScaled<Chaos::FCapsule,1> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::TImplicitObjectScaled<Chaos::FCapsule,1>
          (TImplicitObjectScaled<Chaos::FCapsule,1> *this,TRefCountPtr<Chaos::FCapsule> param_1,
          TVector<double,3> *param_2,double param_3)

{
  int *piVar1;
  int iVar2;
  FCapsule *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uchar uVar6;
  byte bVar7;
  bool bVar8;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  uVar6 = FImplicitObject::GetType((FImplicitObject *)(param_1.Reference)->_padding_);
  FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this,2,uVar6);
  this->_padding_ = (longlong)&___7__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__6B_;
  (this->MObject).Reference = (FCapsule *)0x0;
  pFVar3 = (FCapsule *)(param_1.Reference)->_padding_;
  (this->MObject).Reference = pFVar3;
  if (pFVar3 != (FCapsule *)0x0) {
    LOCK();
    *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
    UNLOCK();
  }
  uVar6 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((char)uVar6 < '\0') {
    local_res8[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  bVar7 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((bVar7 & 0x40) != 0) {
    local_res10[0] = 0;
    `Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit'::__l2::<lambda_2>::
    operator()(local_res10);
  }
  uVar6 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((uVar6 == '\x04') || (uVar6 == '\x05')) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x42e,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TImplicitObjectScaled<Chaos::FCapsule,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  pFVar3 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&pFVar3->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&pFVar3->_padding_ + 5);
  *(float *)&this->_padding_ = (float)param_3;
  SetScale(this,param_2);
  puVar4 = (undefined8 *)(param_1.Reference)->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return this;
}

// operator() @ 1504a37b0

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899351000>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899351000>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a37f0

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899351000>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899351000>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a3830

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899351000>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899351000>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a3870

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899351000>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899351000>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a38f0

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit'::__l2::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899350999>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899350999>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a3930

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit'::__l2::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899350999>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899350999>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a3970

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit'::__l2::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899350999>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899350999>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a39b0

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit'::__l2::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899350999>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899350999>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a5fa0

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::InitScaledImplicit'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899351000>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899351000>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a5fe0

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::InitScaledImplicit'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899351000>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899351000>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a6020

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::InitScaledImplicit'::__l2::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899350999>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899350999>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a6060

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::InitScaledImplicit'::__l2::
<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899350999>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899350999>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a6160

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::InitScaledImplicit'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899351000>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899351000>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a61a0

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::InitScaledImplicit'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899351000>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899351000>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a6260

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::InitScaledImplicit'::__l2::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899350999>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899350999>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FLevelSet,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a62a0

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::InitScaledImplicit'::__l2::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899350999>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899350999>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FMLLevelSet,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a8e50

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::InitScaledImplicit'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899351000>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899351000>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a9580

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::InitScaledImplicit'::__l2::<lambda_2>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899350999>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899350999>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

