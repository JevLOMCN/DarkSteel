// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// FWeightsBuilder @ 14dfaf120

FWeightsBuilder * __thiscall
GroomBinding_RBFWeighting::FWeightsBuilder::FWeightsBuilder
          (FWeightsBuilder *this,uint param_1,uint param_2,TVector<float> *param_3,
          TVector<float> *param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FWeightsBuilder *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  float local_res8 [2];
  assign_op<float,float> local_res10 [8];
  uint local_res18;
  TVector<float> *local_res20;
  float local_3a8 [2];
  undefined4 *local_3a0;
  longlong lStack_398;
  undefined8 local_390;
  TArrayView<std::nullptr_t,int> local_388;
  code *local_378;
  uint *local_370;
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  TVector<float> *local_358;
  TVector<float> *local_350;
  FWeightsBuilder *local_348;
  bool local_340;
  longlong local_338;
  Matrix<float,_1,1,0,_1,1> *pMStack_330;
  scalar_abs_op<float> local_328;
  undefined7 uStack_327;
  longlong local_320;
  Matrix<float,_1,1,0,_1,1> *pMStack_318;
  scalar_inverse_op<float> local_310;
  undefined7 uStack_30f;
  FScriptContainerElement *local_308;
  ulonglong local_300;
  ulonglong local_2f8;
  Product<Eigen::Product<Eigen::Matrix<float,_1,_1,1,_1,_1>,Eigen::DiagonalWrapper<Eigen::MatrixWrapper<Eigen::Select<Eigen::CwiseBinaryOp<Eigen::internal::scalar_cmp_op<float,float,1>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Array<float,_1,1,0,_1,1>_>_const_,Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::ArrayWrapper<Eigen::Matrix<float,_1,1,0,_1,1>_const_>_const_>_const_>,Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::ArrayWrapper<Eigen::Matrix<float,_1,1,0,_1,1>_const_>_const_>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Array<float,_1,1,0,_1,1>_>_>_const_>_const_>,1>,Eigen::Transpose<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_>,0>
  local_2e8;
  undefined1 local_258 [48];
  uint *local_228;
  longlong local_220;
  
  (this->MatrixEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatrixEntries).ArrayNum = 0;
  (this->MatrixEntries).ArrayMax = 0;
  (this->InverseEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InverseEntries).ArrayNum = 0;
  (this->InverseEntries).ArrayMax = 0;
  local_res20 = param_3;
  local_res18 = FGroomRBFDeformer::GetEntryCount(param_1);
  uVar3 = FGroomRBFDeformer::GetEntryCount(param_2);
  uVar12 = (ulonglong)uVar3;
  uVar4 = FGroomRBFDeformer::GetWeightCount(param_1);
  local_res8[0] = 0.0;
  iVar8 = uVar3 * local_res18;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(&this->MatrixEntries,local_res8,iVar8);
  local_3a8[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(&this->InverseEntries,local_3a8,iVar8);
  if ((param_1 != param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRows == NumColumns",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,899,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FWeightsBuilder *)(*pcVar1)();
    return pFVar5;
  }
  if ((uVar4 != (this->MatrixEntries).ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WeightCount == MatrixEntries.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,900,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FWeightsBuilder *)(*pcVar1)();
    return pFVar5;
  }
  if ((uVar4 != (this->InverseEntries).ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WeightCount == InverseEntries.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x385,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FWeightsBuilder *)(*pcVar1)();
    return pFVar5;
  }
  uVar11 = (ulonglong)local_res18;
  local_358 = local_res20;
  local_350 = param_4;
  local_340 = param_5;
  local_378 = UE::Core::Private::Function::
              TFunctionRefCaller<`GroomBinding_RBFWeighting::FWeightsBuilder::FWeightsBuilder'::__l2::<lambda_1>,void,int>
              ::Call;
  local_370 = &local_368;
  local_388.DataPtr = (void **)0x0;
  local_388.ArrayNum = 0;
  local_360 = local_res18;
  local_368 = param_1;
  local_364 = param_2;
  local_35c = uVar3;
  local_348 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1,1,(TFunctionRef<void___cdecl(int)> *)&local_378,
             (<lambda_1>)param_5,None,&local_388);
  uVar9 = uVar3 * param_1 + param_2;
  uVar4 = 0;
  if ((int)uVar9 < (this->MatrixEntries).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FWeightsBuilder *)(*pcVar1)();
    return pFVar5;
  }
  uVar10 = uVar9 + 1 + uVar3;
  *(undefined4 *)((this->MatrixEntries).AllocatorInstance.Data + (longlong)(int)uVar9 * 4) =
       0x38d1b717;
  uVar4 = 0;
  if ((int)uVar10 < (this->MatrixEntries).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FWeightsBuilder *)(*pcVar1)();
    return pFVar5;
  }
  uVar9 = uVar10 + 1 + uVar3;
  *(undefined4 *)((this->MatrixEntries).AllocatorInstance.Data + (longlong)(int)uVar10 * 4) =
       0x38d1b717;
  uVar4 = 0;
  if ((int)uVar9 < (this->MatrixEntries).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FWeightsBuilder *)(*pcVar1)();
    return pFVar5;
  }
  uVar3 = uVar9 + 1 + uVar3;
  *(undefined4 *)((this->MatrixEntries).AllocatorInstance.Data + (longlong)(int)uVar9 * 4) =
       0x38d1b717;
  uVar4 = 0;
  if ((int)uVar3 < (this->MatrixEntries).ArrayNum) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FWeightsBuilder *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined4 *)((this->MatrixEntries).AllocatorInstance.Data + (longlong)(int)uVar3 * 4) =
       0x38d1b717;
  local_308 = (this->MatrixEntries).AllocatorInstance.Data;
  pFVar13 = (this->InverseEntries).AllocatorInstance.Data;
  local_300 = uVar11;
  local_2f8 = uVar12;
  Eigen::MatrixBase<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>,0,Eigen::Stride<0,0>_>_>::
  jacobiSvd((MatrixBase<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>,0,Eigen::Stride<0,0>_>_> *)
            &local_308,(JacobiSVD<Eigen::Matrix<float,_1,_1,1,_1,_1>,2> *)local_258,0x28);
  if (0 < local_220) {
    pMStack_330 = (Matrix<float,_1,1,0,_1,1> *)&local_228;
    pMStack_318 = (Matrix<float,_1,1,0,_1,1> *)&local_228;
    local_2e8.m_lhs.m_rhs.m_diagonal.m_expression.m_condition.m_rhs.m_functor = local_328;
    local_2e8.m_lhs.m_rhs.m_diagonal.m_expression.m_condition.m_rhs._17_7_ = uStack_327;
    local_2e8.m_lhs.m_lhs = (Matrix<float,_1,_1,1,_1,_1> *)(local_258 + 0x18);
    local_2e8.m_lhs.m_rhs.m_diagonal.m_expression.m_condition.m_lhs.m_rows.m_value = local_220;
    local_2e8.m_lhs.m_rhs.m_diagonal.m_expression.m_else.m_rows.m_value = local_220;
    local_2e8.m_lhs.m_rhs.m_diagonal.m_expression.m_then.m_functor = local_310;
    local_2e8.m_lhs.m_rhs.m_diagonal.m_expression.m_then._17_7_ = uStack_30f;
    local_2e8.m_rhs.m_matrix = (Matrix<float,_1,_1,1,_1,_1> *)local_258;
    local_2e8.m_lhs.m_rhs.m_diagonal.m_expression.m_condition.m_lhs.m_functor.m_other =
         (float)(*local_228 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_34000000;
    local_2e8.m_lhs.m_rhs.m_diagonal.m_expression.m_else.m_functor.m_other = 0.0;
    local_390 = 0;
    local_2e8.m_lhs.m_rhs.m_diagonal.m_expression.m_condition.m_rhs._padding_ = local_338;
    local_2e8.m_lhs.m_rhs.m_diagonal.m_expression.m_then._padding_ = local_320;
    local_3a0 = (undefined4 *)0x0;
    lStack_398 = 0;
    local_2e8.m_lhs.m_rhs.m_diagonal.m_expression.m_condition.m_rhs.m_xpr.m_expression = pMStack_330
    ;
    local_2e8.m_lhs.m_rhs.m_diagonal.m_expression.m_then.m_xpr.m_expression = pMStack_318;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Product<Eigen::Product<Eigen::Matrix<float,_1,_1,1,_1,_1>,Eigen::DiagonalWrapper<Eigen::MatrixWrapper<Eigen::Select<Eigen::CwiseBinaryOp<Eigen::internal::scalar_cmp_op<float,float,1>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Array<float,_1,1,0,_1,1>_>_const_,Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::ArrayWrapper<Eigen::Matrix<float,_1,1,0,_1,1>_const_>_const_>_const_>,Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::ArrayWrapper<Eigen::Matrix<float,_1,1,0,_1,1>_const_>_const_>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Array<float,_1,1,0,_1,1>_>_>_const_>_const_>,1>,Eigen::Transpose<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_>,0>,Eigen::internal::assign_op<float,float>_>
              ((Matrix<float,_1,_1,0,_1,_1> *)&local_3a0,&local_2e8,local_res10);
    puVar15 = local_3a0;
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      lVar6 = 0;
      pFVar7 = pFVar13;
      puVar14 = puVar15;
      if (uVar11 != 0) {
        do {
          *(undefined4 *)pFVar7 = *puVar14;
          lVar6 = lVar6 + 1;
          pFVar7 = pFVar7 + 4;
          puVar14 = puVar14 + lStack_398;
        } while (lVar6 < (longlong)uVar11);
      }
      pFVar13 = pFVar13 + uVar11 * 4;
      puVar15 = puVar15 + 1;
    }
    FMemory_Free(local_3a0);
  }
  Eigen::JacobiSVD<Eigen::Matrix<float,-1,-1,1,-1,-1>,2>::
  ~JacobiSVD<Eigen::Matrix<float,_1,_1,1,_1,_1>,2>
            ((JacobiSVD<Eigen::Matrix<float,_1,_1,1,_1,_1>,2> *)local_258);
  return this;
}

// operator() @ 14dfb24d0

void __thiscall
`GroomBinding_RBFWeighting::FWeightsBuilder::FWeightsBuilder'::__l2::<lambda_1>::operator()
          (void *this,uint param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float local_98;
  float fStack_94;
  
  fVar1 = __real_3f800000;
  uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if ((*(char *)((longlong)this + 0x28) != '\0') && (*(int *)this != 0)) {
    uVar16 = **(undefined8 **)((longlong)this + 0x10);
    uVar7 = *(float *)(*(undefined8 **)((longlong)this + 0x10) + 1);
  }
  uVar11 = param_1 * *(int *)((longlong)this + 0xc);
  uVar10 = 0;
  uVar14 = (ulonglong)param_1;
  if (*(int *)((longlong)this + 4) != 0) {
    lVar9 = (longlong)(int)uVar11 * 4;
    do {
      lVar2 = *(longlong *)((longlong)this + 0x10);
      plVar3 = *(longlong **)((longlong)this + 0x20);
      uVar8 = (ulonglong)uVar10;
      lVar4 = *(longlong *)((longlong)this + 0x18);
      fVar18 = *(float *)(lVar2 + 4 + uVar14 * 0xc) - *(float *)(lVar4 + 4 + uVar8 * 0xc);
      fVar17 = *(float *)(lVar2 + 8 + uVar14 * 0xc) - *(float *)(lVar4 + 8 + uVar8 * 0xc);
      fVar15 = *(float *)(lVar2 + uVar14 * 0xc) - *(float *)(lVar4 + uVar8 * 0xc);
      uVar12 = 0;
      if ((int)uVar11 < (int)plVar3[1]) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = uVar11 + 1;
      uVar10 = uVar10 + 1;
      *(float *)(*plVar3 + lVar9) =
           SQRT(fVar18 * fVar18 + fVar15 * fVar15 + fVar17 * fVar17 + fVar1);
      lVar9 = lVar9 + 4;
    } while (uVar10 < *(uint *)((longlong)this + 4));
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  uVar10 = 0;
  if ((int)uVar11 < (int)plVar3[1]) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_98 = (float)uVar16;
  uVar12 = uVar11 + 1;
  *(undefined4 *)(*plVar3 + (longlong)(int)uVar11 * 4) = 0x3f800000;
  plVar3 = *(longlong **)((longlong)this + 0x20);
  fVar1 = *(float *)(*(longlong *)((longlong)this + 0x10) + uVar14 * 0xc);
  uVar10 = 0;
  if ((int)uVar12 < (int)plVar3[1]) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fStack_94 = (float)((ulonglong)uVar16 >> 0x20);
  uVar13 = uVar11 + 2;
  *(float *)(*plVar3 + (longlong)(int)uVar12 * 4) = fVar1 - local_98;
  plVar3 = *(longlong **)((longlong)this + 0x20);
  fVar1 = *(float *)(*(longlong *)((longlong)this + 0x10) + 4 + uVar14 * 0xc);
  uVar10 = 0;
  if ((int)uVar13 < (int)plVar3[1]) {
    uVar10 = ~uVar13 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = uVar11 + 3;
  *(float *)(*plVar3 + (longlong)(int)uVar13 * 4) = fVar1 - fStack_94;
  plVar3 = *(longlong **)((longlong)this + 0x20);
  fVar1 = *(float *)(*(longlong *)((longlong)this + 0x10) + 8 + uVar14 * 0xc);
  uVar10 = 0;
  if ((int)uVar11 < (int)plVar3[1]) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(float *)(*plVar3 + (longlong)(int)uVar11 * 4) = fVar1 - (float)uVar7;
  plVar3 = *(longlong **)((longlong)this + 0x20);
  uVar11 = *(int *)((longlong)this + 0xc) * *(int *)this + param_1;
  uVar10 = 0;
  if ((int)uVar11 < (int)plVar3[1]) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined4 *)(*plVar3 + (longlong)(int)uVar11 * 4) = 0x3f800000;
  uVar11 = uVar11 + *(int *)((longlong)this + 0xc);
  plVar3 = *(longlong **)((longlong)this + 0x20);
  fVar1 = *(float *)(*(longlong *)((longlong)this + 0x10) + uVar14 * 0xc);
  uVar10 = 0;
  if ((int)uVar11 < (int)plVar3[1]) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(float *)(*plVar3 + (longlong)(int)uVar11 * 4) = fVar1 - local_98;
  uVar11 = uVar11 + *(int *)((longlong)this + 0xc);
  plVar3 = *(longlong **)((longlong)this + 0x20);
  fVar1 = *(float *)(*(longlong *)((longlong)this + 0x10) + 4 + uVar14 * 0xc);
  uVar10 = 0;
  if ((int)uVar11 < (int)plVar3[1]) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(float *)(*plVar3 + (longlong)(int)uVar11 * 4) = fVar1 - fStack_94;
  uVar11 = uVar11 + *(int *)((longlong)this + 0xc);
  plVar3 = *(longlong **)((longlong)this + 0x20);
  fVar1 = *(float *)(*(longlong *)((longlong)this + 0x10) + 8 + uVar14 * 0xc);
  uVar10 = 0;
  if ((int)uVar11 < (int)plVar3[1]) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(float *)(*plVar3 + (longlong)(int)uVar11 * 4) = fVar1 - (float)uVar7;
  return;
}

// ComputeWeights @ 14dfbe0a0

void __thiscall
GroomBinding_RBFWeighting::FWeightsBuilder::ComputeWeights
          (FWeightsBuilder *this,uint param_1,uint param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  Matrix<float,_1,1,0,_1,1> *pMVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  assign_op<float,float> local_res10 [8];
  undefined4 *local_2f8;
  longlong lStack_2f0;
  undefined8 local_2e8;
  FScriptContainerElement *local_2e0;
  Matrix<float,_1,1,0,_1,1> *pMStack_2d8;
  ulonglong local_2d0;
  Product<Eigen::Product<Eigen::Matrix<float,_1,_1,1,_1,_1>,Eigen::DiagonalWrapper<Eigen::MatrixWrapper<Eigen::Select<Eigen::CwiseBinaryOp<Eigen::internal::scalar_cmp_op<float,float,1>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Array<float,_1,1,0,_1,1>_>_const_,Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::ArrayWrapper<Eigen::Matrix<float,_1,1,0,_1,1>_const_>_const_>_const_>,Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::ArrayWrapper<Eigen::Matrix<float,_1,1,0,_1,1>_const_>_const_>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Array<float,_1,1,0,_1,1>_>_>_const_>_const_>,1>,Eigen::Transpose<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_>,0>
  local_2c0;
  undefined1 local_228 [48];
  uint *local_1f8;
  longlong local_1f0;
  
  local_2e0 = (this->MatrixEntries).AllocatorInstance.Data;
  pFVar5 = (this->InverseEntries).AllocatorInstance.Data;
  pMVar3 = (Matrix<float,_1,1,0,_1,1> *)(ulonglong)param_1;
  uVar4 = (ulonglong)param_2;
  pMStack_2d8 = pMVar3;
  local_2d0 = uVar4;
  Eigen::MatrixBase<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>,0,Eigen::Stride<0,0>_>_>::
  jacobiSvd((MatrixBase<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>,0,Eigen::Stride<0,0>_>_> *)
            &local_2e0,(JacobiSVD<Eigen::Matrix<float,_1,_1,1,_1,_1>,2> *)local_228,0x28);
  if (0 < local_1f0) {
    local_2c0.m_lhs.m_rhs.m_diagonal.m_expression.m_condition.m_rhs.m_xpr.m_expression =
         (Matrix<float,_1,1,0,_1,1> *)&local_1f8;
    pMStack_2d8 = (Matrix<float,_1,1,0,_1,1> *)&local_1f8;
    local_2c0.m_lhs.m_rhs.m_diagonal.m_expression.m_condition.m_rhs.m_functor = local_2e8._0_1_;
    local_2c0.m_lhs.m_rhs.m_diagonal.m_expression.m_condition.m_rhs._17_7_ = local_2e8._1_7_;
    local_2c0.m_lhs.m_lhs = (Matrix<float,_1,_1,1,_1,_1> *)(local_228 + 0x18);
    local_2c0.m_lhs.m_rhs.m_diagonal.m_expression.m_condition.m_lhs.m_rows.m_value = local_1f0;
    local_2c0.m_lhs.m_rhs.m_diagonal.m_expression.m_else.m_rows.m_value = local_1f0;
    local_2c0.m_rhs.m_matrix = (Matrix<float,_1,_1,1,_1,_1> *)local_228;
    local_2c0.m_lhs.m_rhs.m_diagonal.m_expression.m_condition.m_lhs.m_functor.m_other =
         (float)(*local_1f8 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_34000000;
    local_2c0.m_lhs.m_rhs.m_diagonal.m_expression.m_else.m_functor.m_other = 0.0;
    local_2c0.m_lhs.m_rhs.m_diagonal.m_expression.m_then._16_8_ = local_2d0;
    local_2e8._0_1_ = (scalar_abs_op<float>)0x0;
    local_2e8._1_7_ = 0;
    local_2c0.m_lhs.m_rhs.m_diagonal.m_expression.m_condition.m_rhs._padding_ = (longlong)local_2f8;
    local_2c0.m_lhs.m_rhs.m_diagonal.m_expression.m_then._padding_ = (longlong)local_2e0;
    local_2f8 = (undefined4 *)0x0;
    lStack_2f0 = 0;
    local_2c0.m_lhs.m_rhs.m_diagonal.m_expression.m_then.m_xpr.m_expression = pMStack_2d8;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Product<Eigen::Product<Eigen::Matrix<float,_1,_1,1,_1,_1>,Eigen::DiagonalWrapper<Eigen::MatrixWrapper<Eigen::Select<Eigen::CwiseBinaryOp<Eigen::internal::scalar_cmp_op<float,float,1>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Array<float,_1,1,0,_1,1>_>_const_,Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<float>,Eigen::ArrayWrapper<Eigen::Matrix<float,_1,1,0,_1,1>_const_>_const_>_const_>,Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::ArrayWrapper<Eigen::Matrix<float,_1,1,0,_1,1>_const_>_const_>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Array<float,_1,1,0,_1,1>_>_>_const_>_const_>,1>,Eigen::Transpose<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_>,0>,Eigen::internal::assign_op<float,float>_>
              ((Matrix<float,_1,_1,0,_1,_1> *)&local_2f8,&local_2c0,local_res10);
    puVar7 = local_2f8;
    if (param_2 != 0) {
      do {
        lVar1 = 0;
        pFVar2 = pFVar5;
        puVar6 = puVar7;
        if (pMVar3 != (Matrix<float,_1,1,0,_1,1> *)0x0) {
          do {
            *(undefined4 *)pFVar2 = *puVar6;
            lVar1 = lVar1 + 1;
            pFVar2 = pFVar2 + 4;
            puVar6 = puVar6 + lStack_2f0;
          } while (lVar1 < (longlong)pMVar3);
        }
        pFVar5 = pFVar5 + (longlong)pMVar3 * 4;
        uVar4 = uVar4 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar4 != 0);
    }
    FMemory_Free(local_2f8);
  }
  Eigen::JacobiSVD<Eigen::Matrix<float,-1,-1,1,-1,-1>,2>::
  ~JacobiSVD<Eigen::Matrix<float,_1,_1,1,_1,_1>,2>
            ((JacobiSVD<Eigen::Matrix<float,_1,_1,1,_1,_1>,2> *)local_228);
  return;
}

