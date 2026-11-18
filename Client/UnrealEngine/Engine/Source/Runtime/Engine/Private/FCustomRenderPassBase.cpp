// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FCustomRenderPassBase @ 1483e1260

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FCustomRenderPassBase * __thiscall
FCustomRenderPassBase::FCustomRenderPassBase
          (FCustomRenderPassBase *this,FString *param_1,ERenderMode param_2,ERenderOutput param_3,
          TIntPoint<int> *param_4)

{
  this->_padding_ = (longlong)&___7FCustomRenderPassBase__6B_;
  ::FString::FString(&this->DebugName,param_1);
  this->RenderMode = param_2;
  this->RenderOutput = param_3;
  this->bSceneColorWithTranslucent = false;
  this->bSceneColorIsUserSceneTexture = false;
  this->RenderTargetTexture = (FRDGTexture *)0x0;
  (this->RenderTargetSize).field0_0x0 = param_4->field0_0x0;
  (this->Views).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Views).ArrayNum = 0;
  (this->Views).ArrayMax = 0;
  *(undefined8 *)&this->UserDatas = 0;
  *(undefined8 *)&(this->UserDatas).field_0x8 = 0;
  *(undefined8 *)&(this->UserDatas).field_0x20 = 0;
  *(undefined4 *)&(this->UserDatas).field_0x28 = 0;
  *(undefined4 *)&(this->UserDatas).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserDatas).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserDatas).field_0x34 = 0;
  *(undefined8 *)&(this->UserDatas).field_0x40 = 0;
  *(undefined4 *)&(this->UserDatas).field_0x48 = 0;
  this->RenderCaptureType = NoCapture;
  (this->RenderCaptureFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderCaptureFileName).Data.ArrayNum = 0;
  (this->RenderCaptureFileName).Data.ArrayMax = 0;
  return this;
}

// operator() @ 1483ec400

void __thiscall
`FCustomRenderPassBase::BeginPass'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  IRenderCaptureProvider *pIVar1;
  
  pIVar1 = IRenderCaptureProvider::Get();
                    /* WARNING: Could not recover jumptable at 0x0001483ec435. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_1,1,this);
  return;
}

// operator() @ 1483ec440

void __thiscall
`FCustomRenderPassBase::EndPass'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  IRenderCaptureProvider *pIVar1;
  
  pIVar1 = IRenderCaptureProvider::Get();
                    /* WARNING: Could not recover jumptable at 0x0001483ec460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,param_1,*(code **)((longlong)*pIVar1 + 0x18));
  return;
}

// BeginPass @ 1483eff20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FCustomRenderPassBase::BeginPass(FCustomRenderPassBase *this,FRDGBuilder *param_1)

{
  int *piVar1;
  int iVar2;
  FRDGEventName *pFVar3;
  void *this_00;
  TRDGEmptyLambdaPass<_public:_void___cdecl_FCustomRenderPassBase::BeginPass(FRDGBuilder_&)_::_5_::<lambda_1>_>
  *pTVar4;
  FString local_38;
  FRDGEventName local_28;
  
  if ((this->RenderCaptureType == Capture) || (this->RenderCaptureType == BeginCapture)) {
    ::FString::FString(&local_38,&this->RenderCaptureFileName);
    pFVar3 = FRDGEventName::FRDGEventName(&local_28,1,L"BeginCapture");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar3,NeverCull);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x198,8);
    pTVar4 = TRDGEmptyLambdaPass<`FCustomRenderPassBase::BeginPass'::__l5::<lambda_1>_>::
             TRDGEmptyLambdaPass<_FCustomRenderPassBase::BeginPass_::__l5::<lambda_1>_>
                       (this_00,pFVar3,NeverCull,(<lambda_1> *)&local_38);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar2 = (param_1->Passes).Array.ArrayNum;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar2 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar4;
    *(int *)&pTVar4->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar4);
    if (local_28.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001483f0040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_1);
  return;
}

// EndPass @ 1483ff9b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FCustomRenderPassBase::EndPass(FCustomRenderPassBase *this,FRDGBuilder *param_1)

{
  int *piVar1;
  int iVar2;
  FRDGEventName *pFVar3;
  void *this_00;
  TRDGEmptyLambdaPass<_public:_void___cdecl_FCustomRenderPassBase::EndPass(FRDGBuilder_&)_::_5_::<lambda_1>_>
  *pTVar4;
  <lambda_1> local_res8 [8];
  FRDGEventName local_28;
  
  (**(code **)(this->_padding_ + 0x28))();
  if ((this->RenderCaptureType == Capture) || (this->RenderCaptureType == EndCapture)) {
    pFVar3 = FRDGEventName::FRDGEventName(&local_28,1,L"EndCapture");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar3,NeverCull);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,400,8);
    pTVar4 = TRDGEmptyLambdaPass<`FCustomRenderPassBase::EndPass'::__l5::<lambda_1>_>::
             TRDGEmptyLambdaPass<_FCustomRenderPassBase::EndPass_::__l5::<lambda_1>_>
                       (this_00,pFVar3,NeverCull,local_res8);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar2 = (param_1->Passes).Array.ArrayNum;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar2 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar4;
    *(int *)&pTVar4->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar4);
    if (local_28.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetSceneCaptureSource @ 14840a9b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

ESceneCaptureSource __thiscall
FCustomRenderPassBase::GetSceneCaptureSource(FCustomRenderPassBase *this)

{
  ERenderOutput EVar1;
  ESceneCaptureSource EVar2;
  
  EVar1 = this->RenderOutput;
  if (EVar1 == SceneDepth) {
    return SCS_SceneDepth;
  }
  if (EVar1 == DeviceDepth) {
    return SCS_DeviceDepth;
  }
  if (EVar1 == SceneColorAndDepth) {
    return SCS_SceneColorSceneDepth;
  }
  if (EVar1 == SceneColorAndAlpha) {
    return SCS_SceneColorHDR;
  }
  if (EVar1 == SceneColorNoAlpha) {
    return SCS_SceneColorHDRNoAlpha;
  }
  if (EVar1 == BaseColor) {
    return SCS_BaseColor;
  }
  EVar2 = SCS_MAX;
  if (EVar1 == Normal) {
    EVar2 = SCS_Normal;
  }
  return EVar2;
}

// GetUserData @ 14840b850

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

ICustomRenderPassUserData * __thiscall
FCustomRenderPassBase::GetUserData(FCustomRenderPassBase *this,FName *param_1)

{
  TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_> *pTVar1;
  
  pTVar1 = TMapBase<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>,0>_>
           ::Find((TMapBase<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>,0>_>
                   *)&this->UserDatas,*param_1);
  if (pTVar1 != (TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_> *)
                0x0) {
    return pTVar1->Ptr;
  }
  return (ICustomRenderPassUserData *)0x0;
}

// PerformRenderCapture @ 148418660

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FCustomRenderPassBase::PerformRenderCapture
          (FCustomRenderPassBase *this,ERenderCaptureType param_1,FString *param_2)

{
  int iVar1;
  IModularFeatures *pIVar2;
  
  pIVar2 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  pIVar2 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"RenderCaptureProvider");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  pIVar2 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  if ((0 < iVar1) && (param_1 != NoCapture)) {
    this->RenderCaptureType = param_1;
    ::FString::operator=(&this->RenderCaptureFileName,param_2);
  }
  return;
}

// PostRender @ 1484189b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FCustomRenderPassBase::PostRender(FCustomRenderPassBase *this,FRDGBuilder *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484189b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))();
  return;
}

// PreRender @ 1484189d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FCustomRenderPassBase::PreRender(FCustomRenderPassBase *this,FRDGBuilder *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484189d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))();
  return;
}

// SetUserData @ 148426290

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FCustomRenderPassBase::SetUserData
          (FCustomRenderPassBase *this,
          TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_> *param_1)

{
  undefined8 local_18;
  TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_> *local_10;
  
  local_18 = (**(code **)((longlong)*param_1->Ptr + 8))();
  local_10 = param_1;
  TSet<TTuple<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>_&&>_>
            ((TSet<TTuple<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>,0>,FDefaultSetAllocator>
              *)&this->UserDatas,
             (TPairInitializer<FName_const_&,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>_&&>
              *)&stack0x00000008,(bool *)&local_18);
  return;
}

