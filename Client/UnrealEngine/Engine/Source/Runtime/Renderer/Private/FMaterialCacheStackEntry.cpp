// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FMaterialCacheStackEntry @ 144e726b0

FMaterialCacheStackEntry * __thiscall
FMaterialCacheStackEntry::FMaterialCacheStackEntry
          (FMaterialCacheStackEntry *this,FMaterialCacheStackEntry *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FMaterialRenderProxy_const_*> FVar3;
  ForElementType<FMaterialRenderProxy_const_*> _Dst;
  
  (this->SectionMaterials).AllocatorInstance.SecondaryData =
       (ForElementType<FMaterialRenderProxy_const_*>)0x0;
  FVar3 = (param_1->SectionMaterials).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->SectionMaterials).ArrayNum;
  (this->SectionMaterials).ArrayNum = iVar2;
  if (FVar3 != (ForElementType<FMaterialRenderProxy_const_*>)0x0) {
    param_1 = (FMaterialCacheStackEntry *)FVar3;
  }
  piVar1 = &(this->SectionMaterials).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_const_*>_>
            (8,8,iVar2,0,(ForElementType<FMaterialRenderProxy_const_*> *)this,iVar2,piVar1);
  FVar3 = (this->SectionMaterials).AllocatorInstance.SecondaryData;
  _Dst = (ForElementType<FMaterialRenderProxy_const_*>)this;
  if (FVar3 != (ForElementType<FMaterialRenderProxy_const_*>)0x0) {
    _Dst = FVar3;
  }
  memcpy((void *)_Dst,param_1,(longlong)iVar2 << 3);
  return this;
}

