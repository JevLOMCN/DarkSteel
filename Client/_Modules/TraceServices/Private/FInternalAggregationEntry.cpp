// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// FInternalAggregationEntry @ 14d421aa0

FInternalAggregationEntry * __thiscall
TraceServices::FTimelineStatistics::FInternalAggregationEntry::FInternalAggregationEntry
          (FInternalAggregationEntry *this)

{
  (this->Stats).InstanceCount = 0;
  (this->Stats).AverageInstanceCount = 0.0;
  (this->Stats).TotalInclusiveTime = 0.0;
  (this->Stats).MinInclusiveTime = 1.7976931348623157e+308;
  (this->Stats).MinExclusiveTime = 1.7976931348623157e+308;
  (this->Stats).MaxInclusiveTime = -1.7976931348623157e+308;
  (this->Stats).AverageInclusiveTime = 0.0;
  (this->Stats).MedianInclusiveTime = 0.0;
  (this->Stats).TotalExclusiveTime = 0.0;
  (this->Stats).MaxExclusiveTime = -1.7976931348623157e+308;
  (this->Stats).AverageExclusiveTime = 0.0;
  (this->Stats).MedianExclusiveTime = 0.0;
  memset(this,0,400);
  this->InclDT = 1.0;
  memset(this->ExclHistogram,0,400);
  this->ExclDT = 1.0;
  return this;
}

