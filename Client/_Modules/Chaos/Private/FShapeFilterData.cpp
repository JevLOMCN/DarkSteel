// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// GetCollisionChannelIndex @ 1438ba270

uchar __thiscall Chaos::Filter::FShapeFilterData::GetCollisionChannelIndex(FShapeFilterData *this)

{
  return (byte)(this->Word3 >> 0x15) & 0x1f;
}

// GetCollisionChannelMask @ 1438ba2d0

ulong64 __thiscall Chaos::Filter::FShapeFilterData::GetCollisionChannelMask(FShapeFilterData *this)

{
  return 1L << ((byte)(this->Word3 >> 0x15) & 0x1f);
}

// GetFlags @ 1438ba6d0

EFilterFlags __thiscall Chaos::Filter::FShapeFilterData::GetFlags(FShapeFilterData *this)

{
  return (EFilterFlags)this->Word3;
}

// GetMaskFilter @ 1438bb1b0

uchar __thiscall Chaos::Filter::FShapeFilterData::GetMaskFilter(FShapeFilterData *this)

{
  return (uchar)(this->Word3 >> 0x1a);
}

// GetQueryBlockChannels @ 1438bc1c0

ulong64 __thiscall Chaos::Filter::FShapeFilterData::GetQueryBlockChannels(FShapeFilterData *this)

{
  return (ulonglong)this->QueryBlockChannels;
}

// GetQueryOverlapChannels @ 1438bc1d0

ulong64 __thiscall Chaos::Filter::FShapeFilterData::GetQueryOverlapChannels(FShapeFilterData *this)

{
  return (ulonglong)this->QueryOverlapChannels;
}

// GetSimBlockChannels @ 1438bc7b0

ulong64 __thiscall Chaos::Filter::FShapeFilterData::GetSimBlockChannels(FShapeFilterData *this)

{
  return (ulonglong)this->SimBlockChannels;
}

// HasFlag @ 1438c1c00

bool __thiscall
Chaos::Filter::FShapeFilterData::HasFlag(FShapeFilterData *this,EFilterFlags param_1)

{
  return ((EFilterFlags)this->Word3 & param_1) != None;
}

// IsValid @ 1438c3d00

bool __thiscall Chaos::Filter::FShapeFilterData::IsValid(FShapeFilterData *this)

{
  if ((((this->QueryBlockChannels == 0) && (this->QueryOverlapChannels == 0)) &&
      (this->SimBlockChannels == 0)) && ((this->Word3 == 0 && (this->SimWord3 == 0)))) {
    return false;
  }
  return true;
}

// SetFlags @ 1438d2260

void __thiscall
Chaos::Filter::FShapeFilterData::SetFlags(FShapeFilterData *this,EFilterFlags param_1)

{
  this->Word3 = this->Word3 | 0x1fffff;
  return;
}

// SetMaskFilter @ 1438d2ea0

void __thiscall Chaos::Filter::FShapeFilterData::SetMaskFilter(FShapeFilterData *this,uchar param_1)

{
  this->Word3 = this->Word3 & 0x3ffffff;
  this->Word3 = this->Word3 | (uint)param_1 << 0x1a;
  return;
}

