// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// BoundingBox @ 143b5e880

TAABB<double,3> * __thiscall
Chaos::FCylinder::BoundingBox(FCylinder *this,TAABB<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&(this->MLocalBoundingBox).MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMax;
  uVar3 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// FindClosestIntersectionImp @ 143b64320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::FCylinder::FindClosestIntersectionImp
          (FCylinder *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined8 uVar8;
  uint uVar9;
  bool bVar10;
  FTrackedGeometryManager *pFVar11;
  Pair<Chaos::TVector<double,3>,bool> *pPVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  Pair<double,Chaos::TVector<double,3>_> *pPVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined1 auStackY_2b8 [32];
  ForAnyElementType local_268;
  uint local_260;
  uint uStack_25c;
  undefined1 local_258;
  FIdentityFunctor local_257 [7];
  undefined1 local_250 [32];
  undefined1 local_230 [32];
  undefined1 local_210 [32];
  undefined1 local_1f0 [16];
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  bool local_1c0;
  undefined1 local_1b8 [24];
  bool local_1a0;
  undefined1 local_198 [24];
  bool local_180;
  undefined1 local_178 [24];
  bool local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  FImplicitObject local_138;
  float local_118;
  float local_114;
  float local_110;
  FImplicitObject local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [16];
  double local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  dVar21 = *(double *)&(this->MPlane1).MPlaneConcrete.MNormal;
  dVar16 = *(double *)&(this->MPlane1).MPlaneConcrete.MNormal.field_0x8;
  dVar1 = *(double *)&(this->MPlane1).MPlaneConcrete.MNormal.field_0x10;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  uStack_25c = 0;
  local_138._padding_ = 0;
  local_138.bIsConvex = true;
  local_138.bDoCollide = true;
  local_138.bHasBoundingBox = true;
  local_138.bIsTracked = false;
  local_138.Type = '\0';
  local_138.CollisionType = '\0';
  local_138._padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
  dVar22 = (*(double *)param_2 - *(double *)param_1) * dVar21 +
           (*(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x8) * dVar16 +
           (*(double *)&param_2->field_0x10 - *(double *)&param_1->field_0x10) * dVar1;
  local_158 = *(double *)param_2 - dVar22 * dVar21;
  local_150 = *(double *)&param_2->field_0x8 - dVar22 * dVar16;
  local_148 = *(double *)&param_2->field_0x10 - dVar22 * dVar1;
  dVar22 = *(double *)&(this->MPlane1).MPlaneConcrete.MX.field_0x8;
  dVar2 = *(double *)&(this->MPlane1).MPlaneConcrete.MX;
  dVar3 = *(double *)&(this->MPlane1).MPlaneConcrete.MX.field_0x10;
  dVar7 = (dVar2 - *(double *)param_1) * dVar21 + (dVar22 - *(double *)&param_1->field_0x8) * dVar16
          + (dVar3 - *(double *)&param_1->field_0x10) * dVar1;
  local_138.Margin = (float)this->MRadius;
  local_118 = (float)(dVar2 - dVar7 * dVar21);
  local_114 = (float)(dVar22 - dVar7 * dVar16);
  local_110 = (float)(dVar3 - dVar7 * dVar1);
  FImplicitObject::FindClosestIntersection
            (&local_138,(Pair<Chaos::TVector<double,3>,bool> *)&local_1d8,param_1,
             (TVector<double,3> *)&local_158,param_3);
  if (local_1c0 != false) {
    uVar23 = *(double *)&param_1->field_0x8 - dStack_1d0;
    uVar8 = *(double *)param_1 - local_1d8;
    local_1e0 = *(double *)&param_1->field_0x10 - local_1c8;
    dVar21 = (double)uVar8 * (double)uVar8 + (double)uVar23 * (double)uVar23 + local_1e0 * local_1e0
    ;
    if (dVar21 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar21) {
        local_140 = __real_3ff0000000000000 / SQRT(dVar21);
        uVar8 = (double)uVar8 * local_140;
        uVar23 = (double)uVar23 * local_140;
        local_1e0 = local_1e0 * local_140;
      }
      else {
        local_1e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
    }
    local_e8 = local_1d8;
    dStack_e0 = dStack_1d0;
    local_c0 = local_1e0;
    local_108._padding_ = 0;
    local_108.Margin = 0.0;
    local_108.bIsConvex = false;
    local_108.bDoCollide = true;
    local_108.bHasBoundingBox = false;
    local_108.bIsTracked = false;
    local_108.Type = '\x02';
    local_108.CollisionType = '\x02';
    local_108._padding_ = (longlong)&___7__TPlane_N_02_Chaos__6B_;
    local_d8 = local_1c8;
    local_d0._8_4_ = (int)uVar23;
    local_d0._0_8_ = uVar8;
    local_d0._12_4_ = (int)((ulonglong)uVar23 >> 0x20);
    FImplicitObject::FindClosestIntersection
              (&local_108,(Pair<Chaos::TVector<double,3>,bool> *)local_1b8,param_1,param_2,0.0);
    local_108._padding_ = (longlong)&___7FImplicitObject_Chaos__6B_;
    FChaosVisualDebuggerTrace::InvalidateGeometryFromCache(&local_108);
    if (local_108.bIsTracked != false) {
      pFVar11 = FTrackedGeometryManager::Get();
      FTrackedGeometryManager::RemoveGeometry(pFVar11,&local_108);
    }
    local_108._padding_ = (longlong)&___7FChaosRefCountedObject_Chaos__6B_;
    if ((((int)local_108._padding_ != 0) && ((int)local_108._padding_ != 0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("GetRefCount() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\RefCountedObject.h"
                            ,0x1e,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      pPVar12 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar12;
    }
    if ((local_1a0 == false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("UnprojectedIntersection.Second",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Cylinder.h"
                            ,0xe6,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      pPVar12 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar12;
    }
    dVar21 = (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_) - *(double *)param_1;
    dVar16 = (double)CONCAT44(local_1b8._12_4_,local_1b8._8_4_) - *(double *)&param_1->field_0x8;
    local_250._24_8_ = local_1b8._16_8_;
    auVar17._0_8_ = dVar16 * dVar16;
    auVar17._8_8_ = 0;
    dVar16 = (double)local_1b8._16_8_ - *(double *)&param_1->field_0x10;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar21 * dVar21 + auVar17._0_8_ + dVar16 * dVar16;
    auVar18 = sqrtpd(auVar17,auVar18);
    local_250._0_8_ = auVar18._0_8_;
    local_250._8_4_ = local_1b8._0_4_;
    local_250._12_4_ = local_1b8._4_4_;
    local_250._16_4_ = local_1b8._8_4_;
    local_250._20_4_ = local_1b8._12_4_;
    if (((local_268.Data <= (Pair<double,Chaos::TVector<double,3>_> *)local_250) &&
        ((FScriptContainerElement *)local_250 < local_268.Data + (longlong)(int)uStack_25c * 0x20))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)) {
      pcVar4 = (code *)swi(3);
      pPVar12 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar12;
    }
    if (local_260 == uStack_25c) {
      local_260 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_268,(int *)&uStack_25c);
    }
    *(undefined8 *)&local_268.Data[(longlong)(int)local_260 * 0x20].field_0x0 = local_250._0_8_;
    *(ulonglong *)(local_268.Data + (longlong)(int)local_260 * 0x20 + 8) =
         CONCAT44(local_250._12_4_,local_250._8_4_);
    *(ulonglong *)(local_268.Data + (longlong)(int)local_260 * 0x20 + 0x10) =
         CONCAT44(local_250._20_4_,local_250._16_4_);
    *(undefined8 *)(local_268.Data + (longlong)(int)local_260 * 0x20 + 0x10 + 8) = local_250._24_8_;
    local_260 = local_260 + 1;
  }
  FImplicitObject::FindClosestIntersection
            ((FImplicitObject *)&this->MPlane1,(Pair<Chaos::TVector<double,3>,bool> *)local_198,
             param_1,param_2,param_3);
  if (local_180 != false) {
    dVar21 = (double)CONCAT44(local_198._4_4_,local_198._0_4_) - *(double *)param_1;
    dVar16 = (double)CONCAT44(local_198._12_4_,local_198._8_4_) - *(double *)&param_1->field_0x8;
    local_230._24_8_ = local_198._16_8_;
    auVar19._0_8_ = dVar16 * dVar16;
    auVar19._8_8_ = 0;
    dVar16 = (double)local_198._16_8_ - *(double *)&param_1->field_0x10;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar21 * dVar21 + auVar19._0_8_ + dVar16 * dVar16;
    auVar18 = sqrtpd(auVar19,auVar5);
    local_230._0_8_ = auVar18._0_8_;
    local_230._8_4_ = local_198._0_4_;
    local_230._12_4_ = local_198._4_4_;
    local_230._16_4_ = local_198._8_4_;
    local_230._20_4_ = local_198._12_4_;
    if (((local_268.Data <= (Pair<double,Chaos::TVector<double,3>_> *)local_230) &&
        ((FScriptContainerElement *)local_230 < local_268.Data + (longlong)(int)uStack_25c * 0x20))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)) {
      pcVar4 = (code *)swi(3);
      pPVar12 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar12;
    }
    if (local_260 == uStack_25c) {
      local_260 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_268,(int *)&uStack_25c);
    }
    *(undefined8 *)&local_268.Data[(longlong)(int)local_260 * 0x20].field_0x0 = local_230._0_8_;
    *(ulonglong *)(local_268.Data + (longlong)(int)local_260 * 0x20 + 8) =
         CONCAT44(local_230._12_4_,local_230._8_4_);
    *(ulonglong *)(local_268.Data + (longlong)(int)local_260 * 0x20 + 0x10) =
         CONCAT44(local_230._20_4_,local_230._16_4_);
    *(undefined8 *)(local_268.Data + (longlong)(int)local_260 * 0x20 + 0x10 + 8) = local_230._24_8_;
    local_260 = local_260 + 1;
  }
  FImplicitObject::FindClosestIntersection
            ((FImplicitObject *)&this->MPlane2,(Pair<Chaos::TVector<double,3>,bool> *)local_178,
             param_1,param_2,param_3);
  if (local_160 != false) {
    dVar21 = (double)CONCAT44(local_178._4_4_,local_178._0_4_) - *(double *)param_1;
    dVar16 = (double)CONCAT44(local_178._12_4_,local_178._8_4_) - *(double *)&param_1->field_0x8;
    local_210._24_8_ = local_178._16_8_;
    auVar20._0_8_ = dVar16 * dVar16;
    auVar20._8_8_ = 0;
    dVar16 = (double)local_178._16_8_ - *(double *)&param_1->field_0x10;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar21 * dVar21 + auVar20._0_8_ + dVar16 * dVar16;
    auVar18 = sqrtpd(auVar20,auVar6);
    local_210._0_8_ = auVar18._0_8_;
    local_210._8_4_ = local_178._0_4_;
    local_210._12_4_ = local_178._4_4_;
    local_210._16_4_ = local_178._8_4_;
    local_210._20_4_ = local_178._12_4_;
    if (((local_268.Data <= (Pair<double,Chaos::TVector<double,3>_> *)local_210) &&
        ((FScriptContainerElement *)local_210 < local_268.Data + (longlong)(int)uStack_25c * 0x20))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)) {
      pcVar4 = (code *)swi(3);
      pPVar12 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar12;
    }
    if (local_260 == uStack_25c) {
      local_260 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_268,(int *)&uStack_25c);
    }
    *(undefined8 *)&local_268.Data[(longlong)(int)local_260 * 0x20].field_0x0 = local_210._0_8_;
    *(ulonglong *)(local_268.Data + (longlong)(int)local_260 * 0x20 + 8) =
         CONCAT44(local_210._12_4_,local_210._8_4_);
    *(ulonglong *)(local_268.Data + (longlong)(int)local_260 * 0x20 + 0x10) =
         CONCAT44(local_210._20_4_,local_210._16_4_);
    *(undefined8 *)(local_268.Data + (longlong)(int)local_260 * 0x20 + 0x10 + 8) = local_210._24_8_;
    local_260 = local_260 + 1;
  }
  AlgoImpl::
  IntroSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::FCylinder::FindClosestIntersectionImp_::__l2::<lambda_1>_>_>
            ((Pair<double,Chaos::TVector<double,3>_> *)local_268.Data,local_260,local_257[0],
             (<lambda_1> *)local_257);
  uVar9 = local_260;
  dVar21 = __real_3f1a36e2eb1c432d;
  uVar13 = (ulonglong)(int)local_260;
  pPVar15 = (Pair<double,Chaos::TVector<double,3>_> *)(local_268.Data + uVar13 * 0x20);
  FVar14.Data = local_268.Data;
  while( true ) {
    if ((uint)uVar13 != uVar9) {
      local_258 = 0;
      `TCheckedPointerIterator<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_258);
    }
    if ((Pair<double,Chaos::TVector<double,3>_> *)FVar14.Data == pPVar15) break;
    dVar16 = (double)(**(code **)(this->_padding_ + 0x80))
                               (this,&((Pair<double,Chaos::TVector<double,3>_> *)FVar14.Data)->
                                      Second,local_1f0);
    if (dVar16 <= param_3 + dVar21) {
      uVar8 = *(undefined8 *)
               &(((Pair<double,Chaos::TVector<double,3>_> *)FVar14.Data)->Second).field_0x8;
      *(undefined8 *)&__return_storage_ptr__->First =
           *(undefined8 *)&((Pair<double,Chaos::TVector<double,3>_> *)FVar14.Data)->Second;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = uVar8;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 =
           *(undefined8 *)
            &(((Pair<double,Chaos::TVector<double,3>_> *)FVar14.Data)->Second).field_0x10;
      __return_storage_ptr__->Second = true;
LAB_143b64aea:
      local_138._padding_ = (longlong)&___7FImplicitObject_Chaos__6B_;
      FChaosVisualDebuggerTrace::InvalidateGeometryFromCache(&local_138);
      if (local_138.bIsTracked != false) {
        pFVar11 = FTrackedGeometryManager::Get();
        FTrackedGeometryManager::RemoveGeometry(pFVar11,&local_138);
      }
      local_138._padding_ = (longlong)&___7FChaosRefCountedObject_Chaos__6B_;
      if ((((int)local_138._padding_ != 0) && ((int)local_138._padding_ != 0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("GetRefCount() == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\RefCountedObject.h"
                              ,0x1e,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        pPVar12 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
        return pPVar12;
      }
      if ((Pair<double,Chaos::TVector<double,3>_> *)local_268.Data !=
          (Pair<double,Chaos::TVector<double,3>_> *)0x0) {
        FMemory::Free(local_268.Data);
      }
      return __return_storage_ptr__;
    }
    uVar13 = (ulonglong)local_260;
    FVar14.Data = FVar14.Data + 0x20;
  }
  *(undefined8 *)&__return_storage_ptr__->First = 0;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = 0;
  __return_storage_ptr__->Second = false;
  goto LAB_143b64aea;
}

// GetRadius @ 143b68760

double __thiscall Chaos::FCylinder::GetRadius(FCylinder *this)

{
  return this->MRadius;
}

// GetTypeHash @ 143b68c80

uint __thiscall Chaos::FCylinder::GetTypeHash(FCylinder *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = TPlane<double,3>::GetTypeHash(&this->MPlane2);
  uVar2 = TPlane<double,3>::GetTypeHash(&this->MPlane1);
  uVar3 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar4 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xc;
  uVar2 = (uVar2 - uVar4) - uVar1 ^ uVar4 << 0x10;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar5 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar4 = (uVar2 - uVar5) - uVar3 ^ uVar5 << 10;
  uVar6 = (int)((ulonglong)this->MRadius >> 0x20) * 0x17 + SUB84(this->MRadius,0);
  uVar2 = ((int)((ulonglong)this->MHeight >> 0x20) * 0x17 - uVar6) + SUB84(this->MHeight,0) ^
          uVar6 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar6 ^ uVar2 << 8;
  uVar6 = (uVar6 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar6) - uVar1 ^ uVar6 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar6 ^ uVar2 << 0x10;
  uVar6 = (uVar6 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar6) - uVar1 ^ uVar6 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar6 ^ uVar2 << 10;
  uVar2 = (uVar6 - uVar1) - uVar2 ^ uVar1 >> 0xf;
  uVar1 = ((uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar1) - uVar2 ^ uVar1 << 8;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xd;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 5;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 << 10;
  return (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xf;
}

// PhiWithNormal @ 143b6b9d0

double __thiscall
Chaos::FCylinder::PhiWithNormal
          (FCylinder *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  undefined1 unaff_XMM14 [16];
  undefined1 auVar21 [16];
  double dStack_1c0;
  double local_1b8;
  double dStack_1a8;
  double local_1a0;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  double local_140;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  
  local_120 = *(double *)&(this->MPlane1).MPlaneConcrete.MX;
  dStack_118 = *(double *)&(this->MPlane1).MPlaneConcrete.MX.field_0x8;
  local_140 = *(double *)&(this->MPlane1).MPlaneConcrete.MNormal.field_0x10;
  local_110 = *(double *)&(this->MPlane1).MPlaneConcrete.MX.field_0x10;
  auVar13 = *(undefined1 (*) [16])&(this->MPlane1).MPlaneConcrete.MNormal;
  dVar8 = *(double *)param_1;
  dVar20 = auVar13._0_8_;
  dVar18 = auVar13._8_8_;
  dVar1 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&param_1->field_0x10;
  dVar17 = (dVar8 - local_120) * dVar20 + (dVar1 - dStack_118) * dVar18 +
           (dVar2 - local_110) * local_140;
  if (0.0 <= dVar17) {
    local_f0 = *(double *)&(this->MPlane2).MPlaneConcrete.MX;
    dStack_e8 = *(double *)&(this->MPlane2).MPlaneConcrete.MX.field_0x8;
    local_128 = *(double *)&(this->MPlane2).MPlaneConcrete.MNormal.field_0x10;
    auVar11 = *(undefined1 (*) [16])&(this->MPlane2).MPlaneConcrete.MNormal;
    local_e0 = *(double *)&(this->MPlane2).MPlaneConcrete.MX.field_0x10;
    dVar3 = (dVar1 - dStack_e8) * auVar11._8_8_ + (dVar8 - local_f0) * auVar11._0_8_ +
            (dVar2 - local_e0) * local_128;
    if (0.0 <= dVar3) {
      dVar8 = (dVar3 + dVar17) - this->MHeight;
      if ((__real_3f1a36e2e0000000 <=
           (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("FMath::Abs(Distance1 + Distance2 - MHeight) < (1.e-4f)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Cylinder.h"
                             ,0x8e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        dVar8 = (double)(*pcVar5)();
        return dVar8;
      }
      dVar1 = *(double *)&param_1->field_0x10 -
              (local_140 * dVar17 + *(double *)&(this->MPlane1).MPlaneConcrete.MX.field_0x10);
      dVar18 = *(double *)&param_1->field_0x8 -
               (dVar18 * dVar17 + *(double *)&(this->MPlane1).MPlaneConcrete.MX.field_0x8);
      dVar2 = *(double *)param_1 - (dVar20 * dVar17 + *(double *)&(this->MPlane1).MPlaneConcrete.MX)
      ;
      dVar8 = dVar18 * dVar18 + dVar2 * dVar2 + dVar1 * dVar1;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = dVar8;
      auVar21 = sqrtpd(unaff_XMM14,auVar21);
      dVar20 = auVar21._0_8_ - this->MRadius;
      if (dVar20 < 0.0) {
        dVar4 = dVar3;
        if (dVar17 <= dVar3) {
          dVar4 = dVar17;
        }
        uVar15 = (uint)__xmm_80000000000000008000000000000000;
        uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        if (dVar4 < (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar16,
                                     SUB84(dVar20,0) ^ uVar15)) {
          if (dVar3 <= dVar17) {
            puVar7 = &local_168;
            local_168 = CONCAT44(auVar11._4_4_ ^ uVar16,auVar11._0_4_ ^ uVar15);
            local_160 = CONCAT44(auVar11._12_4_ ^ uVar16,auVar11._8_4_ ^ uVar15);
            local_158 = CONCAT44((uint)((ulonglong)local_128 >> 0x20) ^ uVar16,
                                 SUB84(local_128,0) ^ uVar15);
          }
          else {
            puVar7 = &local_180;
            local_180 = CONCAT44(auVar13._4_4_ ^ uVar16,auVar13._0_4_ ^ uVar15);
            uStack_178 = CONCAT44(auVar13._12_4_ ^ uVar16,auVar13._8_4_ ^ uVar15);
            local_170 = CONCAT44((uint)((ulonglong)local_140 >> 0x20) ^ uVar16,
                                 SUB84(local_140,0) ^ uVar15);
          }
          uVar9 = puVar7[1];
          uVar19 = puVar7[2];
          *(undefined8 *)param_2 = *puVar7;
          *(undefined8 *)&param_2->field_0x8 = uVar9;
          *(undefined8 *)&param_2->field_0x10 = uVar19;
          return (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar16,SUB84(dVar4,0) ^ uVar15)
          ;
        }
      }
      uVar19 = dVar1;
      uVar9 = dVar2;
      uVar14 = dVar18;
      if ((dVar8 != __real_3ff0000000000000) &&
         (uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         __real_3e45798ee0000000 <= dVar8)) {
        dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
        uVar19 = dVar8 * dVar1;
        uVar9 = dVar8 * dVar2;
        uVar14 = dVar8 * dVar18;
      }
      *(undefined8 *)param_2 = uVar9;
      *(undefined8 *)&param_2->field_0x8 = uVar14;
      *(undefined8 *)&param_2->field_0x10 = uVar19;
      return dVar20;
    }
    local_d8 = *(double *)&(this->MPlane1).MPlaneConcrete.MX;
    dStack_d0 = *(double *)&(this->MPlane1).MPlaneConcrete.MX.field_0x8;
    local_c8 = *(double *)&(this->MPlane1).MPlaneConcrete.MX.field_0x10;
    if (((dVar1 - dStack_d0) * dVar18 + (dVar8 - local_d8) * dVar20 +
         (dVar2 - local_c8) * *(double *)&(this->MPlane1).MPlaneConcrete.MNormal.field_0x10 <= 0.0)
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("MPlane1.PhiWithNormal(x, Normal1) > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Cylinder.h"
                              ,0x7f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      dVar8 = (double)(*pcVar5)();
      return dVar8;
    }
    dVar1 = *(double *)&(this->MPlane2).MPlaneConcrete.MX.field_0x10;
    dVar8 = *(double *)&param_1->field_0x10;
    dVar2 = *(double *)&(this->MPlane2).MPlaneConcrete.MX.field_0x8;
    dVar17 = *(double *)&param_1->field_0x8;
    dVar20 = this->MRadius;
    local_1a0 = dVar8 - (local_128 * dVar3 + dVar1);
    dStack_1a8 = dVar17 - (auVar11._8_8_ * dVar3 + dVar2);
    uVar19 = *(double *)param_1 -
             (auVar11._0_8_ * dVar3 + *(double *)&(this->MPlane2).MPlaneConcrete.MX);
    auVar12._0_8_ = (double)uVar19 * (double)uVar19;
    auVar12._8_8_ = 0;
    dVar18 = dStack_1a8 * dStack_1a8 + auVar12._0_8_ + local_1a0 * local_1a0;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar18;
    auVar13 = sqrtpd(auVar12,auVar13);
    if (auVar13._0_8_ <= dVar20) {
      uVar15 = (uint)__xmm_80000000000000008000000000000000;
      uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      *(ulonglong *)param_2 = CONCAT44(auVar11._4_4_ ^ uVar16,auVar11._0_4_ ^ uVar15);
      *(ulonglong *)&param_2->field_0x8 = CONCAT44(auVar11._12_4_ ^ uVar16,auVar11._8_4_ ^ uVar15);
      *(ulonglong *)&param_2->field_0x10 =
           CONCAT44((uint)((ulonglong)local_128 >> 0x20) ^ uVar16,SUB84(local_128,0) ^ uVar15);
      return (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar16,SUB84(dVar3,0) ^ uVar15);
    }
    if (dVar18 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar18) {
        dVar18 = __real_3ff0000000000000 / SQRT(dVar18);
        uVar19 = (double)uVar19 * dVar18;
        dStack_1a8 = dVar18 * dStack_1a8;
        local_1a0 = dVar18 * local_1a0;
      }
      else {
        dStack_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
    }
    *(double *)param_2 =
         *(double *)param_1 -
         ((double)uVar19 * dVar20 + *(double *)&(this->MPlane2).MPlaneConcrete.MX);
    *(double *)&param_2->field_0x8 = dVar17 - (dStack_1a8 * dVar20 + dVar2);
    dVar8 = dVar8 - (local_1a0 * dVar20 + dVar1);
  }
  else {
    local_108 = *(double *)&(this->MPlane2).MPlaneConcrete.MX;
    dStack_100 = *(double *)&(this->MPlane2).MPlaneConcrete.MX.field_0x8;
    local_f8 = *(double *)&(this->MPlane2).MPlaneConcrete.MX.field_0x10;
    if (((dVar8 - local_108) * *(double *)&(this->MPlane2).MPlaneConcrete.MNormal +
         (dVar1 - dStack_100) * *(double *)&(this->MPlane2).MPlaneConcrete.MNormal.field_0x8 +
         (dVar2 - local_f8) * *(double *)&(this->MPlane2).MPlaneConcrete.MNormal.field_0x10 <= 0.0)
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("MPlane2.PhiWithNormal(x, Normal2) > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Cylinder.h"
                              ,0x6e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      dVar8 = (double)(*pcVar5)();
      return dVar8;
    }
    dVar1 = *(double *)&(this->MPlane1).MPlaneConcrete.MX.field_0x10;
    dVar8 = *(double *)&param_1->field_0x10;
    dVar2 = *(double *)&(this->MPlane1).MPlaneConcrete.MX.field_0x8;
    dVar3 = *(double *)&param_1->field_0x8;
    dVar4 = this->MRadius;
    local_1b8 = dVar8 - (local_140 * dVar17 + dVar1);
    dStack_1c0 = dVar3 - (dVar18 * dVar17 + dVar2);
    uVar19 = *(double *)param_1 - (dVar20 * dVar17 + *(double *)&(this->MPlane1).MPlaneConcrete.MX);
    auVar10._0_8_ = (double)uVar19 * (double)uVar19;
    auVar10._8_8_ = 0;
    dVar20 = dStack_1c0 * dStack_1c0 + auVar10._0_8_ + local_1b8 * local_1b8;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar20;
    auVar11 = sqrtpd(auVar10,auVar11);
    if (auVar11._0_8_ <= dVar4) {
      uVar15 = (uint)__xmm_80000000000000008000000000000000;
      uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      *(ulonglong *)param_2 = CONCAT44(auVar13._4_4_ ^ uVar16,auVar13._0_4_ ^ uVar15);
      *(ulonglong *)&param_2->field_0x8 = CONCAT44(auVar13._12_4_ ^ uVar16,auVar13._8_4_ ^ uVar15);
      *(ulonglong *)&param_2->field_0x10 =
           CONCAT44((uint)((ulonglong)local_140 >> 0x20) ^ uVar16,SUB84(local_140,0) ^ uVar15);
      return (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar16,SUB84(dVar17,0) ^ uVar15);
    }
    if (dVar20 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar20) {
        dVar17 = __real_3ff0000000000000 / SQRT(dVar20);
        uVar19 = (double)uVar19 * dVar17;
        dStack_1c0 = dVar17 * dStack_1c0;
        local_1b8 = dVar17 * local_1b8;
      }
      else {
        dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
    }
    *(double *)param_2 =
         *(double *)param_1 -
         ((double)uVar19 * dVar4 + *(double *)&(this->MPlane1).MPlaneConcrete.MX);
    *(double *)&param_2->field_0x8 = dVar3 - (dVar4 * dStack_1c0 + dVar2);
    dVar8 = dVar8 - (dVar4 * local_1b8 + dVar1);
  }
  *(double *)&param_2->field_0x10 = dVar8;
  dVar8 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
  return dVar8;
}

// Serialize @ 143b76a30

void __thiscall Chaos::FCylinder::Serialize(FCylinder *this,FChaosArchive *param_1)

{
  longlong *plVar1;
  float local_res8 [2];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  (**(code **)((this->MPlane1)._padding_ + 0x100))(&this->MPlane1,param_1);
  (**(code **)((this->MPlane2)._padding_ + 0x100))(&this->MPlane2,param_1);
  if ((int)((ulonglong)param_1->_padding_ >> 0x20) < 0x3ec) {
    plVar1 = (longlong *)param_1->_padding_;
    local_res8[0] = (float)this->MHeight;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_res8);
      }
    }
    else {
      local_res8[0] = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if ((param_1->_padding_ & 1) != 0) {
      this->MHeight = (double)local_res8[0];
    }
  }
  else {
    ::operator<<((FArchive *)param_1,&this->MHeight);
  }
  if ((int)((ulonglong)param_1->_padding_ >> 0x20) < 0x3ec) {
    plVar1 = (longlong *)param_1->_padding_;
    local_res8[0] = (float)this->MRadius;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_res8);
      }
    }
    else {
      local_res8[0] = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if ((param_1->_padding_ & 1) != 0) {
      this->MRadius = (double)local_res8[0];
    }
  }
  else {
    ::operator<<((FArchive *)param_1,&this->MRadius);
  }
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,&this->MLocalBoundingBox);
  return;
}

