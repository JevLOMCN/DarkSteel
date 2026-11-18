// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// ~FConstrainedMeshDeformerTask @ 14cc21f50

void __thiscall
FConstrainedMeshDeformerTask::~FConstrainedMeshDeformerTask(FConstrainedMeshDeformerTask *this)

{
  IConstrainedMeshSolver *pIVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FConstrainedMeshDeformerTask__6B_;
  pIVar1 = (this->ConstrainedDeformer).Ptr;
  if (pIVar1 != (IConstrainedMeshSolver *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar2 = (this->SubsetVertexIDToSrcVertexIDMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this->SubsetMesh);
  pFVar2 = (this->WeightAttenuationCurve).Keys.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->WeightAttenuationCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar3 = (void *)(this->WeightAttenuationCurve)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined4 *)&(this->WeightAttenuationCurve)._padding_ = 0;
  pvVar3 = (void *)(this->WeightAttenuationCurve)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->WeightAttenuationCurve)._padding_);
  pFVar2 = (this->SubsetConstraintBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SubsetPositionBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ApplyAttenuation @ 14cc345a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FConstrainedMeshDeformerTask::ApplyAttenuation(FConstrainedMeshDeformerTask *this)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  double *pdVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  ulonglong uVar14;
  byte bVar15;
  ForElementType<FSetElementId> FVar16;
  undefined4 uVar17;
  float fVar18;
  double dVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  uint local_1d8 [2];
  double local_1d0 [6];
  int local_1a0 [2];
  double local_198 [6];
  TVector<double>_u_0 local_168;
  double local_148 [4];
  double local_128 [4];
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_208;
  uVar23 = SUB84(__real_0010000000000000,0);
  uVar24 = (undefined4)((ulonglong)__real_0010000000000000 >> 0x20);
  iVar8 = (this->SubsetConstraintBuffer).ArrayNum;
  uVar14 = 0;
  uVar17 = SUB84(__real_7fefffffffffffff,0);
  uVar20 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_198[2] = __real_7fefffffffffffff;
  local_1d0[2] = __real_0010000000000000;
  local_198[5] = __real_7fefffffffffffff;
  local_1d0[5] = __real_0010000000000000;
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._48_4_ = 0xffffffff;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  local_1d8[0] = 0;
  local_198[0] = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_198[1] = _UNK_150a9e648;
  local_1d0[0] = ___xmm_00100000000000000010000000000000;
  local_1d0[1] = _UNK_152953648;
  local_198[3] = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_198[4] = _UNK_150a9e648;
  local_1d0[3] = ___xmm_00100000000000000010000000000000;
  local_1d0[4] = _UNK_152953648;
  uVar11 = uVar14;
  if (0 < iVar8) {
    do {
      iVar8 = (this->SubsetConstraintBuffer).ArrayNum;
      uVar13 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar13 < iVar8) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_1e8 = (longlong)(int)uVar13;
        local_1e0 = (longlong)iVar8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = (this->SubsetConstraintBuffer).AllocatorInstance.Data;
      bVar15 = 0;
      lVar9 = (longlong)(int)uVar13;
      local_148[0] = *(double *)(pFVar4 + lVar9 * 0x28);
      local_148[1] = (double)*(undefined8 *)(pFVar4 + lVar9 * 0x28 + 8);
      local_148[2] = (double)*(undefined8 *)(pFVar4 + lVar9 * 0x28 + 0x10);
      uVar11 = uVar14;
      do {
        pdVar10 = (double *)((longlong)local_148 + uVar11);
        dVar19 = *pdVar10;
        dVar2 = dVar19;
        if (*(double *)((longlong)local_198 + uVar11) < *pdVar10 ||
            *(double *)((longlong)local_198 + uVar11) == *pdVar10) {
          dVar2 = *(double *)((longlong)local_198 + uVar11);
        }
        *(double *)((longlong)local_198 + uVar11) = dVar2;
        if (dVar19 < *(double *)((longlong)local_1d0 + uVar11) ||
            dVar19 == *(double *)((longlong)local_1d0 + uVar11)) {
          dVar19 = *(double *)((longlong)local_1d0 + uVar11);
        }
        else {
          dVar19 = *pdVar10;
        }
        *(double *)((longlong)local_1d0 + uVar11) = dVar19;
        bVar15 = bVar15 + 1;
        uVar11 = uVar11 + 8;
      } while (bVar15 < 3);
      dVar19 = *(double *)(pFVar4 + lVar9 * 0x28 + 0x18);
      if (0.0 < dVar19) {
        if ((double)CONCAT44(uVar20,uVar17) <= dVar19) {
          dVar19 = (double)CONCAT44(uVar20,uVar17);
        }
        local_128[2] = (double)*(undefined8 *)(pFVar4 + lVar9 * 0x28 + 0x10);
        bVar15 = 0;
        uVar17 = SUB84(dVar19,0);
        uVar20 = (undefined4)((ulonglong)dVar19 >> 0x20);
        local_128[0] = *(double *)(pFVar4 + lVar9 * 0x28);
        local_128[1] = (double)*(undefined8 *)(pFVar4 + lVar9 * 0x28 + 8);
        uVar11 = uVar14;
        do {
          pdVar10 = (double *)((longlong)local_128 + uVar11);
          dVar19 = *(double *)((longlong)local_198 + uVar11 + 0x18);
          dVar2 = *pdVar10;
          dVar3 = dVar2;
          if (dVar19 < *pdVar10 || dVar19 == *pdVar10) {
            dVar3 = *(double *)((longlong)local_198 + uVar11 + 0x18);
          }
          *(double *)((longlong)local_198 + uVar11 + 0x18) = dVar3;
          pdVar1 = (double *)((longlong)local_1d0 + uVar11 + 0x18);
          if (dVar2 < *pdVar1 || dVar2 == *pdVar1) {
            dVar19 = *(double *)((longlong)local_1d0 + uVar11 + 0x18);
          }
          else {
            dVar19 = *pdVar10;
          }
          *(double *)((longlong)local_1d0 + uVar11 + 0x18) = dVar19;
          bVar15 = bVar15 + 1;
          uVar11 = uVar11 + 8;
        } while (bVar15 < 3);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_b8,local_1a0,(bool *)local_1d8);
      }
      iVar8 = (this->SubsetConstraintBuffer).ArrayNum;
      local_1d8[0] = local_1d8[0] + 1;
      uVar11 = (ulonglong)local_1d8[0];
    } while ((int)local_1d8[0] < iVar8);
    uVar23 = SUB84(local_1d0[2],0);
    uVar24 = (undefined4)((ulonglong)local_1d0[2] >> 0x20);
  }
  dVar2 = __real_3ff0000000000000;
  dVar19 = (double)CONCAT44(uVar24,uVar23) - local_198[2];
  auVar25._0_8_ =
       (local_1d0[1] - local_198[1]) * (local_1d0[1] - local_198[1]) +
       (local_1d0[0] - local_198[0]) * (local_1d0[0] - local_198[0]) + dVar19 * dVar19;
  auVar25._8_8_ = 0;
  auVar25 = sqrtpd(unaff_XMM8,auVar25);
  uVar11 = uVar14;
  lVar9 = local_b8.Elements._0_8_;
  FVar16 = local_b8.Hash.SecondaryData;
  if (0 < iVar8) {
    do {
      uVar7 = (uint)uVar11;
      if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
        FVar12 = (ForElementType<FSetElementId>)&local_b8.Hash;
        if (FVar16 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar16;
        }
        for (iVar8 = *(int *)((longlong)FVar12 + (local_b8.HashSize - 1 & uVar11) * 4); iVar8 != -1;
            iVar8 = *(int *)(lVar9 + 4 + (longlong)iVar8 * 0xc)) {
          if (*(uint *)(lVar9 + (longlong)iVar8 * 0xc) == uVar7) {
            if (iVar8 != -1) goto LAB_14cc349e1;
            break;
          }
        }
      }
      iVar8 = (this->SubsetConstraintBuffer).ArrayNum;
      uVar13 = 0;
      if ((int)uVar7 < iVar8) {
        uVar13 = ~uVar7 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_1e8 = (longlong)(int)uVar7;
        local_1e0 = (longlong)iVar8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = (this->SubsetConstraintBuffer).AllocatorInstance.Data;
      local_108._s_0.X = local_1d0[3];
      local_108._s_0.Y = local_1d0[4];
      local_108._s_0.Z = local_1d0[5];
      local_f0._s_0.X = local_198[3];
      local_f0._s_0.Y = local_198[4];
      local_d8._s_0.X = (double)*(undefined8 *)(pFVar4 + uVar14);
      local_d8._s_0.Y = (double)*(undefined8 *)(pFVar4 + uVar14 + 8);
      local_f0._s_0.Z = local_198[5];
      local_d8._s_0.Z = (double)*(undefined8 *)(pFVar4 + uVar14 + 0x10);
      FMath::ClosestPointOnSegment<double>
                ((TVector<double> *)&local_168._s_0,(TVector<double> *)&local_d8._s_0,
                 (TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_108._s_0);
      auVar21._0_8_ =
           (local_168._s_0.X - *(double *)(pFVar4 + uVar14)) *
           (local_168._s_0.X - *(double *)(pFVar4 + uVar14));
      auVar21._8_8_ = 0;
      auVar22._8_8_ = 0;
      auVar22._0_8_ =
           (local_168._s_0.Y - *(double *)(pFVar4 + uVar14 + 8)) *
           (local_168._s_0.Y - *(double *)(pFVar4 + uVar14 + 8)) + auVar21._0_8_ +
           (local_168._s_0.Z - *(double *)(pFVar4 + uVar14 + 0x10)) *
           (local_168._s_0.Z - *(double *)(pFVar4 + uVar14 + 0x10));
      auVar22 = sqrtpd(auVar21,auVar22);
      fVar18 = FRichCurve::Eval(&this->WeightAttenuationCurve,
                                (float)(auVar22._0_8_ * (dVar2 / auVar25._0_8_)),0.0);
      *(double *)(pFVar4 + uVar14 + 0x18) = (double)fVar18 * (double)CONCAT44(uVar20,uVar17);
      lVar9 = local_b8.Elements._0_8_;
      FVar16 = local_b8.Hash.SecondaryData;
LAB_14cc349e1:
      uVar14 = uVar14 + 0x28;
      uVar11 = (ulonglong)(uVar7 + 1);
    } while ((int)(uVar7 + 1) < (this->SubsetConstraintBuffer).ArrayNum);
  }
  local_b8.HashSize = 0;
  if (FVar16 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar16);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  return;
}

// DoWork @ 14cc53890

void __thiscall FConstrainedMeshDeformerTask::DoWork(FConstrainedMeshDeformerTask *this)

{
  TUniquePtr<UE::Solvers::IConstrainedMeshSolver,TDefaultDelete<UE::Solvers::IConstrainedMeshSolver>_>
  *pTVar1;
  IConstrainedMeshSolver *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TUniquePtr<UE::Solvers::IConstrainedMeshSolver,TDefaultDelete<UE::Solvers::IConstrainedMeshSolver>_>
  TVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *local_res8;
  
  if (*this->bAbortSource != true) {
    if (this->bIsNewTransaction == false) {
      uVar8 = 0;
      if (0 < (this->SubsetConstraintBuffer).ArrayNum) {
        lVar9 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar8 < (this->SubsetConstraintBuffer).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pIVar2 = (this->ConstrainedDeformer).Ptr;
          pFVar7 = (this->SubsetConstraintBuffer).AllocatorInstance.Data + lVar9;
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,uVar8,pFVar7,pFVar7[0x20]);
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x28;
        } while ((int)uVar8 < (this->SubsetConstraintBuffer).ArrayNum);
      }
    }
    else {
      TVar6 = UE::MeshDeformation::ConstructConstrainedMeshDeformer
                        ((ELaplacianWeightScheme)&local_res8,
                         (FDynamicMesh3 *)(ulonglong)this->LaplacianWeightScheme);
      pTVar1 = &this->ConstrainedDeformer;
      if ((IConstrainedMeshSolver *)pTVar1 != TVar6.Ptr) {
        pIVar2 = pTVar1->Ptr;
        pTVar1->Ptr = (IConstrainedMeshSolver *)*TVar6.Ptr;
        *TVar6.Ptr = (IConstrainedMeshSolver)0x0;
        if (pIVar2 != (IConstrainedMeshSolver *)0x0) {
          (**(code **)*pIVar2)(pIVar2,1);
        }
      }
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
      if (this->bAttenuateWeights != false) {
        ApplyAttenuation(this);
      }
      uVar8 = 0;
      if (0 < (this->SubsetConstraintBuffer).ArrayNum) {
        lVar9 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar8 < (this->SubsetConstraintBuffer).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar7 = (this->SubsetConstraintBuffer).AllocatorInstance.Data + lVar9;
          (**(code **)((longlong)*pTVar1->Ptr + 8))
                    (pTVar1->Ptr,uVar8,*(undefined8 *)(pFVar7 + 0x18),pFVar7,pFVar7[0x20]);
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x28;
        } while ((int)uVar8 < (this->SubsetConstraintBuffer).ArrayNum);
      }
      this->bIsNewTransaction = false;
    }
    if (*this->bAbortSource != true) {
      pIVar2 = (this->ConstrainedDeformer).Ptr;
                    /* WARNING: Could not recover jumptable at 0x00014cc53a69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,&this->SubsetPositionBuffer);
      return;
    }
  }
  return;
}

// ExportResults @ 14cc572d0

void __thiscall
FConstrainedMeshDeformerTask::ExportResults
          (FConstrainedMeshDeformerTask *this,FDynamicMesh3 *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  undefined8 *puVar2;
  atomic<unsigned_char> aVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  
  uVar15 = 0;
  if (0 < (this->SubsetVertexIDToSrcVertexIDMap).ArrayNum) {
    lVar14 = 0;
    lVar16 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar15 < (this->SubsetVertexIDToSrcVertexIDMap).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar11 = *(uint *)((this->SubsetVertexIDToSrcVertexIDMap).AllocatorInstance.Data + lVar16);
      uVar12 = 0;
      if ((int)uVar15 < (this->SubsetPositionBuffer).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->SubsetPositionBuffer).AllocatorInstance.Data;
      uVar4 = *(undefined8 *)(pFVar5 + lVar14 + 0x10);
      uVar8 = *(undefined8 *)(pFVar5 + lVar14 + 8);
      sVar10 = _dclass(*(undefined8 *)(pFVar5 + lVar14));
      if (((sVar10 < 1) && (sVar10 = _dclass(uVar8), sVar10 < 1)) &&
         (sVar10 = _dclass(uVar4), sVar10 < 1)) {
        uVar8 = *(undefined8 *)(pFVar5 + lVar14 + 8);
        uVar13 = (ulonglong)(uVar11 & 0x1ff);
        uVar4 = *(undefined8 *)(pFVar5 + lVar14 + 0x10);
        lVar6 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar6 + uVar13 * 0x18);
        *puVar2 = *(undefined8 *)(pFVar5 + lVar14);
        puVar2[1] = uVar8;
        *(undefined8 *)(lVar6 + 0x10 + uVar13 * 0x18) = uVar4;
        if ((param_1->ChangeStampShape).bIsEnabled != false) {
          this_00 = &(param_1->ChangeStampShape).Mutex;
          LOCK();
          bVar9 = this_00->State == (atomic<unsigned_char>)0x0;
          if (bVar9) {
            this_00->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar9) {
            UE::FMutex::LockSlow(this_00);
          }
          puVar1 = &(param_1->ChangeStampShape).Value;
          *puVar1 = *puVar1 + 1;
          LOCK();
          aVar3 = this_00->State;
          this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
          UNLOCK();
          if (((byte)aVar3 & 2) != 0) {
            UE::FMutex::WakeWaitingThread(this_00);
          }
        }
      }
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 4;
      lVar14 = lVar14 + 0x18;
    } while ((int)uVar15 < (this->SubsetVertexIDToSrcVertexIDMap).ArrayNum);
  }
  UE::Geometry::FMeshNormals::QuickRecomputeOverlayNormals(param_1,false,true,true,true);
  return;
}

// InitializeSubsetMesh @ 14cc60d10

void __thiscall
FConstrainedMeshDeformerTask::InitializeSubsetMesh
          (FConstrainedMeshDeformerTask *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int *piVar2;
  FDynamicMesh3 *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  double *pdVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int local_res18 [2];
  FIndex3i_u_0 local_98;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  TVector<double>_u_0 local_78;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  float local_4c;
  TVector2<float>_u_0 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  
  this_00 = &this->SubsetMesh;
  UE::Geometry::FDynamicMesh3::Clear(this_00);
  (this->SubsetPositionBuffer).ArrayNum = 0;
  lVar15 = 8;
  if ((this->SubsetPositionBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->SubsetPositionBuffer).AllocatorInstance,0,
               &(this->SubsetPositionBuffer).ArrayMax);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_res18[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_88,local_res18,this->SrcMeshMaxVertexID);
  iVar10 = param_2->ArrayNum;
  if (0 < iVar10) {
    uVar11 = 2;
    do {
      local_98._0_8_ = 0xffffffffffffffff;
      local_98._s_0.C = -1;
      uVar12 = 0;
      if ((int)(uVar11 - 2) < iVar10) {
        uVar12 = ~(uVar11 - 2) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar12 = *(uint *)((param_2->AllocatorInstance).Data + lVar15 + -8);
      uVar9 = 0;
      if ((int)uVar12 < local_88.ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 4;
      iVar10 = *(int *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
      if (iVar10 == -1) {
        local_40 = 0;
        local_3e = 0;
        lVar6 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
        pdVar5 = (double *)(lVar6 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
        local_78._s_0.X = *pdVar5;
        local_78._s_0.Y = pdVar5[1];
        local_78._s_0.Z = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
        local_58 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_4c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_60 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_54 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_48 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        iVar10 = UE::Geometry::FDynamicMesh3::AppendVertex(this_00,(FVertexInfo *)&local_78._s_0);
        *(int *)pFVar4 = iVar10;
      }
      local_98._s_0.A = iVar10;
      uVar12 = 0;
      if ((int)(uVar11 - 1) < param_2->ArrayNum) {
        uVar12 = ~(uVar11 - 1) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar12 = *(uint *)((param_2->AllocatorInstance).Data + lVar15 + -4);
      uVar9 = 0;
      if ((int)uVar12 < local_88.ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 4;
      iVar10 = *(int *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
      if (iVar10 == -1) {
        local_40 = 0;
        local_3e = 0;
        lVar6 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
        pdVar5 = (double *)(lVar6 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
        local_78._s_0.X = *pdVar5;
        local_78._s_0.Y = pdVar5[1];
        local_78._s_0.Z = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
        local_58 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_4c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_60 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_54 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_48 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        iVar10 = UE::Geometry::FDynamicMesh3::AppendVertex(this_00,(FVertexInfo *)&local_78._s_0);
        *(int *)pFVar4 = iVar10;
      }
      local_98._s_0.B = iVar10;
      uVar12 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar12 = *(uint *)((param_2->AllocatorInstance).Data + lVar15);
      uVar9 = 0;
      if ((int)uVar12 < local_88.ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 4;
      iVar10 = *(int *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
      if (iVar10 == -1) {
        local_40 = 0;
        local_3e = 0;
        lVar6 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
        pdVar5 = (double *)(lVar6 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
        local_78._s_0.X = *pdVar5;
        local_78._s_0.Y = pdVar5[1];
        local_78._s_0.Z = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
        local_58 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_4c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_60 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_54 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_48 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        iVar10 = UE::Geometry::FDynamicMesh3::AppendVertex(this_00,(FVertexInfo *)&local_78._s_0);
        *(int *)pFVar4 = iVar10;
      }
      local_98._s_0.C = iVar10;
      UE::Geometry::FDynamicMesh3::AppendTriangle(this_00,(FIndex3i *)&local_98._s_0,0);
      iVar10 = param_2->ArrayNum;
      lVar15 = lVar15 + 0xc;
      iVar1 = uVar11 + 1;
      uVar11 = uVar11 + 3;
    } while (iVar1 < iVar10);
  }
  uVar13 = 0;
  pTVar3 = &this->SubsetVertexIDToSrcVertexIDMap;
  uVar11 = (this->SubsetMesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
           (this->SubsetMesh).VertexRefCounts.RefCounts.CurBlockUsed;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar2 = &(this->SubsetVertexIDToSrcVertexIDMap).ArrayMax;
  (this->SubsetVertexIDToSrcVertexIDMap).ArrayNum = 0;
  if ((this->SubsetVertexIDToSrcVertexIDMap).ArrayMax < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&pTVar3->AllocatorInstance,0,piVar2);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar11,&pTVar3->AllocatorInstance,&(this->SubsetVertexIDToSrcVertexIDMap).ArrayNum,
             piVar2);
  uVar14 = uVar13;
  iVar10 = local_88.ArrayNum;
  if (0 < local_88.ArrayNum) {
    do {
      uVar12 = (uint)uVar13;
      uVar11 = 0;
      if ((int)uVar12 < iVar10) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = local_88.ArrayNum;
      }
      uVar11 = *(uint *)(local_88.AllocatorInstance.Data + uVar14);
      if (uVar11 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar11 < (this->SubsetVertexIDToSrcVertexIDMap).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar11 * 4) = uVar12;
        iVar10 = local_88.ArrayNum;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 4;
    } while ((int)(uVar12 + 1) < iVar10);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// UpdateDeformer @ 14cc849e0

void __thiscall
FConstrainedMeshDeformerTask::UpdateDeformer
          (FConstrainedMeshDeformerTask *this,ELaplacianWeightScheme param_1,FDynamicMesh3 *param_2,
          TArray<FDeformerVertexConstraintData,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,bool param_5,FRichCurve *param_6)

{
  int *piVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  
  this->bIsNewTransaction = param_5;
  this->SrcMeshMaxVertexID =
       (param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
       (param_2->VertexRefCounts).RefCounts.CurBlockUsed;
  this->LaplacianWeightScheme = param_1;
  this->bAttenuateWeights = param_6 != (FRichCurve *)0x0;
  if (param_6 != (FRichCurve *)0x0) {
    pTVar2 = &(this->WeightAttenuationCurve).Keys;
    *(int *)&(this->WeightAttenuationCurve)._padding_ = (int)param_6->_padding_;
    *(undefined1 *)((longlong)&(this->WeightAttenuationCurve)._padding_ + 4) =
         *(undefined1 *)((longlong)&param_6->_padding_ + 4);
    *(undefined1 *)((longlong)&(this->WeightAttenuationCurve)._padding_ + 5) =
         *(undefined1 *)((longlong)&param_6->_padding_ + 5);
    if (pTVar2 != &param_6->Keys) {
      iVar3 = (param_6->Keys).ArrayNum;
      piVar1 = &(this->WeightAttenuationCurve).Keys.ArrayMax;
      pFVar5 = (param_6->Keys).AllocatorInstance.Data;
      iVar4 = *piVar1;
      (this->WeightAttenuationCurve).Keys.ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,iVar4,&pTVar2->AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar3 * 0x1c);
        }
      }
    }
  }
  if (this->bIsNewTransaction != false) {
    InitializeSubsetMesh(this,param_2,param_4);
  }
  uVar13 = (this->SubsetVertexIDToSrcVertexIDMap).ArrayNum;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &(this->SubsetConstraintBuffer).ArrayMax;
  (this->SubsetConstraintBuffer).ArrayNum = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar13,&(this->SubsetConstraintBuffer).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,uVar13,&(this->SubsetConstraintBuffer).AllocatorInstance,
             &(this->SubsetConstraintBuffer).ArrayNum,piVar1);
  uVar13 = 0;
  if (0 < (this->SubsetVertexIDToSrcVertexIDMap).ArrayNum) {
    lVar15 = 0;
    lVar14 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar13 < (this->SubsetVertexIDToSrcVertexIDMap).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = *(uint *)((this->SubsetVertexIDToSrcVertexIDMap).AllocatorInstance.Data + lVar14);
      lVar12 = (longlong)(int)uVar10;
      uVar11 = 0;
      if ((int)uVar10 < param_3->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (param_3->AllocatorInstance).Data;
      uVar10 = 0;
      if ((int)uVar13 < (this->SubsetConstraintBuffer).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->SubsetConstraintBuffer).AllocatorInstance.Data;
      uVar13 = uVar13 + 1;
      uVar8 = *(undefined8 *)(pFVar5 + lVar12 * 0x28 + 8);
      lVar14 = lVar14 + 4;
      *(undefined8 *)(pFVar6 + lVar15) = *(undefined8 *)(pFVar5 + lVar12 * 0x28);
      *(undefined8 *)(pFVar6 + lVar15 + 8) = uVar8;
      *(undefined8 *)(pFVar6 + lVar15 + 0x10) = *(undefined8 *)(pFVar5 + lVar12 * 0x28 + 0x10);
      *(undefined8 *)(pFVar6 + lVar15 + 0x18) = *(undefined8 *)(pFVar5 + lVar12 * 0x28 + 0x18);
      pFVar6[lVar15 + 0x20] = pFVar5[lVar12 * 0x28 + 0x20];
      lVar15 = lVar15 + 0x28;
    } while ((int)uVar13 < (this->SubsetVertexIDToSrcVertexIDMap).ArrayNum);
  }
  if (((this->bIsNewTransaction == false) &&
      ((this->ConstrainedDeformer).Ptr == (IConstrainedMeshSolver *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsNewTransaction || ConstrainedDeformer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DeformMeshPolygonsTool.cpp"
                         ,0x157,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

