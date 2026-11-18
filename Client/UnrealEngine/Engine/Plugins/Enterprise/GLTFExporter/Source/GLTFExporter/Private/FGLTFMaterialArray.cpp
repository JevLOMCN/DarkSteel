// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// FGLTFMaterialArray @ 14e5d2320

FGLTFMaterialArray * __thiscall
FGLTFMaterialArray::FGLTFMaterialArray(FGLTFMaterialArray *this,FGLTFMaterialArray *param_1)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = *(int *)&param_1->field_0x8;
  _Src = *(void **)param_1;
  *(int *)&this->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0xc = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,(ForAnyElementType *)this,iVar1,(int *)&this->field_0xc);
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  return this;
}

