// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 3

// CreateLiveLinkProvider<FLiveLinkProvider> @ 14cfe8470

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ILiveLinkProvider,1> * __cdecl
ILiveLinkProvider::CreateLiveLinkProvider<FLiveLinkProvider>
          (TSharedPtr<ILiveLinkProvider,1> *__return_storage_ptr__,FString *param_1,
          FMessageEndpointBuilder *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  wchar_t *pwVar4;
  TSharedPtr<ILiveLinkProvider,1> *pTVar5;
  
  pTVar3 = ::operator_new(0x110);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (ILiveLinkProvider *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFLiveLinkProvider___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FLiveLinkProvider__6B_;
    ::FString::FString((FString *)&pTVar3[1].SharedReferenceCount,param_1);
    pwVar4 = FWindowsPlatformProcess::ComputerName();
    ::FString::FString((FString *)&pTVar3[2].SharedReferenceCount,pwVar4);
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar3[4].SharedReferenceCount,4000);
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[8]._padding_ = 0;
    pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[9]._padding_ = 0;
    pTVar3[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[10]._padding_ = 0;
    pTVar3[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc]._padding_ = 0;
    pTVar3[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar3[0xd]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar3[0xd]._padding_ + 4) = 0;
    pTVar3[0xe]._padding_ = 0;
    pTVar3[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xf]._padding_ = 0;
    pTVar3[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xf].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x10]._padding_ = 0;
    pTVar3[0x10].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[0x10].WeakReferenceCount = (atomic<int>)0x0;
    FLiveLinkProvider::CreateMessageEndpoint((FLiveLinkProvider *)(pTVar3 + 1),param_2);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedPtr<ILiveLinkProvider,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (ILiveLinkProvider *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ~ILiveLinkProvider @ 14cfea140

void __thiscall ILiveLinkProvider::~ILiveLinkProvider(ILiveLinkProvider *this)

{
  *this = (ILiveLinkProvider)&___7ILiveLinkProvider__6B_;
  return;
}

// CreateLiveLinkProvider @ 14cfeb150

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ILiveLinkProvider,1> * __cdecl
ILiveLinkProvider::CreateLiveLinkProvider
          (TSharedPtr<ILiveLinkProvider,1> *__return_storage_ptr__,FString *param_1)

{
  FLiveLinkProvider *this;
  TRawPtrProxy<FLiveLinkProvider> local_res8;
  
  this = ::operator_new(0x100);
  local_res8.Object = (FLiveLinkProvider *)0x0;
  if (this != (FLiveLinkProvider *)0x0) {
    local_res8.Object = FLiveLinkProvider::FLiveLinkProvider(this,param_1);
  }
  TSharedPtr<ILiveLinkProvider,1>::TSharedPtr<ILiveLinkProvider,1><FLiveLinkProvider>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

