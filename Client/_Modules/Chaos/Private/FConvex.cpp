// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 52

// BoundingBox @ 143755af0

TAABB<double,3> * __thiscall
Chaos::FConvex::BoundingBox(FConvex *this,TAABB<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  double dVar6;
  
  fVar1 = *(float *)&(this->LocalBoundingBox).MMin.field_0x4;
  fVar2 = *(float *)&(this->LocalBoundingBox).MMin.field_0x8;
  fVar3 = *(float *)&(this->LocalBoundingBox).MMax;
  uVar4 = *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x4;
  *(double *)&__return_storage_ptr__->MMin = (double)*(float *)&(this->LocalBoundingBox).MMin;
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = (double)fVar1;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = (double)fVar2;
  dVar6 = (double)(float)((ulonglong)uVar4 >> 0x20);
  *(double *)&__return_storage_ptr__->MMax = (double)fVar3;
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = (double)(float)uVar4;
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->MMax).field_0x8 = auVar5;
  return __return_storage_ptr__;
}

// FindClosestIntersectionImp @ 14377b450

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::FConvex::FindClosestIntersectionImp
          (FConvex *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  Pair<Chaos::TVector<double,3>,bool> *pPVar9;
  ulonglong uVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  Pair<double,Chaos::TVector<double,3>_> *pPVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  FIdentityFunctor local_res8 [8];
  Pair<Chaos::TVector<double,3>,bool> *local_res10;
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  double dStack_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  bool local_68;
  
  iVar2 = (this->Planes).ArrayNum;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  uVar11 = 0x10;
  if ((int)((double)iVar2 * __real_3fb999999999999a) < 0x10) {
    uVar11 = (int)((double)iVar2 * __real_3fb999999999999a);
  }
  local_res10 = __return_storage_ptr__;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar11,&local_b0,0,(int *)((longlong)&local_a8 + 4));
  }
  uVar11 = 0;
  if (0 < iVar2) {
    lVar14 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < (this->Planes).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pPVar9 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar3)();
        return pPVar9;
      }
      TCorePlane<float,3>::FindClosestIntersection
                ((TCorePlane<float,3> *)((this->Planes).AllocatorInstance.Data + lVar14),
                 (Pair<Chaos::TVector<double,3>,bool> *)&local_80,param_1,param_2,param_3);
      if (local_68 != false) {
        dVar15 = dStack_78 - *(double *)&param_1->field_0x8;
        dStack_88 = local_70;
        dVar16 = local_70 - *(double *)&param_1->field_0x10;
        local_a0._8_8_ = local_80;
        dStack_90 = dStack_78;
        local_a0._0_8_ =
             (local_80 - *(double *)param_1) * (local_80 - *(double *)param_1) + dVar15 * dVar15 +
             dVar16 * dVar16;
        if (((local_b0.Data <= (Pair<double,Chaos::TVector<double,3>_> *)local_a0) &&
            ((FScriptContainerElement *)local_a0 < local_b0.Data + (longlong)local_a8._4_4_ * 0x20))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar3 = (code *)swi(3);
          pPVar9 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar3)();
          return pPVar9;
        }
        iVar8 = (int)local_a8;
        if ((int)local_a8 == local_a8._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_b0,(int *)((longlong)&local_a8 + 4));
        }
        local_a8 = CONCAT44(local_a8._4_4_,iVar8 + 1);
        *(undefined8 *)&local_b0.Data[(longlong)iVar8 * 0x20].field_0x0 = local_a0._0_8_;
        *(undefined8 *)(local_b0.Data + (longlong)iVar8 * 0x20 + 8) = local_a0._8_8_;
        *(double *)(local_b0.Data + (longlong)iVar8 * 0x20 + 0x10) = dStack_90;
        *(double *)(local_b0.Data + (longlong)iVar8 * 0x20 + 0x10 + 8) = dStack_88;
      }
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 0x18;
      __return_storage_ptr__ = local_res10;
    } while ((int)uVar11 < iVar2);
  }
  AlgoImpl::
  IntroSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::FConvex::FindClosestIntersectionImp_::__l2::<lambda_1>_>_>
            ((Pair<double,Chaos::TVector<double,3>_> *)local_b0.Data,(int)local_a8,local_res8[0],
             (<lambda_1> *)local_res8);
  dVar15 = __real_3f1a36e2eb1c432d;
  iVar2 = (int)local_a8;
  uVar10 = (ulonglong)(int)local_a8;
  pPVar13 = (Pair<double,Chaos::TVector<double,3>_> *)(local_b0.Data + uVar10 * 0x20);
  FVar12.Data = local_b0.Data;
  while( true ) {
    if ((int)uVar10 != iVar2) {
      `TCheckedPointerIterator<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_b8);
    }
    if ((Pair<double,Chaos::TVector<double,3>_> *)FVar12.Data == pPVar13) break;
    dVar16 = FImplicitObject::SignedDistance
                       ((FImplicitObject *)this,
                        &((Pair<double,Chaos::TVector<double,3>_> *)FVar12.Data)->Second);
    if (dVar16 < param_3 + dVar15) {
      uVar4 = *(undefined8 *)&((Pair<double,Chaos::TVector<double,3>_> *)FVar12.Data)->Second;
      uVar5 = *(undefined8 *)
               &(((Pair<double,Chaos::TVector<double,3>_> *)FVar12.Data)->Second).field_0x8;
      __return_storage_ptr__->Second = true;
      uVar1 = *(undefined8 *)
               &(((Pair<double,Chaos::TVector<double,3>_> *)FVar12.Data)->Second).field_0x10;
      *(undefined8 *)&__return_storage_ptr__->First = uVar4;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = uVar5;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = uVar1;
LAB_14377b737:
      if ((Pair<double,Chaos::TVector<double,3>_> *)local_b0.Data !=
          (Pair<double,Chaos::TVector<double,3>_> *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      return __return_storage_ptr__;
    }
    uVar10 = local_a8 & 0xffffffff;
    FVar12.Data = FVar12.Data + 0x20;
  }
  *(undefined8 *)&__return_storage_ptr__->First = 0;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = 0;
  __return_storage_ptr__->Second = false;
  goto LAB_14377b737;
}

// FindGeometryOpposingNormal @ 14377b9f0

TVector<double,3> * __thiscall
Chaos::FConvex::FindGeometryOpposingNormal
          (FConvex *this,TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,
          int param_2,TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TVector<double,3> *pTVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_2;
  if (param_2 == -1) {
    uVar6 = *(undefined8 *)&param_3->field_0x8;
    uVar3 = *(undefined8 *)&param_3->field_0x10;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar6;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar3;
    return __return_storage_ptr__;
  }
  uVar8 = 0;
  if (param_2 < (this->Planes).ArrayNum) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TVector<double,3> *)(*pcVar5)();
      return pTVar9;
    }
  }
  pFVar4 = (this->Planes).AllocatorInstance.Data;
  fVar1 = *(float *)(pFVar4 + lVar10 * 0x18 + 0x10);
  *(double *)__return_storage_ptr__ = (double)*(float *)(pFVar4 + lVar10 * 0x18 + 0xc);
  fVar2 = *(float *)(pFVar4 + lVar10 * 0x18 + 0x14);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// GetMargin @ 143790f40

double __thiscall Chaos::FConvex::GetMargin(FConvex *this)

{
  return (double)*(float *)&this->_padding_;
}

// GetMarginAdjustedVertexScaled @ 143790f60

TVector<double,3> * __thiscall
Chaos::FConvex::GetMarginAdjustedVertexScaled
          (FConvex *this,TVector<double,3> *__return_storage_ptr__,int param_1,double param_2,
          TVector<double,3> *param_3,double *param_4)

{
  double dVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  TVector<double,3> *pTVar10;
  TVector<float,3> *pTVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar15 [16];
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint local_1a8;
  uint local_1a4;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double local_178;
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
  double local_100;
  double local_f8;
  double local_f0;
  double local_d0;
  
  pTVar10 = param_3;
  lVar14 = (longlong)param_1;
  param_3._0_4_ = 0xffffffff;
  local_1a8 = 0xffffffff;
  local_1a4 = 0xffffffff;
  iVar9 = GetVertexPlanes3(this,param_1,(int *)&param_3,(int *)&local_1a8,(int *)&local_1a4);
  dVar19 = __real_3ff0000000000000;
  dVar21 = __real_3ff0000000000000 / *(double *)pTVar10;
  dVar17 = __real_3ff0000000000000 / *(double *)&pTVar10->field_0x8;
  dVar7 = __real_3ff0000000000000 / *(double *)&pTVar10->field_0x10;
  if (iVar9 < 3) {
    if (iVar9 == 2) {
      pTVar11 = GetVertex(this,param_1);
      fVar26 = *(float *)&pTVar11->field_0x8;
      fVar18 = *(float *)&pTVar11->field_0x4;
      fVar25 = *(float *)pTVar11;
      dVar5 = *(double *)&pTVar10->field_0x10;
      dVar6 = *(double *)&pTVar10->field_0x8;
      dVar1 = *(double *)pTVar10;
      lVar14 = (longlong)(int)(uint)param_3;
      uVar12 = 0;
      if ((int)(uint)param_3 < (this->Planes).ArrayNum) {
        uVar12 = ~(uint)param_3 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TVector<double,3> *)(*pcVar4)();
        return pTVar10;
      }
      fVar20 = __real_3f800000;
      pFVar3 = (this->Planes).AllocatorInstance.Data;
      lVar13 = (longlong)(int)local_1a8;
      fVar29 = (float)dVar7 * *(float *)(pFVar3 + lVar14 * 0x18 + 0x14);
      fVar28 = (float)dVar17 * *(float *)(pFVar3 + lVar14 * 0x18 + 0x10);
      fVar23 = (float)dVar21 * *(float *)(pFVar3 + lVar14 * 0x18 + 0xc);
      uVar12 = 0;
      if ((int)local_1a8 < (this->Planes).ArrayNum) {
        uVar12 = ~local_1a8 >> 0x1f;
      }
      fVar16 = __real_3f800000 / SQRT(fVar23 * fVar23 + fVar28 * fVar28 + fVar29 * fVar29);
      local_150 = (double)(fVar28 * fVar16);
      local_1a0 = (double)(fVar29 * fVar16);
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TVector<double,3> *)(*pcVar4)();
        return pTVar10;
      }
      pFVar3 = (this->Planes).AllocatorInstance.Data;
      fVar28 = (float)dVar7 * *(float *)(pFVar3 + lVar13 * 0x18 + 0x14);
      fVar29 = (float)dVar17 * *(float *)(pFVar3 + lVar13 * 0x18 + 0x10);
      fVar27 = (float)dVar21 * *(float *)(pFVar3 + lVar13 * 0x18 + 0xc);
      fVar20 = fVar20 / SQRT(fVar27 * fVar27 + fVar29 * fVar29 + fVar28 * fVar28);
      local_1a0 = (double)(fVar28 * fVar20) + local_1a0;
      local_150 = (double)(fVar29 * fVar20) + local_150;
      dVar21 = (double)(fVar27 * fVar20) + (double)(fVar23 * fVar16);
      dVar17 = dVar21 * dVar21 + local_150 * local_150 + local_1a0 * local_1a0;
      uVar22 = dVar21;
      uVar24 = local_150;
      uVar2 = local_1a0;
      if ((dVar17 != dVar19) &&
         (uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         __real_3e45798ee0000000 <= dVar17)) {
        dVar19 = dVar19 / SQRT(dVar17);
        uVar22 = dVar21 * dVar19;
        uVar24 = local_150 * dVar19;
        uVar2 = local_1a0 * dVar19;
      }
      *(double *)&__return_storage_ptr__->field_0x10 =
           (double)fVar26 * dVar5 - (double)uVar2 * param_2;
      *(double *)&__return_storage_ptr__->field_0x8 =
           (double)fVar18 * dVar6 - (double)uVar24 * param_2;
      *(double *)__return_storage_ptr__ = (double)fVar25 * dVar1 - (double)uVar22 * param_2;
      return __return_storage_ptr__;
    }
    if (iVar9 == 1) {
      pTVar11 = GetVertex(this,param_1);
      fVar26 = *(float *)&pTVar11->field_0x8;
      fVar18 = *(float *)&pTVar11->field_0x4;
      fVar25 = *(float *)pTVar11;
      dVar19 = *(double *)&pTVar10->field_0x10;
      dVar5 = *(double *)&pTVar10->field_0x8;
      dVar6 = *(double *)pTVar10;
      lVar14 = (longlong)(int)(uint)param_3;
      uVar12 = 0;
      if ((int)(uint)param_3 < (this->Planes).ArrayNum) {
        uVar12 = ~(uint)param_3 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TVector<double,3> *)(*pcVar4)();
        return pTVar10;
      }
      pFVar3 = (this->Planes).AllocatorInstance.Data;
      fVar28 = (float)dVar17 * *(float *)(pFVar3 + lVar14 * 0x18 + 0x10);
      fVar23 = (float)dVar21 * *(float *)(pFVar3 + lVar14 * 0x18 + 0xc);
      fVar29 = (float)dVar7 * *(float *)(pFVar3 + lVar14 * 0x18 + 0x14);
      fVar20 = __real_3f800000 / SQRT(fVar23 * fVar23 + fVar28 * fVar28 + fVar29 * fVar29);
      *(double *)__return_storage_ptr__ =
           (double)fVar25 * dVar6 - (double)(fVar23 * fVar20) * param_2;
      *(double *)&__return_storage_ptr__->field_0x8 =
           (double)fVar18 * dVar5 - (double)(fVar28 * fVar20) * param_2;
      *(double *)&__return_storage_ptr__->field_0x10 =
           (double)fVar26 * dVar19 - (double)(fVar29 * fVar20) * param_2;
      return __return_storage_ptr__;
    }
  }
  else {
    uVar12 = 0;
    if (param_1 < (this->Vertices).ArrayNum) {
      uVar12 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TVector<double,3> *)(*pcVar4)();
      return pTVar10;
    }
    pFVar3 = (this->Vertices).AllocatorInstance.Data;
    lVar13 = (longlong)(int)(uint)param_3;
    uVar12 = 0;
    if ((int)(uint)param_3 < (this->Planes).ArrayNum) {
      uVar12 = ~(uint)param_3 >> 0x1f;
    }
    dVar5 = (double)*(float *)(pFVar3 + lVar14 * 0xc + 8) * *(double *)&pTVar10->field_0x10;
    dVar19 = (double)*(float *)(pFVar3 + lVar14 * 0xc + 4) * *(double *)&pTVar10->field_0x8;
    dVar6 = (double)*(float *)(pFVar3 + lVar14 * 0xc) * *(double *)pTVar10;
    local_d0 = dVar5;
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TVector<double,3> *)(*pcVar4)();
      return pTVar10;
    }
    fVar26 = __real_3f800000;
    pFVar3 = (this->Planes).AllocatorInstance.Data;
    lVar14 = (longlong)(int)local_1a8;
    fVar25 = (float)dVar21;
    local_1a0 = (double)CONCAT44(local_1a0._4_4_,fVar25);
    fVar18 = fVar25 * *(float *)(pFVar3 + lVar13 * 0x18 + 0xc);
    fVar29 = (float)dVar17;
    fVar20 = fVar29 * *(float *)(pFVar3 + lVar13 * 0x18 + 0x10);
    fVar28 = (float)dVar7;
    fVar23 = fVar28 * *(float *)(pFVar3 + lVar13 * 0x18 + 0x14);
    uVar12 = 0;
    if ((int)local_1a8 < (this->Planes).ArrayNum) {
      uVar12 = ~local_1a8 >> 0x1f;
    }
    fVar16 = __real_3f800000 / SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar23 * fVar23);
    local_168 = (double)(fVar16 * fVar18);
    local_160 = (double)(fVar16 * fVar20);
    local_158 = (double)(fVar23 * fVar16);
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TVector<double,3> *)(*pcVar4)();
      return pTVar10;
    }
    pFVar3 = (this->Planes).AllocatorInstance.Data;
    lVar13 = (longlong)(int)local_1a4;
    fVar18 = fVar29 * *(float *)(pFVar3 + lVar14 * 0x18 + 0x10);
    fVar25 = fVar25 * *(float *)(pFVar3 + lVar14 * 0x18 + 0xc);
    fVar20 = fVar28 * *(float *)(pFVar3 + lVar14 * 0x18 + 0x14);
    uVar12 = 0;
    if ((int)local_1a4 < (this->Planes).ArrayNum) {
      uVar12 = ~local_1a4 >> 0x1f;
    }
    fVar23 = fVar26 / SQRT(fVar25 * fVar25 + fVar18 * fVar18 + fVar20 * fVar20);
    dVar17 = (double)(fVar23 * fVar25);
    dVar21 = (double)(fVar23 * fVar18);
    dVar7 = (double)(fVar23 * fVar20);
    local_180 = dVar17;
    local_178 = dVar21;
    local_170 = dVar7;
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TVector<double,3> *)(*pcVar4)();
      return pTVar10;
    }
    pFVar3 = (this->Planes).AllocatorInstance.Data;
    fVar18 = local_1a0._0_4_ * *(float *)(pFVar3 + lVar13 * 0x18 + 0xc);
    fVar29 = fVar29 * *(float *)(pFVar3 + lVar13 * 0x18 + 0x10);
    fVar28 = fVar28 * *(float *)(pFVar3 + lVar13 * 0x18 + 0x14);
    fVar26 = fVar26 / SQRT(fVar18 * fVar18 + fVar29 * fVar29 + fVar28 * fVar28);
    local_148 = (double)(fVar26 * fVar18);
    local_188 = local_d0;
    local_140 = (double)(fVar26 * fVar29);
    local_138 = (double)(fVar26 * fVar28);
    local_130 = dVar6 - local_148 * param_2;
    local_128 = dVar19 - local_140 * param_2;
    local_120 = dVar5 - local_138 * param_2;
    local_118 = dVar6 - dVar17 * param_2;
    local_110 = dVar19 - dVar21 * param_2;
    local_108 = dVar5 - dVar7 * param_2;
    local_100 = dVar6 - local_168 * param_2;
    local_f8 = dVar19 - local_160 * param_2;
    local_f0 = dVar5 - local_158 * param_2;
    local_198 = dVar6;
    dStack_190 = dVar19;
    bVar8 = IntersectPlanes3(this,(TVector<double,3> *)&local_100,(TVector<double,3> *)&local_168,
                             (TVector<double,3> *)&local_118,(TVector<double,3> *)&local_180,
                             (TVector<double,3> *)&local_130,(TVector<double,3> *)&local_148,
                             (TVector<double,3> *)&local_198,__real_3eb0c6f7a0b5ed8d);
    if (bVar8) {
      if (param_4 != (double *)0x0) {
        auVar15._8_8_ = 0;
        auVar15._0_8_ =
             (dVar19 - dStack_190) * (dVar19 - dStack_190) +
             (dVar6 - local_198) * (dVar6 - local_198) + (dVar5 - local_188) * (dVar5 - local_188);
        auVar15 = sqrtpd(extraout_XMM0,auVar15);
        *param_4 = auVar15._0_8_ - param_2;
      }
      *(double *)__return_storage_ptr__ = local_198;
      *(double *)&__return_storage_ptr__->field_0x8 = dStack_190;
      *(double *)&__return_storage_ptr__->field_0x10 = local_188;
      return __return_storage_ptr__;
    }
  }
  pTVar11 = GetVertex(this,param_1);
  dVar21 = *(double *)&pTVar10->field_0x8;
  uVar2 = *(undefined8 *)pTVar11;
  dVar17 = *(double *)&pTVar10->field_0x10;
  fVar26 = *(float *)&pTVar11->field_0x8;
  *(double *)__return_storage_ptr__ = (double)((float)*(double *)pTVar10 * (float)uVar2);
  *(double *)&__return_storage_ptr__->field_0x8 =
       (double)((float)dVar21 * (float)((ulonglong)uVar2 >> 0x20));
  *(double *)&__return_storage_ptr__->field_0x10 = (double)((float)dVar17 * fVar26);
  return __return_storage_ptr__;
}

// GetRadius @ 143792a30

double __thiscall Chaos::FConvex::GetRadius(FConvex *this)

{
  return 0.0;
}

// GetTypeHash @ 143793290

uint __thiscall Chaos::FConvex::GetTypeHash(FConvex *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  uVar3 = FCrc::MemCrc_DEPRECATED(&(this->LocalBoundingBox).MMax,0xc,0);
  uVar4 = FCrc::MemCrc_DEPRECATED(&this->LocalBoundingBox,0xc,0);
  iVar2 = (this->Vertices).ArrayNum;
  pFVar8 = (this->Vertices).AllocatorInstance.Data;
  uVar6 = uVar4 - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar3) - uVar6 ^ uVar6 << 8;
  uVar5 = (uVar3 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar3 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar4 = (uVar5 - uVar3) - uVar6 ^ uVar3 >> 5;
  uVar5 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 10;
  uVar3 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf;
  pFVar1 = pFVar8 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->Vertices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TVector<float,3>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    uVar4 = *(uint *)pFVar8;
    uVar5 = *(uint *)(pFVar8 + 4);
    uVar6 = uVar3 - uVar4 ^ uVar4 >> 0xd;
    uVar3 = (-0x61c88647 - uVar4) - uVar6 ^ uVar6 << 8;
    uVar7 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xd;
    uVar4 = (uVar6 - uVar7) - uVar3 ^ uVar7 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar7 ^ uVar4 << 0x10;
    uVar6 = (uVar7 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar6) - uVar3 ^ uVar6 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 << 10;
    uVar4 = ((uVar6 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
    uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar4 << 8;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xd;
    uVar6 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
    uVar4 = (uVar3 - uVar6) - uVar5 ^ uVar6 << 0x10;
    uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 5;
    uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 3;
    uVar3 = *(uint *)(pFVar8 + 8);
    uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 10;
    uVar5 = ((uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
    uVar4 = (-0x61c88647 - uVar3) - uVar5 ^ uVar5 << 8;
    uVar6 = (uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xd;
    uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 0xc;
    uVar3 = (uVar4 - uVar5) - uVar6 ^ uVar5 << 0x10;
    uVar6 = (uVar6 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar4 = (uVar5 - uVar6) - uVar3 ^ uVar6 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 << 10;
    uVar3 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 0xf;
    pFVar8 = pFVar8 + 0xc;
  }
  iVar2 = (this->Planes).ArrayNum;
  pFVar8 = (this->Planes).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->Planes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TCorePlane<float,3>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    uVar4 = FCrc::MemCrc_DEPRECATED(pFVar8 + 0xc,0xc,0);
    uVar5 = FCrc::MemCrc_DEPRECATED(pFVar8,0xc,0);
    uVar7 = uVar5 - uVar4 ^ uVar4 >> 0xd;
    uVar5 = (-0x61c88647 - uVar7) - uVar4 ^ uVar7 << 8;
    uVar6 = (uVar4 - uVar5) - uVar7 ^ uVar5 >> 0xd;
    uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xc;
    uVar4 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 0x10;
    uVar5 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 5;
    uVar6 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 3;
    uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 10;
    uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xf;
    uVar3 = uVar3 - uVar5 ^ uVar5 >> 0xd;
    uVar4 = (-0x61c88647 - uVar3) - uVar5 ^ uVar3 << 8;
    uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xd;
    uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 0xc;
    uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 0x10;
    uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 10;
    uVar3 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xf;
    pFVar8 = pFVar8 + 0x18;
  }
  return uVar3;
}

// GetVertex @ 1437937b0

TVector<float,3> * __thiscall Chaos::FConvex::GetVertex(FConvex *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Vertices).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)((this->Vertices).AllocatorInstance.Data + (longlong)param_1 * 0xc);
}

// IntersectPlanes3 @ 143796de0

bool __thiscall
Chaos::FConvex::IntersectPlanes3
          (FConvex *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,TVector<double,3> *param_4,TVector<double,3> *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,double param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar1 = *(double *)&param_2->field_0x10;
  dVar2 = *(double *)param_2;
  dVar3 = *(double *)&param_2->field_0x8;
  dVar4 = *(double *)&param_4->field_0x8;
  dVar5 = *(double *)param_4;
  dVar6 = *(double *)&param_4->field_0x10;
  dVar15 = dVar3 * dVar6 - dVar1 * dVar4;
  dVar16 = dVar5 * dVar1 - dVar2 * dVar6;
  dVar17 = dVar2 * dVar4 - dVar5 * dVar3;
  dVar18 = *(double *)&param_6->field_0x8 * dVar16 + *(double *)param_6 * dVar15 +
           *(double *)&param_6->field_0x10 * dVar17;
  bVar14 = param_8 <= dVar18 * dVar18;
  if (bVar14) {
    dVar21 = dVar3 * *(double *)&param_1->field_0x8 + dVar2 * *(double *)param_1 +
             dVar1 * *(double *)&param_1->field_0x10;
    dVar19 = dVar4 * *(double *)&param_3->field_0x8 + dVar5 * *(double *)param_3 +
             dVar6 * *(double *)&param_3->field_0x10;
    dVar7 = *(double *)param_6;
    dVar8 = *(double *)&param_6->field_0x8;
    dVar20 = *(double *)&param_6->field_0x8 * *(double *)&param_5->field_0x8 +
             *(double *)param_6 * *(double *)param_5 +
             *(double *)&param_6->field_0x10 * *(double *)&param_5->field_0x10;
    dVar9 = *(double *)&param_6->field_0x8;
    dVar10 = *(double *)param_6;
    dVar11 = *(double *)&param_6->field_0x10;
    dVar18 = __real_3ff0000000000000 / dVar18;
    dVar12 = *(double *)param_6;
    dVar13 = *(double *)param_6;
    *(double *)param_7 =
         ((dVar1 * *(double *)&param_6->field_0x8 - dVar3 * dVar11) * dVar19 +
          (dVar4 * dVar11 - dVar6 * *(double *)&param_6->field_0x8) * dVar21 + dVar20 * dVar15) *
         dVar18;
    *(double *)&param_7->field_0x8 =
         ((dVar2 * dVar11 - dVar1 * dVar12) * dVar19 + (dVar6 * dVar13 - dVar5 * dVar11) * dVar21 +
         dVar20 * dVar16) * dVar18;
    *(double *)&param_7->field_0x10 =
         ((dVar3 * dVar7 - dVar2 * dVar8) * dVar19 + (dVar5 * dVar9 - dVar4 * dVar10) * dVar21 +
         dVar20 * dVar17) * dVar18;
  }
  else {
    *(undefined8 *)param_7 = 0;
    *(undefined8 *)&param_7->field_0x8 = 0;
    *(undefined8 *)&param_7->field_0x10 = 0;
  }
  return bVar14;
}

// IsPerformanceWarning @ 143798340

bool __thiscall Chaos::FConvex::IsPerformanceWarning(FConvex *this)

{
  if (FConvexBuilder::PerformGeometryCheck == 0) {
    return false;
  }
  return FConvexBuilder::VerticesThreshold < (this->Vertices).ArrayNum;
}

// IsValidGeometry @ 143798420

bool __thiscall Chaos::FConvex::IsValidGeometry(FConvex *this)

{
  if ((0 < (this->Vertices).ArrayNum) && (0 < (this->Planes).ArrayNum)) {
    return true;
  }
  return false;
}

// PerformanceWarningAndSimplifaction @ 14379b4f0

FString * __thiscall
Chaos::FConvex::PerformanceWarningAndSimplifaction(FConvex *this,FString *__return_storage_ptr__)

{
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_18;
  
  ::FString::PrintfImpl(__return_storage_ptr__,L"Planes %d, Vertices %d");
  if (0 < FConvexBuilder::PerformGeometryReduction) {
    ::FString::AppendChars(__return_storage_ptr__,", [Simplifying]",0xf);
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    FConvexBuilder::Simplify(&this->Planes,&local_18,&this->Vertices,&this->LocalBoundingBox);
    FConvexBuilder::MergeFaces(&this->Planes,&local_18,&this->Vertices,__real_3f800000);
    FConvexBuilder::MergeColinearEdges(&this->Planes,&local_18,&this->Vertices,__real_358637bd);
    CreateStructureData(this,&local_18,false);
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_18.AllocatorInstance.Data,
               local_18.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_18.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// PhiWithNormal @ 14379bdc0

double __thiscall
Chaos::FConvex::PhiWithNormal(FConvex *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  EIndexType *pEVar1;
  float fVar2;
  float fVar3;
  EIndexType EVar4;
  FScriptContainerElement *pFVar5;
  TConvexHalfEdgeStructureData<int> *pTVar6;
  bool bVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [16];
  bool bVar11;
  uint uVar12;
  int iVar13;
  FPlaneData *pFVar14;
  FPlaneData *pFVar15;
  FPlaneData *pFVar16;
  FHalfEdgeData *pFVar17;
  FHalfEdgeData *pFVar18;
  FHalfEdgeData *pFVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  undefined4 uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar31;
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_e8 [16];
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  
  iVar25 = (this->Planes).ArrayNum;
  lVar23 = (longlong)iVar25;
  if (iVar25 == 0) {
    return __real_47efffffe0000000;
  }
  if ((iVar25 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumPlanes > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Convex.h"
                          ,0xf8,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    dVar27 = (double)(*pcVar8)();
    return dVar27;
  }
  uVar26 = (undefined4)__real_ffefffffffffffff;
  uVar31 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  uVar20 = 0;
  uVar21 = 0;
  if (0 < iVar25) {
    lVar24 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar21 < (this->Planes).ArrayNum) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        dVar27 = (double)(*pcVar8)();
        return dVar27;
      }
      pFVar5 = (this->Planes).AllocatorInstance.Data;
      dVar27 = (*(double *)&param_1->field_0x8 - (double)*(float *)(pFVar5 + lVar24 + 4)) *
               (double)*(float *)(pFVar5 + lVar24 + 0x10) +
               (*(double *)param_1 - (double)*(float *)(pFVar5 + lVar24)) *
               (double)*(float *)(pFVar5 + lVar24 + 0xc) +
               (*(double *)&param_1->field_0x10 - (double)*(float *)(pFVar5 + lVar24 + 8)) *
               (double)*(float *)(pFVar5 + lVar24 + 0x14);
      bVar11 = dVar27 == (double)CONCAT44(uVar31,uVar26);
      bVar7 = dVar27 < (double)CONCAT44(uVar31,uVar26);
      if (dVar27 <= (double)CONCAT44(uVar31,uVar26)) {
        dVar27 = (double)CONCAT44(uVar31,uVar26);
      }
      uVar22 = uVar21;
      if (bVar7 || bVar11) {
        uVar22 = uVar20;
      }
      uVar20 = uVar22;
      uVar21 = uVar21 + 1;
      lVar24 = lVar24 + 0x18;
      uVar26 = SUB84(dVar27,0);
      uVar31 = (undefined4)((ulonglong)dVar27 >> 0x20);
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  uVar21 = 0;
  if ((int)uVar20 < (this->Planes).ArrayNum) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    dVar27 = (double)(*pcVar8)();
    return dVar27;
  }
  lVar23 = (longlong)(int)uVar20;
  pFVar5 = (this->Planes).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar5 + lVar23 * 0x18 + 0x10);
  fVar3 = *(float *)(pFVar5 + lVar23 * 0x18 + 0x14);
  *(double *)param_2 = (double)*(float *)(pFVar5 + lVar23 * 0x18 + 0xc);
  *(double *)&param_2->field_0x8 = (double)fVar2;
  *(double *)&param_2->field_0x10 = (double)fVar3;
  dVar27 = (*(double *)&param_1->field_0x8 - (double)*(float *)(pFVar5 + lVar23 * 0x18 + 4)) *
           (double)*(float *)(pFVar5 + lVar23 * 0x18 + 0x10) +
           (*(double *)param_1 - (double)*(float *)(pFVar5 + lVar23 * 0x18)) *
           (double)*(float *)(pFVar5 + lVar23 * 0x18 + 0xc) +
           (*(double *)&param_1->field_0x10 - (double)*(float *)(pFVar5 + lVar23 * 0x18 + 8)) *
           (double)*(float *)(pFVar5 + lVar23 * 0x18 + 0x14);
  if (dVar27 <= 0.0) {
    return dVar27;
  }
  pTVar6 = (this->StructureData).Data.DataL;
  if (pTVar6 != (TConvexHalfEdgeStructureData<int> *)0x0) {
    EVar4 = (this->StructureData).IndexType;
    if (EVar4 == Small) {
      pFVar16 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                          ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,uVar20);
      uVar21 = (uint)pFVar16->NumHalfEdges;
      goto LAB_14379c0bd;
    }
    if (EVar4 == Medium) {
      pFVar15 = TConvexHalfEdgeStructureData<short>::GetPlane
                          ((TConvexHalfEdgeStructureData<short> *)pTVar6,uVar20);
      uVar21 = (uint)pFVar15->NumHalfEdges;
      goto LAB_14379c0bd;
    }
    if (EVar4 == Large) {
      pFVar14 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar6,uVar20);
      uVar21 = pFVar14->NumHalfEdges;
      goto LAB_14379c0bd;
    }
  }
  uVar21 = 0;
LAB_14379c0bd:
  dVar32 = *(double *)&param_1->field_0x8 - dVar27 * *(double *)&param_2->field_0x8;
  uVar26 = (undefined4)__real_7fefffffffffffff;
  uVar31 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  auStack_e8._8_4_ = SUB84(dVar32,0);
  auStack_e8._0_8_ = *(double *)param_1 - dVar27 * *(double *)param_2;
  auStack_e8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  dStack_d8 = *(double *)&param_1->field_0x10 - dVar27 * *(double *)&param_2->field_0x10;
  if (0 < (int)(uVar21 - 2)) {
    iVar25 = 2;
    do {
      pTVar6 = (this->StructureData).Data.DataL;
      if (pTVar6 == (TConvexHalfEdgeStructureData<int> *)0x0) {
        uVar22 = 0xffffffff;
LAB_14379c251:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          dVar27 = (double)(*pcVar8)();
          return dVar27;
        }
      }
      else {
        EVar4 = (this->StructureData).IndexType;
        if (EVar4 == Small) {
          pFVar16 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,uVar20);
          if ((pFVar16->NumHalfEdges == '\0') &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                  ,0x9e,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            dVar27 = (double)(*pcVar8)();
            return dVar27;
          }
          pFVar16 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,uVar20);
          pFVar19 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,
                               (uint)pFVar16->FirstHalfEdgeIndex);
          uVar22 = (uint)pFVar19->VertexIndex;
        }
        else if (EVar4 == Medium) {
          pFVar15 = TConvexHalfEdgeStructureData<short>::GetPlane
                              ((TConvexHalfEdgeStructureData<short> *)pTVar6,uVar20);
          if ((pFVar15->NumHalfEdges < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                  ,0x9e,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            dVar27 = (double)(*pcVar8)();
            return dVar27;
          }
          pFVar15 = TConvexHalfEdgeStructureData<short>::GetPlane
                              ((TConvexHalfEdgeStructureData<short> *)pTVar6,uVar20);
          pFVar18 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<short> *)pTVar6,
                               (int)pFVar15->FirstHalfEdgeIndex);
          uVar22 = (uint)pFVar18->VertexIndex;
        }
        else if (EVar4 == Large) {
          pFVar14 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar6,uVar20);
          if ((pFVar14->NumHalfEdges < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                  ,0x9e,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            dVar27 = (double)(*pcVar8)();
            return dVar27;
          }
          pFVar14 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar6,uVar20);
          pFVar17 = TConvexHalfEdgeStructureData<int>::GetHalfEdge
                              (pTVar6,pFVar14->FirstHalfEdgeIndex);
          uVar22 = pFVar17->VertexIndex;
        }
        else {
          uVar22 = 0xffffffff;
        }
        uVar12 = 0;
        if ((int)uVar22 < (this->Vertices).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if (uVar12 == 0) goto LAB_14379c251;
      }
      lVar23 = (longlong)(int)uVar22;
      pEVar1 = &(this->StructureData).IndexType;
      pTVar6 = (this->StructureData).Data.DataL;
      pFVar5 = (this->Vertices).AllocatorInstance.Data;
      dStack_88 = (double)*(float *)(pFVar5 + lVar23 * 0xc);
      dStack_80 = (double)*(float *)(pFVar5 + lVar23 * 0xc + 4);
      dStack_78 = (double)*(float *)(pFVar5 + lVar23 * 0xc + 8);
      if (pTVar6 == (TConvexHalfEdgeStructureData<int> *)0x0) {
        uVar22 = 0xffffffff;
LAB_14379c35c:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          dVar27 = (double)(*pcVar8)();
          return dVar27;
        }
      }
      else {
        EVar4 = *pEVar1;
        if (EVar4 == Small) {
          iVar13 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                             ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,uVar20,
                              iVar25 + -1);
          pFVar19 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,iVar13);
          uVar22 = (uint)pFVar19->VertexIndex;
        }
        else if (EVar4 == Medium) {
          iVar13 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                             ((TConvexHalfEdgeStructureData<short> *)pTVar6,uVar20,iVar25 + -1);
          pFVar18 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<short> *)pTVar6,iVar13);
          uVar22 = (uint)pFVar18->VertexIndex;
        }
        else if (EVar4 == Large) {
          iVar13 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(pTVar6,uVar20,iVar25 + -1);
          pFVar17 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar6,iVar13);
          uVar22 = pFVar17->VertexIndex;
        }
        else {
          uVar22 = 0xffffffff;
        }
        uVar12 = 0;
        if ((int)uVar22 < (this->Vertices).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if (uVar12 == 0) goto LAB_14379c35c;
      }
      lVar23 = (longlong)(int)uVar22;
      pTVar6 = (this->StructureData).Data.DataL;
      pFVar5 = (this->Vertices).AllocatorInstance.Data;
      dStack_a0 = (double)*(float *)(pFVar5 + lVar23 * 0xc);
      dStack_98 = (double)*(float *)(pFVar5 + lVar23 * 0xc + 4);
      dStack_90 = (double)*(float *)(pFVar5 + lVar23 * 0xc + 8);
      if (pTVar6 == (TConvexHalfEdgeStructureData<int> *)0x0) {
        uVar22 = 0xffffffff;
LAB_14379c464:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          dVar27 = (double)(*pcVar8)();
          return dVar27;
        }
      }
      else {
        EVar4 = *pEVar1;
        if (EVar4 == Small) {
          iVar13 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                             ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,uVar20,iVar25);
          pFVar19 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,iVar13);
          uVar22 = (uint)pFVar19->VertexIndex;
        }
        else if (EVar4 == Medium) {
          iVar13 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                             ((TConvexHalfEdgeStructureData<short> *)pTVar6,uVar20,iVar25);
          pFVar18 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<short> *)pTVar6,iVar13);
          uVar22 = (uint)pFVar18->VertexIndex;
        }
        else if (EVar4 == Large) {
          iVar13 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(pTVar6,uVar20,iVar25);
          pFVar17 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar6,iVar13);
          uVar22 = pFVar17->VertexIndex;
        }
        else {
          uVar22 = 0xffffffff;
        }
        uVar12 = 0;
        if ((int)uVar22 < (this->Vertices).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if (uVar12 == 0) goto LAB_14379c464;
      }
      lVar23 = (longlong)(int)uVar22;
      pFVar5 = (this->Vertices).AllocatorInstance.Data;
      dStack_b8 = (double)*(float *)(pFVar5 + lVar23 * 0xc);
      dStack_b0 = (double)*(float *)(pFVar5 + lVar23 * 0xc + 4);
      dStack_a8 = (double)*(float *)(pFVar5 + lVar23 * 0xc + 8);
      FindClosestPointOnTriangle<double,3>
                ((TVector<double,3> *)&dStack_70,(TVector<double,3> *)auStack_e8,
                 (TVector<double,3> *)&dStack_88,(TVector<double,3> *)&dStack_a0,
                 (TVector<double,3> *)&dStack_b8,param_1);
      if ((((double)auStack_e8._0_8_ == *(double *)param_1) &&
          ((double)auStack_e8._8_8_ == *(double *)&param_1->field_0x8)) &&
         (dStack_d8 == *(double *)&param_1->field_0x10)) {
        return dVar27;
      }
      auVar28._0_8_ =
           (dStack_68 - (double)auStack_e8._8_8_) * (dStack_68 - (double)auStack_e8._8_8_);
      auVar28._8_8_ = 0;
      auVar29._8_8_ = 0;
      auVar29._0_8_ =
           (dStack_70 - (double)auStack_e8._0_8_) * (dStack_70 - (double)auStack_e8._0_8_) +
           auVar28._0_8_ + (dStack_60 - dStack_d8) * (dStack_60 - dStack_d8);
      auVar29 = sqrtpd(auVar28,auVar29);
      if (auVar29._0_8_ < (double)CONCAT44(uVar31,uVar26)) {
        uVar26 = auVar29._0_4_;
        uVar31 = auVar29._4_4_;
        dStack_c0 = dStack_60;
        dStack_d0 = dStack_70;
        dStack_c8 = dStack_68;
      }
      iVar13 = iVar25 + -1;
      iVar25 = iVar25 + 1;
    } while (iVar13 < (int)(uVar21 - 2));
  }
  dVar33 = *(double *)&param_1->field_0x8 - dStack_c8;
  dVar34 = *(double *)param_1 - dStack_d0;
  dVar32 = *(double *)&param_1->field_0x10 - dStack_c0;
  auVar30._0_8_ = dVar33 * dVar33;
  auVar30._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar34 * dVar34 + auVar30._0_8_ + dVar32 * dVar32;
  auVar29 = sqrtpd(auVar30,auVar10);
  dVar27 = auVar29._0_8_;
  if (__real_3e45798ee0000000 < dVar27) {
    dVar9 = __real_3ff0000000000000 / dVar27;
    *(double *)param_2 = dVar34 * dVar9;
    *(double *)&param_2->field_0x8 = dVar33 * dVar9;
    *(double *)&param_2->field_0x10 = dVar32 * dVar9;
  }
  return dVar27;
}

// PhiWithNormalInternal @ 14379bdd0

double __thiscall
Chaos::FConvex::PhiWithNormalInternal
          (FConvex *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  EIndexType *pEVar1;
  float fVar2;
  float fVar3;
  EIndexType EVar4;
  FScriptContainerElement *pFVar5;
  TConvexHalfEdgeStructureData<int> *pTVar6;
  bool bVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [16];
  bool bVar11;
  uint uVar12;
  int iVar13;
  FPlaneData *pFVar14;
  FPlaneData *pFVar15;
  FPlaneData *pFVar16;
  FHalfEdgeData *pFVar17;
  FHalfEdgeData *pFVar18;
  FHalfEdgeData *pFVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  undefined4 uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar31;
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 local_e8 [16];
  double local_d8;
  double local_d0;
  double dStack_c8;
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
  double local_68;
  double local_60;
  
  iVar25 = (this->Planes).ArrayNum;
  lVar23 = (longlong)iVar25;
  if (iVar25 == 0) {
    return __real_47efffffe0000000;
  }
  if ((iVar25 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumPlanes > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Convex.h"
                          ,0xf8,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    dVar27 = (double)(*pcVar8)();
    return dVar27;
  }
  uVar26 = (undefined4)__real_ffefffffffffffff;
  uVar31 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  uVar20 = 0;
  uVar21 = 0;
  if (0 < iVar25) {
    lVar24 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar21 < (this->Planes).ArrayNum) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        dVar27 = (double)(*pcVar8)();
        return dVar27;
      }
      pFVar5 = (this->Planes).AllocatorInstance.Data;
      dVar27 = (*(double *)&param_1->field_0x8 - (double)*(float *)(pFVar5 + lVar24 + 4)) *
               (double)*(float *)(pFVar5 + lVar24 + 0x10) +
               (*(double *)param_1 - (double)*(float *)(pFVar5 + lVar24)) *
               (double)*(float *)(pFVar5 + lVar24 + 0xc) +
               (*(double *)&param_1->field_0x10 - (double)*(float *)(pFVar5 + lVar24 + 8)) *
               (double)*(float *)(pFVar5 + lVar24 + 0x14);
      bVar11 = dVar27 == (double)CONCAT44(uVar31,uVar26);
      bVar7 = dVar27 < (double)CONCAT44(uVar31,uVar26);
      if (dVar27 <= (double)CONCAT44(uVar31,uVar26)) {
        dVar27 = (double)CONCAT44(uVar31,uVar26);
      }
      uVar22 = uVar21;
      if (bVar7 || bVar11) {
        uVar22 = uVar20;
      }
      uVar20 = uVar22;
      uVar21 = uVar21 + 1;
      lVar24 = lVar24 + 0x18;
      uVar26 = SUB84(dVar27,0);
      uVar31 = (undefined4)((ulonglong)dVar27 >> 0x20);
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  uVar21 = 0;
  if ((int)uVar20 < (this->Planes).ArrayNum) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    dVar27 = (double)(*pcVar8)();
    return dVar27;
  }
  lVar23 = (longlong)(int)uVar20;
  pFVar5 = (this->Planes).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar5 + lVar23 * 0x18 + 0x10);
  fVar3 = *(float *)(pFVar5 + lVar23 * 0x18 + 0x14);
  *(double *)param_2 = (double)*(float *)(pFVar5 + lVar23 * 0x18 + 0xc);
  *(double *)&param_2->field_0x8 = (double)fVar2;
  *(double *)&param_2->field_0x10 = (double)fVar3;
  dVar27 = (*(double *)&param_1->field_0x8 - (double)*(float *)(pFVar5 + lVar23 * 0x18 + 4)) *
           (double)*(float *)(pFVar5 + lVar23 * 0x18 + 0x10) +
           (*(double *)param_1 - (double)*(float *)(pFVar5 + lVar23 * 0x18)) *
           (double)*(float *)(pFVar5 + lVar23 * 0x18 + 0xc) +
           (*(double *)&param_1->field_0x10 - (double)*(float *)(pFVar5 + lVar23 * 0x18 + 8)) *
           (double)*(float *)(pFVar5 + lVar23 * 0x18 + 0x14);
  if (dVar27 <= 0.0) {
    return dVar27;
  }
  pTVar6 = (this->StructureData).Data.DataL;
  if (pTVar6 != (TConvexHalfEdgeStructureData<int> *)0x0) {
    EVar4 = (this->StructureData).IndexType;
    if (EVar4 == Small) {
      pFVar16 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                          ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,uVar20);
      uVar21 = (uint)pFVar16->NumHalfEdges;
      goto LAB_14379c0bd;
    }
    if (EVar4 == Medium) {
      pFVar15 = TConvexHalfEdgeStructureData<short>::GetPlane
                          ((TConvexHalfEdgeStructureData<short> *)pTVar6,uVar20);
      uVar21 = (uint)pFVar15->NumHalfEdges;
      goto LAB_14379c0bd;
    }
    if (EVar4 == Large) {
      pFVar14 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar6,uVar20);
      uVar21 = pFVar14->NumHalfEdges;
      goto LAB_14379c0bd;
    }
  }
  uVar21 = 0;
LAB_14379c0bd:
  dVar32 = *(double *)&param_1->field_0x8 - dVar27 * *(double *)&param_2->field_0x8;
  uVar26 = (undefined4)__real_7fefffffffffffff;
  uVar31 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_e8._8_4_ = SUB84(dVar32,0);
  local_e8._0_8_ = *(double *)param_1 - dVar27 * *(double *)param_2;
  local_e8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  local_d8 = *(double *)&param_1->field_0x10 - dVar27 * *(double *)&param_2->field_0x10;
  if (0 < (int)(uVar21 - 2)) {
    iVar25 = 2;
    do {
      pTVar6 = (this->StructureData).Data.DataL;
      if (pTVar6 == (TConvexHalfEdgeStructureData<int> *)0x0) {
        uVar22 = 0xffffffff;
LAB_14379c251:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          dVar27 = (double)(*pcVar8)();
          return dVar27;
        }
      }
      else {
        EVar4 = (this->StructureData).IndexType;
        if (EVar4 == Small) {
          pFVar16 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,uVar20);
          if ((pFVar16->NumHalfEdges == '\0') &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                  ,0x9e,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            dVar27 = (double)(*pcVar8)();
            return dVar27;
          }
          pFVar16 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,uVar20);
          pFVar19 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,
                               (uint)pFVar16->FirstHalfEdgeIndex);
          uVar22 = (uint)pFVar19->VertexIndex;
        }
        else if (EVar4 == Medium) {
          pFVar15 = TConvexHalfEdgeStructureData<short>::GetPlane
                              ((TConvexHalfEdgeStructureData<short> *)pTVar6,uVar20);
          if ((pFVar15->NumHalfEdges < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                  ,0x9e,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            dVar27 = (double)(*pcVar8)();
            return dVar27;
          }
          pFVar15 = TConvexHalfEdgeStructureData<short>::GetPlane
                              ((TConvexHalfEdgeStructureData<short> *)pTVar6,uVar20);
          pFVar18 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<short> *)pTVar6,
                               (int)pFVar15->FirstHalfEdgeIndex);
          uVar22 = (uint)pFVar18->VertexIndex;
        }
        else if (EVar4 == Large) {
          pFVar14 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar6,uVar20);
          if ((pFVar14->NumHalfEdges < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                  ,0x9e,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            dVar27 = (double)(*pcVar8)();
            return dVar27;
          }
          pFVar14 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar6,uVar20);
          pFVar17 = TConvexHalfEdgeStructureData<int>::GetHalfEdge
                              (pTVar6,pFVar14->FirstHalfEdgeIndex);
          uVar22 = pFVar17->VertexIndex;
        }
        else {
          uVar22 = 0xffffffff;
        }
        uVar12 = 0;
        if ((int)uVar22 < (this->Vertices).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if (uVar12 == 0) goto LAB_14379c251;
      }
      lVar23 = (longlong)(int)uVar22;
      pEVar1 = &(this->StructureData).IndexType;
      pTVar6 = (this->StructureData).Data.DataL;
      pFVar5 = (this->Vertices).AllocatorInstance.Data;
      local_88 = (double)*(float *)(pFVar5 + lVar23 * 0xc);
      local_80 = (double)*(float *)(pFVar5 + lVar23 * 0xc + 4);
      local_78 = (double)*(float *)(pFVar5 + lVar23 * 0xc + 8);
      if (pTVar6 == (TConvexHalfEdgeStructureData<int> *)0x0) {
        uVar22 = 0xffffffff;
LAB_14379c35c:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          dVar27 = (double)(*pcVar8)();
          return dVar27;
        }
      }
      else {
        EVar4 = *pEVar1;
        if (EVar4 == Small) {
          iVar13 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                             ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,uVar20,
                              iVar25 + -1);
          pFVar19 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,iVar13);
          uVar22 = (uint)pFVar19->VertexIndex;
        }
        else if (EVar4 == Medium) {
          iVar13 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                             ((TConvexHalfEdgeStructureData<short> *)pTVar6,uVar20,iVar25 + -1);
          pFVar18 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<short> *)pTVar6,iVar13);
          uVar22 = (uint)pFVar18->VertexIndex;
        }
        else if (EVar4 == Large) {
          iVar13 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(pTVar6,uVar20,iVar25 + -1);
          pFVar17 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar6,iVar13);
          uVar22 = pFVar17->VertexIndex;
        }
        else {
          uVar22 = 0xffffffff;
        }
        uVar12 = 0;
        if ((int)uVar22 < (this->Vertices).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if (uVar12 == 0) goto LAB_14379c35c;
      }
      lVar23 = (longlong)(int)uVar22;
      pTVar6 = (this->StructureData).Data.DataL;
      pFVar5 = (this->Vertices).AllocatorInstance.Data;
      local_a0 = (double)*(float *)(pFVar5 + lVar23 * 0xc);
      local_98 = (double)*(float *)(pFVar5 + lVar23 * 0xc + 4);
      local_90 = (double)*(float *)(pFVar5 + lVar23 * 0xc + 8);
      if (pTVar6 == (TConvexHalfEdgeStructureData<int> *)0x0) {
        uVar22 = 0xffffffff;
LAB_14379c464:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          dVar27 = (double)(*pcVar8)();
          return dVar27;
        }
      }
      else {
        EVar4 = *pEVar1;
        if (EVar4 == Small) {
          iVar13 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                             ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,uVar20,iVar25);
          pFVar19 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar6,iVar13);
          uVar22 = (uint)pFVar19->VertexIndex;
        }
        else if (EVar4 == Medium) {
          iVar13 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                             ((TConvexHalfEdgeStructureData<short> *)pTVar6,uVar20,iVar25);
          pFVar18 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<short> *)pTVar6,iVar13);
          uVar22 = (uint)pFVar18->VertexIndex;
        }
        else if (EVar4 == Large) {
          iVar13 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(pTVar6,uVar20,iVar25);
          pFVar17 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar6,iVar13);
          uVar22 = pFVar17->VertexIndex;
        }
        else {
          uVar22 = 0xffffffff;
        }
        uVar12 = 0;
        if ((int)uVar22 < (this->Vertices).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if (uVar12 == 0) goto LAB_14379c464;
      }
      lVar23 = (longlong)(int)uVar22;
      pFVar5 = (this->Vertices).AllocatorInstance.Data;
      local_b8 = (double)*(float *)(pFVar5 + lVar23 * 0xc);
      local_b0 = (double)*(float *)(pFVar5 + lVar23 * 0xc + 4);
      local_a8 = (double)*(float *)(pFVar5 + lVar23 * 0xc + 8);
      FindClosestPointOnTriangle<double,3>
                ((TVector<double,3> *)&local_70,(TVector<double,3> *)local_e8,
                 (TVector<double,3> *)&local_88,(TVector<double,3> *)&local_a0,
                 (TVector<double,3> *)&local_b8,param_1);
      if ((((double)local_e8._0_8_ == *(double *)param_1) &&
          ((double)local_e8._8_8_ == *(double *)&param_1->field_0x8)) &&
         (local_d8 == *(double *)&param_1->field_0x10)) {
        return dVar27;
      }
      auVar28._0_8_ = (local_68 - (double)local_e8._8_8_) * (local_68 - (double)local_e8._8_8_);
      auVar28._8_8_ = 0;
      auVar29._8_8_ = 0;
      auVar29._0_8_ =
           (local_70 - (double)local_e8._0_8_) * (local_70 - (double)local_e8._0_8_) + auVar28._0_8_
           + (local_60 - local_d8) * (local_60 - local_d8);
      auVar29 = sqrtpd(auVar28,auVar29);
      if (auVar29._0_8_ < (double)CONCAT44(uVar31,uVar26)) {
        uVar26 = auVar29._0_4_;
        uVar31 = auVar29._4_4_;
        local_c0 = local_60;
        local_d0 = local_70;
        dStack_c8 = local_68;
      }
      iVar13 = iVar25 + -1;
      iVar25 = iVar25 + 1;
    } while (iVar13 < (int)(uVar21 - 2));
  }
  dVar33 = *(double *)&param_1->field_0x8 - dStack_c8;
  dVar34 = *(double *)param_1 - local_d0;
  dVar32 = *(double *)&param_1->field_0x10 - local_c0;
  auVar30._0_8_ = dVar33 * dVar33;
  auVar30._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar34 * dVar34 + auVar30._0_8_ + dVar32 * dVar32;
  auVar29 = sqrtpd(auVar30,auVar10);
  dVar27 = auVar29._0_8_;
  if (__real_3e45798ee0000000 < dVar27) {
    dVar9 = __real_3ff0000000000000 / dVar27;
    *(double *)param_2 = dVar34 * dVar9;
    *(double *)&param_2->field_0x8 = dVar33 * dVar9;
    *(double *)&param_2->field_0x10 = dVar32 * dVar9;
  }
  return dVar27;
}

// PhiWithNormalScaled @ 14379cdf0

double __thiscall
Chaos::FConvex::PhiWithNormalScaled
          (FConvex *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3)

{
  EIndexType *pEVar1;
  EIndexType EVar2;
  FScriptContainerElement *pFVar3;
  TConvexHalfEdgeStructureData<int> *pTVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FPlaneData *pFVar14;
  FPlaneData *pFVar15;
  FPlaneData *pFVar16;
  FHalfEdgeData *pFVar17;
  FHalfEdgeData *pFVar18;
  FHalfEdgeData *pFVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  undefined4 uVar25;
  double dVar26;
  undefined4 uVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar35;
  double dVar36;
  double dVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  
  iVar23 = (this->Planes).ArrayNum;
  if (iVar23 == 0) {
    return __real_47efffffe0000000;
  }
  if ((iVar23 < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumPlanes > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Convex.h"
                          ,0x138,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    dVar26 = (double)(*pcVar7)();
    return dVar26;
  }
  fVar9 = __real_3f800000;
  dVar26 = __real_3ff0000000000000;
  uVar31 = (undefined4)__real_ffefffffffffffff;
  uVar34 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  dVar37 = 0.0;
  dVar39 = 0.0;
  dStack_120 = __real_3ff0000000000000;
  uVar20 = 0;
  uVar22 = 0;
  if (iVar23 < 1) {
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)&param_3->field_0x8 = 0;
    *(double *)&param_3->field_0x10 = dVar26;
  }
  else {
    lVar21 = 0;
    lVar24 = 0;
    uVar25 = SUB84(__real_3ff0000000000000,0);
    uVar29 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    do {
      uVar11 = 0;
      if ((int)uVar22 < (this->Planes).ArrayNum) {
        uVar11 = ~uVar22 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        dVar26 = (double)(*pcVar7)();
        return dVar26;
      }
      pFVar3 = (this->Planes).AllocatorInstance.Data;
      uVar11 = 0;
      if ((int)uVar22 < (this->Planes).ArrayNum) {
        uVar11 = ~uVar22 >> 0x1f;
      }
      fVar40 = *(float *)(pFVar3 + lVar24 + 0x14) / (float)*(double *)&param_2->field_0x10;
      fVar38 = *(float *)(pFVar3 + lVar24 + 0x10) / (float)*(double *)&param_2->field_0x8;
      fVar35 = *(float *)(pFVar3 + lVar24 + 0xc) / (float)*(double *)param_2;
      fVar30 = fVar9 / SQRT(fVar35 * fVar35 + fVar38 * fVar38 + fVar40 * fVar40);
      dVar36 = (double)(fVar30 * fVar40);
      dStack_120 = dVar36;
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        dVar26 = (double)(*pcVar7)();
        return dVar26;
      }
      pFVar3 = (this->Planes).AllocatorInstance.Data;
      dVar36 = (*(double *)&param_1->field_0x8 -
               (double)((float)*(double *)&param_2->field_0x8 * *(float *)(pFVar3 + lVar24 + 4))) *
               (double)(fVar30 * fVar38) +
               (*(double *)param_1 -
               (double)((float)*(double *)param_2 * *(float *)(pFVar3 + lVar24))) *
               (double)(fVar30 * fVar35) +
               (*(double *)&param_1->field_0x10 -
               (double)((float)*(double *)&param_2->field_0x10 * *(float *)(pFVar3 + lVar24 + 8))) *
               dVar36;
      bVar10 = NAN(dVar36);
      bVar5 = dVar36 != (double)CONCAT44(uVar34,uVar31);
      bVar6 = (double)CONCAT44(uVar34,uVar31) <= dVar36;
      if (bVar6 && bVar5) {
        uVar25 = SUB84(dStack_120,0);
        uVar29 = (undefined4)((ulonglong)dStack_120 >> 0x20);
        dVar37 = (double)(fVar30 * fVar35);
        dVar39 = (double)(fVar30 * fVar38);
      }
      if (dVar36 <= (double)CONCAT44(uVar34,uVar31)) {
        dVar36 = (double)CONCAT44(uVar34,uVar31);
      }
      uVar11 = uVar22;
      if ((bVar10 || NAN((double)CONCAT44(uVar34,uVar31))) || (!bVar6 || !bVar5)) {
        uVar11 = uVar20;
      }
      uVar20 = uVar11;
      uVar22 = uVar22 + 1;
      lVar21 = lVar21 + 1;
      lVar24 = lVar24 + 0x18;
      uVar11 = 0;
      uVar31 = SUB84(dVar36,0);
      uVar34 = (undefined4)((ulonglong)dVar36 >> 0x20);
    } while (lVar21 < iVar23);
    auVar28._8_4_ = SUB84(dVar39,0);
    auVar28._0_8_ = dVar37;
    auVar28._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    *(undefined1 (*) [16])param_3 = auVar28;
    *(ulonglong *)&param_3->field_0x10 = CONCAT44(uVar29,uVar25);
    if (0.0 <= dVar36) {
      pTVar4 = (this->StructureData).Data.DataL;
      if (pTVar4 != (TConvexHalfEdgeStructureData<int> *)0x0) {
        EVar2 = (this->StructureData).IndexType;
        if (EVar2 == Small) {
          pFVar16 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,uVar20);
          uVar11 = (uint)pFVar16->NumHalfEdges;
        }
        else if (EVar2 == Medium) {
          pFVar15 = TConvexHalfEdgeStructureData<short>::GetPlane
                              ((TConvexHalfEdgeStructureData<short> *)pTVar4,uVar20);
          uVar11 = (uint)pFVar15->NumHalfEdges;
        }
        else if (EVar2 == Large) {
          pFVar14 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar4,uVar20);
          uVar11 = pFVar14->NumHalfEdges;
        }
      }
      uVar25 = (undefined4)__real_7fefffffffffffff;
      uVar29 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
      dStack_160 = *(double *)param_1 - *(double *)param_3 * dVar36;
      dStack_158 = *(double *)&param_1->field_0x8 - *(double *)&param_3->field_0x8 * dVar36;
      dStack_150 = *(double *)&param_1->field_0x10 - dVar36 * *(double *)&param_3->field_0x10;
      if (0 < (int)(uVar11 - 2)) {
        iVar23 = 2;
        do {
          pTVar4 = (this->StructureData).Data.DataL;
          if (pTVar4 == (TConvexHalfEdgeStructureData<int> *)0x0) {
            uVar22 = 0xffffffff;
LAB_14379d3f1:
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              dVar26 = (double)(*pcVar7)();
              return dVar26;
            }
          }
          else {
            EVar2 = (this->StructureData).IndexType;
            if (EVar2 == Small) {
              pFVar16 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                                  ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,uVar20);
              if ((pFVar16->NumHalfEdges == '\0') &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                      ,0x9e,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                dVar26 = (double)(*pcVar7)();
                return dVar26;
              }
              pFVar16 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                                  ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,uVar20);
              pFVar19 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                                  ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,
                                   (uint)pFVar16->FirstHalfEdgeIndex);
              uVar22 = (uint)pFVar19->VertexIndex;
            }
            else if (EVar2 == Medium) {
              pFVar15 = TConvexHalfEdgeStructureData<short>::GetPlane
                                  ((TConvexHalfEdgeStructureData<short> *)pTVar4,uVar20);
              if ((pFVar15->NumHalfEdges < 1) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                      ,0x9e,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                dVar26 = (double)(*pcVar7)();
                return dVar26;
              }
              pFVar15 = TConvexHalfEdgeStructureData<short>::GetPlane
                                  ((TConvexHalfEdgeStructureData<short> *)pTVar4,uVar20);
              pFVar18 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                                  ((TConvexHalfEdgeStructureData<short> *)pTVar4,
                                   (int)pFVar15->FirstHalfEdgeIndex);
              uVar22 = (uint)pFVar18->VertexIndex;
            }
            else if (EVar2 == Large) {
              pFVar14 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar4,uVar20);
              if ((pFVar14->NumHalfEdges < 1) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                      ,0x9e,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                dVar26 = (double)(*pcVar7)();
                return dVar26;
              }
              pFVar14 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar4,uVar20);
              pFVar17 = TConvexHalfEdgeStructureData<int>::GetHalfEdge
                                  (pTVar4,pFVar14->FirstHalfEdgeIndex);
              uVar22 = pFVar17->VertexIndex;
            }
            else {
              uVar22 = 0xffffffff;
            }
            uVar12 = 0;
            if ((int)uVar22 < (this->Vertices).ArrayNum) {
              uVar12 = ~uVar22 >> 0x1f;
            }
            if (uVar12 == 0) goto LAB_14379d3f1;
          }
          lVar21 = (longlong)(int)uVar22;
          pEVar1 = &(this->StructureData).IndexType;
          pTVar4 = (this->StructureData).Data.DataL;
          pFVar3 = (this->Vertices).AllocatorInstance.Data;
          dStack_e8 = (double)*(float *)(pFVar3 + lVar21 * 0xc) * *(double *)param_2;
          dStack_e0 = (double)*(float *)(pFVar3 + lVar21 * 0xc + 4) * *(double *)&param_2->field_0x8
          ;
          dStack_d8 = (double)*(float *)(pFVar3 + lVar21 * 0xc + 8) *
                      *(double *)&param_2->field_0x10;
          if (pTVar4 == (TConvexHalfEdgeStructureData<int> *)0x0) {
            uVar22 = 0xffffffff;
LAB_14379d50e:
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              dVar26 = (double)(*pcVar7)();
              return dVar26;
            }
          }
          else {
            EVar2 = *pEVar1;
            if (EVar2 == Small) {
              iVar13 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                                 ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,uVar20,
                                  iVar23 + -1);
              pFVar19 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                                  ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,iVar13);
              uVar22 = (uint)pFVar19->VertexIndex;
            }
            else if (EVar2 == Medium) {
              iVar13 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                                 ((TConvexHalfEdgeStructureData<short> *)pTVar4,uVar20,iVar23 + -1);
              pFVar18 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                                  ((TConvexHalfEdgeStructureData<short> *)pTVar4,iVar13);
              uVar22 = (uint)pFVar18->VertexIndex;
            }
            else if (EVar2 == Large) {
              iVar13 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge
                                 (pTVar4,uVar20,iVar23 + -1);
              pFVar17 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar4,iVar13);
              uVar22 = pFVar17->VertexIndex;
            }
            else {
              uVar22 = 0xffffffff;
            }
            uVar12 = 0;
            if ((int)uVar22 < (this->Vertices).ArrayNum) {
              uVar12 = ~uVar22 >> 0x1f;
            }
            if (uVar12 == 0) goto LAB_14379d50e;
          }
          lVar21 = (longlong)(int)uVar22;
          pTVar4 = (this->StructureData).Data.DataL;
          pFVar3 = (this->Vertices).AllocatorInstance.Data;
          dStack_100 = (double)*(float *)(pFVar3 + lVar21 * 0xc) * *(double *)param_2;
          dStack_f8 = (double)*(float *)(pFVar3 + lVar21 * 0xc + 4) * *(double *)&param_2->field_0x8
          ;
          dStack_f0 = (double)*(float *)(pFVar3 + lVar21 * 0xc + 8) *
                      *(double *)&param_2->field_0x10;
          if (pTVar4 == (TConvexHalfEdgeStructureData<int> *)0x0) {
            uVar22 = 0xffffffff;
LAB_14379d62f:
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              dVar26 = (double)(*pcVar7)();
              return dVar26;
            }
          }
          else {
            EVar2 = *pEVar1;
            if (EVar2 == Small) {
              iVar13 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                                 ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,uVar20,
                                  iVar23);
              pFVar19 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                                  ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,iVar13);
              uVar22 = (uint)pFVar19->VertexIndex;
            }
            else if (EVar2 == Medium) {
              iVar13 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                                 ((TConvexHalfEdgeStructureData<short> *)pTVar4,uVar20,iVar23);
              pFVar18 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                                  ((TConvexHalfEdgeStructureData<short> *)pTVar4,iVar13);
              uVar22 = (uint)pFVar18->VertexIndex;
            }
            else if (EVar2 == Large) {
              iVar13 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(pTVar4,uVar20,iVar23);
              pFVar17 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar4,iVar13);
              uVar22 = pFVar17->VertexIndex;
            }
            else {
              uVar22 = 0xffffffff;
            }
            uVar12 = 0;
            if ((int)uVar22 < (this->Vertices).ArrayNum) {
              uVar12 = ~uVar22 >> 0x1f;
            }
            if (uVar12 == 0) goto LAB_14379d62f;
          }
          lVar21 = (longlong)(int)uVar22;
          pFVar3 = (this->Vertices).AllocatorInstance.Data;
          dStack_118 = (double)*(float *)(pFVar3 + lVar21 * 0xc) * *(double *)param_2;
          dStack_110 = (double)*(float *)(pFVar3 + lVar21 * 0xc + 4) *
                       *(double *)&param_2->field_0x8;
          dStack_108 = (double)*(float *)(pFVar3 + lVar21 * 0xc + 8) *
                       *(double *)&param_2->field_0x10;
          FindClosestPointOnTriangle<double,3>
                    ((TVector<double,3> *)&dStack_d0,(TVector<double,3> *)&dStack_160,
                     (TVector<double,3> *)&dStack_e8,(TVector<double,3> *)&dStack_100,
                     (TVector<double,3> *)&dStack_118,param_1);
          if (((dStack_160 == *(double *)param_1) && (dStack_158 == *(double *)&param_1->field_0x8))
             && (dStack_150 == *(double *)&param_1->field_0x10)) goto LAB_14379d806;
          auVar27._0_8_ = (dStack_c8 - dStack_158) * (dStack_c8 - dStack_158);
          auVar27._8_8_ = 0;
          auVar32._0_8_ =
               (dStack_d0 - dStack_160) * (dStack_d0 - dStack_160) + auVar27._0_8_ +
               (dStack_c0 - dStack_150) * (dStack_c0 - dStack_150);
          auVar32._8_8_ = 0;
          auVar28 = sqrtpd(auVar27,auVar32);
          if (auVar28._0_8_ < (double)CONCAT44(uVar29,uVar25)) {
            uVar25 = auVar28._0_4_;
            uVar29 = auVar28._4_4_;
            dStack_138 = dStack_c0;
            dStack_148 = dStack_d0;
            dStack_140 = dStack_c8;
          }
          iVar13 = iVar23 + -1;
          iVar23 = iVar23 + 1;
        } while (iVar13 < (int)(uVar11 - 2));
      }
      dVar39 = *(double *)&param_1->field_0x8 - dStack_140;
      dVar36 = *(double *)param_1 - dStack_148;
      dVar37 = *(double *)&param_1->field_0x10 - dStack_138;
      auVar33._0_8_ = dVar37 * dVar37;
      auVar33._8_8_ = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar36 * dVar36 + dVar39 * dVar39 + auVar33._0_8_;
      auVar28 = sqrtpd(auVar33,auVar8);
      if (__real_3e45798ee0000000 < auVar28._0_8_) {
        dVar26 = dVar26 / auVar28._0_8_;
        uVar31 = auVar28._0_4_;
        uVar34 = auVar28._4_4_;
        *(double *)param_3 = dVar26 * dVar36;
        *(double *)&param_3->field_0x8 = dVar39 * dVar26;
        *(double *)&param_3->field_0x10 = dVar37 * dVar26;
      }
    }
  }
LAB_14379d806:
  return (double)CONCAT44(uVar34,uVar31);
}

// PhiWithNormalScaledInternal @ 14379ceb0

double __thiscall
Chaos::FConvex::PhiWithNormalScaledInternal
          (FConvex *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3)

{
  EIndexType *pEVar1;
  EIndexType EVar2;
  FScriptContainerElement *pFVar3;
  TConvexHalfEdgeStructureData<int> *pTVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FPlaneData *pFVar14;
  FPlaneData *pFVar15;
  FPlaneData *pFVar16;
  FHalfEdgeData *pFVar17;
  FHalfEdgeData *pFVar18;
  FHalfEdgeData *pFVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  undefined4 uVar25;
  double dVar26;
  undefined4 uVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar35;
  double dVar36;
  double dVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
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
  
  iVar23 = (this->Planes).ArrayNum;
  if (iVar23 == 0) {
    return __real_47efffffe0000000;
  }
  if ((iVar23 < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumPlanes > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Convex.h"
                          ,0x138,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    dVar26 = (double)(*pcVar7)();
    return dVar26;
  }
  fVar9 = __real_3f800000;
  dVar26 = __real_3ff0000000000000;
  uVar31 = (undefined4)__real_ffefffffffffffff;
  uVar34 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  dVar37 = 0.0;
  dVar39 = 0.0;
  local_120 = __real_3ff0000000000000;
  uVar20 = 0;
  uVar22 = 0;
  if (iVar23 < 1) {
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)&param_3->field_0x8 = 0;
    *(double *)&param_3->field_0x10 = dVar26;
  }
  else {
    lVar21 = 0;
    lVar24 = 0;
    uVar25 = SUB84(__real_3ff0000000000000,0);
    uVar29 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    do {
      uVar11 = 0;
      if ((int)uVar22 < (this->Planes).ArrayNum) {
        uVar11 = ~uVar22 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        dVar26 = (double)(*pcVar7)();
        return dVar26;
      }
      pFVar3 = (this->Planes).AllocatorInstance.Data;
      uVar11 = 0;
      if ((int)uVar22 < (this->Planes).ArrayNum) {
        uVar11 = ~uVar22 >> 0x1f;
      }
      fVar40 = *(float *)(pFVar3 + lVar24 + 0x14) / (float)*(double *)&param_2->field_0x10;
      fVar38 = *(float *)(pFVar3 + lVar24 + 0x10) / (float)*(double *)&param_2->field_0x8;
      fVar35 = *(float *)(pFVar3 + lVar24 + 0xc) / (float)*(double *)param_2;
      fVar30 = fVar9 / SQRT(fVar35 * fVar35 + fVar38 * fVar38 + fVar40 * fVar40);
      dVar36 = (double)(fVar30 * fVar40);
      local_120 = dVar36;
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        dVar26 = (double)(*pcVar7)();
        return dVar26;
      }
      pFVar3 = (this->Planes).AllocatorInstance.Data;
      dVar36 = (*(double *)&param_1->field_0x8 -
               (double)((float)*(double *)&param_2->field_0x8 * *(float *)(pFVar3 + lVar24 + 4))) *
               (double)(fVar30 * fVar38) +
               (*(double *)param_1 -
               (double)((float)*(double *)param_2 * *(float *)(pFVar3 + lVar24))) *
               (double)(fVar30 * fVar35) +
               (*(double *)&param_1->field_0x10 -
               (double)((float)*(double *)&param_2->field_0x10 * *(float *)(pFVar3 + lVar24 + 8))) *
               dVar36;
      bVar10 = NAN(dVar36);
      bVar5 = dVar36 != (double)CONCAT44(uVar34,uVar31);
      bVar6 = (double)CONCAT44(uVar34,uVar31) <= dVar36;
      if (bVar6 && bVar5) {
        uVar25 = SUB84(local_120,0);
        uVar29 = (undefined4)((ulonglong)local_120 >> 0x20);
        dVar37 = (double)(fVar30 * fVar35);
        dVar39 = (double)(fVar30 * fVar38);
      }
      if (dVar36 <= (double)CONCAT44(uVar34,uVar31)) {
        dVar36 = (double)CONCAT44(uVar34,uVar31);
      }
      uVar11 = uVar22;
      if ((bVar10 || NAN((double)CONCAT44(uVar34,uVar31))) || (!bVar6 || !bVar5)) {
        uVar11 = uVar20;
      }
      uVar20 = uVar11;
      uVar22 = uVar22 + 1;
      lVar21 = lVar21 + 1;
      lVar24 = lVar24 + 0x18;
      uVar11 = 0;
      uVar31 = SUB84(dVar36,0);
      uVar34 = (undefined4)((ulonglong)dVar36 >> 0x20);
    } while (lVar21 < iVar23);
    auVar28._8_4_ = SUB84(dVar39,0);
    auVar28._0_8_ = dVar37;
    auVar28._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    *(undefined1 (*) [16])param_3 = auVar28;
    *(ulonglong *)&param_3->field_0x10 = CONCAT44(uVar29,uVar25);
    if (0.0 <= dVar36) {
      pTVar4 = (this->StructureData).Data.DataL;
      if (pTVar4 != (TConvexHalfEdgeStructureData<int> *)0x0) {
        EVar2 = (this->StructureData).IndexType;
        if (EVar2 == Small) {
          pFVar16 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,uVar20);
          uVar11 = (uint)pFVar16->NumHalfEdges;
        }
        else if (EVar2 == Medium) {
          pFVar15 = TConvexHalfEdgeStructureData<short>::GetPlane
                              ((TConvexHalfEdgeStructureData<short> *)pTVar4,uVar20);
          uVar11 = (uint)pFVar15->NumHalfEdges;
        }
        else if (EVar2 == Large) {
          pFVar14 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar4,uVar20);
          uVar11 = pFVar14->NumHalfEdges;
        }
      }
      uVar25 = (undefined4)__real_7fefffffffffffff;
      uVar29 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
      local_160 = *(double *)param_1 - *(double *)param_3 * dVar36;
      dStack_158 = *(double *)&param_1->field_0x8 - *(double *)&param_3->field_0x8 * dVar36;
      local_150 = *(double *)&param_1->field_0x10 - dVar36 * *(double *)&param_3->field_0x10;
      if (0 < (int)(uVar11 - 2)) {
        iVar23 = 2;
        do {
          pTVar4 = (this->StructureData).Data.DataL;
          if (pTVar4 == (TConvexHalfEdgeStructureData<int> *)0x0) {
            uVar22 = 0xffffffff;
LAB_14379d3f1:
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              dVar26 = (double)(*pcVar7)();
              return dVar26;
            }
          }
          else {
            EVar2 = (this->StructureData).IndexType;
            if (EVar2 == Small) {
              pFVar16 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                                  ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,uVar20);
              if ((pFVar16->NumHalfEdges == '\0') &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                      ,0x9e,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                dVar26 = (double)(*pcVar7)();
                return dVar26;
              }
              pFVar16 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                                  ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,uVar20);
              pFVar19 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                                  ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,
                                   (uint)pFVar16->FirstHalfEdgeIndex);
              uVar22 = (uint)pFVar19->VertexIndex;
            }
            else if (EVar2 == Medium) {
              pFVar15 = TConvexHalfEdgeStructureData<short>::GetPlane
                                  ((TConvexHalfEdgeStructureData<short> *)pTVar4,uVar20);
              if ((pFVar15->NumHalfEdges < 1) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                      ,0x9e,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                dVar26 = (double)(*pcVar7)();
                return dVar26;
              }
              pFVar15 = TConvexHalfEdgeStructureData<short>::GetPlane
                                  ((TConvexHalfEdgeStructureData<short> *)pTVar4,uVar20);
              pFVar18 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                                  ((TConvexHalfEdgeStructureData<short> *)pTVar4,
                                   (int)pFVar15->FirstHalfEdgeIndex);
              uVar22 = (uint)pFVar18->VertexIndex;
            }
            else if (EVar2 == Large) {
              pFVar14 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar4,uVar20);
              if ((pFVar14->NumHalfEdges < 1) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                      ,0x9e,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                dVar26 = (double)(*pcVar7)();
                return dVar26;
              }
              pFVar14 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar4,uVar20);
              pFVar17 = TConvexHalfEdgeStructureData<int>::GetHalfEdge
                                  (pTVar4,pFVar14->FirstHalfEdgeIndex);
              uVar22 = pFVar17->VertexIndex;
            }
            else {
              uVar22 = 0xffffffff;
            }
            uVar12 = 0;
            if ((int)uVar22 < (this->Vertices).ArrayNum) {
              uVar12 = ~uVar22 >> 0x1f;
            }
            if (uVar12 == 0) goto LAB_14379d3f1;
          }
          lVar21 = (longlong)(int)uVar22;
          pEVar1 = &(this->StructureData).IndexType;
          pTVar4 = (this->StructureData).Data.DataL;
          pFVar3 = (this->Vertices).AllocatorInstance.Data;
          local_e8 = (double)*(float *)(pFVar3 + lVar21 * 0xc) * *(double *)param_2;
          local_e0 = (double)*(float *)(pFVar3 + lVar21 * 0xc + 4) * *(double *)&param_2->field_0x8;
          local_d8 = (double)*(float *)(pFVar3 + lVar21 * 0xc + 8) * *(double *)&param_2->field_0x10
          ;
          if (pTVar4 == (TConvexHalfEdgeStructureData<int> *)0x0) {
            uVar22 = 0xffffffff;
LAB_14379d50e:
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              dVar26 = (double)(*pcVar7)();
              return dVar26;
            }
          }
          else {
            EVar2 = *pEVar1;
            if (EVar2 == Small) {
              iVar13 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                                 ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,uVar20,
                                  iVar23 + -1);
              pFVar19 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                                  ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,iVar13);
              uVar22 = (uint)pFVar19->VertexIndex;
            }
            else if (EVar2 == Medium) {
              iVar13 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                                 ((TConvexHalfEdgeStructureData<short> *)pTVar4,uVar20,iVar23 + -1);
              pFVar18 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                                  ((TConvexHalfEdgeStructureData<short> *)pTVar4,iVar13);
              uVar22 = (uint)pFVar18->VertexIndex;
            }
            else if (EVar2 == Large) {
              iVar13 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge
                                 (pTVar4,uVar20,iVar23 + -1);
              pFVar17 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar4,iVar13);
              uVar22 = pFVar17->VertexIndex;
            }
            else {
              uVar22 = 0xffffffff;
            }
            uVar12 = 0;
            if ((int)uVar22 < (this->Vertices).ArrayNum) {
              uVar12 = ~uVar22 >> 0x1f;
            }
            if (uVar12 == 0) goto LAB_14379d50e;
          }
          lVar21 = (longlong)(int)uVar22;
          pTVar4 = (this->StructureData).Data.DataL;
          pFVar3 = (this->Vertices).AllocatorInstance.Data;
          local_100 = (double)*(float *)(pFVar3 + lVar21 * 0xc) * *(double *)param_2;
          local_f8 = (double)*(float *)(pFVar3 + lVar21 * 0xc + 4) * *(double *)&param_2->field_0x8;
          local_f0 = (double)*(float *)(pFVar3 + lVar21 * 0xc + 8) * *(double *)&param_2->field_0x10
          ;
          if (pTVar4 == (TConvexHalfEdgeStructureData<int> *)0x0) {
            uVar22 = 0xffffffff;
LAB_14379d62f:
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              dVar26 = (double)(*pcVar7)();
              return dVar26;
            }
          }
          else {
            EVar2 = *pEVar1;
            if (EVar2 == Small) {
              iVar13 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                                 ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,uVar20,
                                  iVar23);
              pFVar19 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                                  ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar4,iVar13);
              uVar22 = (uint)pFVar19->VertexIndex;
            }
            else if (EVar2 == Medium) {
              iVar13 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                                 ((TConvexHalfEdgeStructureData<short> *)pTVar4,uVar20,iVar23);
              pFVar18 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                                  ((TConvexHalfEdgeStructureData<short> *)pTVar4,iVar13);
              uVar22 = (uint)pFVar18->VertexIndex;
            }
            else if (EVar2 == Large) {
              iVar13 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(pTVar4,uVar20,iVar23);
              pFVar17 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar4,iVar13);
              uVar22 = pFVar17->VertexIndex;
            }
            else {
              uVar22 = 0xffffffff;
            }
            uVar12 = 0;
            if ((int)uVar22 < (this->Vertices).ArrayNum) {
              uVar12 = ~uVar22 >> 0x1f;
            }
            if (uVar12 == 0) goto LAB_14379d62f;
          }
          lVar21 = (longlong)(int)uVar22;
          pFVar3 = (this->Vertices).AllocatorInstance.Data;
          local_118 = (double)*(float *)(pFVar3 + lVar21 * 0xc) * *(double *)param_2;
          local_110 = (double)*(float *)(pFVar3 + lVar21 * 0xc + 4) * *(double *)&param_2->field_0x8
          ;
          local_108 = (double)*(float *)(pFVar3 + lVar21 * 0xc + 8) *
                      *(double *)&param_2->field_0x10;
          FindClosestPointOnTriangle<double,3>
                    ((TVector<double,3> *)&local_d0,(TVector<double,3> *)&local_160,
                     (TVector<double,3> *)&local_e8,(TVector<double,3> *)&local_100,
                     (TVector<double,3> *)&local_118,param_1);
          if (((local_160 == *(double *)param_1) && (dStack_158 == *(double *)&param_1->field_0x8))
             && (local_150 == *(double *)&param_1->field_0x10)) goto LAB_14379d806;
          auVar27._0_8_ = (local_c8 - dStack_158) * (local_c8 - dStack_158);
          auVar27._8_8_ = 0;
          auVar32._0_8_ =
               (local_d0 - local_160) * (local_d0 - local_160) + auVar27._0_8_ +
               (local_c0 - local_150) * (local_c0 - local_150);
          auVar32._8_8_ = 0;
          auVar28 = sqrtpd(auVar27,auVar32);
          if (auVar28._0_8_ < (double)CONCAT44(uVar29,uVar25)) {
            uVar25 = auVar28._0_4_;
            uVar29 = auVar28._4_4_;
            local_138 = local_c0;
            local_148 = local_d0;
            dStack_140 = local_c8;
          }
          iVar13 = iVar23 + -1;
          iVar23 = iVar23 + 1;
        } while (iVar13 < (int)(uVar11 - 2));
      }
      dVar39 = *(double *)&param_1->field_0x8 - dStack_140;
      dVar36 = *(double *)param_1 - local_148;
      dVar37 = *(double *)&param_1->field_0x10 - local_138;
      auVar33._0_8_ = dVar37 * dVar37;
      auVar33._8_8_ = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar36 * dVar36 + dVar39 * dVar39 + auVar33._0_8_;
      auVar28 = sqrtpd(auVar33,auVar8);
      if (__real_3e45798ee0000000 < auVar28._0_8_) {
        dVar26 = dVar26 / auVar28._0_8_;
        uVar31 = auVar28._0_4_;
        uVar34 = auVar28._4_4_;
        *(double *)param_3 = dVar26 * dVar36;
        *(double *)&param_3->field_0x8 = dVar39 * dVar26;
        *(double *)&param_3->field_0x10 = dVar37 * dVar26;
      }
    }
  }
LAB_14379d806:
  return (double)CONCAT44(uVar34,uVar31);
}

// Serialize @ 1437ab4e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::FConvex::Serialize(FConvex *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FFastPathLoadBuffer *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar17;
  ulonglong uVar18;
  longlong lVar19;
  float local_res8 [2];
  FArchiveState *local_res10;
  uint local_res18 [2];
  undefined4 local_res20;
  TArray<Chaos::TPlane<float,3>,TSizedDefaultAllocator<32>_> local_e8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_d8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_c8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_b8;
  undefined1 local_a8 [32];
  TArrayCollectionArrayBase local_88;
  void *local_80;
  undefined8 local_78;
  ERemoveParticleBehavior local_70;
  int local_6c;
  
  local_res10 = (FArchiveState *)param_1;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPhysicsObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  FImplicitObject::SerializeImp((FImplicitObject *)this,param_1);
  iVar10 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  uVar14 = 0;
  if (iVar10 < 0x1f) {
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<Chaos::TPlane<float,3>,TSizedDefaultAllocator<32>_>
              (param_1,&local_e8);
    TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Planes,local_e8.ArrayNum,Default);
    uVar16 = uVar14;
    uVar18 = uVar14;
    if (0 < (this->Planes).ArrayNum) {
      do {
        uVar13 = (uint)uVar14;
        uVar15 = 0;
        if ((int)uVar13 < local_e8.ArrayNum) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar6 = *(undefined8 *)(local_e8.AllocatorInstance.Data + uVar16 + 0x20);
        uVar7 = *(undefined8 *)(local_e8.AllocatorInstance.Data + uVar16 + 0x20 + 8);
        uVar2 = *(undefined8 *)(local_e8.AllocatorInstance.Data + uVar16 + 0x30);
        uVar15 = 0;
        if ((int)uVar13 < (this->Planes).ArrayNum) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->Planes).AllocatorInstance.Data;
        uVar14 = (ulonglong)(uVar13 + 1);
        pFVar1 = pFVar3 + uVar18;
        *(undefined8 *)pFVar1 = uVar6;
        *(undefined8 *)(pFVar1 + 8) = uVar7;
        *(undefined8 *)(pFVar3 + uVar18 + 0x10) = uVar2;
        uVar16 = uVar16 + 0x38;
        uVar18 = uVar18 + 0x18;
      } while ((int)(uVar13 + 1) < (this->Planes).ArrayNum);
    }
    DestructItems<Chaos::TPlane<float,3>,int>
              ((TPlane<float,3> *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
    if ((TPlane<float,3> *)local_e8.AllocatorInstance.Data != (TPlane<float,3> *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
  }
  else {
    TArrayPrivateFriend::Serialize<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_>
              (param_1,&this->Planes);
  }
  lVar19 = 0;
  iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsObjectVersion::GUID);
  iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  iVar12 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
  if (((iVar10 < 9) && (iVar11 < 0x1a)) && (iVar12 < 0x2e)) {
    local_a8._8_8_ = (FScriptContainerElement *)0x0;
    local_a8._0_8_ = &___7__TParticles_M_02_Chaos__6B_;
    local_a8._16_8_ = 0;
    local_88 = (TArrayCollectionArrayBase)
               &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
    local_a8._24_4_ = 0;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_70 = RemoveAtSwap;
    TArrayCollection::AddArray((TArrayCollection *)local_a8,&local_88);
    local_6c = 0;
    Chaos::operator<<(param_1,(TParticles<float,3> *)local_a8);
    uVar8 = local_a8._24_4_;
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Vertices,local_a8._24_4_,Default);
    uVar15 = 0;
    if (0 < (int)uVar8) {
      do {
        uVar13 = 0;
        if ((int)uVar15 < (int)local_78) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar2 = *(undefined8 *)((longlong)local_80 + lVar19);
        local_res20 = *(undefined4 *)((longlong)local_80 + lVar19 + 8);
        uVar13 = 0;
        if ((int)uVar15 < (this->Vertices).ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar1 = (this->Vertices).AllocatorInstance.Data;
        uVar15 = uVar15 + 1;
        *(undefined8 *)(pFVar1 + lVar19) = uVar2;
        *(undefined4 *)(pFVar1 + lVar19 + 8) = local_res20;
        lVar19 = lVar19 + 0xc;
        param_1 = (FArchive *)local_res10;
      } while ((int)uVar15 < (int)uVar8);
    }
    local_a8._0_8_ = &___7__TParticles_M_02_Chaos__6B_;
    local_88 = (TArrayCollectionArrayBase)
               &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    TArrayCollection::~TArrayCollection((TArrayCollection *)local_a8);
  }
  else {
    TArrayPrivateFriend::Serialize<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>
              (param_1,&this->Vertices);
  }
  pTVar17 = &this->Vertices;
  TBox<float,3>::SerializeAsAABB(param_1,&this->LocalBoundingBox);
  iVar10 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar10 < 0x14) {
    if (param_1->ArIsLoading != 0) {
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = 0;
      local_b8.ArrayMax = 0;
      FConvexBuilder::Build
                (pTVar17,&this->Planes,&local_d8,&local_b8,&this->LocalBoundingBox,Default);
      CalculateVolumeAndCenterOfMass<float,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                (pTVar17,&local_d8,&this->Volume,&this->CenterOfMass);
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d8.AllocatorInstance.Data,
                 local_d8.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d8.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar4 = ((FArchiveState *)param_1)->ActiveFPLB;
    local_res8[0] = this->Volume;
    if (pFVar4->EndFastPathLoadBuffer < (float *)((longlong)pFVar4->StartFastPathLoadBuffer + 4)) {
      if (param_1->ArForceByteSwapping == 0) {
        (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
      }
    }
    else {
      local_res8[0] = *(float *)pFVar4->StartFastPathLoadBuffer;
      pFVar4->StartFastPathLoadBuffer = pFVar4->StartFastPathLoadBuffer + 4;
    }
    this->Volume = local_res8[0];
    iVar10 = _isnan((double)local_res8[0]);
    if ((iVar10 != 0) && (param_1->ArIsLoading != 0)) {
      this->Volume = 0.0;
    }
    operator<<<3>(param_1,&this->CenterOfMass);
  }
  (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x230))(param_1,&FReleaseObjectVersion::GUID)
  ;
  iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (0x24 < iVar10) {
    pFVar4 = ((FArchiveState *)param_1)->ActiveFPLB;
    local_res18[0] = (uint)this->_padding_;
    if (pFVar4->EndFastPathLoadBuffer < (uint *)((longlong)pFVar4->StartFastPathLoadBuffer + 4)) {
      if (param_1->ArForceByteSwapping == 0) {
        (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)pFVar4->StartFastPathLoadBuffer;
      pFVar4->StartFastPathLoadBuffer = pFVar4->StartFastPathLoadBuffer + 4;
    }
    *(uint *)&this->_padding_ = local_res18[0];
  }
  iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (iVar10 < 0x26) {
    if (param_1->ArIsLoading != 0) {
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      FConvexBuilder::BuildPlaneVertexIndices(&this->Planes,pTVar17,&local_c8,__real_3a83126f);
      CreateStructureData(this,&local_c8,false);
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_c8.AllocatorInstance.Data,
                 local_c8.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_c8.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
    }
  }
  else {
    FConvexStructureData::Serialize(&this->StructureData,param_1);
  }
  iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  if (iVar10 < 0x22) {
    if (param_1->ArIsLoading != 0) {
      ComputeUnitMassInertiaTensorAndRotationOfMass(this,(double)this->Volume);
    }
    return;
  }
  SerializeReal<double,3>(param_1,&this->UnitMassInertiaTensor);
  UE::Math::operator<<(param_1,(TQuat<double> *)&this->RotationOfMass);
  return;
}

// Serialize @ 1437abb60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::FConvex::Serialize(FConvex *this,FChaosArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar17;
  ulonglong uVar18;
  longlong lVar19;
  float local_res8 [2];
  FChaosArchive *local_res10;
  uint local_res18 [2];
  undefined4 local_res20;
  TArray<Chaos::TPlane<float,3>,TSizedDefaultAllocator<32>_> local_f8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_e8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_d8;
  undefined1 local_c8 [32];
  TArrayCollectionArrayBase local_a8;
  void *local_a0;
  undefined8 local_98;
  ERemoveParticleBehavior local_90;
  int local_8c;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [56];
  
  local_res10 = param_1;
  (**(code **)(this->_padding_ + 0x118))(this,local_78);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FPhysicsObjectVersion::GUID);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  iVar10 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  uVar14 = 0;
  if (iVar10 < 0x1f) {
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<Chaos::TPlane<float,3>,TSizedDefaultAllocator<32>_>
              ((FArchive *)param_1,&local_f8);
    TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Planes,local_f8.ArrayNum,Default);
    uVar16 = uVar14;
    uVar18 = uVar14;
    if (0 < (this->Planes).ArrayNum) {
      do {
        uVar13 = (uint)uVar14;
        uVar15 = 0;
        if ((int)uVar13 < local_f8.ArrayNum) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar6 = *(undefined8 *)(local_f8.AllocatorInstance.Data + uVar16 + 0x20);
        uVar7 = *(undefined8 *)(local_f8.AllocatorInstance.Data + uVar16 + 0x20 + 8);
        uVar2 = *(undefined8 *)(local_f8.AllocatorInstance.Data + uVar16 + 0x30);
        uVar15 = 0;
        if ((int)uVar13 < (this->Planes).ArrayNum) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->Planes).AllocatorInstance.Data;
        uVar14 = (ulonglong)(uVar13 + 1);
        pFVar1 = pFVar3 + uVar18;
        *(undefined8 *)pFVar1 = uVar6;
        *(undefined8 *)(pFVar1 + 8) = uVar7;
        *(undefined8 *)(pFVar3 + uVar18 + 0x10) = uVar2;
        uVar16 = uVar16 + 0x38;
        uVar18 = uVar18 + 0x18;
      } while ((int)(uVar13 + 1) < (this->Planes).ArrayNum);
    }
    DestructItems<Chaos::TPlane<float,3>,int>
              ((TPlane<float,3> *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((TPlane<float,3> *)local_f8.AllocatorInstance.Data != (TPlane<float,3> *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
  }
  else {
    TArrayPrivateFriend::Serialize<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_>
              ((FArchive *)param_1,&this->Planes);
  }
  lVar19 = 0;
  iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsObjectVersion::GUID);
  iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  iVar12 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
  if (((iVar10 < 9) && (iVar11 < 0x1a)) && (iVar12 < 0x2e)) {
    local_c8._8_8_ = (FScriptContainerElement *)0x0;
    local_c8._0_8_ = &___7__TParticles_M_02_Chaos__6B_;
    local_c8._16_8_ = 0;
    local_a8 = (TArrayCollectionArrayBase)
               &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
    local_c8._24_4_ = 0;
    local_a0 = (void *)0x0;
    local_98 = 0;
    local_90 = RemoveAtSwap;
    TArrayCollection::AddArray((TArrayCollection *)local_c8,&local_a8);
    local_8c = 0;
    Chaos::operator<<((FArchive *)param_1,(TParticles<float,3> *)local_c8);
    uVar8 = local_c8._24_4_;
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Vertices,local_c8._24_4_,Default);
    uVar15 = 0;
    if (0 < (int)uVar8) {
      do {
        uVar13 = 0;
        if ((int)uVar15 < (int)local_98) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar2 = *(undefined8 *)((longlong)local_a0 + lVar19);
        local_res20 = *(undefined4 *)((longlong)local_a0 + lVar19 + 8);
        uVar13 = 0;
        if ((int)uVar15 < (this->Vertices).ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar1 = (this->Vertices).AllocatorInstance.Data;
        uVar15 = uVar15 + 1;
        *(undefined8 *)(pFVar1 + lVar19) = uVar2;
        *(undefined4 *)(pFVar1 + lVar19 + 8) = local_res20;
        lVar19 = lVar19 + 0xc;
        param_1 = local_res10;
      } while ((int)uVar15 < (int)uVar8);
    }
    local_c8._0_8_ = &___7__TParticles_M_02_Chaos__6B_;
    local_a8 = (TArrayCollectionArrayBase)
               &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
    if (local_a0 != (void *)0x0) {
      FMemory::Free(local_a0);
    }
    TArrayCollection::~TArrayCollection((TArrayCollection *)local_c8);
  }
  else {
    TArrayPrivateFriend::Serialize<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>
              ((FArchive *)param_1,&this->Vertices);
  }
  pTVar17 = &this->Vertices;
  TBox<float,3>::SerializeAsAABB((FArchive *)param_1,&this->LocalBoundingBox);
  iVar10 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar10 < 0x14) {
    if ((param_1->_padding_ & 1) != 0) {
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = 0;
      local_e8.ArrayMax = 0;
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0;
      FConvexBuilder::Build
                (pTVar17,&this->Planes,&local_e8,&local_88,&this->LocalBoundingBox,Default);
      CalculateVolumeAndCenterOfMass<float,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                (pTVar17,&local_e8,&this->Volume,&this->CenterOfMass);
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_e8.AllocatorInstance.Data,
                 local_e8.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_e8.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
    }
  }
  else {
    plVar4 = (longlong *)param_1->_padding_;
    local_res8[0] = this->Volume;
    if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_res8);
      }
    }
    else {
      local_res8[0] = *(float *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    this->Volume = local_res8[0];
    iVar10 = _isnan((double)local_res8[0]);
    if ((iVar10 != 0) && ((param_1->_padding_ & 1) != 0)) {
      this->Volume = 0.0;
    }
    operator<<<3>((FArchive *)param_1,&this->CenterOfMass);
  }
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (0x24 < iVar10) {
    plVar4 = (longlong *)param_1->_padding_;
    local_res18[0] = (uint)this->_padding_;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    *(uint *)&this->_padding_ = local_res18[0];
  }
  iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (iVar10 < 0x26) {
    if ((param_1->_padding_ & 1) != 0) {
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      FConvexBuilder::BuildPlaneVertexIndices(&this->Planes,pTVar17,&local_d8,__real_3a83126f);
      CreateStructureData(this,&local_d8,false);
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d8.AllocatorInstance.Data,
                 local_d8.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d8.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
    }
  }
  else {
    FConvexStructureData::Serialize(&this->StructureData,(FArchive *)param_1);
  }
  iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  if (iVar10 < 0x22) {
    if ((param_1->_padding_ & 1) != 0) {
      ComputeUnitMassInertiaTensorAndRotationOfMass(this,(double)this->Volume);
    }
    return;
  }
  SerializeReal<double,3>((FArchive *)param_1,&this->UnitMassInertiaTensor);
  UE::Math::operator<<((FArchive *)param_1,(TQuat<double> *)&this->RotationOfMass);
  return;
}

// ToString @ 1437b2610

FString * __thiscall Chaos::FConvex::ToString(FConvex *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,L"Convex: Verts: %d, Edges %d, Planes: %d, Margin %f");
  return __return_storage_ptr__;
}

// GetMarginAdjustedVertex @ 1438ba8a0

TVector<double,3> * __thiscall
Chaos::FConvex::GetMarginAdjustedVertex
          (FConvex *this,TVector<double,3> *__return_storage_ptr__,int param_1,double param_2,
          double *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  TVector<float,3> *pTVar13;
  TVector<double,3> *pTVar14;
  TVector<double> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  uint local_res20 [2];
  uint local_188;
  uint local_184;
  double local_180;
  double dStack_178;
  double local_170;
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
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  TVector<double>_u_0 local_d0;
  TVector<double> local_b8 [6];
  
  lVar18 = (longlong)param_1;
  if (param_2 == 0.0) {
    pTVar13 = GetVertex(this,param_1);
    fVar19 = *(float *)&pTVar13->field_0x4;
    *(double *)__return_storage_ptr__ = (double)*(float *)pTVar13;
    fVar1 = *(float *)&pTVar13->field_0x8;
    *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar19;
    *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar1;
  }
  else {
    local_res20[0] = 0xffffffff;
    local_188 = 0xffffffff;
    local_184 = 0xffffffff;
    iVar11 = GetVertexPlanes3(this,param_1,(int *)local_res20,(int *)&local_188,(int *)&local_184);
    if (2 < iVar11) {
      uVar12 = 0;
      if (param_1 < (this->Vertices).ArrayNum) {
        uVar12 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TVector<double,3> *)(*pcVar7)();
        return pTVar14;
      }
      pFVar6 = (this->Vertices).AllocatorInstance.Data;
      lVar16 = (longlong)(int)local_184;
      local_180 = (double)*(float *)(pFVar6 + lVar18 * 0xc);
      dStack_178 = (double)*(float *)(pFVar6 + lVar18 * 0xc + 4);
      local_170 = (double)*(float *)(pFVar6 + lVar18 * 0xc + 8);
      uVar12 = 0;
      if ((int)local_184 < (this->Planes).ArrayNum) {
        uVar12 = ~local_184 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TVector<double,3> *)(*pcVar7)();
        return pTVar14;
      }
      pFVar6 = (this->Planes).AllocatorInstance.Data;
      lVar17 = (longlong)(int)local_184;
      local_160 = (double)*(float *)(pFVar6 + lVar16 * 0x18 + 0xc);
      local_158 = (double)*(float *)(pFVar6 + lVar16 * 0x18 + 0x10);
      local_150 = (double)*(float *)(pFVar6 + lVar16 * 0x18 + 0x14);
      uVar12 = 0;
      if ((int)local_184 < (this->Planes).ArrayNum) {
        uVar12 = ~local_184 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TVector<double,3> *)(*pcVar7)();
        return pTVar14;
      }
      pFVar6 = (this->Planes).AllocatorInstance.Data;
      lVar16 = (longlong)(int)local_188;
      fVar19 = (float)param_2;
      local_148 = local_180 - (double)(fVar19 * *(float *)(pFVar6 + lVar17 * 0x18 + 0xc));
      local_140 = dStack_178 - (double)(fVar19 * *(float *)(pFVar6 + lVar17 * 0x18 + 0x10));
      uVar12 = 0;
      if ((int)local_188 < (this->Planes).ArrayNum) {
        uVar12 = ~local_188 >> 0x1f;
      }
      local_138 = local_170 - (double)(fVar19 * *(float *)(pFVar6 + lVar17 * 0x18 + 0x14));
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TVector<double,3> *)(*pcVar7)();
        return pTVar14;
      }
      pFVar6 = (this->Planes).AllocatorInstance.Data;
      lVar17 = (longlong)(int)local_188;
      local_130 = (double)*(float *)(pFVar6 + lVar16 * 0x18 + 0xc);
      local_128 = (double)*(float *)(pFVar6 + lVar16 * 0x18 + 0x10);
      local_120 = (double)*(float *)(pFVar6 + lVar16 * 0x18 + 0x14);
      uVar12 = 0;
      if ((int)local_188 < (this->Planes).ArrayNum) {
        uVar12 = ~local_188 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TVector<double,3> *)(*pcVar7)();
        return pTVar14;
      }
      pFVar6 = (this->Planes).AllocatorInstance.Data;
      lVar16 = (longlong)(int)local_res20[0];
      local_118 = local_180 - (double)(fVar19 * *(float *)(pFVar6 + lVar17 * 0x18 + 0xc));
      local_110 = dStack_178 - (double)(fVar19 * *(float *)(pFVar6 + lVar17 * 0x18 + 0x10));
      uVar12 = 0;
      if ((int)local_res20[0] < (this->Planes).ArrayNum) {
        uVar12 = ~local_res20[0] >> 0x1f;
      }
      local_108 = local_170 - (double)(fVar19 * *(float *)(pFVar6 + lVar17 * 0x18 + 0x14));
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TVector<double,3> *)(*pcVar7)();
        return pTVar14;
      }
      pFVar6 = (this->Planes).AllocatorInstance.Data;
      lVar17 = (longlong)(int)local_res20[0];
      local_100 = (double)*(float *)(pFVar6 + lVar16 * 0x18 + 0xc);
      local_f8 = (double)*(float *)(pFVar6 + lVar16 * 0x18 + 0x10);
      local_f0 = (double)*(float *)(pFVar6 + lVar16 * 0x18 + 0x14);
      uVar12 = 0;
      if ((int)local_res20[0] < (this->Planes).ArrayNum) {
        uVar12 = ~local_res20[0] >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TVector<double,3> *)(*pcVar7)();
        return pTVar14;
      }
      pFVar6 = (this->Planes).AllocatorInstance.Data;
      local_e8 = local_180 - (double)(fVar19 * *(float *)(pFVar6 + lVar17 * 0x18 + 0xc));
      local_e0 = dStack_178 - (double)(fVar19 * *(float *)(pFVar6 + lVar17 * 0x18 + 0x10));
      local_d8 = local_170 - (double)(fVar19 * *(float *)(pFVar6 + lVar17 * 0x18 + 0x14));
      bVar10 = IntersectPlanes3(this,(TVector<double,3> *)&local_e8,(TVector<double,3> *)&local_100,
                                (TVector<double,3> *)&local_118,(TVector<double,3> *)&local_130,
                                (TVector<double,3> *)&local_148,(TVector<double,3> *)&local_160,
                                (TVector<double,3> *)&local_180,__real_3eb0c6f7a0b5ed8d);
      if (bVar10) {
        if (param_3 != (double *)0x0) {
          uVar12 = 0;
          if (param_1 < (this->Vertices).ArrayNum) {
            uVar12 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            pTVar14 = (TVector<double,3> *)(*pcVar7)();
            return pTVar14;
          }
          pFVar6 = (this->Vertices).AllocatorInstance.Data;
          *param_3 = (double)SQRT((*(float *)(pFVar6 + lVar18 * 0xc) - (float)local_180) *
                                  (*(float *)(pFVar6 + lVar18 * 0xc) - (float)local_180) +
                                  (*(float *)(pFVar6 + lVar18 * 0xc + 4) - (float)dStack_178) *
                                  (*(float *)(pFVar6 + lVar18 * 0xc + 4) - (float)dStack_178) +
                                  (*(float *)(pFVar6 + lVar18 * 0xc + 8) - (float)local_170) *
                                  (*(float *)(pFVar6 + lVar18 * 0xc + 8) - (float)local_170)) -
                     param_2;
        }
        *(double *)__return_storage_ptr__ = local_180;
        *(double *)&__return_storage_ptr__->field_0x8 = dStack_178;
        *(double *)&__return_storage_ptr__->field_0x10 = local_170;
        return __return_storage_ptr__;
      }
    }
    if (iVar11 == 2) {
      pTVar13 = GetVertex(this,param_1);
      lVar18 = (longlong)(int)local_res20[0];
      fVar19 = *(float *)pTVar13;
      fVar1 = *(float *)&pTVar13->field_0x4;
      fVar2 = *(float *)&pTVar13->field_0x8;
      uVar12 = 0;
      if ((int)local_res20[0] < (this->Planes).ArrayNum) {
        uVar12 = ~local_res20[0] >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TVector<double,3> *)(*pcVar7)();
        return pTVar14;
      }
      pFVar6 = (this->Planes).AllocatorInstance.Data;
      lVar16 = (longlong)(int)local_188;
      fVar3 = *(float *)(pFVar6 + lVar18 * 0x18 + 0xc);
      fVar4 = *(float *)(pFVar6 + lVar18 * 0x18 + 0x10);
      fVar5 = *(float *)(pFVar6 + lVar18 * 0x18 + 0x14);
      uVar12 = 0;
      if ((int)local_188 < (this->Planes).ArrayNum) {
        uVar12 = ~local_188 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TVector<double,3> *)(*pcVar7)();
        return pTVar14;
      }
      pFVar6 = (this->Planes).AllocatorInstance.Data;
      local_d0._s_0.X = (double)*(float *)(pFVar6 + lVar16 * 0x18 + 0xc) + (double)fVar3;
      local_d0._s_0.Y = (double)*(float *)(pFVar6 + lVar16 * 0x18 + 0x10) + (double)fVar4;
      local_d0._s_0.Z = (double)*(float *)(pFVar6 + lVar16 * 0x18 + 0x14) + (double)fVar5;
      pTVar15 = UE::Math::TVector<double>::GetSafeNormal
                          ((TVector<double> *)&local_d0._s_0,local_b8,__real_3e45798ee0000000,
                           &UE::Math::TVector<double>::ZeroVector);
      dVar8 = (pTVar15->field0_0x0)._s_0.X;
      dVar9 = (pTVar15->field0_0x0)._s_0.Y;
      *(double *)&__return_storage_ptr__->field_0x10 =
           (double)fVar2 - (pTVar15->field0_0x0)._s_0.Z * param_2;
      *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1 - dVar9 * param_2;
      *(double *)__return_storage_ptr__ = (double)fVar19 - dVar8 * param_2;
    }
    else {
      pTVar13 = GetVertex(this,param_1);
      if (iVar11 == 1) {
        fVar19 = *(float *)pTVar13;
        fVar1 = *(float *)&pTVar13->field_0x4;
        fVar2 = *(float *)&pTVar13->field_0x8;
        lVar18 = (longlong)(int)local_res20[0];
        uVar12 = 0;
        if ((int)local_res20[0] < (this->Planes).ArrayNum) {
          uVar12 = ~local_res20[0] >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          pTVar14 = (TVector<double,3> *)(*pcVar7)();
          return pTVar14;
        }
        pFVar6 = (this->Planes).AllocatorInstance.Data;
        fVar3 = *(float *)(pFVar6 + lVar18 * 0x18 + 0x10);
        fVar4 = *(float *)(pFVar6 + lVar18 * 0x18 + 0x14);
        *(double *)__return_storage_ptr__ =
             (double)fVar19 - (double)*(float *)(pFVar6 + lVar18 * 0x18 + 0xc) * param_2;
        *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1 - (double)fVar3 * param_2;
        *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2 - (double)fVar4 * param_2;
      }
      else {
        fVar19 = *(float *)&pTVar13->field_0x4;
        *(double *)__return_storage_ptr__ = (double)*(float *)pTVar13;
        fVar1 = *(float *)&pTVar13->field_0x8;
        *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar19;
        *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar1;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetPlane @ 1438bbb50

TCorePlane<double,3> * __thiscall
Chaos::FConvex::GetPlane(FConvex *this,TCorePlane<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  bool bVar9;
  uint uVar10;
  TCorePlane<double,3> *pTVar11;
  longlong lVar12;
  
  lVar12 = (longlong)param_1;
  uVar10 = 0;
  if (param_1 < (this->Planes).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TCorePlane<double,3> *)(*pcVar6)();
      return pTVar11;
    }
  }
  pFVar5 = (this->Planes).AllocatorInstance.Data;
  fVar1 = *(float *)(pFVar5 + lVar12 * 0x18 + 4);
  fVar2 = *(float *)(pFVar5 + lVar12 * 0x18 + 8);
  fVar3 = *(float *)(pFVar5 + lVar12 * 0x18 + 0xc);
  uVar4 = *(undefined8 *)(pFVar5 + lVar12 * 0x18 + 0x10);
  *(double *)&__return_storage_ptr__->MX = (double)*(float *)(pFVar5 + lVar12 * 0x18);
  *(double *)&(__return_storage_ptr__->MX).field_0x8 = (double)fVar1;
  *(double *)&(__return_storage_ptr__->MX).field_0x10 = (double)fVar2;
  *(double *)&__return_storage_ptr__->MNormal = (double)fVar3;
  dVar8 = (double)(float)((ulonglong)uVar4 >> 0x20);
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = (double)(float)uVar4;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->MNormal).field_0x8 = auVar7;
  return __return_storage_ptr__;
}

// GetPlaneNX @ 1438bbee0

void __thiscall
Chaos::FConvex::GetPlaneNX
          (FConvex *this,int param_1,TVector<double,3> *param_2,TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < (this->Planes).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Planes).AllocatorInstance.Data;
  fVar1 = *(float *)(pFVar3 + lVar7 * 0x18 + 0x10);
  fVar2 = *(float *)(pFVar3 + lVar7 * 0x18 + 0x14);
  *(double *)param_2 = (double)*(float *)(pFVar3 + lVar7 * 0x18 + 0xc);
  *(double *)&param_2->field_0x8 = (double)fVar1;
  *(double *)&param_2->field_0x10 = (double)fVar2;
  uVar6 = 0;
  if (param_1 < (this->Planes).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Planes).AllocatorInstance.Data;
  fVar1 = *(float *)(pFVar3 + lVar7 * 0x18 + 4);
  fVar2 = *(float *)(pFVar3 + lVar7 * 0x18 + 8);
  *(double *)param_3 = (double)*(float *)(pFVar3 + lVar7 * 0x18);
  *(double *)&param_3->field_0x8 = (double)fVar1;
  *(double *)&param_3->field_0x10 = (double)fVar2;
  return;
}

// GetPlaneVertex @ 1438bc030

int __thiscall Chaos::FConvex::GetPlaneVertex(FConvex *this,int param_1,int param_2)

{
  EIndexType EVar1;
  TConvexHalfEdgeStructureData<int> *this_00;
  int iVar2;
  FHalfEdgeData *pFVar3;
  FHalfEdgeData *pFVar4;
  FHalfEdgeData *pFVar5;
  
  this_00 = (this->StructureData).Data.DataL;
  if (this_00 != (TConvexHalfEdgeStructureData<int> *)0x0) {
    EVar1 = (this->StructureData).IndexType;
    if (EVar1 == Small) {
      iVar2 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                        ((TConvexHalfEdgeStructureData<unsigned_char> *)this_00,param_1,param_2);
      pFVar5 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                         ((TConvexHalfEdgeStructureData<unsigned_char> *)this_00,iVar2);
      return (int)pFVar5->VertexIndex;
    }
    if (EVar1 == Medium) {
      iVar2 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                        ((TConvexHalfEdgeStructureData<short> *)this_00,param_1,param_2);
      pFVar4 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                         ((TConvexHalfEdgeStructureData<short> *)this_00,iVar2);
      return (int)pFVar4->VertexIndex;
    }
    if (EVar1 == Large) {
      iVar2 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(this_00,param_1,param_2);
      pFVar3 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(this_00,iVar2);
      return pFVar3->VertexIndex;
    }
  }
  return -1;
}

// SupportCore @ 1438d8450

TVector<double,3> * __thiscall
Chaos::FConvex::SupportCore
          (FConvex *this,TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,
          double param_2,double *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector<double,3> *pTVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  
  uVar9 = 0;
  lVar12 = (longlong)(this->Vertices).ArrayNum;
  uVar7 = 0xffffffff;
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  if (0 < lVar12) {
    lVar11 = 0;
    fVar14 = __real_ff7fffff;
    uVar10 = 0xffffffff;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->Vertices).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TVector<double,3> *)(*pcVar5)();
        return pTVar8;
      }
      pFVar4 = (this->Vertices).AllocatorInstance.Data;
      fVar13 = (float)dVar2 * *(float *)(pFVar4 + lVar11 + 4) +
               (float)dVar1 * *(float *)(pFVar4 + lVar11) +
               (float)dVar3 * *(float *)(pFVar4 + lVar11 + 8);
      uVar7 = uVar9;
      if (fVar13 <= fVar14) {
        fVar13 = fVar14;
        uVar7 = uVar10;
      }
      fVar14 = fVar13;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0xc;
      lVar12 = lVar12 + -1;
      uVar10 = uVar7;
    } while (lVar12 != 0);
  }
  *param_4 = uVar7;
  if (uVar7 == 0xffffffff) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    GetMarginAdjustedVertex(this,__return_storage_ptr__,uVar7,param_2,param_3);
  }
  return __return_storage_ptr__;
}

// SupportCoreScaled @ 1438d8600

TVector<double,3> * __thiscall
Chaos::FConvex::SupportCoreScaled
          (FConvex *this,TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,
          double param_2,TVector<double,3> *param_3,double *param_4,int *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TVector<double,3> *pTVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&param_1->field_0x8;
  uVar10 = 0xffffffff;
  dVar3 = *(double *)param_3;
  uVar14 = 0;
  dVar4 = *(double *)&param_3->field_0x8;
  lVar15 = (longlong)(this->Vertices).ArrayNum;
  dVar5 = *(double *)&param_1->field_0x10;
  dVar6 = *(double *)&param_3->field_0x10;
  if (0 < lVar15) {
    lVar16 = 0;
    fVar18 = __real_ff7fffff;
    uVar13 = 0xffffffff;
    do {
      uVar10 = 0;
      if ((int)uVar14 < (this->Vertices).ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TVector<double,3> *)(*pcVar8)();
        return pTVar11;
      }
      pFVar7 = (this->Vertices).AllocatorInstance.Data;
      fVar17 = (float)(dVar2 * dVar4) * *(float *)(pFVar7 + lVar16 + 4) +
               (float)(dVar1 * dVar3) * *(float *)(pFVar7 + lVar16) +
               (float)(dVar5 * dVar6) * *(float *)(pFVar7 + lVar16 + 8);
      uVar10 = uVar14;
      if (fVar17 <= fVar18) {
        fVar17 = fVar18;
        uVar10 = uVar13;
      }
      fVar18 = fVar17;
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 0xc;
      lVar15 = lVar15 + -1;
      uVar13 = uVar10;
    } while (lVar15 != 0);
  }
  *param_5 = uVar10;
  if (uVar10 == 0xffffffff) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else if (param_2 == 0.0) {
    pTVar12 = GetVertex(this,uVar10);
    dVar1 = *(double *)&param_3->field_0x10;
    fVar18 = *(float *)&pTVar12->field_0x8;
    fVar17 = *(float *)pTVar12;
    dVar2 = *(double *)param_3;
    *(double *)&__return_storage_ptr__->field_0x8 =
         *(double *)&param_3->field_0x8 * (double)*(float *)&pTVar12->field_0x4;
    *(double *)__return_storage_ptr__ = (double)fVar17 * dVar2;
    *(double *)&__return_storage_ptr__->field_0x10 = dVar1 * (double)fVar18;
  }
  else {
    GetMarginAdjustedVertexScaled(this,__return_storage_ptr__,uVar10,param_2,param_3,param_4);
  }
  return __return_storage_ptr__;
}

// NumPlaneVertices @ 143962630

int __thiscall Chaos::FConvex::NumPlaneVertices(FConvex *this,int param_1)

{
  EIndexType EVar1;
  TConvexHalfEdgeStructureData<int> *this_00;
  FPlaneData *pFVar2;
  FPlaneData *pFVar3;
  FPlaneData *pFVar4;
  
  this_00 = (this->StructureData).Data.DataL;
  if (this_00 != (TConvexHalfEdgeStructureData<int> *)0x0) {
    EVar1 = (this->StructureData).IndexType;
    if (EVar1 == Small) {
      pFVar4 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                         ((TConvexHalfEdgeStructureData<unsigned_char> *)this_00,param_1);
      return (int)pFVar4->NumHalfEdges;
    }
    if (EVar1 == Medium) {
      pFVar3 = TConvexHalfEdgeStructureData<short>::GetPlane
                         ((TConvexHalfEdgeStructureData<short> *)this_00,param_1);
      return (int)pFVar3->NumHalfEdges;
    }
    if (EVar1 == Large) {
      pFVar2 = TConvexHalfEdgeStructureData<int>::GetPlane(this_00,param_1);
      return pFVar2->NumHalfEdges;
    }
  }
  return 0;
}

// FConvex @ 143a373b0

FConvex * __thiscall Chaos::FConvex::FConvex(FConvex *this,FConvex *param_1)

{
  TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\b');
  pTVar1 = &this->Planes;
  this->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
  piVar2 = &(this->Planes).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Planes).ArrayNum;
  pFVar5 = (param_1->Planes).AllocatorInstance.Data;
  (this->Planes).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x18);
  }
  pTVar3 = &this->Vertices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Vertices).ArrayMax;
  iVar4 = (param_1->Vertices).ArrayNum;
  pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
  (this->Vertices).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0xc);
  }
  *(undefined8 *)&(this->LocalBoundingBox).MMin = *(undefined8 *)&(param_1->LocalBoundingBox).MMin;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 =
       *(undefined4 *)&(param_1->LocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = *(undefined8 *)&(param_1->LocalBoundingBox).MMax;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 =
       *(undefined4 *)&(param_1->LocalBoundingBox).MMax.field_0x8;
  (this->StructureData).Data.Ptr = (void *)0x0;
  (this->StructureData).IndexType = None;
  this->Volume = param_1->Volume;
  *(undefined8 *)&this->CenterOfMass = *(undefined8 *)&param_1->CenterOfMass;
  *(undefined4 *)&(this->CenterOfMass).field_0x8 = *(undefined4 *)&(param_1->CenterOfMass).field_0x8
  ;
  uVar6 = *(undefined8 *)&(param_1->UnitMassInertiaTensor).field_0x8;
  *(undefined8 *)&this->UnitMassInertiaTensor = *(undefined8 *)&param_1->UnitMassInertiaTensor;
  *(undefined8 *)&(this->UnitMassInertiaTensor).field_0x8 = uVar6;
  *(undefined8 *)&(this->UnitMassInertiaTensor).field_0x10 =
       *(undefined8 *)&(param_1->UnitMassInertiaTensor).field_0x10;
  uVar6 = *(undefined8 *)&(param_1->RotationOfMass).field_0x8;
  *(undefined8 *)&this->RotationOfMass = *(undefined8 *)&param_1->RotationOfMass;
  *(undefined8 *)&(this->RotationOfMass).field_0x8 = uVar6;
  uVar6 = *(undefined8 *)&(param_1->RotationOfMass).field_0x18;
  *(undefined8 *)&(this->RotationOfMass).field_0x10 =
       *(undefined8 *)&(param_1->RotationOfMass).field_0x10;
  *(undefined8 *)&(this->RotationOfMass).field_0x18 = uVar6;
  FConvexStructureData::CopyFrom(&this->StructureData,&param_1->StructureData);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  return this;
}

// ComputeUnitMassInertiaTensorAndRotationOfMass @ 143a5ffa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FConvex::ComputeUnitMassInertiaTensorAndRotationOfMass(FConvex *this,double param_1)

{
  EIndexType *pEVar1;
  EIndexType EVar2;
  TConvexHalfEdgeStructureData<int> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ComputeConvexMassInertia> FVar21;
  FPlaneData *pFVar22;
  FPlaneData *pFVar23;
  FPlaneData *pFVar24;
  longlong lVar25;
  FHalfEdgeData *pFVar26;
  FHalfEdgeData *pFVar27;
  FHalfEdgeData *pFVar28;
  TRotation<double,3> *pTVar29;
  int iVar30;
  FName FVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  double dVar36;
  undefined1 auStackY_598 [32];
  FColor_u_0 local_528 [2];
  FName local_520;
  FName local_518;
  double local_508;
  double dStack_500;
  double local_4f8;
  undefined8 local_4f0;
  undefined1 local_4e8 [16];
  double local_4d8;
  undefined8 local_4d0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  double local_498;
  double dStack_490;
  FName local_488 [2];
  TRotation<double,3> local_478;
  TMatrix<double> local_458;
  double local_3d8;
  undefined1 local_3d0 [16];
  undefined8 local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  undefined8 local_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  double dStack_360;
  TMatrix<double> local_358;
  TMatrix<double> local_2d8;
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_598;
  FVar21 = StatPtr_STAT_ComputeConvexMassInertia;
  if (StatPtr_STAT_ComputeConvexMassInertia ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ComputeConvexMassInertia>)0x0) {
    pFVar20 = ::FName::FName(local_488,"STAT_ComputeConvexMassInertia");
    FVar21 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ComputeConvexMassInertia>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ComputeConvexMassInertia,*pFVar20
                        ,L"FConvex::ComputeUnitMassInertiaTensorAndRotationOfMass",
                        "STATGROUP_ChaosCollision","STATCAT_Advanced",L"ChaosCollision",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar21;
  bVar13 = false;
  bVar14 = false;
  local_518.ComparisonIndex.Value = 0;
  local_518.Number = 0;
  bVar17 = false;
  bVar18 = false;
  if ((FVar31.ComparisonIndex.Value.Value != 0) || (FVar31.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_528[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_528[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar13 = false;
      bVar14 = true;
      bVar17 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_520.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_520.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_520,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Convex.cpp"
                   ,0x198);
        bVar13 = true;
        bVar14 = true;
        bVar17 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar31,CycleScopeStart);
      bVar17 = true;
      goto LAB_143a60115;
    }
  }
  bVar14 = bVar18;
  bVar13 = bVar17;
  bVar17 = false;
  FVar31 = local_518;
LAB_143a60115:
  dVar16 = _UNK_15061cbc8;
  dVar15 = ___xmm_3ff00000000000000000000000000000;
  dVar7 = __real_3ff0000000000000;
  if ((param_1 < __real_3e45798ee0000000) || ((this->StructureData).Data.Ptr == (void *)0x0)) {
    *(undefined8 *)&this->UnitMassInertiaTensor = 0x3ff0000000000000;
    *(undefined8 *)&(this->UnitMassInertiaTensor).field_0x8 = 0x3ff0000000000000;
    *(undefined8 *)&(this->UnitMassInertiaTensor).field_0x10 = 0x3ff0000000000000;
    dVar16 = UE::Math::TQuat<double>::Identity.W;
    dVar15 = UE::Math::TQuat<double>::Identity.Z;
    dVar7 = UE::Math::TQuat<double>::Identity.Y;
    *(double *)&this->RotationOfMass = UE::Math::TQuat<double>::Identity.X;
    *(double *)&(this->RotationOfMass).field_0x8 = dVar7;
    *(double *)&(this->RotationOfMass).field_0x10 = dVar15;
    *(double *)&(this->RotationOfMass).field_0x18 = dVar16;
  }
  else {
    iVar34 = 0;
    local_508 = 0.0;
    dVar11 = __real_3ff0000000000000 / param_1;
    local_4c8 = 0.0;
    dStack_500 = 0.0;
    local_4e8 = ZEXT816(0);
    dStack_4c0 = 0.0;
    local_4f8 = 0.0;
    local_4d8 = 0.0;
    local_4b8 = 0.0;
    local_4f0 = 0;
    local_4d0 = 0;
    local_4b0 = 0;
    local_4a8 = 0;
    uStack_4a0 = 0;
    local_498 = ___xmm_3ff00000000000000000000000000000;
    dStack_490 = _UNK_15061cbc8;
    if (0 < (this->Planes).ArrayNum) {
      do {
        pTVar3 = (this->StructureData).Data.DataL;
        pEVar1 = &(this->StructureData).IndexType;
        if (pTVar3 == (TConvexHalfEdgeStructureData<int> *)0x0) {
LAB_143a60276:
          uVar33 = 0;
        }
        else {
          EVar2 = *pEVar1;
          if (EVar2 == Small) {
            pFVar24 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                                ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar3,iVar34);
            uVar33 = (uint)pFVar24->NumHalfEdges;
          }
          else if (EVar2 == Medium) {
            pFVar23 = TConvexHalfEdgeStructureData<short>::GetPlane
                                ((TConvexHalfEdgeStructureData<short> *)pTVar3,iVar34);
            uVar33 = (uint)pFVar23->NumHalfEdges;
          }
          else {
            if (EVar2 != Large) goto LAB_143a60276;
            pFVar22 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar3,iVar34);
            uVar33 = pFVar22->NumHalfEdges;
          }
        }
        if (2 < (int)uVar33) {
          dVar36 = 0.0;
          dVar8 = 0.0;
          dVar9 = 0.0;
          iVar35 = 0;
          do {
            pTVar3 = (this->StructureData).Data.DataL;
            if (pTVar3 == (TConvexHalfEdgeStructureData<int> *)0x0) {
              uVar32 = 0xffffffff;
LAB_143a60330:
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              EVar2 = *pEVar1;
              if (EVar2 == Small) {
                iVar30 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                                   ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar3,iVar34,
                                    iVar35);
                pFVar28 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                                    ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar3,iVar30);
                uVar32 = (uint)pFVar28->VertexIndex;
              }
              else if (EVar2 == Medium) {
                iVar30 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                                   ((TConvexHalfEdgeStructureData<short> *)pTVar3,iVar34,iVar35);
                pFVar27 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                                    ((TConvexHalfEdgeStructureData<short> *)pTVar3,iVar30);
                uVar32 = (uint)pFVar27->VertexIndex;
              }
              else if (EVar2 == Large) {
                iVar30 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(pTVar3,iVar34,iVar35);
                pFVar26 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar3,iVar30);
                uVar32 = pFVar26->VertexIndex;
              }
              else {
                uVar32 = 0xffffffff;
              }
              uVar19 = 0;
              if ((int)uVar32 < (this->Vertices).ArrayNum) {
                uVar19 = ~uVar32 >> 0x1f;
              }
              if (uVar19 == 0) goto LAB_143a60330;
            }
            lVar25 = (longlong)(int)uVar32;
            iVar35 = iVar35 + 1;
            pFVar4 = (this->Vertices).AllocatorInstance.Data;
            dVar36 = dVar36 + (double)*(float *)(pFVar4 + lVar25 * 0xc);
            dVar8 = dVar8 + (double)*(float *)(pFVar4 + lVar25 * 0xc + 4);
            dVar9 = dVar9 + (double)*(float *)(pFVar4 + lVar25 * 0xc + 8);
          } while (iVar35 < (int)uVar33);
          iVar35 = 0;
          dVar10 = dVar7 / (double)(int)uVar33;
          local_458.M[0][1] = 0.0;
          local_458.M[1][1] = 0.0;
          local_458.M[2][1] = 0.0;
          local_458.M[0][2] = 0.0;
          local_458.M[1][2] = 0.0;
          local_458.M[2][2] = 0.0;
          local_458.M[0][3] = 0.0;
          local_458.M[1][3] = 0.0;
          local_458.M[2][3] = 0.0;
          local_458.M[3][0] = 0.0;
          local_458.M[3][1] = 0.0;
          local_458.M[3][2] = dVar15;
          local_458.M[3][3] = dVar16;
          do {
            pTVar3 = (this->StructureData).Data.DataL;
            local_458.M[0][0] = dVar10 * dVar36 - (double)*(float *)&this->CenterOfMass;
            local_458.M[1][0] = dVar10 * dVar8 - (double)*(float *)&(this->CenterOfMass).field_0x4;
            local_458.M[2][0] = dVar10 * dVar9 - (double)*(float *)&(this->CenterOfMass).field_0x8;
            if (pTVar3 == (TConvexHalfEdgeStructureData<int> *)0x0) {
              uVar32 = 0xffffffff;
LAB_143a6051f:
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              EVar2 = (this->StructureData).IndexType;
              if (EVar2 == Small) {
                iVar30 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                                   ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar3,iVar34,
                                    iVar35);
                pFVar28 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                                    ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar3,iVar30);
                uVar32 = (uint)pFVar28->VertexIndex;
              }
              else if (EVar2 == Medium) {
                iVar30 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                                   ((TConvexHalfEdgeStructureData<short> *)pTVar3,iVar34,iVar35);
                pFVar27 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                                    ((TConvexHalfEdgeStructureData<short> *)pTVar3,iVar30);
                uVar32 = (uint)pFVar27->VertexIndex;
              }
              else if (EVar2 == Large) {
                iVar30 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(pTVar3,iVar34,iVar35);
                pFVar26 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar3,iVar30);
                uVar32 = pFVar26->VertexIndex;
              }
              else {
                uVar32 = 0xffffffff;
              }
              uVar19 = 0;
              if ((int)uVar32 < (this->Vertices).ArrayNum) {
                uVar19 = ~uVar32 >> 0x1f;
              }
              if (uVar19 == 0) goto LAB_143a6051f;
            }
            lVar25 = (longlong)(int)uVar32;
            pTVar3 = (this->StructureData).Data.DataL;
            pFVar4 = (this->Vertices).AllocatorInstance.Data;
            local_458.M[1][1] =
                 (double)(*(float *)(pFVar4 + lVar25 * 0xc + 4) -
                         *(float *)&(this->CenterOfMass).field_0x4);
            local_458.M[2][1] =
                 (double)(*(float *)(pFVar4 + lVar25 * 0xc + 8) -
                         *(float *)&(this->CenterOfMass).field_0x8);
            local_458.M[0][1] =
                 (double)(*(float *)(pFVar4 + lVar25 * 0xc) - *(float *)&this->CenterOfMass);
            if (pTVar3 == (TConvexHalfEdgeStructureData<int> *)0x0) {
              uVar32 = 0xffffffff;
LAB_143a60640:
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              EVar2 = (this->StructureData).IndexType;
              iVar30 = (iVar35 + 1) % (int)uVar33;
              if (EVar2 == Small) {
                iVar30 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                                   ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar3,iVar34,
                                    iVar30);
                pFVar28 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                                    ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar3,iVar30);
                uVar32 = (uint)pFVar28->VertexIndex;
              }
              else if (EVar2 == Medium) {
                iVar30 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                                   ((TConvexHalfEdgeStructureData<short> *)pTVar3,iVar34,iVar30);
                pFVar27 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                                    ((TConvexHalfEdgeStructureData<short> *)pTVar3,iVar30);
                uVar32 = (uint)pFVar27->VertexIndex;
              }
              else if (EVar2 == Large) {
                iVar30 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(pTVar3,iVar34,iVar30);
                pFVar26 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar3,iVar30);
                uVar32 = pFVar26->VertexIndex;
              }
              else {
                uVar32 = 0xffffffff;
              }
              uVar19 = 0;
              if ((int)uVar32 < (this->Vertices).ArrayNum) {
                uVar19 = ~uVar32 >> 0x1f;
              }
              if (uVar19 == 0) goto LAB_143a60640;
            }
            lVar25 = (longlong)(int)uVar32;
            pFVar4 = (this->Vertices).AllocatorInstance.Data;
            local_458.M[0][2] =
                 (double)(*(float *)(pFVar4 + lVar25 * 0xc) - *(float *)&this->CenterOfMass);
            local_458.M[1][2] =
                 (double)(*(float *)(pFVar4 + lVar25 * 0xc + 4) -
                         *(float *)&(this->CenterOfMass).field_0x4);
            local_458.M[2][2] =
                 (double)(*(float *)(pFVar4 + lVar25 * 0xc + 8) -
                         *(float *)&(this->CenterOfMass).field_0x8);
            local_358.M[0][3] = 0.0;
            local_358.M[1][3] = 0.0;
            local_358.M[2][3] = 0.0;
            local_358.M[3][2] = dVar15;
            local_358.M[3][3] = dVar16;
            local_358.M[2][2] =
                 ((local_458.M[2][2] * local_458.M[1][1] - local_458.M[1][2] * local_458.M[2][1]) *
                  local_458.M[0][0] -
                 (local_458.M[2][2] * local_458.M[1][0] - local_458.M[1][2] * local_458.M[2][0]) *
                 local_458.M[0][1]) +
                 (local_458.M[2][1] * local_458.M[1][0] - local_458.M[1][1] * local_458.M[2][0]) *
                 local_458.M[0][2];
            local_358.M[0][0] = local_358.M[2][2] * (double)Standard._0_8_;
            local_358.M[1][0] = local_358.M[2][2] * (double)Standard._32_8_;
            local_358.M[2][0] = local_358.M[2][2] * (double)Standard._64_8_;
            local_358.M[0][1] = local_358.M[2][2] * (double)Standard._8_8_;
            local_358.M[1][1] = local_358.M[2][2] * (double)Standard._40_8_;
            local_358.M[2][1] = local_358.M[2][2] * (double)Standard._72_8_;
            local_358.M[0][2] = local_358.M[2][2] * (double)Standard._16_8_;
            local_358.M[1][2] = local_358.M[2][2] * (double)Standard._48_8_;
            local_358.M[2][2] = local_358.M[2][2] * (double)Standard._80_8_;
            local_358.M[3][0] = 0.0;
            local_358.M[3][1] = 0.0;
            VectorMatrixMultiply(&local_1d8,&local_458,&local_358);
            local_158.M[0][0] = local_1d8.M[0][0];
            local_158.M[0][1] = local_1d8.M[0][1];
            local_158.M[0][2] = local_1d8.M[0][2];
            local_158.M[0][3] = local_1d8.M[0][3];
            local_158.M[1][0] = local_1d8.M[1][0];
            local_158.M[1][1] = local_1d8.M[1][1];
            local_158.M[1][2] = local_1d8.M[1][2];
            local_158.M[1][3] = local_1d8.M[1][3];
            local_158.M[2][0] = local_1d8.M[2][0];
            local_158.M[2][1] = local_1d8.M[2][1];
            local_158.M[2][2] = local_1d8.M[2][2];
            local_158.M[2][3] = local_1d8.M[2][3];
            local_158.M[3][0] = local_1d8.M[3][0];
            local_158.M[3][1] = local_1d8.M[3][1];
            local_158.M[3][2] = local_1d8.M[3][2];
            local_158.M[3][3] = local_1d8.M[3][3];
            local_2d8.M[0][0] = local_458.M[0][0];
            local_2d8.M[1][0] = local_458.M[0][1];
            local_2d8.M[2][0] = local_458.M[0][2];
            local_2d8.M[0][1] = local_458.M[1][0];
            local_2d8.M[1][1] = local_458.M[1][1];
            local_2d8.M[2][1] = local_458.M[1][2];
            local_2d8.M[0][2] = local_458.M[2][0];
            local_2d8.M[1][2] = local_458.M[2][1];
            local_2d8.M[2][2] = local_458.M[2][2];
            local_2d8.M[3][0] = 0.0;
            local_2d8.M[3][1] = 0.0;
            local_2d8.M[0][3] = 0.0;
            local_2d8.M[1][3] = 0.0;
            local_2d8.M[2][3] = 0.0;
            local_2d8.M[3][2] = dVar15;
            local_2d8.M[3][3] = dVar16;
            VectorMatrixMultiply(&local_258,&local_158,&local_2d8);
            iVar35 = iVar35 + 1;
            local_508 = local_508 + local_258.M[0][0];
            dStack_500 = dStack_500 + local_258.M[0][1];
            dVar6 = (double)local_4e8._8_8_ + local_258.M[1][1];
            local_4e8._8_4_ = SUB84(dVar6,0);
            local_4e8._0_8_ = (double)local_4e8._0_8_ + local_258.M[1][0];
            local_4e8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
            local_4f8 = local_4f8 + local_258.M[0][2];
            local_4d8 = local_4d8 + local_258.M[1][2];
            local_4c8 = local_4c8 + local_258.M[2][0];
            dStack_4c0 = dStack_4c0 + local_258.M[2][1];
            local_4b8 = local_4b8 + local_258.M[2][2];
          } while (iVar35 < (int)uVar33);
        }
        iVar34 = iVar34 + 1;
      } while (iVar34 < (this->Planes).ArrayNum);
    }
    local_3c0 = 0;
    local_3a0 = 0;
    dVar36 = local_4b8 + (double)local_4e8._8_8_ + local_508;
    local_380 = 0;
    local_3b8 = (double)local_4e8._0_8_ * ___xmm_bf81111111111111bf81111111111111 * dVar11;
    local_368 = dVar15;
    dStack_360 = dVar16;
    local_398 = local_4c8 * ___xmm_bf81111111111111bf81111111111111 * dVar11;
    dStack_390 = dStack_4c0 * _UNK_150af7a48 * dVar11;
    local_3d8 = (dVar36 - local_508) * __real_3f81111111111111 * dVar11;
    local_3a8 = local_4d8 * ___xmm_bf81111111111111bf81111111111111 * dVar11;
    dVar7 = local_4f8 * _UNK_150af7a48 * dVar11;
    local_3b0 = (dVar36 - (double)local_4e8._8_8_) * __real_3f81111111111111 * dVar11;
    local_388 = ((double)local_4e8._8_8_ + local_508) * __real_3f81111111111111 * dVar11;
    local_3d0._8_4_ = SUB84(dVar7,0);
    local_3d0._0_8_ = dStack_500 * ___xmm_bf81111111111111bf81111111111111 * dVar11;
    local_3d0._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_378 = 0;
    uStack_370 = 0;
    pTVar29 = TransformToLocalSpace<double>(&local_478,(PMatrix<double,3,3> *)&local_3d8);
    uVar12 = *(undefined8 *)&pTVar29->field_0x8;
    *(undefined8 *)&this->RotationOfMass = *(undefined8 *)pTVar29;
    *(undefined8 *)&(this->RotationOfMass).field_0x8 = uVar12;
    uVar12 = *(undefined8 *)&pTVar29->field_0x18;
    *(undefined8 *)&(this->RotationOfMass).field_0x10 = *(undefined8 *)&pTVar29->field_0x10;
    *(undefined8 *)&(this->RotationOfMass).field_0x18 = uVar12;
    *(double *)&this->UnitMassInertiaTensor = local_3d8;
    *(double *)&(this->UnitMassInertiaTensor).field_0x8 = local_3b0;
    *(double *)&(this->UnitMassInertiaTensor).field_0x10 = local_388;
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
  }
  return;
}

// CopyGeometry @ 143a61580

TRefCountPtr<Chaos::FImplicitObject> __thiscall Chaos::FConvex::CopyGeometry(FConvex *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)this;
  if (this != (FConvex *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 143a615a0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FConvex::CopyGeometryWithScale(FConvex *this,TVector<double,3> *param_1)

{
  uchar uVar1;
  TImplicitObjectScaled<Chaos::FConvex,1> *this_00;
  TVector<double,3> *in_R8;
  
  this_00 = ::operator_new(0x78);
  if (this_00 == (TImplicitObjectScaled<Chaos::FConvex,1> *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    uVar1 = FImplicitObject::GetType((FImplicitObject *)this);
    FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this_00,2,uVar1);
    this_00->_padding_ = (longlong)&___7__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__6B_;
    (this_00->MObject).Reference = this;
    if (this != (FConvex *)0x0) {
      LOCK();
      *(int *)&this->_padding_ = (int)this->_padding_ + 1;
      UNLOCK();
      if ((int)this->_padding_ == 1) {
        LOCK();
        *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
        UNLOCK();
      }
    }
    TImplicitObjectScaled<Chaos::FConvex,1>::InitScaledImplicit(this_00,in_R8,0.0);
    *(TImplicitObjectScaled<Chaos::FConvex,1> **)param_1 = this_00;
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CreateStructureData @ 143a61650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FConvex::CreateStructureData
          (FConvex *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<Chaos::FStat_STAT_CreateConvexStructureData> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_38;
  
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_CreateConvexStructureData;
  if (StatPtr_STAT_CreateConvexStructureData ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_CreateConvexStructureData>)0x0) {
    pFVar6 = ::FName::FName(&local_res20,"STAT_CreateConvexStructureData");
    FVar7 = (FThreadSafeStaticStat<Chaos::FStat_STAT_CreateConvexStructureData>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateConvexStructureData,*pFVar6,
                       L"FConvex::CreateStructureData","STATGROUP_ChaosCollision","STATCAT_Advanced"
                       ,L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Convex.cpp"
                   ,0x14a);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_143a617b9;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_143a617b9:
  bVar5 = FConvexStructureData::SetPlaneVertices
                    (&this->StructureData,param_1,(this->Vertices).ArrayNum,param_2);
  if (((!bVar5) || ((this->StructureData).Data.Ptr == (void *)0x0)) && (1 < (byte)LogChaos._0_1_)) {
    ToStringFull(this,(FString *)&local_38);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    if (local_38.StatData.Pad != (uchar  [8])0x0) {
      FMemory::Free((void *)local_38.StatData.Pad);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar10 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// DeepCopyGeometry @ 143a61940

TRefCountPtr<Chaos::FImplicitObject> __thiscall Chaos::FConvex::DeepCopyGeometry(FConvex *this)

{
  FConvex *pFVar1;
  FImplicitObject *in_RDX;
  
  pFVar1 = ::operator_new(0xb0);
  if (pFVar1 == (FConvex *)0x0) {
    in_RDX->_padding_ = 0;
  }
  else {
    pFVar1 = FConvex(pFVar1,this);
    in_RDX->_padding_ = (longlong)pFVar1;
    if (pFVar1 != (FConvex *)0x0) {
      LOCK();
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
      UNLOCK();
      return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
    }
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// DeepCopyGeometryWithScale @ 143a619a0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FConvex::DeepCopyGeometryWithScale(FConvex *this,TVector<double,3> *param_1)

{
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar1;
  FConvex *this_00;
  FConvex *pFVar2;
  TVector<double,3> *in_R8;
  
  pTVar1 = ::operator_new(0x78);
  if (pTVar1 == (TImplicitObjectScaled<Chaos::FConvex,1> *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    this_00 = ::operator_new(0xb0);
    pFVar2 = (FConvex *)0x0;
    if (this_00 != (FConvex *)0x0) {
      pFVar2 = FConvex(this_00,this);
    }
    pTVar1 = TImplicitObjectScaled<Chaos::FConvex,1>::TImplicitObjectScaled<Chaos::FConvex,1>
                       (pTVar1,pFVar2,in_R8,0.0);
    *(TImplicitObjectScaled<Chaos::FConvex,1> **)param_1 = pTVar1;
    if (pTVar1 != (TImplicitObjectScaled<Chaos::FConvex,1> *)0x0) {
      LOCK();
      *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + 1;
      UNLOCK();
    }
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// FindClosestFaceAndVertices @ 143a66e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
Chaos::FConvex::FindClosestFaceAndVertices
          (FConvex *this,TVector<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  double *pdVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auStack_168 [32];
  double *local_148;
  FScriptContainerElement *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  uint local_118 [2];
  double local_110;
  double dStack_108;
  double local_100;
  int local_f8 [2];
  TVector<double,3> *local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_c8;
  ulonglong local_78;
  
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_78 = __security_cookie.value ^ (ulonglong)auStack_168;
  uVar13 = 0xffffffff;
  uVar16 = 0;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  local_f0 = param_1;
  if (0 < (this->Planes).ArrayNum) {
    lVar17 = 0;
    uVar13 = 0xffffffff;
    do {
      iVar10 = (this->Planes).ArrayNum;
      uVar9 = 0;
      if ((int)uVar16 < iVar10) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_148 = (double *)(longlong)(int)uVar16;
        local_140 = (FScriptContainerElement *)(longlong)iVar10;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          iVar10 = (*pcVar4)();
          return iVar10;
        }
      }
      pFVar1 = (this->Planes).AllocatorInstance.Data;
      dVar18 = (*(double *)&param_1->field_0x8 - (double)*(float *)(pFVar1 + lVar17 + 4)) *
               (double)*(float *)(pFVar1 + lVar17 + 0x10) +
               (*(double *)param_1 - (double)*(float *)(pFVar1 + lVar17)) *
               (double)*(float *)(pFVar1 + lVar17 + 0xc) +
               (*(double *)&param_1->field_0x10 - (double)*(float *)(pFVar1 + lVar17 + 8)) *
               (double)*(float *)(pFVar1 + lVar17 + 0x14);
      if (((double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar7,SUB84(dVar18,0) & uVar6) <
           param_3) && (local_118[0] = 0, uVar13 = uVar16, 0 < (this->Vertices).ArrayNum)) {
        uVar15 = 0;
        do {
          uVar9 = local_118[0];
          if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
            FVar12 = (ForElementType<FSetElementId>)&local_c8.Hash;
            if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar12 = local_c8.Hash.SecondaryData;
            }
            for (iVar10 = *(int *)((longlong)FVar12 + (local_c8.HashSize - 1 & uVar15) * 4);
                iVar10 != -1;
                iVar10 = *(int *)(local_c8.Elements._0_8_ + 4 + (longlong)iVar10 * 0xc)) {
              if (*(int *)(local_c8.Elements._0_8_ + (longlong)iVar10 * 0xc) == (int)uVar15)
              goto LAB_143a6728e;
            }
          }
          iVar10 = (this->Vertices).ArrayNum;
          pdVar14 = (double *)(longlong)(int)local_118[0];
          uVar11 = 0;
          if ((int)local_118[0] < iVar10) {
            uVar11 = ~local_118[0] >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (local_148 = pdVar14, local_140 = (FScriptContainerElement *)(longlong)iVar10,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar4 = (code *)swi(3);
            iVar10 = (*pcVar4)();
            return iVar10;
          }
          local_e8 = *(undefined8 *)(pFVar1 + lVar17);
          pFVar2 = (this->Vertices).AllocatorInstance.Data;
          local_dc = *(undefined8 *)(pFVar1 + lVar17 + 0xc);
          local_e0 = *(float *)(pFVar1 + lVar17 + 8);
          if ((double)(float)((uint)((*(float *)(pFVar2 + (longlong)pdVar14 * 0xc + 4) -
                                     (float)((ulonglong)local_e8 >> 0x20)) *
                                     (float)((ulonglong)local_dc >> 0x20) +
                                     (*(float *)(pFVar2 + (longlong)pdVar14 * 0xc) - (float)local_e8
                                     ) * (float)local_dc +
                                    (*(float *)(pFVar2 + (longlong)pdVar14 * 0xc + 8) - local_e0) *
                                    *(float *)(pFVar1 + lVar17 + 0x14)) & uVar5) < param_3) {
            iVar10 = (this->Vertices).ArrayNum;
            pdVar14 = (double *)(longlong)(int)uVar9;
            uVar11 = 0;
            if ((int)uVar9 < iVar10) {
              uVar11 = ~uVar9 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (local_148 = pdVar14, local_140 = (FScriptContainerElement *)(longlong)iVar10,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              iVar10 = (*pcVar4)();
              return iVar10;
            }
            pFVar2 = (this->Vertices).AllocatorInstance.Data;
            pFVar3 = (param_2->AllocatorInstance).Data;
            local_100 = (double)*(float *)(pFVar2 + (longlong)pdVar14 * 0xc + 8);
            dStack_108 = (double)*(float *)(pFVar2 + (longlong)pdVar14 * 0xc + 4);
            local_110 = (double)*(float *)(pFVar2 + (longlong)pdVar14 * 0xc);
            if ((pFVar3 <= (FScriptContainerElement *)&local_110) &&
               ((FScriptContainerElement *)&local_110 < pFVar3 + (longlong)param_2->ArrayMax * 0x18)
               ) {
              local_130 = (longlong)param_2->ArrayNum;
              local_128 = 0x18;
              local_148 = &local_110;
              local_140 = pFVar3;
              local_138 = (longlong)param_2->ArrayMax;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                iVar10 = (*pcVar4)();
                return iVar10;
              }
            }
            iVar10 = param_2->ArrayNum;
            if (iVar10 == param_2->ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar10 + 1;
            pFVar3 = (param_2->AllocatorInstance).Data;
            pFVar2 = pFVar3 + (longlong)iVar10 * 0x18;
            *(double *)pFVar2 = local_110;
            *(double *)(pFVar2 + 8) = dStack_108;
            *(double *)(pFVar3 + (longlong)iVar10 * 0x18 + 0x10) = local_100;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_c8,local_f8,(bool *)local_118);
          }
LAB_143a6728e:
          local_118[0] = uVar9 + 1;
          uVar15 = (ulonglong)local_118[0];
          param_1 = local_f0;
        } while ((int)local_118[0] < (this->Vertices).ArrayNum);
      }
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 0x18;
    } while ((int)uVar16 < (this->Planes).ArrayNum);
  }
  local_c8.HashSize = 0;
  if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Elements);
  return uVar13;
}

// FindMostOpposingFace @ 143a67370

int __thiscall
Chaos::FConvex::FindMostOpposingFace
          (FConvex *this,TVector<double,3> *param_1,TVector<double,3> *param_2,int param_3,
          double param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  uint uVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = 0;
  uVar9 = 0xffffffff;
  dVar3 = (double)*(float *)&(this->LocalBoundingBox).MMax.field_0x4 -
          (double)*(float *)&(this->LocalBoundingBox).MMin.field_0x4;
  dVar12 = (double)*(float *)&(this->LocalBoundingBox).MMax -
           (double)*(float *)&(this->LocalBoundingBox).MMin;
  dVar14 = (double)*(float *)&(this->LocalBoundingBox).MMax.field_0x8 -
           (double)*(float *)&(this->LocalBoundingBox).MMin.field_0x8;
  uVar15 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar16 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar16,uVar15) <= (double)CONCAT44(uVar13,uVar11)) {
    uVar15 = uVar11;
    uVar16 = uVar13;
  }
  uVar11 = SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar14 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar16,uVar15) <= (double)CONCAT44(uVar13,uVar11)) {
    uVar15 = uVar11;
    uVar16 = uVar13;
  }
  dVar3 = (double)CONCAT44(uVar16,uVar15) * __real_3f1a36e2e0000000;
  if (dVar3 <= param_4) {
    dVar3 = param_4;
  }
  if (0 < (this->Planes).ArrayNum) {
    lVar10 = 0;
    dVar12 = __real_7fefffffffffffff;
    uVar9 = 0xffffffff;
    do {
      uVar15 = 0;
      if ((int)uVar8 < (this->Planes).ArrayNum) {
        uVar15 = ~uVar8 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
      pFVar1 = (this->Planes).AllocatorInstance.Data;
      dVar14 = (*(double *)&param_1->field_0x8 - (double)*(float *)(pFVar1 + lVar10 + 4)) *
               (double)*(float *)(pFVar1 + lVar10 + 0x10) +
               (*(double *)param_1 - (double)*(float *)(pFVar1 + lVar10)) *
               (double)*(float *)(pFVar1 + lVar10 + 0xc) +
               (*(double *)&param_1->field_0x10 - (double)*(float *)(pFVar1 + lVar10 + 8)) *
               (double)*(float *)(pFVar1 + lVar10 + 0x14);
      if (((double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar5,SUB84(dVar14,0) & uVar4) <
           dVar3) &&
         (dVar14 = (double)*(float *)(pFVar1 + lVar10 + 0x10) * *(double *)&param_2->field_0x8 +
                   (double)*(float *)(pFVar1 + lVar10 + 0xc) * *(double *)param_2 +
                   (double)*(float *)(pFVar1 + lVar10 + 0x14) * *(double *)&param_2->field_0x10,
         dVar14 < dVar12)) {
        dVar12 = dVar14;
        uVar9 = uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((int)uVar8 < (this->Planes).ArrayNum);
  }
  return uVar9;
}

// FindMostOpposingFaceScaled @ 143a67560

int __thiscall
Chaos::FConvex::FindMostOpposingFaceScaled
          (FConvex *this,TVector<double,3> *param_1,TVector<double,3> *param_2,int param_3,
          double param_4,TVector<double,3> *param_5)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float local_e8;
  
  dVar4 = __real_3ff0000000000000;
  dVar14 = (double)*(float *)&(this->LocalBoundingBox).MMax.field_0x4 -
           (double)*(float *)&(this->LocalBoundingBox).MMin.field_0x4;
  dVar1 = *(double *)param_5;
  uVar18 = SUB84(dVar1,0);
  uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar15 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar14 = (double)*(float *)&(this->LocalBoundingBox).MMax -
           (double)*(float *)&(this->LocalBoundingBox).MMin;
  dVar11 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar13 = (double)*(float *)&(this->LocalBoundingBox).MMax.field_0x8 -
           (double)*(float *)&(this->LocalBoundingBox).MMin.field_0x8;
  dVar14 = *(double *)&param_5->field_0x8;
  if (dVar15 <= dVar11) {
    dVar15 = dVar11;
  }
  dVar11 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar15 <= dVar11) {
    dVar15 = dVar11;
  }
  if ((dVar1 <= dVar14) ||
     (dVar1 < *(double *)&param_5->field_0x10 || dVar1 == *(double *)&param_5->field_0x10)) {
    dVar1 = *(double *)&param_5->field_0x10;
    uVar18 = SUB84(dVar1,0);
    uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (dVar1 <= dVar14) {
      uVar18 = SUB84(dVar14,0);
      uVar19 = (undefined4)((ulonglong)dVar14 >> 0x20);
    }
  }
  dVar1 = (double)CONCAT44(uVar19,uVar18) * param_4;
  uVar8 = 0;
  iVar7 = (this->Planes).ArrayNum;
  uVar10 = 0xffffffff;
  if (dVar1 <= dVar15 * __real_3f1a36e2e0000000) {
    dVar1 = dVar15 * __real_3f1a36e2e0000000;
  }
  if (0 < iVar7) {
    lVar9 = 0;
    dVar14 = __real_7fefffffffffffff;
    uVar10 = 0xffffffff;
    do {
      dVar15 = *(double *)param_5;
      dVar11 = *(double *)&param_5->field_0x10;
      dVar13 = *(double *)&param_5->field_0x8;
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      pFVar2 = (this->Planes).AllocatorInstance.Data;
      fVar16 = (float)((ulonglong)*(undefined8 *)(pFVar2 + lVar9 + 0xc) >> 0x20) *
               (float)(dVar4 / dVar13);
      fVar17 = *(float *)(pFVar2 + lVar9 + 0x14) * (float)(dVar4 / dVar11);
      local_e8 = (float)*(undefined8 *)(pFVar2 + lVar9 + 0xc) * (float)(dVar4 / dVar15);
      fVar12 = local_e8 * local_e8 + fVar16 * fVar16 + fVar17 * fVar17;
      if (fVar12 <= __real_322bcc77) {
        fVar12 = *(float *)(pFVar2 + lVar9 + 0x14);
        fVar16 = (float)((ulonglong)*(undefined8 *)(pFVar2 + lVar9 + 0xc) >> 0x20);
        local_e8 = (float)*(undefined8 *)(pFVar2 + lVar9 + 0xc);
      }
      else {
        fVar12 = __real_3f800000 / SQRT(fVar12);
        local_e8 = local_e8 * fVar12;
        fVar16 = fVar12 * fVar16;
        fVar12 = fVar12 * fVar17;
      }
      dVar15 = (*(double *)&param_1->field_0x8 -
               (double)((float)((ulonglong)*(undefined8 *)(pFVar2 + lVar9) >> 0x20) * (float)dVar13)
               ) * (double)fVar16 +
               (*(double *)param_1 -
               (double)((float)dVar15 * (float)*(undefined8 *)(pFVar2 + lVar9))) * (double)local_e8
               + (*(double *)&param_1->field_0x10 -
                 (double)(*(float *)(pFVar2 + lVar9 + 8) * (float)dVar11)) * (double)fVar12;
      if (((double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < dVar1)
         && (dVar15 = (double)fVar16 * *(double *)&param_2->field_0x8 +
                      (double)local_e8 * *(double *)param_2 +
                      (double)fVar12 * *(double *)&param_2->field_0x10, dVar15 < dVar14)) {
        dVar14 = dVar15;
        uVar10 = uVar8;
      }
      iVar7 = (this->Planes).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x18;
    } while ((int)uVar8 < iVar7);
  }
  return uVar10;
}

// FindVertexPlanes @ 143a67900

int __thiscall Chaos::FConvex::FindVertexPlanes(FConvex *this,int param_1,int *param_2,int param_3)

{
  EIndexType EVar1;
  int local_res8 [8];
  TConvexHalfEdgeStructureData<int> *local_28;
  int *local_20;
  int local_18;
  int *local_10;
  
  local_28 = (this->StructureData).Data.DataL;
  if (local_28 != (TConvexHalfEdgeStructureData<int> *)0x0) {
    EVar1 = (this->StructureData).IndexType;
    local_20 = param_2;
    local_18 = param_3;
    if (EVar1 == Small) {
      local_res8[0] = 0;
      if (0 < param_3) {
        local_10 = local_res8;
        TConvexHalfEdgeStructureData<unsigned_char>::
        VisitVertexHalfEdges<_Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FindVertexPlanes_::__l5::<lambda_1>_>
                  ((TConvexHalfEdgeStructureData<unsigned_char> *)local_28,param_1,
                   (<lambda_1> *)&local_28);
        return local_res8[0];
      }
    }
    else if (EVar1 == Medium) {
      local_res8[0] = 0;
      if (0 < param_3) {
        local_10 = local_res8;
        TConvexHalfEdgeStructureData<short>::
        VisitVertexHalfEdges<_Chaos::TConvexHalfEdgeStructureData<short>::FindVertexPlanes_::__l5::<lambda_1>_>
                  ((TConvexHalfEdgeStructureData<short> *)local_28,param_1,(<lambda_1> *)&local_28);
        return local_res8[0];
      }
    }
    else if ((EVar1 == Large) && (local_res8[0] = 0, 0 < param_3)) {
      local_10 = local_res8;
      TConvexHalfEdgeStructureData<int>::
      VisitVertexHalfEdges<_Chaos::TConvexHalfEdgeStructureData<int>::FindVertexPlanes_::__l5::<lambda_1>_>
                (local_28,param_1,(<lambda_1> *)&local_28);
      return local_res8[0];
    }
  }
  return 0;
}

// GetClosestEdge @ 143a67e70

TVector<double,3> * __thiscall
Chaos::FConvex::GetClosestEdge
          (FConvex *this,TVector<double,3> *__return_storage_ptr__,int param_1,
          TVector<double,3> *param_2,TVector<double,3> *param_3,TVector<double,3> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  EIndexType EVar5;
  float fVar6;
  TConvexHalfEdgeStructureData<int> *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  FPlaneData *pFVar14;
  FPlaneData *pFVar15;
  FPlaneData *pFVar16;
  TVector<float,3> *pTVar17;
  FHalfEdgeData *pFVar18;
  FHalfEdgeData *pFVar19;
  FHalfEdgeData *pFVar20;
  TVector<double,3> *pTVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_res20;
  float local_108;
  float local_104;
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  
  pTVar7 = (this->StructureData).Data.DataL;
  local_res20 = __real_7f7fffff;
  dVar1 = *(double *)param_2;
  dVar2 = *(double *)&param_2->field_0x8;
  fVar31 = 0.0;
  local_108 = 0.0;
  local_104 = 0.0;
  dVar3 = *(double *)&param_2->field_0x10;
  fVar27 = 0.0;
  fVar24 = 0.0;
  if (pTVar7 != (TConvexHalfEdgeStructureData<int> *)0x0) {
    EVar5 = (this->StructureData).IndexType;
    if (EVar5 == Small) {
      pFVar16 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                          ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar7,param_1);
      uVar23 = (uint)pFVar16->NumHalfEdges;
    }
    else if (EVar5 == Medium) {
      pFVar15 = TConvexHalfEdgeStructureData<short>::GetPlane
                          ((TConvexHalfEdgeStructureData<short> *)pTVar7,param_1);
      uVar23 = (uint)pFVar15->NumHalfEdges;
    }
    else if (EVar5 == Large) {
      pFVar14 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar7,param_1);
      uVar23 = pFVar14->NumHalfEdges;
    }
    else {
      uVar23 = 0;
    }
    if (0 < (int)uVar23) {
      iVar11 = GetPlaneVertex(this,param_1,uVar23 - 1);
      pTVar17 = GetVertex(this,iVar11);
      iVar11 = 0;
      local_f8 = *(undefined8 *)pTVar17;
      local_f0 = *(float *)&pTVar17->field_0x8;
      do {
        pTVar7 = (this->StructureData).Data.DataL;
        if (pTVar7 == (TConvexHalfEdgeStructureData<int> *)0x0) {
          uVar22 = 0xffffffff;
LAB_143a6808a:
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            pTVar21 = (TVector<double,3> *)(*pcVar9)();
            return pTVar21;
          }
        }
        else {
          EVar5 = (this->StructureData).IndexType;
          if (EVar5 == Small) {
            iVar12 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                               ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar7,param_1,iVar11
                               );
            pFVar20 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                                ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar7,iVar12);
            uVar22 = (uint)pFVar20->VertexIndex;
          }
          else if (EVar5 == Medium) {
            iVar12 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                               ((TConvexHalfEdgeStructureData<short> *)pTVar7,param_1,iVar11);
            pFVar19 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                                ((TConvexHalfEdgeStructureData<short> *)pTVar7,iVar12);
            uVar22 = (uint)pFVar19->VertexIndex;
          }
          else if (EVar5 == Large) {
            iVar12 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(pTVar7,param_1,iVar11);
            pFVar18 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar7,iVar12);
            uVar22 = pFVar18->VertexIndex;
          }
          else {
            uVar22 = 0xffffffff;
          }
          uVar13 = 0;
          if ((int)uVar22 < (this->Vertices).ArrayNum) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if (uVar13 == 0) goto LAB_143a6808a;
        }
        pFVar8 = (this->Vertices).AllocatorInstance.Data;
        uVar4 = *(undefined8 *)(pFVar8 + (longlong)(int)uVar22 * 0xc);
        fVar30 = (float)((ulonglong)uVar4 >> 0x20);
        fVar6 = *(float *)(pFVar8 + (longlong)(int)uVar22 * 0xc + 8);
        local_e8 = (float)uVar4;
        fVar25 = local_e8 - (float)local_f8;
        fVar26 = fVar6 - local_f0;
        fVar24 = fVar30 - local_f8._4_4_;
        fVar27 = (float)((uint)((((float)local_f8 - (float)dVar1) * fVar25 +
                                 (local_f8._4_4_ - (float)dVar2) * fVar24 +
                                (local_f0 - (float)dVar3) * fVar26) /
                               (fVar25 * fVar25 + fVar24 * fVar24 + fVar26 * fVar26)) ^
                        __xmm_80000000800000008000000080000000);
        if (__real_3f800000 <= fVar27) {
          fVar27 = __real_3f800000;
        }
        if (fVar27 <= 0.0) {
          fVar27 = 0.0;
        }
        fVar29 = fVar27 * fVar26 + local_f0;
        fVar26 = fVar27 * fVar24 + local_f8._4_4_;
        fVar28 = fVar27 * fVar25 + (float)local_f8;
        fVar24 = fVar29 - (float)dVar3;
        fVar27 = fVar26 - (float)dVar2;
        fVar25 = fVar28 - (float)dVar1;
        fVar27 = fVar25 * fVar25 + fVar27 * fVar27 + fVar24 * fVar24;
        if (fVar27 < local_res20) {
          *(double *)param_3 = (double)(float)local_f8;
          *(double *)&param_3->field_0x8 = (double)local_f8._4_4_;
          *(double *)&param_3->field_0x10 = (double)local_f0;
          *(double *)param_4 = (double)local_e8;
          *(double *)&param_4->field_0x8 = (double)fVar30;
          *(double *)&param_4->field_0x10 = (double)fVar6;
          fVar31 = fVar28;
          local_res20 = fVar27;
          local_108 = fVar26;
          local_104 = fVar29;
        }
        iVar11 = iVar11 + 1;
        fVar27 = local_108;
        fVar24 = local_104;
        local_f8 = uVar4;
        local_f0 = fVar6;
      } while (iVar11 < (int)uVar23);
    }
  }
  *(double *)__return_storage_ptr__ = (double)fVar31;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar24;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar27;
  return __return_storage_ptr__;
}

// GetClosestEdgeVertices @ 143a68340

bool __thiscall
Chaos::FConvex::GetClosestEdgeVertices
          (FConvex *this,int param_1,TVector<double,3> *param_2,int *param_3,int *param_4)

{
  EIndexType EVar1;
  TConvexHalfEdgeStructureData<int> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FPlaneData *pFVar11;
  FPlaneData *pFVar12;
  FPlaneData *pFVar13;
  TVector<float,3> *pTVar14;
  FHalfEdgeData *pFVar15;
  FHalfEdgeData *pFVar16;
  FHalfEdgeData *pFVar17;
  longlong lVar18;
  TVector<double> *pTVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double> local_78;
  double local_50;
  
  *param_3 = -1;
  dVar5 = __real_47efffffe0000000;
  *param_4 = -1;
  pTVar2 = (this->StructureData).Data.DataL;
  if (pTVar2 != (TConvexHalfEdgeStructureData<int> *)0x0) {
    EVar1 = (this->StructureData).IndexType;
    if (EVar1 == Small) {
      pFVar13 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                          ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar2,param_1);
      uVar22 = (uint)pFVar13->NumHalfEdges;
      goto LAB_143a683cc;
    }
    if (EVar1 == Medium) {
      pFVar12 = TConvexHalfEdgeStructureData<short>::GetPlane
                          ((TConvexHalfEdgeStructureData<short> *)pTVar2,param_1);
      uVar22 = (uint)pFVar12->NumHalfEdges;
      goto LAB_143a683cc;
    }
    if (EVar1 == Large) {
      pFVar11 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar2,param_1);
      uVar22 = pFVar11->NumHalfEdges;
      goto LAB_143a683cc;
    }
  }
  uVar22 = 0;
LAB_143a683cc:
  if ((int)uVar22 < 1) {
    bVar6 = false;
  }
  else {
    uVar8 = GetPlaneVertex(this,param_1,uVar22 - 1);
    pTVar14 = GetVertex(this,uVar8);
    iVar21 = 0;
    local_90._s_0.Z = (double)*(float *)&pTVar14->field_0x8;
    local_90._s_0.Y = (double)*(float *)&pTVar14->field_0x4;
    local_90._s_0.X = (double)*(float *)pTVar14;
    do {
      pTVar2 = (this->StructureData).Data.DataL;
      if (pTVar2 == (TConvexHalfEdgeStructureData<int> *)0x0) {
        uVar20 = 0xffffffff;
LAB_143a684cd:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      else {
        EVar1 = (this->StructureData).IndexType;
        if (EVar1 == Small) {
          iVar9 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                            ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar2,param_1,iVar21);
          pFVar17 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar2,iVar9);
          uVar20 = (uint)pFVar17->VertexIndex;
        }
        else if (EVar1 == Medium) {
          iVar9 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                            ((TConvexHalfEdgeStructureData<short> *)pTVar2,param_1,iVar21);
          pFVar16 = TConvexHalfEdgeStructureData<short>::GetHalfEdge
                              ((TConvexHalfEdgeStructureData<short> *)pTVar2,iVar9);
          uVar20 = (uint)pFVar16->VertexIndex;
        }
        else if (EVar1 == Large) {
          iVar9 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(pTVar2,param_1,iVar21);
          pFVar15 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar2,iVar9);
          uVar20 = pFVar15->VertexIndex;
        }
        else {
          uVar20 = 0xffffffff;
        }
        uVar10 = 0;
        if ((int)uVar20 < (this->Vertices).ArrayNum) {
          uVar10 = ~uVar20 >> 0x1f;
        }
        if (uVar10 == 0) goto LAB_143a684cd;
      }
      lVar18 = (longlong)(int)uVar20;
      pFVar3 = (this->Vertices).AllocatorInstance.Data;
      local_a8._s_0.Z = (double)*(float *)(pFVar3 + lVar18 * 0xc + 8);
      local_a8._s_0.Y = (double)*(float *)(pFVar3 + lVar18 * 0xc + 4);
      local_a8._s_0.X = (double)*(float *)(pFVar3 + lVar18 * 0xc);
      pTVar19 = FMath::ClosestPointOnLine<double>
                          (&local_78,(TVector<double> *)&local_90._s_0,
                           (TVector<double> *)&local_a8._s_0,(TVector<double> *)param_2);
      local_50 = (pTVar19->field0_0x0)._s_0.Z;
      dVar24 = (pTVar19->field0_0x0)._s_0.X - *(double *)param_2;
      dVar25 = (pTVar19->field0_0x0)._s_0.Y - *(double *)&param_2->field_0x8;
      dVar23 = local_50 - *(double *)&param_2->field_0x10;
      dVar25 = dVar24 * dVar24 + dVar25 * dVar25 + dVar23 * dVar23;
      if (dVar25 < dVar5) {
        *param_3 = uVar8;
        *param_4 = uVar20;
        dVar5 = dVar25;
      }
      iVar21 = iVar21 + 1;
      local_90._s_0.Z = local_a8._s_0.Z;
      local_90._s_0.X = local_a8._s_0.X;
      local_90._s_0.Y = local_a8._s_0.Y;
      uVar8 = uVar20;
    } while (iVar21 < (int)uVar22);
    bVar6 = true;
  }
  return bVar6;
}

// GetMostOpposingPlane @ 143a6bcb0

int __thiscall Chaos::FConvex::GetMostOpposingPlane(FConvex *this,TVector<double,3> *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined4 uVar12;
  
  uVar7 = 0;
  uVar10 = (undefined4)__real_7fefffffffffffff;
  uVar12 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar5 = 0xffffffff;
  if (0 < (this->Planes).ArrayNum) {
    lVar8 = 0;
    uVar9 = 0xffffffff;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Planes).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      pFVar1 = (this->Planes).AllocatorInstance.Data;
      dVar11 = (double)*(float *)(pFVar1 + lVar8 + 0x10) * *(double *)&param_1->field_0x8 +
               (double)*(float *)(pFVar1 + lVar8 + 0xc) * *(double *)param_1 +
               (double)*(float *)(pFVar1 + lVar8 + 0x14) * *(double *)&param_1->field_0x10;
      bVar4 = (double)CONCAT44(uVar12,uVar10) == dVar11;
      bVar2 = (double)CONCAT44(uVar12,uVar10) < dVar11;
      if ((double)CONCAT44(uVar12,uVar10) <= dVar11) {
        dVar11 = (double)CONCAT44(uVar12,uVar10);
      }
      uVar5 = uVar7;
      if (bVar2 || bVar4) {
        uVar5 = uVar9;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x18;
      uVar10 = SUB84(dVar11,0);
      uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
      uVar9 = uVar5;
    } while ((int)uVar7 < (this->Planes).ArrayNum);
  }
  return uVar5;
}

// GetMostOpposingPlaneScaled @ 143a6bdc0

int __thiscall
Chaos::FConvex::GetMostOpposingPlaneScaled
          (FConvex *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  double dVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fStack_84;
  
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  uVar11 = 0;
  uVar16 = (undefined4)__real_7fefffffffffffff;
  uVar18 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar8 = 0xffffffff;
  if (0 < (this->Planes).ArrayNum) {
    lVar12 = 0;
    uVar21 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar13 = 0xffffffff;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    do {
      uVar8 = 0;
      if ((int)uVar11 < (this->Planes).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar21 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
         uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
         uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y, bVar7)) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
      pFVar1 = (this->Planes).AllocatorInstance.Data;
      fVar23 = *(float *)(pFVar1 + lVar12 + 0x14) / (float)*(double *)&param_2->field_0x10;
      fVar19 = *(float *)(pFVar1 + lVar12 + 0xc) / (float)*(double *)param_2;
      fVar22 = *(float *)(pFVar1 + lVar12 + 0x10) / (float)*(double *)&param_2->field_0x8;
      fVar15 = fVar19 * fVar19 + fVar22 * fVar22 + fVar23 * fVar23;
      fVar20 = fVar19;
      fVar14 = fVar23;
      fStack_84 = fVar22;
      if ((fVar15 != fVar6) &&
         (fVar20 = (float)uVar21, fVar14 = (float)uVar10, fStack_84 = (float)uVar4, fVar5 <= fVar15)
         ) {
        fVar15 = __real_3f800000 / SQRT(fVar15);
        fVar20 = fVar15 * fVar19;
        fVar14 = fVar15 * fVar23;
        fStack_84 = fVar15 * fVar22;
      }
      dVar17 = (double)fVar20 * *(double *)param_1 +
               (double)fStack_84 * *(double *)&param_1->field_0x8 +
               (double)fVar14 * *(double *)&param_1->field_0x10;
      bVar7 = (double)CONCAT44(uVar18,uVar16) == dVar17;
      bVar2 = (double)CONCAT44(uVar18,uVar16) < dVar17;
      if ((double)CONCAT44(uVar18,uVar16) <= dVar17) {
        dVar17 = (double)CONCAT44(uVar18,uVar16);
      }
      uVar8 = uVar11;
      if (bVar2 || bVar7) {
        uVar8 = uVar13;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x18;
      uVar16 = SUB84(dVar17,0);
      uVar18 = (undefined4)((ulonglong)dVar17 >> 0x20);
      uVar13 = uVar8;
    } while ((int)uVar11 < (this->Planes).ArrayNum);
  }
  return uVar8;
}

// GetVertexPlanes3 @ 143a70760

int __thiscall
Chaos::FConvex::GetVertexPlanes3(FConvex *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  EIndexType EVar1;
  TConvexHalfEdgeStructureData<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FConvexStructureData *pFVar8;
  longlong lVar9;
  
  pFVar8 = &this->StructureData;
  if ((pFVar8->Data).Ptr == (void *)0x0) {
    return 0;
  }
  EVar1 = (this->StructureData).IndexType;
  lVar9 = (longlong)param_1;
  if (EVar1 == Small) {
    pTVar2 = (pFVar8->Data).DataL;
    uVar6 = 0;
    if (param_1 < (pTVar2->VertexPlanes).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    pFVar7 = (pTVar2->VertexPlanes).AllocatorInstance.Data;
    *param_2 = (uint)(byte)pFVar7[lVar9 * 4];
    *param_3 = (uint)(byte)pFVar7[lVar9 * 4 + 1];
    *param_4 = (uint)(byte)pFVar7[lVar9 * 4 + 2];
    uVar6 = (uint)(byte)pFVar7[lVar9 * 4 + 3];
  }
  else if (EVar1 == Medium) {
    pTVar2 = (pFVar8->Data).DataL;
    uVar6 = 0;
    if (param_1 < (pTVar2->VertexPlanes).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    pFVar7 = (pTVar2->VertexPlanes).AllocatorInstance.Data;
    *param_2 = (int)*(short *)(pFVar7 + lVar9 * 8);
    *param_3 = (int)*(short *)(pFVar7 + lVar9 * 8 + 2);
    *param_4 = (int)*(short *)(pFVar7 + lVar9 * 8 + 4);
    uVar6 = (uint)*(short *)(pFVar7 + lVar9 * 8 + 6);
  }
  else if (EVar1 == Large) {
    pTVar2 = (pFVar8->Data).DataL;
    uVar6 = 0;
    if (param_1 < (pTVar2->VertexPlanes).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    pFVar7 = (pTVar2->VertexPlanes).AllocatorInstance.Data + lVar9 * 0x10;
    *param_2 = *(int *)pFVar7;
    *param_3 = *(int *)(pFVar7 + 4);
    *param_4 = *(int *)(pFVar7 + 8);
    uVar6 = *(uint *)(pFVar7 + 0xc);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

// MovePlanesAndRebuild @ 143a856c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Chaos::FConvex::MovePlanesAndRebuild(FConvex *this,float param_1)

{
  TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
  ForAnyElementType FVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  FConvex *pFVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStackY_278 [32];
  int local_228;
  ForAnyElementType local_220;
  int local_218;
  int iStack_214;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_210;
  longlong local_200;
  undefined8 local_1f8;
  float local_1f0;
  float local_1e8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_1e0;
  uint local_1d0;
  float local_1cc;
  float local_1c8;
  uint local_1c4;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  float fStack_19c;
  FConvex *local_198;
  undefined1 local_188 [16];
  float local_178;
  bool local_174;
  bool local_173;
  bool local_172;
  bool local_171;
  uchar local_170;
  uchar local_16f;
  TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> local_168;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_158;
  TAABB<float,3> local_148;
  FStructureData local_130;
  EIndexType local_128;
  float local_120;
  TVector<float,3> local_11c;
  TVector<double,3> local_110;
  TRotation<double,3> local_f8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  uVar27 = (this->Planes).ArrayNum;
  local_220.Data = (FScriptContainerElement *)0x0;
  local_218 = 0;
  iStack_214 = 0;
  local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.ArrayNum = 0;
  local_210.ArrayMax = 0;
  local_198 = this;
  if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
  }
  if (0 < (int)uVar27) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar27,&local_220,0,&iStack_214);
  }
  uVar27 = 0;
  if (0 < (this->Planes).ArrayNum) {
    lVar25 = 0;
    do {
      uVar28 = ~uVar27 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar27 < (this->Planes).ArrayNum) {
        uVar29 = uVar28;
      }
      if ((uVar29 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar11 = (this->Planes).AllocatorInstance.Data;
      uVar29 = 0;
      if ((int)uVar27 < (this->Planes).ArrayNum) {
        uVar29 = uVar28;
      }
      if ((uVar29 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar12 = (this->Planes).AllocatorInstance.Data;
      uVar29 = 0;
      if ((int)uVar27 < (this->Planes).ArrayNum) {
        uVar29 = uVar28;
      }
      if ((uVar29 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar13 = (this->Planes).AllocatorInstance.Data;
      local_1a8 = *(undefined8 *)(pFVar11 + lVar25 + 0xc);
      uStack_1a0 = *(undefined4 *)(pFVar11 + lVar25 + 0x14);
      fStack_19c = (param_1 * *(float *)(pFVar13 + lVar25 + 0x10) + *(float *)(pFVar12 + lVar25 + 4)
                   ) * *(float *)(pFVar11 + lVar25 + 0x10) +
                   (param_1 * *(float *)(pFVar13 + lVar25 + 0xc) + *(float *)(pFVar12 + lVar25)) *
                   *(float *)(pFVar11 + lVar25 + 0xc) +
                   (param_1 * *(float *)(pFVar13 + lVar25 + 0x14) + *(float *)(pFVar12 + lVar25 + 8)
                   ) * *(float *)(pFVar11 + lVar25 + 0x14);
      if (((local_220.Data <= (FScriptContainerElement *)&local_1a8) &&
          ((FScriptContainerElement *)&local_1a8 < local_220.Data + (longlong)iStack_214 * 0x10)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar20)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if (local_218 == iStack_214) {
        local_218 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1010,&local_220,&iStack_214);
      }
      lVar23 = (longlong)local_218;
      uVar27 = uVar27 + 1;
      auVar15._8_4_ = uStack_1a0;
      auVar15._0_8_ = local_1a8;
      auVar15._12_4_ = fStack_19c;
      lVar25 = lVar25 + 0x18;
      local_218 = local_218 + 1;
      *(undefined1 (*) [16])(local_220.Data + lVar23 * 0x10) = auVar15;
    } while ((int)uVar27 < (this->Planes).ArrayNum);
  }
  uVar27 = 0;
  if (0 < local_218) {
    local_200 = 0;
    uVar31 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    fVar32 = __real_358637be;
    uVar30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    do {
      lVar25 = local_200;
      if ((int)(uVar27 + 1) < local_218) {
        local_1b8 = local_200 + 0x10;
        uVar29 = uVar27 + 1;
        do {
          local_1c4 = uVar29 + 1;
          lVar23 = local_1b8 + 0x10;
          lVar26 = lVar23;
          if ((int)local_1c4 < local_218) {
            local_1d0 = ~uVar27 >> 0x1f;
            local_1c0 = local_1b8;
            local_1b8 = lVar23;
            uVar28 = local_1c4;
            do {
              uVar24 = 0;
              if ((int)uVar28 < local_218) {
                uVar24 = ~uVar28 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , uVar31 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_,
                 uVar30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, bVar20)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              FVar16.Data = local_220.Data;
              uVar24 = 0;
              if ((int)uVar29 < local_218) {
                uVar24 = ~uVar29 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , uVar31 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_,
                 uVar30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, bVar20)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              FVar17.Data = local_220.Data;
              uVar24 = 0;
              if ((int)uVar27 < local_218) {
                uVar24 = local_1d0;
              }
              if ((uVar24 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , uVar31 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_,
                 uVar30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, bVar20)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              fVar3 = *(float *)(FVar16.Data + lVar23 + 4);
              local_1cc = *(float *)(FVar17.Data + local_1c0 + 4);
              fVar4 = *(float *)(FVar17.Data + local_1c0 + 8);
              fVar5 = *(float *)(local_220.Data + local_200 + 8);
              fVar6 = *(float *)(local_220.Data + local_200 + 4);
              fVar7 = *(float *)(local_220.Data + local_200);
              fVar8 = *(float *)(FVar17.Data + local_1c0);
              local_1e8 = *(float *)(FVar16.Data + lVar23 + 8);
              fVar34 = fVar4 * fVar6 - local_1cc * fVar5;
              fVar35 = fVar8 * fVar5 - fVar7 * fVar4;
              fVar36 = fVar7 * local_1cc - fVar8 * fVar6;
              local_1c8 = *(float *)(FVar16.Data + lVar23);
              fVar33 = fVar3 * fVar35 + local_1c8 * fVar34 + local_1e8 * fVar36;
              local_1f8 = uVar31;
              local_1f0 = (float)uVar30;
              if (fVar32 <= fVar33 * fVar33) {
                fVar32 = *(float *)(FVar17.Data + local_1c0 + 0xc);
                uVar24 = 0;
                fVar9 = *(float *)(local_220.Data + local_200 + 0xc);
                fVar10 = *(float *)(FVar16.Data + lVar23 + 0xc);
                fVar33 = __real_3f800000 / fVar33;
                local_1f0 = ((fVar6 * local_1c8 - fVar7 * fVar3) * fVar32 +
                             (fVar8 * fVar3 - local_1cc * local_1c8) * fVar9 + fVar36 * fVar10) *
                            fVar33;
                local_1f8 = CONCAT44(((fVar4 * local_1c8 - fVar8 * local_1e8) * fVar9 +
                                      (fVar7 * local_1e8 - fVar5 * local_1c8) * fVar32 +
                                     fVar35 * fVar10) * fVar33,
                                     ((local_1cc * local_1e8 - fVar4 * fVar3) * fVar9 +
                                      (fVar5 * fVar3 - fVar6 * local_1e8) * fVar32 + fVar34 * fVar10
                                     ) * fVar33);
                if (0 < local_210.ArrayNum) {
                  lVar25 = 0;
                  do {
                    uVar21 = 0;
                    if ((int)uVar24 < local_210.ArrayNum) {
                      uVar21 = ~uVar24 >> 0x1f;
                    }
                    if ((uVar21 == 0) &&
                       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar20)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    if (((float)local_1f8 - *(float *)(local_210.AllocatorInstance.Data + lVar25)) *
                        ((float)local_1f8 - *(float *)(local_210.AllocatorInstance.Data + lVar25)) +
                        (local_1f8._4_4_ - *(float *)(local_210.AllocatorInstance.Data + lVar25 + 4)
                        ) * (local_1f8._4_4_ -
                            *(float *)(local_210.AllocatorInstance.Data + lVar25 + 4)) +
                        (local_1f0 - *(float *)(local_210.AllocatorInstance.Data + lVar25 + 8)) *
                        (local_1f0 - *(float *)(local_210.AllocatorInstance.Data + lVar25 + 8)) <
                        __real_38d1b717) {
                      uVar31 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                      fVar32 = __real_358637be;
                      uVar30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                      if (uVar24 != 0xffffffff) goto LAB_143a85edc;
                      break;
                    }
                    uVar24 = uVar24 + 1;
                    lVar25 = lVar25 + 0xc;
                  } while ((int)uVar24 < local_210.ArrayNum);
                }
                if (((local_210.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1f8) &&
                    ((FScriptContainerElement *)&local_1f8 <
                     local_210.AllocatorInstance.Data + (longlong)local_210.ArrayMax * 0xc)) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar20)) {
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                if (local_210.ArrayNum == local_210.ArrayMax) {
                  local_210.ArrayNum =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,&local_210.AllocatorInstance,&local_210.ArrayMax);
                }
                lVar25 = (longlong)local_210.ArrayNum;
                local_210.ArrayNum = local_210.ArrayNum + 1;
                *(undefined8 *)(local_210.AllocatorInstance.Data + lVar25 * 0xc) = local_1f8;
                *(float *)(local_210.AllocatorInstance.Data + lVar25 * 0xc + 8) = local_1f0;
                uVar31 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                fVar32 = __real_358637be;
                uVar30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              }
LAB_143a85edc:
              uVar28 = uVar28 + 1;
              lVar23 = lVar23 + 0x10;
              lVar25 = local_200;
              lVar26 = local_1b8;
            } while ((int)uVar28 < local_218);
          }
          local_1b8 = lVar26;
          uVar29 = local_1c4;
          local_1c0 = local_1b8;
        } while ((int)local_1c4 < local_218);
      }
      local_200 = lVar25 + 0x10;
      uVar27 = uVar27 + 1;
    } while ((int)uVar27 < local_218);
  }
  fVar3 = __real_3f800000;
  fVar32 = __real_3c23d70a;
  uVar27 = 0;
  local_228 = local_210.ArrayNum;
  if (0 < local_210.ArrayNum) {
    local_200 = 0;
    lVar25 = 0;
    iVar22 = local_210.ArrayNum;
    do {
      uVar29 = 0;
      lVar23 = 0;
      if (0 < local_218) {
        lVar26 = 0;
        local_1b8 = (longlong)local_218;
        do {
          uVar28 = 0;
          if ((int)uVar29 < local_218) {
            uVar28 = ~uVar29 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          FVar16.Data = local_220.Data;
          uVar28 = 0;
          if ((int)uVar27 < local_210.ArrayNum) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          lVar18 = local_200;
          if (fVar32 < (*(float *)(local_210.AllocatorInstance.Data + lVar25 + 4) *
                        *(float *)(FVar16.Data + lVar26 + 4) +
                        *(float *)(local_210.AllocatorInstance.Data + lVar25) *
                        *(float *)(FVar16.Data + lVar26) +
                       *(float *)(local_210.AllocatorInstance.Data + lVar25 + 8) *
                       *(float *)(FVar16.Data + lVar26 + 8)) -
                       *(float *)(FVar16.Data + lVar26 + 0xc)) {
            uVar29 = 0;
            if ((int)uVar27 < local_210.ArrayNum) {
              uVar29 = ~uVar27 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            iVar22 = (local_210.ArrayNum - uVar27) + -1;
            if (1 < iVar22) {
              iVar22 = 1;
            }
            if (iVar22 != 0) {
              memmove(local_210.AllocatorInstance.Data + lVar25,
                      local_210.AllocatorInstance.Data +
                      (longlong)(local_210.ArrayNum - iVar22) * 0xc,(longlong)iVar22 * 0xc);
            }
            local_210.ArrayNum = local_210.ArrayNum + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,&local_210.AllocatorInstance,local_210.ArrayNum,&local_210.ArrayMax);
            uVar27 = uVar27 - 1;
            local_200 = lVar18 + -1;
            lVar25 = lVar25 + -0xc;
            local_228 = local_228 + -1;
            iVar22 = local_228;
            break;
          }
          uVar29 = uVar29 + 1;
          lVar23 = lVar23 + 1;
          lVar26 = lVar26 + 0x10;
          iVar22 = local_228;
        } while (lVar23 < local_1b8);
      }
      local_200 = local_200 + 1;
      uVar27 = uVar27 + 1;
      lVar25 = lVar25 + 0xc;
    } while ((int)uVar27 < iVar22);
  }
  FImplicitObject::FImplicitObject((FImplicitObject *)local_188,3,'\b');
  local_148.MMin._0_8_ = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
  local_148.MMin._8_4_ = SUB84(_UNK_150a9e6b8,0);
  local_148.MMax._0_4_ = SUB84((ulonglong)_UNK_150a9e6b8 >> 0x20,0);
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_188._0_8_ = &___7FConvex_Chaos__6B_;
  local_f8._16_8_ = 0;
  local_f8._24_8_ = 0;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_148.MMax._4_4_ = 0xff7fffff;
  local_148.MMax._8_4_ = 0xff7fffff;
  local_130.Ptr = (void *)0x0;
  local_128 = None;
  local_11c._0_8_ = 0;
  local_11c._8_4_ = 0;
  if (local_210.ArrayNum != 0) {
    local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.ArrayNum = 0;
    local_1e0.ArrayMax = 0;
    FConvexBuilder::Build(&local_210,&local_168,&local_1e0,&local_158,&local_148,Default);
    CalculateVolumeAndCenterOfMass<float,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
              (&local_158,&local_1e0,&local_120,&local_11c);
    FConvexBuilder::MergeFaces(&local_168,&local_1e0,&local_158,fVar3);
    FConvexBuilder::MergeColinearEdges(&local_168,&local_1e0,&local_158,__real_358637bd);
    CreateStructureData((FConvex *)local_188,&local_1e0,false);
    ComputeUnitMassInertiaTensorAndRotationOfMass((FConvex *)local_188,(double)local_120);
    local_178 = 0.0;
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1e0.AllocatorInstance.Data,
               local_1e0.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1e0.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_1e0.AllocatorInstance.Data);
    }
  }
  pFVar19 = local_198;
  *(uchar *)&local_198->_padding_ = local_170;
  pTVar1 = &local_198->Planes;
  *(uchar *)((longlong)&local_198->_padding_ + 1) = local_16f;
  *(bool *)((longlong)&local_198->_padding_ + 4) = local_174;
  *(bool *)((longlong)&local_198->_padding_ + 5) = local_173;
  *(bool *)((longlong)&local_198->_padding_ + 6) = local_172;
  *(bool *)((longlong)&local_198->_padding_ + 7) = local_171;
  *(float *)&local_198->_padding_ = local_178;
  if (pTVar1 != &local_168) {
    pFVar11 = (pTVar1->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar1->AllocatorInstance).Data = local_168.AllocatorInstance.Data;
    (pFVar19->Planes).ArrayNum = local_168.ArrayNum;
    (pFVar19->Planes).ArrayMax = local_168.ArrayMax;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 0;
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar2 = &pFVar19->Vertices;
  if (pTVar2 != &local_158) {
    pFVar11 = (pTVar2->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar2->AllocatorInstance).Data = local_158.AllocatorInstance.Data;
    (pFVar19->Vertices).ArrayNum = local_158.ArrayNum;
    (pFVar19->Vertices).ArrayMax = local_158.ArrayMax;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0;
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  *(undefined8 *)&(pFVar19->LocalBoundingBox).MMin = local_148.MMin._0_8_;
  *(undefined4 *)&(pFVar19->LocalBoundingBox).MMin.field_0x8 = local_148.MMin._8_4_;
  *(ulonglong *)&(pFVar19->LocalBoundingBox).MMax =
       CONCAT44(local_148.MMax._4_4_,local_148.MMax._0_4_);
  *(undefined4 *)&(pFVar19->LocalBoundingBox).MMax.field_0x8 = local_148.MMax._8_4_;
  (pFVar19->StructureData).Data.Ptr = (void *)local_130;
  (pFVar19->StructureData).IndexType = local_128;
  *(undefined8 *)&pFVar19->CenterOfMass = local_11c._0_8_;
  pFVar19->Volume = local_120;
  local_130.Ptr = (void *)0x0;
  local_128 = None;
  *(undefined8 *)&pFVar19->UnitMassInertiaTensor = local_110._0_8_;
  *(undefined8 *)&(pFVar19->UnitMassInertiaTensor).field_0x8 = local_110._8_8_;
  *(undefined4 *)&(pFVar19->CenterOfMass).field_0x8 = local_11c._8_4_;
  *(undefined8 *)&(pFVar19->UnitMassInertiaTensor).field_0x10 = local_110._16_8_;
  *(undefined8 *)&pFVar19->RotationOfMass = local_f8._0_8_;
  *(undefined8 *)&(pFVar19->RotationOfMass).field_0x8 = local_f8._8_8_;
  *(undefined8 *)&(pFVar19->RotationOfMass).field_0x10 = local_f8._16_8_;
  *(undefined8 *)&(pFVar19->RotationOfMass).field_0x18 = local_f8._24_8_;
  FConvexStructureData::DestroyDataContainer((FConvexStructureData *)&local_130);
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)local_188);
  if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.AllocatorInstance.Data);
  }
  if (local_220.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data);
  }
  return;
}

// Raycast @ 143a8a0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FConvex::Raycast
          (FConvex *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          double param_4,double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,
          int *param_8)

{
  bool bVar1;
  undefined1 auStackY_178 [32];
  TVector<double,3> local_118;
  undefined1 local_f8 [96];
  undefined1 local_98 [32];
  TVector<float,3> local_78;
  ulonglong local_68;
  
  local_f8._24_8_ = _UNK_15061cbc8;
  local_f8._16_8_ = ___xmm_3ff00000000000000000000000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_4 == 0.0) {
    bVar1 = RaycastFast(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    *param_8 = -1;
    local_f8._48_8_ = *(undefined8 *)&param_1->field_0x10;
    local_f8._0_8_ = 0;
    local_f8._8_8_ = 0;
    local_f8._32_8_ = *(undefined8 *)param_1;
    local_f8._40_8_ = *(undefined8 *)&param_1->field_0x8;
    local_f8._80_8_ = ___xmm_00000000000000003ff0000000000000;
    local_f8._88_8_ = _UNK_150689518;
    local_f8._56_8_ = 0;
    local_f8._64_8_ = ___xmm_3ff00000000000003ff0000000000000;
    local_f8._72_8_ = _UNK_150689688;
    FImplicitObject::FImplicitObject((FImplicitObject *)local_98,3,'\0');
    local_98._16_4_ = (undefined4)param_4;
    local_98._0_8_ = &___7__TSphere_N_02_Chaos__6B_;
    local_78._0_8_ = 0;
    local_78._8_4_ = 0;
    local_118._16_8_ = 0;
    local_118._0_8_ = ___xmm_00000000000000003ff0000000000000;
    local_118._8_8_ = _UNK_150689518;
    bVar1 = GJKRaycast<double,Chaos::FConvex,Chaos::TSphere<double,3>_>
                      (this,(TSphere<double,3> *)local_98,(TRigidTransform<double,3> *)local_f8,
                       param_2,param_3,param_5,param_6,param_7,0.0,&local_118,0.0);
    local_98._0_8_ = &___7__TSphere_N_02_Chaos__6B_;
    FImplicitObject::~FImplicitObject((FImplicitObject *)local_98);
  }
  return bVar1;
}

// RaycastFast @ 143a8a2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FConvex::RaycastFast
          (FConvex *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          double param_4,double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,
          int *param_8)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  double *pdVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  double local_a8;
  double local_a0;
  double local_98;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined8 local_80;
  
  uVar6 = __xmm_80000000000000008000000000000000._4_4_;
  uVar14 = (uint)__xmm_80000000000000008000000000000000;
  uVar10 = 0;
  uVar16 = 0;
  uVar18 = 0;
  uVar12 = 0xffffffff;
  if (0 < (this->Planes).ArrayNum) {
    lVar11 = 0;
    uVar17 = uVar16;
    uVar19 = uVar18;
    uVar13 = 0xffffffff;
    do {
      uVar16 = 0;
      if ((int)uVar10 < (this->Planes).ArrayNum) {
        uVar16 = ~uVar10 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pFVar3 = (this->Planes).AllocatorInstance.Data;
      dVar5 = (double)*(float *)(pFVar3 + lVar11 + 0x10) * *(double *)&param_2->field_0x8 +
              (double)*(float *)(pFVar3 + lVar11 + 0xc) * *(double *)param_2 +
              (double)*(float *)(pFVar3 + lVar11 + 0x14) * *(double *)&param_2->field_0x10;
      dVar15 = (*(double *)&param_1->field_0x8 - (double)*(float *)(pFVar3 + lVar11 + 4)) *
               (double)*(float *)(pFVar3 + lVar11 + 0x10) +
               (*(double *)param_1 - (double)*(float *)(pFVar3 + lVar11)) *
               (double)*(float *)(pFVar3 + lVar11 + 0xc) +
               (*(double *)&param_1->field_0x10 - (double)*(float *)(pFVar3 + lVar11 + 8)) *
               (double)*(float *)(pFVar3 + lVar11 + 0x14);
      dVar1 = param_3;
      uVar12 = uVar13;
      if (dVar5 == 0.0) {
        uVar16 = uVar17;
        uVar18 = uVar19;
        if (0.0 < dVar15) {
          return false;
        }
      }
      else {
        dVar15 = dVar15 / dVar5;
        uVar16 = SUB84(dVar15,0) ^ uVar14;
        uVar18 = (uint)((ulonglong)dVar15 >> 0x20) ^ uVar6;
        dVar15 = (double)CONCAT44(uVar18,uVar16);
        if (0.0 <= dVar5) {
          uVar16 = uVar17;
          uVar18 = uVar19;
          dVar1 = dVar15;
          if (param_3 <= dVar15) {
            dVar1 = param_3;
          }
        }
        else {
          if ((double)CONCAT44(uVar18,uVar16) <= (double)CONCAT44(uVar19,uVar17)) {
            uVar16 = uVar17;
            uVar18 = uVar19;
          }
          uVar12 = uVar10;
          if (dVar15 < (double)CONCAT44(uVar19,uVar17) || dVar15 == (double)CONCAT44(uVar19,uVar17))
          {
            uVar12 = uVar13;
          }
        }
      }
      param_3 = dVar1;
      if (param_3 <= (double)CONCAT44(uVar18,uVar16) && (double)CONCAT44(uVar18,uVar16) != param_3)
      {
        return false;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x18;
      uVar17 = uVar16;
      uVar19 = uVar18;
      uVar13 = uVar12;
    } while ((int)uVar10 < (this->Planes).ArrayNum);
  }
  *param_5 = (double)CONCAT44(uVar18,uVar16);
  dVar5 = *(double *)&param_2->field_0x8;
  dVar1 = *(double *)&param_2->field_0x10;
  dVar15 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&param_1->field_0x10;
  *(double *)param_6 = (double)CONCAT44(uVar18,uVar16) * *(double *)param_2 + *(double *)param_1;
  *(double *)&param_6->field_0x8 = (double)CONCAT44(uVar18,uVar16) * dVar5 + dVar15;
  *(double *)&param_6->field_0x10 = (double)CONCAT44(uVar18,uVar16) * dVar1 + dVar2;
  if ((int)uVar12 < 0) {
    pdVar9 = (double *)&local_90;
    local_90 = *(uint *)param_2 ^ (uint)__xmm_80000000000000008000000000000000;
    uStack_8c = *(uint *)&param_2->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
    uStack_88 = *(uint *)&param_2->field_0x8 ^ _UNK_15066df78;
    uStack_84 = *(uint *)&param_2->field_0xc ^ _UNK_15066df7c;
    local_80 = CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) ^ uVar6,
                        (uint)*(undefined8 *)&param_2->field_0x10 ^ uVar14);
  }
  else {
    uVar14 = 0;
    if ((int)uVar12 < (this->Planes).ArrayNum) {
      uVar14 = ~uVar12 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    lVar11 = (longlong)(int)uVar12;
    pFVar3 = (this->Planes).AllocatorInstance.Data;
    local_a8 = (double)*(float *)(pFVar3 + lVar11 * 0x18 + 0xc);
    pdVar9 = &local_a8;
    local_a0 = (double)*(float *)(pFVar3 + lVar11 * 0x18 + 0x10);
    local_98 = (double)*(float *)(pFVar3 + lVar11 * 0x18 + 0x14);
  }
  dVar1 = pdVar9[1];
  dVar5 = pdVar9[2];
  *(double *)param_7 = *pdVar9;
  *(double *)&param_7->field_0x8 = dVar1;
  *(double *)&param_7->field_0x10 = dVar5;
  *param_8 = -1;
  return true;
}

// ToStringFull @ 143a94a80

FString * __thiscall Chaos::FConvex::ToStringFull(FConvex *this,FString *__return_storage_ptr__)

{
  EIndexType EVar1;
  TConvexHalfEdgeStructureData<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  FPlaneData *pFVar9;
  FPlaneData *pFVar10;
  FPlaneData *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  <lambda_2> local_res8 [8];
  FString *local_res10;
  <lambda_2> local_res18 [8];
  longlong local_res20;
  uint local_e8 [2];
  uint local_e0 [2];
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  uVar13 = 0;
  local_res10 = __return_storage_ptr__;
  ::FString::PrintfImpl
            (__return_storage_ptr__,L"Convex: Verts: %d, Edges %d, Planes: %d, Margin %f");
  ::FString::AppendChars(__return_storage_ptr__,L"\n",1);
  uVar15 = 0;
  uVar12 = uVar13;
  if (0 < (this->Vertices).ArrayNum) {
    do {
      uVar5 = uVar15;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar3)();
        return pFVar8;
      }
      ::FString::PrintfImpl(&local_d8,L"  Vertex %d: [%f, %f, %f]\n");
      uVar5 = local_d8.Data.ArrayNum - 1;
      if (local_d8.Data.ArrayNum == 0) {
        uVar5 = uVar15;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_d8.Data.AllocatorInstance.Data,uVar5);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (this->Vertices).ArrayNum);
  }
  iVar17 = 0;
  if (0 < (this->Planes).ArrayNum) {
    local_res20 = 0;
    uVar12 = uVar13;
    do {
      lVar14 = local_res20;
      uVar6 = 0;
      uVar5 = uVar6;
      if ((int)uVar12 < (this->Planes).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar3)();
        return pFVar8;
      }
      ::FString::PrintfImpl(&local_c8,L"  Plane %d: Normal: [%f, %f, %f], Distance: %f, Verts: [");
      uVar5 = local_c8.Data.ArrayNum - 1;
      if (local_c8.Data.ArrayNum == 0) {
        uVar5 = uVar6;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_c8.Data.AllocatorInstance.Data,uVar5);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      pTVar2 = (this->StructureData).Data.DataL;
      if (pTVar2 != (TConvexHalfEdgeStructureData<int> *)0x0) {
        EVar1 = (this->StructureData).IndexType;
        if (EVar1 == Small) {
          pFVar11 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                              ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar2,uVar12);
          uVar5 = (uint)pFVar11->NumHalfEdges;
        }
        else if (EVar1 == Medium) {
          pFVar10 = TConvexHalfEdgeStructureData<short>::GetPlane
                              ((TConvexHalfEdgeStructureData<short> *)pTVar2,uVar12);
          uVar5 = (int)pFVar10->NumHalfEdges;
        }
        else {
          uVar5 = uVar6;
          if (EVar1 == Large) {
            pFVar9 = TConvexHalfEdgeStructureData<int>::GetPlane(pTVar2,uVar12);
            uVar5 = pFVar9->NumHalfEdges;
          }
        }
        __return_storage_ptr__ = local_res10;
        uVar16 = uVar13;
        if (0 < (int)uVar5) {
          do {
            pTVar2 = (this->StructureData).Data.DataL;
            if (pTVar2 != (TConvexHalfEdgeStructureData<int> *)0x0) {
              EVar1 = (this->StructureData).IndexType;
              if (EVar1 == Small) {
                iVar7 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                                  ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar2,uVar12,
                                   uVar16);
                TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                          ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar2,iVar7);
              }
              else if (EVar1 == Medium) {
                iVar7 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                                  ((TConvexHalfEdgeStructureData<short> *)pTVar2,uVar12,uVar16);
                TConvexHalfEdgeStructureData<short>::GetHalfEdge
                          ((TConvexHalfEdgeStructureData<short> *)pTVar2,iVar7);
              }
              else if (EVar1 == Large) {
                iVar7 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(pTVar2,uVar12,uVar16);
                TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar2,iVar7);
              }
            }
            ::FString::PrintfImpl(&local_b8,L"%d");
            pFVar8 = local_res10;
            uVar18 = local_b8.Data.ArrayNum - 1;
            if (local_b8.Data.ArrayNum == 0) {
              uVar18 = uVar6;
            }
            ::FString::AppendChars
                      (local_res10,(wchar_t *)local_b8.Data.AllocatorInstance.Data,uVar18);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if ((int)uVar16 < (int)(uVar5 - 1)) {
              ::FString::PrintfImpl(&local_a8,L", ");
              iVar7 = local_a8.Data.ArrayNum + -1;
              if (local_a8.Data.ArrayNum == 0) {
                iVar7 = iVar17;
              }
              ::FString::AppendChars(pFVar8,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar7);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            uVar16 = uVar16 + 1;
            lVar14 = local_res20;
            __return_storage_ptr__ = local_res10;
          } while ((int)uVar16 < (int)uVar5);
        }
      }
      ::FString::PrintfImpl(&local_98,L"]\n");
      iVar7 = local_98.Data.ArrayNum + -1;
      if (local_98.Data.ArrayNum == 0) {
        iVar7 = iVar17;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar7);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_res20 = lVar14 + 0x18;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (this->Planes).ArrayNum);
  }
  ::FString::PrintfImpl(&local_88,L"  Edges: ");
  iVar7 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar7 = iVar17;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar7);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  while( true ) {
    pTVar2 = (this->StructureData).Data.DataL;
    uVar12 = uVar15;
    if ((pTVar2 != (TConvexHalfEdgeStructureData<int> *)0x0) &&
       (((EVar1 = (this->StructureData).IndexType, EVar1 == Small || (EVar1 == Medium)) ||
        (EVar1 == Large)))) {
      uVar12 = (pTVar2->Edges).ArrayNum;
    }
    if ((int)uVar12 <= (int)uVar13) break;
    if (pTVar2 != (TConvexHalfEdgeStructureData<int> *)0x0) {
      local_e8[1] = 1;
      local_e8[0] = uVar13;
      FConvexStructureData::
      ConstDataOp<_Chaos::FConvexStructureData::GetEdgeVertex_::__l2::<lambda_1>,_Chaos::FConvexStructureData::GetEdgeVertex_::__l2::<lambda_2>_>
                (&this->StructureData,(<lambda_1> *)local_e8,local_res8);
    }
    if ((this->StructureData).Data.Ptr != (void *)0x0) {
      local_e0[1] = 0;
      local_e0[0] = uVar13;
      FConvexStructureData::
      ConstDataOp<_Chaos::FConvexStructureData::GetEdgeVertex_::__l2::<lambda_1>,_Chaos::FConvexStructureData::GetEdgeVertex_::__l2::<lambda_2>_>
                (&this->StructureData,(<lambda_1> *)local_e0,local_res18);
    }
    ::FString::PrintfImpl(&local_78,L"[%d, %d]");
    iVar7 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar7 = iVar17;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar7);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pTVar2 = (this->StructureData).Data.DataL;
    uVar12 = uVar15;
    if ((pTVar2 != (TConvexHalfEdgeStructureData<int> *)0x0) &&
       (((EVar1 = (this->StructureData).IndexType, EVar1 == Small || (EVar1 == Medium)) ||
        (EVar1 == Large)))) {
      uVar12 = (pTVar2->Edges).ArrayNum;
    }
    if ((int)uVar13 < (int)(uVar12 - 1)) {
      ::FString::PrintfImpl(&local_68,L", ");
      iVar7 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar7 = iVar17;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar7);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    uVar13 = uVar13 + 1;
  }
  ::FString::PrintfImpl(&local_58,L"\n");
  iVar7 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar7 = iVar17;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar7);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SupportCoreSimd @ 143b42da0

__m128 * __thiscall
Chaos::FConvex::SupportCoreSimd
          (FConvex *this,__m128 *__return_storage_ptr__,__m128 *param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  __m128 _Var3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  __m128 *p_Var10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  double local_98;
  double dStack_90;
  double local_88;
  undefined1 local_80 [16];
  double local_70;
  
  fVar5 = param_1->m128_f32[0];
  fVar6 = param_1->m128_f32[1];
  fVar7 = param_1->m128_f32[2];
  uVar11 = 0;
  lVar14 = (longlong)(this->Vertices).ArrayNum;
  dVar4 = (double)fVar6;
  local_70 = (double)fVar7;
  local_80._8_4_ = SUB84(dVar4,0);
  local_80._0_8_ = (double)fVar5;
  local_80._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  if (0 < lVar14) {
    lVar12 = 0;
    fVar16 = __real_ff7fffff;
    uVar13 = 0xffffffff;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->Vertices).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        p_Var10 = (__m128 *)(*pcVar2)();
        return p_Var10;
      }
      pFVar1 = (this->Vertices).AllocatorInstance.Data;
      fVar15 = fVar6 * *(float *)(pFVar1 + lVar12 + 4) + fVar5 * *(float *)(pFVar1 + lVar12) +
               fVar7 * *(float *)(pFVar1 + lVar12 + 8);
      uVar9 = uVar11;
      if (fVar15 <= fVar16) {
        fVar15 = fVar16;
        uVar9 = uVar13;
      }
      fVar16 = fVar15;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0xc;
      lVar14 = lVar14 + -1;
      uVar13 = uVar9;
    } while (lVar14 != 0);
    if (uVar9 != 0xffffffff) {
      GetMarginAdjustedVertex(this,(TVector<double,3> *)&local_98,uVar9,param_2,(double *)0x0);
      _Var3.m128_f32[1] = (float)dStack_90;
      _Var3.m128_f32[0] = (float)local_98;
      _Var3.m128_f32[2] = (float)local_88;
      _Var3.m128_f32[3] = 0.0;
      *__return_storage_ptr__ = _Var3;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->m128_u64[0] = 0;
  __return_storage_ptr__->m128_u64[1] = 0;
  return __return_storage_ptr__;
}

// FConvex @ 143eb0b50

FConvex * __thiscall
Chaos::FConvex::FConvex
          (FConvex *this,TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3,
          TVector<float,3> *param_4,TVector<float,3> *param_5,float param_6,
          TVector<float,3> *param_7,TRotation<double,3> *param_8,bool param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  double dVar11;
  float fVar12;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\b');
  fVar12 = __real_3f000000;
  this->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
  (this->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Planes).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Planes).ArrayNum = param_1->ArrayNum;
  (this->Planes).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = param_3->ArrayNum;
  (this->Vertices).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  (this->StructureData).Data.Ptr = (void *)0x0;
  (this->StructureData).IndexType = None;
  *(undefined4 *)&(this->LocalBoundingBox).MMin = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax = 0xff7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x4 = 0xff7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 = 0xff7fffff;
  *(undefined8 *)&this->RotationOfMass = 0;
  *(undefined8 *)&(this->RotationOfMass).field_0x8 = 0;
  *(undefined8 *)&(this->RotationOfMass).field_0x10 = 0;
  *(undefined8 *)&(this->RotationOfMass).field_0x18 = 0;
  uVar8 = *(undefined4 *)&param_4->field_0x8;
  uVar7 = *(undefined8 *)param_5;
  uVar9 = *(undefined4 *)&param_5->field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMin = *(undefined8 *)param_4;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = uVar7;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 = uVar9;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 = uVar8;
  fVar1 = *(float *)&(this->LocalBoundingBox).MMax.field_0x4;
  fVar2 = *(float *)&(this->LocalBoundingBox).MMin.field_0x4;
  fVar3 = *(float *)&(this->LocalBoundingBox).MMax.field_0x8;
  fVar4 = *(float *)&(this->LocalBoundingBox).MMin.field_0x8;
  fVar5 = *(float *)&(this->LocalBoundingBox).MMin.field_0x4;
  fVar6 = *(float *)&(this->LocalBoundingBox).MMin.field_0x8;
  *(float *)&this->CenterOfMass =
       (*(float *)&(this->LocalBoundingBox).MMax - *(float *)&(this->LocalBoundingBox).MMin) *
       fVar12 + *(float *)&(this->LocalBoundingBox).MMin;
  *(float *)&(this->CenterOfMass).field_0x4 = (fVar1 - fVar2) * fVar12 + fVar5;
  *(float *)&(this->CenterOfMass).field_0x8 = (fVar3 - fVar4) * fVar12 + fVar6;
  this->Volume = param_6;
  uVar7 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->RotationOfMass = *(undefined8 *)param_8;
  *(undefined8 *)&(this->RotationOfMass).field_0x8 = uVar7;
  uVar7 = *(undefined8 *)&param_8->field_0x18;
  *(undefined8 *)&(this->RotationOfMass).field_0x10 = *(undefined8 *)&param_8->field_0x10;
  *(undefined8 *)&(this->RotationOfMass).field_0x18 = uVar7;
  uVar7 = *(undefined8 *)&param_7->field_0x4;
  dVar11 = (double)(float)((ulonglong)uVar7 >> 0x20);
  *(double *)&this->UnitMassInertiaTensor = (double)*(float *)param_7;
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ = (double)(float)uVar7;
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])&(this->UnitMassInertiaTensor).field_0x8 = auVar10;
  CreateStructureData(this,param_2,param_9);
  return this;
}

// FConvex @ 144012360

FConvex * __thiscall
Chaos::FConvex::FConvex
          (FConvex *this,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          double param_2,EBuildMethod param_3)

{
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_38 [2];
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\b');
  this->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
  (this->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)&(this->LocalBoundingBox).MMin = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax = 0xff7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x4 = 0xff7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 = 0xff7fffff;
  (this->Planes).ArrayNum = 0;
  (this->Planes).ArrayMax = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->StructureData).Data.Ptr = (void *)0x0;
  (this->StructureData).IndexType = None;
  *(undefined8 *)&this->CenterOfMass = 0;
  *(undefined4 *)&(this->CenterOfMass).field_0x8 = 0;
  *(undefined8 *)&this->RotationOfMass = 0;
  *(undefined8 *)&(this->RotationOfMass).field_0x8 = 0;
  *(undefined8 *)&(this->RotationOfMass).field_0x10 = 0;
  *(undefined8 *)&(this->RotationOfMass).field_0x18 = 0;
  if (param_1->ArrayNum != 0) {
    local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38[0].ArrayNum = 0;
    local_38[0].ArrayMax = 0;
    FConvexBuilder::Build
              (param_1,&this->Planes,local_38,&this->Vertices,&this->LocalBoundingBox,param_3);
    CalculateVolumeAndCenterOfMass<float,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
              (&this->Vertices,local_38,&this->Volume,&this->CenterOfMass);
    if (param_3 != ConvexHull3Simplified) {
      FConvexBuilder::MergeFaces(&this->Planes,local_38,&this->Vertices,__real_3f800000);
      FConvexBuilder::MergeColinearEdges(&this->Planes,local_38,&this->Vertices,__real_358637bd);
    }
    CreateStructureData(this,local_38,false);
    ComputeUnitMassInertiaTensorAndRotationOfMass(this,(double)this->Volume);
    *(float *)&this->_padding_ = (float)param_2;
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_38[0].AllocatorInstance.Data,
               local_38[0].ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_38[0].AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_38[0].AllocatorInstance.Data);
    }
  }
  return this;
}

// FConvex @ 144012500

FConvex * __thiscall Chaos::FConvex::FConvex(FConvex *this)

{
  double dVar1;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\b');
  this->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
  (this->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Planes).ArrayNum = 0;
  (this->Planes).ArrayMax = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->StructureData).Data.Ptr = (void *)0x0;
  (this->StructureData).IndexType = None;
  *(undefined8 *)&this->Volume = 0;
  *(undefined8 *)&(this->CenterOfMass).field_0x4 = 0;
  *(undefined8 *)&this->UnitMassInertiaTensor = 0x3ff0000000000000;
  *(undefined8 *)&(this->UnitMassInertiaTensor).field_0x8 = 0x3ff0000000000000;
  *(undefined8 *)&(this->UnitMassInertiaTensor).field_0x10 = 0x3ff0000000000000;
  *(undefined4 *)&(this->LocalBoundingBox).MMin = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax = 0xff7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x4 = 0xff7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 = 0xff7fffff;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)&this->RotationOfMass = UE::Math::TQuat<double>::Identity.X;
  *(double *)&(this->RotationOfMass).field_0x8 = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  *(double *)&(this->RotationOfMass).field_0x10 = UE::Math::TQuat<double>::Identity.Z;
  *(double *)&(this->RotationOfMass).field_0x18 = dVar1;
  return this;
}

// operator= @ 1440131c0

FConvex * __thiscall Chaos::FConvex::operator=(FConvex *this,FConvex *param_1)

{
  TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  
  pTVar1 = &param_1->Planes;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  pTVar2 = &this->Planes;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  *(undefined1 *)((longlong)&this->_padding_ + 7) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 7);
  if (pTVar2 != pTVar1) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Planes).ArrayNum = (param_1->Planes).ArrayNum;
    (this->Planes).ArrayMax = (param_1->Planes).ArrayMax;
    (param_1->Planes).ArrayNum = 0;
    (param_1->Planes).ArrayMax = 0;
  }
  pTVar3 = &param_1->Vertices;
  pTVar4 = &this->Vertices;
  if (pTVar4 != pTVar3) {
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Vertices).ArrayNum = (param_1->Vertices).ArrayNum;
    (this->Vertices).ArrayMax = (param_1->Vertices).ArrayMax;
    (param_1->Vertices).ArrayNum = 0;
    (param_1->Vertices).ArrayMax = 0;
  }
  *(undefined8 *)&(this->LocalBoundingBox).MMin = *(undefined8 *)&(param_1->LocalBoundingBox).MMin;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 =
       *(undefined4 *)&(param_1->LocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = *(undefined8 *)&(param_1->LocalBoundingBox).MMax;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 =
       *(undefined4 *)&(param_1->LocalBoundingBox).MMax.field_0x8;
  (this->StructureData).Data = (param_1->StructureData).Data;
  (this->StructureData).IndexType = (param_1->StructureData).IndexType;
  (param_1->StructureData).Data.Ptr = (void *)0x0;
  (param_1->StructureData).IndexType = None;
  this->Volume = param_1->Volume;
  *(undefined8 *)&this->CenterOfMass = *(undefined8 *)&param_1->CenterOfMass;
  *(undefined4 *)&(this->CenterOfMass).field_0x8 = *(undefined4 *)&(param_1->CenterOfMass).field_0x8
  ;
  uVar6 = *(undefined8 *)&(param_1->UnitMassInertiaTensor).field_0x8;
  *(undefined8 *)&this->UnitMassInertiaTensor = *(undefined8 *)&param_1->UnitMassInertiaTensor;
  *(undefined8 *)&(this->UnitMassInertiaTensor).field_0x8 = uVar6;
  *(undefined8 *)&(this->UnitMassInertiaTensor).field_0x10 =
       *(undefined8 *)&(param_1->UnitMassInertiaTensor).field_0x10;
  uVar6 = *(undefined8 *)&(param_1->RotationOfMass).field_0x8;
  *(undefined8 *)&this->RotationOfMass = *(undefined8 *)&param_1->RotationOfMass;
  *(undefined8 *)&(this->RotationOfMass).field_0x8 = uVar6;
  uVar6 = *(undefined8 *)&(param_1->RotationOfMass).field_0x18;
  *(undefined8 *)&(this->RotationOfMass).field_0x10 =
       *(undefined8 *)&(param_1->RotationOfMass).field_0x10;
  *(undefined8 *)&(this->RotationOfMass).field_0x18 = uVar6;
  return this;
}

// RawCopyAsConvex @ 14404c050

FConvex * __thiscall Chaos::FConvex::RawCopyAsConvex(FConvex *this)

{
  TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  FConvex *this_00;
  
  this_00 = ::operator_new(0xb0);
  if (this_00 != (FConvex *)0x0) {
    FImplicitObject::FImplicitObject((FImplicitObject *)this_00,3,'\b');
    pTVar1 = &this_00->Planes;
    this_00->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
    piVar2 = &(this_00->Planes).ArrayMax;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar4 = (this->Planes).ArrayNum;
    pFVar5 = (this->Planes).AllocatorInstance.Data;
    (this_00->Planes).ArrayNum = iVar4;
    if (iVar4 == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
      memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x18);
    }
    pTVar3 = &this_00->Vertices;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    piVar2 = &(this_00->Vertices).ArrayMax;
    iVar4 = (this->Vertices).ArrayNum;
    pFVar5 = (this->Vertices).AllocatorInstance.Data;
    (this_00->Vertices).ArrayNum = iVar4;
    if (iVar4 == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
      memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0xc);
    }
    *(undefined8 *)&(this_00->LocalBoundingBox).MMin = *(undefined8 *)&(this->LocalBoundingBox).MMin
    ;
    *(undefined4 *)&(this_00->LocalBoundingBox).MMin.field_0x8 =
         *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8;
    *(undefined8 *)&(this_00->LocalBoundingBox).MMax = *(undefined8 *)&(this->LocalBoundingBox).MMax
    ;
    *(undefined4 *)&(this_00->LocalBoundingBox).MMax.field_0x8 =
         *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8;
    (this_00->StructureData).Data.Ptr = (void *)0x0;
    (this_00->StructureData).IndexType = None;
    this_00->Volume = this->Volume;
    *(undefined8 *)&this_00->CenterOfMass = *(undefined8 *)&this->CenterOfMass;
    *(undefined4 *)&(this_00->CenterOfMass).field_0x8 =
         *(undefined4 *)&(this->CenterOfMass).field_0x8;
    uVar6 = *(undefined8 *)&(this->UnitMassInertiaTensor).field_0x8;
    *(undefined8 *)&this_00->UnitMassInertiaTensor = *(undefined8 *)&this->UnitMassInertiaTensor;
    *(undefined8 *)&(this_00->UnitMassInertiaTensor).field_0x8 = uVar6;
    *(undefined8 *)&(this_00->UnitMassInertiaTensor).field_0x10 =
         *(undefined8 *)&(this->UnitMassInertiaTensor).field_0x10;
    uVar6 = *(undefined8 *)&(this->RotationOfMass).field_0x8;
    *(undefined8 *)&this_00->RotationOfMass = *(undefined8 *)&this->RotationOfMass;
    *(undefined8 *)&(this_00->RotationOfMass).field_0x8 = uVar6;
    uVar6 = *(undefined8 *)&(this->RotationOfMass).field_0x18;
    *(undefined8 *)&(this_00->RotationOfMass).field_0x10 =
         *(undefined8 *)&(this->RotationOfMass).field_0x10;
    *(undefined8 *)&(this_00->RotationOfMass).field_0x18 = uVar6;
    FConvexStructureData::CopyFrom(&this_00->StructureData,&this->StructureData);
    *(float *)&this_00->_padding_ = *(float *)&this->_padding_;
    return this_00;
  }
  return (FConvex *)0x0;
}

