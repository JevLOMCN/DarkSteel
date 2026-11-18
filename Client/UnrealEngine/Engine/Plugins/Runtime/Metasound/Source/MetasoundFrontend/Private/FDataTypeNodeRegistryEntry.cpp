// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 7

// ~FDataTypeNodeRegistryEntry @ 14ad9dc00

void __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeNodeRegistryEntry::
~FDataTypeNodeRegistryEntry(FDataTypeNodeRegistryEntry *this)

{
  return;
}

// CreateFrontendNodeConfiguration @ 14adad1e0

TInstancedStruct<FMetaSoundFrontendNodeConfiguration> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeNodeRegistryEntry::
CreateFrontendNodeConfiguration
          (FDataTypeNodeRegistryEntry *this,
          TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *__return_storage_ptr__)

{
  (__return_storage_ptr__->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (__return_storage_ptr__->InstancedStruct).StructMemory = (uchar *)0x0;
  FInstancedStruct::FInstancedStruct(&__return_storage_ptr__->InstancedStruct);
  return __return_storage_ptr__;
}

// CreateNode @ 14adaec60

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeNodeRegistryEntry::
CreateNode(FDataTypeNodeRegistryEntry *this,FNodeInitData *param_1)

{
  (param_1->InstanceName).ComparisonIndex = 0;
  (param_1->InstanceName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// GetClassInfo @ 14adbd390

FNodeClassInfo * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeNodeRegistryEntry::
GetClassInfo(FDataTypeNodeRegistryEntry *this)

{
  return &this->ClassInfo;
}

// GetDefaultVertexInterface @ 14adbe040

FVertexInterface * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeNodeRegistryEntry::
GetDefaultVertexInterface(FDataTypeNodeRegistryEntry *this,FVertexInterface *__return_storage_ptr__)

{
  FVertexInterface::FVertexInterface(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetImplementedInterfaces @ 14adbf1a0

TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator> *
__thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeNodeRegistryEntry::
GetImplementedInterfaces(FDataTypeNodeRegistryEntry *this)

{
  return (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
          *)0x0;
}

// IsCompatibleNodeConfiguration @ 14adc6be0

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeNodeRegistryEntry::
IsCompatibleNodeConfiguration
          (FDataTypeNodeRegistryEntry *this,
          TConstStructView<FMetaSoundFrontendNodeConfiguration> *param_1)

{
  if ((*(longlong *)&param_1->field_0x8 != 0) && (*(longlong *)param_1 != 0)) {
    return false;
  }
  return true;
}

