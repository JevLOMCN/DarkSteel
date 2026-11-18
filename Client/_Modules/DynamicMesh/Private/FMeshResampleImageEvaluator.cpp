// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// DataLayout @ 14c8d7090

TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FMeshResampleImageEvaluator::DataLayout(FMeshResampleImageEvaluator *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,&::Layout.AllocatorInstance,1,&::Layout.ArrayMax);
      *(undefined4 *)::Layout.AllocatorInstance.Data = 4;
      atexit(`UE::Geometry::FMeshResampleImageEvaluator::DataLayout'::__l2::
             _dynamic_atexit_destructor_for__Layout__);
      _Init_thread_footer(&::_TSS0);
      return &::Layout;
    }
  }
  return &::Layout;
}

// EvaluateChannel @ 14c8e0eb0

void __cdecl
UE::Geometry::FMeshResampleImageEvaluator::EvaluateChannel
          (int param_1,float **param_2,float *param_3,void *param_4)

{
  float *pfVar1;
  
  pfVar1 = *param_2;
  *param_3 = *pfVar1;
  *param_2 = pfVar1 + 1;
  return;
}

// EvaluateColor @ 14c8e1190

void __cdecl
UE::Geometry::FMeshResampleImageEvaluator::EvaluateColor
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + 2);
  *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)*param_2;
  *(undefined8 *)((longlong)&param_3->field0_0x0 + 8) = uVar1;
  *param_2 = *param_2 + 4;
  return;
}

// EvaluateDefault @ 14c8e12a0

void __cdecl
UE::Geometry::FMeshResampleImageEvaluator::EvaluateDefault(float **param_1,void *param_2)

{
  float *pfVar1;
  
  pfVar1 = *param_1;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[2] = 0.0;
  pfVar1[3] = 1.0;
  *param_1 = pfVar1 + 4;
  return;
}

// EvaluateSample @ 14c8e1520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Geometry::FMeshResampleImageEvaluator::EvaluateSample
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  float *pfVar3;
  undefined8 *puVar4;
  TImageBuilder<UE::Math::TVector4<float>_> *this;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  undefined4 uVar9;
  double dVar10;
  undefined4 uVar11;
  double dVar12;
  float local_res10;
  float local_res14;
  TVector4<float>_u_0 local_68;
  TVector2<double>_u_0 local_58;
  TVector4<float>_u_0 local_48;
  
  pvVar2 = param_2->DetailMesh;
  iVar1 = param_2->DetailTriID;
  this = (TImageBuilder<UE::Math::TVector4<float>_> *)0x0;
  uVar5 = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)param_3 + 0x20) + 0x30))
                     (*(longlong **)((longlong)param_3 + 0x20),pvVar2);
  if (puVar4 != (undefined8 *)0x0) {
    this = (TImageBuilder<UE::Math::TVector4<float>_> *)*puVar4;
    uVar5 = *(undefined4 *)(puVar4 + 1);
  }
  uVar9 = 0.0;
  uVar11 = __real_3f800000;
  uVar7 = 0.0;
  uVar6 = 0.0;
  if (this != (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_3 + 0x20) + 0xf0))
              (*(longlong **)((longlong)param_3 + 0x20),pvVar2,iVar1,&param_2->DetailBaryCoords,
               uVar5,&local_res10);
    dVar8 = (double)local_res10;
    local_48._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_48._8_8_ = _UNK_150689648;
    dVar12 = (double)local_res14;
    if (0.0 <= dVar8) {
      if (__real_3ff0000000000000 <= dVar8) {
        dVar8 = __real_3ff0000000000000;
      }
    }
    else {
      dVar8 = 0.0;
    }
    dVar10 = 0.0;
    if ((0.0 <= dVar12) && (dVar10 = dVar12, __real_3ff0000000000000 <= dVar12)) {
      dVar10 = __real_3ff0000000000000;
    }
    local_58._s_0.X = (double)(this->Dimensions).Width * dVar8;
    local_58._s_0.Y = (double)(this->Dimensions).Height * dVar10;
    TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<float,0>
              (this,(TVector4<float> *)&local_68._s_0,(TVector2<double> *)&local_58._s_0,
               (TVector4<float> *)&local_48._s_0);
    uVar9 = local_68._s_0.Z;
    uVar11 = local_68._s_0.W;
    uVar7 = local_68._s_0.Y;
    uVar6 = local_68._s_0.X;
  }
  pfVar3 = *param_1;
  *pfVar3 = (float)uVar6;
  pfVar3[1] = (float)uVar7;
  pfVar3[2] = (float)uVar9;
  pfVar3[3] = (float)uVar11;
  *param_1 = pfVar3 + 4;
  return;
}

// ImageSampleFunction @ 14c8fa500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<float> * __thiscall
UE::Geometry::FMeshResampleImageEvaluator::ImageSampleFunction
          (FMeshResampleImageEvaluator *this,TVector4<float> *__return_storage_ptr__,
          FCorrespondenceSample *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  TImageBuilder<UE::Math::TVector4<float>_> *this_00;
  double dVar5;
  double dVar6;
  double dVar7;
  float local_res10;
  float local_res14;
  TVector2<double>_u_0 local_68;
  TVector4<float>_u_0 local_58;
  TVector4<float>_u_0 local_48;
  
  pvVar2 = param_1->DetailMesh;
  iVar1 = param_1->DetailTriID;
  this_00 = (TImageBuilder<UE::Math::TVector4<float>_> *)0x0;
  uVar4 = 0;
  puVar3 = (undefined8 *)
           (**(code **)((longlong)*this->DetailSampler + 0x30))(this->DetailSampler,pvVar2);
  if (puVar3 != (undefined8 *)0x0) {
    this_00 = (TImageBuilder<UE::Math::TVector4<float>_> *)*puVar3;
    uVar4 = *(undefined4 *)(puVar3 + 1);
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  if (this_00 != (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) {
    (**(code **)((longlong)*this->DetailSampler + 0xf0))
              (this->DetailSampler,pvVar2,iVar1,&param_1->DetailBaryCoords,uVar4,&local_res10);
    dVar5 = (double)local_res10;
    local_58._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_58._8_8_ = _UNK_150689648;
    dVar7 = (double)local_res14;
    if (0.0 <= dVar5) {
      if (__real_3ff0000000000000 <= dVar5) {
        dVar5 = __real_3ff0000000000000;
      }
    }
    else {
      dVar5 = 0.0;
    }
    dVar6 = 0.0;
    if ((0.0 <= dVar7) && (dVar6 = dVar7, __real_3ff0000000000000 <= dVar7)) {
      dVar6 = __real_3ff0000000000000;
    }
    local_68._s_0.X = (double)(this_00->Dimensions).Width * dVar5;
    local_68._s_0.Y = (double)(this_00->Dimensions).Height * dVar6;
    TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<float,0>
              (this_00,(TVector4<float> *)&local_48._s_0,(TVector2<double> *)&local_68._s_0,
               (TVector4<float> *)&local_58._s_0);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_48._0_8_;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_48._8_8_;
  }
  return __return_storage_ptr__;
}

// Setup @ 14c918720

void __thiscall
UE::Geometry::FMeshResampleImageEvaluator::Setup
          (FMeshResampleImageEvaluator *this,FMeshBaseBaker *param_1,FEvaluationContext *param_2)

{
  TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->EvalData = this;
  param_2->Evaluate = EvaluateSample;
  param_2->AccumulateMode = Add;
  param_2->EvaluateDefault = EvaluateDefault;
  param_2->EvaluateColor = EvaluateColor;
  pTVar1 = (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
           (**(code **)(*(longlong *)this + 0x10))();
  TArray<enum_UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->DataLayout,pTVar1);
  this->DetailSampler = param_1->DetailSampler;
  return;
}

