// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetInstanceTLS @ 1484d87a0

IPrimitiveTransformUpdater * __cdecl
FSceneInterface::IPrimitiveTransformUpdater::GetInstanceTLS(void)

{
  return *(IPrimitiveTransformUpdater **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9008);
}

// SetInstanceTLS @ 1484fbf20

IPrimitiveTransformUpdater * __cdecl
FSceneInterface::IPrimitiveTransformUpdater::SetInstanceTLS(IPrimitiveTransformUpdater *param_1)

{
  longlong lVar1;
  IPrimitiveTransformUpdater *pIVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pIVar2 = *(IPrimitiveTransformUpdater **)(lVar1 + 0x9008);
  *(IPrimitiveTransformUpdater **)(lVar1 + 0x9008) = param_1;
  return pIVar2;
}

