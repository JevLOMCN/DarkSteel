// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~IInterface_PreviewMeshProvider @ 1473daf10

void __thiscall
IInterface_PreviewMeshProvider::~IInterface_PreviewMeshProvider
          (IInterface_PreviewMeshProvider *this)

{
  *this = (IInterface_PreviewMeshProvider)&___7IInterface_PreviewMeshProvider__6B_;
  return;
}

// GetPreviewMesh @ 147403370

USkeletalMesh * __thiscall
IInterface_PreviewMeshProvider::GetPreviewMesh(IInterface_PreviewMeshProvider *this,bool param_1)

{
  USkeletalMesh *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147403373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (USkeletalMesh *)(**(code **)((longlong)*this + 0x20))();
  return pUVar1;
}

// _getUObject @ 14741d9c0

UObject * __thiscall
IInterface_PreviewMeshProvider::_getUObject(IInterface_PreviewMeshProvider *this)

{
  return (UObject *)0x0;
}

