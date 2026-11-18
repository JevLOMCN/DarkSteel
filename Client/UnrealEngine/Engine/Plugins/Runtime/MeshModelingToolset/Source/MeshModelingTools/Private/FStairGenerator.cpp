// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// FStairGenerator @ 14cbdb740

FStairGenerator * __thiscall UE::Geometry::FStairGenerator::FStairGenerator(FStairGenerator *this)

{
  this->bScaleUVByAspectRatio = true;
  this->bPolygroupPerQuad = false;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FStairGenerator_Geometry_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->StepWidth = 150.0;
  this->StepHeight = 20.0;
  this->NumSteps = 8;
  this->StairStyle = Solid;
  (this->VertexIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexIds).ArrayNum = 0;
  (this->VertexIds).ArrayMax = 0;
  (this->VertexIdsToColumnRow).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexIdsToColumnRow).ArrayNum = 0;
  (this->VertexIdsToColumnRow).ArrayMax = 0;
  (this->FaceDesc).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FaceDesc).ArrayNum = 0;
  (this->FaceDesc).ArrayMax = 0;
  (this->NormalDesc).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalDesc).ArrayNum = 0;
  (this->NormalDesc).ArrayMax = 0;
  (this->UVDesc).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVDesc).ArrayNum = 0;
  (this->UVDesc).ArrayMax = 0;
  this->NumQuadsPerSide = 0;
  this->NumQuads = 0;
  this->NumVertsPerSide = 0;
  this->NumVerts = 0;
  this->NumAttrs = 0;
  this->RightSideColumnId = 0;
  this->LeftSideColumnId = 0;
  this->RightStartFaceId = 0;
  this->LeftStartFaceId = 0;
  this->FrontStartFaceId = 0;
  this->TopStartFaceId = 0;
  this->BackStartFaceId = 0;
  this->BottomStartFaceId = 0;
  this->LastFaceId = 0;
  return this;
}

