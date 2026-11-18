// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FVectorFieldCollectorResources @ 14890e1f0

void __thiscall
FVectorFieldCollectorResources::~FVectorFieldCollectorResources
          (FVectorFieldCollectorResources *this)

{
  this->_padding_ = (longlong)&___7FVectorFieldCollectorResources__6B_;
  (**(code **)(*(longlong *)&this->VisualizationVertexFactory + 0x20))
            (&this->VisualizationVertexFactory);
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this->VisualizationVertexFactory);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  return;
}

