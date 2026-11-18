// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 17

// TWeightedLatticeImplicitObject<Chaos::FLevelSet> @ 143eb09b0

TWeightedLatticeImplicitObject<Chaos::FLevelSet> * __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
TWeightedLatticeImplicitObject<Chaos::FLevelSet>
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this,
          TRefCountPtr<Chaos::FLevelSet> *param_1,FWeightedLatticeImplicitObject *param_2)

{
  FWeightedLatticeImplicitObject::FWeightedLatticeImplicitObject
            ((FWeightedLatticeImplicitObject *)this,param_2);
  *(undefined ***)this = &___7__TWeightedLatticeImplicitObject_VFLevelSet_Chaos___Chaos__6B_;
  (this->Object).Reference = (FLevelSet *)0x0;
  (this->Object).Reference = param_1->Reference;
  param_1->Reference = (FLevelSet *)0x0;
  return this;
}

// TWeightedLatticeImplicitObject<Chaos::FLevelSet> @ 143eb0a00

TWeightedLatticeImplicitObject<Chaos::FLevelSet> * __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
TWeightedLatticeImplicitObject<Chaos::FLevelSet>
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this)

{
  FWeightedLatticeImplicitObject::FWeightedLatticeImplicitObject
            ((FWeightedLatticeImplicitObject *)this,2,'&');
  *(undefined ***)this = &___7__TWeightedLatticeImplicitObject_VFLevelSet_Chaos___Chaos__6B_;
  (this->Object).Reference = (FLevelSet *)0x0;
  return this;
}

// TWeightedLatticeImplicitObject<Chaos::FLevelSet> @ 143eb0a40

TWeightedLatticeImplicitObject<Chaos::FLevelSet> * __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
TWeightedLatticeImplicitObject<Chaos::FLevelSet>
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this,
          TWeightedLatticeImplicitObject<Chaos::FLevelSet> *param_1)

{
  FWeightedLatticeImplicitObject::FWeightedLatticeImplicitObject
            ((FWeightedLatticeImplicitObject *)this,(FWeightedLatticeImplicitObject *)param_1);
  *(undefined ***)this = &___7__TWeightedLatticeImplicitObject_VFLevelSet_Chaos___Chaos__6B_;
  (this->Object).Reference = (FLevelSet *)0x0;
  (this->Object).Reference = (param_1->Object).Reference;
  (param_1->Object).Reference = (FLevelSet *)0x0;
  this->field_0x15 = DAT_00000015;
  return this;
}

// TWeightedLatticeImplicitObject<Chaos::FLevelSet> @ 143eb0aa0

TWeightedLatticeImplicitObject<Chaos::FLevelSet> * __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
TWeightedLatticeImplicitObject<Chaos::FLevelSet>
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this,
          TRefCountPtr<Chaos::FLevelSet> *param_1,TUniformGrid<double,3> *param_2,
          TArrayND<Chaos::FWeightedLatticeInfluenceData,3> *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  uchar uVar1;
  
  uVar1 = FImplicitObject::GetType((FImplicitObject *)param_1->Reference);
  FWeightedLatticeImplicitObject::FWeightedLatticeImplicitObject
            ((FWeightedLatticeImplicitObject *)this,2,uVar1,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &___7__TWeightedLatticeImplicitObject_VFLevelSet_Chaos___Chaos__6B_;
  (this->Object).Reference = (FLevelSet *)0x0;
  (this->Object).Reference = param_1->Reference;
  param_1->Reference = (FLevelSet *)0x0;
  this->field_0x15 = *(undefined1 *)((longlong)&((this->Object).Reference)->_padding_ + 5);
  return this;
}

// ~TWeightedLatticeImplicitObject<Chaos::FLevelSet> @ 143eb2060

void __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
~TWeightedLatticeImplicitObject<Chaos::FLevelSet>
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this)

{
  longlong *plVar1;
  FLevelSet *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->Object).Reference;
  if (pFVar2 != (FLevelSet *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FWeightedLatticeImplicitObject::~FWeightedLatticeImplicitObject
            ((FWeightedLatticeImplicitObject *)this);
  return;
}

// operator() @ 143eb2e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58 [80];
  
  uVar9 = _UNK_15060db28;
  uVar8 = ___xmm_ffffffffffffffffffffffffffffffff;
  lVar11 = (longlong)(Chaos::Chaos_WeightedLattice_PhiAndNormalBatchSize * param_1);
  iVar10 = Chaos::Chaos_WeightedLattice_PhiAndNormalBatchSize * param_1 +
           Chaos::Chaos_WeightedLattice_PhiAndNormalBatchSize;
  if (*(int *)((longlong)this + 8) < iVar10) {
    iVar10 = *(int *)((longlong)this + 8);
  }
  if (lVar11 < iVar10) {
    lVar12 = lVar11 * 0xc;
    lVar13 = lVar11 << 4;
    do {
      lVar2 = **(longlong **)((longlong)this + 0x10);
      if (*(float *)(lVar2 + 0xc + lVar13) != 0.0) {
        fVar1 = *(float *)(lVar2 + 8 + lVar13);
        pfVar3 = *(float **)((longlong)this + 0x18);
        fVar4 = *pfVar3;
        fVar5 = pfVar3[1];
        fVar6 = pfVar3[2];
        fVar7 = pfVar3[3];
        fVar18 = (float)*(undefined8 *)(lVar2 + lVar13);
        fVar19 = (float)((ulonglong)*(undefined8 *)(lVar2 + lVar13) >> 0x20);
        local_58._0_8_ = uVar8;
        local_58._8_8_ = uVar9;
        fVar15 = fVar19 * fVar4 - fVar5 * fVar18;
        fVar16 = fVar1 * fVar5 - fVar6 * fVar19;
        fVar17 = fVar18 * fVar6 - fVar4 * fVar1;
        fVar16 = fVar16 + fVar16;
        fVar17 = fVar17 + fVar17;
        fVar15 = fVar15 + fVar15;
        local_88 = (double)(fVar7 * fVar16 + fVar18 + (fVar15 * fVar5 - fVar17 * fVar6) + pfVar3[4])
        ;
        local_80 = (double)(fVar7 * fVar17 + fVar19 + (fVar16 * fVar6 - fVar15 * fVar4) + pfVar3[5])
        ;
        local_78 = (double)(fVar7 * fVar15 + fVar1 + (fVar17 * fVar4 - fVar16 * fVar5) + pfVar3[6]);
        dVar14 = Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
                 PhiWithNormalAndSurfacePoint
                           (*(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)this,
                            (TVector<double,3> *)&local_88,(TVector<double,3> *)&local_70,
                            (FEmbeddingCoordinate *)local_58,false);
        *(float *)(**(longlong **)((longlong)this + 0x20) + lVar11 * 4) = (float)dVar14;
        lVar2 = **(longlong **)((longlong)this + 0x28);
        *(float *)(lVar2 + lVar12) = (float)local_70;
        *(float *)(lVar2 + 4 + lVar12) = (float)local_68;
        *(float *)(lVar2 + 8 + lVar12) = (float)local_60;
      }
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + 0x10;
      lVar12 = lVar12 + 0xc;
    } while (lVar11 < iVar10);
  }
  return;
}

// operator() @ 143eb2fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
BatchPhiWithNormalAndGreatestInfluenceBone'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  TVector<Chaos::TVector<int,3>,4> *pTVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  ushort *puVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_f0 [4];
  TVector<int,3>_u_0 local_e0;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double local_c0;
  longlong *local_b8;
  longlong local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  
  fVar10 = __real_3f800000;
  uVar9 = _UNK_15060db28;
  uVar8 = ___xmm_ffffffffffffffffffffffffffffffff;
  lVar19 = (longlong)(param_1 * Chaos::Chaos_WeightedLattice_PhiAndNormalBatchSize);
  iVar24 = param_1 * Chaos::Chaos_WeightedLattice_PhiAndNormalBatchSize +
           Chaos::Chaos_WeightedLattice_PhiAndNormalBatchSize;
  if (*(int *)((longlong)this + 8) < iVar24) {
    iVar24 = *(int *)((longlong)this + 8);
  }
  lVar25 = (longlong)iVar24;
  if (lVar19 < lVar25) {
    lVar27 = lVar19 * 0xc;
    lVar23 = lVar19 << 4;
    local_b8 = this;
    local_b0 = lVar25;
    do {
      lVar1 = **(longlong **)((longlong)this + 0x10);
      if (*(float *)(lVar1 + 0xc + lVar23) != 0.0) {
        fVar34 = *(float *)(lVar1 + 8 + lVar23);
        pfVar17 = *(float **)((longlong)this + 0x18);
        fVar3 = *pfVar17;
        fVar4 = pfVar17[1];
        fVar5 = pfVar17[2];
        fVar6 = pfVar17[3];
        fVar32 = (float)*(undefined8 *)(lVar1 + lVar23);
        fVar33 = (float)((ulonglong)*(undefined8 *)(lVar1 + lVar23) >> 0x20);
        local_e0._s_0.X = (int)uVar8;
        local_e0._s_0.Y = (int)((ulonglong)uVar8 >> 0x20);
        local_e0._s_0.Z = (int)uVar9;
        iStack_d4 = (int)((ulonglong)uVar9 >> 0x20);
        fVar29 = fVar33 * fVar3 - fVar4 * fVar32;
        fVar30 = fVar34 * fVar4 - fVar5 * fVar33;
        fVar31 = fVar32 * fVar5 - fVar3 * fVar34;
        fVar30 = fVar30 + fVar30;
        fVar31 = fVar31 + fVar31;
        fVar29 = fVar29 + fVar29;
        local_a8 = (double)(fVar6 * fVar30 + fVar32 + (fVar29 * fVar4 - fVar31 * fVar5) + pfVar17[4]
                           );
        local_a0 = (double)(fVar6 * fVar31 + fVar33 + (fVar30 * fVar5 - fVar29 * fVar3) + pfVar17[5]
                           );
        local_98 = (double)(fVar6 * fVar29 + fVar34 + (fVar31 * fVar3 - fVar30 * fVar4) + pfVar17[6]
                           );
        dVar28 = Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
                 PhiWithNormalAndSurfacePoint
                           (*(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)this,
                            (TVector<double,3> *)&local_a8,(TVector<double,3> *)&local_90,
                            (FEmbeddingCoordinate *)&local_e0._s_0,false);
        uVar12 = local_e0._s_0.Y;
        uVar11 = local_e0._s_0.X;
        *(float *)(**(longlong **)((longlong)this + 0x28) + lVar19 * 4) = (float)dVar28;
        lVar1 = **(longlong **)((longlong)this + 0x30);
        *(float *)(lVar1 + lVar27) = (float)local_90;
        *(float *)(lVar1 + 4 + lVar27) = (float)local_88;
        *(float *)(lVar1 + 8 + lVar27) = (float)local_80;
        if (*(float *)((longlong)this + 0x20) -
            *(float *)(**(longlong **)((longlong)this + 0x28) + lVar19 * 4) <= 0.0) {
          uVar21 = 0xffffffff;
        }
        else {
          lVar1 = *(longlong *)this;
          if (iStack_d4 == -1) {
            uVar21 = 0xffffffff;
          }
          else {
            if ((local_e0._s_0.Y + local_e0._s_0.X + local_e0._s_0.Z & 1U) == 0) {
              pTVar7 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                       EvenIndexTetrahedraOffsets;
            }
            else {
              pTVar7 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                       OddIndexTetrahedraOffsets;
            }
            piVar20 = &pTVar7[iStack_d4].V[0].field0_0x0._s_0.Z;
            uVar21 = 0xffffffff;
            fVar34 = 0.0;
            lVar26 = 0;
            local_f0[0] = (float)(double)CONCAT44(uStack_cc,uStack_d0);
            local_f0[1] = (float)local_c8;
            local_f0[2] = (float)local_c0;
            local_f0[3] = ((fVar10 - (float)(double)CONCAT44(uStack_cc,uStack_d0)) - (float)local_c8
                          ) - (float)local_c0;
            do {
              uVar22 = ((((TVector<int,3>_u_0_s_0 *)(piVar20 + -2))->X + uVar11) *
                        *(int *)(lVar1 + 0x7c) + piVar20[-1] + uVar12) * *(int *)(lVar1 + 0x80) +
                       local_e0._s_0.Z + *piVar20;
              uVar14 = 0;
              if ((int)uVar22 < *(int *)(lVar1 + 0x90)) {
                uVar14 = ~uVar22 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              lVar25 = *(longlong *)(lVar1 + 0x88);
              lVar16 = (longlong)(int)uVar22 * 0x4c;
              uVar18 = (ulonglong)*(byte *)(lVar16 + lVar25);
              if (*(byte *)(lVar16 + lVar25) != 0) {
                puVar15 = (ushort *)(lVar16 + 2 + lVar25);
                pfVar17 = (float *)(lVar16 + 0x1c + lVar25);
                do {
                  if (fVar34 < local_f0[lVar26] * *pfVar17) {
                    uVar21 = (uint)*puVar15;
                    fVar34 = local_f0[lVar26] * *pfVar17;
                  }
                  pfVar17 = pfVar17 + 1;
                  puVar15 = puVar15 + 1;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              lVar26 = lVar26 + 1;
              piVar20 = piVar20 + 3;
              lVar25 = local_b0;
              this = local_b8;
            } while (lVar26 < 4);
          }
        }
        *(uint *)(**(longlong **)((longlong)this + 0x38) + lVar19 * 4) = uVar21;
      }
      lVar19 = lVar19 + 1;
      lVar23 = lVar23 + 0x10;
      lVar27 = lVar27 + 0xc;
    } while (lVar19 < lVar25);
  }
  return;
}

// BatchPhiWithNormal @ 143eb78e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this,
          TArrayView<Chaos::Softs::FPAndInvM_const_,int> *param_1,TRigidTransform<float,3> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  bool bVar2;
  FPAndInvM *local_res8;
  FScriptContainerElement *local_res10;
  FScriptContainerElement *local_res18 [2];
  code *local_78;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> **local_70;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *local_68;
  int local_60;
  FPAndInvM **local_58;
  TRigidTransform<float,3> *local_50;
  FScriptContainerElement **local_48;
  FScriptContainerElement **local_40;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal(TArrayView<Chaos::Softs::FPAndInvM_const_,int>,Chaos::TRigidTransform<float,3>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId754,
               "TWeightedLatticeImplicitObject_BatchPhiWithNormal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
               ,0x2f2);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal(TArrayView<Chaos::Softs::FPAndInvM_const_,int>,Chaos::TRigidTransform<float,3>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId754);
  }
  iVar1 = param_1->ArrayNum;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_3,iVar1,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_4,iVar1,Default);
  local_res8 = param_1->DataPtr;
  local_res10 = (param_3->AllocatorInstance).Data;
  local_res18[0] = (param_4->AllocatorInstance).Data;
  local_58 = &local_res8;
  local_48 = &local_res10;
  local_40 = local_res18;
  local_70 = &local_68;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = this;
  local_60 = iVar1;
  local_50 = param_2;
  PhysicsParallelFor(-((int)ROUND(__real_bf000000 -
                                  ((float)iVar1 + (float)iVar1) /
                                  (float)Chaos_WeightedLattice_PhiAndNormalBatchSize) >> 1),
                     (TFunctionRef<void___cdecl(int)> *)&local_78,false);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BatchPhiWithNormalAndGreatestInfluenceBone @ 143eb7a30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormalAndGreatestInfluenceBone
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this,
          TArrayView<Chaos::Softs::FPAndInvM_const_,int> *param_1,TRigidTransform<float,3> *param_2,
          float param_3,TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<int,TSizedDefaultAllocator<32>_> *param_6)

{
  int iVar1;
  bool bVar2;
  FPAndInvM *local_res8;
  FScriptContainerElement *local_res10;
  FScriptContainerElement *local_res18;
  FScriptContainerElement *local_a8;
  code *local_a0;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> **local_98;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *local_90;
  int local_88;
  FPAndInvM **local_80;
  TRigidTransform<float,3> *local_78;
  float local_70;
  FScriptContainerElement **local_68;
  FScriptContainerElement **local_60;
  FScriptContainerElement **local_58;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormalAndGreatestInfluenceBone(TArrayView<Chaos::Softs::FPAndInvM_const_,int>,Chaos::TRigidTransform<float,3>_const&___ptr64,float,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId715,
               "TWeightedLatticeImplicitObject_BatchPhiWithNormalAndGreatestInfluenceBone",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
               ,0x2cb);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormalAndGreatestInfluenceBone(TArrayView<Chaos::Softs::FPAndInvM_const_,int>,Chaos::TRigidTransform<float,3>_const&___ptr64,float,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId715);
  }
  iVar1 = param_1->ArrayNum;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_4,iVar1,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_5,iVar1,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_6,iVar1,Default);
  local_res8 = param_1->DataPtr;
  local_res10 = (param_4->AllocatorInstance).Data;
  local_res18 = (param_5->AllocatorInstance).Data;
  local_a8 = (param_6->AllocatorInstance).Data;
  local_80 = &local_res8;
  local_68 = &local_res10;
  local_60 = &local_res18;
  local_58 = &local_a8;
  local_98 = &local_90;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormalAndGreatestInfluenceBone'::__l2::<lambda_1>,void,int>
             ::Call;
  local_90 = this;
  local_88 = iVar1;
  local_78 = param_2;
  local_70 = param_3;
  PhysicsParallelFor(-((int)ROUND(__real_bf000000 -
                                  ((float)iVar1 + (float)iVar1) /
                                  (float)Chaos_WeightedLattice_PhiAndNormalBatchSize) >> 1),
                     (TFunctionRef<void___cdecl(int)> *)&local_a0,false);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CopyGeometry @ 143eba1b0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::CopyGeometry
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this)

{
  int *piVar1;
  int iVar2;
  FLevelSet *this_00;
  code *pcVar3;
  bool bVar4;
  FWeightedLatticeImplicitObject *this_01;
  TRefCountPtr<Chaos::FImplicitObject> TVar5;
  FImplicitObject *in_RDX;
  undefined8 *local_res18;
  
  this_00 = (this->Object).Reference;
  if (this_00 == (FLevelSet *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
                       ,0x27a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Reference = (FImplicitObject *)(*pcVar3)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar5.Reference;
    }
    in_RDX->_padding_ = 0;
  }
  else {
    FLevelSet::CopyGeometry(this_00);
    this_01 = ::operator_new(0x240);
    if (this_01 == (FWeightedLatticeImplicitObject *)0x0) {
      in_RDX->_padding_ = 0;
    }
    else {
      FWeightedLatticeImplicitObject::FWeightedLatticeImplicitObject
                (this_01,(FWeightedLatticeImplicitObject *)this);
      in_RDX->_padding_ = (longlong)this_01;
      this_01->_padding_ =
           (longlong)&___7__TWeightedLatticeImplicitObject_VFLevelSet_Chaos___Chaos__6B_;
      this_01[1]._padding_ = (longlong)local_res18;
      local_res18 = (undefined8 *)0x0;
      LOCK();
      *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
      UNLOCK();
    }
    if (local_res18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res18 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(int *)((longlong)local_res18 + 0xc) == 0)) {
        (**(code **)*local_res18)(local_res18,1);
        return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
      }
    }
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// DeepCopyGeometry @ 143ebaaa0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::DeepCopyGeometry
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this)

{
  int *piVar1;
  int iVar2;
  FLevelSet *pFVar3;
  code *pcVar4;
  bool bVar5;
  FWeightedLatticeImplicitObject *this_00;
  TRefCountPtr<Chaos::FImplicitObject> TVar6;
  FImplicitObject *in_RDX;
  undefined8 *local_res18;
  
  pFVar3 = (this->Object).Reference;
  if (pFVar3 == (FLevelSet *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
                       ,0x28a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      TVar6.Reference = (FImplicitObject *)(*pcVar4)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar6.Reference;
    }
    in_RDX->_padding_ = 0;
  }
  else {
    (**(code **)(pFVar3->_padding_ + 0x38))(pFVar3,&local_res18);
    this_00 = ::operator_new(0x240);
    if (this_00 == (FWeightedLatticeImplicitObject *)0x0) {
      this_00 = (FWeightedLatticeImplicitObject *)0x0;
    }
    else {
      FWeightedLatticeImplicitObject::FWeightedLatticeImplicitObject
                (this_00,(FWeightedLatticeImplicitObject *)this);
      this_00->_padding_ =
           (longlong)&___7__TWeightedLatticeImplicitObject_VFLevelSet_Chaos___Chaos__6B_;
      this_00[1]._padding_ = (longlong)local_res18;
      local_res18 = (undefined8 *)0x0;
      LOCK();
      *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
      UNLOCK();
    }
    in_RDX->_padding_ = (longlong)this_00;
    if (local_res18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res18 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(int *)((longlong)local_res18 + 0xc) == 0)) {
        (**(code **)*local_res18)(local_res18,1);
        return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
      }
    }
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// GetEmbeddedObject @ 143ec0c00

FLevelSet * __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::GetEmbeddedObject
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this)

{
  return (this->Object).Reference;
}

// GetTypeHash @ 143ec38a0

uint __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::GetTypeHash
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this)

{
  FLevelSet *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  pFVar1 = (this->Object).Reference;
  uVar7 = 0;
  uVar5 = 0;
  lVar9 = (longlong)*(int *)&(pFVar1->MPhi).field_0x18;
  if (0 < lVar9) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar5 < *(int *)&(pFVar1->MPhi).field_0x18) {
        uVar6 = ~uVar5 >> 0x1f;
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
      uVar5 = uVar5 + 1;
      uVar2 = *(undefined8 *)(*(longlong *)&(pFVar1->MPhi).field_0x10 + lVar10 * 8);
      lVar10 = lVar10 + 1;
      uVar6 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
      uVar7 = uVar7 - uVar6 ^ uVar6 >> 0xd;
      uVar8 = (-0x61c88647 - uVar7) - uVar6 ^ uVar7 << 8;
      uVar6 = (uVar6 - uVar8) - uVar7 ^ uVar8 >> 0xd;
      uVar7 = (uVar7 - uVar6) - uVar8 ^ uVar6 >> 0xc;
      uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar7 << 0x10;
      uVar6 = (uVar6 - uVar8) - uVar7 ^ uVar8 >> 5;
      uVar7 = (uVar7 - uVar6) - uVar8 ^ uVar6 >> 3;
      uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar7 << 10;
      uVar7 = (uVar6 - uVar8) - uVar7 ^ uVar8 >> 0xf;
    } while (lVar10 < lVar9);
  }
  uVar5 = FWeightedLatticeImplicitObject::GetTypeHashHelper
                    ((FWeightedLatticeImplicitObject *)this,uVar7);
  return uVar5;
}

// PhiWithNormal @ 143ec7b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::PhiWithNormal
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2)

{
  double dVar1;
  undefined1 local_38 [56];
  
  local_38._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_38._8_8_ = _UNK_15060db28;
  dVar1 = PhiWithNormalAndSurfacePoint(this,param_1,param_2,(FEmbeddingCoordinate *)local_38,true);
  return dVar1;
}

// PhiWithNormalAndSurfacePoint @ 143ec7ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::PhiWithNormalAndSurfacePoint
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,FEmbeddingCoordinate *param_3,bool param_4)

{
  FEmbeddingCoordinate *this_00;
  FLevelSet *this_01;
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  TVector<double,3> *pTVar7;
  FEmbeddingCoordinate *pFVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined4 uVar17;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  TArray<Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate,TSizedDefaultAllocator<32>_>
  local_298;
  TVector<int,3>_u_0 local_288 [2];
  TVector<double,3> *local_270;
  undefined1 local_268 [24];
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  undefined1 local_200 [80];
  undefined8 local_1b0;
  TVector<double,3> local_1a8 [2];
  FEmbeddingCoordinate local_178;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  uVar9 = 0;
  local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.ArrayNum = 0;
  local_298.ArrayMax = 0;
  local_270 = param_1;
  bVar6 = FWeightedLatticeImplicitObject::GetEmbeddingCoordinates
                    ((FWeightedLatticeImplicitObject *)this,param_1,&local_298,param_4);
  uVar13 = _UNK_15060db28;
  if (!bVar6) {
    uVar9 = (uint)__real_47eff933c0000000;
    uVar22 = (uint)((ulonglong)__real_47eff933c0000000 >> 0x20);
    *(undefined8 *)&(param_3->CellIndex).field0_0x0 = ___xmm_ffffffffffffffffffffffffffffffff;
    *(undefined8 *)((longlong)&(param_3->CellIndex).field0_0x0 + 8) = uVar13;
    local_1b0 = 0;
    *(undefined8 *)&param_3->BarycentricCoordinate = 0;
    *(undefined8 *)&(param_3->BarycentricCoordinate).field_0x8 = 0;
    *(undefined8 *)&(param_3->BarycentricCoordinate).field_0x10 = 0;
    goto LAB_143ec82f5;
  }
  uVar10 = 0xffffffff;
  uVar22 = 0xffffffff;
  uVar11 = (undefined4)__real_7fefffffffffffff;
  uVar17 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar18 = local_268._0_4_;
  uVar19 = local_268._4_4_;
  uVar20 = local_268._8_4_;
  uVar21 = local_268._12_4_;
  if (local_298.ArrayNum < 1) {
LAB_143ec7e79:
    local_2a0 = (longlong)local_298.ArrayNum;
    local_2a8 = (longlong)(int)uVar22;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      dVar12 = (double)(*pcVar1)();
      return dVar12;
    }
  }
  else {
    do {
      this_01 = (this->Object).Reference;
      uVar22 = 0;
      if ((int)uVar9 < local_298.ArrayNum) {
        uVar22 = ~uVar9 >> 0x1f;
      }
      if (uVar22 == 0) {
        local_2a0 = (longlong)local_298.ArrayNum;
        local_2a8 = (longlong)(int)uVar9;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          dVar12 = (double)(*pcVar1)();
          return dVar12;
        }
      }
      pTVar7 = FWeightedLatticeImplicitObject::FEmbeddingCoordinate::UndeformedPosition
                         ((FEmbeddingCoordinate *)
                          (local_298.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x28),local_1a8
                          ,(TUniformGrid<double,3> *)&this->field_0x20);
      dVar12 = FLevelSet::PhiWithNormal(this_01,pTVar7,(TVector<double,3> *)local_200);
      uVar22 = uVar10;
      if (dVar12 < (double)CONCAT44(uVar17,uVar11)) {
        uVar11 = SUB84(dVar12,0);
        uVar17 = (undefined4)((ulonglong)dVar12 >> 0x20);
        local_268._16_8_ = local_200._16_8_;
        uVar18 = local_200._0_4_;
        uVar19 = local_200._4_4_;
        uVar20 = local_200._8_4_;
        uVar21 = local_200._12_4_;
        uVar22 = uVar9;
      }
      uVar9 = uVar9 + 1;
      uVar10 = uVar22;
    } while ((int)uVar9 < local_298.ArrayNum);
    uVar9 = 0;
    if ((int)uVar22 < local_298.ArrayNum) {
      uVar9 = ~uVar22 >> 0x1f;
    }
    if (uVar9 == 0) goto LAB_143ec7e79;
  }
  this_00 = (FEmbeddingCoordinate *)
            (local_298.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x28);
  FWeightedLatticeImplicitObject::FEmbeddingCoordinate::UndeformedPosition
            (this_00,(TVector<double,3> *)&local_250,(TUniformGrid<double,3> *)&this->field_0x20);
  uVar5 = local_268._16_8_;
  dVar12 = __real_3ff0000000000000;
  local_240 = local_240 - (double)local_268._16_8_ * (double)CONCAT44(uVar17,uVar11);
  uVar13 = CONCAT44(uVar21,uVar20);
  local_248 = local_248 - (double)uVar13 * (double)CONCAT44(uVar17,uVar11);
  uVar14 = CONCAT44(uVar19,uVar18);
  local_250 = local_250 - (double)uVar14 * (double)CONCAT44(uVar17,uVar11);
  local_288[0]._4_4_ =
       (undefined4)((local_248 - *(double *)&this->field_0x28) / *(double *)&this->field_0x68);
  local_288[0]._0_4_ =
       (undefined4)((local_250 - *(double *)&this->field_0x20) / *(double *)&this->field_0x60);
  local_288[0]._8_4_ =
       (undefined4)((local_240 - *(double *)&this->field_0x30) / *(double *)&this->field_0x70);
  if ((int)local_288[0]._0_4_ < *(int *)&this->field_0x50) {
    if ((int)local_288[0]._0_4_ < 0) {
      local_288[0]._0_4_ = 0;
    }
  }
  else {
    local_288[0]._0_4_ = *(int *)&this->field_0x50 + -1;
  }
  if ((int)local_288[0]._4_4_ < *(int *)&this->field_0x54) {
    if ((int)local_288[0]._4_4_ < 0) {
      local_288[0]._4_4_ = 0;
    }
  }
  else {
    local_288[0]._4_4_ = *(int *)&this->field_0x54 + -1;
  }
  if ((int)local_288[0]._8_4_ < *(int *)&this->field_0x58) {
    if ((int)local_288[0]._8_4_ < 0) {
      local_288[0]._8_4_ = 0;
    }
  }
  else {
    local_288[0]._8_4_ = *(int *)&this->field_0x58 + -1;
  }
  local_238 = (local_250 -
              ((double)(int)local_288[0]._0_4_ * *(double *)&this->field_0x60 +
              *(double *)&this->field_0x20)) / *(double *)&this->field_0x60;
  if (__real_3ff0000000000000 <= local_238) {
    local_238 = __real_3ff0000000000000;
  }
  if (local_238 <= 0.0) {
    local_238 = 0.0;
  }
  local_230 = (local_248 -
              ((double)(int)local_288[0]._4_4_ * *(double *)&this->field_0x68 +
              *(double *)&this->field_0x28)) / *(double *)&this->field_0x68;
  if (__real_3ff0000000000000 <= local_230) {
    local_230 = __real_3ff0000000000000;
  }
  if (local_230 <= 0.0) {
    local_230 = 0.0;
  }
  local_228 = (local_240 -
              ((double)(int)local_288[0]._8_4_ * *(double *)&this->field_0x70 +
              *(double *)&this->field_0x30)) / *(double *)&this->field_0x70;
  if (__real_3ff0000000000000 <= local_228) {
    local_228 = __real_3ff0000000000000;
  }
  if (local_228 <= 0.0) {
    local_228 = 0.0;
  }
  pFVar8 = FWeightedLatticeImplicitObject::FEmbeddingCoordinate::FEmbeddingCoordinate
                     (&local_178,(TVector<int,3> *)&local_288[0]._s_0,
                      (TVector<double,3> *)&local_238);
  uVar3 = *(undefined8 *)((longlong)&(pFVar8->CellIndex).field0_0x0 + 8);
  *(undefined8 *)&(param_3->CellIndex).field0_0x0 = *(undefined8 *)&(pFVar8->CellIndex).field0_0x0;
  *(undefined8 *)((longlong)&(param_3->CellIndex).field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)&(pFVar8->BarycentricCoordinate).field_0x8;
  *(undefined8 *)&param_3->BarycentricCoordinate = *(undefined8 *)&pFVar8->BarycentricCoordinate;
  *(undefined8 *)&(param_3->BarycentricCoordinate).field_0x8 = uVar3;
  *(undefined8 *)&(param_3->BarycentricCoordinate).field_0x10 =
       *(undefined8 *)&(pFVar8->BarycentricCoordinate).field_0x10;
  FWeightedLatticeImplicitObject::FEmbeddingCoordinate::DeformedPosition
            (param_3,(TVector<double,3> *)&local_220,
             (TArrayND<Chaos::TVector<double,3>,3> *)&this->field_0x180);
  local_218 = *(double *)&local_270->field_0x8 - local_218;
  local_220 = *(double *)local_270 - local_220;
  local_210 = *(double *)&local_270->field_0x10 - local_210;
  auVar15._0_8_ = local_218 * local_218;
  auVar15._8_8_ = 0;
  *(double *)param_2 = local_220;
  *(double *)&param_2->field_0x8 = local_218;
  *(double *)&param_2->field_0x10 = local_210;
  dVar4 = __real_3e45798ee0000000;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = local_220 * local_220 + auVar15._0_8_ + local_210 * local_210;
  auVar16 = sqrtpd(auVar15,auVar16);
  uVar9 = auVar16._0_4_;
  uVar22 = auVar16._4_4_;
  if ((double)CONCAT44(uVar17,uVar11) < 0.0) {
    uVar9 = uVar9 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar22 = uVar22 ^ __xmm_80000000000000008000000000000000._4_4_;
  }
  if (__real_3e45798ee0000000 <= auVar16._0_8_) {
    dVar12 = dVar12 / (double)CONCAT44(uVar22,uVar9);
    *(double *)param_2 = local_220 * dVar12;
    *(double *)&param_2->field_0x8 = local_218 * dVar12;
    *(double *)&param_2->field_0x10 = local_210 * dVar12;
  }
  else {
    FWeightedLatticeImplicitObject::FEmbeddingCoordinate::DeformationTransform
              (this_00,&local_148,(TArrayND<Chaos::TVector<double,3>,3> *)&this->field_0x180,
               (TUniformGrid<double,3> *)&this->field_0x20);
    dVar2 = (double)CONCAT44(uVar21,uVar20) * (double)CONCAT44(uVar21,uVar20) +
            (double)CONCAT44(uVar19,uVar18) * (double)CONCAT44(uVar19,uVar18) +
            (double)uVar5 * (double)uVar5;
    uVar3 = local_268._16_8_;
    if ((dVar2 != dVar12) &&
       (uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X, dVar4 <= dVar2)) {
      dVar12 = dVar12 / SQRT(dVar2);
      uVar13 = (double)CONCAT44(uVar21,uVar20) * dVar12;
      uVar3 = (double)uVar5 * dVar12;
      uVar14 = (double)CONCAT44(uVar19,uVar18) * dVar12;
    }
    *(double *)param_2 =
         local_148.M[1][0] * (double)uVar13 + local_148.M[0][0] * (double)uVar14 +
         local_148.M[2][0] * (double)uVar3 + local_148.M[3][0] * 0.0;
    *(double *)&param_2->field_0x8 =
         local_148.M[1][1] * (double)uVar13 + local_148.M[0][1] * (double)uVar14 +
         local_148.M[2][1] * (double)uVar3 + local_148.M[3][1] * 0.0;
    *(double *)&param_2->field_0x10 =
         local_148.M[1][2] * (double)uVar13 + local_148.M[0][2] * (double)uVar14 +
         local_148.M[2][2] * (double)uVar3 + local_148.M[3][2] * 0.0;
    TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
  }
LAB_143ec82f5:
  if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.AllocatorInstance.Data);
  }
  return (double)CONCAT44(uVar22,uVar9);
}

// Serialize @ 143ecbe80

void __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::Serialize
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this,FChaosArchive *param_1)

{
  longlong *plVar1;
  FChaosArchiveContext *pFVar2;
  FLevelSet *pFVar3;
  FLevelSet *pFVar4;
  longlong lVar5;
  void **ppvVar6;
  TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*> *pTVar7;
  undefined8 *puVar8;
  TPairInitializer<void_*_&&,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*_&&> local_res8;
  undefined8 *local_res18;
  FRefCountPtrHolder ***local_28;
  undefined8 **local_20;
  
  (**(code **)(*(longlong *)this + 0x118))(this,&local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&this->field_0x20);
  SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&this->field_0x38);
  operator<<<int,3>((FArchive *)param_1,(TVector<int,3> *)&this->field_0x50);
  SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&this->field_0x60);
  operator<<<int,3>((FArchive *)param_1,(TVector<int,3> *)&this->field_0x78);
  operator<<<Chaos::FWeightedLatticeInfluenceData_TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Chaos::FWeightedLatticeInfluenceData,TSizedDefaultAllocator<32>_> *)
                     &this->field_0x88);
  operator<<<FName,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FName,TSizedDefaultAllocator<32>_> *)&this->field_0x98);
  UE::Math::operator<<((FArchive *)param_1,(TTransform<double> *)&this->field_0xb0);
  operator<<<UE::Math::TTransform<double>_TSizedDefaultAllocator<32>_>
            (param_1,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                     &this->field_0x110);
  if ((param_1->_padding_ & 1) != 0) {
    FWeightedLatticeImplicitObject::SetEmptyCells((FWeightedLatticeImplicitObject *)this);
    FWeightedLatticeImplicitObject::InitializeDeformedPoints((FWeightedLatticeImplicitObject *)this)
    ;
    this->field_0x228 = 1;
  }
  local_res8.Key = (void **)(this->Object).Reference;
  FChaosArchive::SerializePtr<Chaos::FLevelSet>
            (param_1,(TSerializablePtr<Chaos::FLevelSet> *)&local_res8);
  ppvVar6 = local_res8.Key;
  if ((param_1->_padding_ & 1) != 0) {
    pFVar2 = (param_1->Context).Ptr;
    pTVar7 = TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
                     *)&pFVar2->ObjToRefCountPtrHolder,local_res8.Key);
    if ((pTVar7 == (TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*> *)0x0) ||
       (puVar8 = *(undefined8 **)&pTVar7->field_0x8, puVar8 == (undefined8 *)0x0)) {
      puVar8 = ::operator_new(0x10);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *puVar8 = &___7__TRefCountPtrHolder_VFLevelSet_Chaos___FChaosArchiveContext_Chaos__6B_;
        puVar8[1] = ppvVar6;
        if ((FLevelSet *)ppvVar6 != (FLevelSet *)0x0) {
          LOCK();
          *(int *)((longlong)ppvVar6 + 8) = (int)*(longlong *)((longlong)ppvVar6 + 8) + 1;
          UNLOCK();
        }
      }
      local_28 = &local_res8.Value;
      local_20 = &local_res18;
      local_res8.Value = ppvVar6;
      local_res18 = puVar8;
      TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<void_*_&&,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*_&&>_>
                ((TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
                  *)&pFVar2->ObjToRefCountPtrHolder,&local_res8,(bool *)&local_28);
    }
    pFVar3 = (FLevelSet *)puVar8[1];
    pFVar4 = (this->Object).Reference;
    if (pFVar4 != pFVar3) {
      (this->Object).Reference = pFVar3;
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
  return;
}

// StaticType @ 143ed1d40

uchar __cdecl Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::StaticType(void)

{
  return '&';
}

