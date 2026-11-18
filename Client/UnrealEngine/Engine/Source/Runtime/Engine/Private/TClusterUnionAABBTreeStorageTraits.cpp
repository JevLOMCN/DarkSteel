// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator() @ 150528ed0

bool __thiscall
``anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>::
InitPayloadToInfo'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3065361942051815365>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3065361942051815365>,
                       &``TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>::
                        InitPayloadToInfo'::`2'::<lambda_1>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

