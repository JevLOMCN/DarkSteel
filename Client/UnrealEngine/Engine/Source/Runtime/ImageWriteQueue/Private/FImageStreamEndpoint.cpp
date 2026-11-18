// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 3

// ~FImageStreamEndpoint @ 1446e9800

void __thiscall FImageStreamEndpoint::~FImageStreamEndpoint(FImageStreamEndpoint *this)

{
  *this = (FImageStreamEndpoint)&___7FImageStreamEndpoint__6B_;
  return;
}

// OnImageReceived @ 1446ee8a0

void __thiscall
FImageStreamEndpoint::OnImageReceived
          (FImageStreamEndpoint *this,
          TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
  return;
}

// PipeImage @ 1446ee8e0

void __thiscall
FImageStreamEndpoint::PipeImage
          (FImageStreamEndpoint *this,
          TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001446ee8e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 8))();
  return;
}

