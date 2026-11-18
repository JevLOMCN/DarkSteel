// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 13

// IEEEBinary<double,unsigned___int64,64,53> @ 1494fd9c0

IEEEBinary<double,unsigned___int64,64,53> * __thiscall
gte::IEEEBinary<double,unsigned___int64,64,53>::IEEEBinary<double,unsigned___int64,64,53>
          (IEEEBinary<double,unsigned___int64,64,53> *this,double param_1)

{
  (this->field0_0x0).number = param_1;
  return this;
}

// IEEEBinary<double,unsigned___int64,64,53> @ 1494fd9d0

IEEEBinary<double,unsigned___int64,64,53> * __thiscall
gte::IEEEBinary<double,unsigned___int64,64,53>::IEEEBinary<double,unsigned___int64,64,53>
          (IEEEBinary<double,unsigned___int64,64,53> *this,ulong64 param_1,ulong64 param_2,
          ulong64 param_3)

{
  (this->field0_0x0).encoding = (param_1 << 0xb | param_2) << 0x34 | param_3;
  return this;
}

// ~IEEEBinary<double,unsigned___int64,64,53> @ 149501200

void __thiscall
gte::IEEEBinary<double,unsigned___int64,64,53>::~IEEEBinary<double,unsigned___int64,64,53>
          (IEEEBinary<double,unsigned___int64,64,53> *this)

{
  return;
}

// GetBiased @ 149519ca0

ulong64 __thiscall
gte::IEEEBinary<double,unsigned___int64,64,53>::GetBiased
          (IEEEBinary<double,unsigned___int64,64,53> *this)

{
  return (ulonglong)((uint)((this->field0_0x0).encoding >> 0x34) & 0x7ff);
}

// GetSign @ 14951ad90

ulong64 __thiscall
gte::IEEEBinary<double,unsigned___int64,64,53>::GetSign
          (IEEEBinary<double,unsigned___int64,64,53> *this)

{
  return (this->field0_0x0).encoding >> 0x3f;
}

// GetTrailing @ 14951adc0

ulong64 __thiscall
gte::IEEEBinary<double,unsigned___int64,64,53>::GetTrailing
          (IEEEBinary<double,unsigned___int64,64,53> *this)

{
  return (this->field0_0x0).encoding & 0xfffffffffffff;
}

// SetEncoding @ 149523810

void __thiscall
gte::IEEEBinary<double,unsigned___int64,64,53>::SetEncoding
          (IEEEBinary<double,unsigned___int64,64,53> *this,ulong64 param_1,ulong64 param_2,
          ulong64 param_3)

{
  (this->field0_0x0).encoding = (param_1 << 0xb | param_2) << 0x34 | param_3;
  return;
}

// IEEEBinary<short,unsigned_short,16,11> @ 1495a2a80

IEEEBinary<short,unsigned_short,16,11> * __thiscall
gte::IEEEBinary<short,unsigned_short,16,11>::IEEEBinary<short,unsigned_short,16,11>
          (IEEEBinary<short,unsigned_short,16,11> *this,
          IEEEBinary<short,unsigned_short,16,11> *param_1)

{
  this->field0_0x0 = param_1->field0_0x0;
  return this;
}

// IEEEBinary<short,unsigned_short,16,11> @ 1495a2a90

IEEEBinary<short,unsigned_short,16,11> * __thiscall
gte::IEEEBinary<short,unsigned_short,16,11>::IEEEBinary<short,unsigned_short,16,11>
          (IEEEBinary<short,unsigned_short,16,11> *this,ushort param_1)

{
  (this->field0_0x0).encoding = param_1;
  return this;
}

// IEEEBinary<short,unsigned_short,16,11> @ 1495a2aa0

IEEEBinary<short,unsigned_short,16,11> * __thiscall
gte::IEEEBinary<short,unsigned_short,16,11>::IEEEBinary<short,unsigned_short,16,11>
          (IEEEBinary<short,unsigned_short,16,11> *this)

{
  return this;
}

// ~IEEEBinary<short,unsigned_short,16,11> @ 1495a8940

void __thiscall
gte::IEEEBinary<short,unsigned_short,16,11>::~IEEEBinary<short,unsigned_short,16,11>
          (IEEEBinary<short,unsigned_short,16,11> *this)

{
  return;
}

// operator= @ 1495ab270

IEEEBinary<short,unsigned_short,16,11> * __thiscall
gte::IEEEBinary<short,unsigned_short,16,11>::operator=
          (IEEEBinary<short,unsigned_short,16,11> *this,
          IEEEBinary<short,unsigned_short,16,11> *param_1)

{
  this->field0_0x0 = param_1->field0_0x0;
  return this;
}

// operator_unsigned_short @ 1495ac1b0

ushort __thiscall
gte::IEEEBinary<short,unsigned_short,16,11>::operator_unsigned_short
          (IEEEBinary<short,unsigned_short,16,11> *this)

{
  return (this->field0_0x0).encoding;
}

