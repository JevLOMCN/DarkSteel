// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 29

// operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_quotient_op<float,float>,Eigen::Matrix<float,4,1,0,4,1>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_const_>_const_>_> @ 14f067ce0

Quaternion<float,0> * __thiscall
Eigen::QuaternionBase<Eigen::Quaternion<float,0>_>::
operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_quotient_op<float,float>,Eigen::Matrix<float,4,1,0,4,1>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_const_>_const_>_>
          (QuaternionBase<Eigen::Quaternion<float,0>_> *this,
          MatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_quotient_op<float,float>,Eigen::Matrix<float,4,1,0,4,1>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_const_>_const_>_>
          *param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  auVar2._4_4_ = uVar1;
  auVar2._0_4_ = uVar1;
  auVar2._8_4_ = uVar1;
  auVar2._12_4_ = uVar1;
  auVar2 = divps(**(undefined1 (**) [16])(param_1 + 8),auVar2);
  *(undefined1 (*) [16])this = auVar2;
  return (Quaternion<float,0> *)this;
}

// operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_const_>_const_,Eigen::Matrix<float,4,1,2,4,1>_const_>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_const_>_const_,Eigen::Matrix<float,4,1,2,4,1>_const_>_const_>_> @ 14f067d00

Quaternion<float,0> * __thiscall
Eigen::QuaternionBase<Eigen::Quaternion<float,0>_>::
operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_const_>_const_,Eigen::Matrix<float,4,1,2,4,1>_const_>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_const_>_const_,Eigen::Matrix<float,4,1,2,4,1>_const_>_const_>_>
          (QuaternionBase<Eigen::Quaternion<float,0>_> *this,
          MatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_const_>_const_,Eigen::Matrix<float,4,1,2,4,1>_const_>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_const_>_const_,Eigen::Matrix<float,4,1,2,4,1>_const_>_const_>_>
          *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar3 = *(float **)(param_1 + 0x38);
  fVar1 = *(float *)(param_1 + 0x30);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar5 = pfVar3[1];
  fVar6 = pfVar3[2];
  fVar7 = pfVar3[3];
  pfVar4 = *(float **)(param_1 + 0x18);
  fVar8 = pfVar4[1];
  fVar9 = pfVar4[2];
  fVar10 = pfVar4[3];
  *(float *)this = fVar1 * *pfVar3 + fVar2 * *pfVar4;
  *(float *)(this + 4) = fVar1 * fVar5 + fVar2 * fVar8;
  *(float *)(this + 8) = fVar1 * fVar6 + fVar2 * fVar9;
  *(float *)(this + 0xc) = fVar1 * fVar7 + fVar2 * fVar10;
  return (Quaternion<float,0> *)this;
}

// operator=<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_>_> @ 14f067d40

Quaternion<float,0> * __thiscall
Eigen::QuaternionBase<Eigen::Quaternion<float,0>_>::
operator=<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_>_>
          (QuaternionBase<Eigen::Quaternion<float,0>_> *this,
          MatrixBase<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_>_>
          *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 local_18;
  byte local_14 [20];
  
  local_18 = *(undefined4 *)(param_1 + 4);
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  uVar3 = 0;
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    if (local_14[lVar1 + -4] != local_14[lVar1]) {
      uVar3 = -(uint)(local_14[lVar1 + -4] < local_14[lVar1]) | 1;
      break;
    }
    lVar1 = lVar2;
  } while (lVar2 != 4);
  if (uVar3 != 0) {
    *(undefined4 *)this = local_18;
    *(undefined4 *)(this + 4) = local_18;
    *(undefined4 *)(this + 8) = local_18;
    *(undefined4 *)(this + 0xc) = local_18;
    return (Quaternion<float,0> *)this;
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return (Quaternion<float,0> *)this;
}

// operator=<Eigen::Quaternion<float,2>_> @ 14f067db0

AngleAxis<float> * __thiscall
Eigen::AngleAxis<float>::operator=<Eigen::Quaternion<float,2>_>
          (AngleAxis<float> *this,QuaternionBase<Eigen::Quaternion<float,2>_> *param_1)

{
  float fVar1;
  float _Y;
  float fVar2;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  QuaternionBase<Eigen::Quaternion<float,2>_> *local_68 [2];
  QuaternionBase<Eigen::Quaternion<float,2>_> *local_58;
  undefined8 local_50;
  undefined8 local_40;
  
  fVar2 = __real_3f800000;
  _Y = SQRT(*(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
            *(float *)(param_1 + 8) * *(float *)(param_1 + 8) +
            *(float *)param_1 * *(float *)param_1);
  if (_Y < __real_34000000) {
    local_50 = 0;
    local_40 = 4;
    local_res10[0] = 0.0;
    local_res18[0] = 1.0;
    local_res8[0] = 0.0;
    local_68[0] = param_1;
    local_58 = param_1;
    internal::
    stable_norm_impl_inner_step<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>,float>
              ((Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0> *)local_68,local_res8,local_res10
               ,local_res18);
    _Y = SQRT(local_res8[0]) * local_res10[0];
  }
  if (_Y == 0.0) {
    this->m_angle = 0.0;
    *(undefined8 *)&this->m_axis = 0x3f800000;
    *(undefined4 *)&(this->m_axis).field_0x8 = 0;
  }
  else {
    fVar1 = atan2f(_Y,(float)(*(uint *)(param_1 + 0xc) & __xmm_7fffffff7fffffff7fffffff7fffffff));
    this->m_angle = fVar1 + fVar1;
    if (*(float *)(param_1 + 0xc) <= 0.0 && *(float *)(param_1 + 0xc) != 0.0) {
      _Y = (float)((uint)_Y ^ __xmm_80000000800000008000000080000000);
    }
    fVar2 = fVar2 / _Y;
    *(float *)&this->m_axis = fVar2 * *(float *)param_1;
    *(float *)&(this->m_axis).field_0x4 = fVar2 * *(float *)(param_1 + 4);
    *(float *)&(this->m_axis).field_0x8 = fVar2 * *(float *)(param_1 + 8);
  }
  return this;
}

// NullaryExpr<Eigen::internal::scalar_constant_op<float>_> @ 14f067f10

CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_> __cdecl
Eigen::DenseBase<Eigen::Matrix<float,4,1,2,4,1>_>::
NullaryExpr<Eigen::internal::scalar_constant_op<float>_>
          (long64 param_1,long64 param_2,scalar_constant_op<float> *param_3)

{
  undefined4 *in_R9;
  
  *(undefined4 *)(param_1 + 4) = *in_R9;
  return (CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,4,1,0,4,1>_>
         )param_1;
}

// check_static_allocation_size<float,4096> @ 14f067f20

void __cdecl Eigen::internal::check_static_allocation_size<float,4096>(void)

{
  return;
}

// copy_n<float_const_*,unsigned___int64,float_*> @ 14f067f30

float * __cdecl
std::copy_n<float_const_*,unsigned___int64,float_*>(float *param_1,ulong64 param_2,float *param_3)

{
  if (param_2 != 0) {
    memmove(param_3,param_1,param_2 * 4);
    return param_3 + param_2;
  }
  return param_3;
}

// dot<Eigen::Matrix<float,4,1,2,4,1>_> @ 14f067f80

float __thiscall
Eigen::MatrixBase<Eigen::Matrix<float,4,1,2,4,1>_>::dot<Eigen::Matrix<float,4,1,2,4,1>_>
          (MatrixBase<Eigen::Matrix<float,4,1,2,4,1>_> *this,
          MatrixBase<Eigen::Matrix<float,4,1,2,4,1>_> *param_1)

{
  return *(float *)(param_1 + 8) * *(float *)(this + 8) + *(float *)param_1 * *(float *)this +
         *(float *)(param_1 + 0xc) * *(float *)(this + 0xc) +
         *(float *)(param_1 + 4) * *(float *)(this + 4);
}

// maxCoeff<0> @ 14f067fb0

float __thiscall
Eigen::
DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,-1,1,0>_const_>_>
::maxCoeff<0>(DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>_>
              *this)

{
  float fVar1;
  scalar_max_op<float,float,0> local_res8 [32];
  redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>_>
  local_28;
  
  local_28._8_8_ = *(undefined8 *)(this + 8);
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_max_op<float,float,0>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,-1,1,0>_const_>_>,3,0>
          ::
          run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>_>
                    (&local_28,local_res8,
                     (CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>
                      *)this);
  return fVar1;
}

// maxCoeff<0> @ 14f067fe0

float __thiscall
Eigen::
DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,-1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>
::maxCoeff<0>(DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>
              *this)

{
  float fVar1;
  scalar_max_op<float,float,0> local_res8 [32];
  redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>
  local_28;
  
  local_28._8_8_ = **(undefined8 **)(this + 8);
  local_28._24_8_ = (*(undefined8 **)(this + 8))[1];
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_max_op<float,float,0>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,-1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>,3,0>
          ::
          run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>
                    (&local_28,local_res8,
                     (CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>
                      *)this);
  return fVar1;
}

// redux<Eigen::internal::scalar_max_op<float,float,0>_> @ 14f068020

float __thiscall
Eigen::
DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,-1,1,0>_const_>_>
::redux<Eigen::internal::scalar_max_op<float,float,0>_>
          (DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>_>
           *this,scalar_max_op<float,float,0> *param_1)

{
  float fVar1;
  redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>_>
  local_28;
  
  local_28._8_8_ = *(undefined8 *)(this + 8);
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_max_op<float,float,0>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,-1,1,0>_const_>_>,3,0>
          ::
          run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>_>
                    (&local_28,param_1,
                     (CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>
                      *)this);
  return fVar1;
}

// redux<Eigen::internal::scalar_max_op<float,float,0>_> @ 14f068050

float __thiscall
Eigen::
DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,-1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>
::redux<Eigen::internal::scalar_max_op<float,float,0>_>
          (DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>
           *this,scalar_max_op<float,float,0> *param_1)

{
  float fVar1;
  redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>
  local_28;
  
  local_28._8_8_ = **(undefined8 **)(this + 8);
  local_28._24_8_ = (*(undefined8 **)(this + 8))[1];
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_max_op<float,float,0>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,-1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>,3,0>
          ::
          run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>
                    (&local_28,param_1,
                     (CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>
                      *)this);
  return fVar1;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14f068090

float __thiscall
Eigen::
DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Matrix<float,4,1,2,4,1>_const_,Eigen::Matrix<float,4,1,2,4,1>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Matrix<float,4,1,2,4,1>_const_,Eigen::Matrix<float,4,1,2,4,1>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = *(float **)(this + 0x10);
  pfVar2 = *(float **)(this + 8);
  return pfVar1[2] * pfVar2[2] + *pfVar1 * *pfVar2 + pfVar1[3] * pfVar2[3] + pfVar1[1] * pfVar2[1];
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14f0680c0

float __thiscall
Eigen::
DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float *pfVar1;
  
  pfVar1 = *(float **)(this + 8);
  return pfVar1[1] * pfVar1[1] + pfVar1[2] * pfVar1[2] + *pfVar1 * *pfVar1;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14f0680f0

float __thiscall
Eigen::
DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,-1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,-1,1,0,3,1>_const_>_const_>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,3,1>_const_>_const_>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float fVar1;
  redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,3,1>_const_>_const_>_const_>_>
  local_38;
  
  local_38._16_8_ = *(undefined8 *)(this + 0x10);
  local_38._32_4_ = *(undefined4 *)(this + 0x84);
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,-1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,-1,1,0,3,1>_const_>_const_>_const_>_>,3,0>
          ::
          run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,3,1>_const_>_const_>_const_>_>
                    (&local_38,param_1,
                     (CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,3,1>_const_>_const_>_const_>
                      *)this);
  return fVar1;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14f068130

float __thiscall
Eigen::
DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,-1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,-1,1,0,4096,1>_const_>_const_>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,4096,1>_const_>_const_>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float fVar1;
  redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,4096,1>_const_>_const_>_const_>_>
  local_38;
  
  local_38._40_4_ = *(undefined4 *)(this + 0x2c);
  local_38._16_8_ = **(undefined8 **)(this + 0x10);
  local_38._32_8_ = (*(undefined8 **)(this + 0x10))[1];
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,-1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,-1,1,0,4096,1>_const_>_const_>_const_>_>,3,0>
          ::
          run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,4096,1>_const_>_const_>_const_>_>
                    (&local_38,param_1,
                     (CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,4096,1>_const_>_const_>_const_>
                      *)this);
  return fVar1;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14f068170

float __thiscall
Eigen::
DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::Matrix<float,4,1,2,4,1>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::Matrix<float,4,1,2,4,1>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float *pfVar1;
  
  pfVar1 = *(float **)(this + 8);
  return pfVar1[2] * pfVar1[2] + *pfVar1 * *pfVar1 + pfVar1[3] * pfVar1[3] + pfVar1[1] * pfVar1[1];
}

// run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,-1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,-1,1,0,3,1>_const_>_const_>_const_>_> @ 14f0681a0

float __cdecl
Eigen::internal::
redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,-1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,-1,1,0,3,1>_const_>_const_>_const_>_>,3,0>
::
run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,3,1>_const_>_const_>_const_>_>
          (redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,3,1>_const_>_const_>_const_>_>
           *param_1,scalar_sum_op<float,float> *param_2,
          CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,3,1>_const_>_const_>_const_>
          *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar12 = (param_3->m_xpr).m_rhs.m_rows.m_value;
  uVar10 = (uint)(lVar12 >> 0x3f);
  fVar4 = *(float *)&param_1->field_0x20;
  pfVar8 = *(float **)&param_1->field_0x10;
  lVar5 = (longlong)(lVar12 + (ulonglong)(uVar10 & 7)) >> 3;
  lVar9 = lVar5 * 8;
  uVar11 = (ulonglong)(uVar10 & 3) + lVar12 & 0xfffffffffffffffc;
  if (uVar11 == 0) {
    lVar9 = 1;
    fVar17 = fVar4 * *pfVar8 * fVar4 * *pfVar8;
    if (1 < lVar12) {
      if (3 < lVar12 + -1) {
        pfVar7 = pfVar8 + 3;
        lVar5 = (lVar12 - 5U >> 2) + 1;
        lVar9 = lVar5 * 4 + 1;
        do {
          pfVar3 = pfVar7 + -2;
          pfVar1 = pfVar7 + -1;
          fVar18 = *pfVar7;
          pfVar2 = pfVar7 + 1;
          pfVar7 = pfVar7 + 4;
          fVar17 = fVar17 + fVar4 * *pfVar3 * fVar4 * *pfVar3 + fVar4 * *pfVar1 * fVar4 * *pfVar1 +
                   fVar4 * fVar18 * fVar4 * fVar18 + fVar4 * *pfVar2 * fVar4 * *pfVar2;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        if (lVar12 <= lVar9) {
          return fVar17;
        }
      }
      pfVar8 = pfVar8 + lVar9;
      lVar12 = lVar12 - lVar9;
      do {
        fVar18 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        fVar17 = fVar17 + fVar4 * fVar18 * fVar4 * fVar18;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  else {
    fVar17 = *pfVar8 * fVar4 * *pfVar8 * fVar4;
    fVar18 = pfVar8[1] * fVar4 * pfVar8[1] * fVar4;
    fVar19 = pfVar8[2] * fVar4 * pfVar8[2] * fVar4;
    fVar20 = pfVar8[3] * fVar4 * pfVar8[3] * fVar4;
    if (4 < (longlong)uVar11) {
      lVar6 = 8;
      fVar13 = pfVar8[4] * fVar4 * pfVar8[4] * fVar4;
      fVar14 = pfVar8[5] * fVar4 * pfVar8[5] * fVar4;
      fVar15 = pfVar8[6] * fVar4 * pfVar8[6] * fVar4;
      fVar16 = pfVar8[7] * fVar4 * pfVar8[7] * fVar4;
      if (8 < lVar9) {
        do {
          pfVar7 = pfVar8 + lVar6;
          pfVar3 = pfVar8 + lVar6 + 4;
          lVar6 = lVar6 + 8;
          fVar17 = fVar17 + fVar4 * *pfVar7 * fVar4 * *pfVar7;
          fVar18 = fVar18 + fVar4 * pfVar7[1] * fVar4 * pfVar7[1];
          fVar19 = fVar19 + fVar4 * pfVar7[2] * fVar4 * pfVar7[2];
          fVar20 = fVar20 + fVar4 * pfVar7[3] * fVar4 * pfVar7[3];
          fVar13 = fVar13 + *pfVar3 * fVar4 * *pfVar3 * fVar4;
          fVar14 = fVar14 + pfVar3[1] * fVar4 * pfVar3[1] * fVar4;
          fVar15 = fVar15 + pfVar3[2] * fVar4 * pfVar3[2] * fVar4;
          fVar16 = fVar16 + pfVar3[3] * fVar4 * pfVar3[3] * fVar4;
        } while (lVar6 < lVar9);
      }
      fVar17 = fVar17 + fVar13;
      fVar18 = fVar18 + fVar14;
      fVar19 = fVar19 + fVar15;
      fVar20 = fVar20 + fVar16;
      if (lVar9 < (longlong)uVar11) {
        pfVar7 = pfVar8 + lVar5 * 8;
        fVar17 = fVar17 + *pfVar7 * fVar4 * *pfVar7 * fVar4;
        fVar18 = fVar18 + pfVar7[1] * fVar4 * pfVar7[1] * fVar4;
        fVar19 = fVar19 + pfVar7[2] * fVar4 * pfVar7[2] * fVar4;
        fVar20 = fVar20 + pfVar7[3] * fVar4 * pfVar7[3] * fVar4;
      }
    }
    fVar17 = fVar19 + fVar17 + fVar20 + fVar18;
    if ((longlong)uVar11 < lVar12) {
      if (3 < (longlong)(lVar12 - uVar11)) {
        pfVar7 = pfVar8 + uVar11 + 2;
        lVar9 = ((lVar12 - uVar11) - 4 >> 2) + 1;
        uVar11 = uVar11 + lVar9 * 4;
        do {
          pfVar3 = pfVar7 + -2;
          pfVar1 = pfVar7 + -1;
          fVar18 = *pfVar7;
          pfVar2 = pfVar7 + 1;
          pfVar7 = pfVar7 + 4;
          fVar17 = fVar17 + fVar4 * *pfVar3 * fVar4 * *pfVar3 + fVar4 * *pfVar1 * fVar4 * *pfVar1 +
                   fVar4 * fVar18 * fVar4 * fVar18 + fVar4 * *pfVar2 * fVar4 * *pfVar2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        if (lVar12 <= (longlong)uVar11) {
          return fVar17;
        }
      }
      pfVar8 = pfVar8 + uVar11;
      lVar12 = lVar12 - uVar11;
      do {
        fVar18 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        fVar17 = fVar17 + fVar4 * fVar18 * fVar4 * fVar18;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      return fVar17;
    }
  }
  return fVar17;
}

// run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,-1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,-1,1,0,4096,1>_const_>_const_>_const_>_> @ 14f0683e0

float __cdecl
Eigen::internal::
redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,-1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,-1,1,0,4096,1>_const_>_const_>_const_>_>,3,0>
::
run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,4096,1>_const_>_const_>_const_>_>
          (redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,4096,1>_const_>_const_>_const_>_>
           *param_1,scalar_sum_op<float,float> *param_2,
          CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,4096,1>_const_>_const_>_const_>
          *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar12 = (param_3->m_xpr).m_rhs.m_rows.m_value;
  uVar10 = (uint)(lVar12 >> 0x3f);
  fVar4 = *(float *)&param_1->field_0x28;
  pfVar8 = *(float **)&param_1->field_0x10;
  lVar5 = (longlong)(lVar12 + (ulonglong)(uVar10 & 7)) >> 3;
  lVar9 = lVar5 * 8;
  uVar11 = (ulonglong)(uVar10 & 3) + lVar12 & 0xfffffffffffffffc;
  if (uVar11 == 0) {
    lVar9 = 1;
    fVar17 = fVar4 * *pfVar8 * fVar4 * *pfVar8;
    if (1 < lVar12) {
      if (3 < lVar12 + -1) {
        pfVar7 = pfVar8 + 3;
        lVar5 = (lVar12 - 5U >> 2) + 1;
        lVar9 = lVar5 * 4 + 1;
        do {
          pfVar3 = pfVar7 + -2;
          pfVar1 = pfVar7 + -1;
          fVar18 = *pfVar7;
          pfVar2 = pfVar7 + 1;
          pfVar7 = pfVar7 + 4;
          fVar17 = fVar17 + fVar4 * *pfVar3 * fVar4 * *pfVar3 + fVar4 * *pfVar1 * fVar4 * *pfVar1 +
                   fVar4 * fVar18 * fVar4 * fVar18 + fVar4 * *pfVar2 * fVar4 * *pfVar2;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        if (lVar12 <= lVar9) {
          return fVar17;
        }
      }
      pfVar8 = pfVar8 + lVar9;
      lVar12 = lVar12 - lVar9;
      do {
        fVar18 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        fVar17 = fVar17 + fVar4 * fVar18 * fVar4 * fVar18;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  else {
    fVar17 = *pfVar8 * fVar4 * *pfVar8 * fVar4;
    fVar18 = pfVar8[1] * fVar4 * pfVar8[1] * fVar4;
    fVar19 = pfVar8[2] * fVar4 * pfVar8[2] * fVar4;
    fVar20 = pfVar8[3] * fVar4 * pfVar8[3] * fVar4;
    if (4 < (longlong)uVar11) {
      lVar6 = 8;
      fVar13 = pfVar8[4] * fVar4 * pfVar8[4] * fVar4;
      fVar14 = pfVar8[5] * fVar4 * pfVar8[5] * fVar4;
      fVar15 = pfVar8[6] * fVar4 * pfVar8[6] * fVar4;
      fVar16 = pfVar8[7] * fVar4 * pfVar8[7] * fVar4;
      if (8 < lVar9) {
        do {
          pfVar7 = pfVar8 + lVar6;
          pfVar3 = pfVar8 + lVar6 + 4;
          lVar6 = lVar6 + 8;
          fVar17 = fVar17 + fVar4 * *pfVar7 * fVar4 * *pfVar7;
          fVar18 = fVar18 + fVar4 * pfVar7[1] * fVar4 * pfVar7[1];
          fVar19 = fVar19 + fVar4 * pfVar7[2] * fVar4 * pfVar7[2];
          fVar20 = fVar20 + fVar4 * pfVar7[3] * fVar4 * pfVar7[3];
          fVar13 = fVar13 + *pfVar3 * fVar4 * *pfVar3 * fVar4;
          fVar14 = fVar14 + pfVar3[1] * fVar4 * pfVar3[1] * fVar4;
          fVar15 = fVar15 + pfVar3[2] * fVar4 * pfVar3[2] * fVar4;
          fVar16 = fVar16 + pfVar3[3] * fVar4 * pfVar3[3] * fVar4;
        } while (lVar6 < lVar9);
      }
      fVar17 = fVar17 + fVar13;
      fVar18 = fVar18 + fVar14;
      fVar19 = fVar19 + fVar15;
      fVar20 = fVar20 + fVar16;
      if (lVar9 < (longlong)uVar11) {
        pfVar7 = pfVar8 + lVar5 * 8;
        fVar17 = fVar17 + *pfVar7 * fVar4 * *pfVar7 * fVar4;
        fVar18 = fVar18 + pfVar7[1] * fVar4 * pfVar7[1] * fVar4;
        fVar19 = fVar19 + pfVar7[2] * fVar4 * pfVar7[2] * fVar4;
        fVar20 = fVar20 + pfVar7[3] * fVar4 * pfVar7[3] * fVar4;
      }
    }
    fVar17 = fVar19 + fVar17 + fVar20 + fVar18;
    if ((longlong)uVar11 < lVar12) {
      if (3 < (longlong)(lVar12 - uVar11)) {
        pfVar7 = pfVar8 + uVar11 + 2;
        lVar9 = ((lVar12 - uVar11) - 4 >> 2) + 1;
        uVar11 = uVar11 + lVar9 * 4;
        do {
          pfVar3 = pfVar7 + -2;
          pfVar1 = pfVar7 + -1;
          fVar18 = *pfVar7;
          pfVar2 = pfVar7 + 1;
          pfVar7 = pfVar7 + 4;
          fVar17 = fVar17 + fVar4 * *pfVar3 * fVar4 * *pfVar3 + fVar4 * *pfVar1 * fVar4 * *pfVar1 +
                   fVar4 * fVar18 * fVar4 * fVar18 + fVar4 * *pfVar2 * fVar4 * *pfVar2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        if (lVar12 <= (longlong)uVar11) {
          return fVar17;
        }
      }
      pfVar8 = pfVar8 + uVar11;
      lVar12 = lVar12 - uVar11;
      do {
        fVar18 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        fVar17 = fVar17 + fVar4 * fVar18 * fVar4 * fVar18;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      return fVar17;
    }
  }
  return fVar17;
}

// run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,-1,1,0>_const_>_> @ 14f068620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl
Eigen::internal::
redux_impl<Eigen::internal::scalar_max_op<float,float,0>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,-1,1,0>_const_>_>,3,0>
::
run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>_>
          (redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>_>
           *param_1,scalar_max_op<float,float,0> *param_2,
          CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>
          *param_3)

{
  uint *puVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_38;
  lVar11 = *(longlong *)&(param_3->m_xpr).field_0x8;
  puVar5 = *(uint **)&param_1->field_0x8;
  uVar6 = (uint)(lVar11 >> 0x3f);
  uVar7 = (ulonglong)(uVar6 & 7) + lVar11 & 0xfffffffffffffff8;
  uVar9 = (ulonglong)(uVar6 & 3) + lVar11 & 0xfffffffffffffffc;
  if (uVar9 == 0) {
    local_28._0_4_ = *puVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff;
    if (1 < lVar11) {
      lVar11 = lVar11 + -1;
      do {
        puVar5 = puVar5 + 1;
        fVar2 = (float)(*puVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        if ((float)(*puVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= (float)local_28._0_4_) {
          fVar2 = (float)local_28._0_4_;
        }
        lVar11 = lVar11 + -1;
        local_28._0_4_ = fVar2;
      } while (lVar11 != 0);
      return fVar2;
    }
  }
  else {
    local_28._0_4_ = __xmm_7fffffff7fffffff7fffffff7fffffff & *puVar5;
    local_28._4_4_ = _UNK_15061cc74 & puVar5[1];
    local_28._8_4_ = _UNK_15061cc78 & puVar5[2];
    local_28._12_4_ = _UNK_15061cc7c & puVar5[3];
    if (4 < (longlong)uVar9) {
      auVar13._0_4_ = puVar5[4] & __xmm_7fffffff7fffffff7fffffff7fffffff;
      auVar13._4_4_ = puVar5[5] & _UNK_15061cc74;
      auVar13._8_4_ = puVar5[6] & _UNK_15061cc78;
      auVar13._12_4_ = puVar5[7] & _UNK_15061cc7c;
      if (8 < (longlong)uVar7) {
        lVar3 = (uVar7 - 9 >> 3) + 1;
        puVar1 = puVar5;
        do {
          auVar14._0_4_ = __xmm_7fffffff7fffffff7fffffff7fffffff & puVar1[8];
          auVar14._4_4_ = _UNK_15061cc74 & puVar1[9];
          auVar14._8_4_ = _UNK_15061cc78 & puVar1[10];
          auVar14._12_4_ = _UNK_15061cc7c & puVar1[0xb];
          local_28 = maxps(auVar14,local_28);
          auVar12._0_4_ = puVar1[0xc] & __xmm_7fffffff7fffffff7fffffff7fffffff;
          auVar12._4_4_ = puVar1[0xd] & _UNK_15061cc74;
          auVar12._8_4_ = puVar1[0xe] & _UNK_15061cc78;
          auVar12._12_4_ = puVar1[0xf] & _UNK_15061cc7c;
          auVar13 = maxps(auVar12,auVar13);
          lVar3 = lVar3 + -1;
          puVar1 = puVar1 + 8;
        } while (lVar3 != 0);
      }
      local_28 = maxps(auVar13,local_28);
      if ((longlong)uVar7 < (longlong)uVar9) {
        puVar1 = puVar5 + uVar7;
        auVar15._0_4_ = *puVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff;
        auVar15._4_4_ = puVar1[1] & _UNK_15061cc74;
        auVar15._8_4_ = puVar1[2] & _UNK_15061cc78;
        auVar15._12_4_ = puVar1[3] & _UNK_15061cc7c;
        local_28 = maxps(auVar15,local_28);
      }
    }
    uVar7 = 2;
    do {
      pfVar8 = (float *)local_28;
      uVar10 = uVar7;
      do {
        pfVar4 = pfVar8;
        if (*pfVar8 < pfVar8[uVar7]) {
          pfVar4 = pfVar8 + uVar7;
        }
        *pfVar8 = *pfVar4;
        pfVar8 = pfVar8 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      uVar7 = uVar7 >> 1;
    } while (uVar7 != 0);
    if ((longlong)uVar9 < lVar11) {
      puVar5 = puVar5 + uVar9;
      lVar11 = lVar11 - uVar9;
      do {
        uVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        fVar2 = (float)(uVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        if ((float)(uVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= (float)local_28._0_4_) {
          fVar2 = (float)local_28._0_4_;
        }
        lVar11 = lVar11 + -1;
        local_28._0_4_ = fVar2;
      } while (lVar11 != 0);
      return fVar2;
    }
  }
  return (float)local_28._0_4_;
}

// run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,-1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_> @ 14f0687e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl
Eigen::internal::
redux_impl<Eigen::internal::scalar_max_op<float,float,0>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,-1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>,3,0>
::
run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>
          (redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>
           *param_1,scalar_max_op<float,float,0> *param_2,
          CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>
          *param_3)

{
  uint *puVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_38;
  puVar5 = *(uint **)&param_1->field_0x8;
  lVar11 = param_3->m_xpr->_padding_;
  uVar6 = (uint)(lVar11 >> 0x3f);
  uVar7 = (ulonglong)(uVar6 & 7) + lVar11 & 0xfffffffffffffff8;
  uVar9 = (ulonglong)(uVar6 & 3) + lVar11 & 0xfffffffffffffffc;
  if (uVar9 == 0) {
    local_28._0_4_ = *puVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff;
    if (1 < lVar11) {
      lVar11 = lVar11 + -1;
      do {
        puVar5 = puVar5 + 1;
        fVar2 = (float)(*puVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        if ((float)(*puVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= (float)local_28._0_4_) {
          fVar2 = (float)local_28._0_4_;
        }
        lVar11 = lVar11 + -1;
        local_28._0_4_ = fVar2;
      } while (lVar11 != 0);
      return fVar2;
    }
  }
  else {
    local_28._0_4_ = __xmm_7fffffff7fffffff7fffffff7fffffff & *puVar5;
    local_28._4_4_ = _UNK_15061cc74 & puVar5[1];
    local_28._8_4_ = _UNK_15061cc78 & puVar5[2];
    local_28._12_4_ = _UNK_15061cc7c & puVar5[3];
    if (4 < (longlong)uVar9) {
      auVar13._0_4_ = puVar5[4] & __xmm_7fffffff7fffffff7fffffff7fffffff;
      auVar13._4_4_ = puVar5[5] & _UNK_15061cc74;
      auVar13._8_4_ = puVar5[6] & _UNK_15061cc78;
      auVar13._12_4_ = puVar5[7] & _UNK_15061cc7c;
      if (8 < (longlong)uVar7) {
        lVar3 = (uVar7 - 9 >> 3) + 1;
        puVar1 = puVar5;
        do {
          auVar14._0_4_ = __xmm_7fffffff7fffffff7fffffff7fffffff & puVar1[8];
          auVar14._4_4_ = _UNK_15061cc74 & puVar1[9];
          auVar14._8_4_ = _UNK_15061cc78 & puVar1[10];
          auVar14._12_4_ = _UNK_15061cc7c & puVar1[0xb];
          local_28 = maxps(auVar14,local_28);
          auVar12._0_4_ = puVar1[0xc] & __xmm_7fffffff7fffffff7fffffff7fffffff;
          auVar12._4_4_ = puVar1[0xd] & _UNK_15061cc74;
          auVar12._8_4_ = puVar1[0xe] & _UNK_15061cc78;
          auVar12._12_4_ = puVar1[0xf] & _UNK_15061cc7c;
          auVar13 = maxps(auVar12,auVar13);
          lVar3 = lVar3 + -1;
          puVar1 = puVar1 + 8;
        } while (lVar3 != 0);
      }
      local_28 = maxps(auVar13,local_28);
      if ((longlong)uVar7 < (longlong)uVar9) {
        puVar1 = puVar5 + uVar7;
        auVar15._0_4_ = *puVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff;
        auVar15._4_4_ = puVar1[1] & _UNK_15061cc74;
        auVar15._8_4_ = puVar1[2] & _UNK_15061cc78;
        auVar15._12_4_ = puVar1[3] & _UNK_15061cc7c;
        local_28 = maxps(auVar15,local_28);
      }
    }
    uVar7 = 2;
    do {
      pfVar8 = (float *)local_28;
      uVar10 = uVar7;
      do {
        pfVar4 = pfVar8;
        if (*pfVar8 < pfVar8[uVar7]) {
          pfVar4 = pfVar8 + uVar7;
        }
        *pfVar8 = *pfVar4;
        pfVar8 = pfVar8 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      uVar7 = uVar7 >> 1;
    } while (uVar7 != 0);
    if ((longlong)uVar9 < lVar11) {
      puVar5 = puVar5 + uVar9;
      lVar11 = lVar11 - uVar9;
      do {
        uVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        fVar2 = (float)(uVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        if ((float)(uVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= (float)local_28._0_4_) {
          fVar2 = (float)local_28._0_4_;
        }
        lVar11 = lVar11 + -1;
        local_28._0_4_ = fVar2;
      } while (lVar11 != 0);
      return fVar2;
    }
  }
  return (float)local_28._0_4_;
}

// slerp<Eigen::Quaternion<float,2>_> @ 14f0689a0

Quaternion<float,0> * __thiscall
Eigen::QuaternionBase<Eigen::Quaternion<float,2>_>::slerp<Eigen::Quaternion<float,2>_>
          (QuaternionBase<Eigen::Quaternion<float,2>_> *this,
          Quaternion<float,0> *__return_storage_ptr__,float *param_1,
          QuaternionBase<Eigen::Quaternion<float,2>_> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar9 = __real_3f800000;
  fVar12 = *param_1;
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_2 + 0xc);
  fVar5 = *(float *)this;
  fVar6 = *(float *)(this + 4);
  fVar7 = *(float *)(this + 8);
  fVar8 = *(float *)(this + 0xc);
  fVar13 = __real_3f800000 - fVar12;
  fVar14 = fVar7 * fVar3 + fVar5 * fVar1 + fVar8 * fVar4 + fVar6 * fVar2;
  fVar10 = (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar10 < __real_3f7ffffe) {
    fVar10 = acosf(fVar10);
    fVar11 = sinf(fVar10);
    fVar13 = sinf(fVar10 * fVar13);
    fVar13 = fVar13 * (fVar9 / fVar11);
    fVar12 = sinf(fVar10 * fVar12);
    fVar12 = fVar12 * (fVar9 / fVar11);
  }
  if (fVar14 < 0.0) {
    fVar12 = (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000);
  }
  *(float *)&__return_storage_ptr__->m_coeffs = fVar13 * fVar5 + fVar12 * fVar1;
  *(float *)&(__return_storage_ptr__->m_coeffs).field_0x4 = fVar13 * fVar6 + fVar12 * fVar2;
  *(float *)&(__return_storage_ptr__->m_coeffs).field_0x8 = fVar13 * fVar7 + fVar12 * fVar3;
  *(float *)&(__return_storage_ptr__->m_coeffs).field_0xc = fVar13 * fVar8 + fVar12 * fVar4;
  return __return_storage_ptr__;
}

// stable_norm_impl<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_> @ 14f068ad0

float __cdecl
Eigen::internal::stable_norm_impl<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_>
          (Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0> *param_1,void *param_2)

{
  float local_res18 [2];
  float local_res20 [2];
  float local_18 [6];
  
  local_res20[0] = 0.0;
  local_18[0] = 1.0;
  local_res18[0] = 0.0;
  stable_norm_impl_inner_step<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>,float>
            (param_1,local_res18,local_res20,local_18);
  return SQRT(local_res18[0]) * local_res20[0];
}

// stable_norm_impl_inner_step<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>,float> @ 14f068b20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Eigen::internal::
stable_norm_impl_inner_step<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>,float>
          (Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0> *param_1,float *param_2,float *param_3
          ,float *param_4)

{
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *pRVar1;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *pRVar2;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *pRVar3;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *pRVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  uint uVar9;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *pRVar10;
  longlong lVar11;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *pRVar12;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *pRVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_41f8 [32];
  scalar_max_op<float,float,0> local_41d8 [8];
  undefined1 local_41d0 [16];
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *local_41c0;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *pRStack_41b8;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *local_41b0;
  float fStack_41a8;
  undefined4 uStack_41a4;
  undefined1 local_41a0 [44];
  float fStack_4174;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *pRStack_4170;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *local_4168;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *pRStack_4160;
  undefined8 local_4158;
  undefined8 local_4150;
  undefined8 uStack_4148;
  CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>
  local_4140;
  undefined1 local_4118 [40];
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *local_40f0;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *pRStack_40e8;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *local_40e0;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *pRStack_40d8;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *local_40d0;
  Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *pRStack_40c8;
  undefined8 local_40c0;
  undefined8 uStack_40b8;
  undefined8 uStack_40b0;
  variable_if_dynamic<__int64,_1> local_40a0;
  scalar_constant_op<float> local_4094;
  undefined8 local_f8;
  ulonglong local_e8;
  
  uVar8 = local_41a0._16_8_;
  fVar7 = __real_00200000;
  fVar6 = __real_7f7fffff;
  fVar5 = __real_3f800000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_41f8;
  pRVar13 = *(Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> **)param_1;
  pRVar10 = *(Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> **)
             &param_1->field_0x8;
  pRVar1 = *(Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> **)
            &param_1->field_0x10;
  pRVar2 = *(Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> **)
            &param_1->field_0x18;
  local_41b0 = *(Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> **)
                &param_1->field_0x20;
  _fStack_41a8 = *(undefined8 *)&param_1->field_0x28;
  pRVar12 = (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)&DAT_00000003
  ;
  local_41c0 = pRVar1;
  if (((ulonglong)pRVar13 & 3) == 0) {
    uVar9 = -(int)((ulonglong)pRVar13 >> 2) & 3;
    if (uVar9 < 3) {
      pRVar12 = (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)
                (ulonglong)uVar9;
    }
    if (pRVar12 == (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)0x0)
    goto LAB_14f068d7f;
  }
  pRVar3 = *(Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> **)
            &param_1->field_0x20;
  pRVar4 = *(Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> **)
            &param_1->field_0x28;
  local_4158 = 0;
  uStack_4148 = 4;
  pRStack_40c8 = (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)0x0;
  local_40c0 = local_4150;
  uStack_40b8 = 4;
  local_4118._24_8_ = local_41a0._16_8_;
  pRStack_41b8 = pRVar2;
  local_41a0._0_8_ = pRVar13;
  local_41a0._8_8_ = pRVar12;
  local_41a0._24_8_ = pRVar13;
  local_41a0._32_8_ = pRVar10;
  unique0x10000adc = pRVar1;
  pRStack_4170 = pRVar2;
  local_4168 = pRVar3;
  pRStack_4160 = pRVar4;
  local_4140.m_xpr = pRVar13;
  local_4118._8_8_ = pRVar13;
  local_4118._16_8_ = pRVar12;
  local_4118._32_8_ = pRVar13;
  local_40f0 = pRVar10;
  pRStack_40e8 = pRVar1;
  local_40e0 = pRVar2;
  pRStack_40d8 = pRVar3;
  local_40d0 = pRVar4;
  fVar14 = redux_impl<Eigen::internal::scalar_max_op<float,float,0>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,-1,1,0>_const_>_>,3,0>
           ::
           run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>_>
                     ((redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>_>
                       *)&local_4140,local_41d8,
                      (CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_>
                       *)local_4118);
  fVar15 = *param_3;
  if (fVar15 < fVar14) {
    fVar16 = fVar5 / fVar14;
    *param_2 = fVar16 * fVar15 * fVar16 * fVar15 * *param_2;
    if (fVar16 <= fVar6) {
      if (fVar14 <= fVar6) {
        *param_3 = fVar14;
        *param_4 = fVar16;
        fVar15 = *param_3;
      }
      else {
        *param_4 = 1.0;
        *param_3 = fVar14;
        fVar15 = fVar14;
      }
    }
    else {
      *param_4 = 3.4028235e+38;
      *param_3 = 2.938736e-39;
      fVar15 = fVar7;
    }
  }
  if (0.0 < fVar15) {
    local_4094.m_other = *param_4;
    local_41b0 = (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)
                 CONCAT44(local_41b0._4_4_,local_4094.m_other);
    local_4118._32_8_ = uVar8;
    local_40c0 = 0;
    uStack_40b8 = local_4150;
    uStack_40b0 = 4;
    local_41c0 = pRVar13;
    local_4118._16_8_ = pRVar13;
    local_4118._24_8_ = pRVar12;
    local_40f0 = pRVar13;
    pRStack_40e8 = pRVar10;
    local_40e0 = pRVar1;
    pRStack_40d8 = pRVar2;
    local_40d0 = pRVar3;
    pRStack_40c8 = pRVar4;
    local_40a0.m_value = (long64)pRVar12;
    fVar15 = redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,-1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,-1,1,0,3,1>_const_>_const_>_const_>_>,3,0>
             ::
             run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,3,1>_const_>_const_>_const_>_>
                       ((redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,3,1>_const_>_const_>_const_>_>
                         *)local_41d0,(scalar_sum_op<float,float> *)local_41d8,
                        (CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Block<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>_const_,_1,1,0>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,3,1>_const_>_const_>_const_>
                         *)local_4118);
    *param_2 = fVar15 + *param_2;
  }
LAB_14f068d7f:
  if (pRVar12 < (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)
                &DAT_00000003) {
    pRVar13 = (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)
              ((longlong)&pRVar13->_padding_ + (longlong)pRVar12 * 4);
    pRVar10 = (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)
              (3 - (longlong)pRVar12);
    lVar11 = (2U - (longlong)pRVar12 >> 0xc) + 1;
    do {
      local_f8 = 0;
      local_4140.m_xpr =
           (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)local_4118;
      pRStack_41b8 = (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)
                     0x1000;
      if ((longlong)pRVar10 < 0x1000) {
        pRStack_41b8 = pRVar10;
      }
      local_41d0._8_8_ = pRVar13;
      local_4118._0_8_ = pRVar13;
      local_4118._8_8_ = pRStack_41b8;
      fVar14 = redux_impl<Eigen::internal::scalar_max_op<float,float,0>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,-1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>,3,0>
               ::
               run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>
                         ((redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_>_>
                           *)local_41d0,local_41d8,&local_4140);
      fVar15 = *param_3;
      if (fVar15 < fVar14) {
        fVar16 = fVar5 / fVar14;
        *param_2 = fVar16 * fVar15 * fVar16 * fVar15 * *param_2;
        if (fVar16 <= fVar6) {
          if (fVar14 <= fVar6) {
            *param_3 = fVar14;
            *param_4 = fVar16;
            fVar15 = *param_3;
          }
          else {
            *param_4 = 1.0;
            *param_3 = fVar14;
            fVar15 = fVar14;
          }
        }
        else {
          *param_4 = 3.4028235e+38;
          *param_3 = 2.938736e-39;
          fVar15 = fVar7;
        }
      }
      if (0.0 < fVar15) {
        local_41a0._16_8_ = local_4118;
        stack0xffffffffffffbe88 =
             (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)
             CONCAT44(*param_4,local_41a0._40_4_);
        local_41a0._32_8_ = local_4118._8_8_;
        if ((Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)
            local_4118._8_8_ ==
            (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)0x0) {
          fVar15 = 0.0;
        }
        else {
          local_41b0 = (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)
                       local_4118._8_8_;
          local_41c0 = (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)
                       local_4118._0_8_;
          fStack_41a8 = *param_4;
          fVar15 = redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,-1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,-1,1,0,4096,1>_const_>_const_>_const_>_>,3,0>
                   ::
                   run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,4096,1>_const_>_const_>_const_>_>
                             ((redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,4096,1>_const_>_const_>_const_>_>
                               *)local_41d0,(scalar_sum_op<float,float> *)local_41d8,
                              (CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_>_const_,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,4096,1>_const_>_const_>_const_>
                               *)local_41a0);
        }
        *param_2 = fVar15 + *param_2;
      }
      pRVar13 = (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)
                &(pRVar13->m_object).field_0x3fe0;
      pRVar10 = (Ref<Eigen::Matrix<float,_1,1,0,4096,1>_const_,0,Eigen::InnerStride<1>_> *)
                &pRVar10[-1].m_object.field_0x3010;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// operator[] @ 14f068f20

ChannelView * __thiscall vraudio::AudioBuffer::operator[](AudioBuffer *this,ulong64 param_1)

{
  return (this->channel_views_)._Mypair._Myval2._Myfirst + param_1;
}

// operator[] @ 14f068f40

ChannelView * __thiscall vraudio::AudioBuffer::operator[](AudioBuffer *this,ulong64 param_1)

{
  return (this->channel_views_)._Mypair._Myval2._Myfirst + param_1;
}

// AngularDifferenceRad @ 14f068f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
vraudio::WorldRotation::AngularDifferenceRad(WorldRotation *this,WorldRotation *param_1)

{
  WorldRotation WVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_c8 [32];
  float local_a8;
  float local_a4;
  char local_a0 [8];
  float local_98 [2];
  float *local_90 [2];
  float *local_80;
  undefined8 local_78;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  WVar1 = *this;
  fVar10 = WVar1._12_4_;
  fVar16 = WVar1._8_4_;
  fVar9 = fVar16 * fVar16 + WVar1._0_4_ * WVar1._0_4_ + fVar10 * fVar10 + WVar1._4_4_ * WVar1._4_4_;
  if (fVar9 <= 0.0) {
    local_a0[0] = '\0';
    local_a0[1] = '\0';
    local_a0[2] = '\0';
    local_a0[3] = '\0';
    local_a0[4] = '\0';
    local_a0[5] = '\0';
    local_a0[6] = '\0';
    local_a0[7] = '\0';
    lVar6 = 0;
    do {
      lVar7 = lVar6 + 1;
      if (local_a0[lVar6] != *(char *)((longlong)local_98 + lVar6 + -4)) break;
      lVar6 = lVar7;
    } while (lVar7 != 4);
    local_48 = ZEXT816(0);
    fVar10 = 0.0;
    fVar9 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
  }
  else {
    auVar12._0_8_ = WVar1._0_8_ ^ 0x8000000080000000;
    auVar12._8_4_ = -fVar16;
    auVar12._12_4_ = fVar10;
    auVar8._4_4_ = fVar9;
    auVar8._0_4_ = fVar9;
    auVar8._8_4_ = fVar9;
    auVar8._12_4_ = fVar9;
    local_48 = divps(auVar12,auVar8);
    fVar10 = local_48._0_4_;
    fVar9 = local_48._4_4_;
    fVar16 = local_48._8_4_;
    fVar17 = local_48._12_4_;
  }
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)&param_1->field_0x4;
  fVar4 = *(float *)&param_1->field_0x8;
  fVar5 = *(float *)&param_1->field_0xc;
  fVar11 = local_48._0_4_;
  fVar13 = local_48._4_4_;
  fVar14 = local_48._8_4_;
  fVar15 = local_48._12_4_;
  fVar10 = fVar13 * fVar4 + fVar15 * fVar2 + (fVar5 * fVar10 - fVar14 * fVar3);
  fVar9 = fVar14 * fVar2 + fVar15 * fVar3 + (fVar5 * fVar9 - fVar11 * fVar4);
  fStack_58 = fVar11 * fVar3 + fVar15 * fVar4 + (fVar5 * fVar16 - fVar13 * fVar2);
  fStack_54 = -(fVar14 * fVar4 + fVar13 * fVar3) + (fVar5 * fVar17 - fVar11 * fVar2);
  _local_60 = CONCAT44(fVar9,fVar10);
  fVar10 = SQRT(fVar9 * fVar9 + fStack_58 * fStack_58 + fVar10 * fVar10);
  if (fVar10 < __real_34000000) {
    local_90[0] = &local_60;
    local_78 = 0;
    local_80 = &local_60;
    local_68 = 4;
    local_a4 = 0.0;
    local_98[0] = 1.0;
    local_a8 = 0.0;
    Eigen::internal::
    stable_norm_impl_inner_step<Eigen::Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0>,float>
              ((Block<Eigen::Matrix<float,4,1,2,4,1>_const_,3,1,0> *)local_90,&local_a8,&local_a4,
               local_98);
    fVar10 = SQRT(local_a8) * local_a4;
  }
  if (fVar10 == 0.0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = atan2f(fVar10,(float)((uint)fStack_54 & __xmm_7fffffff7fffffff7fffffff7fffffff));
    fVar10 = fVar10 + fVar10;
  }
  return fVar10;
}

// Process @ 14f069180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
vraudio::FoaRotator::Process
          (FoaRotator *this,WorldRotation *param_1,AudioBuffer *param_2,AudioBuffer *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  uint uVar10;
  bool bVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_128 [32];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    WorldRotation::WorldRotation(&kIdentityRotation);
    _Init_thread_footer(&::_TSS0);
  }
  fVar15 = WorldRotation::AngularDifferenceRad(&this->current_rotation_,&kIdentityRotation);
  fVar9 = __real_3c8efa35;
  if ((__real_3c8efa35 <= fVar15) ||
     (fVar15 = WorldRotation::AngularDifferenceRad(param_1,&kIdentityRotation), fVar9 <= fVar15)) {
    fVar15 = WorldRotation::AngularDifferenceRad(&this->current_rotation_,param_1);
    if (fVar9 <= fVar15) {
      WorldRotation::WorldRotation((WorldRotation *)&local_f8);
      uVar10 = __xmm_80000000800000008000000080000000;
      fVar9 = __real_3f800000;
      uVar12 = param_2->num_frames_;
      uVar14 = 0;
      if (uVar12 != 0) {
        do {
          uVar13 = uVar12 - uVar14;
          if (0x20 < uVar13) {
            uVar13 = 0x20;
          }
          fVar15 = *(float *)&this->current_rotation_;
          fVar1 = *(float *)&(this->current_rotation_).field_0x4;
          fVar2 = *(float *)&(this->current_rotation_).field_0x8;
          fVar3 = *(float *)&(this->current_rotation_).field_0xc;
          fVar4 = *(float *)param_1;
          fVar5 = *(float *)&param_1->field_0x4;
          fVar6 = *(float *)&param_1->field_0x8;
          fVar7 = *(float *)&param_1->field_0xc;
          fVar18 = (float)(uVar13 + uVar14) / (float)uVar12;
          fVar19 = fVar9 - fVar18;
          fVar20 = fVar2 * fVar6 + fVar15 * fVar4 + fVar3 * fVar7 + fVar1 * fVar5;
          fVar16 = (float)((uint)fVar20 & __xmm_7fffffff7fffffff7fffffff7fffffff);
          if (fVar16 < __real_3f7ffffe) {
            fVar16 = acosf(fVar16);
            fVar17 = sinf(fVar16);
            fVar17 = fVar9 / fVar17;
            fVar19 = sinf(fVar19 * fVar16);
            fVar19 = fVar19 * fVar17;
            fVar18 = sinf(fVar16 * fVar18);
            fVar18 = fVar18 * fVar17;
          }
          if (fVar20 < 0.0) {
            fVar18 = (float)((uint)fVar18 ^ uVar10);
          }
          local_f8 = fVar19 * fVar15 + fVar18 * fVar4;
          fStack_f4 = fVar19 * fVar1 + fVar18 * fVar5;
          fStack_f0 = fVar19 * fVar2 + fVar18 * fVar6;
          fStack_ec = fVar19 * fVar3 + fVar18 * fVar7;
          Rotate(this,(WorldRotation *)&local_f8,uVar14,uVar13,param_2,param_3);
          uVar12 = param_2->num_frames_;
          uVar14 = uVar14 + 0x20;
        } while (uVar14 < uVar12);
      }
      uVar8 = *(undefined8 *)&param_1->field_0x8;
      *(undefined8 *)&this->current_rotation_ = *(undefined8 *)param_1;
      *(undefined8 *)&(this->current_rotation_).field_0x8 = uVar8;
    }
    else {
      Rotate(this,&this->current_rotation_,0,param_2->num_frames_,param_2,param_3);
    }
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  return bVar11;
}

// Rotate @ 14f0694e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::FoaRotator::Rotate
          (FoaRotator *this,WorldRotation *param_1,ulong64 param_2,ulong64 param_3,
          AudioBuffer *param_4,AudioBuffer *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  ChannelView *pCVar7;
  ChannelView *pCVar8;
  ChannelView *pCVar9;
  ChannelView *pCVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_118 [32];
  ChannelView *local_f8;
  ChannelView *local_f0;
  ChannelView *local_e8;
  ChannelView *local_e0;
  ChannelView *local_d8;
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStack_118;
  pCVar7 = AudioBuffer::operator[](param_4,0);
  local_d8 = pCVar7;
  pCVar8 = AudioBuffer::operator[](param_4,1);
  local_f8 = AudioBuffer::operator[](param_4,2);
  local_f0 = AudioBuffer::operator[](param_4,3);
  pCVar9 = AudioBuffer::operator[](param_5,0);
  local_e8 = AudioBuffer::operator[](param_5,1);
  local_e0 = AudioBuffer::operator[](param_5,2);
  pCVar10 = AudioBuffer::operator[](param_5,3);
  uVar6 = __xmm_80000000800000008000000080000000;
  for (uVar11 = param_2; uVar11 < param_2 + param_3; uVar11 = uVar11 + 1) {
    fVar12 = local_f0->begin_itr_[uVar11];
    *(float *)&this->temp_audio_position_ = fVar12;
    fVar12 = (float)((uint)fVar12 ^ uVar6);
    fVar13 = pCVar8->begin_itr_[uVar11];
    *(float *)&(this->temp_audio_position_).field_0x4 = fVar13;
    fVar13 = (float)((uint)fVar13 ^ uVar6);
    fVar1 = local_f8->begin_itr_[uVar11];
    *(float *)&(this->temp_audio_position_).field_0x8 = fVar1;
    *(float *)&this->temp_world_position_ = fVar13;
    *(float *)&(this->temp_world_position_).field_0x4 = fVar1;
    *(float *)&(this->temp_world_position_).field_0x8 = fVar12;
    fVar1 = *(float *)param_1;
    fVar2 = *(float *)&param_1->field_0x4;
    fVar3 = *(float *)&param_1->field_0x8;
    fVar4 = *(float *)&(this->temp_world_position_).field_0x4;
    fVar5 = *(float *)&param_1->field_0xc;
    fVar16 = fVar1 * fVar4 - fVar2 * fVar13;
    fVar14 = fVar2 * fVar12 - fVar3 * fVar4;
    fVar16 = fVar16 + fVar16;
    fVar15 = fVar3 * fVar13 - fVar1 * fVar12;
    fVar14 = fVar14 + fVar14;
    fVar15 = fVar15 + fVar15;
    fVar12 = (fVar15 * fVar1 - fVar14 * fVar2) + fVar16 * fVar5 + fVar12;
    *(ulonglong *)&this->temp_rotated_world_position_ =
         CONCAT44((fVar14 * fVar3 - fVar16 * fVar1) + fVar15 * fVar5 + fVar4,
                  (fVar2 * fVar16 - fVar15 * fVar3) + fVar14 * fVar5 + fVar13);
    *(float *)&(this->temp_rotated_world_position_).field_0x8 = fVar12;
    fVar12 = (float)((uint)fVar12 ^ uVar6);
    *(float *)&this->temp_rotated_audio_position_ = fVar12;
    *(uint *)&(this->temp_rotated_audio_position_).field_0x4 =
         *(uint *)&this->temp_rotated_world_position_ ^ uVar6;
    *(undefined4 *)&(this->temp_rotated_audio_position_).field_0x8 =
         *(undefined4 *)&(this->temp_rotated_world_position_).field_0x4;
    pCVar10->begin_itr_[uVar11] = fVar12;
    local_e8->begin_itr_[uVar11] = *(float *)&(this->temp_rotated_audio_position_).field_0x4;
    local_e0->begin_itr_[uVar11] = *(float *)&(this->temp_rotated_audio_position_).field_0x8;
    pCVar7 = local_d8;
  }
  std::copy_n<float_const_*,unsigned___int64,float_*>
            (pCVar7->begin_itr_ + param_2,param_3,pCVar9->begin_itr_ + param_2);
  return;
}

