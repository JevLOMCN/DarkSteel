// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// DataLayout @ 14c8d6b80

TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FMeshHeightMapEvaluator::DataLayout(FMeshHeightMapEvaluator *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,&::Layout.AllocatorInstance,1,&::Layout.ArrayMax);
      *(undefined4 *)::Layout.AllocatorInstance.Data = 1;
      atexit(`UE::Geometry::FMeshHeightMapEvaluator::DataLayout'::__l2::
             _dynamic_atexit_destructor_for__Layout__);
      _Init_thread_footer(&::_TSS0);
      return &::Layout;
    }
  }
  return &::Layout;
}

// EvaluateChannel @ 14c8e0d70

void __cdecl
UE::Geometry::FMeshHeightMapEvaluator::EvaluateChannel
          (int param_1,float **param_2,float *param_3,void *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  
  pfVar4 = *param_2;
  fVar1 = *(float *)((longlong)param_4 + 0x20);
  fVar2 = *pfVar4;
  if (fVar2 <= fVar1) {
    *param_3 = 0.0;
    *param_2 = pfVar4 + 1;
    return;
  }
  fVar3 = *(float *)((longlong)param_4 + 0x24);
  if (fVar3 <= fVar2) {
    *param_3 = __real_3f800000;
    *param_2 = pfVar4 + 1;
    return;
  }
  if (fVar1 == fVar3) {
    *param_3 = __real_3f000000;
    *param_2 = pfVar4 + 1;
    return;
  }
  *param_2 = pfVar4 + 1;
  *param_3 = (fVar2 - fVar1) / (fVar3 - fVar1);
  return;
}

// EvaluateColor @ 14c8e1070

void __cdecl
UE::Geometry::FMeshHeightMapEvaluator::EvaluateColor
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)((longlong)param_4 + 0x20);
  fVar2 = **param_2;
  if (fVar1 < fVar2) {
    fVar3 = *(float *)((longlong)param_4 + 0x24);
    fVar4 = __real_3f800000;
    if ((fVar2 < fVar3) && (fVar4 = __real_3f000000, fVar1 != fVar3)) {
      fVar4 = (fVar2 - fVar1) / (fVar3 - fVar1);
    }
  }
  else {
    fVar4 = 0.0;
  }
  (param_3->field0_0x0)._s_0.X = fVar4;
  (param_3->field0_0x0)._s_0.Y = fVar4;
  (param_3->field0_0x0)._s_0.Z = fVar4;
  (param_3->field0_0x0)._s_0.W = 1.0;
  *param_2 = *param_2 + 1;
  return;
}

// EvaluateDefault @ 14c8e1230

void __cdecl UE::Geometry::FMeshHeightMapEvaluator::EvaluateDefault(float **param_1,void *param_2)

{
  float *pfVar1;
  
  pfVar1 = *param_1;
  *pfVar1 = 0.0;
  *param_1 = pfVar1 + 1;
  return;
}

// EvaluateSample @ 14c8e1470

void __cdecl
UE::Geometry::FMeshHeightMapEvaluator::EvaluateSample
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  float *pfVar1;
  double local_28;
  double local_20;
  double local_18;
  
  (**(code **)(**(longlong **)((longlong)param_3 + 0x18) + 0xe0))
            (*(longlong **)((longlong)param_3 + 0x18),&local_28,param_2->DetailMesh,
             param_2->DetailTriID,&param_2->DetailBaryCoords);
  pfVar1 = *param_1;
  *pfVar1 = (float)((local_20 - (param_2->BaseSample).SurfacePoint.field0_0x0._s_0.Y) *
                    (param_2->BaseNormal).field0_0x0._s_0.Y +
                    (local_28 - (param_2->BaseSample).SurfacePoint.field0_0x0._s_0.X) *
                    (param_2->BaseNormal).field0_0x0._s_0.X +
                   (local_18 - (param_2->BaseSample).SurfacePoint.field0_0x0._s_0.Z) *
                   (param_2->BaseNormal).field0_0x0._s_0.Z);
  *param_1 = pfVar1 + 1;
  return;
}

// SampleFunction @ 14c915170

float __thiscall
UE::Geometry::FMeshHeightMapEvaluator::SampleFunction
          (FMeshHeightMapEvaluator *this,FCorrespondenceSample *param_1)

{
  double local_28;
  double local_20;
  double local_18;
  
  (**(code **)((longlong)*this->DetailSampler + 0xe0))
            (this->DetailSampler,&local_28,param_1->DetailMesh,param_1->DetailTriID,
             &param_1->DetailBaryCoords);
  return (float)((local_20 - (param_1->BaseSample).SurfacePoint.field0_0x0._s_0.Y) *
                 (param_1->BaseNormal).field0_0x0._s_0.Y +
                 (local_28 - (param_1->BaseSample).SurfacePoint.field0_0x0._s_0.X) *
                 (param_1->BaseNormal).field0_0x0._s_0.X +
                (local_18 - (param_1->BaseSample).SurfacePoint.field0_0x0._s_0.Z) *
                (param_1->BaseNormal).field0_0x0._s_0.Z);
}

// Setup @ 14c917c00

void __thiscall
UE::Geometry::FMeshHeightMapEvaluator::Setup
          (FMeshHeightMapEvaluator *this,FMeshBaseBaker *param_1,FEvaluationContext *param_2)

{
  TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  float fVar3;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  this->DetailSampler = param_1->DetailSampler;
  param_2->EvalData = this;
  param_2->Evaluate = EvaluateSample;
  param_2->EvaluateDefault = EvaluateDefault;
  param_2->EvaluateColor = EvaluateColor;
  param_2->EvaluateChannel = EvaluateChannel;
  param_2->AccumulateMode = Add;
  pTVar1 = (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
           (**(code **)(this->_padding_ + 0x10))();
  TArray<enum_UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->DataLayout,pTVar1);
  (**(code **)((longlong)*this->DetailSampler + 0x88))(this->DetailSampler,&local_38);
  local_18 = local_18 - local_30;
  local_10 = local_10 - local_28;
  local_20 = local_20 - local_38;
  if (local_18 <= 0.0) {
    local_18 = 0.0;
  }
  if (local_10 <= 0.0) {
    local_10 = 0.0;
  }
  if (local_20 <= 0.0) {
    local_20 = 0.0;
  }
  if (local_18 <= local_10) {
    local_18 = local_10;
  }
  if (local_18 <= local_20) {
    local_18 = local_20;
  }
  if (local_18 <= __real_3eb0c6f7a0000000) {
    local_18 = __real_3eb0c6f7a0000000;
  }
  if (this->RangeMode == RelativeBounds) {
    fVar2 = (float)local_18 * (this->Range).Max;
    fVar3 = (float)local_18 * (this->Range).Min;
  }
  else {
    fVar3 = (this->Range).Min;
    fVar2 = (this->Range).Max;
  }
  (this->CachedRange).Min = fVar3;
  (this->CachedRange).Max = fVar2;
  return;
}

