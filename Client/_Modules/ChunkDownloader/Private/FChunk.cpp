// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 1

// IsCached @ 14f026de0

bool __thiscall FChunkDownloader::FChunk::IsCached(FChunk *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PakFiles).ArrayNum;
  pFVar2 = (this->PakFiles).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PakFiles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FChunkDownloader::FPakFile,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(char *)(*(longlong *)pFVar2 + 0x40) == '\0') {
      return false;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return true;
}

