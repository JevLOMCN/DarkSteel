// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// AsBoundShaderState @ 14473f880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FBoundShaderStateInput * __thiscall
FMinimalBoundShaderStateInput::AsBoundShaderState
          (FMinimalBoundShaderStateInput *this,FBoundShaderStateInput *__return_storage_ptr__)

{
  FShaderMapResource *pFVar1;
  FRHIMeshShader *pFVar2;
  bool bVar3;
  atomic<FRHIShader_*> aVar4;
  atomic<FRHIShader_*> aVar5;
  bool bVar6;
  bool bVar7;
  
  bVar7 = true;
  bVar3 = AllowSkipUnloadedShaders(this);
  aVar5 = (atomic<FRHIShader_*>)0x0;
  if (((atomic<FRHIShader_*>)this->CachedVertexShader == (atomic<FRHIShader_*>)0x0) ||
     (aVar4 = (atomic<FRHIShader_*>)this->CachedVertexShader, this->bAllShaderAreLoaded == false)) {
    pFVar1 = (this->PixelShaderResource).Reference;
    aVar4 = aVar5;
    if (pFVar1 != (FShaderMapResource *)0x0) {
      aVar4 = (pFVar1->RHIShaders).Ptr[this->PixelShaderIndex];
      bVar7 = false;
      if (aVar4 == (atomic<FRHIShader_*>)0x0) {
        aVar4 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash(pFVar1,this->PixelShaderIndex,!bVar3);
        bVar7 = aVar4 == (atomic<FRHIShader_*>)0x0;
      }
      bVar7 = !bVar7;
    }
    pFVar1 = (this->GeometryShaderResource).Reference;
    this->CachedPixelShader = (FRHIPixelShader *)aVar4;
    aVar4 = aVar5;
    if (pFVar1 != (FShaderMapResource *)0x0) {
      aVar4 = (pFVar1->RHIShaders).Ptr[this->GeometryShaderIndex];
      if (aVar4 == (atomic<FRHIShader_*>)0x0) {
        aVar4 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash(pFVar1,this->GeometryShaderIndex,true);
      }
    }
    pFVar1 = (this->MeshShaderResource).Reference;
    this->CachedGeometryShader = (FRHIGeometryShader *)aVar4;
    aVar4 = aVar5;
    if (pFVar1 != (FShaderMapResource *)0x0) {
      aVar4 = (pFVar1->RHIShaders).Ptr[this->MeshShaderIndex];
      if (aVar4 == (atomic<FRHIShader_*>)0x0) {
        aVar4 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash(pFVar1,this->MeshShaderIndex,true);
      }
    }
    pFVar1 = (this->VertexShaderResource).Reference;
    this->CachedMeshShader = (FRHIMeshShader *)aVar4;
    bVar6 = bVar7;
    if (pFVar1 != (FShaderMapResource *)0x0) {
      aVar5 = (pFVar1->RHIShaders).Ptr[this->VertexShaderIndex];
      if (aVar5 == (atomic<FRHIShader_*>)0x0) {
        aVar5 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash(pFVar1,this->VertexShaderIndex,!bVar3);
      }
      bVar6 = false;
      if (aVar5 != (atomic<FRHIShader_*>)0x0) {
        bVar6 = bVar7;
      }
    }
    this->CachedVertexShader = (FRHIVertexShader *)aVar5;
    this->bAllShaderAreLoaded = bVar6;
    aVar4 = aVar5;
  }
  pFVar2 = this->CachedMeshShader;
  __return_storage_ptr__->PixelShaderRHI = this->CachedPixelShader;
  __return_storage_ptr__->AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  __return_storage_ptr__->WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  if (pFVar2 == (FRHIMeshShader *)0x0) {
    __return_storage_ptr__->VertexDeclarationRHI = this->VertexDeclarationRHI;
    __return_storage_ptr__->GeometryShaderRHI = this->CachedGeometryShader;
    __return_storage_ptr__->VertexShaderRHI = (FRHIVertexShader *)aVar4;
    __return_storage_ptr__->MeshShaderRHI = (FRHIMeshShader *)0x0;
  }
  else {
    __return_storage_ptr__->VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
    __return_storage_ptr__->VertexShaderRHI = (FRHIVertexShader *)0x0;
    __return_storage_ptr__->MeshShaderRHI = pFVar2;
    __return_storage_ptr__->GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  }
  return __return_storage_ptr__;
}

// AllowSkipUnloadedShaders @ 144ef7cf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FMinimalBoundShaderStateInput::AllowSkipUnloadedShaders(FMinimalBoundShaderStateInput *this)

{
  return GSkipUnloadedShaders;
}

