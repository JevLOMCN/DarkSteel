// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FMaterialBuffers @ 145036a40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMaterialBuffers * __thiscall
Nanite::FMaterialsSceneExtension::FMaterialBuffers::FMaterialBuffers(FMaterialBuffers *this)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  pTVar2 = CVarNanitePrimitiveMaterialDataBufferMinSizeBytes.Ref;
  bVar3 = IsInParallelGameThread();
  lVar5 = 4;
  if (bVar3) {
LAB_145036a74:
    lVar4 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    if (bVar3) goto LAB_145036a74;
    lVar4 = 4;
  }
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar4);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)this,(int)((iVar1 >> 0x1f & 3U) + iVar1) >> 2,
             L"Nanite.PrimitiveMaterialData",true);
  pTVar2 = CVarNaniteMaterialDataBufferMinSizeBytes.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) goto LAB_145036aaf;
  }
  lVar5 = 0;
LAB_145036aaf:
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar5);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)&this->MaterialDataBuffer,(int)((iVar1 >> 0x1f & 3U) + iVar1) >> 2
             ,L"Nanite.MaterialData",true);
  return this;
}

