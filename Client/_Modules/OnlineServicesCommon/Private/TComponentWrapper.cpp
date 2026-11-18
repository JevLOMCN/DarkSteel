// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 7

// ~TComponentWrapper<FOnlineComponentTest> @ 14ee14070

void __thiscall
UE::Online::FOnlineComponentRegistry::TComponentWrapper<FOnlineComponentTest>::
~TComponentWrapper<FOnlineComponentTest>(TComponentWrapper<FOnlineComponentTest> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TComponentWrapper_VFOnlineComponentTest___FOnlineComponentRegistry_Online_UE__6B_;
  TOnlineComponent<UE::Online::Test::ITestInterface>::
  ~TOnlineComponent<UE::Online::Test::ITestInterface>
            ((TOnlineComponent<UE::Online::Test::ITestInterface> *)&this->Object);
  this->_padding_ = (longlong)&___7IComponentWrapper_FOnlineComponentRegistry_Online_UE__6B_;
  return;
}

// AssignBaseSharedPtr @ 14ee5b3b0

void __thiscall
UE::Online::FOnlineComponentRegistry::TComponentWrapper<FOnlineComponentTest>::AssignBaseSharedPtr
          (TComponentWrapper<FOnlineComponentTest> *this,void *param_1)

{
  TSharedRef<UE::Online::Test::ITestInterface,1> *pTVar1;
  ITestInterface *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<UE::Online::Test::ITestInterface,1> local_18;
  
  pTVar1 = TOnlineComponent<UE::Online::Test::ITestInterface>::AsShared
                     ((TOnlineComponent<UE::Online::Test::ITestInterface> *)&this->Object,&local_18)
  ;
  local_20.ReferenceController = (pTVar1->SharedReferenceCount).ReferenceController;
  local_28 = pTVar1->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_1 != &local_28) {
    *(ITestInterface **)param_1 = local_28;
    local_28 = (ITestInterface *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 8),&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// Get @ 14eed5490

IOnlineComponent * __thiscall
UE::Online::FOnlineComponentRegistry::TComponentWrapper<FOnlineComponentTest>::Get
          (TComponentWrapper<FOnlineComponentTest> *this)

{
  return (IOnlineComponent *)&this->Object;
}

// Get @ 14eed54a0

IOnlineComponent * __thiscall
UE::Online::FOnlineComponentRegistry::TComponentWrapper<FOnlineComponentTest>::Get
          (TComponentWrapper<FOnlineComponentTest> *this)

{
  return (IOnlineComponent *)&this->Object;
}

// GetBase @ 14eed7ed0

void * __thiscall
UE::Online::FOnlineComponentRegistry::TComponentWrapper<FOnlineComponentTest>::GetBase
          (TComponentWrapper<FOnlineComponentTest> *this)

{
  void *pvVar1;
  
  pvVar1 = &(this->Object).field_0x8;
  if (this == (TComponentWrapper<FOnlineComponentTest> *)0xfffffffffffffff0) {
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

// GetTypeName @ 14eee5ea0

FOnlineTypeName __thiscall
UE::Online::FOnlineComponentRegistry::TComponentWrapper<FOnlineComponentTest>::GetTypeName
          (TComponentWrapper<FOnlineComponentTest> *this)

{
  wchar_t *in_RDX;
  
  *(wchar_t **)in_RDX = L"class FOnlineComponentTest";
  return (FOnlineTypeName)in_RDX;
}

// IsA @ 14eeee370

bool __thiscall
UE::Online::FOnlineComponentRegistry::TComponentWrapper<FOnlineComponentTest>::IsA
          (TComponentWrapper<FOnlineComponentTest> *this,FOnlineTypeName param_1)

{
  int iVar1;
  
  iVar1 = wcscmp(param_1.Name,L"class FOnlineComponentTest");
  if (iVar1 != 0) {
    iVar1 = wcscmp(param_1.Name,
                   L"class UE::Online::TOnlineComponent<struct UE::Online::Test::ITestInterface>");
    if (iVar1 != 0) {
      iVar1 = wcscmp(param_1.Name,L"struct UE::Online::Test::ITestInterface");
      return iVar1 == 0;
    }
  }
  return true;
}

