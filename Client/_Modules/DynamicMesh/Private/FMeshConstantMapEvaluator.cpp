// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 8

// FMeshConstantMapEvaluator @ 14c8972f0

FMeshConstantMapEvaluator * __thiscall
UE::Geometry::FMeshConstantMapEvaluator::FMeshConstantMapEvaluator
          (FMeshConstantMapEvaluator *this,float param_1)

{
  this->Value = param_1;
  this->_padding_ = (longlong)&___7FMeshConstantMapEvaluator_Geometry_UE__6B_;
  return this;
}

// DataLayout @ 14c8d6a00

TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FMeshConstantMapEvaluator::DataLayout(FMeshConstantMapEvaluator *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,&::Layout.AllocatorInstance,1,&::Layout.ArrayMax);
      *(undefined4 *)::Layout.AllocatorInstance.Data = 1;
      atexit(`UE::Geometry::FMeshConstantMapEvaluator::DataLayout'::__l2::
             _dynamic_atexit_destructor_for__Layout__);
      _Init_thread_footer(&::_TSS0);
      return &::Layout;
    }
  }
  return &::Layout;
}

// EvaluateChannel @ 14c8e0c80

void __cdecl
UE::Geometry::FMeshConstantMapEvaluator::EvaluateChannel
          (int param_1,float **param_2,float *param_3,void *param_4)

{
  float *pfVar1;
  
  pfVar1 = *param_2;
  *param_3 = *pfVar1;
  *param_2 = pfVar1 + 1;
  return;
}

// EvaluateColor @ 14c8e0f30

void __cdecl
UE::Geometry::FMeshConstantMapEvaluator::EvaluateColor
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  float fVar1;
  
  fVar1 = **param_2;
  (param_3->field0_0x0)._s_0.X = fVar1;
  (param_3->field0_0x0)._s_0.Y = fVar1;
  (param_3->field0_0x0)._s_0.Z = fVar1;
  (param_3->field0_0x0)._s_0.W = 1.0;
  *param_2 = *param_2 + 1;
  return;
}

// EvaluateDefault @ 14c8e11f0

void __cdecl UE::Geometry::FMeshConstantMapEvaluator::EvaluateDefault(float **param_1,void *param_2)

{
  float *pfVar1;
  
  pfVar1 = *param_1;
  *pfVar1 = *(float *)((longlong)param_2 + 8);
  *param_1 = pfVar1 + 1;
  return;
}

// EvaluateSample @ 14c8e1380

void __cdecl
UE::Geometry::FMeshConstantMapEvaluator::EvaluateSample
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  float *pfVar1;
  
  pfVar1 = *param_1;
  *pfVar1 = *(float *)((longlong)param_3 + 8);
  *param_1 = pfVar1 + 1;
  return;
}

// Setup @ 14c9178c0

void __thiscall
UE::Geometry::FMeshConstantMapEvaluator::Setup
          (FMeshConstantMapEvaluator *this,FMeshBaseBaker *param_1,FEvaluationContext *param_2)

{
  TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->EvalData = this;
  param_2->Evaluate = EvaluateSample;
  param_2->AccumulateMode = Overwrite;
  param_2->EvaluateDefault = EvaluateDefault;
  param_2->EvaluateColor = EvaluateColor;
  param_2->EvaluateChannel = EvaluateChannel;
  pTVar1 = (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
           (**(code **)(this->_padding_ + 0x10))();
  TArray<enum_UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->DataLayout,pTVar1);
  return;
}

// Type @ 14c920660

EMeshMapEvaluatorType __thiscall
UE::Geometry::FMeshConstantMapEvaluator::Type(FMeshConstantMapEvaluator *this)

{
  return Constant;
}

