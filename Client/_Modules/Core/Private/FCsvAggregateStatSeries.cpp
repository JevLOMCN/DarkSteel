// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FinalizeFrame @ 14193bcc0

void __thiscall FCsvAggregateStatSeries::FinalizeFrame(FCsvAggregateStatSeries *this,long64 param_1)

{
  bool bVar1;
  <unnamed_type_Value> local_res8 [2];
  
  local_res8[0].AsInt = 0;
  bVar1 = TMap<__int64,FCsvStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStatSeriesValue,0>_>
          ::RemoveAndCopyValue(&this->RowValues,param_1,(FCsvStatSeriesValue *)local_res8);
  if (bVar1) {
    FCsvStreamWriter::PushValue
              ((FCsvStreamWriter *)this->_padding_,(FCsvStatSeries *)this,param_1,
               (FCsvStatSeriesValue *)local_res8);
  }
  return;
}

// GetAllocatedSize @ 141944eb0

ulong64 __thiscall FCsvAggregateStatSeries::GetAllocatedSize(FCsvAggregateStatSeries *this)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)&(this->RowValues).field_0x48;
  if (uVar1 < 2) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1 << 2;
  }
  return lVar2 + (ulonglong)((*(int *)&(this->RowValues).field_0x2c + 0x1fU >> 5) << 2) +
         (longlong)*(int *)&(this->RowValues).field_0xc * 0x18;
}

// IsAggregateSeries @ 141951170

bool __thiscall FCsvAggregateStatSeries::IsAggregateSeries(FCsvAggregateStatSeries *this)

{
  return true;
}

