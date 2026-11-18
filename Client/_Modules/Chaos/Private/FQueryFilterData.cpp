// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 13

// GetBlockChannels @ 1438b9da0

ulong64 __thiscall Chaos::Filter::FQueryFilterData::GetBlockChannels(FQueryFilterData *this)

{
  return (ulonglong)this->Word1;
}

// GetCollisionChannelIndex @ 1438ba260

uchar __thiscall Chaos::Filter::FQueryFilterData::GetCollisionChannelIndex(FQueryFilterData *this)

{
  return (byte)(this->Word3 >> 0x15) & 0x1f;
}

// GetCollisionChannelMask @ 1438ba2b0

ulong64 __thiscall Chaos::Filter::FQueryFilterData::GetCollisionChannelMask(FQueryFilterData *this)

{
  return 1L << ((byte)(this->Word3 >> 0x15) & 0x1f);
}

// GetFlags @ 1438ba6c0

EFilterFlags __thiscall Chaos::Filter::FQueryFilterData::GetFlags(FQueryFilterData *this)

{
  return (EFilterFlags)this->Word3;
}

// GetIgnoreMask @ 1438ba6f0

uchar __thiscall Chaos::Filter::FQueryFilterData::GetIgnoreMask(FQueryFilterData *this)

{
  return (uchar)(this->Word3 >> 0x1a);
}

// GetObjectTypesToQueryMask @ 1438bb430

ulong64 __thiscall
Chaos::Filter::FQueryFilterData::GetObjectTypesToQueryMask(FQueryFilterData *this)

{
  return (ulonglong)this->Word1;
}

// GetOverlapChannels @ 1438bb7d0

ulong64 __thiscall Chaos::Filter::FQueryFilterData::GetOverlapChannels(FQueryFilterData *this)

{
  return (ulonglong)this->Word2;
}

// GetQueryType @ 1438bc1e0

EQueryType __thiscall Chaos::Filter::FQueryFilterData::GetQueryType(FQueryFilterData *this)

{
  return ~this->Word0 & ObjectType;
}

// HasFlag @ 1438c1bf0

bool __thiscall
Chaos::Filter::FQueryFilterData::HasFlag(FQueryFilterData *this,EFilterFlags param_1)

{
  return ((EFilterFlags)this->Word3 & param_1) != None;
}

// IsMultiQuery @ 1438c3380

bool __thiscall Chaos::Filter::FQueryFilterData::IsMultiQuery(FQueryFilterData *this)

{
  return (this->Word3 >> 0x15 & 0x1f) != 0;
}

// IsValid @ 1438c3cd0

bool __thiscall Chaos::Filter::FQueryFilterData::IsValid(FQueryFilterData *this)

{
  if ((((this->Word0 == 0) && (this->Word1 == 0)) && (this->Word2 == 0)) && (this->Word3 == 0)) {
    return false;
  }
  return true;
}

// SetFlags @ 1438d2240

void __thiscall
Chaos::Filter::FQueryFilterData::SetFlags(FQueryFilterData *this,EFilterFlags param_1)

{
  this->Word3 = this->Word3 | 0x1fffff;
  return;
}

// SetMaskChannelAndFlags @ 1438d2e70

void __thiscall
Chaos::Filter::FQueryFilterData::SetMaskChannelAndFlags
          (FQueryFilterData *this,uchar param_1,uchar param_2,EFilterFlags param_3)

{
  this->Word3 = ((uint)param_1 << 5 | (uint)param_2) << 0x15 | (uint)param_3;
  return;
}

