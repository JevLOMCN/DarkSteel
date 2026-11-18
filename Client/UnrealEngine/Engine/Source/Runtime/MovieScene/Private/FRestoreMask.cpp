// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// CanRestore @ 146196b10

bool __thiscall
`FMovieSceneInstancePreAnimatedState::RestorePreAnimatedState'::__l2::FRestoreMask::CanRestore
          (void *this,TTuple<FObjectKey,FMovieSceneAnimTypeID> *param_1)

{
  undefined1 uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)&param_1->field_0x8;
  uVar1 = (*(code *)**(undefined8 **)((longlong)this + 8))
                    ((*(undefined8 **)((longlong)this + 8))[1],local_res8);
  return (bool)uVar1;
}

