// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// InitRHI @ 1483cdeb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
Nanite::FVertexFactoryResource::InitRHI(FVertexFactoryResource *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  FNaniteVertexFactory *this_00;
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_18 [2];
  
  bVar1 = DoesPlatformSupportNanite(GMaxRHIShaderPlatform,true);
  if (bVar1) {
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
    local_res20 = LLMTagDeclaration_Nanite.UniqueName;
    FMemScope::FMemScope(local_18,&local_res20,true);
    this_00 = ::operator_new(0x140);
    if (this_00 != (FNaniteVertexFactory *)0x0) {
      FRenderResource::FRenderResource((FRenderResource *)this_00,SM5);
      *(undefined8 *)&this_00->field_0xa0 = 0;
      *(undefined4 *)&this_00->field_0xa8 = 0;
      *(undefined4 *)&this_00->field_0xac = 8;
      *(undefined8 *)&this_00->field_0xd0 = 0;
      *(undefined4 *)&this_00->field_0xd8 = 0;
      *(undefined4 *)&this_00->field_0xdc = 2;
      *(undefined8 *)&this_00->field_0x110 = 0;
      *(undefined4 *)&this_00->field_0x118 = 0;
      *(undefined4 *)&this_00->field_0x11c = 3;
      *(undefined8 *)&this_00->field_0x120 = 0;
      *(undefined8 *)&this_00->field_0x128 = 0;
      *(undefined8 *)&this_00->field_0x130 = 0;
      *(undefined4 *)&this_00->field_0x138 = 0xffffff;
      *(undefined ***)this_00 = &___7FNaniteVertexFactory__6B_;
    }
    this->VertexFactory = this_00;
    FRenderResource::InitResource((FRenderResource *)this_00,param_1);
    FMemScope::~FMemScope(local_18);
    FLLMScope::~FLLMScope(local_res18);
  }
  return;
}

// ReleaseRHI @ 1483cdff0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall Nanite::FVertexFactoryResource::ReleaseRHI(FVertexFactoryResource *this)

{
  FVertexFactory *this_00;
  bool bVar1;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  bVar1 = DoesPlatformSupportNanite(GMaxRHIShaderPlatform,true);
  if (bVar1) {
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_Nanite.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    this_00 = (FVertexFactory *)this->VertexFactory;
    if (this_00 != (FVertexFactory *)0x0) {
      this_00->_padding_ = (longlong)&___7FNaniteVertexFactory__6B_;
      FRenderResource::ReleaseResource((FRenderResource *)this_00);
      FVertexFactory::~FVertexFactory(this_00);
      ::operator_delete(this_00,0x140);
    }
    this->VertexFactory = (FNaniteVertexFactory *)0x0;
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
  }
  return;
}

