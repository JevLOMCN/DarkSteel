// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// FEigenDNCPSparseMatrixAssembler @ 14c896d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FEigenDNCPSparseMatrixAssembler * __thiscall
FEigenDNCPSparseMatrixAssembler::FEigenDNCPSparseMatrixAssembler
          (FEigenDNCPSparseMatrixAssembler *this,int param_1)

{
  TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
  *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  SparseMatrix<double,0,int> *pSVar4;
  SparseMatrix<double,0,int> *pSVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pSVar5 = (SparseMatrix<double,0,int> *)0x0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined ***)&this->field_0x70 =
       &
       ___7__TFunction_OwnedObject_V<lambda_41_>___TSparseMatrixAssembler_N_Solvers_UE___00_0A__Function_Private_Core_UE__6B_
  ;
  *(FEigenDNCPSparseMatrixAssembler **)&this->field_0x78 = this;
  if (&this->field_0x78 != (undefined1 *)0x0) {
    *(code **)&this->field_0x60 =
         UE::Core::Private::Function::
         TFunctionRefCaller<UE::Solvers::TSparseMatrixAssembler<double>::<lambda_41_>,void,UE::Solvers::TSparseMatrixAssembler<double>::FTupleData_const_*,int>
         ::Call;
  }
  pTVar1 = &this->Matrix;
  (this->EntryTriplets)._Mypair._Myval2._Myfirst = (Triplet<double,int> *)0x0;
  (this->EntryTriplets)._Mypair._Myval2._Mylast = (Triplet<double,int> *)0x0;
  (this->EntryTriplets)._Mypair._Myval2._Myend = (Triplet<double,int> *)0x0;
  this->NumVert = param_1;
  pTVar1->Ptr = (SparseMatrix<double,0,int> *)0x0;
  pSVar4 = ::operator_new(0x48);
  if (pSVar4 != (SparseMatrix<double,0,int> *)0x0) {
    pSVar5 = Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>
                       (pSVar4,(longlong)(param_1 * 2),(longlong)(param_1 * 2));
  }
  if (pTVar1 == (TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
                 *)local_68) {
    if (pSVar5 == (SparseMatrix<double,0,int> *)0x0) goto LAB_14c896e30;
    FMemory_Free(pSVar5->m_outerIndex);
    FMemory_Free(pSVar5->m_innerNonZeros);
    operator_delete__((pSVar5->m_data).m_values);
    operator_delete__((pSVar5->m_data).m_indices);
  }
  else {
    pSVar4 = pTVar1->Ptr;
    pTVar1->Ptr = pSVar5;
    if (pSVar4 == (SparseMatrix<double,0,int> *)0x0) goto LAB_14c896e30;
    FMemory_Free(pSVar4->m_outerIndex);
    FMemory_Free(pSVar4->m_innerNonZeros);
    operator_delete__((pSVar4->m_data).m_values);
    operator_delete__((pSVar4->m_data).m_indices);
    pSVar5 = pSVar4;
  }
  ::operator_delete(pSVar5,0x48);
LAB_14c896e30:
  local_58 = *(longlong *)this;
  uVar3 = *(undefined8 *)&this->field_0x8;
  local_48 = *(longlong *)&this->field_0x10;
  uStack_40 = *(undefined8 *)&this->field_0x18;
  uVar2 = *(undefined8 *)&this->field_0x20;
  plStack_30 = *(longlong **)&this->field_0x28;
  *(code **)this =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FEigenDNCPSparseMatrixAssembler::FEigenDNCPSparseMatrixAssembler'::__l2::<lambda_1>,void,int>
       ::Call;
  *(undefined8 *)&this->field_0x8 = uStack_50;
  *(undefined4 *)&this->field_0x10 = 0x528d0088;
  *(undefined4 *)&this->field_0x14 = 1;
  *(FEigenDNCPSparseMatrixAssembler **)&this->field_0x18 = this;
  *(undefined4 *)&this->field_0x20 = (undefined4)local_38;
  *(undefined4 *)&this->field_0x24 = local_38._4_4_;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0;
  local_38 = uVar2;
  uStack_50 = uVar3;
  if (local_58 != 0) {
    plVar6 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar6 = plStack_30;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  local_58 = *(longlong *)&this->field_0x30;
  uVar3 = *(undefined8 *)&this->field_0x38;
  local_48 = *(longlong *)&this->field_0x40;
  uStack_40 = *(undefined8 *)&this->field_0x48;
  uVar2 = *(undefined8 *)&this->field_0x50;
  plStack_30 = *(longlong **)&this->field_0x58;
  *(code **)&this->field_0x30 =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FEigenDNCPSparseMatrixAssembler::FEigenDNCPSparseMatrixAssembler'::__l2::<lambda_2>,void,int,int,double>
       ::Call;
  *(undefined8 *)&this->field_0x38 = uStack_50;
  *(undefined4 *)&this->field_0x40 = 0x528d00a8;
  *(undefined4 *)&this->field_0x44 = 1;
  *(FEigenDNCPSparseMatrixAssembler **)&this->field_0x48 = this;
  *(undefined4 *)&this->field_0x50 = (undefined4)local_38;
  *(undefined4 *)&this->field_0x54 = local_38._4_4_;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x5c = 0;
  local_38 = uVar2;
  uStack_50 = uVar3;
  if (local_58 != 0) {
    plVar6 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar6 = plStack_30;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  local_58 = *(longlong *)&this->field_0x60;
  uVar3 = *(undefined8 *)&this->field_0x68;
  local_48 = *(longlong *)&this->field_0x70;
  uStack_40 = *(undefined8 *)&this->field_0x78;
  uVar2 = *(undefined8 *)&this->field_0x80;
  plStack_30 = *(longlong **)&this->field_0x88;
  *(code **)&this->field_0x60 =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FEigenDNCPSparseMatrixAssembler::FEigenDNCPSparseMatrixAssembler'::__l2::<lambda_3>,void,UE::Solvers::TSparseMatrixAssembler<double>::FTupleData_const_*,int>
       ::Call;
  *(undefined8 *)&this->field_0x68 = uStack_50;
  *(undefined4 *)&this->field_0x70 = 0x528d00c8;
  *(undefined4 *)&this->field_0x74 = 1;
  *(FEigenDNCPSparseMatrixAssembler **)&this->field_0x78 = this;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_38;
  *(undefined4 *)&this->field_0x84 = local_38._4_4_;
  *(undefined4 *)&this->field_0x88 = 0;
  *(undefined4 *)&this->field_0x8c = 0;
  local_38 = uVar2;
  if (local_58 != 0) {
    plVar6 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar6 = plStack_30;
    }
    uStack_50 = uVar3;
    (**(code **)(*plVar6 + 0x10))();
  }
  return this;
}

// operator() @ 14c8aa6c0

void __thiscall
`FEigenDNCPSparseMatrixAssembler::FEigenDNCPSparseMatrixAssembler'::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2,double param_3)

{
  Triplet<double,int> local_28 [2];
  
  local_28[0].m_row = param_1;
  local_28[0].m_col = param_2;
  local_28[0].m_value = param_3;
  std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::push_back
            ((vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_> *)
             (*(longlong *)this + 0x98),local_28);
  local_28[0].m_col = *(int *)(*(longlong *)this + 0xb0);
  local_28[0].m_row = local_28[0].m_col + param_1;
  local_28[0].m_col = local_28[0].m_col + param_2;
  local_28[0].m_value = param_3;
  std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::push_back
            ((vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_> *)
             (*(longlong *)this + 0x98),local_28);
  return;
}

// operator() @ 14c8af140

void __thiscall
`FEigenDNCPSparseMatrixAssembler::FEigenDNCPSparseMatrixAssembler'::__l2::<lambda_3>::operator()
          (void *this,FTupleData *param_1,int param_2)

{
  ulonglong uVar1;
  double dVar2;
  longlong lVar3;
  Triplet<double,int> *pTVar4;
  int iVar5;
  Triplet<double,int> *pTVar6;
  ulonglong uVar7;
  Triplet<double,int> *pTVar8;
  int iVar9;
  Triplet<double,int> *pTVar10;
  longlong lVar11;
  vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_> *pvVar12;
  size_t sVar13;
  longlong lVar14;
  double *pdVar15;
  ulonglong uVar16;
  
  if (0 < param_2) {
    lVar14 = 0;
    pdVar15 = &param_1->Value;
    do {
      lVar3 = *(longlong *)this;
      iVar5 = *(int *)((longlong)pdVar15 + -4);
      pvVar12 = (vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_> *)
                (lVar3 + 0x98);
      iVar9 = ((FTupleData *)(pdVar15 + -1))->I;
      dVar2 = *pdVar15;
      pTVar10 = *(Triplet<double,int> **)(lVar3 + 0xa0);
      if (pTVar10 == *(Triplet<double,int> **)(lVar3 + 0xa8)) {
        pTVar4 = (pvVar12->_Mypair)._Myval2._Myfirst;
        lVar11 = (longlong)pTVar10 - (longlong)pTVar4 >> 4;
        if (lVar11 == 0xfffffffffffffff) goto LAB_14c8af42c;
        uVar1 = lVar11 + 1;
        uVar7 = (longlong)*(Triplet<double,int> **)(lVar3 + 0xa8) - (longlong)pTVar4 >> 4;
        if (0xfffffffffffffff - (uVar7 >> 1) < uVar7) {
          uVar16 = 0xfffffffffffffff;
        }
        else {
          uVar7 = (uVar7 >> 1) + uVar7;
          uVar16 = uVar1;
          if (uVar1 <= uVar7) {
            uVar16 = uVar7;
          }
          if (0xfffffffffffffff < uVar16) goto LAB_14c8af426;
        }
        pTVar6 = std::_Allocate<16,std::_Default_allocate_traits>(uVar16 << 4);
        pTVar6[lVar11].m_row = iVar9;
        pTVar6[lVar11].m_col = iVar5;
        pTVar6[lVar11].m_value = dVar2;
        pTVar4 = (pvVar12->_Mypair)._Myval2._Myfirst;
        if (pTVar10 == *(Triplet<double,int> **)(lVar3 + 0xa0)) {
          sVar13 = (longlong)*(Triplet<double,int> **)(lVar3 + 0xa0) - (longlong)pTVar4;
          pTVar8 = pTVar6;
          pTVar10 = pTVar4;
        }
        else {
          memmove(pTVar6,pTVar4,(longlong)pTVar10 - (longlong)pTVar4);
          sVar13 = *(longlong *)(lVar3 + 0xa0) - (longlong)pTVar10;
          pTVar8 = pTVar6 + lVar11 + 1;
        }
        memmove(pTVar8,pTVar10,sVar13);
        std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
        _Change_array(pvVar12,pTVar6,uVar1,uVar16);
      }
      else {
        pTVar10->m_row = iVar9;
        pTVar10->m_col = iVar5;
        pTVar10->m_value = dVar2;
        *(longlong *)(lVar3 + 0xa0) = *(longlong *)(lVar3 + 0xa0) + 0x10;
      }
      dVar2 = *pdVar15;
      lVar3 = *(longlong *)this;
      pvVar12 = (vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_> *)
                (lVar3 + 0x98);
      iVar9 = ((FTupleData *)(pdVar15 + -1))->I + *(int *)(lVar3 + 0xb0);
      pTVar10 = *(Triplet<double,int> **)(lVar3 + 0xa0);
      iVar5 = *(int *)((longlong)pdVar15 + -4) + *(int *)(lVar3 + 0xb0);
      if (pTVar10 == *(Triplet<double,int> **)(lVar3 + 0xa8)) {
        pTVar4 = (pvVar12->_Mypair)._Myval2._Myfirst;
        lVar11 = (longlong)pTVar10 - (longlong)pTVar4 >> 4;
        if (lVar11 == 0xfffffffffffffff) {
LAB_14c8af42c:
                    /* WARNING: Subroutine does not return */
          std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
          _Xlength();
        }
        uVar1 = lVar11 + 1;
        uVar7 = (longlong)*(Triplet<double,int> **)(lVar3 + 0xa8) - (longlong)pTVar4 >> 4;
        if (0xfffffffffffffff - (uVar7 >> 1) < uVar7) {
          uVar16 = 0xfffffffffffffff;
        }
        else {
          uVar7 = (uVar7 >> 1) + uVar7;
          uVar16 = uVar1;
          if (uVar1 <= uVar7) {
            uVar16 = uVar7;
          }
          if (0xfffffffffffffff < uVar16) {
LAB_14c8af426:
                    /* WARNING: Subroutine does not return */
            std::_Throw_bad_array_new_length();
          }
        }
        pTVar6 = std::_Allocate<16,std::_Default_allocate_traits>(uVar16 << 4);
        pTVar6[lVar11].m_row = iVar9;
        pTVar6[lVar11].m_col = iVar5;
        pTVar6[lVar11].m_value = dVar2;
        pTVar4 = (pvVar12->_Mypair)._Myval2._Myfirst;
        if (pTVar10 == *(Triplet<double,int> **)(lVar3 + 0xa0)) {
          sVar13 = (longlong)*(Triplet<double,int> **)(lVar3 + 0xa0) - (longlong)pTVar4;
          pTVar8 = pTVar6;
          pTVar10 = pTVar4;
        }
        else {
          memmove(pTVar6,pTVar4,(longlong)pTVar10 - (longlong)pTVar4);
          sVar13 = *(longlong *)(lVar3 + 0xa0) - (longlong)pTVar10;
          pTVar8 = pTVar6 + lVar11 + 1;
        }
        memmove(pTVar8,pTVar10,sVar13);
        std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
        _Change_array(pvVar12,pTVar6,uVar1,uVar16);
      }
      else {
        pTVar10->m_row = iVar9;
        pTVar10->m_col = iVar5;
        pTVar10->m_value = dVar2;
        *(longlong *)(lVar3 + 0xa0) = *(longlong *)(lVar3 + 0xa0) + 0x10;
      }
      lVar14 = lVar14 + 1;
      pdVar15 = pdVar15 + 2;
    } while (lVar14 < param_2);
  }
  return;
}

