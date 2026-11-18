// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 3

// ~TCounter<double,1,double,0> @ 1445a6ae0

void __thiscall
FCountersTrace::TCounter<double,1,double,0>::~TCounter<double,1,double,0>
          (TCounter<double,1,double,0> *this)

{
  if ((this->CounterFlags & 0x20) != 0) {
    FreeCounterName(this->CounterName);
    return;
  }
  return;
}

// ~TCounter<__int64,0,std::atomic<__int64>,0> @ 1445a6b00

void __thiscall
FCountersTrace::TCounter<__int64,0,std::atomic<__int64>,0>::
~TCounter<__int64,0,std::atomic<__int64>,0>(TCounter<__int64,0,std::atomic<__int64>,0> *this)

{
  if ((this->CounterFlags & 0x20) != 0) {
    FreeCounterName(this->CounterName);
    return;
  }
  return;
}

// ~TCounter<__int64,0,__int64,0> @ 1445a6b20

void __thiscall
FCountersTrace::TCounter<__int64,0,__int64,0>::~TCounter<__int64,0,__int64,0>
          (TCounter<__int64,0,__int64,0> *this)

{
  if ((this->CounterFlags & 0x20) != 0) {
    FreeCounterName(this->CounterName);
    return;
  }
  return;
}

