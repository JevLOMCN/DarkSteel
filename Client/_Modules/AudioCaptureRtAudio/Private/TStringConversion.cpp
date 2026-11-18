// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureRtAudio
// Functions: 1

// ~TStringConversion<FUTF8ToTCHAR_Convert,128> @ 14d0c36e0

void __thiscall
TStringConversion<FUTF8ToTCHAR_Convert,128>::~TStringConversion<FUTF8ToTCHAR_Convert,128>
          (TStringConversion<FUTF8ToTCHAR_Convert,128> *this)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

