// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FTriangleVertexFactory @ 1488b0f10

FTriangleVertexFactory * __thiscall
FCanvasTriangleRendererItem::FTriangleVertexFactory::FTriangleVertexFactory
          (FTriangleVertexFactory *this,FStaticMeshVertexBuffers *param_1,Type param_2)

{
  FLocalVertexFactory::FLocalVertexFactory
            ((FLocalVertexFactory *)this,param_2,"FTriangleVertexFactory");
  this->VertexBuffers = param_1;
  this->_padding_ = (longlong)&___7FTriangleVertexFactory_FCanvasTriangleRendererItem__6B_;
  return this;
}

// InitResource @ 1488c9fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCanvasTriangleRendererItem::FTriangleVertexFactory::InitResource
          (FTriangleVertexFactory *this,FRHICommandListBase *param_1)

{
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            (&this->VertexBuffers->PositionVertexBuffer,(FVertexFactory *)this,
             (FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (&this->VertexBuffers->StaticMeshVertexBuffer,(FVertexFactory *)this,
             (FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            (&this->VertexBuffers->StaticMeshVertexBuffer,(FVertexFactory *)this,
             (FStaticMeshDataType *)&local_e8,-1);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            (&this->VertexBuffers->StaticMeshVertexBuffer,(FVertexFactory *)this,
             (FStaticMeshDataType *)&local_e8,0);
  FColorVertexBuffer::BindColorVertexBuffer
            (&this->VertexBuffers->ColorVertexBuffer,(FVertexFactory *)this,
             (FStaticMeshDataType *)&local_e8);
  FLocalVertexFactory::SetData((FLocalVertexFactory *)this,param_1,&local_e8);
  FRenderResource::InitResource((FRenderResource *)this,param_1);
  return;
}

