// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSynthBenchmarkStat @ 147bba5d0

FSynthBenchmarkStat * __thiscall FSynthBenchmarkStat::FSynthBenchmarkStat(FSynthBenchmarkStat *this)

{
  this->MeasuredTotalTime = -1.0;
  this->Desc = (wchar_t *)0x0;
  this->ValueType = (wchar_t *)0x0;
  this->Confidence = 0.0;
  this->MeasuredNormalizedTime = -1.0;
  this->IndexNormalizedTime = -1.0;
  this->Weight = 1.0;
  return this;
}

