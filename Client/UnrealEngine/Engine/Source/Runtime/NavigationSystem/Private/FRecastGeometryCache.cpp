// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FRecastGeometryCache @ 146e35eb0

FRecastGeometryCache * __thiscall
FRecastGeometryCache::FRecastGeometryCache(FRecastGeometryCache *this,uchar *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  (this->Header).SlopeOverride.WalkableSlopeBehavior.Value = '\0';
  (this->Header).SlopeOverride.WalkableSlopeAngle = 0.0;
  (this->Header).SlopeOverride.CachedSlopeAngle = 0.0;
  (this->Header).SlopeOverride.CachedSlopeCos = 1.0;
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  (this->Header).Validation = (FCollisionDataHeader)(int)uVar1;
  (this->Header).NumVerts = (int)((ulonglong)uVar1 >> 0x20);
  (this->Header).NumFaces = (int)uVar2;
  (this->Header).SlopeOverride.WalkableSlopeBehavior =
       (TEnumAsByte<EWalkableSlopeBehavior>)(char)((ulonglong)uVar2 >> 0x20);
  *(int3 *)&(this->Header).SlopeOverride.field_0x1 = (int3)((ulonglong)uVar2 >> 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  (this->Header).SlopeOverride.WalkableSlopeAngle = (float)(int)uVar1;
  (this->Header).SlopeOverride.CachedSlopeAngle = (float)(int)((ulonglong)uVar1 >> 0x20);
  (this->Header).SlopeOverride.CachedSlopeCos = *(float *)(param_1 + 0x18);
  this->Verts = (double *)(param_1 + 0x30);
  this->Indices = (int *)(param_1 + ((longlong)(this->Header).NumVerts + 2) * 0x18);
  return this;
}

