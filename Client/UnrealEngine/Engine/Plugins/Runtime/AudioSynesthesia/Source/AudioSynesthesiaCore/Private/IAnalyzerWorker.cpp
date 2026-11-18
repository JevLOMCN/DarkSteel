// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 3

// ~IAnalyzerWorker @ 14d7f9690

void __thiscall Audio::IAnalyzerWorker::~IAnalyzerWorker(IAnalyzerWorker *this)

{
  *this = (IAnalyzerWorker)&___7IAnalyzerWorker_Audio__6B_;
  return;
}

// ClearControls @ 14d803240

void __thiscall Audio::IAnalyzerWorker::ClearControls(IAnalyzerWorker *this)

{
  return;
}

// SetControls @ 14d80a500

void __thiscall
Audio::IAnalyzerWorker::SetControls
          (IAnalyzerWorker *this,TSharedPtr<Audio::IAnalyzerControls,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

