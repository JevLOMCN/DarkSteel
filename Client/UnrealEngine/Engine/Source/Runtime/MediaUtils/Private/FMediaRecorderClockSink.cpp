// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 2

// ~FMediaRecorderClockSink @ 146bf39d0

void __thiscall FMediaRecorderClockSink::~FMediaRecorderClockSink(FMediaRecorderClockSink *this)

{
  this->_padding_ = (longlong)&___7IMediaClockSink__6B_;
  return;
}

// TickOutput @ 146c0f8f0

void __thiscall
FMediaRecorderClockSink::TickOutput
          (FMediaRecorderClockSink *this,FTimespan param_1,FTimespan param_2)

{
  FMediaRecorder::TickRecording(this->Owner);
  return;
}

