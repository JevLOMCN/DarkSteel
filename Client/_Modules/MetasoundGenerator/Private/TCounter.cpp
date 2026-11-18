// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// Decrement @ 14b2af030

void __thiscall
FCountersTrace::TCounter<__int64,0,__int64,0>::Decrement(TCounter<__int64,0,__int64,0> *this)

{
  ushort uVar1;
  atomic<unsigned_int> aVar2;
  
  this->Value = this->Value + -1;
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (this->CounterId == (atomic<unsigned_int>)0x0) {
    uVar1 = OutputInitCounter(this->CounterName,TraceCounterType_Int,this->CounterFlags & 0xf);
    LOCK();
    if (this->CounterId == (atomic<unsigned_int>)0x0) {
      aVar2._2_2_ = 0;
      aVar2._0_2_ = uVar1;
      this->CounterId = aVar2;
    }
    UNLOCK();
  }
  OutputSetValue(SUB42(this->CounterId,0),this->Value);
  return;
}

