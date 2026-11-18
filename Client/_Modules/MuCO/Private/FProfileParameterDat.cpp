// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// StaticStruct @ 14aba8f70

UScriptStruct * __cdecl FProfileParameterDat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProfileParameterDat.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FProfileParameterDat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProfileParameterDat,(UObject *)pUVar1,
                         L"ProfileParameterDat");
  }
  return Z_Registration_Info_UScriptStruct_FProfileParameterDat.OuterSingleton;
}

// ~FProfileParameterDat @ 14abbf260

void __thiscall FProfileParameterDat::~FProfileParameterDat(FProfileParameterDat *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FCustomizableObjectTransformParameterValue,int>
            ((FCustomizableObjectTransformParameterValue *)
             (this->TransformParameters).AllocatorInstance.Data,(this->TransformParameters).ArrayNum
            );
  pFVar1 = (this->TransformParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectProjectorParameterValue,int>
            ((FCustomizableObjectProjectorParameterValue *)
             (this->ProjectorParameters).AllocatorInstance.Data,(this->ProjectorParameters).ArrayNum
            );
  pFVar1 = (this->ProjectorParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectVectorParameterValue,int>
            ((FCustomizableObjectVectorParameterValue *)
             (this->VectorParameters).AllocatorInstance.Data,(this->VectorParameters).ArrayNum);
  pFVar1 = (this->VectorParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectSkeletalMeshParameterValue,int>
            ((FCustomizableObjectSkeletalMeshParameterValue *)
             (this->SkeletalMeshParameters).AllocatorInstance.Data,
             (this->SkeletalMeshParameters).ArrayNum);
  pFVar1 = (this->SkeletalMeshParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectTextureParameterValue,int>
            ((FCustomizableObjectTextureParameterValue *)
             (this->TextureParameters).AllocatorInstance.Data,(this->TextureParameters).ArrayNum);
  pFVar1 = (this->TextureParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectFloatParameterValue,int>
            ((FCustomizableObjectFloatParameterValue *)
             (this->FloatParameters).AllocatorInstance.Data,(this->FloatParameters).ArrayNum);
  pFVar1 = (this->FloatParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectIntParameterValue,int>
            ((FCustomizableObjectIntParameterValue *)(this->IntParameters).AllocatorInstance.Data,
             (this->IntParameters).ArrayNum);
  pFVar1 = (this->IntParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectBoolParameterValue,int>
            ((FCustomizableObjectBoolParameterValue *)(this->BoolParameters).AllocatorInstance.Data,
             (this->BoolParameters).ArrayNum);
  pFVar1 = (this->BoolParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProfileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

