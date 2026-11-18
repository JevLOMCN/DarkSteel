// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 13

// `dynamic_initializer_for_'end'' @ 1413ae770

void __cdecl Eigen::placeholders::_dynamic_initializer_for__end__(void)

{
  end = lastp1;
  return;
}

// conservative_sparse_sparse_product_impl<Eigen::SparseMatrix<double,0,__int64>,Eigen::SparseMatrix<double,0,int>,Eigen::SparseMatrix<double,0,int>_> @ 14c936110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Eigen::internal::
conservative_sparse_sparse_product_impl<Eigen::SparseMatrix<double,0,__int64>,Eigen::SparseMatrix<double,0,int>,Eigen::SparseMatrix<double,0,int>_>
          (SparseMatrix<double,0,__int64> *param_1,SparseMatrix<double,0,int> *param_2,
          SparseMatrix<double,0,int> *param_3,bool param_4)

{
  ulong64 uVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  long64 *plVar5;
  double *pdVar6;
  double dVar7;
  int iVar8;
  uint uVar9;
  scalar_sum_op<int,int> *_Dst;
  longlong lVar10;
  scalar_sum_op<int,int> *psVar11;
  ulonglong uVar12;
  long64 lVar13;
  double *pdVar14;
  int *piVar15;
  longlong lVar16;
  undefined1 *puVar17;
  long64 *plVar18;
  SparseMatrix<double,0,int> *pSVar19;
  longlong lVar20;
  SparseMatrix<double,0,int> *pSVar21;
  longlong lVar22;
  CompressedStorage<double,int> *this;
  void *pvVar23;
  undefined1 auStack_128 [32];
  char local_108;
  char local_107;
  longlong local_100;
  scalar_sum_op<int,int> local_f8 [8];
  SparseMatrix<double,0,int> *local_f0;
  scalar_sum_op<int,int> *local_e8;
  long64 *local_e0;
  scalar_sum_op<int,int> *local_d8;
  ulonglong local_d0;
  longlong local_c8;
  long64 local_c0;
  SparseMatrix<double,0,int> *local_b8;
  double *local_b0;
  SparseMatrix<double,0,__int64> *local_a8;
  CompressedStorage<double,int> *local_a0;
  ulong64 local_98;
  int *local_90 [2];
  longlong local_80;
  Map<Eigen::Matrix<int,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)&local_108;
  uVar4 = param_1->m_innerSize;
  local_c0 = param_2->m_outerSize;
  local_107 = param_4;
  local_f0 = param_3;
  local_d0 = uVar4;
  local_b8 = param_2;
  local_a8 = param_1;
  if (uVar4 < 0x20001) {
    uVar12 = uVar4 + 0x1e;
    if (uVar12 <= uVar4 + 0xf) {
      uVar12 = 0xffffffffffffff0;
    }
    local_108 = '\0';
    _Dst = local_f8 + -(uVar12 & 0xfffffffffffffff0) + -8;
    puVar17 = auStack_128 + -(uVar12 & 0xfffffffffffffff0);
    local_e8 = _Dst;
    local_d8 = _Dst;
  }
  else {
    _Dst = FMemory_Malloc(uVar4,0x10);
    local_e8 = _Dst;
    if (_Dst == (scalar_sum_op<int,int> *)0x0) {
      ::operator_new(0xffffffffffffffff);
    }
    local_108 = '\x01';
    puVar17 = auStack_128;
    local_d8 = _Dst;
    if (0x1fffffffffffffff < uVar4) {
      ::operator_new(0xffffffffffffffff);
      puVar17 = auStack_128;
      local_e8 = _Dst;
    }
  }
  uVar1 = uVar4 * 8;
  local_98 = uVar1;
  if (uVar1 < 0x20001) {
    uVar12 = uVar1 + 0x1e;
    if (uVar12 <= uVar1 + 0xf) {
      uVar12 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar17 + -8) = 0x14c936252;
    pvVar23 = (void *)((ulonglong)(puVar17 + -(uVar12 & 0xfffffffffffffff0) + 0x2f) &
                      0xfffffffffffffff0);
    puVar17 = puVar17 + -(uVar12 & 0xfffffffffffffff0);
  }
  else {
    *(undefined8 *)(puVar17 + -8) = 0x14c936271;
    pvVar23 = FMemory_Malloc(uVar1,0x10);
    if (pvVar23 == (void *)0x0) {
      *(undefined8 *)(puVar17 + -8) = 0x14c936285;
      ::operator_new(0xffffffffffffffff);
    }
  }
  if (0x1fffffffffffffff < uVar4) {
    *(undefined8 *)(puVar17 + -8) = 0x14c9362a4;
    ::operator_new(0xffffffffffffffff);
  }
  if (uVar1 < 0x20001) {
    uVar12 = uVar1 + 0x1e;
    if (uVar12 <= uVar1 + 0xf) {
      uVar12 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar17 + -8) = 0x14c9362c9;
    plVar18 = (long64 *)
              ((ulonglong)(puVar17 + -(uVar12 & 0xfffffffffffffff0) + 0x2f) & 0xfffffffffffffff0);
    puVar17 = puVar17 + -(uVar12 & 0xfffffffffffffff0);
    local_e0 = plVar18;
  }
  else {
    *(undefined8 *)(puVar17 + -8) = 0x14c9362ec;
    plVar18 = FMemory_Malloc(uVar1,0x10);
    local_e0 = plVar18;
    if (plVar18 == (long64 *)0x0) {
      *(undefined8 *)(puVar17 + -8) = 0x14c936304;
      ::operator_new(0xffffffffffffffff);
    }
  }
  *(undefined8 *)(puVar17 + -8) = 0x14c936311;
  memset(_Dst,0,uVar4);
  pSVar21 = local_b8;
  piVar15 = local_b8->m_innerNonZeros;
  lVar20 = local_b8->m_outerSize;
  if (piVar15 == (int *)0x0) {
    lVar20 = (longlong)(local_b8->m_outerIndex[lVar20] - *local_b8->m_outerIndex);
  }
  else if (lVar20 == 0) {
    lVar20 = 0;
  }
  else {
    local_90[0] = piVar15;
    local_80 = lVar20;
    local_78._padding_ = (longlong)piVar15;
    local_78._padding_ = lVar20;
    *(undefined8 *)(puVar17 + -8) = 0x14c93636a;
    iVar8 = redux_impl<Eigen::internal::scalar_sum_op<int,int>,Eigen::internal::redux_evaluator<Eigen::Map<Eigen::Matrix<int,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_>,3,0>
            ::run<Eigen::Map<Eigen::Matrix<int,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_>
                      ((redux_evaluator<Eigen::Map<Eigen::Matrix<int,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_>
                        *)local_90,local_f8,&local_78);
    lVar20 = (longlong)iVar8;
  }
  plVar5 = param_1->m_innerNonZeros;
  lVar22 = param_1->m_outerSize;
  if (plVar5 == (long64 *)0x0) {
    lVar13 = param_1->m_outerIndex[lVar22] - *param_1->m_outerIndex;
  }
  else if (lVar22 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *plVar5;
    lVar16 = 1;
    if (1 < lVar22) {
      do {
        lVar13 = lVar13 + plVar5[lVar16];
        lVar16 = lVar16 + 1;
      } while (lVar16 < lVar22);
    }
  }
  lVar22 = param_3->m_outerSize;
  piVar15 = param_3->m_outerIndex;
  (param_3->m_data).m_size = 0;
  *(undefined8 *)(puVar17 + -8) = 0x14c9363cf;
  memset(piVar15,0,lVar22 * 4 + 4);
  piVar15 = param_3->m_innerNonZeros;
  if (piVar15 != (int *)0x0) {
    lVar22 = param_3->m_outerSize;
    *(undefined8 *)(puVar17 + -8) = 0x14c9363e7;
    memset(piVar15,0,lVar22 << 2);
  }
  this = &param_3->m_data;
  lVar20 = (param_3->m_data).m_size + lVar13 + lVar20;
  local_a0 = this;
  if ((param_3->m_data).m_allocatedSize < lVar20) {
    *(undefined8 *)(puVar17 + -8) = 0x14c936404;
    CompressedStorage<double,int>::reallocate(this,lVar20);
  }
  dVar7 = __real_3ff0000000000000;
  local_100 = 0;
  if (0 < local_c0) {
    local_c8 = 0;
    do {
      uVar4 = local_d0;
      pSVar19 = local_f0;
      uVar12 = 0;
      local_f0->m_outerIndex[local_100 + 1] = *(int *)(local_c8 + (longlong)local_f0->m_outerIndex);
      local_b0 = (pSVar21->m_data).m_values;
      lVar20 = (longlong)pSVar21->m_outerIndex[local_100];
      if (pSVar21->m_innerNonZeros == (int *)0x0) {
        lVar22 = (longlong)pSVar21->m_outerIndex[local_100 + 1];
      }
      else {
        lVar22 = pSVar21->m_innerNonZeros[local_100] + lVar20;
      }
      if (lVar20 < lVar22) {
        piVar15 = (pSVar21->m_data).m_indices + lVar20;
        do {
          lVar10 = (longlong)*piVar15;
          dVar2 = local_b0[lVar20];
          pdVar6 = (local_a8->m_data).m_values;
          plVar5 = (local_a8->m_data).m_indices;
          lVar16 = local_a8->m_outerIndex[lVar10];
          if (local_a8->m_innerNonZeros == (long64 *)0x0) {
            lVar13 = local_a8->m_outerIndex[lVar10 + 1];
          }
          else {
            lVar13 = local_a8->m_innerNonZeros[lVar10] + lVar16;
          }
          if (lVar16 < lVar13) {
            pdVar14 = pdVar6 + lVar16;
            lVar16 = lVar13 - lVar16;
            do {
              lVar10 = *(longlong *)((longlong)pdVar14 + ((longlong)plVar5 - (longlong)pdVar6));
              dVar3 = *pdVar14;
              if (_Dst[lVar10] == (scalar_sum_op<int,int>)0x0) {
                _Dst[lVar10] = (scalar_sum_op<int,int>)0x1;
                *(double *)((longlong)pvVar23 + lVar10 * 8) = dVar2 * dVar3;
                plVar18[uVar12] = lVar10;
                uVar12 = uVar12 + 1;
              }
              else {
                *(double *)((longlong)pvVar23 + lVar10 * 8) =
                     dVar2 * dVar3 + *(double *)((longlong)pvVar23 + lVar10 * 8);
              }
              pdVar14 = pdVar14 + 1;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          lVar20 = lVar20 + 1;
          piVar15 = piVar15 + 1;
          this = local_a0;
        } while (lVar20 < lVar22);
      }
      if (local_107 == '\0') {
        lVar20 = 0;
        if (0 < (longlong)uVar12) {
          do {
            lVar22 = plVar18[lVar20];
            iVar8 = local_f0->m_outerIndex[local_100 + 1];
            dVar2 = *(double *)((longlong)pvVar23 + lVar22 * 8);
            local_f0->m_outerIndex[local_100 + 1] = iVar8 + 1;
            lVar16 = this->m_size;
            *(undefined8 *)(puVar17 + -8) = 0x14c93659e;
            CompressedStorage<double,int>::resize(this,lVar16 + 1,dVar7);
            lVar20 = lVar20 + 1;
            this->m_values[lVar16] = 0.0;
            this->m_indices[lVar16] = (int)lVar22;
            this->m_values[iVar8] = dVar2;
            local_e8[lVar22] = (scalar_sum_op<int,int>)0x0;
            _Dst = local_e8;
            plVar18 = local_e0;
          } while (lVar20 < (longlong)uVar12);
        }
      }
      else if ((((longlong)uVar12 < 200) && ((longlong)uVar12 < (longlong)local_d0 / 0xb)) ||
              (uVar9 = (uint)(uVar12 >> 1) & 0x7fffffff | (uint)uVar12, uVar9 = uVar9 >> 2 | uVar9,
              uVar9 = uVar9 >> 4 | uVar9, uVar9 = uVar9 >> 8 | uVar9,
              (longlong)
              ((longlong)
               *(int *)((longlong)&`int___cdecl_Eigen::numext::log2(int)'::__l2::table +
                       (ulonglong)((uVar9 >> 0x10 | uVar9) * 0x7c4acdd >> 0x1b) * 4) * uVar12) <
              (longlong)(local_d0 * 100) / 0x8b)) {
        if ((longlong)uVar12 < 2) {
          lVar20 = 0;
          if ((longlong)uVar12 < 1) goto LAB_14c93677e;
        }
        else {
          *(undefined8 *)(puVar17 + -8) = 0x14c936682;
          std::_Sort_unchecked<__int64_*,std::less<void>_>
                    (plVar18,plVar18 + uVar12,(longlong)(uVar12 * 8) >> 3,(less<void>)0x0);
          lVar20 = 0;
        }
        do {
          lVar22 = plVar18[lVar20];
          iVar8 = pSVar19->m_outerIndex[local_100 + 1];
          dVar2 = *(double *)((longlong)pvVar23 + lVar22 * 8);
          pSVar19->m_outerIndex[local_100 + 1] = iVar8 + 1;
          lVar16 = this->m_size;
          *(undefined8 *)(puVar17 + -8) = 0x14c9366d1;
          CompressedStorage<double,int>::resize(this,lVar16 + 1,dVar7);
          lVar20 = lVar20 + 1;
          this->m_values[lVar16] = 0.0;
          this->m_indices[lVar16] = (int)lVar22;
          this->m_values[iVar8] = dVar2;
          local_e8[lVar22] = (scalar_sum_op<int,int>)0x0;
          _Dst = local_e8;
          plVar18 = local_e0;
          pSVar19 = local_f0;
        } while (lVar20 < (longlong)uVar12);
      }
      else {
        lVar20 = 0;
        psVar11 = local_d8;
        if (0 < (longlong)local_d0) {
          do {
            if (psVar11[lVar20] != (scalar_sum_op<int,int>)0x0) {
              psVar11[lVar20] = (scalar_sum_op<int,int>)0x0;
              dVar2 = *(double *)((longlong)pvVar23 + lVar20 * 8);
              iVar8 = local_f0->m_outerIndex[local_100 + 1];
              local_f0->m_outerIndex[local_100 + 1] = iVar8 + 1;
              lVar22 = this->m_size;
              *(undefined8 *)(puVar17 + -8) = 0x14c93674a;
              CompressedStorage<double,int>::resize(this,lVar22 + 1,dVar7);
              this->m_values[lVar22] = 0.0;
              this->m_indices[lVar22] = (int)lVar20;
              this->m_values[iVar8] = dVar2;
              psVar11 = local_d8;
            }
            lVar20 = lVar20 + 1;
            _Dst = local_e8;
          } while (lVar20 < (longlong)uVar4);
        }
      }
LAB_14c93677e:
      local_100 = local_100 + 1;
      local_c8 = local_c8 + 4;
      plVar18 = local_e0;
      pSVar21 = local_b8;
      param_3 = local_f0;
    } while (local_100 < local_c0);
  }
  plVar18 = local_e0;
  if (param_3->m_innerNonZeros == (int *)0x0) {
    lVar20 = param_3->m_outerSize;
    lVar13 = (param_3->m_data).m_size;
    lVar22 = lVar20;
    if (-1 < lVar20) {
      piVar15 = param_3->m_outerIndex + lVar20;
      do {
        if (*piVar15 != 0) break;
        piVar15 = piVar15 + -1;
        lVar22 = lVar22 + -1;
      } while (-1 < lVar22);
    }
    lVar22 = lVar22 + 1;
    if (lVar22 <= lVar20) {
      do {
        param_3->m_outerIndex[lVar22] = (int)lVar13;
        lVar22 = lVar22 + 1;
      } while (lVar22 <= param_3->m_outerSize);
    }
  }
  if (0x20000 < local_98) {
    *(undefined8 *)(puVar17 + -8) = 0x14c936824;
    FMemory_Free(plVar18);
    *(undefined8 *)(puVar17 + -8) = 0x14c93682c;
    FMemory_Free(pvVar23);
  }
  if (local_108 != '\0') {
    *(undefined8 *)(puVar17 + -8) = 0x14c93683c;
    FMemory_Free(_Dst);
  }
  *(undefined8 *)(puVar17 + -8) = 0x14c93684b;
  return;
}

// operator() @ 14c936920

TVector<double> * __thiscall
``UE::MeshDeformation::ComputeSmoothing_Forward'::__l14::<lambda_3>::operator()'::__l2::<lambda_1>::
operator()(void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  
  plVar3 = (longlong *)**(longlong **)this;
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar5)();
      return pTVar9;
    }
  }
  lVar4 = *plVar3;
  pdVar1 = (double *)(lVar4 + (longlong)param_1 * 0x18);
  dVar6 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// operator() @ 14c936ab0

TVector<double> * __thiscall
``UE::MeshDeformation::ComputeSmoothing_Forward'::__l9::<lambda_2>::operator()'::__l8::<lambda_1>::
operator()(void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  
  plVar3 = (longlong *)**(longlong **)this;
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar5)();
      return pTVar9;
    }
  }
  lVar4 = *plVar3;
  pdVar1 = (double *)(lVar4 + (longlong)param_1 * 0x18);
  dVar6 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// operator() @ 14c936f00

TVector<double> * __thiscall
``UE::MeshDeformation::ComputeSmoothing_Forward'::__l9::<lambda_2>::operator()'::__l10::<lambda_2>::
operator()(void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  
  plVar3 = (longlong *)**(longlong **)this;
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar5)();
      return pTVar9;
    }
  }
  lVar4 = *plVar3;
  pdVar1 = (double *)(lVar4 + (longlong)param_1 * 0x18);
  dVar6 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 14c937200

void * __thiscall
UE::Geometry::FBiHarmonicDiffusionMeshSmoother::_scalar_deleting_destructor_
          (FBiHarmonicDiffusionMeshSmoother *this,uint param_1)

{
  FMeshDiffusionIntegrator::~FMeshDiffusionIntegrator((FMeshDiffusionIntegrator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c937240

void * __thiscall
UE::Geometry::FCGBiHarmonicMeshSmoother::_scalar_deleting_destructor_
          (FCGBiHarmonicMeshSmoother *this,uint param_1)

{
  FConstrainedMeshDeformationSolver::~FConstrainedMeshDeformationSolver
            ((FConstrainedMeshDeformationSolver *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c937280

void * __thiscall
UE::Geometry::FConformalMeshUVSolver::_scalar_deleting_destructor_
          (FConformalMeshUVSolver *this,uint param_1)

{
  *(undefined ***)this = &___7FConformalMeshUVSolver_Geometry_UE__6B_;
  FConstrainedMeshUVSolver::~FConstrainedMeshUVSolver((FConstrainedMeshUVSolver *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c9372d0

void * __thiscall
UE::Geometry::FLaplacianDiffusionMeshSmoother::_scalar_deleting_destructor_
          (FLaplacianDiffusionMeshSmoother *this,uint param_1)

{
  FMeshDiffusionIntegrator::~FMeshDiffusionIntegrator((FMeshDiffusionIntegrator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c937310

void * __thiscall
UE::Geometry::FLeastSquaresConformalMeshUVSolver::_scalar_deleting_destructor_
          (FLeastSquaresConformalMeshUVSolver *this,uint param_1)

{
  *(undefined ***)this = &___7FConformalMeshUVSolver_Geometry_UE__6B_;
  FConstrainedMeshUVSolver::~FConstrainedMeshUVSolver((FConstrainedMeshUVSolver *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c937360

void * __thiscall
UE::Geometry::FSpectralConformalMeshUVSolver::_scalar_deleting_destructor_
          (FSpectralConformalMeshUVSolver *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSpectralConformalMeshUVSolver_Geometry_UE__6B_;
  if (((this->InitialUVs).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->InitialUVs).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FConformalMeshUVSolver_Geometry_UE__6B_;
  FConstrainedMeshUVSolver::~FConstrainedMeshUVSolver((FConstrainedMeshUVSolver *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// LaplacianSchemeName @ 14c938fe0

FString * __cdecl
LaplacianSchemeName(FString *__return_storage_ptr__,ELaplacianWeightScheme param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  switch(param_1) {
  case Uniform:
    pFVar4 = FString::FString(&local_38,L"Uniform Laplacian");
    if (__return_storage_ptr__ != pFVar4) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    break;
  case Umbrella:
    pFVar4 = FString::FString(&local_58,L"Umbrella Laplacian");
    if (__return_storage_ptr__ != pFVar4) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    break;
  case Valence:
    pFVar4 = FString::FString(&local_28,L"Valence Laplacian");
    if (__return_storage_ptr__ != pFVar4) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    break;
  case MeanValue:
    pFVar4 = FString::FString(&local_48,L"MeanValue Laplacian");
    if (__return_storage_ptr__ != pFVar4) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    break;
  case Cotangent:
    pFVar4 = FString::FString(&local_68,L"Cotangent Laplacian");
    if (__return_storage_ptr__ != pFVar4) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    break;
  case ClampedCotangent:
    pFVar4 = FString::FString(&local_78,L"Clamped Cotangent Laplacian");
    if (__return_storage_ptr__ != pFVar4) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    break;
  case IDTCotanget:
    pFVar4 = FString::FString(&local_18,L"Intrinsic Delaunay Triangulation Contangent Laplacian");
    if (__return_storage_ptr__ != pFVar4) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    break;
  default:
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("0 && \"Unknown Laplacian Weight Scheme Enum\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\MeshLaplacian.cpp"
                       ,0x22,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  return __return_storage_ptr__;
}

// bIsSymmetricLaplacian @ 14c939e00

bool __cdecl bIsSymmetricLaplacian(ELaplacianWeightScheme param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  switch(param_1) {
  case Uniform:
  case Valence:
    return true;
  case Umbrella:
  case MeanValue:
  case Cotangent:
  case ClampedCotangent:
  case IDTCotanget:
    goto switchD_14c939e21_caseD_1;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\MeshLaplacian.cpp"
                       ,0x46,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
switchD_14c939e21_caseD_1:
    return false;
  }
}

