// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// operator= @ 14b2a87c0

TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
* __thiscall
TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
::operator=(TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
            *this,TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
                  *param_1)

{
  FGraphAnalyzer *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  IReceiver *pIVar4;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FGraphAnalyzer *)0x0;
    if (pFVar1 != (FGraphAnalyzer *)0x0) {
      *(undefined4 *)&(pFVar1->InternalDataReferences).field_0x48 = 0;
      pvVar2 = *(void **)&(pFVar1->InternalDataReferences).field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar1->InternalDataReferences);
      DestructItems<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int>
                ((TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
                  *)(pFVar1->Analyzers).AllocatorInstance.Data,(pFVar1->Analyzers).ArrayNum);
      pFVar3 = (pFVar1->Analyzers).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      pIVar4 = (pFVar1->ActiveAnalyzerReceiver).Ptr;
      if (pIVar4 != (IReceiver *)0x0) {
        (**(code **)pIVar4->_padding_)(pIVar4,1);
      }
      ::operator_delete(pFVar1,0x80);
    }
    return this;
  }
  return this;
}

