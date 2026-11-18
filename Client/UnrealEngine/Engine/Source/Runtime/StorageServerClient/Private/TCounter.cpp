// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// Set @ 148cdd940

void __thiscall
FCountersTrace::TCounter<double,1,std::atomic<double>,0>::Set
          (TCounter<double,1,std::atomic<double>,0> *this,double param_1)

{
  ushort uVar1;
  atomic<unsigned_int> aVar2;
  
  if ((double)this->Value != param_1) {
    LOCK();
    this->Value = (atomic<double>)param_1;
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (this->CounterId == (atomic<unsigned_int>)0x0) {
        uVar1 = OutputInitCounter(this->CounterName,TraceCounterType_Float,this->CounterFlags & 0xf)
        ;
        LOCK();
        if (this->CounterId == (atomic<unsigned_int>)0x0) {
          aVar2._2_2_ = 0;
          aVar2._0_2_ = uVar1;
          this->CounterId = aVar2;
        }
        UNLOCK();
      }
      OutputSetValue(SUB42(this->CounterId,0),(double)this->Value);
      return;
    }
  }
  return;
}

