// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 10

// EvaluateSample<1> @ 14c86c090

void __cdecl
UE::Geometry::FMeshNormalMapEvaluator::EvaluateSample<1>
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  float *pfVar1;
  TVector<float>_u_0 local_18;
  
  SampleFunction<1>(param_3,(TVector<float> *)&local_18._s_0,param_2);
  pfVar1 = *param_1;
  *pfVar1 = local_18._s_0.X;
  pfVar1[1] = local_18._s_0.Y;
  pfVar1[2] = local_18._s_0.Z;
  *param_1 = pfVar1 + 3;
  return;
}

// EvaluateSample<0> @ 14c86c310

void __cdecl
UE::Geometry::FMeshNormalMapEvaluator::EvaluateSample<0>
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  void *pvVar5;
  float *pfVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40 [2];
  
  pvVar5 = param_2->DetailMesh;
  iVar4 = param_2->DetailTriID;
  TMeshTangents<double>::GetInterpolatedTriangleTangent
            (*(TMeshTangents<double> **)((longlong)param_3 + 0x68),
             (param_2->BaseSample).TriangleIndex,&(param_2->BaseSample).BaryCoords,
             (TVector<double> *)&local_58._s_0,(TVector<double> *)&local_40[0]._s_0);
  (**(code **)(**(longlong **)((longlong)param_3 + 8) + 0xe8))
            (*(longlong **)((longlong)param_3 + 8),pvVar5,iVar4,&param_2->DetailBaryCoords,&local_68
            );
  fVar7 = SQRT(local_64 * local_64 + local_68 * local_68 + local_60 * local_60);
  if (fVar7 <= 0.0) {
    local_60 = 0.0;
    local_64 = 0.0;
    local_68 = 0.0;
  }
  else {
    fVar7 = __real_3f800000 / fVar7;
    local_68 = local_68 * fVar7;
    local_64 = local_64 * fVar7;
    local_60 = local_60 * fVar7;
  }
  dVar1 = (param_2->BaseNormal).field0_0x0._s_0.Y;
  dVar2 = (param_2->BaseNormal).field0_0x0._s_0.X;
  dVar3 = (param_2->BaseNormal).field0_0x0._s_0.Z;
  pfVar6 = *param_1;
  *pfVar6 = (float)local_58._s_0.Y * local_64 + (float)local_58._s_0.X * local_68 +
            (float)local_58._s_0.Z * local_60;
  pfVar6[1] = (float)(double)local_40[0]._8_8_ * local_64 +
              (float)(double)local_40[0]._0_8_ * local_68 +
              (float)(double)local_40[0]._16_8_ * local_60;
  pfVar6[2] = (float)dVar1 * local_64 + (float)dVar2 * local_68 + (float)dVar3 * local_60;
  *param_1 = pfVar6 + 3;
  return;
}

// SampleFunction<1> @ 14c875760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
UE::Geometry::FMeshNormalMapEvaluator::SampleFunction<1>
          (FMeshNormalMapEvaluator *this,TVector<float> *__return_storage_ptr__,
          FCorrespondenceSample *param_1)

{
  int iVar1;
  void *pvVar2;
  TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>
  *pTVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res20;
  float local_res24;
  float local_148;
  float local_144;
  float fStack_140;
  TVector4<float>_u_0 local_128;
  TVector2<double>_u_0 local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector4<float>_u_0 local_a8 [6];
  TImageBuilder<UE::Math::TVector4<float>_> *this_00;
  
  iVar1 = param_1->DetailTriID;
  pvVar2 = param_1->DetailMesh;
  TMeshTangents<double>::GetInterpolatedTriangleTangent
            (this->BaseMeshTangents,(param_1->BaseSample).TriangleIndex,
             &(param_1->BaseSample).BaryCoords,(TVector<double> *)&local_d8._s_0,
             (TVector<double> *)&local_c0._s_0);
  (**(code **)((longlong)*this->DetailSampler + 0xe8))
            (this->DetailSampler,pvVar2,iVar1,&param_1->DetailBaryCoords,&local_148);
  fVar14 = __real_3f800000;
  fVar8 = SQRT(local_148 * local_148 + local_144 * local_144 + fStack_140 * fStack_140);
  if (fVar8 <= 0.0) {
    local_144 = 0.0;
    fStack_140 = 0.0;
    local_148 = 0.0;
  }
  else {
    fVar8 = __real_3f800000 / fVar8;
    local_148 = local_148 * fVar8;
    local_144 = local_144 * fVar8;
    fStack_140 = fStack_140 * fVar8;
  }
  fVar13 = fStack_140;
  fVar12 = local_144;
  fVar8 = local_148;
  iVar4 = 0;
  this_00 = (TImageBuilder<UE::Math::TVector4<float>_> *)0x0;
  pTVar3 = TMapBase<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>,0>_>
           ::Find(&this->DetailNormalMaps,pvVar2);
  iVar5 = iVar4;
  if (pTVar3 != (TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>
                 *)0x0) {
    this_00 = *(TImageBuilder<UE::Math::TVector4<float>_> **)pTVar3;
    iVar4 = *(int *)&pTVar3->field_0x8;
    iVar5 = *(int *)&pTVar3->field_0xc;
  }
  if (this_00 != (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) {
    (**(code **)((longlong)*this->DetailSampler + 0x100))
              (this->DetailSampler,pvVar2,param_1->DetailTriID,&param_1->DetailBaryCoords,&local_f0,
               &local_108);
    (**(code **)((longlong)*this->DetailSampler + 0xf0))
              (this->DetailSampler,pvVar2,iVar1,&param_1->DetailBaryCoords,iVar4,&local_res20);
    dVar6 = (double)local_res20;
    local_a8[0]._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_a8[0]._8_8_ = _UNK_150689648;
    dVar10 = (double)local_res24;
    if (0.0 <= dVar6) {
      if (__real_3ff0000000000000 <= dVar6) {
        dVar6 = __real_3ff0000000000000;
      }
    }
    else {
      dVar6 = 0.0;
    }
    dVar7 = 0.0;
    if ((0.0 <= dVar10) && (dVar7 = dVar10, __real_3ff0000000000000 <= dVar10)) {
      dVar7 = __real_3ff0000000000000;
    }
    local_118._s_0.X = (double)(this_00->Dimensions).Width * dVar6;
    local_118._s_0.Y = (double)(this_00->Dimensions).Height * dVar7;
    TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<float,0>
              (this_00,(TVector4<float> *)&local_128._s_0,(TVector2<double> *)&local_118._s_0,
               (TVector4<float> *)&local_a8[0]._s_0);
    fVar11 = (local_128._s_0.X + local_128._s_0.X) -
             UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
    fVar9 = (local_128._s_0.Z + local_128._s_0.Z) -
            UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    fVar12 = (local_128._s_0.Y + local_128._s_0.Y) -
             UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
    fVar8 = fVar11;
    fVar13 = fVar9;
    if (iVar5 == 0) {
      fVar13 = (float)local_f8 * fVar12 + (float)local_e0 * fVar11 + fVar9 * fStack_140;
      fVar8 = (float)local_108 * fVar12 + (float)local_f0 * fVar11 + fVar9 * local_148;
      fVar12 = (float)local_100 * fVar12 + (float)local_e8 * fVar11 + fVar9 * local_144;
    }
    fVar9 = SQRT(fVar12 * fVar12 + fVar8 * fVar8 + fVar13 * fVar13);
    if (fVar9 <= 0.0) {
      fVar13 = 0.0;
      fVar12 = 0.0;
      fVar8 = 0.0;
    }
    else {
      fVar14 = fVar14 / fVar9;
      fVar13 = fVar13 * fVar14;
      fVar12 = fVar12 * fVar14;
      fVar8 = fVar8 * fVar14;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (float)local_d8._s_0.X * fVar8 + (float)local_d8._s_0.Y * fVar12 +
       (float)local_d8._s_0.Z * fVar13;
  dVar6 = (param_1->BaseNormal).field0_0x0._s_0.Y;
  dVar10 = (param_1->BaseNormal).field0_0x0._s_0.X;
  dVar7 = (param_1->BaseNormal).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (float)local_c0._s_0.X * fVar8 + (float)local_c0._s_0.Y * fVar12 +
       (float)local_c0._s_0.Z * fVar13;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (float)dVar6 * fVar12 + (float)dVar10 * fVar8 + (float)dVar7 * fVar13;
  return __return_storage_ptr__;
}

// SampleFunction<0> @ 14c877de0

TVector<float> * __thiscall
UE::Geometry::FMeshNormalMapEvaluator::SampleFunction<0>
          (FMeshNormalMapEvaluator *this,TVector<float> *__return_storage_ptr__,
          FCorrespondenceSample *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  void *pvVar5;
  float fVar6;
  float local_58;
  float local_54;
  float local_50;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  pvVar5 = param_1->DetailMesh;
  iVar4 = param_1->DetailTriID;
  TMeshTangents<double>::GetInterpolatedTriangleTangent
            (this->BaseMeshTangents,(param_1->BaseSample).TriangleIndex,
             &(param_1->BaseSample).BaryCoords,(TVector<double> *)&local_48._s_0,
             (TVector<double> *)&local_30._s_0);
  (**(code **)((longlong)*this->DetailSampler + 0xe8))
            (this->DetailSampler,pvVar5,iVar4,&param_1->DetailBaryCoords,&local_58);
  fVar6 = SQRT(local_58 * local_58 + local_54 * local_54 + local_50 * local_50);
  if (fVar6 <= 0.0) {
    local_50 = 0.0;
    local_54 = 0.0;
    local_58 = 0.0;
  }
  else {
    fVar6 = __real_3f800000 / fVar6;
    local_58 = local_58 * fVar6;
    local_54 = local_54 * fVar6;
    local_50 = local_50 * fVar6;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (float)local_48._s_0.X * local_58 + (float)local_48._s_0.Y * local_54 +
       (float)local_48._s_0.Z * local_50;
  dVar1 = (param_1->BaseNormal).field0_0x0._s_0.Y;
  dVar2 = (param_1->BaseNormal).field0_0x0._s_0.X;
  dVar3 = (param_1->BaseNormal).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (float)local_30._s_0.X * local_58 + (float)local_30._s_0.Y * local_54 +
       (float)local_30._s_0.Z * local_50;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (float)dVar1 * local_54 + (float)dVar2 * local_58 + (float)dVar3 * local_50;
  return __return_storage_ptr__;
}

// operator() @ 14c8a5b40

void __thiscall
`UE::Geometry::FMeshNormalMapEvaluator::Setup'::__l2::<lambda_1>::operator()
          (void *this,void *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  TPairInitializer<void_const_*_const_&,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>_const_&>
  local_res8;
  TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>
  **local_18;
  longlong local_10;
  
  local_res8.Value = param_1;
  lVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 8) + 0x38))();
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0xc);
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 8) + 200))
                      (*(longlong **)(*(longlong *)this + 8),local_res8.Value,
                       *(undefined4 *)(lVar3 + 8));
    if ((cVar2 != '\0') &&
       ((iVar1 != 0 ||
        (cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 8) + 0xd0))
                           (*(longlong **)(*(longlong *)this + 8),local_res8.Value), cVar2 != '\0'))
       )) {
      local_18 = &local_res8.Value;
      local_10 = lVar3;
      TSet<TTuple<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>_>,TDefaultMapHashableKeyFuncs<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<void_const_*_const_&,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>_const_&>_>
                ((void *)(*(longlong *)this + 0x10),&local_res8,(bool *)&local_18);
      *(undefined1 *)(*(longlong *)this + 0x60) = 1;
    }
  }
  return;
}

// DataLayout @ 14c8d6c40

TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FMeshNormalMapEvaluator::DataLayout(FMeshNormalMapEvaluator *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,&::Layout.AllocatorInstance,1,&::Layout.ArrayMax);
      *(undefined4 *)::Layout.AllocatorInstance.Data = 3;
      atexit(`UE::Geometry::FMeshNormalMapEvaluator::DataLayout'::__l2::
             _dynamic_atexit_destructor_for__Layout__);
      _Init_thread_footer(&::_TSS0);
      return &::Layout;
    }
  }
  return &::Layout;
}

// EvaluateChannel @ 14c8e0df0

void __cdecl
UE::Geometry::FMeshNormalMapEvaluator::EvaluateChannel
          (int param_1,float **param_2,float *param_3,void *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6589471557192515659>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshNormalMapEvaluator.cpp"
                     ,0x4b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_2 = *param_2 + 1;
  *param_3 = 0.0;
  return;
}

// EvaluateColor @ 14c8e10e0

void __cdecl
UE::Geometry::FMeshNormalMapEvaluator::EvaluateColor
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = *param_2;
  fVar2 = (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y + pfVar1[1]) * __real_3f000000;
  fVar3 = (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z + pfVar1[2]) * __real_3f000000;
  (param_3->field0_0x0)._s_0.X =
       (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X + *pfVar1) * __real_3f000000;
  (param_3->field0_0x0)._s_0.Y = fVar2;
  (param_3->field0_0x0)._s_0.Z = fVar3;
  (param_3->field0_0x0)._s_0.W = 1.0;
  *param_2 = *param_2 + 3;
  return;
}

// EvaluateDefault @ 14c8e1250

void __cdecl UE::Geometry::FMeshNormalMapEvaluator::EvaluateDefault(float **param_1,void *param_2)

{
  float *pfVar1;
  
  pfVar1 = *param_1;
  *pfVar1 = *(float *)((longlong)param_2 + 0x70);
  pfVar1[1] = *(float *)((longlong)param_2 + 0x74);
  pfVar1[2] = *(float *)((longlong)param_2 + 0x78);
  *param_1 = pfVar1 + 3;
  return;
}

// Setup @ 14c917d90

void __thiscall
UE::Geometry::FMeshNormalMapEvaluator::Setup
          (FMeshNormalMapEvaluator *this,FMeshBaseBaker *param_1,FEvaluationContext *param_2)

{
  IMeshBakerDetailSampler *pIVar1;
  code *pcVar2;
  TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *pTVar3;
  FMeshNormalMapEvaluator *local_res8;
  code *local_18;
  FMeshNormalMapEvaluator **local_10;
  
  pIVar1 = param_1->DetailSampler;
  local_10 = &local_res8;
  this->DetailSampler = pIVar1;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshNormalMapEvaluator::Setup'::__l2::<lambda_1>,void,void_const_*>
             ::Call;
  local_res8 = this;
  (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_18);
  this->BaseMeshTangents = (param_1->TargetMeshTangents).Object;
  pcVar2 = EvaluateSample<0>;
  if (this->bHasDetailNormalTextures != false) {
    pcVar2 = EvaluateSample<1>;
  }
  param_2->EvalData = this;
  param_2->Evaluate = pcVar2;
  param_2->AccumulateMode = Add;
  param_2->EvaluateDefault = EvaluateDefault;
  param_2->EvaluateColor = EvaluateColor;
  param_2->EvaluateChannel = EvaluateChannel;
  pTVar3 = (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
           (**(code **)(this->_padding_ + 0x10))(this);
  TArray<enum_UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->DataLayout,pTVar3);
  return;
}

