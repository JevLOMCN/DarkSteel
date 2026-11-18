// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// ~ISampleRateConverter @ 1444f4a70

void __thiscall Audio::ISampleRateConverter::~ISampleRateConverter(ISampleRateConverter *this)

{
  *this = (ISampleRateConverter)&___7ISampleRateConverter_Audio__6B_;
  return;
}

// CreateSampleRateConverter @ 1444f9b60

ISampleRateConverter * __cdecl Audio::ISampleRateConverter::CreateSampleRateConverter(void)

{
  ISampleRateConverter *pIVar1;
  
  pIVar1 = ::operator_new(0x40);
  if (pIVar1 != (ISampleRateConverter *)0x0) {
    *(undefined8 *)&pIVar1[1].field_0x4 = 1;
    *pIVar1 = (ISampleRateConverter)&___7FSampleRateConverter_Audio__6B_;
    *(undefined4 *)(pIVar1 + 1) = 0;
    *(undefined4 *)&pIVar1[2].field_0x4 = 0;
    *(undefined8 *)&pIVar1[4].field_0x4 = 0;
    pIVar1[5].field_0x4 = 0;
    pIVar1[6] = (ISampleRateConverter)0x0;
    pIVar1[7] = (ISampleRateConverter)0x0;
    *(undefined4 *)(pIVar1 + 3) = 0x3f800000;
    *(undefined8 *)&pIVar1[3].field_0x4 = 0x3f800000;
    return pIVar1;
  }
  return (ISampleRateConverter *)0x0;
}

