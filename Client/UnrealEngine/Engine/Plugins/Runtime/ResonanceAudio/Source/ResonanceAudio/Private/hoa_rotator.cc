// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 48

// operator*<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_> @ 14f069820

Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>,0>
* __thiscall
Eigen::MatrixBase<Eigen::Matrix<float,-1,-1,0,-1,-1>_>::
operator*<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_>
          (MatrixBase<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *this,
          Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>,0>
          *__return_storage_ptr__,
          MatrixBase<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_>
          *param_1)

{
  undefined8 uVar1;
  
  __return_storage_ptr__->m_lhs = (Matrix<float,_1,_1,0,_1,_1> *)this;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)&__return_storage_ptr__->m_rhs = *(undefined8 *)param_1;
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x8 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x10 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x18 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x20 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x28 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x30 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x40 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x48 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x50 = *(undefined8 *)(param_1 + 0x50);
  return __return_storage_ptr__;
}

// operator*<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_> @ 14f069880

Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>,0>
* __thiscall
Eigen::MatrixBase<Eigen::Matrix<float,-1,-1,0,-1,-1>_>::
operator*<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_>
          (MatrixBase<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *this,
          Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>,0>
          *__return_storage_ptr__,
          MatrixBase<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_>
          *param_1)

{
  longlong lVar1;
  
  __return_storage_ptr__->m_lhs = (Matrix<float,_1,_1,0,_1,_1> *)this;
  lVar1 = *(longlong *)(param_1 + 8);
  (__return_storage_ptr__->m_rhs)._padding_ = *(longlong *)param_1;
  (__return_storage_ptr__->m_rhs)._padding_ = lVar1;
  (__return_storage_ptr__->m_rhs)._padding_ = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).m_stride = *(undefined8 *)(param_1 + 0x18);
  return __return_storage_ptr__;
}

// call_assignment_no_alias<Eigen::Map<Eigen::Matrix<float,-1,1,0,-1,1>,4,Eigen::Stride<0,0>_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>,1,-1,0>_>,Eigen::internal::assign_op<float,float>_> @ 14f0698b0

void __cdecl
Eigen::internal::
call_assignment_no_alias<Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>,4,Eigen::Stride<0,0>_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_>,Eigen::internal::assign_op<float,float>_>
          (Map<Eigen::Matrix<float,_1,1,0,_1,1>,4,Eigen::Stride<0,0>_> *param_1,
          Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_> *param_2,
          assign_op<float,float> *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  lVar3 = param_1->_padding_;
  lVar4 = param_1->_padding_;
  lVar7 = 0;
  lVar5 = *(longlong *)&param_2->m_matrix;
  lVar6 = *(longlong *)(*(longlong *)&(param_2->m_matrix).field_0x18 + 8);
  if (lVar3 < 4) {
    if (lVar3 < 1) {
      return;
    }
  }
  else {
    lVar9 = 2;
    do {
      *(undefined4 *)(lVar4 + lVar7 * 4) = *(undefined4 *)(lVar5 + lVar6 * lVar7 * 4);
      *(undefined4 *)(lVar4 + 4 + lVar7 * 4) = *(undefined4 *)(lVar5 + (lVar9 + -1) * lVar6 * 4);
      *(undefined4 *)(lVar4 + 8 + lVar7 * 4) = *(undefined4 *)(lVar5 + lVar9 * lVar6 * 4);
      lVar1 = lVar9 + 1;
      lVar9 = lVar9 + 4;
      *(undefined4 *)(lVar4 + 0xc + lVar7 * 4) = *(undefined4 *)(lVar5 + lVar1 * lVar6 * 4);
      lVar7 = lVar7 + 4;
    } while (lVar7 < lVar3 + -3);
    if (lVar3 <= lVar7) {
      return;
    }
  }
  puVar8 = (undefined4 *)(lVar5 + lVar6 * lVar7 * 4);
  do {
    uVar2 = *puVar8;
    puVar8 = puVar8 + lVar6;
    *(undefined4 *)(lVar4 + lVar7 * 4) = uVar2;
    lVar7 = lVar7 + 1;
  } while (lVar7 < lVar3);
  return;
}

// call_assignment_no_alias<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Matrix<float,3,3,0,3,3>,Eigen::internal::assign_op<float,float>_> @ 14f069970

void __cdecl
Eigen::internal::
call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Matrix<float,3,3,0,3,3>,Eigen::internal::assign_op<float,float>_>
          (Matrix<float,_1,_1,0,_1,_1> *param_1,Matrix<float,3,3,0,3,3> *param_2,
          assign_op<float,float> *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  evaluator<Eigen::Matrix<float,3,3,0,3,3>_> local_res8;
  evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> local_38;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,3,0,3,3>_>,Eigen::internal::assign_op<float,float>,0>
  local_28;
  
  local_res8 = (evaluator<Eigen::Matrix<float,3,3,0,3,3>_>)param_2;
  if ((*(longlong *)&param_1->field_0x8 != 3) || (*(longlong *)&param_1->field_0x10 != 3)) {
    PlainObjectBase<Eigen::Matrix<float,-1,-1,0,-1,-1>_>::resize
              ((PlainObjectBase<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)param_1,3,3);
  }
  local_38._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_28.m_dst = &local_38;
  local_38._0_8_ = *(undefined8 *)param_1;
  local_28.m_src = &local_res8;
  lVar6 = local_38._8_8_ * *(longlong *)&param_1->field_0x10;
  lVar4 = 0;
  uVar5 = (ulonglong)((uint)(lVar6 >> 0x3f) & 3) + lVar6 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar5) {
    do {
      puVar1 = (undefined8 *)((longlong)local_res8 + lVar4 * 4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(local_38._0_8_ + lVar4 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      lVar4 = lVar4 + 4;
    } while (lVar4 < (longlong)uVar5);
  }
  local_28.m_functor = param_3;
  local_28.m_dstExpr = param_1;
  unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,3,0,3,3>_>,Eigen::internal::assign_op<float,float>,0>_>
            (&local_28,uVar5,lVar6);
  return;
}

// call_assignment_no_alias<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Product<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>,0>,Eigen::internal::assign_op<float,float>_> @ 14f069a40

void __cdecl
Eigen::internal::
call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>,0>,Eigen::internal::assign_op<float,float>_>
          (Matrix<float,_1,_1,0,_1,_1> *param_1,
          Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>,0>
          *param_2,assign_op<float,float> *param_3)

{
  longlong lVar1;
  longlong lVar2;
  Matrix<float,_1,_1,0,_1,_1> *pMVar3;
  float local_res8 [2];
  CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,_1,0,_1,_1>_>
  local_38;
  
  lVar1 = *(longlong *)&param_2->m_lhs->field_0x8;
  lVar2 = *(longlong *)&(param_2->m_rhs).field_0x10;
  if ((*(longlong *)&param_1->field_0x8 != lVar1) || (*(longlong *)&param_1->field_0x10 != lVar2)) {
    PlainObjectBase<Eigen::Matrix<float,-1,-1,0,-1,-1>_>::resize
              ((PlainObjectBase<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)param_1,lVar1,lVar2);
  }
  local_38.m_cols.m_value = *(long64 *)&param_1->field_0x10;
  lVar1 = *(longlong *)&(param_2->m_rhs).field_0x8;
  local_38.m_rows.m_value = *(long64 *)&param_1->field_0x8;
  pMVar3 = param_2->m_lhs;
  if ((lVar1 + local_38.m_cols.m_value + local_38.m_rows.m_value < 0x14) && (0 < lVar1)) {
    generic_product_impl<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>,Eigen::DenseShape,Eigen::DenseShape,3>
    ::eval_dynamic<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::internal::assign_op<float,float>_>
              (param_1,pMVar3,&param_2->m_rhs,(assign_op<float,float> *)local_res8);
  }
  else {
    local_38.m_functor.m_other = 0.0;
    call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,_1,0,_1,_1>_>,Eigen::internal::assign_op<float,float>_>
              (param_1,&local_38,(assign_op<float,float> *)local_res8);
    local_res8[0] = 1.0;
    generic_product_impl<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>,Eigen::DenseShape,Eigen::DenseShape,8>
    ::scaleAndAddTo<Eigen::Matrix<float,_1,_1,0,_1,_1>_>(param_1,pMVar3,&param_2->m_rhs,local_res8);
  }
  return;
}

// call_assignment_no_alias<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Product<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>,0>,Eigen::internal::assign_op<float,float>_> @ 14f069b10

void __cdecl
Eigen::internal::
call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>,0>,Eigen::internal::assign_op<float,float>_>
          (Matrix<float,_1,_1,0,_1,_1> *param_1,
          Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>,0>
          *param_2,assign_op<float,float> *param_3)

{
  longlong lVar1;
  longlong lVar2;
  Matrix<float,_1,_1,0,_1,_1> *pMVar3;
  float local_res8 [2];
  CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,_1,0,_1,_1>_>
  local_38;
  
  lVar1 = *(longlong *)&param_2->m_lhs->field_0x8;
  lVar2 = (param_2->m_rhs)._padding_;
  if ((*(longlong *)&param_1->field_0x8 != lVar1) || (*(longlong *)&param_1->field_0x10 != lVar2)) {
    PlainObjectBase<Eigen::Matrix<float,-1,-1,0,-1,-1>_>::resize
              ((PlainObjectBase<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)param_1,lVar1,lVar2);
  }
  local_38.m_cols.m_value = *(long64 *)&param_1->field_0x10;
  lVar1 = (param_2->m_rhs)._padding_;
  local_38.m_rows.m_value = *(long64 *)&param_1->field_0x8;
  pMVar3 = param_2->m_lhs;
  if ((lVar1 + local_38.m_cols.m_value + local_38.m_rows.m_value < 0x14) && (0 < lVar1)) {
    generic_product_impl<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>,Eigen::DenseShape,Eigen::DenseShape,3>
    ::eval_dynamic<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::internal::assign_op<float,float>_>
              (param_1,pMVar3,&param_2->m_rhs,(assign_op<float,float> *)local_res8);
  }
  else {
    local_38.m_functor.m_other = 0.0;
    call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,_1,0,_1,_1>_>,Eigen::internal::assign_op<float,float>_>
              (param_1,&local_38,(assign_op<float,float> *)local_res8);
    local_res8[0] = 1.0;
    generic_product_impl<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>,Eigen::DenseShape,Eigen::DenseShape,8>
    ::scaleAndAddTo<Eigen::Matrix<float,_1,_1,0,_1,_1>_>(param_1,pMVar3,&param_2->m_rhs,local_res8);
  }
  return;
}

// call_assignment_no_alias<Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>,1,-1,0>_>,Eigen::Map<Eigen::Matrix<float,-1,1,0,-1,1>,4,Eigen::Stride<0,0>_>,Eigen::internal::assign_op<float,float>_> @ 14f069be0

void __cdecl
Eigen::internal::
call_assignment_no_alias<Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_>,Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>,4,Eigen::Stride<0,0>_>,Eigen::internal::assign_op<float,float>_>
          (Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_> *param_1,
          Map<Eigen::Matrix<float,_1,1,0,_1,1>,4,Eigen::Stride<0,0>_> *param_2,
          assign_op<float,float> *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = param_2->_padding_;
  lVar8 = 0;
  lVar4 = *(longlong *)&(param_1->m_matrix).field_0x10;
  lVar5 = *(longlong *)&param_1->m_matrix;
  lVar6 = *(longlong *)(*(longlong *)&(param_1->m_matrix).field_0x18 + 8);
  if (lVar4 < 4) {
    if (lVar4 < 1) {
      return;
    }
  }
  else {
    lVar9 = 2;
    do {
      *(undefined4 *)(lVar5 + lVar6 * lVar8 * 4) = *(undefined4 *)(lVar3 + lVar8 * 4);
      *(undefined4 *)(lVar5 + (lVar9 + -1) * lVar6 * 4) = *(undefined4 *)(lVar3 + 4 + lVar8 * 4);
      *(undefined4 *)(lVar5 + lVar9 * lVar6 * 4) = *(undefined4 *)(lVar3 + 8 + lVar8 * 4);
      lVar1 = lVar9 + 1;
      lVar2 = lVar8 * 4;
      lVar9 = lVar9 + 4;
      lVar8 = lVar8 + 4;
      *(undefined4 *)(lVar5 + lVar1 * lVar6 * 4) = *(undefined4 *)(lVar3 + 0xc + lVar2);
    } while (lVar8 < lVar4 + -3);
    if (lVar4 <= lVar8) {
      return;
    }
  }
  puVar7 = (undefined4 *)(lVar5 + lVar6 * lVar8 * 4);
  do {
    lVar5 = lVar8 * 4;
    lVar8 = lVar8 + 1;
    *puVar7 = *(undefined4 *)(lVar3 + lVar5);
    puVar7 = puVar7 + lVar6;
  } while (lVar8 < lVar4);
  return;
}

// dot<Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_,-1,1,1>_> @ 14f069ca0

/* WARNING: Type propagation algorithm not settling */

float __thiscall
Eigen::MatrixBase<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_>::
dot<Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_>
          (MatrixBase<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_> *this,
          MatrixBase<Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_>
          *param_1)

{
  float fVar1;
  scalar_sum_op<float,float> local_res8 [32];
  redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
  local_148;
  undefined1 local_110 [16];
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  
  local_60 = *(undefined8 *)(param_1 + 0x70);
  local_e8 = *(undefined8 *)(this + 0x20);
  uStack_e0 = *(undefined8 *)(this + 0x28);
  local_148._40_8_ = *(undefined8 *)(param_1 + 0x60);
  local_d8 = *(undefined8 *)(this + 0x30);
  local_148._8_8_ = *(undefined8 *)this;
  uStack_100 = *(undefined8 *)(this + 8);
  local_58 = *(undefined8 *)(param_1 + 0x78);
  local_f8 = *(undefined8 *)(this + 0x10);
  lStack_f0 = *(longlong *)(this + 0x18);
  local_50 = *(undefined8 *)(param_1 + 0x80);
  local_148._32_8_ = *(undefined8 *)param_1;
  uStack_c8 = *(undefined8 *)(param_1 + 8);
  local_48 = *(undefined8 *)(param_1 + 0x88);
  local_c0 = *(undefined8 *)(param_1 + 0x10);
  local_40 = *(undefined8 *)(param_1 + 0x90);
  local_b8 = *(undefined8 *)(param_1 + 0x18);
  uStack_b0 = *(undefined8 *)(param_1 + 0x20);
  local_38 = *(undefined8 *)(param_1 + 0x98);
  local_a8 = *(undefined8 *)(param_1 + 0x28);
  local_a0 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0xa0);
  local_90 = *(undefined8 *)(param_1 + 0x40);
  local_88 = *(undefined8 *)(param_1 + 0x48);
  uStack_80 = *(undefined8 *)(param_1 + 0x50);
  local_20 = *(undefined8 *)(param_1 + 0xb0);
  local_78 = *(undefined8 *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0.0;
  }
  local_148._16_8_ = *(undefined8 *)(lStack_f0 + 8);
  local_110._8_8_ = local_148._8_8_;
  local_d0 = local_148._32_8_;
  local_70 = local_148._40_8_;
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_,-1,1,1>_const_>_>,0,0>
          ::
          run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
                    (&local_148,local_res8,
                     (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_const_>
                      *)local_110);
  return fVar1;
}

// dot<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_,-1,1,1>_> @ 14f069dd0

/* WARNING: Type propagation algorithm not settling */

float __thiscall
Eigen::MatrixBase<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_>::
dot<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_>
          (MatrixBase<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_> *this,
          MatrixBase<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_>
          *param_1)

{
  float fVar1;
  scalar_sum_op<float,float> local_res8 [32];
  redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
  local_118;
  undefined1 local_e0 [16];
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  
  local_b8 = *(undefined8 *)(this + 0x20);
  uStack_b0 = *(undefined8 *)(this + 0x28);
  local_48 = *(undefined8 *)(param_1 + 0x58);
  local_a8 = *(undefined8 *)(this + 0x30);
  local_118._8_8_ = *(undefined8 *)this;
  uStack_d0 = *(undefined8 *)(this + 8);
  local_118._40_8_ = *(undefined8 *)(param_1 + 0x48);
  local_c8 = *(undefined8 *)(this + 0x10);
  lStack_c0 = *(longlong *)(this + 0x18);
  local_118._32_8_ = *(undefined8 *)param_1;
  uStack_98 = *(undefined8 *)(param_1 + 8);
  local_90 = *(undefined8 *)(param_1 + 0x10);
  local_88 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x20);
  local_78 = *(undefined8 *)(param_1 + 0x28);
  local_70 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  local_40 = *(undefined8 *)(param_1 + 0x60);
  local_38 = *(undefined8 *)(param_1 + 0x68);
  local_30 = *(undefined8 *)(param_1 + 0x70);
  local_20 = *(undefined8 *)(param_1 + 0x80);
  local_60 = *(undefined8 *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0.0;
  }
  local_118._16_8_ = *(undefined8 *)(lStack_c0 + 8);
  local_e0._8_8_ = local_118._8_8_;
  local_a0 = local_118._32_8_;
  local_58 = local_118._40_8_;
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_,-1,1,1>_const_>_>,0,0>
          ::
          run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
                    (&local_118,local_res8,
                     (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_const_>
                      *)local_e0);
  return fVar1;
}

// dot<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_> @ 14f069ee0

/* WARNING: Type propagation algorithm not settling */

float __thiscall
Eigen::
MatrixBase<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_>
::
dot<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_>
          (MatrixBase<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_>
           *this,MatrixBase<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_>
                 *param_1)

{
  float fVar1;
  scalar_sum_op<float,float> local_res8 [32];
  redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
  local_148;
  undefined1 local_110 [16];
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_f8 = *(undefined8 *)(this + 0x10);
  uStack_f0 = *(undefined8 *)(this + 0x18);
  local_48 = *(undefined8 *)(param_1 + 0x58);
  local_e8 = *(undefined8 *)(this + 0x20);
  uStack_e0 = *(undefined8 *)(this + 0x28);
  local_148._40_8_ = *(undefined8 *)(param_1 + 0x48);
  local_148._8_8_ = *(undefined8 *)this;
  uStack_100 = *(undefined8 *)(this + 8);
  local_40 = *(undefined8 *)(param_1 + 0x60);
  local_d8 = *(longlong *)(this + 0x30);
  uStack_d0 = *(undefined8 *)(this + 0x38);
  local_38 = *(undefined8 *)(param_1 + 0x68);
  local_148._32_8_ = *(undefined8 *)param_1;
  uStack_98 = *(undefined8 *)(param_1 + 8);
  local_30 = *(undefined8 *)(param_1 + 0x70);
  local_c8 = *(undefined8 *)(this + 0x40);
  uStack_c0 = *(undefined8 *)(this + 0x48);
  local_28 = *(undefined8 *)(param_1 + 0x78);
  local_b8 = *(undefined8 *)(this + 0x50);
  uStack_b0 = *(undefined8 *)(this + 0x58);
  local_20 = *(undefined8 *)(param_1 + 0x80);
  local_a8 = *(undefined8 *)(this + 0x60);
  local_90 = *(undefined8 *)(param_1 + 0x10);
  local_88 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x20);
  local_78 = *(undefined8 *)(param_1 + 0x28);
  local_70 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  local_60 = *(undefined8 *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0.0;
  }
  local_148._16_8_ = *(undefined8 *)(local_d8 + 8);
  local_110._8_8_ = local_148._8_8_;
  local_a0 = local_148._32_8_;
  local_58 = local_148._40_8_;
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_>_>,0,0>
          ::
          run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
                    (&local_148,local_res8,
                     (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>
                      *)local_110);
  return fVar1;
}

// dot<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_> @ 14f069ff0

/* WARNING: Type propagation algorithm not settling */

float __thiscall
Eigen::
MatrixBase<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_>
::
dot<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_>
          (MatrixBase<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_>
           *this,MatrixBase<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_>
                 *param_1)

{
  float fVar1;
  scalar_sum_op<float,float> local_res8 [32];
  redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
  local_118;
  undefined1 local_e0 [16];
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_c8 = *(undefined8 *)(this + 0x10);
  uStack_c0 = *(undefined8 *)(this + 0x18);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_b8 = *(undefined8 *)(this + 0x20);
  uStack_b0 = *(undefined8 *)(this + 0x28);
  local_118._40_8_ = *(undefined8 *)(param_1 + 0x30);
  local_118._8_8_ = *(undefined8 *)this;
  uStack_d0 = *(undefined8 *)(this + 8);
  local_a8 = *(longlong *)(this + 0x30);
  uStack_a0 = *(undefined8 *)(this + 0x38);
  local_118._32_8_ = *(undefined8 *)param_1;
  uStack_68 = *(undefined8 *)(param_1 + 8);
  local_98 = *(undefined8 *)(this + 0x40);
  uStack_90 = *(undefined8 *)(this + 0x48);
  local_88 = *(undefined8 *)(this + 0x50);
  uStack_80 = *(undefined8 *)(this + 0x58);
  local_78 = *(undefined8 *)(this + 0x60);
  local_58 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  local_28 = *(undefined8 *)(param_1 + 0x48);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  local_48 = *(undefined8 *)(param_1 + 0x28);
  local_20 = *(undefined8 *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0.0;
  }
  local_118._16_8_ = *(undefined8 *)(local_a8 + 8);
  local_e0._8_8_ = local_118._8_8_;
  local_70 = local_118._32_8_;
  local_40 = local_118._40_8_;
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_>_>,0,0>
          ::
          run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
                    (&local_118,local_res8,
                     (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>
                      *)local_e0);
  return fVar1;
}

// eval_dynamic<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::internal::assign_op<float,float>_> @ 14f06a0f0

void __cdecl
Eigen::internal::
generic_product_impl<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>,Eigen::DenseShape,Eigen::DenseShape,3>
::eval_dynamic<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::internal::assign_op<float,float>_>
          (Matrix<float,_1,_1,0,_1,_1> *param_1,Matrix<float,_1,_1,0,_1,_1> *param_2,
          Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>
          *param_3,assign_op<float,float> *param_4)

{
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *local_118;
  Matrix<float,_1,_1,0,_1,_1> **local_110;
  assign_op<float,float> *local_108;
  Matrix<float,_1,_1,0,_1,_1> *local_100;
  Matrix<float,_1,_1,0,_1,_1> *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_50;
  
  local_e0 = *(longlong *)&param_3->field_0x10;
  local_b0 = *(undefined8 *)&param_3->field_0x40;
  local_f0 = *(undefined8 *)param_3;
  uStack_e8 = *(undefined8 *)&param_3->field_0x8;
  local_c0 = *(undefined8 *)&param_3->field_0x30;
  local_c8 = *(undefined8 *)&param_3->field_0x28;
  local_a8 = *(undefined8 *)&param_3->field_0x48;
  local_a0 = *(undefined8 *)&param_3->field_0x50;
  local_d8 = *(undefined8 *)&param_3->field_0x18;
  uStack_d0 = *(undefined8 *)&param_3->field_0x20;
  local_90 = *(longlong *)&param_2->field_0x8;
  local_98 = *(undefined8 *)param_2;
  local_70 = *(undefined8 *)&param_2->field_0x10;
  local_f8 = param_2;
  local_88 = local_f0;
  local_78 = local_c0;
  local_50 = local_e0;
  if ((*(longlong *)&param_1->field_0x8 != local_90) ||
     (*(longlong *)&param_1->field_0x10 != local_e0)) {
    PlainObjectBase<Eigen::Matrix<float,-1,-1,0,-1,-1>_>::resize
              ((PlainObjectBase<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)param_1,local_90,local_e0);
  }
  local_128 = *(undefined8 *)param_1;
  local_120 = *(undefined8 *)&param_1->field_0x8;
  local_118 = &local_128;
  local_110 = &local_f8;
  local_108 = param_4;
  local_100 = param_1;
  dense_assignment_loop<Eigen::internal::restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>,Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>,1>_>,Eigen::internal::assign_op<float,float>_>,4,0>
  ::run((restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_>,Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>,1>_>,Eigen::internal::assign_op<float,float>_>
         *)&local_118);
  return;
}

// eval_dynamic<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::internal::assign_op<float,float>_> @ 14f06a1f0

void __cdecl
Eigen::internal::
generic_product_impl<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>,Eigen::DenseShape,Eigen::DenseShape,3>
::eval_dynamic<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::internal::assign_op<float,float>_>
          (Matrix<float,_1,_1,0,_1,_1> *param_1,Matrix<float,_1,_1,0,_1,_1> *param_2,
          Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_> *param_3,
          assign_op<float,float> *param_4)

{
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  Matrix<float,_1,_1,0,_1,_1> **local_90;
  assign_op<float,float> *paStack_88;
  Matrix<float,_1,_1,0,_1,_1> *local_80;
  Matrix<float,_1,_1,0,_1,_1> *local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_90 = (Matrix<float,_1,_1,0,_1,_1> **)param_3->_padding_;
  paStack_88 = (assign_op<float,float> *)param_3->_padding_;
  local_48 = *(undefined8 *)&param_3->m_stride;
  local_80 = (Matrix<float,_1,_1,0,_1,_1> *)param_3->_padding_;
  local_50 = param_3->_padding_;
  local_30 = *(longlong *)&param_2->field_0x8;
  local_38 = *(undefined8 *)param_2;
  local_10 = *(undefined8 *)&param_2->field_0x10;
  local_68 = param_2;
  local_60 = (longlong)local_90;
  lStack_58 = (longlong)paStack_88;
  local_28 = (longlong)local_90;
  local_18 = local_48;
  if ((*(longlong *)&param_1->field_0x8 != local_30) ||
     ((Matrix<float,_1,_1,0,_1,_1> *)*(longlong *)&param_1->field_0x10 != local_80)) {
    PlainObjectBase<Eigen::Matrix<float,-1,-1,0,-1,-1>_>::resize
              ((PlainObjectBase<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)param_1,local_30,
               (long64)local_80);
  }
  local_a8 = *(undefined8 *)param_1;
  local_a0 = *(undefined8 *)&param_1->field_0x8;
  local_98 = &local_a8;
  local_90 = &local_68;
  paStack_88 = param_4;
  local_80 = param_1;
  dense_assignment_loop<Eigen::internal::restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>,Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>,1>_>,Eigen::internal::assign_op<float,float>_>,4,0>
  ::run((restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_>,Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>,1>_>,Eigen::internal::assign_op<float,float>_>
         *)&local_98);
  return;
}

// get_runtime_value<unsigned___int64> @ 14f06a2d0

long64 __cdecl Eigen::internal::get_runtime_value<unsigned___int64>(ulong64 *param_1)

{
  return *param_1;
}

// lazyProduct<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_> @ 14f06a2e0

Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>,1>
* __thiscall
Eigen::MatrixBase<Eigen::Matrix<float,-1,-1,0,-1,-1>_>::
lazyProduct<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_>
          (MatrixBase<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *this,
          Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>,1>
          *__return_storage_ptr__,
          MatrixBase<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_>
          *param_1)

{
  undefined8 uVar1;
  
  __return_storage_ptr__->m_lhs = (Matrix<float,_1,_1,0,_1,_1> *)this;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)&__return_storage_ptr__->m_rhs = *(undefined8 *)param_1;
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x8 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x10 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x18 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x20 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x28 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x30 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x40 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x48 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).field_0x50 = *(undefined8 *)(param_1 + 0x50);
  return __return_storage_ptr__;
}

// lazyProduct<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_> @ 14f06a340

Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>,1>
* __thiscall
Eigen::MatrixBase<Eigen::Matrix<float,-1,-1,0,-1,-1>_>::
lazyProduct<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_>
          (MatrixBase<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *this,
          Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>,1>
          *__return_storage_ptr__,
          MatrixBase<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_>
          *param_1)

{
  longlong lVar1;
  
  __return_storage_ptr__->m_lhs = (Matrix<float,_1,_1,0,_1,_1> *)this;
  lVar1 = *(longlong *)(param_1 + 8);
  (__return_storage_ptr__->m_rhs)._padding_ = *(longlong *)param_1;
  (__return_storage_ptr__->m_rhs)._padding_ = lVar1;
  (__return_storage_ptr__->m_rhs)._padding_ = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)&(__return_storage_ptr__->m_rhs).m_stride = *(undefined8 *)(param_1 + 0x18);
  return __return_storage_ptr__;
}

// parallelize_gemm<1,Eigen::internal::gemm_functor<float,__int64,Eigen::internal::general_matrix_matrix_product<__int64,float,0,0,float,1,0,0,1>,Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>,Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::internal::gemm_blocking_space<0,float,float,-1,-1,-1,1,0>_>,__int64> @ 14f06a370

void __cdecl
Eigen::internal::
parallelize_gemm<1,Eigen::internal::gemm_functor<float,__int64,Eigen::internal::general_matrix_matrix_product<__int64,float,0,0,float,1,0,0,1>,Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>,Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::internal::gemm_blocking_space<0,float,float,_1,_1,_1,1,0>_>,__int64>
          (gemm_functor<float,__int64,Eigen::internal::general_matrix_matrix_product<__int64,float,0,0,float,1,0,0,1>,Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>,Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::internal::gemm_blocking_space<0,float,float,_1,_1,_1,1,0>_>
           *param_1,long64 param_2,long64 param_3,long64 param_4,bool param_5)

{
  Matrix<float,_1,_1,0,_1,_1> *pMVar1;
  
  if (param_3 == -1) {
    param_3 = *(long64 *)&param_1->m_rhs->field_0x10;
  }
  pMVar1 = param_1->m_lhs;
  general_matrix_matrix_product<__int64,float,0,0,float,1,0,0,1>::run
            (param_2,param_3,*(long64 *)&pMVar1->field_0x10,*(float **)pMVar1,
             *(long64 *)&pMVar1->field_0x8,*(float **)param_1->m_rhs,
             *(long64 *)&param_1->m_rhs->field_0x30,*(float **)param_1->m_dest,1,
             *(long64 *)&param_1->m_dest->field_0x8,param_1->m_actualAlpha,
             (level3_blocking<float,float> *)param_1->m_blocking,(GemmParallelInfo<__int64> *)0x0);
  return;
}

// parallelize_gemm<1,Eigen::internal::gemm_functor<float,__int64,Eigen::internal::general_matrix_matrix_product<__int64,float,0,0,float,1,0,0,1>,Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>,Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::internal::gemm_blocking_space<0,float,float,-1,-1,-1,1,0>_>,__int64> @ 14f06a410

void __cdecl
Eigen::internal::
parallelize_gemm<1,Eigen::internal::gemm_functor<float,__int64,Eigen::internal::general_matrix_matrix_product<__int64,float,0,0,float,1,0,0,1>,Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>,Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::internal::gemm_blocking_space<0,float,float,_1,_1,_1,1,0>_>,__int64>
          (gemm_functor<float,__int64,Eigen::internal::general_matrix_matrix_product<__int64,float,0,0,float,1,0,0,1>,Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>,Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::internal::gemm_blocking_space<0,float,float,_1,_1,_1,1,0>_>
           *param_1,long64 param_2,long64 param_3,long64 param_4,bool param_5)

{
  Matrix<float,_1,_1,0,_1,_1> *pMVar1;
  
  if (param_3 == -1) {
    param_3 = param_1->m_rhs->_padding_;
  }
  pMVar1 = param_1->m_lhs;
  general_matrix_matrix_product<__int64,float,0,0,float,1,0,0,1>::run
            (param_2,param_3,*(long64 *)&pMVar1->field_0x10,*(float **)pMVar1,
             *(long64 *)&pMVar1->field_0x8,(float *)param_1->m_rhs->_padding_,
             *(long64 *)&param_1->m_rhs->m_stride,*(float **)param_1->m_dest,1,
             *(long64 *)&param_1->m_dest->field_0x8,param_1->m_actualAlpha,
             (level3_blocking<float,float> *)param_1->m_blocking,(GemmParallelInfo<__int64> *)0x0);
  return;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14f06a4b0

float __thiscall
Eigen::
DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float fVar1;
  redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
  local_48;
  
  local_48._8_8_ = *(undefined8 *)(this + 8);
  local_48._16_8_ = *(undefined8 *)(*(longlong *)(this + 0x38) + 8);
  local_48._32_8_ = *(undefined8 *)(this + 0x70);
  local_48._40_8_ = *(undefined8 *)(this + 0xb8);
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_>_>,0,0>
          ::
          run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
                    (&local_48,param_1,
                     (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>
                      *)this);
  return fVar1;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14f06a500

float __thiscall
Eigen::
DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float fVar1;
  redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
  local_48;
  
  local_48._8_8_ = *(undefined8 *)(this + 8);
  local_48._16_8_ = *(undefined8 *)(*(longlong *)(this + 0x38) + 8);
  local_48._32_8_ = *(undefined8 *)(this + 0x70);
  local_48._40_8_ = *(undefined8 *)(this + 0xa0);
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_>_>,0,0>
          ::
          run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
                    (&local_48,param_1,
                     (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>
                      *)this);
  return fVar1;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14f06a550

float __thiscall
Eigen::
DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_,-1,1,1>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float fVar1;
  redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
  local_48;
  
  local_48._8_8_ = *(undefined8 *)(this + 8);
  local_48._16_8_ = *(undefined8 *)(*(longlong *)(this + 0x20) + 8);
  local_48._32_8_ = *(undefined8 *)(this + 0x40);
  local_48._40_8_ = *(undefined8 *)(this + 0xa0);
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_,-1,1,1>_const_>_>,0,0>
          ::
          run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
                    (&local_48,param_1,
                     (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_const_>
                      *)this);
  return fVar1;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14f06a5a0

float __thiscall
Eigen::
DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_,-1,1,1>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float fVar1;
  redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
  local_48;
  
  local_48._8_8_ = *(undefined8 *)(this + 8);
  local_48._16_8_ = *(undefined8 *)(*(longlong *)(this + 0x20) + 8);
  local_48._32_8_ = *(undefined8 *)(this + 0x40);
  local_48._40_8_ = *(undefined8 *)(this + 0x88);
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_,-1,1,1>_const_>_>,0,0>
          ::
          run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
                    (&local_48,param_1,
                     (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_const_>
                      *)this);
  return fVar1;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14f06a5f0

float __thiscall
Eigen::
DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float fVar1;
  redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
  local_48;
  
  local_48._8_8_ = *(undefined8 *)(this + 8);
  local_48._16_8_ = *(undefined8 *)(*(longlong *)(this + 0x20) + 8);
  local_48._32_8_ = *(undefined8 *)(this + 0x40);
  local_48._40_8_ = *(undefined8 *)(this + 0x88);
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_>_>,0,0>
          ::
          run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
                    (&local_48,param_1,
                     (CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>
                      *)this);
  return fVar1;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14f06a640

float __thiscall
Eigen::
DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float fVar1;
  redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
  local_48;
  
  local_48._8_8_ = *(undefined8 *)(this + 8);
  local_48._16_8_ = *(undefined8 *)(*(longlong *)(this + 0x20) + 8);
  local_48._32_8_ = *(undefined8 *)(this + 0x40);
  local_48._40_8_ = *(undefined8 *)(this + 0x70);
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_>_>,0,0>
          ::
          run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
                    (&local_48,param_1,
                     (CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>
                      *)this);
  return fVar1;
}

// run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_>_> @ 14f06a690

float __cdecl
Eigen::internal::
redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_>_>,0,0>
::
run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
          (redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
           *param_1,scalar_sum_op<float,float> *param_2,
          CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>
          *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  
  pfVar10 = *(float **)&param_1->field_0x20;
  lVar19 = 1;
  pfVar13 = *(float **)&param_1->field_0x8;
  lVar16 = *(longlong *)&(param_3->m_rhs).field_0x8;
  fVar20 = *pfVar10 * *pfVar13;
  if (lVar16 < 2) {
    return fVar20;
  }
  if (3 < lVar16 + -1) {
    lVar7 = *(longlong *)&param_1->field_0x28;
    lVar8 = *(longlong *)&param_1->field_0x10;
    pfVar17 = pfVar10 + lVar7;
    pfVar14 = pfVar13 + lVar8;
    pfVar15 = pfVar13 + lVar8 * 3;
    pfVar9 = pfVar10 + lVar7 * 3;
    pfVar12 = pfVar10 + lVar7 * 2;
    pfVar11 = (float *)(*(longlong *)&param_1->field_0x8 + lVar8 * 8);
    lVar18 = (lVar16 - 5U >> 2) + 1;
    lVar19 = lVar18 * 4 + 1;
    do {
      pfVar13 = pfVar13 + lVar8 * 4;
      pfVar10 = pfVar10 + lVar7 * 4;
      fVar1 = *pfVar17;
      pfVar17 = pfVar17 + lVar7 * 4;
      fVar2 = *pfVar14;
      pfVar14 = pfVar14 + lVar8 * 4;
      fVar3 = *pfVar12;
      pfVar12 = pfVar12 + lVar7 * 4;
      fVar4 = *pfVar11;
      pfVar11 = pfVar11 + lVar8 * 4;
      fVar5 = *pfVar9;
      fVar6 = *pfVar15;
      pfVar15 = pfVar15 + lVar8 * 4;
      pfVar9 = pfVar9 + lVar7 * 4;
      fVar20 = fVar1 * fVar2 + fVar20 + fVar3 * fVar4 + fVar5 * fVar6 + *pfVar10 * *pfVar13;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    if (lVar16 <= lVar19) {
      return fVar20;
    }
    pfVar10 = *(float **)&param_1->field_0x20;
    pfVar13 = *(float **)&param_1->field_0x8;
  }
  pfVar13 = pfVar13 + *(longlong *)&param_1->field_0x10 * lVar19;
  lVar16 = lVar16 - lVar19;
  pfVar10 = pfVar10 + *(longlong *)&param_1->field_0x28 * lVar19;
  do {
    fVar1 = *pfVar10;
    pfVar10 = pfVar10 + *(longlong *)&param_1->field_0x28;
    fVar2 = *pfVar13;
    pfVar13 = pfVar13 + *(longlong *)&param_1->field_0x10;
    fVar20 = fVar20 + fVar1 * fVar2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  return fVar20;
}

// run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_>_> @ 14f06a820

float __cdecl
Eigen::internal::
redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_>_>,0,0>
::
run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
          (redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
           *param_1,scalar_sum_op<float,float> *param_2,
          CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>
          *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  
  pfVar10 = *(float **)&param_1->field_0x20;
  lVar19 = 1;
  pfVar13 = *(float **)&param_1->field_0x8;
  lVar16 = *(longlong *)&(param_3->m_rhs).field_0x8;
  fVar20 = *pfVar10 * *pfVar13;
  if (lVar16 < 2) {
    return fVar20;
  }
  if (3 < lVar16 + -1) {
    lVar7 = *(longlong *)&param_1->field_0x28;
    lVar8 = *(longlong *)&param_1->field_0x10;
    pfVar17 = pfVar10 + lVar7;
    pfVar14 = pfVar13 + lVar8;
    pfVar15 = pfVar13 + lVar8 * 3;
    pfVar9 = pfVar10 + lVar7 * 3;
    pfVar12 = pfVar10 + lVar7 * 2;
    pfVar11 = (float *)(*(longlong *)&param_1->field_0x8 + lVar8 * 8);
    lVar18 = (lVar16 - 5U >> 2) + 1;
    lVar19 = lVar18 * 4 + 1;
    do {
      pfVar13 = pfVar13 + lVar8 * 4;
      pfVar10 = pfVar10 + lVar7 * 4;
      fVar1 = *pfVar17;
      pfVar17 = pfVar17 + lVar7 * 4;
      fVar2 = *pfVar14;
      pfVar14 = pfVar14 + lVar8 * 4;
      fVar3 = *pfVar12;
      pfVar12 = pfVar12 + lVar7 * 4;
      fVar4 = *pfVar11;
      pfVar11 = pfVar11 + lVar8 * 4;
      fVar5 = *pfVar9;
      fVar6 = *pfVar15;
      pfVar15 = pfVar15 + lVar8 * 4;
      pfVar9 = pfVar9 + lVar7 * 4;
      fVar20 = fVar1 * fVar2 + fVar20 + fVar3 * fVar4 + fVar5 * fVar6 + *pfVar10 * *pfVar13;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    if (lVar16 <= lVar19) {
      return fVar20;
    }
    pfVar10 = *(float **)&param_1->field_0x20;
    pfVar13 = *(float **)&param_1->field_0x8;
  }
  pfVar13 = pfVar13 + *(longlong *)&param_1->field_0x10 * lVar19;
  lVar16 = lVar16 - lVar19;
  pfVar10 = pfVar10 + *(longlong *)&param_1->field_0x28 * lVar19;
  do {
    fVar1 = *pfVar10;
    pfVar10 = pfVar10 + *(longlong *)&param_1->field_0x28;
    fVar2 = *pfVar13;
    pfVar13 = pfVar13 + *(longlong *)&param_1->field_0x10;
    fVar20 = fVar20 + fVar1 * fVar2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  return fVar20;
}

// run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_,-1,1,1>_const_>_> @ 14f06a9b0

float __cdecl
Eigen::internal::
redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_,-1,1,1>_const_>_>,0,0>
::
run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
          (redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
           *param_1,scalar_sum_op<float,float> *param_2,
          CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_const_>
          *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  
  pfVar10 = *(float **)&param_1->field_0x20;
  lVar19 = 1;
  pfVar13 = *(float **)&param_1->field_0x8;
  lVar16 = *(longlong *)&(param_3->m_rhs).field_0x8;
  fVar20 = *pfVar10 * *pfVar13;
  if (lVar16 < 2) {
    return fVar20;
  }
  if (3 < lVar16 + -1) {
    lVar7 = *(longlong *)&param_1->field_0x28;
    lVar8 = *(longlong *)&param_1->field_0x10;
    pfVar17 = pfVar10 + lVar7;
    pfVar14 = pfVar13 + lVar8;
    pfVar15 = pfVar13 + lVar8 * 3;
    pfVar9 = pfVar10 + lVar7 * 3;
    pfVar12 = pfVar10 + lVar7 * 2;
    pfVar11 = (float *)(*(longlong *)&param_1->field_0x8 + lVar8 * 8);
    lVar18 = (lVar16 - 5U >> 2) + 1;
    lVar19 = lVar18 * 4 + 1;
    do {
      pfVar13 = pfVar13 + lVar8 * 4;
      pfVar10 = pfVar10 + lVar7 * 4;
      fVar1 = *pfVar17;
      pfVar17 = pfVar17 + lVar7 * 4;
      fVar2 = *pfVar14;
      pfVar14 = pfVar14 + lVar8 * 4;
      fVar3 = *pfVar12;
      pfVar12 = pfVar12 + lVar7 * 4;
      fVar4 = *pfVar11;
      pfVar11 = pfVar11 + lVar8 * 4;
      fVar5 = *pfVar9;
      fVar6 = *pfVar15;
      pfVar15 = pfVar15 + lVar8 * 4;
      pfVar9 = pfVar9 + lVar7 * 4;
      fVar20 = fVar1 * fVar2 + fVar20 + fVar3 * fVar4 + fVar5 * fVar6 + *pfVar10 * *pfVar13;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    if (lVar16 <= lVar19) {
      return fVar20;
    }
    pfVar10 = *(float **)&param_1->field_0x20;
    pfVar13 = *(float **)&param_1->field_0x8;
  }
  pfVar13 = pfVar13 + *(longlong *)&param_1->field_0x10 * lVar19;
  lVar16 = lVar16 - lVar19;
  pfVar10 = pfVar10 + *(longlong *)&param_1->field_0x28 * lVar19;
  do {
    fVar1 = *pfVar10;
    pfVar10 = pfVar10 + *(longlong *)&param_1->field_0x28;
    fVar2 = *pfVar13;
    pfVar13 = pfVar13 + *(longlong *)&param_1->field_0x10;
    fVar20 = fVar20 + fVar1 * fVar2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  return fVar20;
}

// run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_,-1,1,1>_const_>_> @ 14f06ab40

float __cdecl
Eigen::internal::
redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_,-1,1,1>_const_>_>,0,0>
::
run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
          (redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
           *param_1,scalar_sum_op<float,float> *param_2,
          CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_const_>
          *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  
  pfVar10 = *(float **)&param_1->field_0x20;
  lVar19 = 1;
  pfVar13 = *(float **)&param_1->field_0x8;
  lVar16 = *(longlong *)&(param_3->m_rhs).field_0x8;
  fVar20 = *pfVar10 * *pfVar13;
  if (lVar16 < 2) {
    return fVar20;
  }
  if (3 < lVar16 + -1) {
    lVar7 = *(longlong *)&param_1->field_0x28;
    lVar8 = *(longlong *)&param_1->field_0x10;
    pfVar17 = pfVar10 + lVar7;
    pfVar14 = pfVar13 + lVar8;
    pfVar15 = pfVar13 + lVar8 * 3;
    pfVar9 = pfVar10 + lVar7 * 3;
    pfVar12 = pfVar10 + lVar7 * 2;
    pfVar11 = (float *)(*(longlong *)&param_1->field_0x8 + lVar8 * 8);
    lVar18 = (lVar16 - 5U >> 2) + 1;
    lVar19 = lVar18 * 4 + 1;
    do {
      pfVar13 = pfVar13 + lVar8 * 4;
      pfVar10 = pfVar10 + lVar7 * 4;
      fVar1 = *pfVar17;
      pfVar17 = pfVar17 + lVar7 * 4;
      fVar2 = *pfVar14;
      pfVar14 = pfVar14 + lVar8 * 4;
      fVar3 = *pfVar12;
      pfVar12 = pfVar12 + lVar7 * 4;
      fVar4 = *pfVar11;
      pfVar11 = pfVar11 + lVar8 * 4;
      fVar5 = *pfVar9;
      fVar6 = *pfVar15;
      pfVar15 = pfVar15 + lVar8 * 4;
      pfVar9 = pfVar9 + lVar7 * 4;
      fVar20 = fVar1 * fVar2 + fVar20 + fVar3 * fVar4 + fVar5 * fVar6 + *pfVar10 * *pfVar13;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    if (lVar16 <= lVar19) {
      return fVar20;
    }
    pfVar10 = *(float **)&param_1->field_0x20;
    pfVar13 = *(float **)&param_1->field_0x8;
  }
  pfVar13 = pfVar13 + *(longlong *)&param_1->field_0x10 * lVar19;
  lVar16 = lVar16 - lVar19;
  pfVar10 = pfVar10 + *(longlong *)&param_1->field_0x28 * lVar19;
  do {
    fVar1 = *pfVar10;
    pfVar10 = pfVar10 + *(longlong *)&param_1->field_0x28;
    fVar2 = *pfVar13;
    pfVar13 = pfVar13 + *(longlong *)&param_1->field_0x10;
    fVar20 = fVar20 + fVar1 * fVar2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  return fVar20;
}

// run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_>_> @ 14f06acd0

float __cdecl
Eigen::internal::
redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_>_>,0,0>
::
run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
          (redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
           *param_1,scalar_sum_op<float,float> *param_2,
          CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>
          *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  
  pfVar13 = *(float **)&param_1->field_0x20;
  lVar19 = 1;
  pfVar10 = *(float **)&param_1->field_0x8;
  lVar16 = *(longlong *)&(param_3->m_rhs).field_0x8;
  fVar20 = *pfVar13 * *pfVar10;
  if (lVar16 < 2) {
    return fVar20;
  }
  if (3 < lVar16 + -1) {
    lVar7 = *(longlong *)&param_1->field_0x28;
    lVar8 = *(longlong *)&param_1->field_0x10;
    pfVar14 = pfVar10 + lVar8;
    pfVar17 = pfVar13 + lVar7;
    pfVar15 = pfVar13 + lVar7 * 3;
    pfVar9 = pfVar10 + lVar8 * 3;
    pfVar11 = pfVar10 + lVar8 * 2;
    pfVar12 = (float *)(*(longlong *)&param_1->field_0x20 + lVar7 * 8);
    lVar18 = (lVar16 - 5U >> 2) + 1;
    lVar19 = lVar18 * 4 + 1;
    do {
      pfVar13 = pfVar13 + lVar7 * 4;
      pfVar10 = pfVar10 + lVar8 * 4;
      fVar1 = *pfVar17;
      pfVar17 = pfVar17 + lVar7 * 4;
      fVar2 = *pfVar14;
      pfVar14 = pfVar14 + lVar8 * 4;
      fVar3 = *pfVar11;
      pfVar11 = pfVar11 + lVar8 * 4;
      fVar4 = *pfVar12;
      pfVar12 = pfVar12 + lVar7 * 4;
      fVar5 = *pfVar9;
      fVar6 = *pfVar15;
      pfVar9 = pfVar9 + lVar8 * 4;
      pfVar15 = pfVar15 + lVar7 * 4;
      fVar20 = fVar1 * fVar2 + fVar20 + fVar3 * fVar4 + fVar5 * fVar6 + *pfVar10 * *pfVar13;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    if (lVar16 <= lVar19) {
      return fVar20;
    }
    pfVar10 = *(float **)&param_1->field_0x8;
    pfVar13 = *(float **)&param_1->field_0x20;
  }
  pfVar13 = pfVar13 + *(longlong *)&param_1->field_0x28 * lVar19;
  lVar16 = lVar16 - lVar19;
  pfVar10 = pfVar10 + *(longlong *)&param_1->field_0x10 * lVar19;
  do {
    fVar1 = *pfVar10;
    pfVar10 = pfVar10 + *(longlong *)&param_1->field_0x10;
    fVar2 = *pfVar13;
    pfVar13 = pfVar13 + *(longlong *)&param_1->field_0x28;
    fVar20 = fVar20 + fVar1 * fVar2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  return fVar20;
}

// run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_>_> @ 14f06ae60

float __cdecl
Eigen::internal::
redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_>_>,0,0>
::
run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
          (redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
           *param_1,scalar_sum_op<float,float> *param_2,
          CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>
          *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  
  pfVar13 = *(float **)&param_1->field_0x20;
  lVar19 = 1;
  pfVar10 = *(float **)&param_1->field_0x8;
  lVar16 = *(longlong *)&(param_3->m_rhs).field_0x8;
  fVar20 = *pfVar13 * *pfVar10;
  if (lVar16 < 2) {
    return fVar20;
  }
  if (3 < lVar16 + -1) {
    lVar7 = *(longlong *)&param_1->field_0x28;
    lVar8 = *(longlong *)&param_1->field_0x10;
    pfVar14 = pfVar10 + lVar8;
    pfVar17 = pfVar13 + lVar7;
    pfVar15 = pfVar13 + lVar7 * 3;
    pfVar9 = pfVar10 + lVar8 * 3;
    pfVar11 = pfVar10 + lVar8 * 2;
    pfVar12 = (float *)(*(longlong *)&param_1->field_0x20 + lVar7 * 8);
    lVar18 = (lVar16 - 5U >> 2) + 1;
    lVar19 = lVar18 * 4 + 1;
    do {
      pfVar13 = pfVar13 + lVar7 * 4;
      pfVar10 = pfVar10 + lVar8 * 4;
      fVar1 = *pfVar17;
      pfVar17 = pfVar17 + lVar7 * 4;
      fVar2 = *pfVar14;
      pfVar14 = pfVar14 + lVar8 * 4;
      fVar3 = *pfVar11;
      pfVar11 = pfVar11 + lVar8 * 4;
      fVar4 = *pfVar12;
      pfVar12 = pfVar12 + lVar7 * 4;
      fVar5 = *pfVar9;
      fVar6 = *pfVar15;
      pfVar9 = pfVar9 + lVar8 * 4;
      pfVar15 = pfVar15 + lVar7 * 4;
      fVar20 = fVar1 * fVar2 + fVar20 + fVar3 * fVar4 + fVar5 * fVar6 + *pfVar10 * *pfVar13;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    if (lVar16 <= lVar19) {
      return fVar20;
    }
    pfVar10 = *(float **)&param_1->field_0x8;
    pfVar13 = *(float **)&param_1->field_0x20;
  }
  pfVar13 = pfVar13 + *(longlong *)&param_1->field_0x28 * lVar19;
  lVar16 = lVar16 - lVar19;
  pfVar10 = pfVar10 + *(longlong *)&param_1->field_0x10 * lVar19;
  do {
    fVar1 = *pfVar10;
    pfVar10 = pfVar10 + *(longlong *)&param_1->field_0x10;
    fVar2 = *pfVar13;
    pfVar13 = pfVar13 + *(longlong *)&param_1->field_0x28;
    fVar20 = fVar20 + fVar1 * fVar2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  return fVar20;
}

// run<Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>,1,-1,0>_>_> @ 14f06aff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Eigen::internal::gemv_dense_selector<2,0,1>::
run<Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_>_>
          (Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_>
           *param_1,
          Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_> *param_2,
          Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_> *param_3,
          float *param_4)

{
  ulong64 uVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  long64 lVar5;
  undefined8 uVar6;
  longlong lVar7;
  long64 lVar8;
  void *pvVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_148 [64];
  assign_op<float,float> local_108 [8];
  Map<Eigen::Matrix<float,_1,1,0,_1,1>,4,Eigen::Stride<0,0>_> local_100;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  const_blas_data_mapper<float,__int64,1> local_c8 [2];
  long64 local_a8;
  ulonglong local_58;
  
  puVar11 = auStack_148;
  local_58 = __security_cookie.value ^ (ulonglong)local_108;
  local_a8 = *(long64 *)&(param_1->m_matrix).field_0x10;
  uVar12 = *(ulonglong *)&(param_3->m_matrix).field_0x10;
  local_d0 = *(undefined8 *)&(param_2->m_matrix).field_0x30;
  lVar3 = *(longlong *)&(param_1->m_matrix).field_0x30;
  fVar2 = *param_4;
  local_e0 = *(undefined8 *)&(param_2->m_matrix).field_0x20;
  uStack_d8 = *(undefined8 *)&(param_2->m_matrix).field_0x28;
  lVar4 = *(longlong *)&param_1->m_matrix;
  lVar5 = *(long64 *)&(param_1->m_matrix).field_0x8;
  uVar6 = *(undefined8 *)&param_2->m_matrix;
  lVar7 = *(longlong *)&(param_2->m_matrix).field_0x18;
  if (0x3fffffffffffffff < uVar12) {
    ::operator_new(0xffffffffffffffff);
    uVar12 = *(ulonglong *)&(param_3->m_matrix).field_0x10;
  }
  uVar1 = uVar12 * 4;
  if (uVar1 < 0x20001) {
    uVar10 = uVar1 + 0x1e;
    if (uVar10 <= uVar1 + 0xf) {
      uVar10 = 0xffffffffffffff0;
    }
    puVar11 = auStack_148 + -(uVar10 & 0xfffffffffffffff0);
    pvVar9 = (void *)((longlong)&local_100 + -(uVar10 & 0xfffffffffffffff0));
  }
  else {
    pvVar9 = aligned_malloc(uVar1);
    uVar12 = *(ulonglong *)&(param_3->m_matrix).field_0x10;
  }
  local_100._padding_ = (longlong)pvVar9;
  local_100._padding_ = uVar12;
  *(undefined8 *)(puVar11 + -8) = 0x14f06b109;
  call_assignment_no_alias<Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>,4,Eigen::Stride<0,0>_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_>,Eigen::internal::assign_op<float,float>_>
            (&local_100,param_3,local_108);
  *(float *)(puVar11 + 0x30) = fVar2;
  local_100._padding_ = lVar4;
  *(undefined8 *)(puVar11 + 0x28) = 1;
  lVar8 = local_a8;
  local_c8[0]._0_8_ = uVar6;
  local_c8[0]._8_8_ = *(undefined8 *)(lVar7 + 8);
  local_100._padding_ = lVar3;
  *(void **)(puVar11 + 0x20) = pvVar9;
  *(undefined8 *)(puVar11 + -8) = 0x14f06b15a;
  general_matrix_vector_product<__int64,float,Eigen::internal::const_blas_data_mapper<float,__int64,0>,0,0,float,Eigen::internal::const_blas_data_mapper<float,__int64,1>,0,0>
  ::run(lVar8,lVar5,(const_blas_data_mapper<float,__int64,0> *)&local_100,local_c8,
        *(float **)(puVar11 + 0x20),*(long64 *)(puVar11 + 0x28),*(float *)(puVar11 + 0x30));
  local_100._padding_ = *(longlong *)&(param_3->m_matrix).field_0x10;
  local_100._padding_ = (longlong)pvVar9;
  *(undefined8 *)(puVar11 + -8) = 0x14f06b176;
  call_assignment_no_alias<Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_>,Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>,4,Eigen::Stride<0,0>_>,Eigen::internal::assign_op<float,float>_>
            (param_3,&local_100,local_108);
  if (0x20000 < uVar12 * 4) {
    *(undefined8 *)(puVar11 + -8) = 0x14f06b18e;
    FMemory_Free(pvVar9);
  }
  *(undefined8 *)(puVar11 + -8) = 0x14f06b19d;
  return;
}

// run<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>,1,-1,0>_>_> @ 14f06b1f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Eigen::internal::gemv_dense_selector<2,0,1>::
run<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_>_>
          (Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_>
           *param_1,
          Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_> *param_2,
          Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_> *param_3,
          float *param_4)

{
  ulong64 uVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  long64 lVar5;
  undefined8 uVar6;
  longlong lVar7;
  void *pvVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_108 [64];
  assign_op<float,float> local_c8 [8];
  Map<Eigen::Matrix<float,_1,1,0,_1,1>,4,Eigen::Stride<0,0>_> local_c0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  const_blas_data_mapper<float,__int64,1> local_88 [2];
  longlong local_68;
  ulonglong local_50;
  
  puVar10 = auStack_108;
  local_50 = __security_cookie.value ^ (ulonglong)local_c8;
  local_68 = (param_1->m_matrix)._padding_;
  uVar11 = *(ulonglong *)&(param_3->m_matrix).field_0x10;
  local_90 = *(undefined8 *)&(param_2->m_matrix).field_0x30;
  lVar3 = *(longlong *)&(param_1->m_matrix).m_stride;
  fVar2 = *param_4;
  local_a0 = *(undefined8 *)&(param_2->m_matrix).field_0x20;
  uStack_98 = *(undefined8 *)&(param_2->m_matrix).field_0x28;
  lVar4 = (param_1->m_matrix)._padding_;
  lVar5 = (param_1->m_matrix)._padding_;
  uVar6 = *(undefined8 *)&param_2->m_matrix;
  lVar7 = *(longlong *)&(param_2->m_matrix).field_0x18;
  if (0x3fffffffffffffff < uVar11) {
    ::operator_new(0xffffffffffffffff);
    uVar11 = *(ulonglong *)&(param_3->m_matrix).field_0x10;
  }
  uVar1 = uVar11 * 4;
  if (uVar1 < 0x20001) {
    uVar9 = uVar1 + 0x1e;
    if (uVar9 <= uVar1 + 0xf) {
      uVar9 = 0xffffffffffffff0;
    }
    puVar10 = auStack_108 + -(uVar9 & 0xfffffffffffffff0);
    pvVar8 = (void *)((longlong)&local_c0 + -(uVar9 & 0xfffffffffffffff0));
  }
  else {
    pvVar8 = aligned_malloc(uVar1);
    uVar11 = *(ulonglong *)&(param_3->m_matrix).field_0x10;
  }
  local_c0._padding_ = (longlong)pvVar8;
  local_c0._padding_ = uVar11;
  *(undefined8 *)(puVar10 + -8) = 0x14f06b306;
  call_assignment_no_alias<Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>,4,Eigen::Stride<0,0>_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_>,Eigen::internal::assign_op<float,float>_>
            (&local_c0,param_3,local_c8);
  *(float *)(puVar10 + 0x30) = fVar2;
  local_c0._padding_ = lVar4;
  *(undefined8 *)(puVar10 + 0x28) = 1;
  lVar4 = local_68;
  local_88[0]._0_8_ = uVar6;
  local_88[0]._8_8_ = *(undefined8 *)(lVar7 + 8);
  local_c0._padding_ = lVar3;
  *(void **)(puVar10 + 0x20) = pvVar8;
  *(undefined8 *)(puVar10 + -8) = 0x14f06b357;
  general_matrix_vector_product<__int64,float,Eigen::internal::const_blas_data_mapper<float,__int64,0>,0,0,float,Eigen::internal::const_blas_data_mapper<float,__int64,1>,0,0>
  ::run(lVar4,lVar5,(const_blas_data_mapper<float,__int64,0> *)&local_c0,local_88,
        *(float **)(puVar10 + 0x20),*(long64 *)(puVar10 + 0x28),*(float *)(puVar10 + 0x30));
  local_c0._padding_ = *(longlong *)&(param_3->m_matrix).field_0x10;
  local_c0._padding_ = (longlong)pvVar8;
  *(undefined8 *)(puVar10 + -8) = 0x14f06b373;
  call_assignment_no_alias<Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_>,Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>,4,Eigen::Stride<0,0>_>,Eigen::internal::assign_op<float,float>_>
            (param_3,&local_c0,local_c8);
  if (0x20000 < uVar11 * 4) {
    *(undefined8 *)(puVar10 + -8) = 0x14f06b38b;
    FMemory_Free(pvVar8);
  }
  *(undefined8 *)(puVar10 + -8) = 0x14f06b397;
  return;
}

// run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,3,0,3,3>_>,Eigen::internal::assign_op<float,float>,0>_> @ 14f06b3e0

void __cdecl
Eigen::internal::unaligned_dense_assignment_loop<0>::
run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,3,0,3,3>_>,Eigen::internal::assign_op<float,float>,0>_>
          (generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,3,0,3,3>_>,Eigen::internal::assign_op<float,float>,0>
           *param_1,long64 param_2,long64 param_3)

{
  evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *peVar1;
  evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *peVar2;
  evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *_Src;
  evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *peVar3;
  evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *peVar4;
  evaluator<Eigen::Matrix<float,3,3,0,3,3>_> *peVar5;
  longlong lVar6;
  
  if (param_2 < param_3) {
    if (3 < (ulonglong)(param_3 - param_2)) {
      peVar3 = param_1->m_dst;
      peVar4 = (evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)param_1->m_src;
      peVar1 = (evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)(*(longlong *)peVar3 + param_2 * 4)
      ;
      peVar2 = (evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)
               (*(longlong *)peVar3 + (param_3 + -1) * 4);
      _Src = (evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)(*(longlong *)peVar4 + param_2 * 4);
      if (((((evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)
             (*(longlong *)peVar4 + (param_3 + -1) * 4) < peVar1) || (peVar2 < _Src)) &&
          ((peVar3 < peVar1 || (peVar2 < peVar3)))) && ((peVar4 < peVar1 || (peVar2 < peVar4)))) {
        memcpy(peVar1,_Src,(param_3 - param_2) * 4);
        return;
      }
    }
    peVar5 = param_1->m_src;
    peVar1 = param_1->m_dst;
    if (3 < param_3 - param_2) {
      lVar6 = param_2 * 4;
      do {
        *(undefined4 *)(*(longlong *)peVar1 + param_2 * 4) =
             *(undefined4 *)(lVar6 + (longlong)*peVar5);
        *(undefined4 *)(*(longlong *)peVar1 + 4 + param_2 * 4) =
             *(undefined4 *)((longlong)*peVar5 + 4 + param_2 * 4);
        *(undefined4 *)(*(longlong *)peVar1 + 8 + param_2 * 4) =
             *(undefined4 *)((longlong)*peVar5 + 8 + param_2 * 4);
        *(undefined4 *)(*(longlong *)peVar1 + 0xc + param_2 * 4) =
             *(undefined4 *)((longlong)*peVar5 + 0xc + param_2 * 4);
        param_2 = param_2 + 4;
        lVar6 = lVar6 + 0x10;
      } while (param_2 < param_3 + -3);
      if (param_3 <= param_2) {
        return;
      }
    }
    do {
      *(undefined4 *)(*(longlong *)peVar1 + param_2 * 4) =
           *(undefined4 *)((longlong)*peVar5 + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return;
}

// scaleAndAddTo<Eigen::Matrix<float,-1,-1,0,-1,-1>_> @ 14f06b510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Eigen::internal::
generic_product_impl<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>,Eigen::DenseShape,Eigen::DenseShape,8>
::scaleAndAddTo<Eigen::Matrix<float,_1,_1,0,_1,_1>_>
          (Matrix<float,_1,_1,0,_1,_1> *param_1,Matrix<float,_1,_1,0,_1,_1> *param_2,
          Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>
          *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  scalar_sum_op<float,float> local_res10 [8];
  float *local_348;
  longlong lStack_340;
  longlong local_338;
  Matrix<float,_1,_1,0,_1,_1> *pMStack_330;
  undefined1 local_328 [24];
  gemm_blocking_space<0,float,float,_1,_1,_1,1,0> local_310;
  undefined1 local_2d8 [24];
  longlong local_2c0;
  undefined1 local_2b8 [56];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 local_200 [40];
  undefined8 local_1d8;
  longlong lStack_1d0;
  Matrix<float,_1,_1,0,_1,_1> *local_1c8;
  undefined1 auStack_1c0 [32];
  longlong lStack_1a0;
  undefined8 local_198;
  Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>
  local_190;
  undefined1 local_100 [136];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  
  local_338 = *(longlong *)&param_2->field_0x10;
  if (((local_338 != 0) &&
      (local_310.m_sizeB = *(long64 *)&param_2->field_0x8, local_310.m_sizeB != 0)) &&
     (local_100._128_8_ = *(undefined8 *)&param_3->field_0x10, local_100._128_8_ != 0)) {
    local_78._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_310._padding_ = local_338;
    local_310._padding_ = (longlong)param_2;
    local_200._24_8_ = local_310._padding_;
    if (local_78._16_8_ == 1) {
      local_328._0_8_ = *(undefined8 *)param_3;
      local_2b8._8_8_ = *(undefined8 *)&param_3->field_0x8;
      pfVar1 = *(float **)param_1;
      local_328._8_8_ = *(undefined8 *)&param_3->field_0x30;
      local_190._72_8_ = *(undefined8 *)&param_3->field_0x48;
      lStack_340 = *(longlong *)param_2;
      local_190._64_8_ = *(undefined8 *)&param_3->field_0x40;
      local_190._80_8_ = *(undefined8 *)&param_3->field_0x50;
      local_100._0_8_ = local_328._0_8_;
      local_100._8_8_ = local_2b8._8_8_;
      if (local_310.m_sizeB == 1) {
        local_190._16_8_ = *(undefined8 *)&param_3->field_0x10;
        local_190._40_8_ = *(undefined8 *)&param_3->field_0x28;
        fVar2 = 0.0;
        local_1d8 = 0;
        lStack_1d0 = 0;
        local_190._0_8_ = *(undefined8 *)param_3;
        local_190._8_8_ = *(undefined8 *)&param_3->field_0x8;
        local_190._88_8_ = 0;
        local_190._96_8_ = 0;
        local_190._24_8_ = *(undefined8 *)&param_3->field_0x18;
        local_190._32_8_ = *(undefined8 *)&param_3->field_0x20;
        local_190._104_8_ = ___xmm_00000000000000000000000000000001;
        local_190._112_8_ = _UNK_150ebf528;
        if (local_2b8._8_8_ != 0) {
          local_338 = local_310.m_sizeB;
          local_310._padding_ = lStack_340;
          local_2b8._0_8_ = local_328._0_8_;
          local_200._8_8_ = lStack_340;
          local_200._32_8_ = param_2;
          local_1c8 = (Matrix<float,_1,_1,0,_1,_1> *)local_310.m_sizeB;
          auStack_1c0._0_8_ = local_328._0_8_;
          auStack_1c0._8_8_ = local_2b8._8_8_;
          auStack_1c0._24_8_ = local_328._0_8_;
          lStack_1a0 = local_2b8._8_8_;
          local_190._48_8_ = local_328._8_8_;
          local_190._128_8_ = local_310.m_sizeB;
          fVar2 = redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_,-1,1,1>_const_>_>,0,0>
                  ::
                  run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
                            ((redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
                              *)&local_348,local_res10,
                             (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_,_1,1,1>_const_>
                              *)local_200);
        }
        *pfVar1 = fVar2 * *param_4 + *pfVar1;
      }
      else {
        local_2d8._0_8_ = local_328._0_8_;
        local_2d8._8_8_ = local_328._8_8_;
        local_2d8._16_8_ = lStack_340;
        local_2c0 = local_310.m_sizeB;
        general_matrix_vector_product<__int64,float,Eigen::internal::const_blas_data_mapper<float,__int64,0>,0,0,float,Eigen::internal::const_blas_data_mapper<float,__int64,1>,0,0>
        ::run(local_310.m_sizeB,local_338,
              (const_blas_data_mapper<float,__int64,0> *)(local_2d8 + 0x10),
              (const_blas_data_mapper<float,__int64,1> *)local_2d8,pfVar1,1,*param_4);
      }
    }
    else {
      local_48 = *(longlong *)&param_1->field_0x8;
      if (local_48 == 1) {
        pfVar1 = *(float **)param_1;
        local_348 = *(float **)param_2;
        local_310.m_sizeB = 1;
        local_310._padding_ = (longlong)local_348;
        if (local_100._128_8_ == 1) {
          local_100._0_8_ = *(undefined8 *)param_3;
          local_100._24_8_ = *(undefined8 *)param_3;
          local_100._32_8_ = *(undefined8 *)&param_3->field_0x8;
          local_100._8_8_ = *(undefined8 *)&param_3->field_0x8;
          local_100._40_8_ = *(undefined8 *)&param_3->field_0x10;
          local_100._72_8_ = *(undefined8 *)&param_3->field_0x30;
          local_100._48_8_ = *(undefined8 *)&param_3->field_0x18;
          local_100._56_8_ = *(undefined8 *)&param_3->field_0x20;
          local_100._88_8_ = *(undefined8 *)&param_3->field_0x40;
          local_100._64_8_ = *(undefined8 *)&param_3->field_0x28;
          local_100._96_8_ = *(undefined8 *)&param_3->field_0x48;
          local_100._112_8_ = 0;
          local_100._120_8_ = 0;
          local_100._104_8_ = *(undefined8 *)&param_3->field_0x50;
          local_280 = 0;
          uStack_278 = 0;
          local_260 = ___xmm_00000000000000010000000000000000;
          uStack_258 = _UNK_150ae1708;
          auStack_1c0._8_8_ = 0;
          auStack_1c0._16_8_ = 1;
          lStack_1a0 = ___xmm_00000000000000010000000000000000;
          auStack_1c0._0_8_ = 0;
          local_198 = _UNK_150ae1708;
          local_348 = pfVar1;
          local_338 = local_78._16_8_;
          pMStack_330 = param_1;
          local_328._16_8_ = local_48;
          local_2b8._0_8_ = local_310._padding_;
          local_2b8._16_8_ = local_310._padding_;
          local_2b8._24_8_ = local_310._padding_;
          local_2b8._40_8_ = local_310._padding_;
          local_2b8._48_8_ = param_2;
          local_200._8_8_ = local_310._padding_;
          local_200._32_8_ = local_310._padding_;
          lStack_1d0 = local_310._padding_;
          local_1c8 = param_2;
          Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>
          ::
          Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>
                    (&local_190,
                     (Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>
                      *)local_100);
          if (local_190._8_8_ == 0) {
            *pfVar1 = *param_4 * 0.0 + *pfVar1;
          }
          else {
            lStack_340 = local_200._8_8_;
            local_338 = *(longlong *)&local_1c8->field_0x8;
            local_328._0_8_ = local_190._0_8_;
            local_328._8_8_ = local_190._72_8_;
            fVar2 = redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_>_>,0,0>
                    ::
                    run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
                              ((redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
                                *)&local_348,local_res10,
                               (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>
                                *)local_200);
            *pfVar1 = fVar2 * *param_4 + *pfVar1;
          }
        }
        else {
          local_2b8._48_8_ = *(undefined8 *)&param_3->field_0x30;
          uStack_278 = *(undefined8 *)&param_3->field_0x40;
          local_270 = *(undefined8 *)&param_3->field_0x48;
          local_268 = *(undefined8 *)&param_3->field_0x50;
          local_2b8._0_8_ = *(undefined8 *)param_3;
          local_2b8._8_8_ = *(undefined8 *)&param_3->field_0x8;
          local_328._16_8_ = 1;
          local_2b8._16_8_ = *(undefined8 *)&param_3->field_0x10;
          local_2b8._24_8_ = *(undefined8 *)&param_3->field_0x18;
          local_2b8._32_8_ = *(undefined8 *)&param_3->field_0x20;
          local_2b8._40_8_ = *(undefined8 *)&param_3->field_0x28;
          local_58 = 0;
          uStack_50 = 0;
          local_328._0_8_ = 0;
          local_328._8_8_ = 0;
          pMStack_330 = param_2;
          local_78._0_8_ = pfVar1;
          local_78._24_8_ = param_1;
          gemv_dense_selector<2,0,1>::
          run<Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_>_>
                    ((Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_>
                      *)local_2b8,
                     (Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>
                      *)&local_348,
                     (Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_> *)local_78
                     ,param_4);
        }
      }
      else {
        fVar2 = *param_4;
        gemm_blocking_space<0,float,float,-1,-1,-1,1,0>::
        gemm_blocking_space<0,float,float,_1,_1,_1,1,0>
                  (&local_310,local_48,local_78._16_8_,local_338,1,true);
        general_matrix_matrix_product<__int64,float,0,0,float,1,0,0,1>::run
                  (*(long64 *)&param_2->field_0x8,*(long64 *)&param_3->field_0x10,
                   *(long64 *)&param_2->field_0x10,*(float **)param_2,*(long64 *)&param_2->field_0x8
                   ,*(float **)param_3,*(long64 *)&param_3->field_0x30,*(float **)param_1,1,
                   *(long64 *)&param_1->field_0x8,fVar2,(level3_blocking<float,float> *)&local_310,
                   (GemmParallelInfo<__int64> *)0x0);
        FMemory_Free((void *)local_310._padding_);
        FMemory_Free((void *)local_310._padding_);
      }
    }
  }
  return;
}

// scaleAndAddTo<Eigen::Matrix<float,-1,-1,0,-1,-1>_> @ 14f06ba50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Eigen::internal::
generic_product_impl<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>,Eigen::DenseShape,Eigen::DenseShape,8>
::scaleAndAddTo<Eigen::Matrix<float,_1,_1,0,_1,_1>_>
          (Matrix<float,_1,_1,0,_1,_1> *param_1,Matrix<float,_1,_1,0,_1,_1> *param_2,
          Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_> *param_3,
          float *param_4)

{
  float *pfVar1;
  float fVar2;
  scalar_sum_op<float,float> local_res10 [8];
  level3_blocking<float,float> local_268;
  longlong local_240;
  longlong local_238;
  undefined1 local_230 [16];
  longlong local_220;
  Matrix<float,_1,_1,0,_1,_1> *pMStack_218;
  longlong local_210;
  undefined8 local_208;
  longlong local_200;
  const_blas_data_mapper<float,__int64,1> local_1f8;
  float *local_1e8;
  longlong local_1e0;
  float *local_1d8;
  longlong lStack_1d0;
  longlong local_1c8;
  Matrix<float,_1,_1,0,_1,_1> *pMStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_1b0;
  Matrix<float,_1,_1,0,_1,_1> *pMStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_180;
  undefined8 uStack_178;
  float *local_150;
  longlong lStack_148;
  longlong local_140;
  Matrix<float,_1,_1,0,_1,_1> *pMStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong local_120;
  undefined1 local_f8 [24];
  longlong local_e0;
  Matrix<float,_1,_1,0,_1,_1> *pMStack_d8;
  undefined8 local_d0;
  longlong lStack_c8;
  Matrix<float,_1,_1,0,_1,_1> *local_c0;
  Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>
  BStack_b8;
  
  local_268.m_kc = *(long64 *)&param_2->field_0x10;
  if (((local_268.m_kc != 0) && (local_220 = *(longlong *)&param_2->field_0x8, local_220 != 0)) &&
     (param_3->_padding_ != 0)) {
    local_268.m_nc = *(long64 *)&param_1->field_0x10;
    local_e0 = local_268.m_kc;
    if (local_268.m_nc == 1) {
      local_210 = param_3->_padding_;
      lStack_1d0 = param_3->_padding_;
      pfVar1 = *(float **)param_1;
      local_208 = *(undefined8 *)&param_3->m_stride;
      local_268.m_blockA = *(float **)param_2;
      local_150 = (float *)local_210;
      lStack_148 = lStack_1d0;
      if (local_220 == 1) {
        BStack_b8._64_8_ = param_3->_padding_;
        local_d0 = 0;
        lStack_c8 = 0;
        BStack_b8._48_8_ = param_3->_padding_;
        BStack_b8._56_8_ = param_3->_padding_;
        BStack_b8._104_8_ = ___xmm_00000000000000000000000000000001;
        BStack_b8._112_8_ = _UNK_150ebf528;
        BStack_b8._88_8_ = 0;
        BStack_b8._96_8_ = 0;
        if (lStack_1d0 == 0) {
          *pfVar1 = *param_4 * 0.0 + *pfVar1;
        }
        else {
          local_268.m_mc = local_268.m_kc;
          local_268.m_nc = (long64)param_2;
          local_238 = local_220;
          local_230._8_8_ = local_268.m_blockA;
          local_1d8 = (float *)local_210;
          local_f8._8_8_ = local_268.m_blockA;
          pMStack_d8 = param_2;
          local_c0 = (Matrix<float,_1,_1,0,_1,_1> *)local_220;
          BStack_b8._0_8_ = local_210;
          BStack_b8._8_8_ = lStack_1d0;
          BStack_b8._24_8_ = local_210;
          BStack_b8._32_8_ = lStack_1d0;
          BStack_b8._72_8_ = local_208;
          BStack_b8._128_8_ = local_220;
          fVar2 = redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_,-1,1,1>_const_>_>,0,0>
                  ::
                  run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
                            ((redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_const_>_>
                              *)local_230,local_res10,
                             (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_,_1,1,1>_const_>
                              *)local_f8);
          *pfVar1 = fVar2 * *param_4 + *pfVar1;
        }
      }
      else {
        local_1f8._0_8_ = local_210;
        local_1f8._8_8_ = local_208;
        local_1e8 = local_268.m_blockA;
        local_1e0 = local_220;
        general_matrix_vector_product<__int64,float,Eigen::internal::const_blas_data_mapper<float,__int64,0>,0,0,float,Eigen::internal::const_blas_data_mapper<float,__int64,1>,0,0>
        ::run(local_220,local_268.m_kc,(const_blas_data_mapper<float,__int64,0> *)&local_1e8,
              &local_1f8,pfVar1,1,*param_4);
      }
    }
    else {
      local_268.m_mc = *(long64 *)&param_1->field_0x8;
      if (local_268.m_mc == 1) {
        pfVar1 = *(float **)param_1;
        local_268.m_blockA = *(float **)param_2;
        local_238 = local_268.m_mc;
        local_200 = local_238;
        if (param_3->_padding_ == 1) {
          local_210 = param_3->_padding_;
          local_208 = *(undefined8 *)&param_3->m_stride;
          lStack_148 = param_3->_padding_;
          BStack_b8._128_8_ = 1;
          local_1a0 = 0;
          uStack_198 = 0;
          BStack_b8._0_8_ = 0;
          BStack_b8._8_8_ = 0;
          local_180 = ___xmm_00000000000000010000000000000000;
          uStack_178 = _UNK_150ae1708;
          BStack_b8._40_8_ = _UNK_150ae1708;
          BStack_b8._72_8_ = param_3->_padding_;
          BStack_b8._80_8_ = param_3->_padding_;
          BStack_b8._32_8_ = ___xmm_00000000000000010000000000000000;
          BStack_b8._88_8_ = param_3->_padding_;
          BStack_b8._112_8_ = 0;
          BStack_b8._120_8_ = 0;
          if (lStack_148 == 0) {
            fVar2 = 0.0;
          }
          else {
            local_268.m_mc = local_268.m_kc;
            local_268.m_nc = (long64)param_2;
            local_230._0_8_ = pfVar1;
            local_230._8_8_ = local_268.m_blockA;
            pMStack_218 = param_1;
            local_1d8 = local_268.m_blockA;
            local_1c8 = local_268.m_kc;
            pMStack_1c0 = (Matrix<float,_1,_1,0,_1,_1> *)local_268.m_blockA;
            lStack_1b0 = local_268.m_kc;
            pMStack_1a8 = param_2;
            local_150 = (float *)local_210;
            local_f8._8_8_ = local_268.m_blockA;
            pMStack_d8 = (Matrix<float,_1,_1,0,_1,_1> *)local_268.m_blockA;
            lStack_c8 = local_268.m_kc;
            local_c0 = param_2;
            BStack_b8._16_8_ = local_238;
            BStack_b8._48_8_ = local_210;
            BStack_b8._56_8_ = lStack_148;
            BStack_b8._96_8_ = local_208;
            fVar2 = redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_>_>,0,0>
                    ::
                    run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
                              ((redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
                                *)local_230,local_res10,
                               (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>
                                *)local_f8);
          }
          *pfVar1 = fVar2 * *param_4 + *pfVar1;
        }
        else {
          pMStack_218 = *(Matrix<float,_1,_1,0,_1,_1> **)&param_3->m_stride;
          local_230._0_8_ = param_3->_padding_;
          local_230._8_8_ = param_3->_padding_;
          local_220 = param_3->_padding_;
          uStack_1b8 = 0;
          lStack_1b0 = 0;
          local_130 = 0;
          uStack_128 = 0;
          local_268.m_mc = local_268.m_kc;
          local_1c8 = local_268.m_nc;
          local_268.m_nc = (long64)param_2;
          local_1d8 = pfVar1;
          pMStack_1c0 = param_1;
          pMStack_1a8 = (Matrix<float,_1,_1,0,_1,_1> *)local_238;
          local_150 = local_268.m_blockA;
          local_140 = local_268.m_kc;
          pMStack_138 = param_2;
          local_120 = local_238;
          gemv_dense_selector<2,0,1>::
          run<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_>_>
                    ((Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_>
                      *)local_230,
                     (Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>
                      *)&local_150,
                     (Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,1,_1,0>_> *)
                     &local_1d8,param_4);
        }
      }
      else {
        fVar2 = *param_4;
        local_268.m_blockA = (float *)0x0;
        local_268.m_blockB = (float *)0x0;
        evaluateProductBlockingSizesHeuristic<float,float,1,__int64>
                  (&local_268.m_kc,&local_268.m_mc,&local_268.m_nc,1);
        local_240 = local_268.m_kc * local_268.m_mc;
        local_238 = local_268.m_kc * local_268.m_nc;
        general_matrix_matrix_product<__int64,float,0,0,float,1,0,0,1>::run
                  (*(long64 *)&param_2->field_0x8,param_3->_padding_,*(long64 *)&param_2->field_0x10
                   ,*(float **)param_2,*(long64 *)&param_2->field_0x8,(float *)param_3->_padding_,
                   *(long64 *)&param_3->m_stride,*(float **)param_1,1,*(long64 *)&param_1->field_0x8
                   ,fVar2,&local_268,(GemmParallelInfo<__int64> *)0x0);
        FMemory_Free(local_268.m_blockA);
        FMemory_Free(local_268.m_blockB);
      }
    }
  }
  return;
}

// Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0> @ 14f06bf20

Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>
* __thiscall
Eigen::
Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>
::
Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>
          (Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>
           *this,Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>
                 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = uVar1;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  uVar1 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&this->field_0x18 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&this->field_0x20 = uVar1;
  *(undefined8 *)&this->field_0x28 = *(undefined8 *)&param_1->field_0x28;
  uVar1 = *(undefined8 *)&param_1->field_0x38;
  *(undefined8 *)&this->field_0x30 = *(undefined8 *)&param_1->field_0x30;
  *(undefined8 *)&this->field_0x38 = uVar1;
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&this->field_0x48 = *(undefined8 *)&param_1->field_0x48;
  *(undefined8 *)&this->field_0x58 = *(undefined8 *)&param_1->field_0x58;
  *(undefined8 *)&this->field_0x60 = *(undefined8 *)&param_1->field_0x60;
  *(undefined8 *)&this->field_0x68 = *(undefined8 *)&param_1->field_0x68;
  *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_1->field_0x70;
  *(undefined8 *)&this->field_0x78 = *(undefined8 *)&param_1->field_0x78;
  *(undefined8 *)&this->field_0x80 = *(undefined8 *)&param_1->field_0x80;
  return this;
}

// HoaRotator @ 14f06bfa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HoaRotator * __thiscall vraudio::HoaRotator::HoaRotator(HoaRotator *this,int param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  Matrix<float,_1,_1,0,_1,_1> *pMVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  assign_op<float,float> local_res10 [8];
  undefined4 *local_58;
  longlong local_50;
  longlong lStack_48;
  
  this->ambisonic_order_ = param_1;
  WorldRotation::WorldRotation(&this->current_rotation_);
  iVar3 = this->ambisonic_order_ + 1;
  (this->rotation_matrices_)._Mypair._Myval2._Myfirst = (Matrix<float,_1,_1,0,_1,_1> *)0x0;
  uVar12 = (ulonglong)iVar3;
  (this->rotation_matrices_)._Mypair._Myval2._Mylast = (Matrix<float,_1,_1,0,_1,_1> *)0x0;
  (this->rotation_matrices_)._Mypair._Myval2._Myend = (Matrix<float,_1,_1,0,_1,_1> *)0x0;
  if (iVar3 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<Eigen::Matrix<float,-1,-1,0,-1,-1>,std::allocator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>_>
      ::_Xlength();
    }
    uVar14 = uVar12 * 0x18;
    if (uVar14 == 0) {
      pMVar5 = (Matrix<float,_1,_1,0,_1,_1> *)0x0;
    }
    else if (uVar14 < 0x1000) {
      pMVar5 = ::operator_new(uVar14);
    }
    else {
      if (uVar14 + 0x27 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_bad_array_new_length();
      }
      pvVar4 = ::operator_new(uVar14 + 0x27);
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      pMVar5 = (Matrix<float,_1,_1,0,_1,_1> *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
      *(void **)&pMVar5[-1].field_0x10 = pvVar4;
    }
    (this->rotation_matrices_)._Mypair._Myval2._Myfirst = pMVar5;
    (this->rotation_matrices_)._Mypair._Myval2._Myend = pMVar5 + uVar12;
    pMVar5 = (this->rotation_matrices_)._Mypair._Myval2._Myfirst;
    do {
      *(undefined8 *)pMVar5 = 0;
      *(undefined8 *)&pMVar5->field_0x8 = 0;
      *(undefined8 *)&pMVar5->field_0x10 = 0;
      pMVar5 = pMVar5 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    (this->rotation_matrices_)._Mypair._Myval2._Mylast = pMVar5;
  }
  *(undefined8 *)&this->rotation_matrix_ = 0;
  *(undefined8 *)&(this->rotation_matrix_).field_0x8 = 0;
  lVar10 = (longlong)((param_1 + 1) * (param_1 + 1));
  *(undefined8 *)&(this->rotation_matrix_).field_0x10 = 0;
  Eigen::PlainObjectBase<Eigen::Matrix<float,-1,-1,0,-1,-1>_>::resize
            ((PlainObjectBase<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)&this->rotation_matrix_,lVar10,
             lVar10);
  FMemory_Free((void *)0x0);
  puVar6 = FMemory_Malloc(4,0x10);
  if (puVar6 == (undefined4 *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  pMVar5 = (this->rotation_matrices_)._Mypair._Myval2._Myfirst;
  local_50 = ___xmm_00000000000000010000000000000001;
  lStack_48 = _UNK_15071d228;
  *puVar6 = 0x3f800000;
  local_58 = puVar6;
  Eigen::internal::
  call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::internal::assign_op<float,float>_>
            (pMVar5,(Matrix<float,_1,_1,0,_1,_1> *)&local_58,local_res10);
  uVar2 = __real_3f800000;
  iVar3 = 1;
  lVar10 = lStack_48;
  lVar11 = local_50;
  if (0 < this->ambisonic_order_) {
    do {
      if (iVar3 == 0) {
        lVar13 = 1;
LAB_14f06c179:
        auVar1._8_8_ = 0;
        auVar1._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8);
        if (SUB168((auVar1 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar13),0) < lVar13) {
          ::operator_new(0xffffffffffffffff);
        }
      }
      else {
        lVar13 = (longlong)(iVar3 + -1) + 1;
        lVar13 = ((longlong)iVar3 + 1) * ((longlong)iVar3 + 1) - lVar13 * lVar13;
        if (lVar13 != 0) goto LAB_14f06c179;
      }
      uVar12 = lVar13 * lVar13;
      puVar8 = local_58;
      if (uVar12 - lVar10 * lVar11 != 0) {
        FMemory_Free(puVar6);
        if ((longlong)uVar12 < 1) {
          puVar6 = (undefined4 *)0x0;
          local_58 = (undefined4 *)0x0;
          puVar8 = local_58;
        }
        else {
          if (0x3fffffffffffffff < uVar12) {
            ::operator_new(0xffffffffffffffff);
          }
          puVar6 = FMemory_Malloc(uVar12 * 4,0x10);
          puVar8 = puVar6;
          if ((puVar6 == (undefined4 *)0x0) && (uVar12 * 4 != 0)) {
            ::operator_new(0xffffffffffffffff);
          }
        }
      }
      local_58 = puVar8;
      lVar7 = 0;
      lVar10 = lVar7;
      puVar8 = puVar6;
      puVar9 = puVar6;
      lVar11 = lVar7;
      if (0 < lVar13) {
        do {
          do {
            uVar15 = uVar2;
            if (lVar10 != lVar11) {
              uVar15 = 0;
            }
            *puVar8 = uVar15;
            lVar10 = lVar10 + 1;
            puVar8 = puVar8 + 1;
          } while (lVar10 < lVar13);
          lVar11 = lVar11 + 1;
          lVar10 = lVar7;
          puVar8 = puVar9 + lVar13;
          puVar9 = puVar9 + lVar13;
        } while (lVar11 < lVar13);
      }
      local_50 = lVar13;
      lStack_48 = lVar13;
      Eigen::internal::
      call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::internal::assign_op<float,float>_>
                ((this->rotation_matrices_)._Mypair._Myval2._Myfirst + iVar3,
                 (Matrix<float,_1,_1,0,_1,_1> *)&local_58,local_res10);
      iVar3 = iVar3 + 1;
      lVar10 = lVar13;
      lVar11 = lVar13;
    } while (iVar3 <= this->ambisonic_order_);
  }
  puVar8 = *(undefined4 **)&this->rotation_matrix_;
  lVar10 = *(longlong *)&(this->rotation_matrix_).field_0x8;
  lVar11 = lVar10;
  lVar13 = 0;
  if (0 < *(longlong *)&(this->rotation_matrix_).field_0x10) {
    do {
      lVar7 = 0;
      puVar9 = puVar8;
      if (0 < lVar11) {
        do {
          uVar15 = uVar2;
          if (lVar7 != lVar13) {
            uVar15 = 0;
          }
          *puVar9 = uVar15;
          lVar7 = lVar7 + 1;
          lVar11 = *(longlong *)&(this->rotation_matrix_).field_0x8;
          puVar9 = puVar9 + 1;
        } while (lVar7 < lVar11);
      }
      lVar13 = lVar13 + 1;
      puVar8 = puVar8 + lVar10;
    } while (lVar13 < *(longlong *)&(this->rotation_matrix_).field_0x10);
  }
  FMemory_Free(puVar6);
  return this;
}

// ComputeBandRotation @ 14f06c340

void __cdecl
vraudio::`anonymous_namespace'::ComputeBandRotation
          (int param_1,
          vector<Eigen::Matrix<float,_1,_1,0,_1,_1>,std::allocator<Eigen::Matrix<float,_1,_1,0,_1,_1>_>_>
          *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint local_res8 [2];
  ulonglong local_res10;
  PlainObjectBase<Eigen::Matrix<float,_1,_1,0,_1,_1>_> local_f8 [8];
  
  local_f8[0].m_storage.m_cols = 0;
  local_f8[0].m_storage.m_data = (float *)0x0;
  local_f8[0].m_storage.m_rows = 0;
  lVar7 = (longlong)(param_1 * 2 + 1);
  Eigen::PlainObjectBase<Eigen::Matrix<float,-1,-1,0,-1,-1>_>::resize(local_f8,lVar7,lVar7);
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar1 = __real_3f800000;
  uVar3 = -param_1;
  uVar8 = (ulonglong)(int)uVar3;
  uVar11 = uVar3;
  uVar9 = uVar8;
  lVar7 = local_f8[0].m_storage.m_rows;
  while (local_res8[0] = uVar11, local_f8[0].m_storage.m_rows = lVar7, (int)uVar3 <= param_1) {
    iVar13 = param_1 * 2;
    uVar3 = (uint)uVar9;
    uVar6 = -uVar3;
    if ((int)-uVar3 < 0) {
      uVar6 = uVar3;
    }
    iVar10 = 0;
    pfVar12 = local_f8[0].m_storage.m_data + (longlong)param_1 + uVar8;
    local_res10 = uVar8;
    do {
      fVar18 = fVar1;
      if (uVar3 != 0) {
        fVar18 = 0.0;
      }
      uVar4 = -uVar11;
      if ((int)-uVar11 < 0) {
        uVar4 = uVar11;
      }
      if (uVar4 == param_1) {
        iVar5 = (param_1 * 4 + -2) * param_1;
      }
      else {
        iVar5 = iVar13 * iVar10;
      }
      fVar16 = fVar1 / (float)iVar5;
      fVar17 = SQRT(fVar16 * (float)(int)((param_1 - uVar3) * (uVar3 + param_1)));
      fVar19 = SQRT((fVar18 + fVar1) * (float)(int)(uVar6 + param_1 + -1) *
                    fVar16 * (float)(int)(uVar6 + param_1)) * (__real_3f000000 - fVar18);
      fVar18 = SQRT((float)(int)((param_1 - uVar6) + -1) * (float)(int)(param_1 - uVar6) * fVar16) *
               (fVar1 - fVar18) * __real_bf000000;
      if (0.0 < fVar17) {
        fVar16 = P(0,uVar3,uVar11,param_1,param_2);
        fVar17 = fVar16 * fVar17;
      }
      if (0.0 < (float)((uint)fVar19 & uVar2)) {
        if (uVar3 == 0) {
          fVar14 = P(1,1,uVar11,param_1,param_2);
          fVar16 = P(-1,-1,uVar11,param_1,param_2);
          fVar14 = fVar14 + fVar16;
        }
        else if ((int)uVar3 < 1) {
          fVar16 = fVar1;
          if (uVar3 != 0xffffffff) {
            fVar16 = 0.0;
          }
          fVar14 = P(1,uVar3 + 1,uVar11,param_1,param_2);
          fVar14 = fVar14 * (fVar1 - fVar16);
          fVar15 = P(-1,~uVar3,uVar11,param_1,param_2);
          fVar14 = fVar15 * SQRT(fVar16 + fVar1) + fVar14;
        }
        else {
          fVar16 = fVar1;
          if (uVar3 != 1) {
            fVar16 = 0.0;
          }
          fVar14 = P(1,uVar3 - 1,uVar11,param_1,param_2);
          fVar14 = fVar14 * SQRT(fVar16 + fVar1);
          fVar15 = P(-1,1 - uVar3,uVar11,param_1,param_2);
          fVar14 = fVar14 - fVar15 * (fVar1 - fVar16);
        }
        fVar19 = fVar19 * fVar14;
      }
      if (0.0 < (float)((uint)fVar18 & uVar2)) {
        if (uVar3 == 0) {
          fVar16 = 0.0;
        }
        else if ((int)uVar3 < 1) {
          fVar16 = P(1,uVar3 - 1,uVar11,param_1,param_2);
          fVar14 = P(-1,1 - uVar3,uVar11,param_1,param_2);
          fVar16 = fVar16 - fVar14;
        }
        else {
          fVar14 = P(1,uVar3 + 1,uVar11,param_1,param_2);
          fVar16 = P(-1,~uVar3,uVar11,param_1,param_2);
          fVar16 = fVar16 + fVar14;
        }
        fVar18 = fVar18 * fVar16;
      }
      uVar11 = uVar11 + 1;
      iVar13 = iVar13 + -1;
      iVar10 = iVar10 + 1;
      *pfVar12 = fVar17 + fVar19 + fVar18;
      pfVar12 = pfVar12 + lVar7;
    } while ((int)uVar11 <= param_1);
    uVar3 = uVar3 + 1;
    uVar9 = (ulonglong)uVar3;
    uVar8 = local_res10 + 1;
    uVar11 = local_res8[0];
    local_res10 = uVar8;
    lVar7 = local_f8[0].m_storage.m_rows;
  }
  Eigen::internal::
  call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::internal::assign_op<float,float>_>
            ((param_2->_Mypair)._Myval2._Myfirst + param_1,(Matrix<float,_1,_1,0,_1,_1> *)local_f8,
             (assign_op<float,float> *)local_res8);
  FMemory_Free(local_f8[0].m_storage.m_data);
  return;
}

// P @ 14f06c810

float __cdecl
vraudio::`anonymous_namespace'::P
          (int param_1,int param_2,int param_3,int param_4,
          vector<Eigen::Matrix<float,_1,_1,0,_1,_1>,std::allocator<Eigen::Matrix<float,_1,_1,0,_1,_1>_>_>
          *param_5)

{
  Matrix<float,_1,_1,0,_1,_1> *pMVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  pMVar1 = (param_5->_Mypair)._Myval2._Myfirst;
  if (param_3 == param_4) {
    iVar2 = (*(int *)&pMVar1[1].field_0x8 + -1) / 2;
    iVar3 = (*(int *)&pMVar1[(longlong)param_4 + -1].field_0x8 + -1) / 2;
    fVar4 = *(float *)(*(longlong *)(pMVar1 + (longlong)param_4 + -1) +
                      (((longlong)(iVar3 + param_4) + -1) *
                       *(longlong *)&pMVar1[(longlong)param_4 + -1].field_0x8 +
                      (longlong)(iVar3 + param_2)) * 4) *
            *(float *)(*(longlong *)(pMVar1 + 1) +
                      (((longlong)iVar2 + 1) * *(longlong *)&pMVar1[1].field_0x8 +
                      (longlong)(iVar2 + param_1)) * 4) -
            *(float *)(*(longlong *)(pMVar1 + (longlong)param_4 + -1) +
                      (((longlong)(iVar3 - param_4) + 1) *
                       *(longlong *)&pMVar1[(longlong)param_4 + -1].field_0x8 +
                      (longlong)(iVar3 + param_2)) * 4) *
            *(float *)(*(longlong *)(pMVar1 + 1) +
                      (((longlong)iVar2 + -1) * *(longlong *)&pMVar1[1].field_0x8 +
                      (longlong)(iVar2 + param_1)) * 4);
  }
  else if (param_3 == -param_4) {
    iVar2 = (*(int *)&pMVar1[1].field_0x8 + -1) / 2;
    iVar3 = (*(int *)&pMVar1[(longlong)param_4 + -1].field_0x8 + -1) / 2;
    fVar4 = *(float *)(*(longlong *)(pMVar1 + (longlong)param_4 + -1) +
                      (((longlong)(iVar3 + param_4) + -1) *
                       *(longlong *)&pMVar1[(longlong)param_4 + -1].field_0x8 +
                      (longlong)(iVar3 + param_2)) * 4) *
            *(float *)(*(longlong *)(pMVar1 + 1) +
                      (((longlong)iVar2 + -1) * *(longlong *)&pMVar1[1].field_0x8 +
                      (longlong)(iVar2 + param_1)) * 4) +
            *(float *)(*(longlong *)(pMVar1 + (longlong)param_4 + -1) +
                      (((longlong)(iVar3 - param_4) + 1) *
                       *(longlong *)&pMVar1[(longlong)param_4 + -1].field_0x8 +
                      (longlong)(iVar3 + param_2)) * 4) *
            *(float *)(*(longlong *)(pMVar1 + 1) +
                      (((longlong)iVar2 + 1) * *(longlong *)&pMVar1[1].field_0x8 +
                      (longlong)(iVar2 + param_1)) * 4);
  }
  else {
    iVar2 = (*(int *)&pMVar1[1].field_0x8 + -1) / 2;
    iVar3 = (*(int *)&pMVar1[(longlong)param_4 + -1].field_0x8 + -1) / 2;
    fVar4 = *(float *)(*(longlong *)(pMVar1 + (longlong)param_4 + -1) +
                      ((longlong)(iVar3 + param_3) *
                       *(longlong *)&pMVar1[(longlong)param_4 + -1].field_0x8 +
                      (longlong)(iVar3 + param_2)) * 4) *
            *(float *)(*(longlong *)(pMVar1 + 1) +
                      ((longlong)(iVar2 + param_1) +
                      (longlong)iVar2 * *(longlong *)&pMVar1[1].field_0x8) * 4);
  }
  return fVar4;
}

// Process @ 14f06c9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
vraudio::HoaRotator::Process
          (HoaRotator *this,WorldRotation *param_1,AudioBuffer *param_2,AudioBuffer *param_3)

{
  ChannelView *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  uint uVar11;
  bool bVar12;
  ulong64 uVar13;
  longlong lVar14;
  float *pfVar15;
  Matrix<float,_1,_1,0,_1,_1> *pMVar16;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong uVar22;
  float *pfVar23;
  undefined1 auVar24 [8];
  ulonglong uVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_258 [32];
  assign_op<float,float> local_238 [8];
  HoaRotator *local_230;
  float *local_228;
  longlong local_220;
  WorldRotation *local_218;
  Matrix<float,_1,_1,0,_1,_1> *local_210;
  AudioBuffer *local_208;
  AudioBuffer *local_200;
  undefined1 local_1f8 [8];
  undefined8 uStack_1f0;
  longlong lStack_1e8;
  longlong local_1e0;
  longlong local_1d8;
  float *local_1a0;
  longlong lStack_198;
  longlong local_190;
  undefined1 local_178 [40];
  longlong lStack_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_130;
  ulonglong local_128;
  longlong local_120;
  float *local_118;
  longlong lStack_110;
  undefined8 local_108;
  WorldRotation local_f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_230 = this;
  local_218 = param_1;
  local_208 = param_3;
  local_200 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    WorldRotation::WorldRotation(&kIdentityRotation);
    _Init_thread_footer(&::_TSS0);
  }
  fVar27 = WorldRotation::AngularDifferenceRad(&this->current_rotation_,&kIdentityRotation);
  fVar10 = __real_3c8efa35;
  if ((__real_3c8efa35 <= fVar27) ||
     (fVar27 = WorldRotation::AngularDifferenceRad(param_1,&kIdentityRotation), fVar10 <= fVar27)) {
    uVar13 = FindNextAlignedArrayIndex(param_2->num_frames_,4,0x40);
    lVar17 = (longlong)(int)param_2->num_frames_;
    lVar26 = (longlong)(int)uVar13;
    pCVar1 = (param_2->channel_views_)._Mypair._Myval2._Myfirst;
    local_228 = pCVar1->begin_itr_;
    lVar20 = (longlong)
             (int)(((longlong)(param_2->channel_views_)._Mypair._Myval2._Mylast - (longlong)pCVar1)
                  / 0x18);
    pfVar19 = ((param_3->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_;
    local_220 = lVar26;
    local_1a0 = local_228;
    lStack_198 = lVar20;
    local_190 = lVar17;
    fVar27 = WorldRotation::AngularDifferenceRad(&this->current_rotation_,param_1);
    if (fVar10 <= fVar27) {
      WorldRotation::WorldRotation(&local_f8);
      uVar11 = __xmm_80000000800000008000000080000000;
      fVar10 = __real_3f800000;
      uVar22 = param_2->num_frames_;
      if (uVar22 != 0) {
        local_228 = (float *)((longlong)local_228 - (longlong)pfVar19);
        local_210 = &local_230->rotation_matrix_;
        uVar25 = 0;
        do {
          pfVar23 = local_228;
          uVar18 = uVar22 - uVar25;
          if (0x20 < uVar18) {
            uVar18 = 0x20;
          }
          fVar27 = *(float *)&local_230->current_rotation_;
          fVar2 = *(float *)&(local_230->current_rotation_).field_0x4;
          fVar3 = *(float *)&(local_230->current_rotation_).field_0x8;
          fVar4 = *(float *)&(local_230->current_rotation_).field_0xc;
          fVar30 = (float)(uVar18 + uVar25) / (float)uVar22;
          fVar5 = *(float *)local_218;
          fVar6 = *(float *)&local_218->field_0x4;
          fVar7 = *(float *)&local_218->field_0x8;
          fVar8 = *(float *)&local_218->field_0xc;
          fVar32 = fVar10 - fVar30;
          fVar31 = fVar3 * fVar7 + fVar27 * fVar5 + fVar4 * fVar8 + fVar2 * fVar6;
          fVar28 = (float)((uint)fVar31 & __xmm_7fffffff7fffffff7fffffff7fffffff);
          if (fVar28 < __real_3f7ffffe) {
            fVar28 = acosf(fVar28);
            fVar29 = sinf(fVar28);
            fVar29 = fVar10 / fVar29;
            fVar32 = sinf(fVar32 * fVar28);
            fVar32 = fVar32 * fVar29;
            fVar30 = sinf(fVar28 * fVar30);
            fVar30 = fVar30 * fVar29;
          }
          if (fVar31 < 0.0) {
            fVar30 = (float)((uint)fVar30 ^ uVar11);
          }
          local_1f8._4_4_ = fVar32 * fVar2 + fVar30 * fVar6;
          local_1f8._0_4_ = fVar32 * fVar27 + fVar30 * fVar5;
          uStack_1f0 = (float *)CONCAT44(fVar32 * fVar4 + fVar30 * fVar8,
                                         fVar32 * fVar3 + fVar30 * fVar7);
          UpdateRotationMatrix(local_230,(WorldRotation *)local_1f8);
          local_178._8_8_ = (longlong)pfVar23 + (longlong)pfVar19;
          local_178._16_8_ =
               ((longlong)(param_2->channel_views_)._Mypair._Myval2._Mylast -
               (longlong)(param_2->channel_views_)._Mypair._Myval2._Myfirst) / 0x18;
          local_178._0_8_ = local_210;
          local_130 = 0;
          lVar17 = (longlong)(local_208->channel_views_)._Mypair._Myval2._Mylast -
                   (longlong)(local_208->channel_views_)._Mypair._Myval2._Myfirst;
          lVar17 = lVar17 / 6 + (lVar17 >> 0x3f);
          local_178._32_8_ = local_1a0;
          lStack_150 = lStack_198;
          local_148 = local_190;
          lVar17 = (lVar17 >> 2) - (lVar17 >> 0x3f);
          lStack_1e8 = 0;
          local_1f8 = (undefined1  [8])0x0;
          uStack_1f0 = (float *)0x0;
          local_178._24_8_ = uVar18;
          local_140 = lVar26;
          local_128 = uVar25;
          local_120 = lVar26;
          Eigen::internal::
          call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>,0>,Eigen::internal::assign_op<float,float>_>
                    ((Matrix<float,_1,_1,0,_1,_1> *)local_1f8,
                     (Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>,0>
                      *)local_178,local_238);
          auVar24 = local_1f8;
          pfVar23 = pfVar19;
          if (0 < lVar17) {
            do {
              pfVar15 = pfVar23;
              pMVar16 = (Matrix<float,_1,_1,0,_1,_1> *)auVar24;
              uVar22 = 0;
              if (0 < (longlong)uVar18) {
                do {
                  *pfVar15 = *(float *)pMVar16;
                  uVar22 = uVar22 + 1;
                  pfVar15 = pfVar15 + 1;
                  pMVar16 = (Matrix<float,_1,_1,0,_1,_1> *)
                            ((longlong)&pMVar16->field_0x0 + uStack_1f0 * 4);
                } while ((longlong)uVar22 < (longlong)uVar18);
              }
              lVar17 = lVar17 + -1;
              auVar24 = (undefined1  [8])&((Matrix<float,_1,_1,0,_1,_1> *)auVar24)->field_0x4;
              pfVar23 = pfVar23 + local_220;
              param_2 = local_200;
            } while (lVar17 != 0);
          }
          FMemory_Free((void *)local_1f8);
          uVar22 = param_2->num_frames_;
          uVar25 = uVar25 + 0x20;
          pfVar19 = pfVar19 + 0x20;
          lVar26 = local_220;
        } while (uVar25 < uVar22);
      }
      uVar9 = *(undefined8 *)&local_218->field_0x8;
      *(undefined8 *)&local_230->current_rotation_ = *(undefined8 *)local_218;
      *(undefined8 *)&(local_230->current_rotation_).field_0x8 = uVar9;
    }
    else {
      uStack_1f0 = local_1a0;
      lStack_1e8 = lStack_198;
      local_1f8 = (undefined1  [8])&local_230->rotation_matrix_;
      local_1e0 = local_190;
      local_118 = (float *)0x0;
      lStack_110 = 0;
      local_108 = 0;
      local_1d8 = lVar26;
      Eigen::internal::
      call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>,0>,Eigen::internal::assign_op<float,float>_>
                ((Matrix<float,_1,_1,0,_1,_1> *)&local_118,
                 (Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>,0>
                  *)local_1f8,local_238);
      pfVar23 = local_118;
      if (0 < lVar20) {
        do {
          lVar14 = 0;
          pfVar15 = pfVar19;
          pfVar21 = pfVar23;
          if (0 < lVar17) {
            do {
              *pfVar15 = *pfVar21;
              lVar14 = lVar14 + 1;
              pfVar15 = pfVar15 + 1;
              pfVar21 = pfVar21 + lStack_110;
            } while (lVar14 < lVar17);
          }
          pfVar19 = pfVar19 + lVar26;
          lVar20 = lVar20 + -1;
          pfVar23 = pfVar23 + 1;
        } while (lVar20 != 0);
      }
      FMemory_Free(local_118);
    }
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  return bVar12;
}

// UpdateRotationMatrix @ 14f06cfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall vraudio::HoaRotator::UpdateRotationMatrix(HoaRotator *this,WorldRotation *param_1)

{
  Matrix<float,_1,_1,0,_1,_1> *pMVar1;
  Matrix<float,_1,_1,0,_1,_1> *pMVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_168 [32];
  assign_op<float,float> local_148 [8];
  evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> local_140;
  evaluator<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,_1,_1,0>_> local_130;
  undefined1 local_118 [32];
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_168;
  WorldRotation::WorldRotation((WorldRotation *)&local_b8);
  local_b4 = *(float *)&param_1->field_0x4;
  local_ac = *(float *)&param_1->field_0xc;
  local_b8 = (float)(*(uint *)param_1 ^ __xmm_80000000800000008000000080000000);
  fVar7 = local_b4 + local_b4;
  local_b0 = (float)(*(uint *)&param_1->field_0x8 ^ __xmm_80000000800000008000000080000000);
  fVar5 = local_b0 + local_b0;
  fVar6 = (local_b8 + local_b8) * local_ac;
  fVar8 = (local_b8 + local_b8) * local_b8;
  local_e0._4_4_ = fVar7 * local_b8 + fVar5 * local_ac;
  local_e0._0_4_ = __real_3f800000 - (fVar5 * local_b0 + fVar7 * local_b4);
  local_c0 = __real_3f800000 - (fVar7 * local_b4 + fVar8);
  local_c8 = (Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,_1,_1,0> *)
             CONCAT44(fVar5 * local_b4 - fVar6,fVar5 * local_b8 + fVar7 * local_ac);
  local_d8 = (evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)
             CONCAT44(fVar7 * local_b8 - fVar5 * local_ac,fVar5 * local_b8 - fVar7 * local_ac);
  local_d0 = (assign_op<float,float> *)
             CONCAT44(fVar5 * local_b4 + fVar6,__real_3f800000 - (fVar5 * local_b0 + fVar8));
  Eigen::internal::
  call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Matrix<float,3,3,0,3,3>,Eigen::internal::assign_op<float,float>_>
            ((this->rotation_matrices_)._Mypair._Myval2._Myfirst + 1,
             (Matrix<float,3,3,0,3,3> *)local_e0,local_148);
  local_130._16_8_ = *(undefined8 *)&(this->rotation_matrix_).field_0x8;
  pMVar1 = &this->rotation_matrix_;
  pMVar2 = (this->rotation_matrices_)._Mypair._Myval2._Myfirst;
  local_118._8_8_ = ___xmm_00000000000000030000000000000003;
  local_118._16_8_ = _UNK_15071d258;
  local_130._0_8_ = *(longlong *)pMVar1 + 4 + local_130._16_8_ * 4;
  local_f8 = ___xmm_00000000000000010000000000000001;
  lStack_f0 = _UNK_15071d228;
  local_140._0_8_ = *(undefined8 *)(pMVar2 + 1);
  local_140._8_8_ = *(undefined8 *)&pMVar2[1].field_0x8;
  local_e0 = (undefined1  [8])&local_130;
  local_d8 = &local_140;
  local_d0 = local_148;
  local_c8 = (Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,_1,_1,0> *)local_118;
  local_118._0_8_ = local_130._0_8_;
  local_118._24_8_ = pMVar1;
  local_e8 = local_130._16_8_;
  Eigen::internal::
  dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>,-1,-1,0>_>,Eigen::internal::evaluator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>,Eigen::internal::assign_op<float,float>,0>,4,0>
  ::run((generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,_1,_1,0>_>,Eigen::internal::evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_>,Eigen::internal::assign_op<float,float>,0>
         *)local_e0);
  iVar3 = 2;
  if (1 < this->ambisonic_order_) {
    do {
      vraudio::`anonymous_namespace'::ComputeBandRotation(iVar3,&this->rotation_matrices_);
      if (iVar3 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = (iVar3 + 1) * (iVar3 + 1) - iVar3 * iVar3;
      }
      local_130._16_8_ = *(undefined8 *)&(this->rotation_matrix_).field_0x8;
      local_f8 = (longlong)(iVar3 * iVar3);
      local_130._0_8_ = *(longlong *)pMVar1 + (local_130._16_8_ + 1) * local_f8 * 4;
      pMVar2 = (this->rotation_matrices_)._Mypair._Myval2._Myfirst;
      local_118._8_8_ = SEXT48(iVar4);
      local_140._0_8_ = *(undefined8 *)(pMVar2 + iVar3);
      local_140._8_8_ = *(undefined8 *)&pMVar2[iVar3].field_0x8;
      local_e0 = (undefined1  [8])&local_130;
      local_d8 = &local_140;
      local_d0 = local_148;
      local_c8 = (Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,_1,_1,0> *)local_118;
      local_118._0_8_ = local_130._0_8_;
      local_118._16_8_ = local_118._8_8_;
      local_118._24_8_ = pMVar1;
      lStack_f0 = local_f8;
      local_e8 = local_130._16_8_;
      Eigen::internal::
      dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>,-1,-1,0>_>,Eigen::internal::evaluator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>,Eigen::internal::assign_op<float,float>,0>,4,0>
      ::run((generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,_1,_1,0>_>,Eigen::internal::evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_>,Eigen::internal::assign_op<float,float>,0>
             *)local_e0);
      iVar3 = iVar3 + 1;
    } while (iVar3 <= this->ambisonic_order_);
  }
  return;
}

// _Xlength @ 14f06d320

void __cdecl
std::vector<Eigen::Matrix<float,-1,-1,0,-1,-1>,std::allocator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// run @ 14f06d340

void __cdecl
Eigen::internal::
dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>,-1,-1,0>_>,Eigen::internal::evaluator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>,Eigen::internal::assign_op<float,float>,0>,4,0>
::run(generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,_1,_1,0>_>,Eigen::internal::evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_>,Eigen::internal::assign_op<float,float>,0>
      *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,_1,_1,0> *pBVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *peVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  evaluator<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>,_1,_1,0>_> *peVar18;
  
  pBVar3 = param_1->m_dstExpr;
  if ((*(ulonglong *)pBVar3 & 3) == 0) {
    uVar4 = *(ulonglong *)&pBVar3->field_0x8;
    uVar8 = (ulonglong)(-(int)(*(ulonglong *)pBVar3 >> 2) & 3);
    uVar5 = *(undefined8 *)(*(longlong *)&pBVar3->field_0x18 + 8);
    uVar9 = (uint)((longlong)uVar5 >> 0x3f) & 3;
    lVar17 = *(longlong *)&pBVar3->field_0x10;
    uVar7 = uVar4;
    if ((longlong)uVar8 < (longlong)uVar4) {
      uVar7 = uVar8;
    }
    lVar11 = 0;
    if (0 < lVar17) {
      do {
        lVar16 = 0;
        lVar14 = (uVar4 - uVar7 & 0xfffffffffffffffc) + uVar7;
        uVar8 = uVar7;
        if ((longlong)uVar7 < 4) {
          if (0 < (longlong)uVar7) {
            peVar13 = param_1->m_src;
            peVar18 = param_1->m_dst;
            goto LAB_14f06d4fd;
          }
        }
        else {
          peVar13 = param_1->m_src;
          peVar18 = param_1->m_dst;
          do {
            *(undefined4 *)
             (*(longlong *)peVar18 + (lVar11 * *(longlong *)&peVar18->field_0x10 + lVar16) * 4) =
                 *(undefined4 *)
                  (*(longlong *)peVar13 + (lVar11 * *(longlong *)&peVar13->field_0x8 + lVar16) * 4);
            *(undefined4 *)
             (*(longlong *)peVar18 + 4 + (lVar11 * *(longlong *)&peVar18->field_0x10 + lVar16) * 4)
                 = *(undefined4 *)
                    (*(longlong *)peVar13 + 4 +
                    (lVar11 * *(longlong *)&peVar13->field_0x8 + lVar16) * 4);
            *(undefined4 *)
             (*(longlong *)peVar18 + 8 + (lVar11 * *(longlong *)&peVar18->field_0x10 + lVar16) * 4)
                 = *(undefined4 *)
                    (*(longlong *)peVar13 + 8 +
                    (lVar11 * *(longlong *)&peVar13->field_0x8 + lVar16) * 4);
            lVar15 = lVar11 * *(longlong *)&peVar13->field_0x8 + lVar16;
            lVar12 = lVar11 * *(longlong *)&peVar18->field_0x10 + lVar16;
            lVar16 = lVar16 + 4;
            *(undefined4 *)(*(longlong *)peVar18 + 0xc + lVar12 * 4) =
                 *(undefined4 *)(*(longlong *)peVar13 + 0xc + lVar15 * 4);
          } while (lVar16 < (longlong)(uVar7 - 3));
          for (; lVar16 < (longlong)uVar7; lVar16 = lVar16 + 1) {
LAB_14f06d4fd:
            *(undefined4 *)
             (*(longlong *)peVar18 + (lVar11 * *(longlong *)&peVar18->field_0x10 + lVar16) * 4) =
                 *(undefined4 *)
                  (*(longlong *)peVar13 + (lVar11 * *(longlong *)&peVar13->field_0x8 + lVar16) * 4);
          }
        }
        for (; (longlong)uVar8 < lVar14; uVar8 = uVar8 + 4) {
          puVar1 = (undefined8 *)
                   (*(longlong *)param_1->m_src +
                   (lVar11 * *(longlong *)&param_1->m_src->field_0x8 + uVar8) * 4);
          uVar6 = puVar1[1];
          puVar2 = (undefined8 *)
                   (*(longlong *)param_1->m_dst +
                   (lVar11 * *(longlong *)&param_1->m_dst->field_0x10 + uVar8) * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
        }
        if (lVar14 < (longlong)uVar4) {
          peVar13 = param_1->m_src;
          peVar18 = param_1->m_dst;
          if (3 < (longlong)(uVar4 - lVar14)) {
            do {
              *(undefined4 *)
               (*(longlong *)peVar18 + (lVar11 * *(longlong *)&peVar18->field_0x10 + lVar14) * 4) =
                   *(undefined4 *)
                    (*(longlong *)peVar13 + (lVar11 * *(longlong *)&peVar13->field_0x8 + lVar14) * 4
                    );
              *(undefined4 *)
               (*(longlong *)peVar18 + 4 + (lVar11 * *(longlong *)&peVar18->field_0x10 + lVar14) * 4
               ) = *(undefined4 *)
                    (*(longlong *)peVar13 + 4 +
                    (lVar11 * *(longlong *)&peVar13->field_0x8 + lVar14) * 4);
              *(undefined4 *)
               (*(longlong *)peVar18 + 8 + (lVar11 * *(longlong *)&peVar18->field_0x10 + lVar14) * 4
               ) = *(undefined4 *)
                    (*(longlong *)peVar13 + 8 +
                    (lVar11 * *(longlong *)&peVar13->field_0x8 + lVar14) * 4);
              lVar12 = lVar11 * *(longlong *)&peVar13->field_0x8 + lVar14;
              lVar16 = lVar11 * *(longlong *)&peVar18->field_0x10 + lVar14;
              lVar14 = lVar14 + 4;
              *(undefined4 *)(*(longlong *)peVar18 + 0xc + lVar16 * 4) =
                   *(undefined4 *)(*(longlong *)peVar13 + 0xc + lVar12 * 4);
            } while (lVar14 < (longlong)(uVar4 - 3));
            if ((longlong)uVar4 <= lVar14) goto LAB_14f06d65f;
          }
          do {
            lVar12 = lVar11 * *(longlong *)&peVar13->field_0x8 + lVar14;
            lVar16 = lVar11 * *(longlong *)&peVar18->field_0x10 + lVar14;
            lVar14 = lVar14 + 1;
            *(undefined4 *)(*(longlong *)peVar18 + lVar16 * 4) =
                 *(undefined4 *)(*(longlong *)peVar13 + lVar12 * 4);
          } while (lVar14 < (longlong)uVar4);
        }
LAB_14f06d65f:
        lVar16 = uVar7 + (-((uVar9 + (int)uVar5 & 3) - uVar9) & 3);
        uVar10 = (uint)(lVar16 >> 0x3f) & 3;
        uVar7 = (ulonglong)((int)lVar16 + uVar10 & 3) - (ulonglong)uVar10;
        if ((longlong)uVar4 < (longlong)uVar7) {
          uVar7 = uVar4;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar17);
    }
  }
  else {
    lVar17 = 0;
    if (0 < *(longlong *)&pBVar3->field_0x10) {
      lVar11 = *(longlong *)&pBVar3->field_0x8;
      do {
        lVar16 = 0;
        if (0 < lVar11) {
          peVar13 = param_1->m_src;
          peVar18 = param_1->m_dst;
          do {
            lVar14 = lVar17 * *(longlong *)&peVar13->field_0x8 + lVar16;
            lVar11 = lVar17 * *(longlong *)&peVar18->field_0x10 + lVar16;
            lVar16 = lVar16 + 1;
            *(undefined4 *)(*(longlong *)peVar18 + lVar11 * 4) =
                 *(undefined4 *)(*(longlong *)peVar13 + lVar14 * 4);
            lVar11 = *(longlong *)&pBVar3->field_0x8;
          } while (lVar16 < lVar11);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(longlong *)&pBVar3->field_0x10);
      return;
    }
  }
  return;
}

// run @ 14f06d6b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Eigen::internal::
dense_assignment_loop<Eigen::internal::restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>,Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>,1>_>,Eigen::internal::assign_op<float,float>_>,4,0>
::run(restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_>,Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>,1>_>,Eigen::internal::assign_op<float,float>_>
      *param_1)

{
  ulong64 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  scalar_sum_op<float,float> local_res10 [8];
  longlong local_res18;
  ulonglong local_res20;
  undefined1 local_208 [32];
  longlong local_1e8;
  longlong lStack_1e0;
  undefined8 uStack_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [40];
  longlong local_1a0;
  longlong lStack_198;
  undefined8 local_190;
  longlong local_188;
  longlong lStack_180;
  undefined8 local_178;
  longlong local_170;
  longlong lStack_168;
  longlong local_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong local_140;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  __m128 local_f8;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  
  uVar7 = _UNK_150ae1708;
  lVar6 = ___xmm_00000000000000010000000000000000;
  lVar8 = 0;
  lVar13 = 0;
  local_1d0 = *(longlong *)(*(longlong *)&param_1->field_0x18 + 0x10);
  lVar9 = *(longlong *)(*(longlong *)&param_1->field_0x18 + 8);
  uVar11 = (uint)(lVar9 >> 0x3f) & 3;
  local_res20 = (ulonglong)(-(((int)lVar9 + uVar11 & 3) - uVar11) & 3);
  local_res18 = lVar9;
  if (0 < local_1d0) {
    do {
      lVar14 = 0;
      lVar12 = (lVar9 - lVar8 & 0xfffffffffffffffcU) + lVar8;
      lVar10 = lVar8;
      if (0 < lVar8) {
        plVar2 = *(longlong **)&param_1->field_0x8;
        plVar3 = *(longlong **)param_1;
        plVar4 = (longlong *)*plVar2;
        do {
          lStack_180 = plVar2[2];
          local_140 = plVar2[7];
          local_208._0_8_ = *plVar4 + lVar14 * 4;
          local_1c8._24_8_ = plVar4[2];
          local_118 = 0;
          local_1e8 = plVar2[1] + lVar13 * 4;
          local_130 = plVar2[9];
          local_128 = plVar2[10];
          local_120 = plVar2[0xb];
          local_108 = 1;
          local_190 = uVar7;
          local_1c8._16_8_ = local_208._8_8_;
          local_170 = plVar2[1];
          lStack_168 = plVar2[2];
          lStack_1e0 = lVar6;
          uStack_1d8 = uVar7;
          local_158 = plVar2[4];
          lStack_150 = plVar2[5];
          lStack_198 = lVar6;
          local_178 = local_d8;
          local_160 = plVar2[3];
          local_148 = plVar2[6];
          local_208._24_8_ = plVar4;
          local_1c8._8_8_ = local_208._0_8_;
          local_1c8._32_8_ = plVar4;
          local_1a0 = lVar14;
          local_188 = local_1e8;
          local_e8 = local_1e8;
          lStack_e0 = lStack_180;
          if (lStack_180 == 0) {
            fVar15 = 0.0;
            local_208._16_8_ = local_1c8._24_8_;
            local_1e8 = lVar14;
            local_110 = lVar13;
          }
          else {
            local_208._16_8_ = plVar4[1];
            local_208._8_8_ = local_208._0_8_;
            lStack_1e0 = local_140;
            local_110 = lVar13;
            fVar15 = redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_>_>,0,0>
                     ::
                     run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
                               ((redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
                                 *)local_208,local_res10,
                                (CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>
                                 *)local_1c8);
          }
          lVar9 = lVar13 * plVar3[1] + lVar14;
          lVar14 = lVar14 + 1;
          *(float *)(*plVar3 + lVar9 * 4) = fVar15;
          lVar9 = local_res18;
        } while (lVar14 < lVar8);
      }
      for (; lVar10 < lVar12; lVar10 = lVar10 + 4) {
        lVar9 = *(longlong *)&param_1->field_0x8;
        etor_product_packet_impl<0,-1,Eigen::internal::evaluator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>,Eigen::internal::evaluator<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_>,__m128,0>
        ::run(lVar10,lVar13,(evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)(lVar9 + 0x60),
              (evaluator<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_>
               *)(lVar9 + 0x70),*(long64 *)(lVar9 + 0x88),&local_f8);
        puVar1 = (ulong64 *)
                 (**(longlong **)param_1 + (lVar13 * (*(longlong **)param_1)[1] + lVar10) * 4);
        *puVar1 = local_f8.m128_u64[0];
        puVar1[1] = local_f8.m128_u64[1];
        lVar9 = local_res18;
      }
      if (lVar12 < lVar9) {
        puVar5 = *(undefined8 **)&param_1->field_0x8;
        plVar2 = *(longlong **)param_1;
        plVar3 = (longlong *)*puVar5;
        do {
          lStack_180 = puVar5[2];
          local_140 = puVar5[7];
          local_208._0_8_ = *plVar3 + lVar12 * 4;
          local_1c8._24_8_ = plVar3[2];
          local_118 = 0;
          local_1e8 = puVar5[1] + lVar13 * 4;
          local_130 = puVar5[9];
          local_128 = puVar5[10];
          local_120 = puVar5[0xb];
          local_108 = 1;
          local_190 = uVar7;
          local_1c8._16_8_ = local_208._8_8_;
          local_170 = puVar5[1];
          lStack_168 = puVar5[2];
          lStack_1e0 = lVar6;
          uStack_1d8 = uVar7;
          local_158 = puVar5[4];
          lStack_150 = puVar5[5];
          lStack_198 = lVar6;
          local_178 = local_d8;
          local_160 = puVar5[3];
          local_148 = puVar5[6];
          local_208._24_8_ = plVar3;
          local_1c8._8_8_ = local_208._0_8_;
          local_1c8._32_8_ = plVar3;
          local_1a0 = lVar12;
          local_188 = local_1e8;
          local_e8 = local_1e8;
          lStack_e0 = lStack_180;
          if (lStack_180 == 0) {
            fVar15 = 0.0;
            local_208._16_8_ = local_1c8._24_8_;
            local_1e8 = lVar12;
            local_110 = lVar13;
          }
          else {
            local_208._16_8_ = plVar3[1];
            local_208._8_8_ = local_208._0_8_;
            lStack_1e0 = local_140;
            local_110 = lVar13;
            fVar15 = redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_const_,-1,1,0>_const_>_>,0,0>
                     ::
                     run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
                               ((redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>_>
                                 *)local_208,local_res10,
                                (CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_const_,_1,1,0>_const_>
                                 *)local_1c8);
            lVar9 = local_res18;
          }
          lVar10 = lVar13 * plVar2[1] + lVar12;
          lVar12 = lVar12 + 1;
          *(float *)(*plVar2 + lVar10 * 4) = fVar15;
        } while (lVar12 < lVar9);
      }
      uVar11 = (uint)((longlong)(local_res20 + lVar8) >> 0x3f) & 3;
      lVar8 = (ulonglong)((int)(local_res20 + lVar8) + uVar11 & 3) - (ulonglong)uVar11;
      if (lVar9 < lVar8) {
        lVar8 = lVar9;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < local_1d0);
  }
  return;
}

// run @ 14f06dab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Eigen::internal::
dense_assignment_loop<Eigen::internal::restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>,Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>,1>_>,Eigen::internal::assign_op<float,float>_>,4,0>
::run(restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_>,Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>,1>_>,Eigen::internal::assign_op<float,float>_>
      *param_1)

{
  ulong64 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  float fVar15;
  scalar_sum_op<float,float> local_res8 [8];
  longlong local_res10;
  ulonglong local_res18;
  longlong local_res20;
  undefined1 local_1a8 [32];
  longlong local_188;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined1 local_170 [40];
  longlong local_148;
  longlong lStack_140;
  undefined8 local_138;
  longlong local_130;
  longlong lStack_128;
  undefined8 local_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  __m128 local_c8;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  
  uVar6 = _UNK_150ae1708;
  lVar5 = ___xmm_00000000000000010000000000000000;
  lVar7 = 0;
  lVar12 = 0;
  local_res20 = *(longlong *)(*(longlong *)&param_1->field_0x18 + 0x10);
  lVar8 = *(longlong *)(*(longlong *)&param_1->field_0x18 + 8);
  uVar10 = (uint)(lVar8 >> 0x3f) & 3;
  local_res18 = (ulonglong)(-(((int)lVar8 + uVar10 & 3) - uVar10) & 3);
  local_res10 = lVar8;
  if (0 < local_res20) {
    do {
      lVar13 = 0;
      lVar11 = (lVar8 - lVar7 & 0xfffffffffffffffcU) + lVar7;
      lVar9 = lVar7;
      if (0 < lVar7) {
        plVar14 = *(longlong **)&param_1->field_0x8;
        plVar2 = *(longlong **)param_1;
        plVar3 = (longlong *)*plVar14;
        do {
          local_100 = plVar14[4];
          local_1a8._0_8_ = *plVar3 + lVar13 * 4;
          local_170._24_8_ = plVar3[2];
          local_f0 = 0;
          local_188 = plVar14[1] + lVar12 * 4;
          lStack_128 = plVar14[2];
          local_138 = uVar6;
          local_e0 = 1;
          local_170._16_8_ = local_1a8._8_8_;
          lStack_180 = lVar5;
          uStack_178 = uVar6;
          local_118 = plVar14[1];
          lStack_110 = plVar14[2];
          lStack_140 = lVar5;
          local_120 = local_a8;
          local_108 = plVar14[3];
          local_1a8._24_8_ = plVar3;
          local_170._8_8_ = local_1a8._0_8_;
          local_170._32_8_ = plVar3;
          local_148 = lVar13;
          local_130 = local_188;
          local_b8 = local_188;
          lStack_b0 = lStack_128;
          if (lStack_128 == 0) {
            fVar15 = 0.0;
            local_1a8._16_8_ = local_170._24_8_;
            local_188 = lVar13;
            local_e8 = lVar12;
          }
          else {
            local_1a8._16_8_ = plVar3[1];
            local_1a8._8_8_ = local_1a8._0_8_;
            lStack_180 = local_100;
            local_e8 = lVar12;
            fVar15 = redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_>_>,0,0>
                     ::
                     run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
                               ((redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
                                 *)local_1a8,local_res8,
                                (CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>
                                 *)local_170);
            plVar14 = *(longlong **)&param_1->field_0x8;
          }
          lVar8 = lVar12 * plVar2[1] + lVar13;
          lVar13 = lVar13 + 1;
          *(float *)(*plVar2 + lVar8 * 4) = fVar15;
          lVar8 = local_res10;
        } while (lVar13 < lVar7);
      }
      for (; lVar9 < lVar11; lVar9 = lVar9 + 4) {
        lVar8 = *(longlong *)&param_1->field_0x8;
        etor_product_packet_impl<0,-1,Eigen::internal::evaluator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>,Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_>,__m128,0>
        ::run(lVar9,lVar12,(evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *)(lVar8 + 0x30),
              (evaluator<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_>
               *)(lVar8 + 0x40),*(long64 *)(lVar8 + 0x58),&local_c8);
        puVar1 = (ulong64 *)
                 (**(longlong **)param_1 + (lVar12 * (*(longlong **)param_1)[1] + lVar9) * 4);
        *puVar1 = local_c8.m128_u64[0];
        puVar1[1] = local_c8.m128_u64[1];
        lVar8 = local_res10;
      }
      if (lVar11 < lVar8) {
        puVar4 = *(undefined8 **)&param_1->field_0x8;
        plVar2 = *(longlong **)param_1;
        plVar3 = (longlong *)*puVar4;
        do {
          local_100 = puVar4[4];
          local_1a8._0_8_ = *plVar3 + lVar11 * 4;
          local_170._24_8_ = plVar3[2];
          local_f0 = 0;
          local_188 = puVar4[1] + lVar12 * 4;
          lStack_128 = puVar4[2];
          local_138 = uVar6;
          local_e0 = 1;
          local_170._16_8_ = local_1a8._8_8_;
          lStack_180 = lVar5;
          uStack_178 = uVar6;
          local_118 = puVar4[1];
          lStack_110 = puVar4[2];
          lStack_140 = lVar5;
          local_120 = local_a8;
          local_108 = puVar4[3];
          local_1a8._24_8_ = plVar3;
          local_170._8_8_ = local_1a8._0_8_;
          local_170._32_8_ = plVar3;
          local_148 = lVar11;
          local_130 = local_188;
          local_b8 = local_188;
          lStack_b0 = lStack_128;
          if (lStack_128 == 0) {
            fVar15 = 0.0;
            local_1a8._16_8_ = local_170._24_8_;
            local_188 = lVar11;
            local_e8 = lVar12;
          }
          else {
            local_1a8._16_8_ = plVar3[1];
            local_1a8._8_8_ = local_1a8._0_8_;
            lStack_180 = local_100;
            local_e8 = lVar12;
            fVar15 = redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,1,-1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,1,0>_const_>_>,0,0>
                     ::
                     run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
                               ((redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>_>
                                 *)local_1a8,local_res8,
                                (CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,1,_1,0>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,1,0>_const_>
                                 *)local_170);
            lVar8 = local_res10;
          }
          lVar9 = lVar12 * plVar2[1] + lVar11;
          lVar11 = lVar11 + 1;
          *(float *)(*plVar2 + lVar9 * 4) = fVar15;
        } while (lVar11 < lVar8);
      }
      uVar10 = (uint)((longlong)(local_res18 + lVar7) >> 0x3f) & 3;
      lVar7 = (ulonglong)((int)(local_res18 + lVar7) + uVar10 & 3) - (ulonglong)uVar10;
      if (lVar8 < lVar7) {
        lVar7 = lVar8;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < local_res20);
  }
  return;
}

// run @ 14f06de50

void __cdecl
Eigen::internal::
etor_product_packet_impl<0,-1,Eigen::internal::evaluator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>,Eigen::internal::evaluator<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_const_,-1,-1,0>_>,__m128,0>
::run(long64 param_1,long64 param_2,evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *param_3,
     evaluator<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_const_,_1,_1,0>_>
     *param_4,long64 param_5,__m128 *param_6)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar5 = 0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  param_6->m128_u64[0] = 0;
  param_6->m128_u64[1] = 0;
  if (3 < param_5) {
    lVar6 = 2;
    do {
      fVar2 = *(float *)(*(longlong *)param_4 +
                        (lVar5 * *(longlong *)&param_4->field_0x10 + param_2) * 4);
      lVar3 = lVar5 * *(longlong *)&param_3->field_0x8;
      lVar5 = lVar5 + 4;
      pfVar1 = (float *)(*(longlong *)param_3 + (lVar3 + param_1) * 4);
      fVar7 = fVar2 * *pfVar1 + fVar7;
      fVar8 = fVar2 * pfVar1[1] + fVar8;
      fVar9 = fVar2 * pfVar1[2] + fVar9;
      fVar10 = fVar2 * pfVar1[3] + fVar10;
      param_6->m128_f32[0] = fVar7;
      param_6->m128_f32[1] = fVar8;
      param_6->m128_f32[2] = fVar9;
      param_6->m128_f32[3] = fVar10;
      fVar2 = *(float *)(*(longlong *)param_4 +
                        ((lVar6 + -1) * *(longlong *)&param_4->field_0x10 + param_2) * 4);
      pfVar1 = (float *)(*(longlong *)param_3 +
                        ((lVar6 + -1) * *(longlong *)&param_3->field_0x8 + param_1) * 4);
      lVar3 = lVar6 + 1;
      fVar7 = fVar2 * *pfVar1 + fVar7;
      fVar8 = fVar2 * pfVar1[1] + fVar8;
      fVar9 = fVar2 * pfVar1[2] + fVar9;
      fVar10 = fVar2 * pfVar1[3] + fVar10;
      param_6->m128_f32[0] = fVar7;
      param_6->m128_f32[1] = fVar8;
      param_6->m128_f32[2] = fVar9;
      param_6->m128_f32[3] = fVar10;
      fVar2 = *(float *)(*(longlong *)param_4 +
                        (lVar6 * *(longlong *)&param_4->field_0x10 + param_2) * 4);
      lVar4 = lVar6 * *(longlong *)&param_3->field_0x8;
      lVar6 = lVar6 + 4;
      pfVar1 = (float *)(*(longlong *)param_3 + (lVar4 + param_1) * 4);
      fVar7 = fVar2 * *pfVar1 + fVar7;
      fVar8 = fVar2 * pfVar1[1] + fVar8;
      fVar9 = fVar2 * pfVar1[2] + fVar9;
      fVar10 = fVar2 * pfVar1[3] + fVar10;
      param_6->m128_f32[0] = fVar7;
      param_6->m128_f32[1] = fVar8;
      param_6->m128_f32[2] = fVar9;
      param_6->m128_f32[3] = fVar10;
      fVar2 = *(float *)(*(longlong *)param_4 +
                        (lVar3 * *(longlong *)&param_4->field_0x10 + param_2) * 4);
      pfVar1 = (float *)(*(longlong *)param_3 +
                        (lVar3 * *(longlong *)&param_3->field_0x8 + param_1) * 4);
      fVar7 = fVar2 * *pfVar1 + fVar7;
      fVar8 = fVar2 * pfVar1[1] + fVar8;
      fVar9 = fVar2 * pfVar1[2] + fVar9;
      fVar10 = fVar2 * pfVar1[3] + fVar10;
      param_6->m128_f32[0] = fVar7;
      param_6->m128_f32[1] = fVar8;
      param_6->m128_f32[2] = fVar9;
      param_6->m128_f32[3] = fVar10;
    } while (lVar5 < param_5 + -3);
  }
  for (; lVar5 < param_5; lVar5 = lVar5 + 1) {
    fVar2 = *(float *)(*(longlong *)param_4 +
                      (lVar5 * *(longlong *)&param_4->field_0x10 + param_2) * 4);
    pfVar1 = (float *)(*(longlong *)param_3 +
                      (lVar5 * *(longlong *)&param_3->field_0x8 + param_1) * 4);
    fVar7 = fVar2 * *pfVar1 + fVar7;
    fVar8 = fVar2 * pfVar1[1] + fVar8;
    fVar9 = fVar2 * pfVar1[2] + fVar9;
    fVar10 = fVar2 * pfVar1[3] + fVar10;
    param_6->m128_f32[0] = fVar7;
    param_6->m128_f32[1] = fVar8;
    param_6->m128_f32[2] = fVar9;
    param_6->m128_f32[3] = fVar10;
  }
  return;
}

// run @ 14f06dfe0

void __cdecl
Eigen::internal::
etor_product_packet_impl<0,-1,Eigen::internal::evaluator<Eigen::Matrix<float,-1,-1,0,-1,-1>_>,Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,16,Eigen::OuterStride<-1>_>_>,__m128,0>
::run(long64 param_1,long64 param_2,evaluator<Eigen::Matrix<float,_1,_1,0,_1,_1>_> *param_3,
     evaluator<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,16,Eigen::OuterStride<_1>_>_>
     *param_4,long64 param_5,__m128 *param_6)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar5 = 0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  param_6->m128_u64[0] = 0;
  param_6->m128_u64[1] = 0;
  if (3 < param_5) {
    lVar6 = 2;
    do {
      fVar2 = *(float *)(*(longlong *)param_4 +
                        (lVar5 * *(longlong *)&param_4->field_0x10 + param_2) * 4);
      lVar3 = lVar5 * *(longlong *)&param_3->field_0x8;
      lVar5 = lVar5 + 4;
      pfVar1 = (float *)(*(longlong *)param_3 + (lVar3 + param_1) * 4);
      fVar7 = fVar2 * *pfVar1 + fVar7;
      fVar8 = fVar2 * pfVar1[1] + fVar8;
      fVar9 = fVar2 * pfVar1[2] + fVar9;
      fVar10 = fVar2 * pfVar1[3] + fVar10;
      param_6->m128_f32[0] = fVar7;
      param_6->m128_f32[1] = fVar8;
      param_6->m128_f32[2] = fVar9;
      param_6->m128_f32[3] = fVar10;
      fVar2 = *(float *)(*(longlong *)param_4 +
                        ((lVar6 + -1) * *(longlong *)&param_4->field_0x10 + param_2) * 4);
      pfVar1 = (float *)(*(longlong *)param_3 +
                        ((lVar6 + -1) * *(longlong *)&param_3->field_0x8 + param_1) * 4);
      lVar3 = lVar6 + 1;
      fVar7 = fVar2 * *pfVar1 + fVar7;
      fVar8 = fVar2 * pfVar1[1] + fVar8;
      fVar9 = fVar2 * pfVar1[2] + fVar9;
      fVar10 = fVar2 * pfVar1[3] + fVar10;
      param_6->m128_f32[0] = fVar7;
      param_6->m128_f32[1] = fVar8;
      param_6->m128_f32[2] = fVar9;
      param_6->m128_f32[3] = fVar10;
      fVar2 = *(float *)(*(longlong *)param_4 +
                        (lVar6 * *(longlong *)&param_4->field_0x10 + param_2) * 4);
      lVar4 = lVar6 * *(longlong *)&param_3->field_0x8;
      lVar6 = lVar6 + 4;
      pfVar1 = (float *)(*(longlong *)param_3 + (lVar4 + param_1) * 4);
      fVar7 = fVar2 * *pfVar1 + fVar7;
      fVar8 = fVar2 * pfVar1[1] + fVar8;
      fVar9 = fVar2 * pfVar1[2] + fVar9;
      fVar10 = fVar2 * pfVar1[3] + fVar10;
      param_6->m128_f32[0] = fVar7;
      param_6->m128_f32[1] = fVar8;
      param_6->m128_f32[2] = fVar9;
      param_6->m128_f32[3] = fVar10;
      fVar2 = *(float *)(*(longlong *)param_4 +
                        (lVar3 * *(longlong *)&param_4->field_0x10 + param_2) * 4);
      pfVar1 = (float *)(*(longlong *)param_3 +
                        (lVar3 * *(longlong *)&param_3->field_0x8 + param_1) * 4);
      fVar7 = fVar2 * *pfVar1 + fVar7;
      fVar8 = fVar2 * pfVar1[1] + fVar8;
      fVar9 = fVar2 * pfVar1[2] + fVar9;
      fVar10 = fVar2 * pfVar1[3] + fVar10;
      param_6->m128_f32[0] = fVar7;
      param_6->m128_f32[1] = fVar8;
      param_6->m128_f32[2] = fVar9;
      param_6->m128_f32[3] = fVar10;
    } while (lVar5 < param_5 + -3);
  }
  for (; lVar5 < param_5; lVar5 = lVar5 + 1) {
    fVar2 = *(float *)(*(longlong *)param_4 +
                      (lVar5 * *(longlong *)&param_4->field_0x10 + param_2) * 4);
    pfVar1 = (float *)(*(longlong *)param_3 +
                      (lVar5 * *(longlong *)&param_3->field_0x8 + param_1) * 4);
    fVar7 = fVar2 * *pfVar1 + fVar7;
    fVar8 = fVar2 * pfVar1[1] + fVar8;
    fVar9 = fVar2 * pfVar1[2] + fVar9;
    fVar10 = fVar2 * pfVar1[3] + fVar10;
    param_6->m128_f32[0] = fVar7;
    param_6->m128_f32[1] = fVar8;
    param_6->m128_f32[2] = fVar9;
    param_6->m128_f32[3] = fVar10;
  }
  return;
}

// run @ 14f06e170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
Eigen::internal::general_matrix_matrix_product<__int64,float,0,0,float,1,0,0,1>::run
          (long64 param_1,long64 param_2,long64 param_3,float *param_4,long64 param_5,float *param_6
          ,long64 param_7,float *param_8,long64 param_9,long64 param_10,float param_11,
          level3_blocking<float,float> *param_12,GemmParallelInfo<__int64> *param_13)

{
  longlong lVar1;
  ulong64 uVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  long64 lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_158 [96];
  char local_f8;
  gemm_pack_lhs<float,__int64,Eigen::internal::const_blas_data_mapper<float,__int64,0>,8,4,__m128,0,0,0>
  local_f7 [7];
  float *local_f0;
  longlong local_e8;
  float *local_e0;
  longlong local_d8;
  long64 local_d0;
  longlong local_c8;
  float *local_c0;
  longlong local_b8;
  float *local_b0;
  float *local_a8;
  longlong local_a0;
  float *local_98;
  ulong64 local_90;
  ulong64 local_88;
  float *local_80;
  float *local_78;
  long64 local_70;
  float *local_68;
  long64 local_60;
  blas_data_mapper<float,__int64,0,0,1> local_58;
  ulonglong local_48;
  
  puVar8 = auStack_158;
  local_48 = __security_cookie.value ^ (ulonglong)&local_f8;
  local_a8 = (float *)param_1;
  local_c0 = param_4;
  local_d0 = param_3;
  lVar6 = param_12->m_kc;
  lVar12 = param_1;
  if (param_12->m_mc < param_1) {
    lVar12 = param_12->m_mc;
  }
  local_d8 = lVar6;
  lVar9 = param_2;
  if (param_12->m_nc < param_2) {
    lVar9 = param_12->m_nc;
  }
  local_e8 = lVar9;
  local_a0 = lVar12;
  if (0x3fffffffffffffff < (ulonglong)(lVar12 * lVar6)) {
    ::operator_new(0xffffffffffffffff);
  }
  pfVar3 = param_12->m_blockA;
  local_f0 = pfVar3;
  local_88 = lVar12 * lVar6 * 4;
  pfVar4 = pfVar3;
  if (pfVar3 == (float *)0x0) {
    if (local_88 < 0x20001) {
      uVar5 = local_88 + 0x1e;
      if (uVar5 <= local_88 + 0xf) {
        uVar5 = 0xffffffffffffff0;
      }
      local_f0 = (float *)((longlong)&local_f0 + -(uVar5 & 0xfffffffffffffff0));
      pfVar3 = (float *)0x0;
      puVar8 = auStack_158 + -(uVar5 & 0xfffffffffffffff0);
      pfVar4 = local_f0;
    }
    else {
      pfVar4 = FMemory_Malloc(local_88,0x10);
      local_f0 = pfVar4;
      if (pfVar4 == (float *)0x0) {
        ::operator_new(0xffffffffffffffff);
      }
      pfVar3 = param_12->m_blockA;
      puVar8 = auStack_158;
    }
  }
  local_80 = (float *)0x0;
  if (pfVar3 == (float *)0x0) {
    local_80 = pfVar4;
  }
  if (0x3fffffffffffffff < (ulonglong)(lVar9 * lVar6)) {
    *(undefined8 *)(puVar8 + -8) = 0x14f06e2d1;
    ::operator_new(0xffffffffffffffff);
  }
  pfVar3 = param_12->m_blockB;
  uVar2 = lVar9 * lVar6 * 4;
  local_e0 = pfVar3;
  local_90 = uVar2;
  if (pfVar3 == (float *)0x0) {
    if (uVar2 < 0x20001) {
      uVar5 = uVar2 + 0x1e;
      if (uVar5 <= uVar2 + 0xf) {
        uVar5 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar8 + -8) = 0x14f06e313;
      local_e0 = (float *)((ulonglong)(puVar8 + -(uVar5 & 0xfffffffffffffff0) + 0x6f) &
                          0xfffffffffffffff0);
      pfVar3 = (float *)0x0;
      puVar8 = puVar8 + -(uVar5 & 0xfffffffffffffff0);
    }
    else {
      *(undefined8 *)(puVar8 + -8) = 0x14f06e338;
      local_e0 = FMemory_Malloc(uVar2,0x10);
      if (local_e0 == (float *)0x0) {
        *(undefined8 *)(puVar8 + -8) = 0x14f06e350;
        ::operator_new(0xffffffffffffffff);
      }
      pfVar3 = param_12->m_blockB;
    }
  }
  pfVar10 = (float *)0x0;
  local_98 = pfVar10;
  if (pfVar3 == (float *)0x0) {
    local_98 = local_e0;
  }
  if (((lVar12 == param_1) || (local_d8 != local_d0)) || (local_f8 = '\x01', local_e8 != param_2)) {
    local_f8 = '\0';
  }
  lVar6 = local_d0;
  if (0 < param_1) {
    do {
      local_b0 = (float *)((longlong)pfVar10 + lVar12);
      pfVar3 = local_b0;
      if (param_1 < (longlong)local_b0) {
        pfVar3 = (float *)param_1;
      }
      local_c8 = (longlong)pfVar3 - (longlong)pfVar10;
      if (0 < lVar6) {
        local_70 = param_5;
        lVar12 = 0;
        do {
          lVar1 = local_c8;
          lVar7 = local_e8;
          lVar11 = local_d8 + lVar12;
          *(undefined8 *)(puVar8 + 0x30) = 0;
          local_b8 = lVar11;
          *(undefined8 *)(puVar8 + 0x28) = 0;
          if (lVar6 < lVar11) {
            lVar11 = lVar6;
          }
          *(longlong *)(puVar8 + 0x20) = lVar1;
          lVar11 = lVar11 - lVar12;
          local_78 = local_c0 + (longlong)(lVar12 * param_5 + (longlong)pfVar10);
          *(undefined8 *)(puVar8 + -8) = 0x14f06e433;
          gemm_pack_lhs<float,__int64,Eigen::internal::const_blas_data_mapper<float,__int64,0>,8,4,__m128,0,0,0>
          ::operator()(local_f7,pfVar4,(const_blas_data_mapper<float,__int64,0> *)&local_78,lVar11,
                       *(long64 *)(puVar8 + 0x20),*(long64 *)(puVar8 + 0x28),
                       *(long64 *)(puVar8 + 0x30));
          if (0 < param_2) {
            local_58.m_stride = param_10;
            lVar6 = 0;
            do {
              lVar1 = lVar6 + lVar7;
              lVar7 = lVar1;
              if (param_2 < lVar1) {
                lVar7 = param_2;
              }
              if ((local_f8 == '\0') || (pfVar10 == (float *)0x0)) {
                *(undefined8 *)(puVar8 + 0x30) = 0;
                local_60 = param_7;
                *(undefined8 *)(puVar8 + 0x28) = 0;
                *(longlong *)(puVar8 + 0x20) = lVar7 - lVar6;
                pfVar3 = local_e0;
                local_68 = param_6 + lVar12 * param_7 + lVar6;
                *(undefined8 *)(puVar8 + -8) = 0x14f06e4bc;
                gemm_pack_rhs<float,__int64,Eigen::internal::const_blas_data_mapper<float,__int64,1>,4,1,0,0>
                ::operator()((gemm_pack_rhs<float,__int64,Eigen::internal::const_blas_data_mapper<float,__int64,1>,4,1,0,0>
                              *)local_f7,pfVar3,(const_blas_data_mapper<float,__int64,1> *)&local_68
                             ,lVar11,*(long64 *)(puVar8 + 0x20),*(long64 *)(puVar8 + 0x28),
                             *(long64 *)(puVar8 + 0x30));
              }
              pfVar4 = local_e0;
              pfVar3 = local_f0;
              *(undefined8 *)(puVar8 + 0x58) = 0;
              *(undefined8 *)(puVar8 + 0x50) = 0;
              *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
              *(float *)(puVar8 + 0x38) = param_11;
              *(longlong *)(puVar8 + 0x30) = lVar7 - lVar6;
              *(longlong *)(puVar8 + 0x28) = lVar11;
              local_58.m_data = param_8 + (longlong)(lVar6 * param_10 + (longlong)pfVar10);
              *(longlong *)(puVar8 + 0x20) = local_c8;
              *(undefined8 *)(puVar8 + -8) = 0x14f06e52c;
              gebp_kernel<float,float,__int64,Eigen::internal::blas_data_mapper<float,__int64,0,0,1>,8,4,0,0>
              ::operator()((gebp_kernel<float,float,__int64,Eigen::internal::blas_data_mapper<float,__int64,0,0,1>,8,4,0,0>
                            *)local_f7,&local_58,pfVar3,pfVar4,*(long64 *)(puVar8 + 0x20),
                           *(long64 *)(puVar8 + 0x28),*(long64 *)(puVar8 + 0x30),
                           *(float *)(puVar8 + 0x38),*(long64 *)(puVar8 + 0x40),
                           *(long64 *)(puVar8 + 0x48),*(long64 *)(puVar8 + 0x50),
                           *(long64 *)(puVar8 + 0x58));
              lVar7 = local_e8;
              lVar6 = lVar1;
            } while (lVar1 < param_2);
          }
          lVar6 = local_d0;
          pfVar4 = local_f0;
          param_1 = (long64)local_a8;
          lVar12 = local_b8;
        } while (local_b8 < local_d0);
      }
      lVar12 = local_a0;
      pfVar10 = local_b0;
    } while ((longlong)local_b0 < param_1);
  }
  pfVar3 = local_98;
  if (0x20000 < local_90) {
    *(undefined8 *)(puVar8 + -8) = 0x14f06e5a7;
    FMemory_Free(pfVar3);
  }
  pfVar3 = local_80;
  if (0x20000 < local_88) {
    *(undefined8 *)(puVar8 + -8) = 0x14f06e5ba;
    FMemory_Free(pfVar3);
  }
  *(undefined8 *)(puVar8 + -8) = 0x14f06e5c9;
  return;
}

