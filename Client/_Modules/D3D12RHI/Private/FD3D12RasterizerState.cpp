// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// GetInitializer @ 145a693d0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

bool __thiscall
FD3D12RasterizerState::GetInitializer
          (FD3D12RasterizerState *this,FRasterizerStateInitializerRHI *param_1)

{
  D3D12_CULL_MODE DVar1;
  code *pcVar2;
  uchar uVar3;
  bool bVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  
  (param_1->FillMode).Value = ((this->Desc).FillMode != D3D12_FILL_MODE_WIREFRAME) + '\x01';
  DVar1 = (this->Desc).CullMode;
  if (DVar1 == D3D12_CULL_MODE_FRONT) {
    uVar3 = '\x02';
  }
  else if (DVar1 == D3D12_CULL_MODE_BACK) {
    uVar3 = '\x01';
  }
  else {
    uVar3 = '\0';
  }
  (param_1->CullMode).Value = uVar3;
  fVar6 = (float)(this->Desc).DepthBias;
  fVar7 = (fVar6 + fVar6) - __real_3f000000;
  param_1->DepthBias = fVar6 * __real_33800000;
  if ((this->Desc).DepthBias != (int)ROUND(fVar7) >> 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Desc.DepthBias == FMath::FloorToInt(Init.DepthBias * static_cast<float>(1 << 24))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12State.cpp"
                       ,0x172,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  param_1->SlopeScaleDepthBias = (this->Desc).SlopeScaledDepthBias;
  param_1->bAllowMSAA = (this->Desc).MultisampleEnable != 0;
  return true;
}

