// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// FInterfaceBindingRegistryEntry @ 14ad99450

FInterfaceBindingRegistryEntry * __thiscall
Metasound::Frontend::FInterfaceBindingRegistryEntry::FInterfaceBindingRegistryEntry
          (FInterfaceBindingRegistryEntry *this,FMetasoundFrontendInterfaceBinding *param_1)

{
  TArray<FMetasoundFrontendInterfaceVertexBinding,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FMetasoundFrontendVersionNumber FVar4;
  
  pTVar1 = &this->VertexBindings;
  this->_padding_ = (longlong)&___7FInterfaceBindingRegistryEntry_Frontend_Metasound__6B_;
  piVar2 = &(this->VertexBindings).ArrayMax;
  FVar4 = (param_1->OutputInterfaceVersion).Number;
  (this->OutputInterfaceVersion).Name = (param_1->OutputInterfaceVersion).Name;
  (this->OutputInterfaceVersion).Number = FVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->VertexBindings).ArrayNum;
  _Src = (param_1->VertexBindings).AllocatorInstance.Data;
  (this->VertexBindings).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  this->BindingPriority = param_1->BindingPriority;
  return this;
}

// ~FInterfaceBindingRegistryEntry @ 14ad9e200

void __thiscall
Metasound::Frontend::FInterfaceBindingRegistryEntry::~FInterfaceBindingRegistryEntry
          (FInterfaceBindingRegistryEntry *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->VertexBindings).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// GetBindingPriority @ 14adbcf50

int __thiscall
Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority
          (FInterfaceBindingRegistryEntry *this)

{
  return this->BindingPriority;
}

// GetOutputInterfaceVersion @ 14adc2140

FMetasoundFrontendVersion * __thiscall
Metasound::Frontend::FInterfaceBindingRegistryEntry::GetOutputInterfaceVersion
          (FInterfaceBindingRegistryEntry *this)

{
  return &this->OutputInterfaceVersion;
}

// GetVertexBindings @ 14adc3e90

TArray<FMetasoundFrontendInterfaceVertexBinding,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInterfaceBindingRegistryEntry::GetVertexBindings
          (FInterfaceBindingRegistryEntry *this)

{
  return &this->VertexBindings;
}

