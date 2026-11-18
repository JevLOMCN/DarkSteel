// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~TSplineMeshSceneProxyCommon<FNaniteSplineMeshSceneProxy> @ 148713fa0

void __thiscall
TSplineMeshSceneProxyCommon<FNaniteSplineMeshSceneProxy>::
~TSplineMeshSceneProxyCommon<FNaniteSplineMeshSceneProxy>
          (TSplineMeshSceneProxyCommon<FNaniteSplineMeshSceneProxy> *this)

{
  this->_padding_ = (longlong)&___7__TSplineMeshSceneProxyCommon_VFNaniteSplineMeshSceneProxy____6B_
  ;
  FRWBuffer::~FRWBuffer(&this->RayTracingDynamicVertexBuffer);
  FSingleInstanceDataBuffers::~FSingleInstanceDataBuffers
            ((FSingleInstanceDataBuffers *)&this->SplineMeshInstanceData);
  return;
}

// ~TSplineMeshSceneProxyCommon<FSplineMeshSceneProxy> @ 148713fe0

void __thiscall
TSplineMeshSceneProxyCommon<FSplineMeshSceneProxy>::
~TSplineMeshSceneProxyCommon<FSplineMeshSceneProxy>
          (TSplineMeshSceneProxyCommon<FSplineMeshSceneProxy> *this)

{
  this->_padding_ = (longlong)&___7__TSplineMeshSceneProxyCommon_VFSplineMeshSceneProxy____6B_;
  FRWBuffer::~FRWBuffer(&this->RayTracingDynamicVertexBuffer);
  FSingleInstanceDataBuffers::~FSingleInstanceDataBuffers
            ((FSingleInstanceDataBuffers *)&this->SplineMeshInstanceData);
  return;
}

