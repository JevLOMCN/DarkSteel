// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Blend @ 146208970

void __thiscall
FDefaultTrackRowSegmentBlender::Blend
          (FDefaultTrackRowSegmentBlender *this,FSegmentBlendData *param_1)

{
  MovieSceneSegmentCompiler::FilterOutUnderlappingSections(param_1);
  return;
}

