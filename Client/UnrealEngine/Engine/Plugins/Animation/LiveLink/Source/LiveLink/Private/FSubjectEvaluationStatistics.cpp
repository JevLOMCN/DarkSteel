// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// FSubjectEvaluationStatistics @ 14d012850

FSubjectEvaluationStatistics * __thiscall
FLiveLinkSubject::FSubjectEvaluationStatistics::FSubjectEvaluationStatistics
          (FSubjectEvaluationStatistics *this)

{
  this->BufferUnderflow = (TAtomic<int>)0x0;
  this->BufferOverflow = (TAtomic<int>)0x0;
  this->FrameDrop = (TAtomic<int>)0x0;
  (this->LastEvaluationData).DistanceToNewestSampleSeconds = 0.0;
  (this->LastEvaluationData).DistanceToOldestSampleSeconds = 0.0;
  return this;
}

