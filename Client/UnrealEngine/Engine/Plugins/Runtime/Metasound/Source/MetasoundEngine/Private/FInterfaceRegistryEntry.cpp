// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 8

// FInterfaceRegistryEntry @ 14b349750

FInterfaceRegistryEntry * __thiscall
Metasound::Engine::FInterfaceRegistryEntry::FInterfaceRegistryEntry
          (FInterfaceRegistryEntry *this,FMetasoundFrontendInterface *param_1,FName param_2,
          bool param_3)

{
  longlong lVar1;
  FMetasoundFrontendVersionNumber FVar2;
  
  (this->Interface)._padding_ = 0;
  this->_padding_ = (longlong)&___7FInterfaceRegistryEntry_Engine_Metasound__6B_;
  (this->Interface)._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&(this->Interface)._padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->Interface)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  (this->Interface)._padding_ = 0;
  (this->Interface)._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&(this->Interface)._padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->Interface)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  (this->Interface)._padding_ = 0;
  (this->Interface)._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&(this->Interface)._padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->Interface)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  lVar1 = param_1->_padding_;
  (this->Interface)._padding_ = param_1->_padding_;
  (this->Interface)._padding_ = lVar1;
  FVar2 = (param_1->Metadata).Version.Number;
  (this->Interface).Metadata.Version.Name = (param_1->Metadata).Version.Name;
  (this->Interface).Metadata.Version.Number = FVar2;
  (this->Interface).Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Metadata.UClassOptions.AllocatorInstance.Data =
       (param_1->Metadata).UClassOptions.AllocatorInstance.Data;
  (param_1->Metadata).UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Metadata.UClassOptions.ArrayNum = (param_1->Metadata).UClassOptions.ArrayNum;
  (this->Interface).Metadata.UClassOptions.ArrayMax = (param_1->Metadata).UClassOptions.ArrayMax;
  (param_1->Metadata).UClassOptions.ArrayNum = 0;
  (param_1->Metadata).UClassOptions.ArrayMax = 0;
  (this->UpdateTransform).Ptr = (IDocumentTransform *)0x0;
  this->RouterName = param_2;
  this->bIsDeprecated = param_3;
  return this;
}

// FInterfaceRegistryEntry @ 14b349810

FInterfaceRegistryEntry * __thiscall
Metasound::Engine::FInterfaceRegistryEntry::FInterfaceRegistryEntry
          (FInterfaceRegistryEntry *this,FMetasoundFrontendInterface *param_1,
          TUniquePtr<Metasound::Frontend::IDocumentTransform,TDefaultDelete<Metasound::Frontend::IDocumentTransform>_>
          *param_2,FName param_3,bool param_4)

{
  this->_padding_ = (longlong)&___7FInterfaceRegistryEntry_Engine_Metasound__6B_;
  FMetasoundFrontendInterface::FMetasoundFrontendInterface(&this->Interface,param_1);
  (this->UpdateTransform).Ptr = param_2->Ptr;
  param_2->Ptr = (IDocumentTransform *)0x0;
  this->bIsDeprecated = param_4;
  this->RouterName = param_3;
  return this;
}

// FInterfaceRegistryEntry @ 14b349870

FInterfaceRegistryEntry * __thiscall
Metasound::Engine::FInterfaceRegistryEntry::FInterfaceRegistryEntry
          (FInterfaceRegistryEntry *this,FMetasoundFrontendInterface *param_1,FName param_2,
          bool param_3)

{
  this->_padding_ = (longlong)&___7FInterfaceRegistryEntry_Engine_Metasound__6B_;
  FMetasoundFrontendInterface::FMetasoundFrontendInterface(&this->Interface,param_1);
  (this->UpdateTransform).Ptr = (IDocumentTransform *)0x0;
  this->RouterName = param_2;
  this->bIsDeprecated = param_3;
  return this;
}

// GetInterface @ 14b3b4f10

FMetasoundFrontendInterface * __thiscall
Metasound::Engine::FInterfaceRegistryEntry::GetInterface(FInterfaceRegistryEntry *this)

{
  return &this->Interface;
}

// GetRouterName @ 14b3bff80

FName __thiscall
Metasound::Engine::FInterfaceRegistryEntry::GetRouterName(FInterfaceRegistryEntry *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->RouterName;
  return in_RDX;
}

// IsDeprecated @ 14b3c8290

bool __thiscall
Metasound::Engine::FInterfaceRegistryEntry::IsDeprecated(FInterfaceRegistryEntry *this)

{
  return this->bIsDeprecated;
}

// UpdateRootGraphInterface @ 14b3e65a0

bool __thiscall
Metasound::Engine::FInterfaceRegistryEntry::UpdateRootGraphInterface
          (FInterfaceRegistryEntry *this,FMetaSoundFrontendDocumentBuilder *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  FMetasoundAssetBase *this_00;
  TSharedRef<Metasound::Frontend::IDocumentController,1> *pTVar3;
  longlong lVar4;
  TSharedRef<Metasound::Frontend::IDocumentController,1> local_18;
  
  lVar4 = this->_padding_;
  if ((this->UpdateTransform).Ptr != (IDocumentTransform *)0x0) {
    this_00 = FMetaSoundFrontendDocumentBuilder::GetMetasoundAsset(param_1);
    pTVar3 = FMetasoundAssetBase::GetDocumentHandle(this_00,&local_18);
    uVar1 = (**(code **)(lVar4 + 0x28))(this,pTVar3);
    return (bool)uVar1;
  }
  lVar4 = (**(code **)(lVar4 + 8))();
  bVar2 = FMetaSoundFrontendDocumentBuilder::AddInterface(param_1,*(FName *)(lVar4 + 0x40));
  return bVar2;
}

// UpdateRootGraphInterface @ 14b3e6620

bool __thiscall
Metasound::Engine::FInterfaceRegistryEntry::UpdateRootGraphInterface
          (FInterfaceRegistryEntry *this,
          TSharedRef<Metasound::Frontend::IDocumentController,1> *param_1)

{
  IDocumentTransform *pIVar1;
  code *pcVar2;
  undefined1 uVar3;
  IDocumentController *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar1 = (this->UpdateTransform).Ptr;
  if (pIVar1 != (IDocumentTransform *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x10);
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = (*pcVar2)(pIVar1,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (bool)uVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

