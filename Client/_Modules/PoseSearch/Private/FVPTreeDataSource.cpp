// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// GetDistance @ 14a8fa2d0

float __cdecl
UE::PoseSearch::FVPTreeDataSource::GetDistance
          (TArrayView<float_const_,int> *param_1,TArrayView<float_const_,int> *param_2)

{
  code *pcVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  scalar_sum_op<float,float> local_res8 [8];
  undefined1 local_a8 [32];
  longlong local_88;
  float *local_80;
  longlong local_70;
  CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>
  local_68;
  
  pfVar2 = param_2->DataPtr;
  pfVar3 = param_1->DataPtr;
  iVar6 = (int)*(undefined8 *)&param_2->ArrayNum;
  iVar5 = (int)*(undefined8 *)&param_1->ArrayNum;
  if ((iVar5 != iVar6) || (iVar5 == 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("A.Num() == B.Num() && A.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                       ,0x16,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      fVar7 = (float)(*pcVar1)();
      return fVar7;
    }
  }
  local_88 = (longlong)iVar5;
  local_70 = (longlong)iVar6;
  if (iVar6 == 0) {
    fVar7 = 0.0;
  }
  else {
    local_a8._16_8_ = pfVar3;
    local_80 = pfVar2;
    local_68.m_xpr.m_lhs._padding_ = (longlong)pfVar3;
    local_68.m_xpr.m_lhs._padding_ = local_88;
    local_68.m_xpr.m_rhs._padding_ = (longlong)pfVar2;
    local_68.m_xpr.m_rhs._padding_ = local_70;
    fVar7 = Eigen::internal::
            redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,3,0>
            ::
            run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
                      ((redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
                        *)local_a8,local_res8,&local_68);
  }
  return SQRT(fVar7);
}

