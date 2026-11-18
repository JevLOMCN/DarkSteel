// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// ~FVariableDeferredAccessorNodeRegistryEntry @ 14ad9e880

void __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::
FVariableDeferredAccessorNodeRegistryEntry::~FVariableDeferredAccessorNodeRegistryEntry
          (FVariableDeferredAccessorNodeRegistryEntry *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataTypeEntry).SharedReferenceCount.ReferenceController);
  return;
}

// CreateNode @ 14adaef50

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::
FVariableDeferredAccessorNodeRegistryEntry::CreateNode
          (FVariableDeferredAccessorNodeRegistryEntry *this,FNodeInitData *param_1)

{
  (**(code **)((longlong)*(this->DataTypeEntry).Object + 0x140))();
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14adaef80

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::
FVariableDeferredAccessorNodeRegistryEntry::CreateNode
          (FVariableDeferredAccessorNodeRegistryEntry *this,FNodeData *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  code *pcVar2;
  FNodeData *pFVar3;
  FNodeData *in_R8;
  FNodeData local_88;
  
  pIVar1 = (this->DataTypeEntry).Object;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x138);
  pFVar3 = FNodeData::FNodeData(&local_88,in_R8);
  (*pcVar2)(pIVar1,param_1,pFVar3);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// GetDefaultVertexInterface @ 14adbe2d0

FVertexInterface * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::
FVariableDeferredAccessorNodeRegistryEntry::GetDefaultVertexInterface
          (FVariableDeferredAccessorNodeRegistryEntry *this,FVertexInterface *__return_storage_ptr__
          )

{
  IDataTypeRegistryEntry *pIVar1;
  code *pcVar2;
  bool bVar3;
  FVertexInterface *pFVar4;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar1 = (this->DataTypeEntry).Object;
  (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,&local_18);
  if (local_18 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7192317994402315709>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDataTypeRegistry.cpp"
                       ,0x243,"NodeClassMetadata");
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

// GetFrontendClass @ 14adbeac0

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::
FVariableDeferredAccessorNodeRegistryEntry::GetFrontendClass
          (FVariableDeferredAccessorNodeRegistryEntry *this)

{
  FMetasoundFrontendClass *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014adbeac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FMetasoundFrontendClass *)
           (**(code **)((longlong)*(this->DataTypeEntry).Object + 0x98))();
  return pFVar1;
}

