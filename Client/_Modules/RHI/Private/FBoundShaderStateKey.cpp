// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// ~FBoundShaderStateKey @ 145c47c20

void __thiscall FBoundShaderStateKey::~FBoundShaderStateKey(FBoundShaderStateKey *this)

{
  FRHIGeometryShader *this_00;
  FRHIPixelShader *this_01;
  FRHIAmplificationShader *this_02;
  FRHIMeshShader *this_03;
  FRHIVertexShader *this_04;
  FRHIResource *this_05;
  
  this_00 = (this->GeometryShader).Reference;
  if (this_00 != (FRHIGeometryShader *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->PixelShader).Reference;
  if (this_01 != (FRHIPixelShader *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = (this->AmplificationShader).Reference;
  if (this_02 != (FRHIAmplificationShader *)0x0) {
    FRHIResource::Release((FRHIResource *)this_02);
  }
  this_03 = (this->MeshShader).Reference;
  if (this_03 != (FRHIMeshShader *)0x0) {
    FRHIResource::Release((FRHIResource *)this_03);
  }
  this_04 = (this->VertexShader).Reference;
  if (this_04 != (FRHIVertexShader *)0x0) {
    FRHIResource::Release((FRHIResource *)this_04);
  }
  this_05 = (FRHIResource *)(this->VertexDeclaration).Reference;
  if (this_05 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_05);
    return;
  }
  return;
}

