// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// GetValue @ 14b0dad80

float __thiscall
Metasound::FLowFrequencyNoiseOperator::FValueFIFO::GetValue(FValueFIFO *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((-1 < param_1 + 2) && (param_1 + 2 < 4)) {
    return this->Values[(longlong)param_1 + 2];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index >=0 && Index < NumValues",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundLowFrequencyNoise.cpp"
                     ,0x57,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return this->Values[(longlong)param_1 + 2];
}

