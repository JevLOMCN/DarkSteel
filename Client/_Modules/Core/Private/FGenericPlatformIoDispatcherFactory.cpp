// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Create @ 14148e960

TUniquePtr<UE::IPlatformIoDispatcher,TDefaultDelete<UE::IPlatformIoDispatcher>_> __cdecl
UE::FGenericPlatformIoDispatcherFactory::Create(FPlatformIoDispatcherCreateParams *param_1)

{
  FGenericPlatformIoDispatcher *pFVar1;
  FGenericPlatformIoDispatcher *pFVar2;
  FPlatformIoDispatcherCreateParams *in_RDX;
  
  pFVar1 = ::operator_new(0x458);
  pFVar2 = (FGenericPlatformIoDispatcher *)0x0;
  if (pFVar1 != (FGenericPlatformIoDispatcher *)0x0) {
    pFVar2 = FGenericPlatformIoDispatcher::FGenericPlatformIoDispatcher(pFVar1,in_RDX);
  }
  pFVar1 = (FGenericPlatformIoDispatcher *)&pFVar2->_padding_;
  if (pFVar2 == (FGenericPlatformIoDispatcher *)0x0) {
    pFVar1 = (FGenericPlatformIoDispatcher *)0x0;
  }
  *(FGenericPlatformIoDispatcher **)param_1 = pFVar1;
  return (TUniquePtr<UE::IPlatformIoDispatcher,TDefaultDelete<UE::IPlatformIoDispatcher>_>)
         (IPlatformIoDispatcher *)param_1;
}

