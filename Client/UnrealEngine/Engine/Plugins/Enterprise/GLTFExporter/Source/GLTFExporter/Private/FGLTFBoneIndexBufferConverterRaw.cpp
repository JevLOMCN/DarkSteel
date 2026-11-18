// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e4bd0

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverterRaw::Convert
          (FGLTFBoneIndexBufferConverterRaw *this,
          FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *param_1)

{
  FGLTFJsonAccessor *pFVar1;
  
  pFVar1 = ::`anonymous_namespace'::
           ConvertToAccessor<unsigned_short,3,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
                     (*(FGLTFConvertBuilder **)&this->field_0x58,param_1,false);
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return pFVar1;
}

