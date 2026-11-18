// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// ~FInstall @ 1445a8700

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall::~FInstall(FInstall *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->HttpRequestHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::IoStore::Private::FResolvedContainerChunks,int>
            ((FResolvedContainerChunks *)(this->ResolvedChunks).AllocatorInstance.Data,
             (this->ResolvedChunks).ArrayNum);
  pFVar1 = (this->ResolvedChunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Request).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->OnProgress != 0) {
    plVar2 = *(longlong **)&(this->OnProgress).field_0x28;
    plVar3 = (longlong *)&(this->OnProgress).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->OnCompleted != 0) {
    plVar2 = *(longlong **)&(this->OnCompleted).field_0x28;
    plVar3 = (longlong *)&(this->OnCompleted).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FOnDemandInstallArgs::~FOnDemandInstallArgs(&this->Args);
  return;
}

