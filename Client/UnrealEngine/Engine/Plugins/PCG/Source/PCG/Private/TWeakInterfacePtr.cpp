// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// operator-> @ 14973fc20

IPCGGraphExecutionSource * __thiscall
TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->
          (TWeakInterfacePtr<IPCGGraphExecutionSource> *this)

{
  code *pcVar1;
  bool bVar2;
  IPCGGraphExecutionSource *pIVar3;
  
  if (this->InterfaceInstance != (IPCGGraphExecutionSource *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar2) goto LAB_14973fc5f;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                     ,0x8d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IPCGGraphExecutionSource *)(*pcVar1)();
    return pIVar3;
  }
LAB_14973fc5f:
  return this->InterfaceInstance;
}

