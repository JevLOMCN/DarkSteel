// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// GetExtensionID @ 14613ad20

TEntitySystemLinkerExtensionID<UE::MovieScene::IInterrogationExtension> __cdecl
UE::MovieScene::IInterrogationExtension::GetExtensionID(void)

{
  TEntitySystemLinkerExtensionID<UE::MovieScene::IInterrogationExtension> *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ID = (TEntitySystemLinkerExtensionID<UE::MovieScene::IInterrogationExtension>)::StaticID;
      ::StaticID = ::StaticID + 1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RCX = ID;
  return SUB84(in_RCX,0);
}

