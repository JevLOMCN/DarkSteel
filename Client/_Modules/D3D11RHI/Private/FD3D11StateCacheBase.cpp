// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 3

// ~FD3D11StateCacheBase @ 14596f0c0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */

void __thiscall FD3D11StateCacheBase::~FD3D11StateCacheBase(FD3D11StateCacheBase *this)

{
  this->_padding_ = (longlong)&___7FD3D11StateCacheBase__6B_;
  return;
}

// ClearState @ 145973e00

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */

void __thiscall FD3D11StateCacheBase::ClearState(FD3D11StateCacheBase *this)

{
  uint *puVar1;
  ID3D11ShaderResourceView *(*papIVar2) [128];
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (this->Direct3DDeviceIMContext != (ID3D11DeviceContext *)0x0) {
    (**(code **)((longlong)*this->Direct3DDeviceIMContext + 0x370))();
  }
  lVar3 = 6;
  papIVar2 = this->CurrentShaderResourceViews;
  lVar5 = 6;
  do {
    lVar4 = 0x80;
    do {
      if ((*papIVar2)[0] != (ID3D11ShaderResourceView *)0x0) {
        (**(code **)((longlong)*(*papIVar2)[0] + 0x10))();
        (*papIVar2)[0] = (ID3D11ShaderResourceView *)0x0;
      }
      papIVar2 = (ID3D11ShaderResourceView *(*) [128])(*papIVar2 + 1);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  this->CurrentRasterizerState = (ID3D11RasterizerState *)0x0;
  this->CurrentReferenceStencil = 0;
  this->CurrentDepthStencilState = (ID3D11DepthStencilState *)0x0;
  this->bDepthBoundsEnabled = false;
  this->DepthBoundsMin = 0.0;
  this->DepthBoundsMax = 1.0;
  this->CurrentVertexShader = (ID3D11VertexShader *)0x0;
  this->CurrentGeometryShader = (ID3D11GeometryShader *)0x0;
  this->CurrentPixelShader = (ID3D11PixelShader *)0x0;
  this->CurrentComputeShader = (ID3D11ComputeShader *)0x0;
  this->CurrentBlendFactor[0] = 1.0;
  this->CurrentBlendFactor[1] = 1.0;
  this->CurrentBlendFactor[2] = 1.0;
  this->CurrentBlendFactor[3] = 1.0;
  memset(this->CurrentViewport,0,0x180);
  this->CurrentNumberOfViewports = 0;
  this->CurrentBlendSampleMask = 0xffffffff;
  this->CurrentBlendState = (ID3D11BlendState *)0x0;
  this->CurrentInputLayout = (ID3D11InputLayout *)0x0;
  memset(this->CurrentVertexBuffers,0,0x200);
  memset(this->CurrentSamplerStates,0,0x300);
  puVar1 = &this->CurrentConstantBuffers[0][0].FirstConstant;
  this->CurrentIndexBuffer = (ID3D11Buffer *)0x0;
  this->CurrentIndexFormat = DXGI_FORMAT_UNKNOWN;
  this->CurrentIndexOffset = 0;
  this->CurrentPrimitiveTopology = D3D10_PRIMITIVE_TOPOLOGY_UNDEFINED;
  do {
    ((FD3D11ConstantBufferState *)(puVar1 + -2))->Buffer = (ID3D11Buffer *)0x0;
    *puVar1 = 0;
    puVar1[1] = 0x1000;
    *(undefined8 *)(puVar1 + 2) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0x1000;
    *(undefined8 *)(puVar1 + 6) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0x1000;
    *(undefined8 *)(puVar1 + 10) = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0x1000;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0x1000;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0x1000;
    *(undefined8 *)(puVar1 + 0x16) = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0x1000;
    *(undefined8 *)(puVar1 + 0x1a) = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0x1000;
    *(undefined8 *)(puVar1 + 0x1e) = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0x1000;
    *(undefined8 *)(puVar1 + 0x22) = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0x1000;
    *(undefined8 *)(puVar1 + 0x26) = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0x1000;
    *(undefined8 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0x1000;
    *(undefined8 *)(puVar1 + 0x2e) = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0x1000;
    *(undefined8 *)(puVar1 + 0x32) = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0x1000;
    puVar1 = puVar1 + 0x38;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

// SetContext @ 1459986b0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */

void __thiscall
FD3D11StateCacheBase::SetContext(FD3D11StateCacheBase *this,ID3D11DeviceContext *param_1)

{
  this->Direct3DDeviceIMContext = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001459986b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

