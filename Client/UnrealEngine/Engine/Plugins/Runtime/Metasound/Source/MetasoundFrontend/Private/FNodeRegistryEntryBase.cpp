// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 10

// ~FNodeRegistryEntryBase @ 14ad9e750

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FNodeRegistryEntryBase::~FNodeRegistryEntryBase
          (FNodeRegistryEntryBase *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FrontendClass).Interface.Environment.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrontendClass).Interface.Outputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)
             (this->FrontendClass).Interface.Inputs.AllocatorInstance.Data,
             (this->FrontendClass).Interface.Inputs.ArrayNum);
  pFVar1 = (this->FrontendClass).Interface.Inputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClassMetadata).SharedReferenceCount.ReferenceController);
  return;
}

// GetClassInfo @ 14aeac8e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassInfo * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FNodeRegistryEntryBase::GetClassInfo
          (FNodeRegistryEntryBase *this)

{
  return &this->ClassInfo;
}

// GetFrontendClass @ 14aeac8f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FNodeRegistryEntryBase::GetFrontendClass
          (FNodeRegistryEntryBase *this)

{
  return &this->FrontendClass;
}

// CreateNode @ 14aeac960

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FNodeRegistryEntryBase::CreateNode
          (FNodeRegistryEntryBase *this,FNodeInitData *param_1)

{
  code *pcVar1;
  FVertexInterface *pFVar2;
  FNodeData *pFVar3;
  FName *in_R8;
  FVertexInterface local_d8;
  FNodeData local_88;
  
  pcVar1 = *(code **)(this->_padding_ + 0x10);
  pFVar2 = FVertexInterface::FVertexInterface
                     (&local_d8,&((this->ClassMetadata).Object)->DefaultInterface);
  pFVar3 = FNodeData::FNodeData(&local_88,in_R8,(FGuid *)(in_R8 + 1),pFVar2);
  (*pcVar1)(this,param_1,pFVar3);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// GetImplementedInterfaces @ 14aeac9e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator> *
__thiscall
Metasound::Frontend::NodeRegistrationPrivate::FNodeRegistryEntryBase::GetImplementedInterfaces
          (FNodeRegistryEntryBase *this)

{
  return (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
          *)0x0;
}

// GetDefaultVertexInterface @ 14aeac9f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FVertexInterface * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FNodeRegistryEntryBase::GetDefaultVertexInterface
          (FNodeRegistryEntryBase *this,FVertexInterface *__return_storage_ptr__)

{
  FVertexInterface::FVertexInterface
            (__return_storage_ptr__,&((this->ClassMetadata).Object)->DefaultInterface);
  return __return_storage_ptr__;
}

// CreateFrontendNodeConfiguration @ 14aeacab0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInstancedStruct<FMetaSoundFrontendNodeConfiguration> * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FNodeRegistryEntryBase::
CreateFrontendNodeConfiguration
          (FNodeRegistryEntryBase *this,
          TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *__return_storage_ptr__)

{
  (__return_storage_ptr__->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (__return_storage_ptr__->InstancedStruct).StructMemory = (uchar *)0x0;
  FInstancedStruct::FInstancedStruct(&__return_storage_ptr__->InstancedStruct);
  return __return_storage_ptr__;
}

// IsCompatibleNodeConfiguration @ 14aeacb00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FNodeRegistryEntryBase::IsCompatibleNodeConfiguration
          (FNodeRegistryEntryBase *this,
          TConstStructView<FMetaSoundFrontendNodeConfiguration> *param_1)

{
  if ((*(longlong *)&param_1->field_0x8 != 0) && (*(longlong *)param_1 != 0)) {
    return false;
  }
  return true;
}

// FNodeRegistryEntryBase @ 14af3d100

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeRegistryEntryBase * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
          (FNodeRegistryEntryBase *this,FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  FMetasoundFrontendClassMetadata *pFVar1;
  FMetasoundFrontendClassMetadata local_48;
  
  this->_padding_ =
       (longlong)&___7FNodeRegistryEntryBase_NodeRegistrationPrivate_Frontend_Metasound__6B_;
  MakeShared<Metasound::FNodeClassMetadata,1,Metasound::FNodeClassMetadata_const_&>
            (&this->ClassMetadata,param_1);
  pFVar1 = FMetasoundFrontendClassMetadata::GenerateClassMetadata(&local_48,param_1,External);
  FNodeClassInfo::FNodeClassInfo(&this->ClassInfo,pFVar1);
  GenerateClass(&this->FrontendClass,param_1,External);
  return this;
}

// GetNodeClassMetadata @ 14af9b7f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedRef<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FNodeRegistryEntryBase::GetNodeClassMetadata
          (FNodeRegistryEntryBase *this,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->ClassMetadata).Object;
  pTVar1 = (this->ClassMetadata).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

