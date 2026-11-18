// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 2

// ~FModelInstanceORTCpu @ 14eb06c70

/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTCpu::~FModelInstanceORTCpu(FModelInstanceORTCpu *this)

{
  undefined8 *puVar1;
  char cVar2;
  IFileManager *pIVar3;
  wchar_t *pwVar4;
  
  *(undefined ***)this =
       &
       ___7__FModelInstanceORTRunSync_VIModelInstanceCPU_NNE_UE__UFTensorBindingCPU_23__Private_NNERuntimeORT_UE__6B_
  ;
  puVar1 = *(undefined8 **)&this->field_0x70;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)&this->field_0x70 = 0;
    (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*puVar1);
    ::operator_delete(puVar1,8);
  }
  if (1 < *(int *)&this->field_0x58) {
    pIVar3 = IFileManager::Get();
    if (*(int *)&this->field_0x58 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)&this->field_0x50;
    }
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x68))(pIVar3,pwVar4,0,1);
    if ((cVar2 == '\0') && (2 < (byte)LogNNERuntimeORT._0_1_)) {
      Logging::Private::BasicLog<3>
                (&`public:_virtual___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::~FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>(void)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
            (*(FTensor **)&this->field_0x100,*(int *)&this->field_0x108);
  if (*(void **)&this->field_0x100 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x100);
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
            (*(FTensor **)&this->field_0xf0,*(int *)&this->field_0xf8);
  if (*(void **)&this->field_0xf0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xf0);
  }
  if (*(void **)&this->field_0xe0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xe0);
  }
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int>
            (*(unique_ptr<char,Ort::detail::AllocatedFree> **)&this->field_0xc0,
             *(int *)&this->field_0xc8);
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int>
            (*(unique_ptr<char,Ort::detail::AllocatedFree> **)&this->field_0xb0,
             *(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  if (*(void **)&this->field_0xa0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa0);
  }
  if (*(void **)&this->field_0x90 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x90);
  }
  puVar1 = *(undefined8 **)&this->field_0x88;
  if (puVar1 != (undefined8 *)0x0) {
    (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)*puVar1);
    ::operator_delete(puVar1,8);
  }
  puVar1 = *(undefined8 **)&this->field_0x80;
  if (puVar1 != (undefined8 *)0x0) {
    (*Ort::Global<void>::api_->ReleaseSessionOptions)((OrtSessionOptions *)*puVar1);
    ::operator_delete(puVar1,8);
  }
  ::operator_delete(*(void **)&this->field_0x78,8);
  puVar1 = *(undefined8 **)&this->field_0x70;
  if (puVar1 != (undefined8 *)0x0) {
    (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*puVar1);
    ::operator_delete(puVar1,8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x68);
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  FModelInstanceORTBase<UE::NNE::IModelInstanceCPU>::
  ~FModelInstanceORTBase<UE::NNE::IModelInstanceCPU>
            ((FModelInstanceORTBase<UE::NNE::IModelInstanceCPU> *)this);
  return;
}

// InitializedAndConfigureMembers @ 14eb17900

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

bool __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTCpu::InitializedAndConfigureMembers
          (FModelInstanceORTCpu *this)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  OrtAllocator **ppOVar4;
  OrtStatus *pOVar5;
  undefined8 *puVar6;
  TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_> TVar7;
  FEnvironment *pFVar8;
  FEnvironment *local_res8;
  undefined8 local_18;
  longlong local_10;
  
  ppOVar4 = ::operator_new(8);
  if (ppOVar4 == (OrtAllocator **)0x0) {
    ppOVar4 = (OrtAllocator **)0x0;
  }
  else {
    *ppOVar4 = (OrtAllocator *)0x0;
    pOVar5 = (*Ort::Global<void>::api_->GetAllocatorWithDefaultOptions)(ppOVar4);
    Ort::ThrowOnError(pOVar5);
  }
  puVar1 = &this->field_0x78;
  if ((undefined8 *)puVar1 != &local_18) {
    pvVar2 = *(void **)puVar1;
    *(OrtAllocator ***)puVar1 = ppOVar4;
    ppOVar4 = (OrtAllocator **)0x0;
    ::operator_delete(pvVar2,8);
  }
  ::operator_delete(ppOVar4,8);
  pOVar5 = (*Ort::Global<void>::api_->CreateCpuMemoryInfo)
                     (OrtDeviceAllocator,OrtMemTypeCPU,(OrtMemoryInfo **)&local_res8);
  Ort::ThrowOnError(pOVar5);
  pFVar8 = local_res8;
  puVar6 = ::operator_new(8);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = pFVar8;
    pFVar8 = (FEnvironment *)0x0;
  }
  puVar1 = &this->field_0x88;
  if ((longlong *)puVar1 == &local_10) {
    if (puVar6 == (undefined8 *)0x0) goto LAB_14eb17a1a;
    (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)*puVar6);
  }
  else {
    puVar3 = *(undefined8 **)puVar1;
    *(undefined8 **)puVar1 = puVar6;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14eb17a1a;
    (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)*puVar3);
    puVar6 = puVar3;
  }
  ::operator_delete(puVar6,8);
LAB_14eb17a1a:
  (*Ort::Global<void>::api_->ReleaseMemoryInfo)((OrtMemoryInfo *)pFVar8);
  TVar7 = CreateSessionOptionsDefault
                    ((TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *)&local_res8);
  puVar1 = &this->field_0x80;
  if ((SessionOptions *)puVar1 != TVar7.Ptr) {
    puVar6 = *(undefined8 **)puVar1;
    *(SessionOptions *)puVar1 = *TVar7.Ptr;
    *TVar7.Ptr = (SessionOptions)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      (*Ort::Global<void>::api_->ReleaseSessionOptions)((OrtSessionOptions *)*puVar6);
      ::operator_delete(puVar6,8);
    }
  }
  if (local_res8 != (FEnvironment *)0x0) {
    (*Ort::Global<void>::api_->ReleaseSessionOptions)(*(OrtSessionOptions **)&local_res8->Config);
    ::operator_delete(local_res8,8);
  }
  if (*(undefined8 **)puVar1 == (undefined8 *)0x0) {
    return false;
  }
  pOVar5 = (*Ort::Global<void>::api_->SetSessionExecutionMode)
                     ((OrtSessionOptions *)**(undefined8 **)puVar1,
                      *(ExecutionMode *)&this->field_0x48);
  Ort::ThrowOnError(pOVar5);
  pOVar5 = (*Ort::Global<void>::api_->SetSessionGraphOptimizationLevel)
                     ((OrtSessionOptions *)**(undefined8 **)puVar1,ORT_ENABLE_ALL);
  Ort::ThrowOnError(pOVar5);
  pOVar5 = (*Ort::Global<void>::api_->EnableCpuMemArena)
                     ((OrtSessionOptions *)**(undefined8 **)puVar1);
  Ort::ThrowOnError(pOVar5);
  return true;
}

