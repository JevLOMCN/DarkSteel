// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 14

// ~FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_> @ 14ca69d40

void __thiscall
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::
~FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>
          (FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ =
       (longlong)&___7__FRenderCaptureMapEvaluator_U__TVector4_M_Math_UE___Geometry_UE__6B_;
  if (*(longlong *)&this->EvaluateColorCallback != 0) {
    plVar1 = *(longlong **)&(this->EvaluateColorCallback).field_0x28;
    plVar2 = (longlong *)&(this->EvaluateColorCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->EvaluateSampleCallback != 0) {
    plVar1 = *(longlong **)&(this->EvaluateSampleCallback).field_0x28;
    plVar2 = (longlong *)&(this->EvaluateSampleCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ca69d8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// ~FRenderCaptureMapEvaluator<UE::Math::TVector<float>_> @ 14ca69da0

void __thiscall
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::
~FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>
          (FRenderCaptureMapEvaluator<UE::Math::TVector<float>_> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ =
       (longlong)&___7__FRenderCaptureMapEvaluator_U__TVector_M_Math_UE___Geometry_UE__6B_;
  if (*(longlong *)&this->EvaluateColorCallback != 0) {
    plVar1 = *(longlong **)&(this->EvaluateColorCallback).field_0x28;
    plVar2 = (longlong *)&(this->EvaluateColorCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->EvaluateSampleCallback != 0) {
    plVar1 = *(longlong **)&(this->EvaluateSampleCallback).field_0x28;
    plVar2 = (longlong *)&(this->EvaluateSampleCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ca69ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// DataLayout @ 14ca86050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::DataLayout
          (FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_> *this)

{
  ERenderCaptureChannel EVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::DataLayout(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::DataLayout(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::DataLayout(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      EVar1 = this->Channel;
      _Layout = (int *)0x0;
      _DAT_1553481c0 = 1;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,(ForAnyElementType *)
                         &`public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::DataLayout(void)const___ptr64'
                          ::__l2::Layout,1,(int *)&DAT_1553481c4);
      *_Layout = (EVar1 != WorldNormal) + 3;
      atexit(`UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::DataLayout'::
             __l2::_dynamic_atexit_destructor_for__Layout__);
      _Init_thread_footer(&`public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::DataLayout(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::DataLayout(void)const___ptr64'
              ::__l2::Layout;
    }
  }
  return (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::DataLayout(void)const___ptr64'
          ::__l2::Layout;
}

// DataLayout @ 14ca86130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::DataLayout
          (FRenderCaptureMapEvaluator<UE::Math::TVector<float>_> *this)

{
  ERenderCaptureChannel EVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::DataLayout(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::DataLayout(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::DataLayout(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      EVar1 = this->Channel;
      _Layout = (int *)0x0;
      _DAT_1553481a8 = 1;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,(ForAnyElementType *)
                         &`public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::DataLayout(void)const___ptr64'
                          ::__l2::Layout,1,(int *)&DAT_1553481ac);
      *_Layout = (EVar1 != WorldNormal) + 3;
      atexit(`UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::DataLayout'::__l2
             ::_dynamic_atexit_destructor_for__Layout__);
      _Init_thread_footer(&`public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::DataLayout(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::DataLayout(void)const___ptr64'
              ::__l2::Layout;
    }
  }
  return (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::DataLayout(void)const___ptr64'
          ::__l2::Layout;
}

// EvaluateColor @ 14ca89040

void __cdecl
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::EvaluateColor
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res8[0] = param_1;
  Core::Private::Function::CheckCallable(*(void **)((longlong)param_4 + 0x50));
  pcVar1 = *(code **)((longlong)param_4 + 0x50);
  plVar3 = (longlong *)((longlong)param_4 + 0x60);
  if (*(longlong **)((longlong)param_4 + 0x78) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_4 + 0x78);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_18,uVar2,local_res8,param_2);
  *(undefined8 *)&param_3->field0_0x0 = local_18;
  *(undefined8 *)((longlong)&param_3->field0_0x0 + 8) = uStack_10;
  return;
}

// EvaluateColor @ 14ca890c0

void __cdecl
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::EvaluateColor
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res8[0] = param_1;
  Core::Private::Function::CheckCallable(*(void **)((longlong)param_4 + 0x50));
  pcVar1 = *(code **)((longlong)param_4 + 0x50);
  plVar3 = (longlong *)((longlong)param_4 + 0x60);
  if (*(longlong **)((longlong)param_4 + 0x78) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_4 + 0x78);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_18,uVar2,local_res8,param_2);
  *(undefined8 *)&param_3->field0_0x0 = local_18;
  *(undefined8 *)((longlong)&param_3->field0_0x0 + 8) = uStack_10;
  return;
}

// EvaluateDefault @ 14ca89140

void __cdecl
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::EvaluateDefault
          (float **param_1,void *param_2)

{
  float *pfVar1;
  
  pfVar1 = *param_1;
  *pfVar1 = *(float *)((longlong)param_2 + 0x10);
  pfVar1[1] = *(float *)((longlong)param_2 + 0x14);
  pfVar1[2] = *(float *)((longlong)param_2 + 0x18);
  pfVar1[3] = *(float *)((longlong)param_2 + 0x1c);
  *param_1 = pfVar1 + 4;
  return;
}

// EvaluateDefault @ 14ca89170

void __cdecl
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::EvaluateDefault
          (float **param_1,void *param_2)

{
  float *pfVar1;
  
  pfVar1 = *param_1;
  *pfVar1 = *(float *)((longlong)param_2 + 0xc);
  pfVar1[1] = *(float *)((longlong)param_2 + 0x10);
  pfVar1[2] = *(float *)((longlong)param_2 + 0x14);
  *param_1 = pfVar1 + 3;
  return;
}

// EvaluateSample @ 14ca891a0

void __cdecl
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::EvaluateSample
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  code *pcVar1;
  float *pfVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  Core::Private::Function::CheckCallable(*(void **)((longlong)param_3 + 0x20));
  pcVar1 = *(code **)((longlong)param_3 + 0x20);
  plVar4 = (longlong *)((longlong)param_3 + 0x30);
  if (*(longlong **)((longlong)param_3 + 0x48) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_3 + 0x48);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_18,uVar3,param_2);
  pfVar2 = *param_1;
  *pfVar2 = local_18;
  pfVar2[1] = local_14;
  pfVar2[2] = local_10;
  pfVar2[3] = local_c;
  *param_1 = pfVar2 + 4;
  return;
}

// EvaluateSample @ 14ca89240

void __cdecl
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::EvaluateSample
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  code *pcVar1;
  float *pfVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float local_18;
  float local_14;
  float local_10;
  
  Core::Private::Function::CheckCallable(*(void **)((longlong)param_3 + 0x20));
  pcVar1 = *(code **)((longlong)param_3 + 0x20);
  plVar4 = (longlong *)((longlong)param_3 + 0x30);
  if (*(longlong **)((longlong)param_3 + 0x48) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_3 + 0x48);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_18,uVar3,param_2);
  pfVar2 = *param_1;
  *pfVar2 = local_18;
  pfVar2[1] = local_14;
  pfVar2[2] = local_10;
  *param_1 = pfVar2 + 3;
  return;
}

// Setup @ 14caa4b50

void __thiscall
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::Setup
          (FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_> *this,FMeshBaseBaker *param_1,
          FEvaluationContext *param_2)

{
  TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->EvalData = this;
  param_2->Evaluate = EvaluateSample;
  param_2->AccumulateMode = Add;
  param_2->EvaluateDefault = EvaluateDefault;
  param_2->EvaluateColor = EvaluateColor;
  pTVar1 = (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
           (**(code **)(this->_padding_ + 0x10))();
  TArray<enum_UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->DataLayout,pTVar1);
  return;
}

// Setup @ 14caa4bb0

void __thiscall
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::Setup
          (FRenderCaptureMapEvaluator<UE::Math::TVector<float>_> *this,FMeshBaseBaker *param_1,
          FEvaluationContext *param_2)

{
  TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->EvalData = this;
  param_2->Evaluate = EvaluateSample;
  param_2->AccumulateMode = Add;
  param_2->EvaluateDefault = EvaluateDefault;
  param_2->EvaluateColor = EvaluateColor;
  pTVar1 = (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
           (**(code **)(this->_padding_ + 0x10))();
  TArray<enum_UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->DataLayout,pTVar1);
  return;
}

// Type @ 14caa79e0

EMeshMapEvaluatorType __thiscall
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>::Type
          (FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_> *this)

{
  return RenderCapture;
}

// Type @ 14caa79f0

EMeshMapEvaluatorType __thiscall
UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>::Type
          (FRenderCaptureMapEvaluator<UE::Math::TVector<float>_> *this)

{
  return RenderCapture;
}

