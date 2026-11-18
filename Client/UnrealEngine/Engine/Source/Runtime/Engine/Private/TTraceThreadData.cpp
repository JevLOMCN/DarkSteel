// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// TTraceThreadData<FOverlapDatum> @ 1477ea850

TTraceThreadData<FOverlapDatum> * __thiscall
TTraceThreadData<FOverlapDatum>::TTraceThreadData<FOverlapDatum>
          (TTraceThreadData<FOverlapDatum> *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)&this->Buffer[0].Delegate.field_0x8;
  lVar2 = 0x40;
  do {
    FBaseTraceDatum::FBaseTraceDatum((FBaseTraceDatum *)(puVar1 + -0x23));
    puVar1[-1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 0x28;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return this;
}

// TTraceThreadData<FTraceDatum> @ 1477ea8d0

TTraceThreadData<FTraceDatum> * __thiscall
TTraceThreadData<FTraceDatum>::TTraceThreadData<FTraceDatum>(TTraceThreadData<FTraceDatum> *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)&this->Buffer[0].Delegate.field_0x8;
  lVar2 = 0x40;
  do {
    FBaseTraceDatum::FBaseTraceDatum((FBaseTraceDatum *)(puVar1 + -0x27));
    puVar1[-1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 0x2c;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return this;
}

