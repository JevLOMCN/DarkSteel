// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// GetMetadata @ 14d4695f0

TArrayView<unsigned_char_const_,int> * __thiscall
TraceServices::ITimingProfilerTimerReader::GetMetadata
          (ITimingProfilerTimerReader *this,
          TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,uint param_1)

{
  __return_storage_ptr__->DataPtr = (uchar *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetOriginalTimerIdFromMetadata @ 14d46b5c0

uint __thiscall
TraceServices::ITimingProfilerTimerReader::GetOriginalTimerIdFromMetadata
          (ITimingProfilerTimerReader *this,uint param_1)

{
  return param_1;
}

