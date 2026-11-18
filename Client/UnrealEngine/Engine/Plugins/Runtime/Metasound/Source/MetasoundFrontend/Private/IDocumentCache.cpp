// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// ~IDocumentCache @ 14ae1ddb0

void __thiscall Metasound::Frontend::IDocumentCache::~IDocumentCache(IDocumentCache *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ae1ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// GetEdgeCache @ 14ae38580

IDocumentGraphEdgeCache * __thiscall
Metasound::Frontend::IDocumentCache::GetEdgeCache(IDocumentCache *this)

{
  IDocumentGraphEdgeCache *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ae3858a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IDocumentGraphEdgeCache *)(**(code **)(*(longlong *)this + 0x50))(this,&DefaultPageID);
  return pIVar1;
}

// GetNodeCache @ 14ae39600

IDocumentGraphNodeCache * __thiscall
Metasound::Frontend::IDocumentCache::GetNodeCache(IDocumentCache *this)

{
  IDocumentGraphNodeCache *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ae3960a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IDocumentGraphNodeCache *)(**(code **)(*(longlong *)this + 0x40))(this,&DefaultPageID);
  return pIVar1;
}

