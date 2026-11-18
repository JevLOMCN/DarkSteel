// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// FOpenGLBlendStateData @ 145be0480

FOpenGLBlendStateData * __thiscall
FOpenGLBlendStateData::FOpenGLBlendStateData(FOpenGLBlendStateData *this)

{
  undefined1 *puVar1;
  
  this->bUseAlphaToCoverage = false;
  (this->RenderTargets).Elements[0].ColorWriteMaskR = 0;
  (this->RenderTargets).Elements[0].ColorWriteMaskA = 0;
  (this->RenderTargets).Elements[0].ColorWriteMaskB = 0;
  (this->RenderTargets).Elements[0].ColorWriteMaskG = 0;
  (this->RenderTargets).Elements[1].ColorWriteMaskR = 0;
  (this->RenderTargets).Elements[1].ColorWriteMaskA = 0;
  (this->RenderTargets).Elements[1].ColorWriteMaskB = 0;
  (this->RenderTargets).Elements[1].ColorWriteMaskG = 0;
  (this->RenderTargets).Elements[2].ColorWriteMaskR = 0;
  (this->RenderTargets).Elements[2].ColorWriteMaskA = 0;
  (this->RenderTargets).Elements[2].ColorWriteMaskB = 0;
  (this->RenderTargets).Elements[2].ColorWriteMaskG = 0;
  (this->RenderTargets).Elements[3].ColorWriteMaskR = 0;
  (this->RenderTargets).Elements[3].ColorWriteMaskA = 0;
  (this->RenderTargets).Elements[3].ColorWriteMaskB = 0;
  (this->RenderTargets).Elements[3].ColorWriteMaskG = 0;
  (this->RenderTargets).Elements[4].ColorWriteMaskR = 0;
  (this->RenderTargets).Elements[4].ColorWriteMaskA = 0;
  (this->RenderTargets).Elements[4].ColorWriteMaskB = 0;
  (this->RenderTargets).Elements[4].ColorWriteMaskG = 0;
  (this->RenderTargets).Elements[5].ColorWriteMaskR = 0;
  (this->RenderTargets).Elements[5].ColorWriteMaskA = 0;
  (this->RenderTargets).Elements[5].ColorWriteMaskB = 0;
  (this->RenderTargets).Elements[5].ColorWriteMaskG = 0;
  (this->RenderTargets).Elements[6].ColorWriteMaskR = 0;
  (this->RenderTargets).Elements[6].ColorWriteMaskA = 0;
  (this->RenderTargets).Elements[6].ColorWriteMaskB = 0;
  (this->RenderTargets).Elements[6].ColorWriteMaskG = 0;
  (this->RenderTargets).Elements[7].ColorWriteMaskR = 0;
  (this->RenderTargets).Elements[7].ColorWriteMaskA = 0;
  (this->RenderTargets).Elements[7].ColorWriteMaskB = 0;
  (this->RenderTargets).Elements[7].ColorWriteMaskG = 0;
  (this->RenderTargets).Elements[0].ColorBlendOperation = 0;
  (this->RenderTargets).Elements[0].ColorSourceBlendFactor = 0;
  (this->RenderTargets).Elements[0].ColorDestBlendFactor = 0;
  (this->RenderTargets).Elements[0].bSeparateAlphaBlendEnable = false;
  (this->RenderTargets).Elements[0].AlphaBlendOperation = 0;
  (this->RenderTargets).Elements[0].AlphaSourceBlendFactor = 0;
  (this->RenderTargets).Elements[0].AlphaDestBlendFactor = 0;
  (this->RenderTargets).Elements[1].bAlphaBlendEnable = false;
  (this->RenderTargets).Elements[1].ColorBlendOperation = 0;
  (this->RenderTargets).Elements[1].ColorSourceBlendFactor = 0;
  (this->RenderTargets).Elements[1].ColorDestBlendFactor = 0;
  (this->RenderTargets).Elements[1].bSeparateAlphaBlendEnable = false;
  (this->RenderTargets).Elements[1].AlphaBlendOperation = 0;
  (this->RenderTargets).Elements[1].AlphaSourceBlendFactor = 0;
  (this->RenderTargets).Elements[1].AlphaDestBlendFactor = 0;
  (this->RenderTargets).Elements[2].bAlphaBlendEnable = false;
  (this->RenderTargets).Elements[2].ColorBlendOperation = 0;
  (this->RenderTargets).Elements[2].ColorSourceBlendFactor = 0;
  (this->RenderTargets).Elements[2].ColorDestBlendFactor = 0;
  (this->RenderTargets).Elements[2].bSeparateAlphaBlendEnable = false;
  (this->RenderTargets).Elements[2].AlphaBlendOperation = 0;
  (this->RenderTargets).Elements[2].AlphaSourceBlendFactor = 0;
  (this->RenderTargets).Elements[2].AlphaDestBlendFactor = 0;
  (this->RenderTargets).Elements[3].bAlphaBlendEnable = false;
  (this->RenderTargets).Elements[3].ColorBlendOperation = 0;
  (this->RenderTargets).Elements[3].ColorSourceBlendFactor = 0;
  (this->RenderTargets).Elements[3].ColorDestBlendFactor = 0;
  (this->RenderTargets).Elements[3].bSeparateAlphaBlendEnable = false;
  (this->RenderTargets).Elements[3].AlphaBlendOperation = 0;
  (this->RenderTargets).Elements[3].AlphaSourceBlendFactor = 0;
  (this->RenderTargets).Elements[3].AlphaDestBlendFactor = 0;
  (this->RenderTargets).Elements[4].bAlphaBlendEnable = false;
  (this->RenderTargets).Elements[4].ColorBlendOperation = 0;
  (this->RenderTargets).Elements[4].ColorSourceBlendFactor = 0;
  (this->RenderTargets).Elements[4].ColorDestBlendFactor = 0;
  (this->RenderTargets).Elements[4].bSeparateAlphaBlendEnable = false;
  (this->RenderTargets).Elements[4].AlphaBlendOperation = 0;
  (this->RenderTargets).Elements[4].AlphaSourceBlendFactor = 0;
  (this->RenderTargets).Elements[4].AlphaDestBlendFactor = 0;
  (this->RenderTargets).Elements[5].bAlphaBlendEnable = false;
  (this->RenderTargets).Elements[5].ColorBlendOperation = 0;
  (this->RenderTargets).Elements[5].ColorSourceBlendFactor = 0;
  (this->RenderTargets).Elements[5].ColorDestBlendFactor = 0;
  (this->RenderTargets).Elements[5].bSeparateAlphaBlendEnable = false;
  (this->RenderTargets).Elements[5].AlphaBlendOperation = 0;
  (this->RenderTargets).Elements[5].AlphaSourceBlendFactor = 0;
  (this->RenderTargets).Elements[5].AlphaDestBlendFactor = 0;
  (this->RenderTargets).Elements[6].bAlphaBlendEnable = false;
  (this->RenderTargets).Elements[6].ColorBlendOperation = 0;
  (this->RenderTargets).Elements[6].ColorSourceBlendFactor = 0;
  (this->RenderTargets).Elements[6].ColorDestBlendFactor = 0;
  (this->RenderTargets).Elements[6].bSeparateAlphaBlendEnable = false;
  (this->RenderTargets).Elements[6].AlphaBlendOperation = 0;
  (this->RenderTargets).Elements[6].AlphaSourceBlendFactor = 0;
  (this->RenderTargets).Elements[6].AlphaDestBlendFactor = 0;
  (this->RenderTargets).Elements[7].bAlphaBlendEnable = false;
  (this->RenderTargets).Elements[7].ColorBlendOperation = 0;
  (this->RenderTargets).Elements[7].ColorSourceBlendFactor = 0;
  (this->RenderTargets).Elements[7].ColorDestBlendFactor = 0;
  (this->RenderTargets).Elements[7].bSeparateAlphaBlendEnable = false;
  (this->RenderTargets).Elements[7].AlphaBlendOperation = 0;
  (this->RenderTargets).Elements[7].AlphaSourceBlendFactor = 0;
  (this->RenderTargets).Elements[7].AlphaDestBlendFactor = 0;
  (this->RenderTargets).Elements[0].bAlphaBlendEnable = false;
  return this;
}

