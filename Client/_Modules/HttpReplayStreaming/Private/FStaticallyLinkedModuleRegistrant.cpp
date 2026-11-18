// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 1

// InitializeModule @ 146cc4790

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FHttpNetworkReplayStreamingFactory>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x20);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7INetworkReplayStreamingFactory__6B_;
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(pIVar1 + 1),NewObject);
    *pIVar1 = (IModuleInterface)
              &FHttpNetworkReplayStreamingFactory::_vftable__for__INetworkReplayStreamingFactory__;
    pIVar1[1] = (IModuleInterface)
                &FHttpNetworkReplayStreamingFactory::_vftable__for__FTickableGameObject__;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

