// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FVulkanBoundShaderState @ 145b91450

FVulkanBoundShaderState * __thiscall
FVulkanBoundShaderState::FVulkanBoundShaderState
          (FVulkanBoundShaderState *this,FRHIVertexDeclaration *param_1,FRHIVertexShader *param_2,
          FRHIPixelShader *param_3,FRHIGeometryShader *param_4)

{
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_BoundShaderState);
  this->_padding_ = (longlong)&___7FVulkanBoundShaderState__6B_;
  FCachedBoundShaderStateLink::FCachedBoundShaderStateLink
            ((FCachedBoundShaderStateLink *)&this->CacheLink,param_1,param_2,param_3,param_4,
             (FRHIBoundShaderState *)this,false);
  FCachedBoundShaderStateLink_Threadsafe::AddToCache(&this->CacheLink);
  return this;
}

// ~FVulkanBoundShaderState @ 145b95640

void __thiscall FVulkanBoundShaderState::~FVulkanBoundShaderState(FVulkanBoundShaderState *this)

{
  this->_padding_ = (longlong)&___7FVulkanBoundShaderState__6B_;
  FCachedBoundShaderStateLink_Threadsafe::RemoveFromCache(&this->CacheLink);
  FCachedBoundShaderStateLink::~FCachedBoundShaderStateLink
            ((FCachedBoundShaderStateLink *)&this->CacheLink);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

