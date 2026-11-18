// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// ReinterpretCast<FCameraFramingZone> @ 14d5f8fa0

TComponentTypeID<FCameraFramingZone> __thiscall
UE::MovieScene::FComponentTypeID::ReinterpretCast<FCameraFramingZone>(FComponentTypeID *this)

{
  ushort *in_RDX;
  
  *in_RDX = this->Value;
  return SUB82(in_RDX,0);
}

