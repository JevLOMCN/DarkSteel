// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FGpuInitializeData @ 148f7e910

FGpuInitializeData * __thiscall
NDIStaticMeshLocal::FGpuInitializeData::FGpuInitializeData(FGpuInitializeData *this)

{
  this->RenderProxy = (FRenderProxy *)0x0;
  (this->LODResource).Reference = (FStaticMeshLODResources *)0x0;
  (this->SectionInfos)._padding_ =
       (longlong)&___7__TResourceArray_U__TIntVector4_H_Math_UE___0A___6B_;
  (this->SocketTransforms)._padding_ =
       (longlong)&___7__TResourceArray_U__TVector4_M_Math_UE___0A___6B_;
  this->OverrideColorBuffer = (FColorVertexBuffer *)0x0;
  (this->SystemFName).ComparisonIndex = 0;
  (this->SystemFName).Number = 0;
  (this->StaticMeshFName).ComparisonIndex = 0;
  (this->StaticMeshFName).Number = 0;
  this->NumFilteredTriangles = 0;
  this->NumUnfilteredTriangles = 0;
  this->bGpuUniformDistribution = false;
  this->NumSections = 0;
  this->NumFilteredSections = 0;
  this->NumUnfilteredSections = 0;
  (this->SectionInfos)._padding_ = 0;
  (this->SectionInfos)._padding_ = 0;
  (this->SectionInfos).bNeedsCPUAccess = false;
  (this->FilteredAndUnfilteredSections)._padding_ = 0;
  (this->FilteredAndUnfilteredSections)._padding_ = 0;
  (this->FilteredAndUnfilteredSections)._padding_ = (longlong)&___7__TResourceArray_G_0A___6B_;
  (this->FilteredAndUnfilteredSections).bNeedsCPUAccess = false;
  this->NumSockets = 0;
  this->NumFilteredSockets = 0;
  this->NumUnfilteredSockets = 0;
  (this->SocketTransforms)._padding_ = 0;
  (this->SocketTransforms)._padding_ = 0;
  (this->SocketTransforms).bNeedsCPUAccess = false;
  (this->FilteredAndUnfilteredSockets)._padding_ = 0;
  (this->FilteredAndUnfilteredSockets)._padding_ = 0;
  (this->FilteredAndUnfilteredSockets)._padding_ = (longlong)&___7__TResourceArray_G_0A___6B_;
  (this->FilteredAndUnfilteredSockets).bNeedsCPUAccess = false;
  return this;
}

