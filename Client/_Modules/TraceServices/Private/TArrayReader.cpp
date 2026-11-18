// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 5

// GetData @ 14d3e0670

uchar * __thiscall
UE::Trace::IAnalyzer::TArrayReader<unsigned_char>::GetData(TArrayReader<unsigned_char> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  char local_res10 [24];
  
  puVar1 = FArrayReader::GetImpl((FArrayReader *)this,0,local_res10);
  if (puVar1 != (uchar *)0x0) {
    iVar3 = -(int)local_res10[0];
    if (iVar3 < 0) {
      iVar3 = (int)local_res10[0];
    }
    puVar2 = (uchar *)0x0;
    if (iVar3 == 1) {
      puVar2 = puVar1;
    }
    return puVar2;
  }
  return (uchar *)0x0;
}

// GetData @ 14d3e06b0

ushort * __thiscall
UE::Trace::IAnalyzer::TArrayReader<unsigned_short>::GetData(TArrayReader<unsigned_short> *this)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  char local_res10 [24];
  
  puVar1 = FArrayReader::GetImpl((FArrayReader *)this,0,local_res10);
  if (puVar1 != (ushort *)0x0) {
    iVar3 = -(int)local_res10[0];
    if (iVar3 < 0) {
      iVar3 = (int)local_res10[0];
    }
    puVar2 = (ushort *)0x0;
    if (iVar3 == 2) {
      puVar2 = puVar1;
    }
    return puVar2;
  }
  return (ushort *)0x0;
}

// GetData @ 14d3e06f0

uint * __thiscall
UE::Trace::IAnalyzer::TArrayReader<unsigned_int>::GetData(TArrayReader<unsigned_int> *this)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  char local_res10 [24];
  
  puVar1 = FArrayReader::GetImpl((FArrayReader *)this,0,local_res10);
  if (puVar1 != (uint *)0x0) {
    iVar3 = -(int)local_res10[0];
    if (iVar3 < 0) {
      iVar3 = (int)local_res10[0];
    }
    puVar2 = (uint *)0x0;
    if (iVar3 == 4) {
      puVar2 = puVar1;
    }
    return puVar2;
  }
  return (uint *)0x0;
}

// GetData @ 14d3e0730

long64 * __thiscall
UE::Trace::IAnalyzer::TArrayReader<__int64>::GetData(TArrayReader<__int64> *this)

{
  long64 *plVar1;
  long64 *plVar2;
  int iVar3;
  char local_res10 [24];
  
  plVar1 = FArrayReader::GetImpl((FArrayReader *)this,0,local_res10);
  if (plVar1 != (long64 *)0x0) {
    iVar3 = -(int)local_res10[0];
    if (iVar3 < 0) {
      iVar3 = (int)local_res10[0];
    }
    plVar2 = (long64 *)0x0;
    if (iVar3 == 8) {
      plVar2 = plVar1;
    }
    return plVar2;
  }
  return (long64 *)0x0;
}

// GetData @ 14d3e0770

ulong64 * __thiscall
UE::Trace::IAnalyzer::TArrayReader<unsigned___int64>::GetData(TArrayReader<unsigned___int64> *this)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  int iVar3;
  char local_res10 [24];
  
  puVar1 = FArrayReader::GetImpl((FArrayReader *)this,0,local_res10);
  if (puVar1 != (ulong64 *)0x0) {
    iVar3 = -(int)local_res10[0];
    if (iVar3 < 0) {
      iVar3 = (int)local_res10[0];
    }
    puVar2 = (ulong64 *)0x0;
    if (iVar3 == 8) {
      puVar2 = puVar1;
    }
    return puVar2;
  }
  return (ulong64 *)0x0;
}

