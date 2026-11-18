// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// DataLayout @ 14c8d7150

TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FMeshUVShellMapEvaluator::DataLayout(FMeshUVShellMapEvaluator *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,&::Layout.AllocatorInstance,1,&::Layout.ArrayMax);
      *(undefined4 *)::Layout.AllocatorInstance.Data = 4;
      atexit(`UE::Geometry::FMeshUVShellMapEvaluator::DataLayout'::__l2::
             _dynamic_atexit_destructor_for__Layout__);
      _Init_thread_footer(&::_TSS0);
      return &::Layout;
    }
  }
  return &::Layout;
}

// EvaluateChannel @ 14c8e0ed0

void __cdecl
UE::Geometry::FMeshUVShellMapEvaluator::EvaluateChannel
          (int param_1,float **param_2,float *param_3,void *param_4)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4622291572581466161>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshUVShellMapEvaluator.cpp"
                     ,0x31,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pfVar1 = *param_2;
  *param_3 = *pfVar1;
  *param_2 = pfVar1 + 1;
  return;
}

// EvaluateColor @ 14c8e11c0

void __cdecl
UE::Geometry::FMeshUVShellMapEvaluator::EvaluateColor
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + 2);
  *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)*param_2;
  *(undefined8 *)((longlong)&param_3->field0_0x0 + 8) = uVar1;
  *param_2 = *param_2 + 4;
  return;
}

// EvaluateDefault @ 14c8e12c0

void __cdecl UE::Geometry::FMeshUVShellMapEvaluator::EvaluateDefault(float **param_1,void *param_2)

{
  float *pfVar1;
  
  pfVar1 = *param_1;
  *pfVar1 = *(float *)((longlong)param_2 + 0x40);
  pfVar1[1] = *(float *)((longlong)param_2 + 0x44);
  pfVar1[2] = *(float *)((longlong)param_2 + 0x48);
  pfVar1[3] = *(float *)((longlong)param_2 + 0x4c);
  *param_1 = pfVar1 + 4;
  return;
}

// EvaluateSample @ 14c8e1680

void __cdecl
UE::Geometry::FMeshUVShellMapEvaluator::EvaluateSample
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  float *pfVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res8;
  float fStackX_c;
  float local_res10;
  float fStackX_14;
  float local_res18;
  float fStackX_1c;
  
  iVar2 = param_2->DetailTriID;
  pvVar3 = param_2->DetailMesh;
  fVar9 = *(float *)((longlong)param_3 + 0x40);
  fVar7 = *(float *)((longlong)param_3 + 0x44);
  fVar8 = *(float *)((longlong)param_3 + 0x48);
  fVar6 = *(float *)((longlong)param_3 + 0x4c);
  cVar4 = (**(code **)(**(longlong **)((longlong)param_3 + 0x58) + 0x90))
                    (*(longlong **)((longlong)param_3 + 0x58),pvVar3,iVar2);
  if (cVar4 != '\0') {
    (**(code **)(**(longlong **)((longlong)param_3 + 0x58) + 0xa8))
              (*(longlong **)((longlong)param_3 + 0x58),pvVar3,iVar2,
               *(undefined4 *)((longlong)param_3 + 0x50),&local_res10,&local_res18,&local_res8);
    fVar7 = (float)((uint)(((fStackX_1c * local_res10 - local_res18 * fStackX_14) +
                            (local_res18 * fStackX_c - fStackX_1c * local_res8) +
                           (fStackX_14 * local_res8 - local_res10 * fStackX_c)) * __real_3f000000) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar9 = ((float)(param_2->DetailBaryCoords).field0_0x0._s_0.Y * __real_40000000 * fVar7) /
            SQRT((fStackX_14 - fStackX_1c) * (fStackX_14 - fStackX_1c) +
                 (local_res10 - local_res18) * (local_res10 - local_res18));
    fVar8 = ((float)(param_2->DetailBaryCoords).field0_0x0._s_0.X * __real_40000000 * fVar7) /
            SQRT((fStackX_c - fStackX_14) * (fStackX_c - fStackX_14) +
                 (local_res8 - local_res10) * (local_res8 - local_res10));
    if (fVar8 <= fVar9) {
      fVar9 = fVar8;
    }
    fVar7 = ((float)(param_2->DetailBaryCoords).field0_0x0._s_0.Z * __real_40000000 * fVar7) /
            SQRT((fStackX_1c - fStackX_c) * (fStackX_1c - fStackX_c) +
                 (local_res18 - local_res8) * (local_res18 - local_res8));
    if (fVar7 <= fVar9) {
      fVar9 = fVar7;
    }
    lVar5 = 0x30;
    if (fVar9 / (float)*(double *)((longlong)param_3 + 8) < *(float *)((longlong)param_3 + 0x18)) {
      lVar5 = 0x20;
    }
    pfVar1 = (float *)(lVar5 + (longlong)param_3);
    fVar9 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar6 = pfVar1[3];
  }
  pfVar1 = *param_1;
  *pfVar1 = fVar9;
  pfVar1[1] = fVar7;
  pfVar1[2] = fVar8;
  pfVar1[3] = fVar6;
  *param_1 = pfVar1 + 4;
  return;
}

// SampleFunction @ 14c915200

TVector4<float> * __thiscall
UE::Geometry::FMeshUVShellMapEvaluator::SampleFunction
          (FMeshUVShellMapEvaluator *this,TVector4<float> *__return_storage_ptr__,
          FCorrespondenceSample *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  IMeshBakerDetailSampler *pIVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  float fStackX_c;
  float local_res10;
  float fStackX_14;
  float local_res18;
  float fStackX_1c;
  
  uVar5 = *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8);
  pvVar3 = param_1->DetailMesh;
  pIVar4 = this->DetailSampler;
  iVar2 = param_1->DetailTriID;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->BackgroundColor).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar5;
  cVar6 = (**(code **)((longlong)*pIVar4 + 0x90))(pIVar4,pvVar3,iVar2);
  if (cVar6 != '\0') {
    (**(code **)((longlong)*this->DetailSampler + 0xa8))
              (this->DetailSampler,pvVar3,iVar2,this->UVLayer,&local_res10,&local_res18,&local_res8)
    ;
    fVar10 = (float)((uint)(((fStackX_1c * local_res10 - local_res18 * fStackX_14) +
                             (local_res18 * fStackX_c - fStackX_1c * local_res8) +
                            (fStackX_14 * local_res8 - local_res10 * fStackX_c)) * __real_3f000000)
                    & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar10 = fVar10 + fVar10;
    fVar9 = ((float)(param_1->DetailBaryCoords).field0_0x0._s_0.Y * fVar10) /
            SQRT((fStackX_14 - fStackX_1c) * (fStackX_14 - fStackX_1c) +
                 (local_res10 - local_res18) * (local_res10 - local_res18));
    fVar8 = ((float)(param_1->DetailBaryCoords).field0_0x0._s_0.X * fVar10) /
            SQRT((fStackX_c - fStackX_14) * (fStackX_c - fStackX_14) +
                 (local_res8 - local_res10) * (local_res8 - local_res10));
    if (fVar8 <= fVar9) {
      fVar9 = fVar8;
    }
    fVar8 = ((float)(param_1->DetailBaryCoords).field0_0x0._s_0.Z * fVar10) /
            SQRT((fStackX_1c - fStackX_c) * (fStackX_1c - fStackX_c) +
                 (local_res18 - local_res8) * (local_res18 - local_res8));
    if (fVar8 <= fVar9) {
      fVar9 = fVar8;
    }
    lVar7 = 0x30;
    if (fVar9 / (float)(this->TexelSize).field0_0x0._s_0.X < this->WireframeThickness) {
      lVar7 = 0x20;
    }
    puVar1 = (undefined8 *)((longlong)&this->_padding_ + lVar7);
    uVar5 = puVar1[1];
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar1;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar5;
  }
  return __return_storage_ptr__;
}

// Setup @ 14c9187a0

void __thiscall
UE::Geometry::FMeshUVShellMapEvaluator::Setup
          (FMeshUVShellMapEvaluator *this,FMeshBaseBaker *param_1,FEvaluationContext *param_2)

{
  TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->EvalData = this;
  param_2->Evaluate = EvaluateSample;
  param_2->AccumulateMode = Add;
  param_2->EvaluateDefault = EvaluateDefault;
  param_2->EvaluateColor = EvaluateColor;
  param_2->EvaluateChannel = EvaluateChannel;
  pTVar1 = (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
           (**(code **)(this->_padding_ + 0x10))();
  TArray<enum_UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->DataLayout,pTVar1);
  this->DetailSampler = param_1->DetailSampler;
  return;
}

