// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 9

// FIterativeSmoothingOp @ 14c9464a0

FIterativeSmoothingOp * __thiscall
UE::Geometry::FIterativeSmoothingOp::FIterativeSmoothingOp
          (FIterativeSmoothingOp *this,FDynamicMesh3 *param_1,FOptions *param_2)

{
  FSmoothingOpBase::FSmoothingOpBase((FSmoothingOpBase *)this,param_1,param_2);
  *(undefined ***)this = &___7FIterativeSmoothingOp_Geometry_UE__6B_;
  return this;
}

// FIterativeSmoothingOp @ 14c9464d0

FIterativeSmoothingOp * __thiscall
UE::Geometry::FIterativeSmoothingOp::FIterativeSmoothingOp
          (FIterativeSmoothingOp *this,FDynamicMesh3 *param_1,FOptions *param_2,
          FDynamicSubmesh3 *param_3)

{
  FSmoothingOpBase::FSmoothingOpBase((FSmoothingOpBase *)this,param_1,param_2,param_3);
  *(undefined ***)this = &___7FIterativeSmoothingOp_Geometry_UE__6B_;
  return this;
}

// ~FIterativeSmoothingOp @ 14c9495e0

void __thiscall
UE::Geometry::FIterativeSmoothingOp::~FIterativeSmoothingOp(FIterativeSmoothingOp *this)

{
  *(undefined ***)this = &___7FIterativeSmoothingOp_Geometry_UE__6B_;
  FSmoothingOpBase::~FSmoothingOpBase((FSmoothingOpBase *)this);
  return;
}

// operator() @ 14c94e4c0

double __thiscall
`UE::Geometry::FIterativeSmoothingOp::Smooth_Forward'::__l2::<lambda_1>::operator()
          (void *this,int param_1,bool param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = *(longlong *)this;
  if (param_2) {
    fVar4 = *(float *)(lVar1 + 0x8c);
  }
  else {
    fVar4 = *(float *)(lVar1 + 0x88);
  }
  dVar5 = (double)fVar4;
  if (*(char *)(lVar1 + 0xd0) == '\0') {
    return dVar5;
  }
  if (*(longlong *)(lVar1 + 0xc0) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar5 = (double)(*pcVar2)();
      return dVar5;
    }
  }
  fVar4 = UE::Geometry::TIndexedWeightMap<float>::GetValue
                    (*(TIndexedWeightMap<float> **)(lVar1 + 0xc0),param_1);
  dVar7 = (double)fVar4;
  dVar6 = 0.0;
  if (0.0 <= dVar7) {
    if (__real_3ff0000000000000 <= dVar7) {
      dVar7 = __real_3ff0000000000000;
    }
    if (dVar7 < 0.0) goto LAB_14c94e567;
  }
  else {
    dVar7 = 0.0;
  }
  dVar6 = dVar7;
  if (__real_3ff0000000000000 <= dVar7) {
    dVar6 = __real_3ff0000000000000;
  }
LAB_14c94e567:
  return (double)*(float *)(lVar1 + 0xd4) * dVar5 * (__real_3ff0000000000000 - dVar6) +
         dVar5 * dVar6;
}

// CalculateResult @ 14c9656a0

void __thiscall
UE::Geometry::FIterativeSmoothingOp::CalculateResult
          (FIterativeSmoothingOp *this,FProgressCancel *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  ELaplacianWeightScheme EVar5;
  longlong *plVar6;
  FIterativeSmoothingOp *local_res8;
  code *local_18;
  FIterativeSmoothingOp **local_10;
  
  if (this->field_0x98 == '\0') {
    local_10 = &local_res8;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FIterativeSmoothingOp::Smooth_Forward'::__l2::<lambda_1>,double,int,bool>
               ::Call;
    local_res8 = this;
    MeshDeformation::ComputeSmoothing_Forward
              ((bool)this->field_0x9a,(bool)this->field_0x99,*(FDynamicMesh3 **)&this->field_0x8,
               (TFunctionRef<double___cdecl(int,bool)> *)&local_18,*(int *)&this->field_0x90,
               (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this->field_0xd8,
               param_1);
  }
  else {
    EVar5 = MeanValue;
    if ((bool)this->field_0x9a == false) {
      EVar5 = ClampedCotangent;
    }
    MeshDeformation::ComputeSmoothing_BiHarmonic
              (EVar5,*(FDynamicMesh3 **)&this->field_0x8,(double)*(float *)&this->field_0x88,
               __real_3ff0000000000000,*(int *)&this->field_0x90,
               (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this->field_0xd8,
               param_1);
  }
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar6 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar4 = (**(code **)(*plVar6 + 8))();
    bVar3 = (bool)(*pcVar1)(uVar4);
    param_1->WasCancelled = bVar3;
    if (bVar3 != false) {
      return;
    }
  }
  FSmoothingOpBase::UpdateResultMesh((FSmoothingOpBase *)this);
  return;
}

// GetSmoothAlpha @ 14c9802b0

double __thiscall
UE::Geometry::FIterativeSmoothingOp::GetSmoothAlpha
          (FIterativeSmoothingOp *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_2) {
    fVar3 = *(float *)&this->field_0x8c;
  }
  else {
    fVar3 = *(float *)&this->field_0x88;
  }
  dVar4 = (double)fVar3;
  if (this->field_0xd0 == '\0') {
    return dVar4;
  }
  if (*(longlong *)&this->field_0xc0 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
  }
  fVar3 = TIndexedWeightMap<float>::GetValue
                    (*(TIndexedWeightMap<float> **)&this->field_0xc0,param_1);
  dVar6 = (double)fVar3;
  dVar5 = 0.0;
  if (0.0 <= dVar6) {
    if (__real_3ff0000000000000 <= dVar6) {
      dVar6 = __real_3ff0000000000000;
    }
    if (dVar6 < 0.0) goto LAB_14c980357;
  }
  else {
    dVar6 = 0.0;
  }
  dVar5 = dVar6;
  if (__real_3ff0000000000000 <= dVar6) {
    dVar5 = __real_3ff0000000000000;
  }
LAB_14c980357:
  return (double)*(float *)&this->field_0xd4 * dVar4 * (__real_3ff0000000000000 - dVar5) +
         dVar4 * dVar5;
}

// Smooth_Forward @ 14c986a40

void __thiscall
UE::Geometry::FIterativeSmoothingOp::Smooth_Forward
          (FIterativeSmoothingOp *this,bool param_1,FProgressCancel *param_2)

{
  FIterativeSmoothingOp *local_res8 [4];
  code *local_18;
  FIterativeSmoothingOp **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FIterativeSmoothingOp::Smooth_Forward'::__l2::<lambda_1>,double,int,bool>
             ::Call;
  local_res8[0] = this;
  MeshDeformation::ComputeSmoothing_Forward
            (param_1,(bool)this->field_0x99,*(FDynamicMesh3 **)&this->field_0x8,
             (TFunctionRef<double___cdecl(int,bool)> *)&local_18,*(int *)&this->field_0x90,
             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this->field_0xd8,
             param_2);
  return;
}

// Smooth_Implicit_Cotan @ 14c986aa0

void __thiscall
UE::Geometry::FIterativeSmoothingOp::Smooth_Implicit_Cotan
          (FIterativeSmoothingOp *this,FProgressCancel *param_1)

{
  MeshDeformation::ComputeSmoothing_BiHarmonic
            (ClampedCotangent,*(FDynamicMesh3 **)&this->field_0x8,
             (double)*(float *)&this->field_0x88,__real_3ff0000000000000,*(int *)&this->field_0x90,
             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this->field_0xd8,
             param_1);
  return;
}

// Smooth_MeanValue @ 14c986af0

void __thiscall
UE::Geometry::FIterativeSmoothingOp::Smooth_MeanValue
          (FIterativeSmoothingOp *this,FProgressCancel *param_1)

{
  MeshDeformation::ComputeSmoothing_BiHarmonic
            (MeanValue,*(FDynamicMesh3 **)&this->field_0x8,(double)*(float *)&this->field_0x88,
             __real_3ff0000000000000,*(int *)&this->field_0x90,
             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this->field_0xd8,
             param_1);
  return;
}

