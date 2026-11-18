// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 21

// FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> @ 14eb055d0

FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> * __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *this,
          FRuntimeConf *param_1,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__FModelInstanceORTRunSync_VIModelInstanceCPU_NNE_UE__UFTensorBindingCPU_23__Private_NNERuntimeORT_UE__6B_
  ;
  (this->RuntimeConf).ExecutionMode = param_1->ExecutionMode;
  (this->TempDirForModelWithExternalData).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TempDirForModelWithExternalData).Data.ArrayNum = 0;
  (this->TempDirForModelWithExternalData).Data.ArrayMax = 0;
  (this->Environment).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Environment).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Session).Ptr = (Session *)0x0;
  (this->Allocator).Ptr = (AllocatorWithDefaultOptions *)0x0;
  (this->SessionOptions).Ptr = (SessionOptions *)0x0;
  (this->MemoryInfo).Ptr = (MemoryInfo *)0x0;
  (this->InputTensorsORTType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTensorsORTType).ArrayNum = 0;
  (this->InputTensorsORTType).ArrayMax = 0;
  (this->OutputTensorsORTType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTensorsORTType).ArrayNum = 0;
  (this->OutputTensorsORTType).ArrayMax = 0;
  (this->InputTensorNameValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTensorNameValues).ArrayNum = 0;
  (this->InputTensorNameValues).ArrayMax = 0;
  (this->OutputTensorNameValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTensorNameValues).ArrayNum = 0;
  (this->OutputTensorNameValues).ArrayMax = 0;
  (this->InputTensorNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTensorNames).ArrayNum = 0;
  (this->InputTensorNames).ArrayMax = 0;
  (this->OutputTensorNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTensorNames).ArrayNum = 0;
  (this->OutputTensorNames).ArrayMax = 0;
  (this->InputTensors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTensors).ArrayNum = 0;
  (this->InputTensors).ArrayMax = 0;
  (this->OutputTensors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTensors).ArrayNum = 0;
  (this->OutputTensors).ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> @ 14eb056d0

FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> * __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> *this,
          FRuntimeConf *param_1,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__FModelInstanceORTRunSync_VIModelInstanceGPU_NNE_UE__UFTensorBindingCPU_23__Private_NNERuntimeORT_UE__6B_
  ;
  (this->RuntimeConf).ExecutionMode = param_1->ExecutionMode;
  (this->TempDirForModelWithExternalData).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TempDirForModelWithExternalData).Data.ArrayNum = 0;
  (this->TempDirForModelWithExternalData).Data.ArrayMax = 0;
  (this->Environment).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Environment).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Session).Ptr = (Session *)0x0;
  (this->Allocator).Ptr = (AllocatorWithDefaultOptions *)0x0;
  (this->SessionOptions).Ptr = (SessionOptions *)0x0;
  (this->MemoryInfo).Ptr = (MemoryInfo *)0x0;
  (this->InputTensorsORTType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTensorsORTType).ArrayNum = 0;
  (this->InputTensorsORTType).ArrayMax = 0;
  (this->OutputTensorsORTType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTensorsORTType).ArrayNum = 0;
  (this->OutputTensorsORTType).ArrayMax = 0;
  (this->InputTensorNameValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTensorNameValues).ArrayNum = 0;
  (this->InputTensorNameValues).ArrayMax = 0;
  (this->OutputTensorNameValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTensorNameValues).ArrayNum = 0;
  (this->OutputTensorNameValues).ArrayMax = 0;
  (this->InputTensorNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTensorNames).ArrayNum = 0;
  (this->InputTensorNames).ArrayMax = 0;
  (this->OutputTensorNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTensorNames).ArrayNum = 0;
  (this->OutputTensorNames).ArrayMax = 0;
  (this->InputTensors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTensors).ArrayNum = 0;
  (this->InputTensors).ArrayMax = 0;
  (this->OutputTensors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTensors).ArrayNum = 0;
  (this->OutputTensors).ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> @ 14eb057d0

FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> * __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> *this,
          FRuntimeConf *param_1,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__FModelInstanceORTRunSync_VIModelInstanceNPU_NNE_UE__UFTensorBindingCPU_23__Private_NNERuntimeORT_UE__6B_
  ;
  (this->RuntimeConf).ExecutionMode = param_1->ExecutionMode;
  (this->TempDirForModelWithExternalData).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TempDirForModelWithExternalData).Data.ArrayNum = 0;
  (this->TempDirForModelWithExternalData).Data.ArrayMax = 0;
  (this->Environment).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Environment).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Session).Ptr = (Session *)0x0;
  (this->Allocator).Ptr = (AllocatorWithDefaultOptions *)0x0;
  (this->SessionOptions).Ptr = (SessionOptions *)0x0;
  (this->MemoryInfo).Ptr = (MemoryInfo *)0x0;
  (this->InputTensorsORTType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTensorsORTType).ArrayNum = 0;
  (this->InputTensorsORTType).ArrayMax = 0;
  (this->OutputTensorsORTType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTensorsORTType).ArrayNum = 0;
  (this->OutputTensorsORTType).ArrayMax = 0;
  (this->InputTensorNameValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTensorNameValues).ArrayNum = 0;
  (this->InputTensorNameValues).ArrayMax = 0;
  (this->OutputTensorNameValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTensorNameValues).ArrayNum = 0;
  (this->OutputTensorNameValues).ArrayMax = 0;
  (this->InputTensorNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTensorNames).ArrayNum = 0;
  (this->InputTensorNames).ArrayMax = 0;
  (this->OutputTensorNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTensorNames).ArrayNum = 0;
  (this->OutputTensorNames).ArrayMax = 0;
  (this->InputTensors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTensors).ArrayNum = 0;
  (this->InputTensors).ArrayMax = 0;
  (this->OutputTensors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTensors).ArrayNum = 0;
  (this->OutputTensors).ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> @ 14eb064e0

/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::
~FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *this)

{
  Session *pSVar1;
  FScriptContainerElement *pFVar2;
  MemoryInfo *pMVar3;
  SessionOptions *pSVar4;
  char cVar5;
  IFileManager *pIVar6;
  wchar_t *pwVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FModelInstanceORTRunSync_VIModelInstanceCPU_NNE_UE__UFTensorBindingCPU_23__Private_NNERuntimeORT_UE__6B_
  ;
  pSVar1 = (this->Session).Ptr;
  if (pSVar1 != (Session *)0x0) {
    (this->Session).Ptr = (Session *)0x0;
    (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*pSVar1);
    ::operator_delete(pSVar1,8);
  }
  if (1 < (this->TempDirForModelWithExternalData).Data.ArrayNum) {
    pIVar6 = IFileManager::Get();
    if ((this->TempDirForModelWithExternalData).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(this->TempDirForModelWithExternalData).Data.AllocatorInstance.Data;
    }
    cVar5 = (**(code **)((longlong)*pIVar6 + 0x68))(pIVar6,pwVar7,0,1);
    if ((cVar5 == '\0') && (2 < (byte)LogNNERuntimeORT._0_1_)) {
      Logging::Private::BasicLog<3>
                (&`public:_virtual___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::~FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>(void)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
            ((FTensor *)(this->OutputTensors).AllocatorInstance.Data,(this->OutputTensors).ArrayNum)
  ;
  pFVar2 = (this->OutputTensors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
            ((FTensor *)(this->InputTensors).AllocatorInstance.Data,(this->InputTensors).ArrayNum);
  pFVar2 = (this->InputTensors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OutputTensorNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputTensorNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int>
            ((unique_ptr<char,Ort::detail::AllocatedFree> *)
             (this->OutputTensorNameValues).AllocatorInstance.Data,
             (this->OutputTensorNameValues).ArrayNum);
  pFVar2 = (this->OutputTensorNameValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int>
            ((unique_ptr<char,Ort::detail::AllocatedFree> *)
             (this->InputTensorNameValues).AllocatorInstance.Data,
             (this->InputTensorNameValues).ArrayNum);
  pFVar2 = (this->InputTensorNameValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OutputTensorsORTType).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputTensorsORTType).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pMVar3 = (this->MemoryInfo).Ptr;
  if (pMVar3 != (MemoryInfo *)0x0) {
    (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)*pMVar3);
    ::operator_delete(pMVar3,8);
  }
  pSVar4 = (this->SessionOptions).Ptr;
  if (pSVar4 != (SessionOptions *)0x0) {
    (*Ort::Global<void>::api_->ReleaseSessionOptions)((OrtSessionOptions *)*pSVar4);
    ::operator_delete(pSVar4,8);
  }
  ::operator_delete((this->Allocator).Ptr,8);
  pSVar1 = (this->Session).Ptr;
  if (pSVar1 != (Session *)0x0) {
    (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*pSVar1);
    ::operator_delete(pSVar1,8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->TempDirForModelWithExternalData).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FModelInstanceORTBase<UE::NNE::IModelInstanceCPU>::
  ~FModelInstanceORTBase<UE::NNE::IModelInstanceCPU>
            ((FModelInstanceORTBase<UE::NNE::IModelInstanceCPU> *)this);
  return;
}

// ~FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> @ 14eb06720

/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::
~FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> *this)

{
  Session *pSVar1;
  FScriptContainerElement *pFVar2;
  MemoryInfo *pMVar3;
  SessionOptions *pSVar4;
  char cVar5;
  IFileManager *pIVar6;
  wchar_t *pwVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FModelInstanceORTRunSync_VIModelInstanceGPU_NNE_UE__UFTensorBindingCPU_23__Private_NNERuntimeORT_UE__6B_
  ;
  pSVar1 = (this->Session).Ptr;
  if (pSVar1 != (Session *)0x0) {
    (this->Session).Ptr = (Session *)0x0;
    (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*pSVar1);
    ::operator_delete(pSVar1,8);
  }
  if (1 < (this->TempDirForModelWithExternalData).Data.ArrayNum) {
    pIVar6 = IFileManager::Get();
    if ((this->TempDirForModelWithExternalData).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(this->TempDirForModelWithExternalData).Data.AllocatorInstance.Data;
    }
    cVar5 = (**(code **)((longlong)*pIVar6 + 0x68))(pIVar6,pwVar7,0,1);
    if ((cVar5 == '\0') && (2 < (byte)LogNNERuntimeORT._0_1_)) {
      Logging::Private::BasicLog<3>
                (&`public:_virtual___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::~FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>(void)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
            ((FTensor *)(this->OutputTensors).AllocatorInstance.Data,(this->OutputTensors).ArrayNum)
  ;
  pFVar2 = (this->OutputTensors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
            ((FTensor *)(this->InputTensors).AllocatorInstance.Data,(this->InputTensors).ArrayNum);
  pFVar2 = (this->InputTensors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OutputTensorNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputTensorNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int>
            ((unique_ptr<char,Ort::detail::AllocatedFree> *)
             (this->OutputTensorNameValues).AllocatorInstance.Data,
             (this->OutputTensorNameValues).ArrayNum);
  pFVar2 = (this->OutputTensorNameValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int>
            ((unique_ptr<char,Ort::detail::AllocatedFree> *)
             (this->InputTensorNameValues).AllocatorInstance.Data,
             (this->InputTensorNameValues).ArrayNum);
  pFVar2 = (this->InputTensorNameValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OutputTensorsORTType).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputTensorsORTType).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pMVar3 = (this->MemoryInfo).Ptr;
  if (pMVar3 != (MemoryInfo *)0x0) {
    (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)*pMVar3);
    ::operator_delete(pMVar3,8);
  }
  pSVar4 = (this->SessionOptions).Ptr;
  if (pSVar4 != (SessionOptions *)0x0) {
    (*Ort::Global<void>::api_->ReleaseSessionOptions)((OrtSessionOptions *)*pSVar4);
    ::operator_delete(pSVar4,8);
  }
  ::operator_delete((this->Allocator).Ptr,8);
  pSVar1 = (this->Session).Ptr;
  if (pSVar1 != (Session *)0x0) {
    (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*pSVar1);
    ::operator_delete(pSVar1,8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->TempDirForModelWithExternalData).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FModelInstanceORTBase<UE::NNE::IModelInstanceGPU>::
  ~FModelInstanceORTBase<UE::NNE::IModelInstanceGPU>
            ((FModelInstanceORTBase<UE::NNE::IModelInstanceGPU> *)this);
  return;
}

// ~FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> @ 14eb06960

/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::
~FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> *this)

{
  Session *pSVar1;
  FScriptContainerElement *pFVar2;
  MemoryInfo *pMVar3;
  SessionOptions *pSVar4;
  char cVar5;
  IFileManager *pIVar6;
  wchar_t *pwVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FModelInstanceORTRunSync_VIModelInstanceNPU_NNE_UE__UFTensorBindingCPU_23__Private_NNERuntimeORT_UE__6B_
  ;
  pSVar1 = (this->Session).Ptr;
  if (pSVar1 != (Session *)0x0) {
    (this->Session).Ptr = (Session *)0x0;
    (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*pSVar1);
    ::operator_delete(pSVar1,8);
  }
  if (1 < (this->TempDirForModelWithExternalData).Data.ArrayNum) {
    pIVar6 = IFileManager::Get();
    if ((this->TempDirForModelWithExternalData).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(this->TempDirForModelWithExternalData).Data.AllocatorInstance.Data;
    }
    cVar5 = (**(code **)((longlong)*pIVar6 + 0x68))(pIVar6,pwVar7,0,1);
    if ((cVar5 == '\0') && (2 < (byte)LogNNERuntimeORT._0_1_)) {
      Logging::Private::BasicLog<3>
                (&`public:_virtual___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::~FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>(void)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
            ((FTensor *)(this->OutputTensors).AllocatorInstance.Data,(this->OutputTensors).ArrayNum)
  ;
  pFVar2 = (this->OutputTensors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
            ((FTensor *)(this->InputTensors).AllocatorInstance.Data,(this->InputTensors).ArrayNum);
  pFVar2 = (this->InputTensors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OutputTensorNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputTensorNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int>
            ((unique_ptr<char,Ort::detail::AllocatedFree> *)
             (this->OutputTensorNameValues).AllocatorInstance.Data,
             (this->OutputTensorNameValues).ArrayNum);
  pFVar2 = (this->OutputTensorNameValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int>
            ((unique_ptr<char,Ort::detail::AllocatedFree> *)
             (this->InputTensorNameValues).AllocatorInstance.Data,
             (this->InputTensorNameValues).ArrayNum);
  pFVar2 = (this->InputTensorNameValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OutputTensorsORTType).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputTensorsORTType).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pMVar3 = (this->MemoryInfo).Ptr;
  if (pMVar3 != (MemoryInfo *)0x0) {
    (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)*pMVar3);
    ::operator_delete(pMVar3,8);
  }
  pSVar4 = (this->SessionOptions).Ptr;
  if (pSVar4 != (SessionOptions *)0x0) {
    (*Ort::Global<void>::api_->ReleaseSessionOptions)((OrtSessionOptions *)*pSVar4);
    ::operator_delete(pSVar4,8);
  }
  ::operator_delete((this->Allocator).Ptr,8);
  pSVar1 = (this->Session).Ptr;
  if (pSVar1 != (Session *)0x0) {
    (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*pSVar1);
    ::operator_delete(pSVar1,8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->TempDirForModelWithExternalData).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FModelInstanceORTBase<UE::NNE::IModelInstanceNPU>::
  ~FModelInstanceORTBase<UE::NNE::IModelInstanceNPU>
            ((FModelInstanceORTBase<UE::NNE::IModelInstanceNPU> *)this);
  return;
}

// ConfigureTensors @ 14eb0c8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */

bool __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::ConfigureTensors
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *this,
          bool param_1)

{
  Session SVar1;
  AllocatorWithDefaultOptions AVar2;
  char *pcVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulong64 uVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  int *piVar12;
  ONNXTensorElementDataType OVar13;
  TArray<std::unique_ptr<char,Ort::detail::AllocatedFree>,TSizedDefaultAllocator<32>_> *pTVar14;
  OrtTensorTypeAndShapeInfo *pOVar15;
  TArray<ONNXTensorElementDataType,TSizedDefaultAllocator<32>_> *pTVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  OrtStatus *pOVar21;
  ulonglong uVar22;
  char **ppcVar23;
  OrtTypeInfo **ppOVar24;
  TypeInfoORT *pTVar25;
  long64 *plVar26;
  long64 *plVar27;
  ForElementType<int> FVar28;
  FString *pFVar29;
  longlong lVar30;
  uint uVar31;
  long64 *plVar32;
  longlong *plVar33;
  long64 *plVar34;
  OrtTypeInfo *pOVar35;
  ulong64 uVar36;
  TArray<char_*,TSizedDefaultAllocator<32>_> *pTVar37;
  undefined1 auStackY_268 [32];
  undefined4 local_214;
  uint local_210;
  uint local_20c;
  ONNXTensorElementDataType local_208 [2];
  AllocatorWithDefaultOptions local_200;
  char *local_1f8;
  AllocatorWithDefaultOptions local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  TArray<std::unique_ptr<char,Ort::detail::AllocatedFree>,TSizedDefaultAllocator<32>_> *local_1d0;
  OrtTypeInfo *local_1c8;
  OrtTypeInfo *local_1c0;
  OrtTypeInfo *local_1b8;
  OrtTypeInfo *local_1b0;
  OrtTensorTypeAndShapeInfo *local_1a8;
  TArray<ONNXTensorElementDataType,TSizedDefaultAllocator<32>_> *local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  undefined8 local_188;
  ulonglong local_180;
  undefined8 local_178;
  undefined8 local_170;
  TArray<char_*,TSizedDefaultAllocator<32>_> *local_168;
  longlong *local_160;
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *local_158;
  uint local_150 [2];
  uint local_148 [4];
  ForElementType<int> local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TArrayView<int_const_,int> local_128;
  FString local_118;
  TypeInfoORT local_108;
  ForElementType<int> local_f8;
  int local_d0;
  int local_cc;
  FTensorDesc local_c8;
  FSymbolicTensorShape local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar9 = false;
  bVar8 = false;
  local_208[0] = ONNX_TENSOR_ELEMENT_DATA_TYPE_UNDEFINED;
  SVar1 = *(this->Session).Ptr;
  local_158 = this;
  if (param_1) {
    pOVar21 = (*Ort::Global<void>::api_->SessionGetInputCount)
                        ((OrtSession *)SVar1,(ulong64 *)local_150);
    Ort::ThrowOnError(pOVar21);
    local_210 = local_150[0];
  }
  else {
    pOVar21 = (*Ort::Global<void>::api_->SessionGetOutputCount)
                        ((OrtSession *)SVar1,(ulong64 *)local_148);
    Ort::ThrowOnError(pOVar21);
    local_210 = local_148[0];
  }
  uVar22 = (ulonglong)param_1 ^ 1;
  plVar33 = &this->_padding_ + uVar22 * 2;
  local_1a0 = &this->InputTensorsORTType + uVar22;
  pTVar37 = &this->InputTensorNames + uVar22;
  local_1d0 = &this->InputTensorNameValues + uVar22;
  piVar12 = (int *)((longlong)(plVar33 + 1) + 4);
  local_168 = pTVar37;
  local_160 = plVar33;
  if (*piVar12 < 0) {
    DestructItems<UE::NNE::FTensorDesc,int>((FTensorDesc *)*plVar33,(int)plVar33[1]);
    *(undefined4 *)(plVar33 + 1) = 0;
    if (*piVar12 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)plVar33,0,piVar12);
    }
  }
  else {
    DestructItems<UE::NNE::FTensorDesc,int>((FTensorDesc *)*plVar33,(int)plVar33[1]);
    *(undefined4 *)(plVar33 + 1) = 0;
  }
  local_20c = 0;
  bVar11 = 0;
  if (local_210 != 0) {
    do {
      uVar22 = (ulonglong)local_20c;
      SVar1 = *(this->Session).Ptr;
      AVar2 = *(this->Allocator).Ptr;
      if (param_1) {
        bVar9 = true;
        pOVar21 = (*Ort::Global<void>::api_->SessionGetInputName)
                            ((OrtSession *)SVar1,uVar22,(OrtAllocator *)AVar2,&local_1e0);
        Ort::ThrowOnError(pOVar21);
        local_1e8 = local_1e0;
        ppcVar23 = &local_1e8;
        local_1f0 = AVar2;
      }
      else {
        bVar8 = true;
        pOVar21 = (*Ort::Global<void>::api_->SessionGetOutputName)
                            ((OrtSession *)SVar1,uVar22,(OrtAllocator *)AVar2,&local_1d8);
        Ort::ThrowOnError(pOVar21);
        local_1f8 = local_1d8;
        ppcVar23 = &local_1f8;
        local_200 = AVar2;
      }
      pcVar3 = *ppcVar23;
      *ppcVar23 = (char *)0x0;
      if ((bVar8) && (bVar8 = false, local_1f8 != (char *)0x0)) {
        (**(code **)((longlong)local_200 + 0x10))((OrtAllocator *)local_200,local_1f8);
      }
      if ((bVar9) && (bVar9 = false, local_1e8 != (char *)0x0)) {
        (**(code **)((longlong)local_1f0 + 0x10))((OrtAllocator *)local_1f0,local_1e8);
      }
      pTVar14 = local_1d0;
      iVar19 = local_1d0->ArrayNum;
      if (iVar19 == local_1d0->ArrayMax) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_1d0->AllocatorInstance,&local_1d0->ArrayMax);
      }
      pTVar14->ArrayNum = iVar19 + 1;
      pFVar4 = (pTVar14->AllocatorInstance).Data;
      *(AllocatorWithDefaultOptions *)(pFVar4 + (longlong)iVar19 * 0x10) = AVar2;
      *(char **)(pFVar4 + (longlong)iVar19 * 0x10 + 8) = pcVar3;
      uVar31 = pTVar14->ArrayNum - 1;
      uVar20 = 0;
      if ((int)uVar31 < pTVar14->ArrayNum) {
        uVar20 = ~uVar31 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      uVar5 = *(undefined8 *)
               ((pTVar14->AllocatorInstance).Data + (longlong)pTVar14->ArrayNum * 0x10 + -8);
      iVar19 = pTVar37->ArrayNum;
      if (iVar19 == pTVar37->ArrayMax) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar37->AllocatorInstance,&pTVar37->ArrayMax);
      }
      bVar17 = !param_1;
      pTVar37->ArrayNum = iVar19 + 1;
      *(undefined8 *)((pTVar37->AllocatorInstance).Data + (longlong)iVar19 * 8) = uVar5;
      SVar1 = *(this->Session).Ptr;
      if (bVar17) {
        pOVar21 = (*Ort::Global<void>::api_->SessionGetOutputTypeInfo)
                            ((OrtSession *)SVar1,uVar22,&local_1c0);
        Ort::ThrowOnError(pOVar21);
        ppOVar24 = &local_1b8;
        pOVar35 = local_1c0;
      }
      else {
        pOVar21 = (*Ort::Global<void>::api_->SessionGetInputTypeInfo)
                            ((OrtSession *)SVar1,uVar22,&local_1c8);
        Ort::ThrowOnError(pOVar21);
        ppOVar24 = &local_1b0;
        pOVar35 = local_1c8;
      }
      plVar26 = (long64 *)0x0;
      bVar10 = bVar17 | bVar11;
      *ppOVar24 = (OrtTypeInfo *)0x0;
      if ((bool)(bVar17 | bVar11)) {
        bVar10 = 0;
        (*Ort::Global<void>::api_->ReleaseTypeInfo)(local_1b8);
      }
      if (!bVar17) {
        (*Ort::Global<void>::api_->ReleaseTypeInfo)(local_1b0);
      }
      pOVar21 = (*Ort::Global<void>::api_->CastTypeInfoToTensorInfo)(pOVar35,&local_1a8);
      Ort::ThrowOnError(pOVar21);
      pOVar15 = local_1a8;
      pOVar21 = (*Ort::Global<void>::api_->GetTensorElementType)(local_1a8,local_208);
      Ort::ThrowOnError(pOVar21);
      OVar13 = local_208[0];
      pTVar25 = TranslateTensorTypeORTToNNE(&local_108,local_208[0]);
      pTVar16 = local_1a0;
      uVar5 = *(undefined8 *)pTVar25;
      uVar7 = pTVar25->ElementSize;
      iVar19 = local_1a0->ArrayNum;
      if (iVar19 == local_1a0->ArrayMax) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_1a0->AllocatorInstance,&local_1a0->ArrayMax);
      }
      local_188 = 0;
      pTVar16->ArrayNum = iVar19 + 1;
      *(ONNXTensorElementDataType *)((pTVar16->AllocatorInstance).Data + (longlong)iVar19 * 4) =
           OVar13;
      local_f8.SecondaryData = (ForElementType<int>)0x0;
      local_d0 = 0;
      local_cc = 8;
      pOVar21 = (*Ort::Global<void>::api_->GetDimensionsCount)(pOVar15,&local_198);
      Ort::ThrowOnError(pOVar21);
      uVar22 = local_198;
      plVar34 = plVar26;
      plVar27 = plVar26;
      if (local_198 != 0) {
        if (0x1fffffffffffffff < local_198) goto LAB_14eb0d2a6;
        uVar36 = local_198 * 8;
        plVar26 = std::_Allocate<16,std::_Default_allocate_traits>(uVar36);
        local_190 = 0;
        plVar34 = plVar26 + uVar22;
        iVar19 = memcmp(&local_188,&local_190,8);
        if (iVar19 == 0) {
          memset(plVar26,0,uVar36);
          plVar27 = plVar34;
        }
        else {
          plVar27 = plVar26;
          if (uVar22 != 0) {
            memset(plVar26,0,uVar22 << 3);
            plVar27 = plVar34;
          }
        }
      }
      uVar22 = (longlong)plVar27 - (longlong)plVar26 >> 3;
      pOVar21 = (*Ort::Global<void>::api_->GetDimensions)(pOVar15,plVar26,uVar22);
      Ort::ThrowOnError(pOVar21);
      iVar19 = (int)uVar22;
      if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar22 & 0xffffffff);
      }
      if (local_cc < iVar19) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,iVar19,&local_f8,local_d0,&local_cc);
      }
      if (plVar26 != (long64 *)0x0) {
        uVar36 = (longlong)plVar34 - (longlong)plVar26 & 0xfffffffffffffff8;
        plVar34 = plVar26;
        if (0xfff < uVar36) {
          plVar34 = (long64 *)plVar26[-1];
          uVar36 = uVar36 + 0x27;
          if (0x1f < (ulonglong)((longlong)plVar26 + (-8 - (longlong)plVar34))) goto LAB_14eb0d249;
        }
        ::operator_delete(plVar34,uVar36);
      }
      local_170 = 0;
      pOVar21 = (*Ort::Global<void>::api_->GetDimensionsCount)(pOVar15,&local_180);
      Ort::ThrowOnError(pOVar21);
      uVar22 = local_180;
      plVar27 = (long64 *)0x0;
      plVar26 = (long64 *)0x0;
      plVar34 = (long64 *)0x0;
      if (local_180 != 0) {
        if (0x1fffffffffffffff < local_180) {
LAB_14eb0d2a6:
                    /* WARNING: Subroutine does not return */
          std::vector<__int64,std::allocator<__int64>_>::_Xlength();
        }
        uVar36 = local_180 * 8;
        plVar27 = std::_Allocate<16,std::_Default_allocate_traits>(uVar36);
        local_178 = 0;
        plVar26 = plVar27 + uVar22;
        iVar19 = memcmp(&local_170,&local_178,8);
        if (iVar19 == 0) {
          memset(plVar27,0,uVar36);
          plVar34 = plVar26;
        }
        else {
          plVar34 = plVar27;
          if (uVar22 != 0) {
            memset(plVar27,0,uVar22 << 3);
            plVar34 = plVar26;
          }
        }
      }
      pOVar21 = (*Ort::Global<void>::api_->GetDimensions)
                          (pOVar15,plVar27,(longlong)plVar34 - (longlong)plVar27 >> 3);
      Ort::ThrowOnError(pOVar21);
      for (plVar32 = plVar27; plVar32 != plVar34; plVar32 = plVar32 + 1) {
        local_214 = (undefined4)*plVar32;
        FVar28 = (ForElementType<int>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
          FVar28 = local_f8.SecondaryData;
        }
        if ((ulonglong)FVar28 <= &local_214) {
          FVar28 = (ForElementType<int>)&local_f8;
          if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
            FVar28 = local_f8.SecondaryData;
          }
          if ((&local_214 < (undefined4 *)((longlong)FVar28 + (longlong)local_cc * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
        }
        if (local_d0 == local_cc) {
          local_d0 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_f8,&local_cc);
        }
        FVar28 = (ForElementType<int>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
          FVar28 = local_f8.SecondaryData;
        }
        lVar30 = (longlong)local_d0;
        local_d0 = local_d0 + 1;
        *(undefined4 *)((longlong)FVar28 + lVar30 * 4) = local_214;
      }
      if (plVar27 != (long64 *)0x0) {
        uVar36 = (longlong)plVar26 - (longlong)plVar27 & 0xfffffffffffffff8;
        plVar26 = plVar27;
        if (0xfff < uVar36) {
          plVar26 = (long64 *)plVar27[-1];
          uVar36 = uVar36 + 0x27;
          if (0x1f < (ulonglong)((longlong)plVar27 + (-8 - (longlong)plVar26))) {
LAB_14eb0d249:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(plVar26,uVar36);
      }
      iVar19 = local_d0;
      local_138 = (ForElementType<int>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
        local_138 = local_f8.SecondaryData;
      }
      if ((local_d0 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      iStack_130 = iVar19;
      local_128._12_4_ = uStack_12c;
      local_128.ArrayNum = iVar19;
      local_128.DataPtr = (int *)local_138;
      NNE::FSymbolicTensorShape::Make(&local_78,&local_128);
      pTVar37 = local_168;
      uVar31 = local_168->ArrayNum - 1;
      uVar20 = 0;
      if ((int)uVar31 < local_168->ArrayNum) {
        uVar20 = ~uVar31 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      pFVar29 = ::FString::FString(&local_118,
                                   *(char **)((pTVar37->AllocatorInstance).Data +
                                             (longlong)pTVar37->ArrayNum * 8 + -8));
      NNE::FTensorDesc::Make(&local_c8,pFVar29,&local_78,(ENNETensorDataType)uVar5);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      uVar20 = NNE::GetTensorDataTypeSizeInBytes(local_c8.DataType);
      if ((uVar20 != uVar7) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("SymbolicTensorDesc.GetElementByteSize() == TypeInfo.ElementSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                              ,0x137,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      plVar33 = local_160;
      iVar19 = (int)local_160[1];
      if (iVar19 == *(int *)((longlong)(local_160 + 1) + 4)) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,(ForAnyElementType *)local_160,
                            (int *)((longlong)(local_160 + 1) + 4));
      }
      *(int *)(plVar33 + 1) = iVar19 + 1;
      NNE::FTensorDesc::FTensorDesc((FTensorDesc *)(*plVar33 + (longlong)iVar19 * 0x48),&local_c8);
      if (local_c8.Shape.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_c8.Shape.Data.AllocatorInstance.SecondaryData);
      }
      if (local_c8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Name.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_78.Data.AllocatorInstance.SecondaryData);
      }
      if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_f8.SecondaryData);
      }
      (*Ort::Global<void>::api_->ReleaseTypeInfo)(pOVar35);
      local_20c = local_20c + 1;
      this = local_158;
      bVar11 = bVar10;
    } while (local_20c < local_210);
  }
  return true;
}

// ConfigureTensors @ 14eb0d2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */

bool __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::ConfigureTensors
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> *this,
          bool param_1)

{
  Session SVar1;
  AllocatorWithDefaultOptions AVar2;
  char *pcVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulong64 uVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  int *piVar12;
  ONNXTensorElementDataType OVar13;
  TArray<std::unique_ptr<char,Ort::detail::AllocatedFree>,TSizedDefaultAllocator<32>_> *pTVar14;
  OrtTensorTypeAndShapeInfo *pOVar15;
  TArray<ONNXTensorElementDataType,TSizedDefaultAllocator<32>_> *pTVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  OrtStatus *pOVar21;
  ulonglong uVar22;
  char **ppcVar23;
  OrtTypeInfo **ppOVar24;
  TypeInfoORT *pTVar25;
  long64 *plVar26;
  long64 *plVar27;
  ForElementType<int> FVar28;
  FString *pFVar29;
  longlong lVar30;
  uint uVar31;
  long64 *plVar32;
  longlong *plVar33;
  long64 *plVar34;
  OrtTypeInfo *pOVar35;
  ulong64 uVar36;
  TArray<char_*,TSizedDefaultAllocator<32>_> *pTVar37;
  undefined1 auStackY_268 [32];
  undefined4 local_214;
  uint local_210;
  uint local_20c;
  ONNXTensorElementDataType local_208 [2];
  AllocatorWithDefaultOptions local_200;
  char *local_1f8;
  AllocatorWithDefaultOptions local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  TArray<std::unique_ptr<char,Ort::detail::AllocatedFree>,TSizedDefaultAllocator<32>_> *local_1d0;
  OrtTypeInfo *local_1c8;
  OrtTypeInfo *local_1c0;
  OrtTypeInfo *local_1b8;
  OrtTypeInfo *local_1b0;
  OrtTensorTypeAndShapeInfo *local_1a8;
  TArray<ONNXTensorElementDataType,TSizedDefaultAllocator<32>_> *local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  undefined8 local_188;
  ulonglong local_180;
  undefined8 local_178;
  undefined8 local_170;
  TArray<char_*,TSizedDefaultAllocator<32>_> *local_168;
  longlong *local_160;
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> *local_158;
  uint local_150 [2];
  uint local_148 [4];
  ForElementType<int> local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TArrayView<int_const_,int> local_128;
  FString local_118;
  TypeInfoORT local_108;
  ForElementType<int> local_f8;
  int local_d0;
  int local_cc;
  FTensorDesc local_c8;
  FSymbolicTensorShape local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar9 = false;
  bVar8 = false;
  local_208[0] = ONNX_TENSOR_ELEMENT_DATA_TYPE_UNDEFINED;
  SVar1 = *(this->Session).Ptr;
  local_158 = this;
  if (param_1) {
    pOVar21 = (*Ort::Global<void>::api_->SessionGetInputCount)
                        ((OrtSession *)SVar1,(ulong64 *)local_150);
    Ort::ThrowOnError(pOVar21);
    local_210 = local_150[0];
  }
  else {
    pOVar21 = (*Ort::Global<void>::api_->SessionGetOutputCount)
                        ((OrtSession *)SVar1,(ulong64 *)local_148);
    Ort::ThrowOnError(pOVar21);
    local_210 = local_148[0];
  }
  uVar22 = (ulonglong)param_1 ^ 1;
  plVar33 = &this->_padding_ + uVar22 * 2;
  local_1a0 = &this->InputTensorsORTType + uVar22;
  pTVar37 = &this->InputTensorNames + uVar22;
  local_1d0 = &this->InputTensorNameValues + uVar22;
  piVar12 = (int *)((longlong)(plVar33 + 1) + 4);
  local_168 = pTVar37;
  local_160 = plVar33;
  if (*piVar12 < 0) {
    DestructItems<UE::NNE::FTensorDesc,int>((FTensorDesc *)*plVar33,(int)plVar33[1]);
    *(undefined4 *)(plVar33 + 1) = 0;
    if (*piVar12 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)plVar33,0,piVar12);
    }
  }
  else {
    DestructItems<UE::NNE::FTensorDesc,int>((FTensorDesc *)*plVar33,(int)plVar33[1]);
    *(undefined4 *)(plVar33 + 1) = 0;
  }
  local_20c = 0;
  bVar11 = 0;
  if (local_210 != 0) {
    do {
      uVar22 = (ulonglong)local_20c;
      SVar1 = *(this->Session).Ptr;
      AVar2 = *(this->Allocator).Ptr;
      if (param_1) {
        bVar9 = true;
        pOVar21 = (*Ort::Global<void>::api_->SessionGetInputName)
                            ((OrtSession *)SVar1,uVar22,(OrtAllocator *)AVar2,&local_1e0);
        Ort::ThrowOnError(pOVar21);
        local_1e8 = local_1e0;
        ppcVar23 = &local_1e8;
        local_1f0 = AVar2;
      }
      else {
        bVar8 = true;
        pOVar21 = (*Ort::Global<void>::api_->SessionGetOutputName)
                            ((OrtSession *)SVar1,uVar22,(OrtAllocator *)AVar2,&local_1d8);
        Ort::ThrowOnError(pOVar21);
        local_1f8 = local_1d8;
        ppcVar23 = &local_1f8;
        local_200 = AVar2;
      }
      pcVar3 = *ppcVar23;
      *ppcVar23 = (char *)0x0;
      if ((bVar8) && (bVar8 = false, local_1f8 != (char *)0x0)) {
        (**(code **)((longlong)local_200 + 0x10))((OrtAllocator *)local_200,local_1f8);
      }
      if ((bVar9) && (bVar9 = false, local_1e8 != (char *)0x0)) {
        (**(code **)((longlong)local_1f0 + 0x10))((OrtAllocator *)local_1f0,local_1e8);
      }
      pTVar14 = local_1d0;
      iVar19 = local_1d0->ArrayNum;
      if (iVar19 == local_1d0->ArrayMax) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_1d0->AllocatorInstance,&local_1d0->ArrayMax);
      }
      pTVar14->ArrayNum = iVar19 + 1;
      pFVar4 = (pTVar14->AllocatorInstance).Data;
      *(AllocatorWithDefaultOptions *)(pFVar4 + (longlong)iVar19 * 0x10) = AVar2;
      *(char **)(pFVar4 + (longlong)iVar19 * 0x10 + 8) = pcVar3;
      uVar31 = pTVar14->ArrayNum - 1;
      uVar20 = 0;
      if ((int)uVar31 < pTVar14->ArrayNum) {
        uVar20 = ~uVar31 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      uVar5 = *(undefined8 *)
               ((pTVar14->AllocatorInstance).Data + (longlong)pTVar14->ArrayNum * 0x10 + -8);
      iVar19 = pTVar37->ArrayNum;
      if (iVar19 == pTVar37->ArrayMax) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar37->AllocatorInstance,&pTVar37->ArrayMax);
      }
      bVar17 = !param_1;
      pTVar37->ArrayNum = iVar19 + 1;
      *(undefined8 *)((pTVar37->AllocatorInstance).Data + (longlong)iVar19 * 8) = uVar5;
      SVar1 = *(this->Session).Ptr;
      if (bVar17) {
        pOVar21 = (*Ort::Global<void>::api_->SessionGetOutputTypeInfo)
                            ((OrtSession *)SVar1,uVar22,&local_1c0);
        Ort::ThrowOnError(pOVar21);
        ppOVar24 = &local_1b8;
        pOVar35 = local_1c0;
      }
      else {
        pOVar21 = (*Ort::Global<void>::api_->SessionGetInputTypeInfo)
                            ((OrtSession *)SVar1,uVar22,&local_1c8);
        Ort::ThrowOnError(pOVar21);
        ppOVar24 = &local_1b0;
        pOVar35 = local_1c8;
      }
      plVar26 = (long64 *)0x0;
      bVar10 = bVar17 | bVar11;
      *ppOVar24 = (OrtTypeInfo *)0x0;
      if ((bool)(bVar17 | bVar11)) {
        bVar10 = 0;
        (*Ort::Global<void>::api_->ReleaseTypeInfo)(local_1b8);
      }
      if (!bVar17) {
        (*Ort::Global<void>::api_->ReleaseTypeInfo)(local_1b0);
      }
      pOVar21 = (*Ort::Global<void>::api_->CastTypeInfoToTensorInfo)(pOVar35,&local_1a8);
      Ort::ThrowOnError(pOVar21);
      pOVar15 = local_1a8;
      pOVar21 = (*Ort::Global<void>::api_->GetTensorElementType)(local_1a8,local_208);
      Ort::ThrowOnError(pOVar21);
      OVar13 = local_208[0];
      pTVar25 = TranslateTensorTypeORTToNNE(&local_108,local_208[0]);
      pTVar16 = local_1a0;
      uVar5 = *(undefined8 *)pTVar25;
      uVar7 = pTVar25->ElementSize;
      iVar19 = local_1a0->ArrayNum;
      if (iVar19 == local_1a0->ArrayMax) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_1a0->AllocatorInstance,&local_1a0->ArrayMax);
      }
      local_188 = 0;
      pTVar16->ArrayNum = iVar19 + 1;
      *(ONNXTensorElementDataType *)((pTVar16->AllocatorInstance).Data + (longlong)iVar19 * 4) =
           OVar13;
      local_f8.SecondaryData = (ForElementType<int>)0x0;
      local_d0 = 0;
      local_cc = 8;
      pOVar21 = (*Ort::Global<void>::api_->GetDimensionsCount)(pOVar15,&local_198);
      Ort::ThrowOnError(pOVar21);
      uVar22 = local_198;
      plVar34 = plVar26;
      plVar27 = plVar26;
      if (local_198 != 0) {
        if (0x1fffffffffffffff < local_198) goto LAB_14eb0dc76;
        uVar36 = local_198 * 8;
        plVar26 = std::_Allocate<16,std::_Default_allocate_traits>(uVar36);
        local_190 = 0;
        plVar34 = plVar26 + uVar22;
        iVar19 = memcmp(&local_188,&local_190,8);
        if (iVar19 == 0) {
          memset(plVar26,0,uVar36);
          plVar27 = plVar34;
        }
        else {
          plVar27 = plVar26;
          if (uVar22 != 0) {
            memset(plVar26,0,uVar22 << 3);
            plVar27 = plVar34;
          }
        }
      }
      uVar22 = (longlong)plVar27 - (longlong)plVar26 >> 3;
      pOVar21 = (*Ort::Global<void>::api_->GetDimensions)(pOVar15,plVar26,uVar22);
      Ort::ThrowOnError(pOVar21);
      iVar19 = (int)uVar22;
      if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar22 & 0xffffffff);
      }
      if (local_cc < iVar19) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,iVar19,&local_f8,local_d0,&local_cc);
      }
      if (plVar26 != (long64 *)0x0) {
        uVar36 = (longlong)plVar34 - (longlong)plVar26 & 0xfffffffffffffff8;
        plVar34 = plVar26;
        if (0xfff < uVar36) {
          plVar34 = (long64 *)plVar26[-1];
          uVar36 = uVar36 + 0x27;
          if (0x1f < (ulonglong)((longlong)plVar26 + (-8 - (longlong)plVar34))) goto LAB_14eb0dc19;
        }
        ::operator_delete(plVar34,uVar36);
      }
      local_170 = 0;
      pOVar21 = (*Ort::Global<void>::api_->GetDimensionsCount)(pOVar15,&local_180);
      Ort::ThrowOnError(pOVar21);
      uVar22 = local_180;
      plVar27 = (long64 *)0x0;
      plVar26 = (long64 *)0x0;
      plVar34 = (long64 *)0x0;
      if (local_180 != 0) {
        if (0x1fffffffffffffff < local_180) {
LAB_14eb0dc76:
                    /* WARNING: Subroutine does not return */
          std::vector<__int64,std::allocator<__int64>_>::_Xlength();
        }
        uVar36 = local_180 * 8;
        plVar27 = std::_Allocate<16,std::_Default_allocate_traits>(uVar36);
        local_178 = 0;
        plVar26 = plVar27 + uVar22;
        iVar19 = memcmp(&local_170,&local_178,8);
        if (iVar19 == 0) {
          memset(plVar27,0,uVar36);
          plVar34 = plVar26;
        }
        else {
          plVar34 = plVar27;
          if (uVar22 != 0) {
            memset(plVar27,0,uVar22 << 3);
            plVar34 = plVar26;
          }
        }
      }
      pOVar21 = (*Ort::Global<void>::api_->GetDimensions)
                          (pOVar15,plVar27,(longlong)plVar34 - (longlong)plVar27 >> 3);
      Ort::ThrowOnError(pOVar21);
      for (plVar32 = plVar27; plVar32 != plVar34; plVar32 = plVar32 + 1) {
        local_214 = (undefined4)*plVar32;
        FVar28 = (ForElementType<int>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
          FVar28 = local_f8.SecondaryData;
        }
        if ((ulonglong)FVar28 <= &local_214) {
          FVar28 = (ForElementType<int>)&local_f8;
          if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
            FVar28 = local_f8.SecondaryData;
          }
          if ((&local_214 < (undefined4 *)((longlong)FVar28 + (longlong)local_cc * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
        }
        if (local_d0 == local_cc) {
          local_d0 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_f8,&local_cc);
        }
        FVar28 = (ForElementType<int>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
          FVar28 = local_f8.SecondaryData;
        }
        lVar30 = (longlong)local_d0;
        local_d0 = local_d0 + 1;
        *(undefined4 *)((longlong)FVar28 + lVar30 * 4) = local_214;
      }
      if (plVar27 != (long64 *)0x0) {
        uVar36 = (longlong)plVar26 - (longlong)plVar27 & 0xfffffffffffffff8;
        plVar26 = plVar27;
        if (0xfff < uVar36) {
          plVar26 = (long64 *)plVar27[-1];
          uVar36 = uVar36 + 0x27;
          if (0x1f < (ulonglong)((longlong)plVar27 + (-8 - (longlong)plVar26))) {
LAB_14eb0dc19:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(plVar26,uVar36);
      }
      iVar19 = local_d0;
      local_138 = (ForElementType<int>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
        local_138 = local_f8.SecondaryData;
      }
      if ((local_d0 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      iStack_130 = iVar19;
      local_128._12_4_ = uStack_12c;
      local_128.ArrayNum = iVar19;
      local_128.DataPtr = (int *)local_138;
      NNE::FSymbolicTensorShape::Make(&local_78,&local_128);
      pTVar37 = local_168;
      uVar31 = local_168->ArrayNum - 1;
      uVar20 = 0;
      if ((int)uVar31 < local_168->ArrayNum) {
        uVar20 = ~uVar31 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      pFVar29 = ::FString::FString(&local_118,
                                   *(char **)((pTVar37->AllocatorInstance).Data +
                                             (longlong)pTVar37->ArrayNum * 8 + -8));
      NNE::FTensorDesc::Make(&local_c8,pFVar29,&local_78,(ENNETensorDataType)uVar5);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      uVar20 = NNE::GetTensorDataTypeSizeInBytes(local_c8.DataType);
      if ((uVar20 != uVar7) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("SymbolicTensorDesc.GetElementByteSize() == TypeInfo.ElementSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                              ,0x137,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      plVar33 = local_160;
      iVar19 = (int)local_160[1];
      if (iVar19 == *(int *)((longlong)(local_160 + 1) + 4)) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,(ForAnyElementType *)local_160,
                            (int *)((longlong)(local_160 + 1) + 4));
      }
      *(int *)(plVar33 + 1) = iVar19 + 1;
      NNE::FTensorDesc::FTensorDesc((FTensorDesc *)(*plVar33 + (longlong)iVar19 * 0x48),&local_c8);
      if (local_c8.Shape.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_c8.Shape.Data.AllocatorInstance.SecondaryData);
      }
      if (local_c8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Name.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_78.Data.AllocatorInstance.SecondaryData);
      }
      if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_f8.SecondaryData);
      }
      (*Ort::Global<void>::api_->ReleaseTypeInfo)(pOVar35);
      local_20c = local_20c + 1;
      this = local_158;
      bVar11 = bVar10;
    } while (local_20c < local_210);
  }
  return true;
}

// ConfigureTensors @ 14eb0dc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */

bool __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::ConfigureTensors
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> *this,
          bool param_1)

{
  Session SVar1;
  AllocatorWithDefaultOptions AVar2;
  char *pcVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulong64 uVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  int *piVar12;
  ONNXTensorElementDataType OVar13;
  TArray<std::unique_ptr<char,Ort::detail::AllocatedFree>,TSizedDefaultAllocator<32>_> *pTVar14;
  OrtTensorTypeAndShapeInfo *pOVar15;
  TArray<ONNXTensorElementDataType,TSizedDefaultAllocator<32>_> *pTVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  OrtStatus *pOVar21;
  ulonglong uVar22;
  char **ppcVar23;
  OrtTypeInfo **ppOVar24;
  TypeInfoORT *pTVar25;
  long64 *plVar26;
  long64 *plVar27;
  ForElementType<int> FVar28;
  FString *pFVar29;
  longlong lVar30;
  uint uVar31;
  long64 *plVar32;
  longlong *plVar33;
  long64 *plVar34;
  OrtTypeInfo *pOVar35;
  ulong64 uVar36;
  TArray<char_*,TSizedDefaultAllocator<32>_> *pTVar37;
  undefined1 auStackY_268 [32];
  undefined4 local_214;
  uint local_210;
  uint local_20c;
  ONNXTensorElementDataType local_208 [2];
  AllocatorWithDefaultOptions local_200;
  char *local_1f8;
  AllocatorWithDefaultOptions local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  TArray<std::unique_ptr<char,Ort::detail::AllocatedFree>,TSizedDefaultAllocator<32>_> *local_1d0;
  OrtTypeInfo *local_1c8;
  OrtTypeInfo *local_1c0;
  OrtTypeInfo *local_1b8;
  OrtTypeInfo *local_1b0;
  OrtTensorTypeAndShapeInfo *local_1a8;
  TArray<ONNXTensorElementDataType,TSizedDefaultAllocator<32>_> *local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  undefined8 local_188;
  ulonglong local_180;
  undefined8 local_178;
  undefined8 local_170;
  TArray<char_*,TSizedDefaultAllocator<32>_> *local_168;
  longlong *local_160;
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> *local_158;
  uint local_150 [2];
  uint local_148 [4];
  ForElementType<int> local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TArrayView<int_const_,int> local_128;
  FString local_118;
  TypeInfoORT local_108;
  ForElementType<int> local_f8;
  int local_d0;
  int local_cc;
  FTensorDesc local_c8;
  FSymbolicTensorShape local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar9 = false;
  bVar8 = false;
  local_208[0] = ONNX_TENSOR_ELEMENT_DATA_TYPE_UNDEFINED;
  SVar1 = *(this->Session).Ptr;
  local_158 = this;
  if (param_1) {
    pOVar21 = (*Ort::Global<void>::api_->SessionGetInputCount)
                        ((OrtSession *)SVar1,(ulong64 *)local_150);
    Ort::ThrowOnError(pOVar21);
    local_210 = local_150[0];
  }
  else {
    pOVar21 = (*Ort::Global<void>::api_->SessionGetOutputCount)
                        ((OrtSession *)SVar1,(ulong64 *)local_148);
    Ort::ThrowOnError(pOVar21);
    local_210 = local_148[0];
  }
  uVar22 = (ulonglong)param_1 ^ 1;
  plVar33 = &this->_padding_ + uVar22 * 2;
  local_1a0 = &this->InputTensorsORTType + uVar22;
  pTVar37 = &this->InputTensorNames + uVar22;
  local_1d0 = &this->InputTensorNameValues + uVar22;
  piVar12 = (int *)((longlong)(plVar33 + 1) + 4);
  local_168 = pTVar37;
  local_160 = plVar33;
  if (*piVar12 < 0) {
    DestructItems<UE::NNE::FTensorDesc,int>((FTensorDesc *)*plVar33,(int)plVar33[1]);
    *(undefined4 *)(plVar33 + 1) = 0;
    if (*piVar12 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)plVar33,0,piVar12);
    }
  }
  else {
    DestructItems<UE::NNE::FTensorDesc,int>((FTensorDesc *)*plVar33,(int)plVar33[1]);
    *(undefined4 *)(plVar33 + 1) = 0;
  }
  local_20c = 0;
  bVar11 = 0;
  if (local_210 != 0) {
    do {
      uVar22 = (ulonglong)local_20c;
      SVar1 = *(this->Session).Ptr;
      AVar2 = *(this->Allocator).Ptr;
      if (param_1) {
        bVar9 = true;
        pOVar21 = (*Ort::Global<void>::api_->SessionGetInputName)
                            ((OrtSession *)SVar1,uVar22,(OrtAllocator *)AVar2,&local_1e0);
        Ort::ThrowOnError(pOVar21);
        local_1e8 = local_1e0;
        ppcVar23 = &local_1e8;
        local_1f0 = AVar2;
      }
      else {
        bVar8 = true;
        pOVar21 = (*Ort::Global<void>::api_->SessionGetOutputName)
                            ((OrtSession *)SVar1,uVar22,(OrtAllocator *)AVar2,&local_1d8);
        Ort::ThrowOnError(pOVar21);
        local_1f8 = local_1d8;
        ppcVar23 = &local_1f8;
        local_200 = AVar2;
      }
      pcVar3 = *ppcVar23;
      *ppcVar23 = (char *)0x0;
      if ((bVar8) && (bVar8 = false, local_1f8 != (char *)0x0)) {
        (**(code **)((longlong)local_200 + 0x10))((OrtAllocator *)local_200,local_1f8);
      }
      if ((bVar9) && (bVar9 = false, local_1e8 != (char *)0x0)) {
        (**(code **)((longlong)local_1f0 + 0x10))((OrtAllocator *)local_1f0,local_1e8);
      }
      pTVar14 = local_1d0;
      iVar19 = local_1d0->ArrayNum;
      if (iVar19 == local_1d0->ArrayMax) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_1d0->AllocatorInstance,&local_1d0->ArrayMax);
      }
      pTVar14->ArrayNum = iVar19 + 1;
      pFVar4 = (pTVar14->AllocatorInstance).Data;
      *(AllocatorWithDefaultOptions *)(pFVar4 + (longlong)iVar19 * 0x10) = AVar2;
      *(char **)(pFVar4 + (longlong)iVar19 * 0x10 + 8) = pcVar3;
      uVar31 = pTVar14->ArrayNum - 1;
      uVar20 = 0;
      if ((int)uVar31 < pTVar14->ArrayNum) {
        uVar20 = ~uVar31 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      uVar5 = *(undefined8 *)
               ((pTVar14->AllocatorInstance).Data + (longlong)pTVar14->ArrayNum * 0x10 + -8);
      iVar19 = pTVar37->ArrayNum;
      if (iVar19 == pTVar37->ArrayMax) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar37->AllocatorInstance,&pTVar37->ArrayMax);
      }
      bVar17 = !param_1;
      pTVar37->ArrayNum = iVar19 + 1;
      *(undefined8 *)((pTVar37->AllocatorInstance).Data + (longlong)iVar19 * 8) = uVar5;
      SVar1 = *(this->Session).Ptr;
      if (bVar17) {
        pOVar21 = (*Ort::Global<void>::api_->SessionGetOutputTypeInfo)
                            ((OrtSession *)SVar1,uVar22,&local_1c0);
        Ort::ThrowOnError(pOVar21);
        ppOVar24 = &local_1b8;
        pOVar35 = local_1c0;
      }
      else {
        pOVar21 = (*Ort::Global<void>::api_->SessionGetInputTypeInfo)
                            ((OrtSession *)SVar1,uVar22,&local_1c8);
        Ort::ThrowOnError(pOVar21);
        ppOVar24 = &local_1b0;
        pOVar35 = local_1c8;
      }
      plVar26 = (long64 *)0x0;
      bVar10 = bVar17 | bVar11;
      *ppOVar24 = (OrtTypeInfo *)0x0;
      if ((bool)(bVar17 | bVar11)) {
        bVar10 = 0;
        (*Ort::Global<void>::api_->ReleaseTypeInfo)(local_1b8);
      }
      if (!bVar17) {
        (*Ort::Global<void>::api_->ReleaseTypeInfo)(local_1b0);
      }
      pOVar21 = (*Ort::Global<void>::api_->CastTypeInfoToTensorInfo)(pOVar35,&local_1a8);
      Ort::ThrowOnError(pOVar21);
      pOVar15 = local_1a8;
      pOVar21 = (*Ort::Global<void>::api_->GetTensorElementType)(local_1a8,local_208);
      Ort::ThrowOnError(pOVar21);
      OVar13 = local_208[0];
      pTVar25 = TranslateTensorTypeORTToNNE(&local_108,local_208[0]);
      pTVar16 = local_1a0;
      uVar5 = *(undefined8 *)pTVar25;
      uVar7 = pTVar25->ElementSize;
      iVar19 = local_1a0->ArrayNum;
      if (iVar19 == local_1a0->ArrayMax) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_1a0->AllocatorInstance,&local_1a0->ArrayMax);
      }
      local_188 = 0;
      pTVar16->ArrayNum = iVar19 + 1;
      *(ONNXTensorElementDataType *)((pTVar16->AllocatorInstance).Data + (longlong)iVar19 * 4) =
           OVar13;
      local_f8.SecondaryData = (ForElementType<int>)0x0;
      local_d0 = 0;
      local_cc = 8;
      pOVar21 = (*Ort::Global<void>::api_->GetDimensionsCount)(pOVar15,&local_198);
      Ort::ThrowOnError(pOVar21);
      uVar22 = local_198;
      plVar34 = plVar26;
      plVar27 = plVar26;
      if (local_198 != 0) {
        if (0x1fffffffffffffff < local_198) goto LAB_14eb0e646;
        uVar36 = local_198 * 8;
        plVar26 = std::_Allocate<16,std::_Default_allocate_traits>(uVar36);
        local_190 = 0;
        plVar34 = plVar26 + uVar22;
        iVar19 = memcmp(&local_188,&local_190,8);
        if (iVar19 == 0) {
          memset(plVar26,0,uVar36);
          plVar27 = plVar34;
        }
        else {
          plVar27 = plVar26;
          if (uVar22 != 0) {
            memset(plVar26,0,uVar22 << 3);
            plVar27 = plVar34;
          }
        }
      }
      uVar22 = (longlong)plVar27 - (longlong)plVar26 >> 3;
      pOVar21 = (*Ort::Global<void>::api_->GetDimensions)(pOVar15,plVar26,uVar22);
      Ort::ThrowOnError(pOVar21);
      iVar19 = (int)uVar22;
      if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar22 & 0xffffffff);
      }
      if (local_cc < iVar19) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,iVar19,&local_f8,local_d0,&local_cc);
      }
      if (plVar26 != (long64 *)0x0) {
        uVar36 = (longlong)plVar34 - (longlong)plVar26 & 0xfffffffffffffff8;
        plVar34 = plVar26;
        if (0xfff < uVar36) {
          plVar34 = (long64 *)plVar26[-1];
          uVar36 = uVar36 + 0x27;
          if (0x1f < (ulonglong)((longlong)plVar26 + (-8 - (longlong)plVar34))) goto LAB_14eb0e5e9;
        }
        ::operator_delete(plVar34,uVar36);
      }
      local_170 = 0;
      pOVar21 = (*Ort::Global<void>::api_->GetDimensionsCount)(pOVar15,&local_180);
      Ort::ThrowOnError(pOVar21);
      uVar22 = local_180;
      plVar27 = (long64 *)0x0;
      plVar26 = (long64 *)0x0;
      plVar34 = (long64 *)0x0;
      if (local_180 != 0) {
        if (0x1fffffffffffffff < local_180) {
LAB_14eb0e646:
                    /* WARNING: Subroutine does not return */
          std::vector<__int64,std::allocator<__int64>_>::_Xlength();
        }
        uVar36 = local_180 * 8;
        plVar27 = std::_Allocate<16,std::_Default_allocate_traits>(uVar36);
        local_178 = 0;
        plVar26 = plVar27 + uVar22;
        iVar19 = memcmp(&local_170,&local_178,8);
        if (iVar19 == 0) {
          memset(plVar27,0,uVar36);
          plVar34 = plVar26;
        }
        else {
          plVar34 = plVar27;
          if (uVar22 != 0) {
            memset(plVar27,0,uVar22 << 3);
            plVar34 = plVar26;
          }
        }
      }
      pOVar21 = (*Ort::Global<void>::api_->GetDimensions)
                          (pOVar15,plVar27,(longlong)plVar34 - (longlong)plVar27 >> 3);
      Ort::ThrowOnError(pOVar21);
      for (plVar32 = plVar27; plVar32 != plVar34; plVar32 = plVar32 + 1) {
        local_214 = (undefined4)*plVar32;
        FVar28 = (ForElementType<int>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
          FVar28 = local_f8.SecondaryData;
        }
        if ((ulonglong)FVar28 <= &local_214) {
          FVar28 = (ForElementType<int>)&local_f8;
          if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
            FVar28 = local_f8.SecondaryData;
          }
          if ((&local_214 < (undefined4 *)((longlong)FVar28 + (longlong)local_cc * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
        }
        if (local_d0 == local_cc) {
          local_d0 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_f8,&local_cc);
        }
        FVar28 = (ForElementType<int>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
          FVar28 = local_f8.SecondaryData;
        }
        lVar30 = (longlong)local_d0;
        local_d0 = local_d0 + 1;
        *(undefined4 *)((longlong)FVar28 + lVar30 * 4) = local_214;
      }
      if (plVar27 != (long64 *)0x0) {
        uVar36 = (longlong)plVar26 - (longlong)plVar27 & 0xfffffffffffffff8;
        plVar26 = plVar27;
        if (0xfff < uVar36) {
          plVar26 = (long64 *)plVar27[-1];
          uVar36 = uVar36 + 0x27;
          if (0x1f < (ulonglong)((longlong)plVar27 + (-8 - (longlong)plVar26))) {
LAB_14eb0e5e9:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(plVar26,uVar36);
      }
      iVar19 = local_d0;
      local_138 = (ForElementType<int>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
        local_138 = local_f8.SecondaryData;
      }
      if ((local_d0 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      iStack_130 = iVar19;
      local_128._12_4_ = uStack_12c;
      local_128.ArrayNum = iVar19;
      local_128.DataPtr = (int *)local_138;
      NNE::FSymbolicTensorShape::Make(&local_78,&local_128);
      pTVar37 = local_168;
      uVar31 = local_168->ArrayNum - 1;
      uVar20 = 0;
      if ((int)uVar31 < local_168->ArrayNum) {
        uVar20 = ~uVar31 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      pFVar29 = ::FString::FString(&local_118,
                                   *(char **)((pTVar37->AllocatorInstance).Data +
                                             (longlong)pTVar37->ArrayNum * 8 + -8));
      NNE::FTensorDesc::Make(&local_c8,pFVar29,&local_78,(ENNETensorDataType)uVar5);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      uVar20 = NNE::GetTensorDataTypeSizeInBytes(local_c8.DataType);
      if ((uVar20 != uVar7) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("SymbolicTensorDesc.GetElementByteSize() == TypeInfo.ElementSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                              ,0x137,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      plVar33 = local_160;
      iVar19 = (int)local_160[1];
      if (iVar19 == *(int *)((longlong)(local_160 + 1) + 4)) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,(ForAnyElementType *)local_160,
                            (int *)((longlong)(local_160 + 1) + 4));
      }
      *(int *)(plVar33 + 1) = iVar19 + 1;
      NNE::FTensorDesc::FTensorDesc((FTensorDesc *)(*plVar33 + (longlong)iVar19 * 0x48),&local_c8);
      if (local_c8.Shape.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_c8.Shape.Data.AllocatorInstance.SecondaryData);
      }
      if (local_c8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Name.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_78.Data.AllocatorInstance.SecondaryData);
      }
      if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_f8.SecondaryData);
      }
      (*Ort::Global<void>::api_->ReleaseTypeInfo)(pOVar35);
      local_20c = local_20c + 1;
      this = local_158;
      bVar11 = bVar10;
    } while (local_20c < local_210);
  }
  return true;
}

// Init @ 14eb16a70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::Init
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *this,
          TArrayView<unsigned_char_const_,__int64> *param_1)

{
  char cVar1;
  bool bVar2;
  TArrayView<unsigned_char_const_,__int64> local_18;
  
  cVar1 = (**(code **)(this->_padding_ + 0x38))();
  if (cVar1 == '\0') {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      return false;
    }
  }
  else {
    local_18.DataPtr = param_1->DataPtr;
    local_18.ArrayNum = param_1->ArrayNum;
    bVar2 = Detail::CreateSession
                      (&local_18,(this->SessionOptions).Ptr,(this->Environment).Object,
                       &this->Session,&this->TempDirForModelWithExternalData);
    if (bVar2) {
      bVar2 = ConfigureTensors(this,true);
      if (bVar2) {
        bVar2 = ConfigureTensors(this,false);
        if (bVar2) {
          return true;
        }
        if (1 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<2>
                    (&`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                      ::__l67::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
      }
      else if (1 < (byte)LogNNERuntimeORT._0_1_) {
        Logging::Private::BasicLog<2>
                  (&`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                    ::__l47::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        return false;
      }
    }
    else if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      return false;
    }
  }
  return false;
}

// Init @ 14eb16ba0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::Init
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> *this,
          TArrayView<unsigned_char_const_,__int64> *param_1)

{
  char cVar1;
  bool bVar2;
  TArrayView<unsigned_char_const_,__int64> local_18;
  
  cVar1 = (**(code **)(this->_padding_ + 0x38))();
  if (cVar1 == '\0') {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      return false;
    }
  }
  else {
    local_18.DataPtr = param_1->DataPtr;
    local_18.ArrayNum = param_1->ArrayNum;
    bVar2 = Detail::CreateSession
                      (&local_18,(this->SessionOptions).Ptr,(this->Environment).Object,
                       &this->Session,&this->TempDirForModelWithExternalData);
    if (bVar2) {
      bVar2 = ConfigureTensors(this,true);
      if (bVar2) {
        bVar2 = ConfigureTensors(this,false);
        if (bVar2) {
          return true;
        }
        if (1 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<2>
                    (&`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                      ::__l67::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
      }
      else if (1 < (byte)LogNNERuntimeORT._0_1_) {
        Logging::Private::BasicLog<2>
                  (&`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                    ::__l47::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        return false;
      }
    }
    else if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      return false;
    }
  }
  return false;
}

// Init @ 14eb16cd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::Init
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> *this,
          TArrayView<unsigned_char_const_,__int64> *param_1)

{
  char cVar1;
  bool bVar2;
  TArrayView<unsigned_char_const_,__int64> local_18;
  
  cVar1 = (**(code **)(this->_padding_ + 0x38))();
  if (cVar1 == '\0') {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      return false;
    }
  }
  else {
    local_18.DataPtr = param_1->DataPtr;
    local_18.ArrayNum = param_1->ArrayNum;
    bVar2 = Detail::CreateSession
                      (&local_18,(this->SessionOptions).Ptr,(this->Environment).Object,
                       &this->Session,&this->TempDirForModelWithExternalData);
    if (bVar2) {
      bVar2 = ConfigureTensors(this,true);
      if (bVar2) {
        bVar2 = ConfigureTensors(this,false);
        if (bVar2) {
          return true;
        }
        if (1 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<2>
                    (&`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                      ::__l67::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
      }
      else if (1 < (byte)LogNNERuntimeORT._0_1_) {
        Logging::Private::BasicLog<2>
                  (&`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                    ::__l47::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        return false;
      }
    }
    else if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      return false;
    }
  }
  return false;
}

// InitializedAndConfigureMembers @ 14eb17510

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

bool __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::
InitializedAndConfigureMembers
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *this)

{
  TUniquePtr<Ort::AllocatorWithDefaultOptions,TDefaultDelete<Ort::AllocatorWithDefaultOptions>_>
  *pTVar1;
  TUniquePtr<Ort::MemoryInfo,TDefaultDelete<Ort::MemoryInfo>_> *pTVar2;
  AllocatorWithDefaultOptions *pAVar3;
  MemoryInfo *pMVar4;
  AllocatorWithDefaultOptions *pAVar5;
  OrtStatus *pOVar6;
  MemoryInfo *pMVar7;
  MemoryInfo MVar8;
  MemoryInfo local_res8;
  undefined8 local_18;
  longlong local_10;
  
  pAVar5 = ::operator_new(8);
  if (pAVar5 == (AllocatorWithDefaultOptions *)0x0) {
    pAVar5 = (AllocatorWithDefaultOptions *)0x0;
  }
  else {
    *pAVar5 = (AllocatorWithDefaultOptions)0x0;
    pOVar6 = (*Ort::Global<void>::api_->GetAllocatorWithDefaultOptions)((OrtAllocator **)pAVar5);
    Ort::ThrowOnError(pOVar6);
  }
  pTVar1 = &this->Allocator;
  if (pTVar1 != (TUniquePtr<Ort::AllocatorWithDefaultOptions,TDefaultDelete<Ort::AllocatorWithDefaultOptions>_>
                 *)&local_18) {
    pAVar3 = pTVar1->Ptr;
    pTVar1->Ptr = pAVar5;
    pAVar5 = (AllocatorWithDefaultOptions *)0x0;
    ::operator_delete(pAVar3,8);
  }
  ::operator_delete(pAVar5,8);
  pOVar6 = (*Ort::Global<void>::api_->CreateCpuMemoryInfo)
                     (OrtDeviceAllocator,OrtMemTypeCPU,(OrtMemoryInfo **)&local_res8);
  Ort::ThrowOnError(pOVar6);
  pMVar7 = ::operator_new(8);
  if (pMVar7 == (MemoryInfo *)0x0) {
    pMVar7 = (MemoryInfo *)0x0;
    MVar8 = local_res8;
  }
  else {
    *pMVar7 = local_res8;
    MVar8 = (MemoryInfo)0x0;
  }
  pTVar2 = &this->MemoryInfo;
  if (pTVar2 == (TUniquePtr<Ort::MemoryInfo,TDefaultDelete<Ort::MemoryInfo>_> *)&local_10) {
    if (pMVar7 == (MemoryInfo *)0x0) goto LAB_14eb17626;
    (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)*pMVar7);
  }
  else {
    pMVar4 = pTVar2->Ptr;
    pTVar2->Ptr = pMVar7;
    if (pMVar4 == (MemoryInfo *)0x0) goto LAB_14eb17626;
    (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)*pMVar4);
    pMVar7 = pMVar4;
  }
  ::operator_delete(pMVar7,8);
LAB_14eb17626:
  (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)MVar8);
  return true;
}

// InitializedAndConfigureMembers @ 14eb17660

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

bool __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::
InitializedAndConfigureMembers
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> *this)

{
  TUniquePtr<Ort::AllocatorWithDefaultOptions,TDefaultDelete<Ort::AllocatorWithDefaultOptions>_>
  *pTVar1;
  TUniquePtr<Ort::MemoryInfo,TDefaultDelete<Ort::MemoryInfo>_> *pTVar2;
  AllocatorWithDefaultOptions *pAVar3;
  MemoryInfo *pMVar4;
  AllocatorWithDefaultOptions *pAVar5;
  OrtStatus *pOVar6;
  MemoryInfo *pMVar7;
  MemoryInfo MVar8;
  MemoryInfo local_res8;
  undefined8 local_18;
  longlong local_10;
  
  pAVar5 = ::operator_new(8);
  if (pAVar5 == (AllocatorWithDefaultOptions *)0x0) {
    pAVar5 = (AllocatorWithDefaultOptions *)0x0;
  }
  else {
    *pAVar5 = (AllocatorWithDefaultOptions)0x0;
    pOVar6 = (*Ort::Global<void>::api_->GetAllocatorWithDefaultOptions)((OrtAllocator **)pAVar5);
    Ort::ThrowOnError(pOVar6);
  }
  pTVar1 = &this->Allocator;
  if (pTVar1 != (TUniquePtr<Ort::AllocatorWithDefaultOptions,TDefaultDelete<Ort::AllocatorWithDefaultOptions>_>
                 *)&local_18) {
    pAVar3 = pTVar1->Ptr;
    pTVar1->Ptr = pAVar5;
    pAVar5 = (AllocatorWithDefaultOptions *)0x0;
    ::operator_delete(pAVar3,8);
  }
  ::operator_delete(pAVar5,8);
  pOVar6 = (*Ort::Global<void>::api_->CreateCpuMemoryInfo)
                     (OrtDeviceAllocator,OrtMemTypeCPU,(OrtMemoryInfo **)&local_res8);
  Ort::ThrowOnError(pOVar6);
  pMVar7 = ::operator_new(8);
  if (pMVar7 == (MemoryInfo *)0x0) {
    pMVar7 = (MemoryInfo *)0x0;
    MVar8 = local_res8;
  }
  else {
    *pMVar7 = local_res8;
    MVar8 = (MemoryInfo)0x0;
  }
  pTVar2 = &this->MemoryInfo;
  if (pTVar2 == (TUniquePtr<Ort::MemoryInfo,TDefaultDelete<Ort::MemoryInfo>_> *)&local_10) {
    if (pMVar7 == (MemoryInfo *)0x0) goto LAB_14eb17776;
    (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)*pMVar7);
  }
  else {
    pMVar4 = pTVar2->Ptr;
    pTVar2->Ptr = pMVar7;
    if (pMVar4 == (MemoryInfo *)0x0) goto LAB_14eb17776;
    (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)*pMVar4);
    pMVar7 = pMVar4;
  }
  ::operator_delete(pMVar7,8);
LAB_14eb17776:
  (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)MVar8);
  return true;
}

// InitializedAndConfigureMembers @ 14eb177b0

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

bool __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::
InitializedAndConfigureMembers
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> *this)

{
  TUniquePtr<Ort::AllocatorWithDefaultOptions,TDefaultDelete<Ort::AllocatorWithDefaultOptions>_>
  *pTVar1;
  TUniquePtr<Ort::MemoryInfo,TDefaultDelete<Ort::MemoryInfo>_> *pTVar2;
  AllocatorWithDefaultOptions *pAVar3;
  MemoryInfo *pMVar4;
  AllocatorWithDefaultOptions *pAVar5;
  OrtStatus *pOVar6;
  MemoryInfo *pMVar7;
  MemoryInfo MVar8;
  MemoryInfo local_res8;
  undefined8 local_18;
  longlong local_10;
  
  pAVar5 = ::operator_new(8);
  if (pAVar5 == (AllocatorWithDefaultOptions *)0x0) {
    pAVar5 = (AllocatorWithDefaultOptions *)0x0;
  }
  else {
    *pAVar5 = (AllocatorWithDefaultOptions)0x0;
    pOVar6 = (*Ort::Global<void>::api_->GetAllocatorWithDefaultOptions)((OrtAllocator **)pAVar5);
    Ort::ThrowOnError(pOVar6);
  }
  pTVar1 = &this->Allocator;
  if (pTVar1 != (TUniquePtr<Ort::AllocatorWithDefaultOptions,TDefaultDelete<Ort::AllocatorWithDefaultOptions>_>
                 *)&local_18) {
    pAVar3 = pTVar1->Ptr;
    pTVar1->Ptr = pAVar5;
    pAVar5 = (AllocatorWithDefaultOptions *)0x0;
    ::operator_delete(pAVar3,8);
  }
  ::operator_delete(pAVar5,8);
  pOVar6 = (*Ort::Global<void>::api_->CreateCpuMemoryInfo)
                     (OrtDeviceAllocator,OrtMemTypeCPU,(OrtMemoryInfo **)&local_res8);
  Ort::ThrowOnError(pOVar6);
  pMVar7 = ::operator_new(8);
  if (pMVar7 == (MemoryInfo *)0x0) {
    pMVar7 = (MemoryInfo *)0x0;
    MVar8 = local_res8;
  }
  else {
    *pMVar7 = local_res8;
    MVar8 = (MemoryInfo)0x0;
  }
  pTVar2 = &this->MemoryInfo;
  if (pTVar2 == (TUniquePtr<Ort::MemoryInfo,TDefaultDelete<Ort::MemoryInfo>_> *)&local_10) {
    if (pMVar7 == (MemoryInfo *)0x0) goto LAB_14eb178c6;
    (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)*pMVar7);
  }
  else {
    pMVar4 = pTVar2->Ptr;
    pTVar2->Ptr = pMVar7;
    if (pMVar4 == (MemoryInfo *)0x0) goto LAB_14eb178c6;
    (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)*pMVar4);
    pMVar7 = pMVar4;
  }
  ::operator_delete(pMVar7,8);
LAB_14eb178c6:
  (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)MVar8);
  return true;
}

// RunSync @ 14eb193f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */

EResultStatus __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::RunSync
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *this,
          TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *param_1,
          TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *param_2)

{
  uchar *puVar1;
  TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *pTVar2;
  ENNETensorDataType EVar3;
  int iVar4;
  Session *pSVar5;
  longlong lVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *pTVar9;
  bool bVar10;
  EResultStatus EVar11;
  int iVar12;
  FTensor *pFVar13;
  Value VVar14;
  FTensorBindingCPU *pFVar15;
  ulonglong uVar16;
  OrtStatus *pOVar17;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar18;
  ulong64 uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  ulonglong uVar25;
  uint uVar26;
  bool bVar27;
  undefined1 auStackY_188 [32];
  ForAnyElementType local_130;
  uint local_128;
  uint local_124;
  ForAnyElementType local_120;
  undefined8 local_118;
  TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *local_110;
  longlong local_108;
  longlong local_100;
  TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *local_f8;
  MemoryInfo local_f0;
  MemoryInfo local_e8;
  void *local_e0;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_int_const_,int> local_c8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_b8;
  FTensorShape local_a8;
  ulonglong local_78;
  FTensorShape local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_110 = param_1;
  local_f8 = param_2;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FModelInstanceORTRunSync::RunSync");
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                ::__l2::__CpuProfilerEventSpecId377,"FModelInstanceORTRunSync::RunSync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
               ,0x179);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
               ::__l2::__CpuProfilerEventSpecId377);
  }
  if ((this->Session).Ptr == (Session *)0x0) {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      EVar11 = Fail;
      goto LAB_14eb1a176;
    }
  }
  else {
    iVar12 = (int)this->_padding_;
    if (iVar12 == 0) {
      if (1 < (byte)LogNNERuntimeORT._0_1_) {
        Logging::Private::BasicLog<2>
                  (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                    ::__l26::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        EVar11 = Fail;
        goto LAB_14eb1a176;
      }
    }
    else {
      if ((iVar12 != (this->InputTensors).ArrayNum) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FModelInstanceORTBase<ModelInterface>::InputTensorShapes.Num() == InputTensors.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                              ,0x188,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      if (((int)this->_padding_ != (this->InputTensorNames).ArrayNum) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FModelInstanceORTBase<ModelInterface>::InputTensorShapes.Num() == InputTensorNames.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                              ,0x189,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      if (((int)this->_padding_ != (this->InputTensors).ArrayNum) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FModelInstanceORTBase<ModelInterface>::InputSymbolicTensors.Num() == InputTensors.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                              ,0x18a,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      if (param_1->ArrayNum == (this->InputTensors).ArrayNum) {
        if (((int)this->_padding_ != (this->OutputTensorNames).ArrayNum) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("FModelInstanceORTBase<ModelInterface>::OutputSymbolicTensors.Num() == OutputTensorNames.Num()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                                ,0x192,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          EVar11 = (*pcVar7)();
          return EVar11;
        }
        if ((param_2->ArrayNum == 0) || (param_2->ArrayNum == (this->OutputTensorNames).ArrayNum)) {
          uVar22 = 0;
          local_120.Data = (FScriptContainerElement *)0x0;
          local_118 = 0;
          if (0 < (this->InputTensorNames).ArrayNum) {
            local_100 = 0;
            do {
              lVar23 = local_100;
              pFVar13 = (FTensor *)
                        TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                  (param_1,uVar22);
              uVar20 = 0;
              if ((int)uVar22 < (this->InputTensors).ArrayNum) {
                uVar20 = ~uVar22 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                EVar11 = (*pcVar7)();
                return EVar11;
              }
              pFVar24 = (this->InputTensors).AllocatorInstance.Data + lVar23;
              if ((*(longlong *)(pFVar13->Shape).Data.AllocatorInstance.InlineData == 0) &&
                 (*(longlong *)((pFVar13->Shape).Data.AllocatorInstance.InlineData + 8) != 0)) {
                if (1 < (byte)LogNNERuntimeORT._0_1_) {
                  Logging::Private::BasicLog<2>
                            (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                              ::__l117::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
                }
LAB_14eb19abd:
                DestructItems<Ort::Value,int>((Value *)local_120.Data,(int)local_118);
                if ((Value)local_120.Data != (Value)0x0) {
                  FMemory::Free(local_120.Data);
                }
                EVar11 = Fail;
                goto LAB_14eb1a176;
              }
              if (*(longlong *)((pFVar13->Shape).Data.AllocatorInstance.InlineData + 8) !=
                  *(longlong *)(pFVar24 + 0x30)) {
                if (1 < (byte)LogNNERuntimeORT._0_1_) {
                  Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)
                             &`public:_virtual_enum_NNERuntimeORT::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                              ::J::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
                }
                goto LAB_14eb19abd;
              }
              uVar20 = 0;
              if ((int)uVar22 < (this->InputTensorsORTType).ArrayNum) {
                uVar20 = ~uVar22 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                EVar11 = (*pcVar7)();
                return EVar11;
              }
              VVar14 = CreateTensor<UE::NNE::FTensorBindingCPU>
                                 (&local_f0,(FTensorBindingCPU *)(this->MemoryInfo).Ptr,pFVar13,
                                  (ONNXTensorElementDataType)pFVar24);
              if (((local_120.Data <= (ulonglong)VVar14) &&
                  ((ulonglong)VVar14 <
                   (ulonglong)((longlong)local_120.Data + (longlong)local_118._4_4_ * 8))) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar7 = (code *)swi(3);
                EVar11 = (*pcVar7)();
                return EVar11;
              }
              iVar12 = (int)local_118;
              if ((int)local_118 == local_118._4_4_) {
                iVar12 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_120,(int *)((longlong)&local_118 + 4));
              }
              local_118 = CONCAT44(local_118._4_4_,iVar12 + 1);
              *(undefined8 *)(local_120.Data + (longlong)iVar12 * 8) = *(undefined8 *)VVar14;
              *(undefined8 *)VVar14 = 0;
              (*Ort::Global<void>::api_->ReleaseValue)((OrtValue *)local_f0);
              uVar22 = uVar22 + 1;
              local_100 = local_100 + 0x38;
              param_2 = local_f8;
              param_1 = local_110;
            } while ((int)uVar22 < (this->InputTensorNames).ArrayNum);
          }
          uVar16 = 0;
          iVar12 = (this->OutputTensorNames).ArrayNum;
          local_128 = 0;
          local_130.Data = (FScriptContainerElement *)0x0;
          local_124 = 0;
          uVar21 = uVar16;
          uVar25 = uVar16;
          if (0 < iVar12) {
            do {
              uVar20 = (uint)uVar25;
              uVar22 = (uint)uVar16;
              if ((((this->OutputTensors).ArrayNum == 0) || (param_2->ArrayNum == 0)) ||
                 (pFVar15 = TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                      (param_2,uVar20), uVar22 = local_128,
                 pFVar15->Data == (void *)0x0)) {
LAB_14eb19ae9:
                if (uVar22 == local_124) {
                  uVar22 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_130,(int *)&local_124);
                }
                local_128 = uVar22 + 1;
                *(undefined8 *)(local_130.Data + (longlong)(int)uVar22 * 8) = 0;
              }
              else {
                uVar26 = ~uVar20 >> 0x1f;
                uVar22 = 0;
                if ((int)uVar20 < (this->OutputTensors).ArrayNum) {
                  uVar22 = uVar26;
                }
                if ((uVar22 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                pFVar24 = (this->OutputTensors).AllocatorInstance.Data;
                pFVar15 = TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                    (param_2,uVar20);
                uVar22 = local_128;
                if (pFVar15->SizeInBytes < *(ulonglong *)(pFVar24 + uVar21 + 0x30))
                goto LAB_14eb19ae9;
                uVar22 = 0;
                if ((int)uVar20 < (this->OutputTensorsORTType).ArrayNum) {
                  uVar22 = uVar26;
                }
                if ((uVar22 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                uVar22 = 0;
                if ((int)uVar20 < (this->OutputTensors).ArrayNum) {
                  uVar22 = uVar26;
                }
                if ((uVar22 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                pFVar24 = (this->OutputTensors).AllocatorInstance.Data;
                pFVar13 = (FTensor *)
                          TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                    (local_f8,uVar20);
                VVar14 = CreateTensor<UE::NNE::FTensorBindingCPU>
                                   (&local_e8,(FTensorBindingCPU *)(this->MemoryInfo).Ptr,pFVar13,
                                    uVar20 * 0x38 + (int)pFVar24);
                if (((local_130.Data <= (ulonglong)VVar14) &&
                    ((ulonglong)VVar14 <
                     (ulonglong)((longlong)local_130.Data + (longlong)(int)local_124 * 8))) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                if (local_128 == local_124) {
                  local_128 = Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x808,&local_130,(int *)&local_124);
                }
                *(undefined8 *)(local_130.Data + (longlong)(int)local_128 * 8) =
                     *(undefined8 *)VVar14;
                *(undefined8 *)VVar14 = 0;
                local_128 = local_128 + 1;
                (*Ort::Global<void>::api_->ReleaseValue)((OrtValue *)local_e8);
              }
              iVar12 = (this->OutputTensorNames).ArrayNum;
              uVar25 = (ulonglong)(uVar20 + 1);
              uVar16 = (ulonglong)local_128;
              uVar21 = uVar21 + 0x38;
              param_2 = local_f8;
            } while ((int)(uVar20 + 1) < iVar12);
          }
          pSVar5 = (this->Session).Ptr;
          if (((int)local_128 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          FVar8.Data = local_130.Data;
          pFVar24 = (this->OutputTensorNames).AllocatorInstance.Data;
          iVar4 = (this->InputTensorNames).ArrayNum;
          if (((int)local_118 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          pOVar17 = (*Ort::Global<void>::api_->Run)
                              ((OrtSession *)*pSVar5,(OrtRunOptions *)0x0,
                               (char **)(this->InputTensorNames).AllocatorInstance.Data,
                               (OrtValue **)local_120.Data,(longlong)iVar4,(char **)pFVar24,
                               (longlong)iVar12,(OrtValue **)FVar8.Data);
          Ort::ThrowOnError(pOVar17);
          (*Ort::Global<void>::api_->ReleaseRunOptions)((OrtRunOptions *)0x0);
          if ((this->OutputTensors).ArrayNum == 0) {
            if (((int)this->_padding_ != 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("FModelInstanceORTBase<ModelInterface>::OutputTensorShapes.IsEmpty()"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                                    ,0x1ca,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              EVar11 = (*pcVar7)();
              return EVar11;
            }
            uVar22 = 0;
            if (0 < (this->OutputTensorNames).ArrayNum) {
              pTVar2 = &this->OutputTensors;
              local_108 = 0;
              local_110 = (TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *)0x0;
              local_100 = 0;
              do {
                lVar23 = local_108;
                uVar20 = 0;
                if ((int)uVar22 < (int)this->_padding_) {
                  uVar20 = ~uVar22 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                lVar6 = this->_padding_;
                uVar20 = 0;
                if ((int)uVar22 < (int)local_128) {
                  uVar20 = ~uVar22 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                pTVar18 = OrtHelper::GetShape(&local_b8,(Value *)(local_130.Data + lVar23 * 8));
                local_d8 = (pTVar18->AllocatorInstance).Data;
                iVar12 = pTVar18->ArrayNum;
                if ((iVar12 < 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                local_c8._12_4_ = uStack_cc;
                local_c8.ArrayNum = iVar12;
                local_c8.DataPtr = (uint *)local_d8;
                iStack_d0 = iVar12;
                NNE::FTensorShape::Make(&local_70,&local_c8);
                if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b8.AllocatorInstance.Data);
                }
                EVar3 = *(ENNETensorDataType *)(lVar6 + 0x10 + local_100);
                uVar19 = NNE::FTensorShape::Volume(&local_70);
                if ((0xffffffff < uVar19) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InShape.Volume() <= TNumericLimits<uint32>::Max()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTTensor.h"
                                        ,0x1e,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                local_a8.Data.ArrayMax = 8;
                local_a8.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
                local_a8.Data.ArrayNum = 0;
                local_78 = 0;
                NNE::FTensorShape::operator=(&local_a8,&local_70);
                iVar12 = NNE::GetTensorDataTypeSizeInBytes(EVar3);
                uVar19 = NNE::FTensorShape::Volume(&local_70);
                pFVar24 = (pTVar2->AllocatorInstance).Data;
                local_78 = uVar19 * (longlong)iVar12;
                if (((pFVar24 <= (FScriptContainerElement *)&local_a8) &&
                    ((FScriptContainerElement *)&local_a8 <
                     pFVar24 + (longlong)(this->OutputTensors).ArrayMax * 0x38)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                iVar12 = (this->OutputTensors).ArrayNum;
                if (iVar12 == (this->OutputTensors).ArrayMax) {
                  iVar12 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x838,&pTVar2->AllocatorInstance,
                                      &(this->OutputTensors).ArrayMax);
                }
                (this->OutputTensors).ArrayNum = iVar12 + 1;
                pFVar24 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x38;
                NNE::FTensorShape::FTensorShape((FTensorShape *)pFVar24,&local_a8);
                *(ulonglong *)(pFVar24 + 0x30) = local_78;
                if ((((FTensorShape *)this->_padding_ <= &local_70) &&
                    (&local_70 <
                     (FTensorShape *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                iVar12 = (int)this->_padding_;
                if (iVar12 == *(int *)((longlong)&this->_padding_ + 4)) {
                  iVar12 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x830,(ForAnyElementType *)&this->_padding_,
                                      (int *)((longlong)&this->_padding_ + 4));
                }
                *(int *)&this->_padding_ = iVar12 + 1;
                _Dst = (ForElementType<unsigned_int>)((longlong)iVar12 * 0x30 + this->_padding_);
                *(ForElementType<unsigned_int> *)((longlong)_Dst + 0x20) =
                     (ForElementType<unsigned_int>)0x0;
                iVar12 = local_70.Data.ArrayNum;
                *(int *)((ForElementType<unsigned_int> *)((longlong)_Dst + 0x28))->InlineData =
                     iVar12;
                _Src = (ForElementType<unsigned_int>)&local_70;
                if (local_70.Data.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  _Src = local_70.Data.AllocatorInstance.SecondaryData;
                }
                puVar1 = (uchar *)((longlong)_Dst + 0x2c);
                if (iVar12 == 0) {
                  puVar1[0] = '\b';
                  puVar1[1] = '\0';
                  puVar1[2] = '\0';
                  puVar1[3] = '\0';
                }
                else {
                  Core::Private::
                  ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                            (4,4,iVar12,0,(ForElementType<unsigned_int> *)_Dst,iVar12,(int *)puVar1)
                  ;
                  if (*(ForElementType<unsigned_int> *)((longlong)_Dst + 0x20) !=
                      (ForElementType<unsigned_int>)0x0) {
                    _Dst = *(ForElementType<unsigned_int> *)((longlong)_Dst + 0x20);
                  }
                  memcpy((void *)_Dst,(void *)_Src,(longlong)iVar12 << 2);
                }
                pTVar9 = local_f8;
                lVar23 = local_108;
                if (local_f8->ArrayNum != 0) {
                  uVar20 = 0;
                  if ((int)uVar22 < local_f8->ArrayNum) {
                    uVar20 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    EVar11 = (*pcVar7)();
                    return EVar11;
                  }
                  uVar21 = local_78;
                  lVar23 = local_108;
                  if (((*(longlong *)((longlong)&local_110->DataPtr + (longlong)pTVar9->DataPtr) !=
                        0) && (local_78 != 0)) &&
                     (pFVar15 = TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                          (pTVar9,uVar22), uVar25 = local_78, lVar23 = local_108,
                     uVar21 <= pFVar15->SizeInBytes)) {
                    uVar20 = 0;
                    if ((int)uVar22 < (int)local_128) {
                      uVar20 = ~uVar22 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar7 = (code *)swi(3);
                      EVar11 = (*pcVar7)();
                      return EVar11;
                    }
                    lVar23 = local_108;
                    pOVar17 = (*Ort::Global<void>::api_->GetTensorMutableData)
                                        (*(OrtValue **)(local_130.Data + local_108 * 8),&local_e0);
                    Ort::ThrowOnError(pOVar17);
                    pFVar15 = TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                        (pTVar9,uVar22);
                    memcpy(pFVar15->Data,local_e0,uVar25);
                  }
                }
                pTVar9 = local_110;
                if (local_a8.Data.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FMemory::Free((void *)local_a8.Data.AllocatorInstance.SecondaryData);
                }
                if (local_70.Data.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FMemory::Free((void *)local_70.Data.AllocatorInstance.SecondaryData);
                }
                local_100 = local_100 + 0x48;
                local_108 = lVar23 + 1;
                local_110 = pTVar9 + 1;
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (this->OutputTensorNames).ArrayNum);
            }
          }
          DestructItems<Ort::Value,int>((Value *)local_130.Data,local_128);
          if ((Value)local_130.Data != (Value)0x0) {
            FMemory::Free(local_130.Data);
          }
          DestructItems<Ort::Value,int>((Value *)local_120.Data,(int)local_118);
          if ((Value)local_120.Data != (Value)0x0) {
            FMemory::Free(local_120.Data);
          }
          EVar11 = Ok;
          goto LAB_14eb1a176;
        }
        if (1 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<2>
                    (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                      ::__l94::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
      }
      else if (1 < (byte)LogNNERuntimeORT._0_1_) {
        Logging::Private::BasicLog<2>
                  (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                    ::__l67::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        EVar11 = Fail;
        goto LAB_14eb1a176;
      }
    }
  }
  EVar11 = Fail;
LAB_14eb1a176:
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return EVar11;
}

// RunSync @ 14eb1a1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */

EResultStatus __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::RunSync
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> *this,
          TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *param_1,
          TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *param_2)

{
  uchar *puVar1;
  TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *pTVar2;
  ENNETensorDataType EVar3;
  int iVar4;
  Session *pSVar5;
  longlong lVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *pTVar9;
  bool bVar10;
  EResultStatus EVar11;
  int iVar12;
  FTensor *pFVar13;
  Value VVar14;
  FTensorBindingCPU *pFVar15;
  ulonglong uVar16;
  OrtStatus *pOVar17;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar18;
  ulong64 uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  ulonglong uVar25;
  uint uVar26;
  bool bVar27;
  undefined1 auStackY_188 [32];
  ForAnyElementType local_130;
  uint local_128;
  uint local_124;
  ForAnyElementType local_120;
  undefined8 local_118;
  TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *local_110;
  longlong local_108;
  longlong local_100;
  TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *local_f8;
  MemoryInfo local_f0;
  MemoryInfo local_e8;
  void *local_e0;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_int_const_,int> local_c8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_b8;
  FTensorShape local_a8;
  ulonglong local_78;
  FTensorShape local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_110 = param_1;
  local_f8 = param_2;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FModelInstanceORTRunSync::RunSync");
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                ::__l2::__CpuProfilerEventSpecId377,"FModelInstanceORTRunSync::RunSync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
               ,0x179);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
               ::__l2::__CpuProfilerEventSpecId377);
  }
  if ((this->Session).Ptr == (Session *)0x0) {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      EVar11 = Fail;
      goto LAB_14eb1af56;
    }
  }
  else {
    iVar12 = (int)this->_padding_;
    if (iVar12 == 0) {
      if (1 < (byte)LogNNERuntimeORT._0_1_) {
        Logging::Private::BasicLog<2>
                  (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                    ::__l26::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        EVar11 = Fail;
        goto LAB_14eb1af56;
      }
    }
    else {
      if ((iVar12 != (this->InputTensors).ArrayNum) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FModelInstanceORTBase<ModelInterface>::InputTensorShapes.Num() == InputTensors.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                              ,0x188,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      if (((int)this->_padding_ != (this->InputTensorNames).ArrayNum) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FModelInstanceORTBase<ModelInterface>::InputTensorShapes.Num() == InputTensorNames.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                              ,0x189,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      if (((int)this->_padding_ != (this->InputTensors).ArrayNum) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FModelInstanceORTBase<ModelInterface>::InputSymbolicTensors.Num() == InputTensors.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                              ,0x18a,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      if (param_1->ArrayNum == (this->InputTensors).ArrayNum) {
        if (((int)this->_padding_ != (this->OutputTensorNames).ArrayNum) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("FModelInstanceORTBase<ModelInterface>::OutputSymbolicTensors.Num() == OutputTensorNames.Num()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                                ,0x192,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          EVar11 = (*pcVar7)();
          return EVar11;
        }
        if ((param_2->ArrayNum == 0) || (param_2->ArrayNum == (this->OutputTensorNames).ArrayNum)) {
          uVar22 = 0;
          local_120.Data = (FScriptContainerElement *)0x0;
          local_118 = 0;
          if (0 < (this->InputTensorNames).ArrayNum) {
            local_100 = 0;
            do {
              lVar23 = local_100;
              pFVar13 = (FTensor *)
                        TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                  (param_1,uVar22);
              uVar20 = 0;
              if ((int)uVar22 < (this->InputTensors).ArrayNum) {
                uVar20 = ~uVar22 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                EVar11 = (*pcVar7)();
                return EVar11;
              }
              pFVar24 = (this->InputTensors).AllocatorInstance.Data + lVar23;
              if ((*(longlong *)(pFVar13->Shape).Data.AllocatorInstance.InlineData == 0) &&
                 (*(longlong *)((pFVar13->Shape).Data.AllocatorInstance.InlineData + 8) != 0)) {
                if (1 < (byte)LogNNERuntimeORT._0_1_) {
                  Logging::Private::BasicLog<2>
                            (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                              ::__l117::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
                }
LAB_14eb1a89d:
                DestructItems<Ort::Value,int>((Value *)local_120.Data,(int)local_118);
                if ((Value)local_120.Data != (Value)0x0) {
                  FMemory::Free(local_120.Data);
                }
                EVar11 = Fail;
                goto LAB_14eb1af56;
              }
              if (*(longlong *)((pFVar13->Shape).Data.AllocatorInstance.InlineData + 8) !=
                  *(longlong *)(pFVar24 + 0x30)) {
                if (1 < (byte)LogNNERuntimeORT._0_1_) {
                  Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)
                             &`public:_virtual_enum_NNERuntimeORT::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                              ::J::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
                }
                goto LAB_14eb1a89d;
              }
              uVar20 = 0;
              if ((int)uVar22 < (this->InputTensorsORTType).ArrayNum) {
                uVar20 = ~uVar22 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                EVar11 = (*pcVar7)();
                return EVar11;
              }
              VVar14 = CreateTensor<UE::NNE::FTensorBindingCPU>
                                 (&local_f0,(FTensorBindingCPU *)(this->MemoryInfo).Ptr,pFVar13,
                                  (ONNXTensorElementDataType)pFVar24);
              if (((local_120.Data <= (ulonglong)VVar14) &&
                  ((ulonglong)VVar14 <
                   (ulonglong)((longlong)local_120.Data + (longlong)local_118._4_4_ * 8))) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar7 = (code *)swi(3);
                EVar11 = (*pcVar7)();
                return EVar11;
              }
              iVar12 = (int)local_118;
              if ((int)local_118 == local_118._4_4_) {
                iVar12 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_120,(int *)((longlong)&local_118 + 4));
              }
              local_118 = CONCAT44(local_118._4_4_,iVar12 + 1);
              *(undefined8 *)(local_120.Data + (longlong)iVar12 * 8) = *(undefined8 *)VVar14;
              *(undefined8 *)VVar14 = 0;
              (*Ort::Global<void>::api_->ReleaseValue)((OrtValue *)local_f0);
              uVar22 = uVar22 + 1;
              local_100 = local_100 + 0x38;
              param_2 = local_f8;
              param_1 = local_110;
            } while ((int)uVar22 < (this->InputTensorNames).ArrayNum);
          }
          uVar16 = 0;
          iVar12 = (this->OutputTensorNames).ArrayNum;
          local_128 = 0;
          local_130.Data = (FScriptContainerElement *)0x0;
          local_124 = 0;
          uVar21 = uVar16;
          uVar25 = uVar16;
          if (0 < iVar12) {
            do {
              uVar20 = (uint)uVar25;
              uVar22 = (uint)uVar16;
              if ((((this->OutputTensors).ArrayNum == 0) || (param_2->ArrayNum == 0)) ||
                 (pFVar15 = TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                      (param_2,uVar20), uVar22 = local_128,
                 pFVar15->Data == (void *)0x0)) {
LAB_14eb1a8c9:
                if (uVar22 == local_124) {
                  uVar22 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_130,(int *)&local_124);
                }
                local_128 = uVar22 + 1;
                *(undefined8 *)(local_130.Data + (longlong)(int)uVar22 * 8) = 0;
              }
              else {
                uVar26 = ~uVar20 >> 0x1f;
                uVar22 = 0;
                if ((int)uVar20 < (this->OutputTensors).ArrayNum) {
                  uVar22 = uVar26;
                }
                if ((uVar22 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                pFVar24 = (this->OutputTensors).AllocatorInstance.Data;
                pFVar15 = TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                    (param_2,uVar20);
                uVar22 = local_128;
                if (pFVar15->SizeInBytes < *(ulonglong *)(pFVar24 + uVar21 + 0x30))
                goto LAB_14eb1a8c9;
                uVar22 = 0;
                if ((int)uVar20 < (this->OutputTensorsORTType).ArrayNum) {
                  uVar22 = uVar26;
                }
                if ((uVar22 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                uVar22 = 0;
                if ((int)uVar20 < (this->OutputTensors).ArrayNum) {
                  uVar22 = uVar26;
                }
                if ((uVar22 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                pFVar24 = (this->OutputTensors).AllocatorInstance.Data;
                pFVar13 = (FTensor *)
                          TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                    (local_f8,uVar20);
                VVar14 = CreateTensor<UE::NNE::FTensorBindingCPU>
                                   (&local_e8,(FTensorBindingCPU *)(this->MemoryInfo).Ptr,pFVar13,
                                    uVar20 * 0x38 + (int)pFVar24);
                if (((local_130.Data <= (ulonglong)VVar14) &&
                    ((ulonglong)VVar14 <
                     (ulonglong)((longlong)local_130.Data + (longlong)(int)local_124 * 8))) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                if (local_128 == local_124) {
                  local_128 = Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x808,&local_130,(int *)&local_124);
                }
                *(undefined8 *)(local_130.Data + (longlong)(int)local_128 * 8) =
                     *(undefined8 *)VVar14;
                *(undefined8 *)VVar14 = 0;
                local_128 = local_128 + 1;
                (*Ort::Global<void>::api_->ReleaseValue)((OrtValue *)local_e8);
              }
              iVar12 = (this->OutputTensorNames).ArrayNum;
              uVar25 = (ulonglong)(uVar20 + 1);
              uVar16 = (ulonglong)local_128;
              uVar21 = uVar21 + 0x38;
              param_2 = local_f8;
            } while ((int)(uVar20 + 1) < iVar12);
          }
          pSVar5 = (this->Session).Ptr;
          if (((int)local_128 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          FVar8.Data = local_130.Data;
          pFVar24 = (this->OutputTensorNames).AllocatorInstance.Data;
          iVar4 = (this->InputTensorNames).ArrayNum;
          if (((int)local_118 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          pOVar17 = (*Ort::Global<void>::api_->Run)
                              ((OrtSession *)*pSVar5,(OrtRunOptions *)0x0,
                               (char **)(this->InputTensorNames).AllocatorInstance.Data,
                               (OrtValue **)local_120.Data,(longlong)iVar4,(char **)pFVar24,
                               (longlong)iVar12,(OrtValue **)FVar8.Data);
          Ort::ThrowOnError(pOVar17);
          (*Ort::Global<void>::api_->ReleaseRunOptions)((OrtRunOptions *)0x0);
          if ((this->OutputTensors).ArrayNum == 0) {
            if (((int)this->_padding_ != 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("FModelInstanceORTBase<ModelInterface>::OutputTensorShapes.IsEmpty()"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                                    ,0x1ca,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              EVar11 = (*pcVar7)();
              return EVar11;
            }
            uVar22 = 0;
            if (0 < (this->OutputTensorNames).ArrayNum) {
              pTVar2 = &this->OutputTensors;
              local_108 = 0;
              local_110 = (TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *)0x0;
              local_100 = 0;
              do {
                lVar23 = local_108;
                uVar20 = 0;
                if ((int)uVar22 < (int)this->_padding_) {
                  uVar20 = ~uVar22 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                lVar6 = this->_padding_;
                uVar20 = 0;
                if ((int)uVar22 < (int)local_128) {
                  uVar20 = ~uVar22 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                pTVar18 = OrtHelper::GetShape(&local_b8,(Value *)(local_130.Data + lVar23 * 8));
                local_d8 = (pTVar18->AllocatorInstance).Data;
                iVar12 = pTVar18->ArrayNum;
                if ((iVar12 < 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                local_c8._12_4_ = uStack_cc;
                local_c8.ArrayNum = iVar12;
                local_c8.DataPtr = (uint *)local_d8;
                iStack_d0 = iVar12;
                NNE::FTensorShape::Make(&local_70,&local_c8);
                if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b8.AllocatorInstance.Data);
                }
                EVar3 = *(ENNETensorDataType *)(lVar6 + 0x10 + local_100);
                uVar19 = NNE::FTensorShape::Volume(&local_70);
                if ((0xffffffff < uVar19) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InShape.Volume() <= TNumericLimits<uint32>::Max()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTTensor.h"
                                        ,0x1e,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                local_a8.Data.ArrayMax = 8;
                local_a8.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
                local_a8.Data.ArrayNum = 0;
                local_78 = 0;
                NNE::FTensorShape::operator=(&local_a8,&local_70);
                iVar12 = NNE::GetTensorDataTypeSizeInBytes(EVar3);
                uVar19 = NNE::FTensorShape::Volume(&local_70);
                pFVar24 = (pTVar2->AllocatorInstance).Data;
                local_78 = uVar19 * (longlong)iVar12;
                if (((pFVar24 <= (FScriptContainerElement *)&local_a8) &&
                    ((FScriptContainerElement *)&local_a8 <
                     pFVar24 + (longlong)(this->OutputTensors).ArrayMax * 0x38)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                iVar12 = (this->OutputTensors).ArrayNum;
                if (iVar12 == (this->OutputTensors).ArrayMax) {
                  iVar12 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x838,&pTVar2->AllocatorInstance,
                                      &(this->OutputTensors).ArrayMax);
                }
                (this->OutputTensors).ArrayNum = iVar12 + 1;
                pFVar24 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x38;
                NNE::FTensorShape::FTensorShape((FTensorShape *)pFVar24,&local_a8);
                *(ulonglong *)(pFVar24 + 0x30) = local_78;
                if ((((FTensorShape *)this->_padding_ <= &local_70) &&
                    (&local_70 <
                     (FTensorShape *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                iVar12 = (int)this->_padding_;
                if (iVar12 == *(int *)((longlong)&this->_padding_ + 4)) {
                  iVar12 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x830,(ForAnyElementType *)&this->_padding_,
                                      (int *)((longlong)&this->_padding_ + 4));
                }
                *(int *)&this->_padding_ = iVar12 + 1;
                _Dst = (ForElementType<unsigned_int>)((longlong)iVar12 * 0x30 + this->_padding_);
                *(ForElementType<unsigned_int> *)((longlong)_Dst + 0x20) =
                     (ForElementType<unsigned_int>)0x0;
                iVar12 = local_70.Data.ArrayNum;
                *(int *)((ForElementType<unsigned_int> *)((longlong)_Dst + 0x28))->InlineData =
                     iVar12;
                _Src = (ForElementType<unsigned_int>)&local_70;
                if (local_70.Data.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  _Src = local_70.Data.AllocatorInstance.SecondaryData;
                }
                puVar1 = (uchar *)((longlong)_Dst + 0x2c);
                if (iVar12 == 0) {
                  puVar1[0] = '\b';
                  puVar1[1] = '\0';
                  puVar1[2] = '\0';
                  puVar1[3] = '\0';
                }
                else {
                  Core::Private::
                  ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                            (4,4,iVar12,0,(ForElementType<unsigned_int> *)_Dst,iVar12,(int *)puVar1)
                  ;
                  if (*(ForElementType<unsigned_int> *)((longlong)_Dst + 0x20) !=
                      (ForElementType<unsigned_int>)0x0) {
                    _Dst = *(ForElementType<unsigned_int> *)((longlong)_Dst + 0x20);
                  }
                  memcpy((void *)_Dst,(void *)_Src,(longlong)iVar12 << 2);
                }
                pTVar9 = local_f8;
                lVar23 = local_108;
                if (local_f8->ArrayNum != 0) {
                  uVar20 = 0;
                  if ((int)uVar22 < local_f8->ArrayNum) {
                    uVar20 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    EVar11 = (*pcVar7)();
                    return EVar11;
                  }
                  uVar21 = local_78;
                  lVar23 = local_108;
                  if (((*(longlong *)((longlong)&local_110->DataPtr + (longlong)pTVar9->DataPtr) !=
                        0) && (local_78 != 0)) &&
                     (pFVar15 = TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                          (pTVar9,uVar22), uVar25 = local_78, lVar23 = local_108,
                     uVar21 <= pFVar15->SizeInBytes)) {
                    uVar20 = 0;
                    if ((int)uVar22 < (int)local_128) {
                      uVar20 = ~uVar22 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar7 = (code *)swi(3);
                      EVar11 = (*pcVar7)();
                      return EVar11;
                    }
                    lVar23 = local_108;
                    pOVar17 = (*Ort::Global<void>::api_->GetTensorMutableData)
                                        (*(OrtValue **)(local_130.Data + local_108 * 8),&local_e0);
                    Ort::ThrowOnError(pOVar17);
                    pFVar15 = TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                        (pTVar9,uVar22);
                    memcpy(pFVar15->Data,local_e0,uVar25);
                  }
                }
                pTVar9 = local_110;
                if (local_a8.Data.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FMemory::Free((void *)local_a8.Data.AllocatorInstance.SecondaryData);
                }
                if (local_70.Data.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FMemory::Free((void *)local_70.Data.AllocatorInstance.SecondaryData);
                }
                local_100 = local_100 + 0x48;
                local_108 = lVar23 + 1;
                local_110 = pTVar9 + 1;
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (this->OutputTensorNames).ArrayNum);
            }
          }
          DestructItems<Ort::Value,int>((Value *)local_130.Data,local_128);
          if ((Value)local_130.Data != (Value)0x0) {
            FMemory::Free(local_130.Data);
          }
          DestructItems<Ort::Value,int>((Value *)local_120.Data,(int)local_118);
          if ((Value)local_120.Data != (Value)0x0) {
            FMemory::Free(local_120.Data);
          }
          EVar11 = Ok;
          goto LAB_14eb1af56;
        }
        if (1 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<2>
                    (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                      ::__l94::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
      }
      else if (1 < (byte)LogNNERuntimeORT._0_1_) {
        Logging::Private::BasicLog<2>
                  (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                    ::__l67::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        EVar11 = Fail;
        goto LAB_14eb1af56;
      }
    }
  }
  EVar11 = Fail;
LAB_14eb1af56:
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return EVar11;
}

// RunSync @ 14eb1afb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */

EResultStatus __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::RunSync
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> *this,
          TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *param_1,
          TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *param_2)

{
  uchar *puVar1;
  TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *pTVar2;
  ENNETensorDataType EVar3;
  int iVar4;
  Session *pSVar5;
  longlong lVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *pTVar9;
  bool bVar10;
  EResultStatus EVar11;
  int iVar12;
  FTensor *pFVar13;
  Value VVar14;
  FTensorBindingCPU *pFVar15;
  ulonglong uVar16;
  OrtStatus *pOVar17;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar18;
  ulong64 uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  ulonglong uVar25;
  uint uVar26;
  bool bVar27;
  undefined1 auStackY_188 [32];
  ForAnyElementType local_130;
  uint local_128;
  uint local_124;
  ForAnyElementType local_120;
  undefined8 local_118;
  TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *local_110;
  longlong local_108;
  longlong local_100;
  TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *local_f8;
  MemoryInfo local_f0;
  MemoryInfo local_e8;
  void *local_e0;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_int_const_,int> local_c8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_b8;
  FTensorShape local_a8;
  ulonglong local_78;
  FTensorShape local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_110 = param_1;
  local_f8 = param_2;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FModelInstanceORTRunSync::RunSync");
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                ::__l2::__CpuProfilerEventSpecId377,"FModelInstanceORTRunSync::RunSync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
               ,0x179);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
               ::__l2::__CpuProfilerEventSpecId377);
  }
  if ((this->Session).Ptr == (Session *)0x0) {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      EVar11 = Fail;
      goto LAB_14eb1bd36;
    }
  }
  else {
    iVar12 = (int)this->_padding_;
    if (iVar12 == 0) {
      if (1 < (byte)LogNNERuntimeORT._0_1_) {
        Logging::Private::BasicLog<2>
                  (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                    ::__l26::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        EVar11 = Fail;
        goto LAB_14eb1bd36;
      }
    }
    else {
      if ((iVar12 != (this->InputTensors).ArrayNum) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FModelInstanceORTBase<ModelInterface>::InputTensorShapes.Num() == InputTensors.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                              ,0x188,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      if (((int)this->_padding_ != (this->InputTensorNames).ArrayNum) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FModelInstanceORTBase<ModelInterface>::InputTensorShapes.Num() == InputTensorNames.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                              ,0x189,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      if (((int)this->_padding_ != (this->InputTensors).ArrayNum) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FModelInstanceORTBase<ModelInterface>::InputSymbolicTensors.Num() == InputTensors.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                              ,0x18a,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      if (param_1->ArrayNum == (this->InputTensors).ArrayNum) {
        if (((int)this->_padding_ != (this->OutputTensorNames).ArrayNum) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("FModelInstanceORTBase<ModelInterface>::OutputSymbolicTensors.Num() == OutputTensorNames.Num()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                                ,0x192,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          EVar11 = (*pcVar7)();
          return EVar11;
        }
        if ((param_2->ArrayNum == 0) || (param_2->ArrayNum == (this->OutputTensorNames).ArrayNum)) {
          uVar22 = 0;
          local_120.Data = (FScriptContainerElement *)0x0;
          local_118 = 0;
          if (0 < (this->InputTensorNames).ArrayNum) {
            local_100 = 0;
            do {
              lVar23 = local_100;
              pFVar13 = (FTensor *)
                        TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                  (param_1,uVar22);
              uVar20 = 0;
              if ((int)uVar22 < (this->InputTensors).ArrayNum) {
                uVar20 = ~uVar22 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                EVar11 = (*pcVar7)();
                return EVar11;
              }
              pFVar24 = (this->InputTensors).AllocatorInstance.Data + lVar23;
              if ((*(longlong *)(pFVar13->Shape).Data.AllocatorInstance.InlineData == 0) &&
                 (*(longlong *)((pFVar13->Shape).Data.AllocatorInstance.InlineData + 8) != 0)) {
                if (1 < (byte)LogNNERuntimeORT._0_1_) {
                  Logging::Private::BasicLog<2>
                            (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                              ::__l117::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
                }
LAB_14eb1b67d:
                DestructItems<Ort::Value,int>((Value *)local_120.Data,(int)local_118);
                if ((Value)local_120.Data != (Value)0x0) {
                  FMemory::Free(local_120.Data);
                }
                EVar11 = Fail;
                goto LAB_14eb1bd36;
              }
              if (*(longlong *)((pFVar13->Shape).Data.AllocatorInstance.InlineData + 8) !=
                  *(longlong *)(pFVar24 + 0x30)) {
                if (1 < (byte)LogNNERuntimeORT._0_1_) {
                  Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)
                             &`public:_virtual_enum_NNERuntimeORT::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                              ::J::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
                }
                goto LAB_14eb1b67d;
              }
              uVar20 = 0;
              if ((int)uVar22 < (this->InputTensorsORTType).ArrayNum) {
                uVar20 = ~uVar22 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                EVar11 = (*pcVar7)();
                return EVar11;
              }
              VVar14 = CreateTensor<UE::NNE::FTensorBindingCPU>
                                 (&local_f0,(FTensorBindingCPU *)(this->MemoryInfo).Ptr,pFVar13,
                                  (ONNXTensorElementDataType)pFVar24);
              if (((local_120.Data <= (ulonglong)VVar14) &&
                  ((ulonglong)VVar14 <
                   (ulonglong)((longlong)local_120.Data + (longlong)local_118._4_4_ * 8))) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar7 = (code *)swi(3);
                EVar11 = (*pcVar7)();
                return EVar11;
              }
              iVar12 = (int)local_118;
              if ((int)local_118 == local_118._4_4_) {
                iVar12 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_120,(int *)((longlong)&local_118 + 4));
              }
              local_118 = CONCAT44(local_118._4_4_,iVar12 + 1);
              *(undefined8 *)(local_120.Data + (longlong)iVar12 * 8) = *(undefined8 *)VVar14;
              *(undefined8 *)VVar14 = 0;
              (*Ort::Global<void>::api_->ReleaseValue)((OrtValue *)local_f0);
              uVar22 = uVar22 + 1;
              local_100 = local_100 + 0x38;
              param_2 = local_f8;
              param_1 = local_110;
            } while ((int)uVar22 < (this->InputTensorNames).ArrayNum);
          }
          uVar16 = 0;
          iVar12 = (this->OutputTensorNames).ArrayNum;
          local_128 = 0;
          local_130.Data = (FScriptContainerElement *)0x0;
          local_124 = 0;
          uVar21 = uVar16;
          uVar25 = uVar16;
          if (0 < iVar12) {
            do {
              uVar20 = (uint)uVar25;
              uVar22 = (uint)uVar16;
              if ((((this->OutputTensors).ArrayNum == 0) || (param_2->ArrayNum == 0)) ||
                 (pFVar15 = TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                      (param_2,uVar20), uVar22 = local_128,
                 pFVar15->Data == (void *)0x0)) {
LAB_14eb1b6a9:
                if (uVar22 == local_124) {
                  uVar22 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_130,(int *)&local_124);
                }
                local_128 = uVar22 + 1;
                *(undefined8 *)(local_130.Data + (longlong)(int)uVar22 * 8) = 0;
              }
              else {
                uVar26 = ~uVar20 >> 0x1f;
                uVar22 = 0;
                if ((int)uVar20 < (this->OutputTensors).ArrayNum) {
                  uVar22 = uVar26;
                }
                if ((uVar22 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                pFVar24 = (this->OutputTensors).AllocatorInstance.Data;
                pFVar15 = TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                    (param_2,uVar20);
                uVar22 = local_128;
                if (pFVar15->SizeInBytes < *(ulonglong *)(pFVar24 + uVar21 + 0x30))
                goto LAB_14eb1b6a9;
                uVar22 = 0;
                if ((int)uVar20 < (this->OutputTensorsORTType).ArrayNum) {
                  uVar22 = uVar26;
                }
                if ((uVar22 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                uVar22 = 0;
                if ((int)uVar20 < (this->OutputTensors).ArrayNum) {
                  uVar22 = uVar26;
                }
                if ((uVar22 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                pFVar24 = (this->OutputTensors).AllocatorInstance.Data;
                pFVar13 = (FTensor *)
                          TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                    (local_f8,uVar20);
                VVar14 = CreateTensor<UE::NNE::FTensorBindingCPU>
                                   (&local_e8,(FTensorBindingCPU *)(this->MemoryInfo).Ptr,pFVar13,
                                    uVar20 * 0x38 + (int)pFVar24);
                if (((local_130.Data <= (ulonglong)VVar14) &&
                    ((ulonglong)VVar14 <
                     (ulonglong)((longlong)local_130.Data + (longlong)(int)local_124 * 8))) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                if (local_128 == local_124) {
                  local_128 = Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x808,&local_130,(int *)&local_124);
                }
                *(undefined8 *)(local_130.Data + (longlong)(int)local_128 * 8) =
                     *(undefined8 *)VVar14;
                *(undefined8 *)VVar14 = 0;
                local_128 = local_128 + 1;
                (*Ort::Global<void>::api_->ReleaseValue)((OrtValue *)local_e8);
              }
              iVar12 = (this->OutputTensorNames).ArrayNum;
              uVar25 = (ulonglong)(uVar20 + 1);
              uVar16 = (ulonglong)local_128;
              uVar21 = uVar21 + 0x38;
              param_2 = local_f8;
            } while ((int)(uVar20 + 1) < iVar12);
          }
          pSVar5 = (this->Session).Ptr;
          if (((int)local_128 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          FVar8.Data = local_130.Data;
          pFVar24 = (this->OutputTensorNames).AllocatorInstance.Data;
          iVar4 = (this->InputTensorNames).ArrayNum;
          if (((int)local_118 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          pOVar17 = (*Ort::Global<void>::api_->Run)
                              ((OrtSession *)*pSVar5,(OrtRunOptions *)0x0,
                               (char **)(this->InputTensorNames).AllocatorInstance.Data,
                               (OrtValue **)local_120.Data,(longlong)iVar4,(char **)pFVar24,
                               (longlong)iVar12,(OrtValue **)FVar8.Data);
          Ort::ThrowOnError(pOVar17);
          (*Ort::Global<void>::api_->ReleaseRunOptions)((OrtRunOptions *)0x0);
          if ((this->OutputTensors).ArrayNum == 0) {
            if (((int)this->_padding_ != 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("FModelInstanceORTBase<ModelInterface>::OutputTensorShapes.IsEmpty()"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                                    ,0x1ca,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              EVar11 = (*pcVar7)();
              return EVar11;
            }
            uVar22 = 0;
            if (0 < (this->OutputTensorNames).ArrayNum) {
              pTVar2 = &this->OutputTensors;
              local_108 = 0;
              local_110 = (TArrayView<UE::NNE::FTensorBindingCPU_const_,int> *)0x0;
              local_100 = 0;
              do {
                lVar23 = local_108;
                uVar20 = 0;
                if ((int)uVar22 < (int)this->_padding_) {
                  uVar20 = ~uVar22 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                lVar6 = this->_padding_;
                uVar20 = 0;
                if ((int)uVar22 < (int)local_128) {
                  uVar20 = ~uVar22 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                pTVar18 = OrtHelper::GetShape(&local_b8,(Value *)(local_130.Data + lVar23 * 8));
                local_d8 = (pTVar18->AllocatorInstance).Data;
                iVar12 = pTVar18->ArrayNum;
                if ((iVar12 < 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                local_c8._12_4_ = uStack_cc;
                local_c8.ArrayNum = iVar12;
                local_c8.DataPtr = (uint *)local_d8;
                iStack_d0 = iVar12;
                NNE::FTensorShape::Make(&local_70,&local_c8);
                if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b8.AllocatorInstance.Data);
                }
                EVar3 = *(ENNETensorDataType *)(lVar6 + 0x10 + local_100);
                uVar19 = NNE::FTensorShape::Volume(&local_70);
                if ((0xffffffff < uVar19) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InShape.Volume() <= TNumericLimits<uint32>::Max()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTTensor.h"
                                        ,0x1e,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                local_a8.Data.ArrayMax = 8;
                local_a8.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
                local_a8.Data.ArrayNum = 0;
                local_78 = 0;
                NNE::FTensorShape::operator=(&local_a8,&local_70);
                iVar12 = NNE::GetTensorDataTypeSizeInBytes(EVar3);
                uVar19 = NNE::FTensorShape::Volume(&local_70);
                pFVar24 = (pTVar2->AllocatorInstance).Data;
                local_78 = uVar19 * (longlong)iVar12;
                if (((pFVar24 <= (FScriptContainerElement *)&local_a8) &&
                    ((FScriptContainerElement *)&local_a8 <
                     pFVar24 + (longlong)(this->OutputTensors).ArrayMax * 0x38)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                iVar12 = (this->OutputTensors).ArrayNum;
                if (iVar12 == (this->OutputTensors).ArrayMax) {
                  iVar12 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x838,&pTVar2->AllocatorInstance,
                                      &(this->OutputTensors).ArrayMax);
                }
                (this->OutputTensors).ArrayNum = iVar12 + 1;
                pFVar24 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x38;
                NNE::FTensorShape::FTensorShape((FTensorShape *)pFVar24,&local_a8);
                *(ulonglong *)(pFVar24 + 0x30) = local_78;
                if ((((FTensorShape *)this->_padding_ <= &local_70) &&
                    (&local_70 <
                     (FTensorShape *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  EVar11 = (*pcVar7)();
                  return EVar11;
                }
                iVar12 = (int)this->_padding_;
                if (iVar12 == *(int *)((longlong)&this->_padding_ + 4)) {
                  iVar12 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x830,(ForAnyElementType *)&this->_padding_,
                                      (int *)((longlong)&this->_padding_ + 4));
                }
                *(int *)&this->_padding_ = iVar12 + 1;
                _Dst = (ForElementType<unsigned_int>)((longlong)iVar12 * 0x30 + this->_padding_);
                *(ForElementType<unsigned_int> *)((longlong)_Dst + 0x20) =
                     (ForElementType<unsigned_int>)0x0;
                iVar12 = local_70.Data.ArrayNum;
                *(int *)((ForElementType<unsigned_int> *)((longlong)_Dst + 0x28))->InlineData =
                     iVar12;
                _Src = (ForElementType<unsigned_int>)&local_70;
                if (local_70.Data.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  _Src = local_70.Data.AllocatorInstance.SecondaryData;
                }
                puVar1 = (uchar *)((longlong)_Dst + 0x2c);
                if (iVar12 == 0) {
                  puVar1[0] = '\b';
                  puVar1[1] = '\0';
                  puVar1[2] = '\0';
                  puVar1[3] = '\0';
                }
                else {
                  Core::Private::
                  ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                            (4,4,iVar12,0,(ForElementType<unsigned_int> *)_Dst,iVar12,(int *)puVar1)
                  ;
                  if (*(ForElementType<unsigned_int> *)((longlong)_Dst + 0x20) !=
                      (ForElementType<unsigned_int>)0x0) {
                    _Dst = *(ForElementType<unsigned_int> *)((longlong)_Dst + 0x20);
                  }
                  memcpy((void *)_Dst,(void *)_Src,(longlong)iVar12 << 2);
                }
                pTVar9 = local_f8;
                lVar23 = local_108;
                if (local_f8->ArrayNum != 0) {
                  uVar20 = 0;
                  if ((int)uVar22 < local_f8->ArrayNum) {
                    uVar20 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    EVar11 = (*pcVar7)();
                    return EVar11;
                  }
                  uVar21 = local_78;
                  lVar23 = local_108;
                  if (((*(longlong *)((longlong)&local_110->DataPtr + (longlong)pTVar9->DataPtr) !=
                        0) && (local_78 != 0)) &&
                     (pFVar15 = TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                          (pTVar9,uVar22), uVar25 = local_78, lVar23 = local_108,
                     uVar21 <= pFVar15->SizeInBytes)) {
                    uVar20 = 0;
                    if ((int)uVar22 < (int)local_128) {
                      uVar20 = ~uVar22 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar7 = (code *)swi(3);
                      EVar11 = (*pcVar7)();
                      return EVar11;
                    }
                    lVar23 = local_108;
                    pOVar17 = (*Ort::Global<void>::api_->GetTensorMutableData)
                                        (*(OrtValue **)(local_130.Data + local_108 * 8),&local_e0);
                    Ort::ThrowOnError(pOVar17);
                    pFVar15 = TArrayView<UE::NNE::FTensorBindingCPU_const_,int>::operator[]
                                        (pTVar9,uVar22);
                    memcpy(pFVar15->Data,local_e0,uVar25);
                  }
                }
                pTVar9 = local_110;
                if (local_a8.Data.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FMemory::Free((void *)local_a8.Data.AllocatorInstance.SecondaryData);
                }
                if (local_70.Data.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FMemory::Free((void *)local_70.Data.AllocatorInstance.SecondaryData);
                }
                local_100 = local_100 + 0x48;
                local_108 = lVar23 + 1;
                local_110 = pTVar9 + 1;
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (this->OutputTensorNames).ArrayNum);
            }
          }
          DestructItems<Ort::Value,int>((Value *)local_130.Data,local_128);
          if ((Value)local_130.Data != (Value)0x0) {
            FMemory::Free(local_130.Data);
          }
          DestructItems<Ort::Value,int>((Value *)local_120.Data,(int)local_118);
          if ((Value)local_120.Data != (Value)0x0) {
            FMemory::Free(local_120.Data);
          }
          EVar11 = Ok;
          goto LAB_14eb1bd36;
        }
        if (1 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<2>
                    (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                      ::__l94::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
      }
      else if (1 < (byte)LogNNERuntimeORT._0_1_) {
        Logging::Private::BasicLog<2>
                  (&`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::RunSync(TArrayView<UE::NNE::FTensorBindingCPU_const_,int>,TArrayView<UE::NNE::FTensorBindingCPU_const_,int>)___ptr64'
                    ::__l67::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        EVar11 = Fail;
        goto LAB_14eb1bd36;
      }
    }
  }
  EVar11 = Fail;
LAB_14eb1bd36:
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return EVar11;
}

// SetInputTensorShapes @ 14eb1bf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EResultStatus __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::
SetInputTensorShapes
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *param_1)

{
  uchar *puVar1;
  TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *pTVar2;
  ENNETensorDataType EVar3;
  FTensor *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  TArrayView<UE::NNE::FTensorShape_const_,int> *pTVar7;
  bool bVar8;
  EResultStatus EVar9;
  uint uVar10;
  int iVar11;
  ulong64 uVar12;
  FTensorShape *pFVar13;
  ForElementType<int> _Dst;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  ForElementType<unsigned_int> _Dst_00;
  uint uVar17;
  longlong *_Src;
  int *piVar18;
  TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *pTVar19;
  ForElementType<unsigned_int> _Src_00;
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *pFVar20;
  longlong *plVar21;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a8 [8];
  ulonglong local_1a0;
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *local_198;
  TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *local_190;
  TArrayView<UE::NNE::FTensorShape_const_,int> *local_188;
  FTensorDesc *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  TArrayView<UE::NNE::FTensorDesc_const_,int> local_168;
  TArrayView<UE::NNE::FTensorShape_const_,int> local_158;
  FTensorShape local_148;
  longlong local_118;
  FString local_108;
  ENNETensorDataType local_f8;
  FSymbolicTensorShape local_f0;
  FTensorShape local_b8;
  longlong local_88;
  FTensorShape local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar2 = &this->InputTensors;
  piVar18 = &(this->InputTensors).ArrayMax;
  iVar11 = (this->InputTensors).ArrayNum;
  pFVar4 = (FTensor *)(pTVar2->AllocatorInstance).Data;
  local_198 = this;
  local_188 = param_1;
  if ((this->InputTensors).ArrayMax < 0) {
    DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
    (this->InputTensors).ArrayNum = 0;
    if (*piVar18 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&pTVar2->AllocatorInstance,0,piVar18);
    }
  }
  else {
    DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
    (this->InputTensors).ArrayNum = 0;
  }
  uVar17 = 0;
  pTVar19 = &this->OutputTensors;
  piVar18 = &(this->OutputTensors).ArrayMax;
  pFVar4 = (FTensor *)(pTVar19->AllocatorInstance).Data;
  iVar11 = (this->OutputTensors).ArrayNum;
  local_190 = pTVar19;
  if ((this->OutputTensors).ArrayMax < 0) {
    DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
    (this->OutputTensors).ArrayNum = 0;
    if (*piVar18 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&pTVar19->AllocatorInstance,0,piVar18);
    }
  }
  else {
    DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
    (this->OutputTensors).ArrayNum = 0;
  }
  piVar18 = (int *)((longlong)&this->_padding_ + 4);
  iVar11 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)this->_padding_,iVar11);
    iVar11 = *piVar18;
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar11 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)&this->_padding_,0,piVar18);
    }
  }
  else {
    DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)this->_padding_,iVar11);
    *(undefined4 *)&this->_padding_ = 0;
  }
  local_178 = (FTensorDesc *)this->_padding_;
  iVar11 = (int)this->_padding_;
  pFVar13 = param_1->DataPtr;
  uVar6._0_4_ = param_1->ArrayNum;
  uVar6._4_4_ = *(undefined4 *)&param_1->field_0xc;
  if ((iVar11 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  local_168._12_4_ = uStack_16c;
  local_168.ArrayNum = iVar11;
  local_168.DataPtr = local_178;
  iStack_170 = iVar11;
  local_158.DataPtr = pFVar13;
  local_158._8_8_ = uVar6;
  bVar8 = Detail::SetInputTensorShapes
                    (&local_158,&local_168,
                     (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  pFVar20 = local_198;
  if (bVar8) {
    if (0 < (int)this->_padding_) {
      local_1a0 = 0;
      do {
        uVar14 = local_1a0;
        uVar10 = 0;
        if ((int)uVar17 < (int)pFVar20->_padding_) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        pTVar7 = local_188;
        EVar3 = *(ENNETensorDataType *)(uVar14 + 0x10 + pFVar20->_padding_);
        uVar10 = 0;
        if ((int)uVar17 < local_188->ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        pFVar13 = pTVar7->DataPtr + (int)uVar17;
        uVar12 = NNE::FTensorShape::Volume(pFVar13);
        if ((0xffffffff < uVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InShape.Volume() <= TNumericLimits<uint32>::Max()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTTensor.h"
                               ,0x1e,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_b8.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 8;
        local_88 = 0;
        NNE::FTensorShape::operator=(&local_b8,pFVar13);
        iVar11 = NNE::GetTensorDataTypeSizeInBytes(EVar3);
        uVar12 = NNE::FTensorShape::Volume(pFVar13);
        local_88 = uVar12 * (longlong)iVar11;
        iVar11 = (this->InputTensors).ArrayNum;
        if (iVar11 == (this->InputTensors).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar2->AllocatorInstance,&(this->InputTensors).ArrayMax);
        }
        (this->InputTensors).ArrayNum = iVar11 + 1;
        pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x38;
        NNE::FTensorShape::FTensorShape((FTensorShape *)pFVar15,&local_b8);
        *(longlong *)(pFVar15 + 0x30) = local_88;
        if (local_b8.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_b8.Data.AllocatorInstance.SecondaryData);
        }
        uVar17 = uVar17 + 1;
        local_1a0 = local_1a0 + 0x48;
        pTVar19 = local_190;
      } while ((int)uVar17 < (int)pFVar20->_padding_);
    }
    iVar11 = (int)local_198->_padding_;
    uVar14 = (ulonglong)iVar11;
    piVar18 = (int *)local_198->_padding_;
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar11);
    local_190 = (TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *)
                (piVar18 + uVar14 * 0x12);
    plVar21 = (longlong *)(piVar18 + 0xe);
    pFVar20 = local_198;
    while( true ) {
      pTVar2 = local_190;
      if ((int)pFVar20->_padding_ != (int)uVar14) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<UE::NNE::FTensorDesc,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1a8);
      }
      if ((TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *)piVar18 ==
          pTVar2) break;
      ::FString::FString(&local_108,(FString *)piVar18);
      local_f8 = *(ENNETensorDataType *)(plVar21 + -5);
      local_f0.Data.ArrayNum = (int)plVar21[1];
      lVar16 = (longlong)local_f0.Data.ArrayNum;
      _Src = (longlong *)*plVar21;
      if ((longlong *)*plVar21 == (longlong *)0x0) {
        _Src = plVar21 + -4;
      }
      local_f0.Data.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      if (local_f0.Data.ArrayNum == 0) {
        local_f0.Data.ArrayMax = 8;
      }
      else {
        Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,local_f0.Data.ArrayNum,0,(ForElementType<int> *)&local_f0,
                   local_f0.Data.ArrayNum,&local_f0.Data.ArrayMax);
        _Dst = (ForElementType<int>)&local_f0;
        if (local_f0.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          _Dst = local_f0.Data.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)_Dst,_Src,lVar16 << 2);
      }
      bVar8 = NNE::FSymbolicTensorShape::IsConcrete(&local_f0);
      EVar3 = local_f8;
      if (bVar8) {
        pFVar13 = NNE::FTensorShape::MakeFromSymbolic(&local_80,&local_f0);
        uVar12 = NNE::FTensorShape::Volume(pFVar13);
        if ((0xffffffff < uVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InShape.Volume() <= TNumericLimits<uint32>::Max()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTTensor.h"
                               ,0x1e,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_148.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 8;
        local_118 = 0;
        NNE::FTensorShape::operator=(&local_148,pFVar13);
        iVar11 = NNE::GetTensorDataTypeSizeInBytes(EVar3);
        uVar12 = NNE::FTensorShape::Volume(pFVar13);
        local_118 = uVar12 * (longlong)iVar11;
        if (local_80.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_80.Data.AllocatorInstance.SecondaryData);
        }
        iVar11 = pTVar19->ArrayNum;
        if (iVar11 == pTVar19->ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar19->AllocatorInstance,&pTVar19->ArrayMax);
        }
        pTVar19->ArrayNum = iVar11 + 1;
        pFVar15 = (pTVar19->AllocatorInstance).Data + (longlong)iVar11 * 0x38;
        NNE::FTensorShape::FTensorShape((FTensorShape *)pFVar15,&local_148);
        *(longlong *)&pFVar15[0x30].field_0x0 = local_118;
        iVar11 = (int)pFVar20->_padding_;
        if (iVar11 == *(int *)((longlong)&pFVar20->_padding_ + 4)) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,(ForAnyElementType *)&pFVar20->_padding_,
                              (int *)((longlong)&pFVar20->_padding_ + 4));
        }
        *(int *)&pFVar20->_padding_ = iVar11 + 1;
        _Dst_00 = (ForElementType<unsigned_int>)(pFVar20->_padding_ + (longlong)iVar11 * 0x30);
        *(ForElementType<unsigned_int> *)((longlong)_Dst_00 + 0x20) =
             (ForElementType<unsigned_int>)0x0;
        lVar16 = (longlong)local_148.Data.ArrayNum;
        *(int *)((ForElementType<unsigned_int> *)((longlong)_Dst_00 + 0x28))->InlineData =
             local_148.Data.ArrayNum;
        _Src_00 = (ForElementType<unsigned_int>)&local_148;
        if (local_148.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          _Src_00 = local_148.Data.AllocatorInstance.SecondaryData;
        }
        puVar1 = (uchar *)((longlong)_Dst_00 + 0x2c);
        if (local_148.Data.ArrayNum == 0) {
          puVar1[0] = '\b';
          puVar1[1] = '\0';
          puVar1[2] = '\0';
          puVar1[3] = '\0';
        }
        else {
          Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,local_148.Data.ArrayNum,0,(ForElementType<unsigned_int> *)_Dst_00,
                     local_148.Data.ArrayNum,(int *)puVar1);
          if (*(ForElementType<unsigned_int> *)((longlong)_Dst_00 + 0x20) !=
              (ForElementType<unsigned_int>)0x0) {
            _Dst_00 = *(ForElementType<unsigned_int> *)((longlong)_Dst_00 + 0x20);
          }
          memcpy((void *)_Dst_00,(void *)_Src_00,lVar16 << 2);
        }
        pFVar20 = local_198;
        if (local_148.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_148.Data.AllocatorInstance.SecondaryData);
          pFVar20 = local_198;
        }
      }
      if (local_f0.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_f0.Data.AllocatorInstance.SecondaryData);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      uVar14 = local_1a0 & 0xffffffff;
      piVar18 = piVar18 + 0x12;
      plVar21 = plVar21 + 9;
    }
    iVar11 = (pFVar20->OutputTensors).ArrayNum;
    if (iVar11 != (int)pFVar20->_padding_) {
      pFVar4 = (FTensor *)(pTVar19->AllocatorInstance).Data;
      if (pTVar19->ArrayMax < 0) {
        DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
        pTVar19->ArrayNum = 0;
        if (pTVar19->ArrayMax != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,&pTVar19->AllocatorInstance,0,&pTVar19->ArrayMax);
        }
      }
      else {
        DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
        pTVar19->ArrayNum = 0;
      }
      piVar18 = (int *)((longlong)&pFVar20->_padding_ + 4);
      iVar11 = (int)pFVar20->_padding_;
      if (*(int *)((longlong)&pFVar20->_padding_ + 4) < 0) {
        DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)pFVar20->_padding_,iVar11);
        iVar11 = *piVar18;
        *(undefined4 *)&pFVar20->_padding_ = 0;
        if (iVar11 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,(ForAnyElementType *)&pFVar20->_padding_,0,piVar18);
        }
      }
      else {
        DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)pFVar20->_padding_,iVar11);
        *(undefined4 *)&pFVar20->_padding_ = 0;
      }
    }
    EVar9 = Ok;
  }
  else {
    EVar9 = Fail;
  }
  return EVar9;
}

// SetInputTensorShapes @ 14eb1c600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EResultStatus __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::
SetInputTensorShapes
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *param_1)

{
  uchar *puVar1;
  TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *pTVar2;
  ENNETensorDataType EVar3;
  FTensor *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  TArrayView<UE::NNE::FTensorShape_const_,int> *pTVar7;
  bool bVar8;
  EResultStatus EVar9;
  uint uVar10;
  int iVar11;
  ulong64 uVar12;
  FTensorShape *pFVar13;
  ForElementType<int> _Dst;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  ForElementType<unsigned_int> _Dst_00;
  uint uVar17;
  longlong *_Src;
  int *piVar18;
  TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *pTVar19;
  ForElementType<unsigned_int> _Src_00;
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> *pFVar20;
  longlong *plVar21;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a8 [8];
  ulonglong local_1a0;
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> *local_198;
  TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *local_190;
  TArrayView<UE::NNE::FTensorShape_const_,int> *local_188;
  FTensorDesc *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  TArrayView<UE::NNE::FTensorDesc_const_,int> local_168;
  TArrayView<UE::NNE::FTensorShape_const_,int> local_158;
  FTensorShape local_148;
  longlong local_118;
  FString local_108;
  ENNETensorDataType local_f8;
  FSymbolicTensorShape local_f0;
  FTensorShape local_b8;
  longlong local_88;
  FTensorShape local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar2 = &this->InputTensors;
  piVar18 = &(this->InputTensors).ArrayMax;
  iVar11 = (this->InputTensors).ArrayNum;
  pFVar4 = (FTensor *)(pTVar2->AllocatorInstance).Data;
  local_198 = this;
  local_188 = param_1;
  if ((this->InputTensors).ArrayMax < 0) {
    DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
    (this->InputTensors).ArrayNum = 0;
    if (*piVar18 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&pTVar2->AllocatorInstance,0,piVar18);
    }
  }
  else {
    DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
    (this->InputTensors).ArrayNum = 0;
  }
  uVar17 = 0;
  pTVar19 = &this->OutputTensors;
  piVar18 = &(this->OutputTensors).ArrayMax;
  pFVar4 = (FTensor *)(pTVar19->AllocatorInstance).Data;
  iVar11 = (this->OutputTensors).ArrayNum;
  local_190 = pTVar19;
  if ((this->OutputTensors).ArrayMax < 0) {
    DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
    (this->OutputTensors).ArrayNum = 0;
    if (*piVar18 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&pTVar19->AllocatorInstance,0,piVar18);
    }
  }
  else {
    DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
    (this->OutputTensors).ArrayNum = 0;
  }
  piVar18 = (int *)((longlong)&this->_padding_ + 4);
  iVar11 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)this->_padding_,iVar11);
    iVar11 = *piVar18;
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar11 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)&this->_padding_,0,piVar18);
    }
  }
  else {
    DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)this->_padding_,iVar11);
    *(undefined4 *)&this->_padding_ = 0;
  }
  local_178 = (FTensorDesc *)this->_padding_;
  iVar11 = (int)this->_padding_;
  pFVar13 = param_1->DataPtr;
  uVar6._0_4_ = param_1->ArrayNum;
  uVar6._4_4_ = *(undefined4 *)&param_1->field_0xc;
  if ((iVar11 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  local_168._12_4_ = uStack_16c;
  local_168.ArrayNum = iVar11;
  local_168.DataPtr = local_178;
  iStack_170 = iVar11;
  local_158.DataPtr = pFVar13;
  local_158._8_8_ = uVar6;
  bVar8 = Detail::SetInputTensorShapes
                    (&local_158,&local_168,
                     (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  pFVar20 = local_198;
  if (bVar8) {
    if (0 < (int)this->_padding_) {
      local_1a0 = 0;
      do {
        uVar14 = local_1a0;
        uVar10 = 0;
        if ((int)uVar17 < (int)pFVar20->_padding_) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        pTVar7 = local_188;
        EVar3 = *(ENNETensorDataType *)(uVar14 + 0x10 + pFVar20->_padding_);
        uVar10 = 0;
        if ((int)uVar17 < local_188->ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        pFVar13 = pTVar7->DataPtr + (int)uVar17;
        uVar12 = NNE::FTensorShape::Volume(pFVar13);
        if ((0xffffffff < uVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InShape.Volume() <= TNumericLimits<uint32>::Max()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTTensor.h"
                               ,0x1e,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_b8.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 8;
        local_88 = 0;
        NNE::FTensorShape::operator=(&local_b8,pFVar13);
        iVar11 = NNE::GetTensorDataTypeSizeInBytes(EVar3);
        uVar12 = NNE::FTensorShape::Volume(pFVar13);
        local_88 = uVar12 * (longlong)iVar11;
        iVar11 = (this->InputTensors).ArrayNum;
        if (iVar11 == (this->InputTensors).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar2->AllocatorInstance,&(this->InputTensors).ArrayMax);
        }
        (this->InputTensors).ArrayNum = iVar11 + 1;
        pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x38;
        NNE::FTensorShape::FTensorShape((FTensorShape *)pFVar15,&local_b8);
        *(longlong *)(pFVar15 + 0x30) = local_88;
        if (local_b8.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_b8.Data.AllocatorInstance.SecondaryData);
        }
        uVar17 = uVar17 + 1;
        local_1a0 = local_1a0 + 0x48;
        pTVar19 = local_190;
      } while ((int)uVar17 < (int)pFVar20->_padding_);
    }
    iVar11 = (int)local_198->_padding_;
    uVar14 = (ulonglong)iVar11;
    piVar18 = (int *)local_198->_padding_;
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar11);
    local_190 = (TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *)
                (piVar18 + uVar14 * 0x12);
    plVar21 = (longlong *)(piVar18 + 0xe);
    pFVar20 = local_198;
    while( true ) {
      pTVar2 = local_190;
      if ((int)pFVar20->_padding_ != (int)uVar14) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<UE::NNE::FTensorDesc,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1a8);
      }
      if ((TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *)piVar18 ==
          pTVar2) break;
      ::FString::FString(&local_108,(FString *)piVar18);
      local_f8 = *(ENNETensorDataType *)(plVar21 + -5);
      local_f0.Data.ArrayNum = (int)plVar21[1];
      lVar16 = (longlong)local_f0.Data.ArrayNum;
      _Src = (longlong *)*plVar21;
      if ((longlong *)*plVar21 == (longlong *)0x0) {
        _Src = plVar21 + -4;
      }
      local_f0.Data.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      if (local_f0.Data.ArrayNum == 0) {
        local_f0.Data.ArrayMax = 8;
      }
      else {
        Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,local_f0.Data.ArrayNum,0,(ForElementType<int> *)&local_f0,
                   local_f0.Data.ArrayNum,&local_f0.Data.ArrayMax);
        _Dst = (ForElementType<int>)&local_f0;
        if (local_f0.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          _Dst = local_f0.Data.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)_Dst,_Src,lVar16 << 2);
      }
      bVar8 = NNE::FSymbolicTensorShape::IsConcrete(&local_f0);
      EVar3 = local_f8;
      if (bVar8) {
        pFVar13 = NNE::FTensorShape::MakeFromSymbolic(&local_80,&local_f0);
        uVar12 = NNE::FTensorShape::Volume(pFVar13);
        if ((0xffffffff < uVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InShape.Volume() <= TNumericLimits<uint32>::Max()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTTensor.h"
                               ,0x1e,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_148.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 8;
        local_118 = 0;
        NNE::FTensorShape::operator=(&local_148,pFVar13);
        iVar11 = NNE::GetTensorDataTypeSizeInBytes(EVar3);
        uVar12 = NNE::FTensorShape::Volume(pFVar13);
        local_118 = uVar12 * (longlong)iVar11;
        if (local_80.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_80.Data.AllocatorInstance.SecondaryData);
        }
        iVar11 = pTVar19->ArrayNum;
        if (iVar11 == pTVar19->ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar19->AllocatorInstance,&pTVar19->ArrayMax);
        }
        pTVar19->ArrayNum = iVar11 + 1;
        pFVar15 = (pTVar19->AllocatorInstance).Data + (longlong)iVar11 * 0x38;
        NNE::FTensorShape::FTensorShape((FTensorShape *)pFVar15,&local_148);
        *(longlong *)&pFVar15[0x30].field_0x0 = local_118;
        iVar11 = (int)pFVar20->_padding_;
        if (iVar11 == *(int *)((longlong)&pFVar20->_padding_ + 4)) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,(ForAnyElementType *)&pFVar20->_padding_,
                              (int *)((longlong)&pFVar20->_padding_ + 4));
        }
        *(int *)&pFVar20->_padding_ = iVar11 + 1;
        _Dst_00 = (ForElementType<unsigned_int>)(pFVar20->_padding_ + (longlong)iVar11 * 0x30);
        *(ForElementType<unsigned_int> *)((longlong)_Dst_00 + 0x20) =
             (ForElementType<unsigned_int>)0x0;
        lVar16 = (longlong)local_148.Data.ArrayNum;
        *(int *)((ForElementType<unsigned_int> *)((longlong)_Dst_00 + 0x28))->InlineData =
             local_148.Data.ArrayNum;
        _Src_00 = (ForElementType<unsigned_int>)&local_148;
        if (local_148.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          _Src_00 = local_148.Data.AllocatorInstance.SecondaryData;
        }
        puVar1 = (uchar *)((longlong)_Dst_00 + 0x2c);
        if (local_148.Data.ArrayNum == 0) {
          puVar1[0] = '\b';
          puVar1[1] = '\0';
          puVar1[2] = '\0';
          puVar1[3] = '\0';
        }
        else {
          Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,local_148.Data.ArrayNum,0,(ForElementType<unsigned_int> *)_Dst_00,
                     local_148.Data.ArrayNum,(int *)puVar1);
          if (*(ForElementType<unsigned_int> *)((longlong)_Dst_00 + 0x20) !=
              (ForElementType<unsigned_int>)0x0) {
            _Dst_00 = *(ForElementType<unsigned_int> *)((longlong)_Dst_00 + 0x20);
          }
          memcpy((void *)_Dst_00,(void *)_Src_00,lVar16 << 2);
        }
        pFVar20 = local_198;
        if (local_148.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_148.Data.AllocatorInstance.SecondaryData);
          pFVar20 = local_198;
        }
      }
      if (local_f0.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_f0.Data.AllocatorInstance.SecondaryData);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      uVar14 = local_1a0 & 0xffffffff;
      piVar18 = piVar18 + 0x12;
      plVar21 = plVar21 + 9;
    }
    iVar11 = (pFVar20->OutputTensors).ArrayNum;
    if (iVar11 != (int)pFVar20->_padding_) {
      pFVar4 = (FTensor *)(pTVar19->AllocatorInstance).Data;
      if (pTVar19->ArrayMax < 0) {
        DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
        pTVar19->ArrayNum = 0;
        if (pTVar19->ArrayMax != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,&pTVar19->AllocatorInstance,0,&pTVar19->ArrayMax);
        }
      }
      else {
        DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
        pTVar19->ArrayNum = 0;
      }
      piVar18 = (int *)((longlong)&pFVar20->_padding_ + 4);
      iVar11 = (int)pFVar20->_padding_;
      if (*(int *)((longlong)&pFVar20->_padding_ + 4) < 0) {
        DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)pFVar20->_padding_,iVar11);
        iVar11 = *piVar18;
        *(undefined4 *)&pFVar20->_padding_ = 0;
        if (iVar11 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,(ForAnyElementType *)&pFVar20->_padding_,0,piVar18);
        }
      }
      else {
        DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)pFVar20->_padding_,iVar11);
        *(undefined4 *)&pFVar20->_padding_ = 0;
      }
    }
    EVar9 = Ok;
  }
  else {
    EVar9 = Fail;
  }
  return EVar9;
}

// SetInputTensorShapes @ 14eb1ccc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EResultStatus __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::
SetInputTensorShapes
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *param_1)

{
  uchar *puVar1;
  TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *pTVar2;
  ENNETensorDataType EVar3;
  FTensor *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  TArrayView<UE::NNE::FTensorShape_const_,int> *pTVar7;
  bool bVar8;
  EResultStatus EVar9;
  uint uVar10;
  int iVar11;
  ulong64 uVar12;
  FTensorShape *pFVar13;
  ForElementType<int> _Dst;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  ForElementType<unsigned_int> _Dst_00;
  uint uVar17;
  longlong *_Src;
  int *piVar18;
  TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *pTVar19;
  ForElementType<unsigned_int> _Src_00;
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> *pFVar20;
  longlong *plVar21;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a8 [8];
  ulonglong local_1a0;
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> *local_198;
  TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *local_190;
  TArrayView<UE::NNE::FTensorShape_const_,int> *local_188;
  FTensorDesc *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  TArrayView<UE::NNE::FTensorDesc_const_,int> local_168;
  TArrayView<UE::NNE::FTensorShape_const_,int> local_158;
  FTensorShape local_148;
  longlong local_118;
  FString local_108;
  ENNETensorDataType local_f8;
  FSymbolicTensorShape local_f0;
  FTensorShape local_b8;
  longlong local_88;
  FTensorShape local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar2 = &this->InputTensors;
  piVar18 = &(this->InputTensors).ArrayMax;
  iVar11 = (this->InputTensors).ArrayNum;
  pFVar4 = (FTensor *)(pTVar2->AllocatorInstance).Data;
  local_198 = this;
  local_188 = param_1;
  if ((this->InputTensors).ArrayMax < 0) {
    DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
    (this->InputTensors).ArrayNum = 0;
    if (*piVar18 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&pTVar2->AllocatorInstance,0,piVar18);
    }
  }
  else {
    DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
    (this->InputTensors).ArrayNum = 0;
  }
  uVar17 = 0;
  pTVar19 = &this->OutputTensors;
  piVar18 = &(this->OutputTensors).ArrayMax;
  pFVar4 = (FTensor *)(pTVar19->AllocatorInstance).Data;
  iVar11 = (this->OutputTensors).ArrayNum;
  local_190 = pTVar19;
  if ((this->OutputTensors).ArrayMax < 0) {
    DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
    (this->OutputTensors).ArrayNum = 0;
    if (*piVar18 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&pTVar19->AllocatorInstance,0,piVar18);
    }
  }
  else {
    DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
    (this->OutputTensors).ArrayNum = 0;
  }
  piVar18 = (int *)((longlong)&this->_padding_ + 4);
  iVar11 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)this->_padding_,iVar11);
    iVar11 = *piVar18;
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar11 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)&this->_padding_,0,piVar18);
    }
  }
  else {
    DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)this->_padding_,iVar11);
    *(undefined4 *)&this->_padding_ = 0;
  }
  local_178 = (FTensorDesc *)this->_padding_;
  iVar11 = (int)this->_padding_;
  pFVar13 = param_1->DataPtr;
  uVar6._0_4_ = param_1->ArrayNum;
  uVar6._4_4_ = *(undefined4 *)&param_1->field_0xc;
  if ((iVar11 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  local_168._12_4_ = uStack_16c;
  local_168.ArrayNum = iVar11;
  local_168.DataPtr = local_178;
  iStack_170 = iVar11;
  local_158.DataPtr = pFVar13;
  local_158._8_8_ = uVar6;
  bVar8 = Detail::SetInputTensorShapes
                    (&local_158,&local_168,
                     (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  pFVar20 = local_198;
  if (bVar8) {
    if (0 < (int)this->_padding_) {
      local_1a0 = 0;
      do {
        uVar14 = local_1a0;
        uVar10 = 0;
        if ((int)uVar17 < (int)pFVar20->_padding_) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        pTVar7 = local_188;
        EVar3 = *(ENNETensorDataType *)(uVar14 + 0x10 + pFVar20->_padding_);
        uVar10 = 0;
        if ((int)uVar17 < local_188->ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        pFVar13 = pTVar7->DataPtr + (int)uVar17;
        uVar12 = NNE::FTensorShape::Volume(pFVar13);
        if ((0xffffffff < uVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InShape.Volume() <= TNumericLimits<uint32>::Max()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTTensor.h"
                               ,0x1e,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_b8.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 8;
        local_88 = 0;
        NNE::FTensorShape::operator=(&local_b8,pFVar13);
        iVar11 = NNE::GetTensorDataTypeSizeInBytes(EVar3);
        uVar12 = NNE::FTensorShape::Volume(pFVar13);
        local_88 = uVar12 * (longlong)iVar11;
        iVar11 = (this->InputTensors).ArrayNum;
        if (iVar11 == (this->InputTensors).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar2->AllocatorInstance,&(this->InputTensors).ArrayMax);
        }
        (this->InputTensors).ArrayNum = iVar11 + 1;
        pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x38;
        NNE::FTensorShape::FTensorShape((FTensorShape *)pFVar15,&local_b8);
        *(longlong *)(pFVar15 + 0x30) = local_88;
        if (local_b8.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_b8.Data.AllocatorInstance.SecondaryData);
        }
        uVar17 = uVar17 + 1;
        local_1a0 = local_1a0 + 0x48;
        pTVar19 = local_190;
      } while ((int)uVar17 < (int)pFVar20->_padding_);
    }
    iVar11 = (int)local_198->_padding_;
    uVar14 = (ulonglong)iVar11;
    piVar18 = (int *)local_198->_padding_;
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar11);
    local_190 = (TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *)
                (piVar18 + uVar14 * 0x12);
    plVar21 = (longlong *)(piVar18 + 0xe);
    pFVar20 = local_198;
    while( true ) {
      pTVar2 = local_190;
      if ((int)pFVar20->_padding_ != (int)uVar14) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<UE::NNE::FTensorDesc,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1a8);
      }
      if ((TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *)piVar18 ==
          pTVar2) break;
      ::FString::FString(&local_108,(FString *)piVar18);
      local_f8 = *(ENNETensorDataType *)(plVar21 + -5);
      local_f0.Data.ArrayNum = (int)plVar21[1];
      lVar16 = (longlong)local_f0.Data.ArrayNum;
      _Src = (longlong *)*plVar21;
      if ((longlong *)*plVar21 == (longlong *)0x0) {
        _Src = plVar21 + -4;
      }
      local_f0.Data.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      if (local_f0.Data.ArrayNum == 0) {
        local_f0.Data.ArrayMax = 8;
      }
      else {
        Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,local_f0.Data.ArrayNum,0,(ForElementType<int> *)&local_f0,
                   local_f0.Data.ArrayNum,&local_f0.Data.ArrayMax);
        _Dst = (ForElementType<int>)&local_f0;
        if (local_f0.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          _Dst = local_f0.Data.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)_Dst,_Src,lVar16 << 2);
      }
      bVar8 = NNE::FSymbolicTensorShape::IsConcrete(&local_f0);
      EVar3 = local_f8;
      if (bVar8) {
        pFVar13 = NNE::FTensorShape::MakeFromSymbolic(&local_80,&local_f0);
        uVar12 = NNE::FTensorShape::Volume(pFVar13);
        if ((0xffffffff < uVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InShape.Volume() <= TNumericLimits<uint32>::Max()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTTensor.h"
                               ,0x1e,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_148.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 8;
        local_118 = 0;
        NNE::FTensorShape::operator=(&local_148,pFVar13);
        iVar11 = NNE::GetTensorDataTypeSizeInBytes(EVar3);
        uVar12 = NNE::FTensorShape::Volume(pFVar13);
        local_118 = uVar12 * (longlong)iVar11;
        if (local_80.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_80.Data.AllocatorInstance.SecondaryData);
        }
        iVar11 = pTVar19->ArrayNum;
        if (iVar11 == pTVar19->ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar19->AllocatorInstance,&pTVar19->ArrayMax);
        }
        pTVar19->ArrayNum = iVar11 + 1;
        pFVar15 = (pTVar19->AllocatorInstance).Data + (longlong)iVar11 * 0x38;
        NNE::FTensorShape::FTensorShape((FTensorShape *)pFVar15,&local_148);
        *(longlong *)&pFVar15[0x30].field_0x0 = local_118;
        iVar11 = (int)pFVar20->_padding_;
        if (iVar11 == *(int *)((longlong)&pFVar20->_padding_ + 4)) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,(ForAnyElementType *)&pFVar20->_padding_,
                              (int *)((longlong)&pFVar20->_padding_ + 4));
        }
        *(int *)&pFVar20->_padding_ = iVar11 + 1;
        _Dst_00 = (ForElementType<unsigned_int>)(pFVar20->_padding_ + (longlong)iVar11 * 0x30);
        *(ForElementType<unsigned_int> *)((longlong)_Dst_00 + 0x20) =
             (ForElementType<unsigned_int>)0x0;
        lVar16 = (longlong)local_148.Data.ArrayNum;
        *(int *)((ForElementType<unsigned_int> *)((longlong)_Dst_00 + 0x28))->InlineData =
             local_148.Data.ArrayNum;
        _Src_00 = (ForElementType<unsigned_int>)&local_148;
        if (local_148.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          _Src_00 = local_148.Data.AllocatorInstance.SecondaryData;
        }
        puVar1 = (uchar *)((longlong)_Dst_00 + 0x2c);
        if (local_148.Data.ArrayNum == 0) {
          puVar1[0] = '\b';
          puVar1[1] = '\0';
          puVar1[2] = '\0';
          puVar1[3] = '\0';
        }
        else {
          Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,local_148.Data.ArrayNum,0,(ForElementType<unsigned_int> *)_Dst_00,
                     local_148.Data.ArrayNum,(int *)puVar1);
          if (*(ForElementType<unsigned_int> *)((longlong)_Dst_00 + 0x20) !=
              (ForElementType<unsigned_int>)0x0) {
            _Dst_00 = *(ForElementType<unsigned_int> *)((longlong)_Dst_00 + 0x20);
          }
          memcpy((void *)_Dst_00,(void *)_Src_00,lVar16 << 2);
        }
        pFVar20 = local_198;
        if (local_148.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_148.Data.AllocatorInstance.SecondaryData);
          pFVar20 = local_198;
        }
      }
      if (local_f0.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_f0.Data.AllocatorInstance.SecondaryData);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      uVar14 = local_1a0 & 0xffffffff;
      piVar18 = piVar18 + 0x12;
      plVar21 = plVar21 + 9;
    }
    iVar11 = (pFVar20->OutputTensors).ArrayNum;
    if (iVar11 != (int)pFVar20->_padding_) {
      pFVar4 = (FTensor *)(pTVar19->AllocatorInstance).Data;
      if (pTVar19->ArrayMax < 0) {
        DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
        pTVar19->ArrayNum = 0;
        if (pTVar19->ArrayMax != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,&pTVar19->AllocatorInstance,0,&pTVar19->ArrayMax);
        }
      }
      else {
        DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar11);
        pTVar19->ArrayNum = 0;
      }
      piVar18 = (int *)((longlong)&pFVar20->_padding_ + 4);
      iVar11 = (int)pFVar20->_padding_;
      if (*(int *)((longlong)&pFVar20->_padding_ + 4) < 0) {
        DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)pFVar20->_padding_,iVar11);
        iVar11 = *piVar18;
        *(undefined4 *)&pFVar20->_padding_ = 0;
        if (iVar11 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,(ForAnyElementType *)&pFVar20->_padding_,0,piVar18);
        }
      }
      else {
        DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)pFVar20->_padding_,iVar11);
        *(undefined4 *)&pFVar20->_padding_ = 0;
      }
    }
    EVar9 = Ok;
  }
  else {
    EVar9 = Fail;
  }
  return EVar9;
}

