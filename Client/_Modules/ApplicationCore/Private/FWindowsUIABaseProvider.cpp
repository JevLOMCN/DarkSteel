// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 6

// FWindowsUIABaseProvider @ 1423c45d0

FWindowsUIABaseProvider * __thiscall
FWindowsUIABaseProvider::FWindowsUIABaseProvider
          (FWindowsUIABaseProvider *this,FWindowsUIAManager *param_1,
          TSharedRef<IAccessibleWidget,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FWindowsUIABaseProvider *local_res8;
  FWindowsUIABaseProvider *local_res10;
  
  this->UIAManager = param_1;
  this->_padding_ = (longlong)&___7FWindowsUIABaseProvider__6B_;
  (this->Widget).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->RefCount = 1;
  local_res10 = this;
  TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
  ::Emplace<FWindowsUIABaseProvider_*>
            (&this->UIAManager->ProviderList,&local_res8,(bool *)&local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FWindowsUIABaseProvider @ 1423c7430

void __thiscall FWindowsUIABaseProvider::~FWindowsUIABaseProvider(FWindowsUIABaseProvider *this)

{
  this->_padding_ = (longlong)&___7FWindowsUIABaseProvider__6B_;
  if (this->UIAManager != (FWindowsUIAManager *)0x0) {
    TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
    ::Remove(&this->UIAManager->ProviderList,this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Widget).SharedReferenceCount.ReferenceController);
  return;
}

// DecrementRef @ 1423d81a0

uint __thiscall FWindowsUIABaseProvider::DecrementRef(FWindowsUIABaseProvider *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->RefCount == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6951043228682420265>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\Accessibility\\WindowsUIABaseProvider.cpp"
                       ,0x29,"RefCount > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = this->RefCount - 1;
  this->RefCount = uVar3;
  if (uVar3 == 0) {
    (**(code **)this->_padding_)(this,1);
    uVar3 = 0;
  }
  return uVar3;
}

// IncrementRef @ 1423e7bd0

uint __thiscall FWindowsUIABaseProvider::IncrementRef(FWindowsUIABaseProvider *this)

{
  this->RefCount = this->RefCount + 1;
  return this->RefCount;
}

// IsValid @ 1423eb560

bool __thiscall FWindowsUIABaseProvider::IsValid(FWindowsUIABaseProvider *this)

{
  char cVar1;
  
  if (this->UIAManager != (FWindowsUIAManager *)0x0) {
    cVar1 = (**(code **)(*(longlong *)(this->Widget).Object + 0x10))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// OnUIAManagerDestroyed @ 1423f1b20

void __thiscall FWindowsUIABaseProvider::OnUIAManagerDestroyed(FWindowsUIABaseProvider *this)

{
  this->UIAManager = (FWindowsUIAManager *)0x0;
  return;
}

