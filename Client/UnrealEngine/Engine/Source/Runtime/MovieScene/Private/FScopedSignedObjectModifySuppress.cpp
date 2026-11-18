// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FScopedSignedObjectModifySuppress @ 1461fd160

FScopedSignedObjectModifySuppress * __thiscall
UE::MovieScene::FScopedSignedObjectModifySuppress::FScopedSignedObjectModifySuppress
          (FScopedSignedObjectModifySuppress *this,bool param_1)

{
  GScopedSignedObjectSuppressCount = GScopedSignedObjectSuppressCount + 1;
  this->bWarnModifyCompiledData = param_1;
  if (param_1) {
    GScopedSignedObjectWarnModifyCompiledData = GScopedSignedObjectWarnModifyCompiledData + 1;
  }
  return this;
}

// ~FScopedSignedObjectModifySuppress @ 1461ff800

void __thiscall
UE::MovieScene::FScopedSignedObjectModifySuppress::~FScopedSignedObjectModifySuppress
          (FScopedSignedObjectModifySuppress *this)

{
  GScopedSignedObjectSuppressCount = GScopedSignedObjectSuppressCount - 1;
  if (this->bWarnModifyCompiledData != false) {
    GScopedSignedObjectWarnModifyCompiledData = GScopedSignedObjectWarnModifyCompiledData - 1;
  }
  return;
}

