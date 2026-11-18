// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// ~FLiteralNodeRegistryEntry @ 14ad9e380

void __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FLiteralNodeRegistryEntry::
~FLiteralNodeRegistryEntry(FLiteralNodeRegistryEntry *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataTypeEntry).SharedReferenceCount.ReferenceController);
  return;
}

// CreateNode @ 14adaede0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FLiteralNodeRegistryEntry::CreateNode
          (FLiteralNodeRegistryEntry *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (**(code **)((longlong)*(this->DataTypeEntry).Object + 0xe8))();
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14adaee10

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FLiteralNodeRegistryEntry::CreateNode
          (FLiteralNodeRegistryEntry *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// GetFrontendClass @ 14adbea60

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FLiteralNodeRegistryEntry::
GetFrontendClass(FLiteralNodeRegistryEntry *this)

{
  FMetasoundFrontendClass *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014adbea67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FMetasoundFrontendClass *)
           (**(code **)((longlong)*(this->DataTypeEntry).Object + 0x40))();
  return pFVar1;
}

