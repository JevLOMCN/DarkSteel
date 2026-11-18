// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 2

// ReinterpretCast<UE::MovieScene::FTemplateSequenceComponentData> @ 14ac6daa0

TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> __thiscall
UE::MovieScene::FComponentTypeID::ReinterpretCast<UE::MovieScene::FTemplateSequenceComponentData>
          (FComponentTypeID *this)

{
  ushort *in_RDX;
  
  *in_RDX = this->Value;
  return SUB82(in_RDX,0);
}

// ReinterpretCast<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> @ 14ac6dab0

TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> __thiscall
UE::MovieScene::FComponentTypeID::
ReinterpretCast<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>(FComponentTypeID *this)

{
  ushort *in_RDX;
  
  *in_RDX = this->Value;
  return SUB82(in_RDX,0);
}

