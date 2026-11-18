// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// FMeshSurface @ 14a976890

FMeshSurface * __thiscall
UE::Mutable::Private::FMeshSurface::FMeshSurface(FMeshSurface *this,FMeshSurface *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Mutable::Private::FSurfaceSubMesh> FVar3;
  ForElementType<UE::Mutable::Private::FSurfaceSubMesh> _Dst;
  ForElementType<UE::Mutable::Private::FSurfaceSubMesh> _Src;
  
  (this->SubMeshes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)0x0;
  FVar3 = (param_1->SubMeshes).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->SubMeshes).ArrayNum;
  (this->SubMeshes).ArrayNum = iVar2;
  _Src = (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)param_1;
  if (FVar3 != (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)0x0) {
    _Src = FVar3;
  }
  piVar1 = &(this->SubMeshes).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FSurfaceSubMesh>_>
              (0x14,4,iVar2,0,(ForElementType<UE::Mutable::Private::FSurfaceSubMesh> *)this,iVar2,
               piVar1);
    FVar3 = (this->SubMeshes).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)this;
    if (FVar3 != (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)0x0) {
      _Dst = FVar3;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0x14);
  }
  this->BoneMapIndex = param_1->BoneMapIndex;
  this->BoneMapCount = param_1->BoneMapCount;
  this->Id = param_1->Id;
  return this;
}

