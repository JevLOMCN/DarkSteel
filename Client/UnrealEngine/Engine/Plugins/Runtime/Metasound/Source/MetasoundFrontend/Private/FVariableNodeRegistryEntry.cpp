// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// ~FVariableNodeRegistryEntry @ 14ad9e8a0

void __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FVariableNodeRegistryEntry::
~FVariableNodeRegistryEntry(FVariableNodeRegistryEntry *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataTypeEntry).SharedReferenceCount.ReferenceController);
  return;
}

// CreateNode @ 14adaf090

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FVariableNodeRegistryEntry::
CreateNode(FVariableNodeRegistryEntry *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (**(code **)((longlong)*(this->DataTypeEntry).Object + 0x110))();
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14adaf0c0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FVariableNodeRegistryEntry::
CreateNode(FVariableNodeRegistryEntry *this,FNodeData *param_1)

{
  FNodeData *in_R8;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// GetDefaultVertexInterface @ 14adbe470

FVertexInterface * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FVariableNodeRegistryEntry::
GetDefaultVertexInterface(FVariableNodeRegistryEntry *this,FVertexInterface *__return_storage_ptr__)

{
  IDataTypeRegistryEntry *pIVar1;
  code *pcVar2;
  bool bVar3;
  FVertexInterface *pFVar4;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar1 = (this->DataTypeEntry).Object;
  (**(code **)((longlong)*pIVar1 + 0x70))(pIVar1,&local_18);
  if (local_18 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7192317994402315847>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDataTypeRegistry.cpp"
                       ,0x1b9,"NodeClassMetadata");
    if (!bVar3) {
      FVertexInterface::FVertexInterface(__return_storage_ptr__);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVertexInterface *)(*pcVar2)();
    return pFVar4;
  }
  if ((local_18 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVertexInterface *)(*pcVar2)();
    return pFVar4;
  }
  FVertexInterface::FVertexInterface(__return_storage_ptr__,(FVertexInterface *)(local_18 + 0x60));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// GetFrontendClass @ 14adbeb00

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FVariableNodeRegistryEntry::
GetFrontendClass(FVariableNodeRegistryEntry *this)

{
  FMetasoundFrontendClass *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014adbeb07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FMetasoundFrontendClass *)
           (**(code **)((longlong)*(this->DataTypeEntry).Object + 0x68))();
  return pFVar1;
}

