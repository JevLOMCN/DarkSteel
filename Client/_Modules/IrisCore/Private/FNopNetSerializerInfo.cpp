// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// GetPropertyTypeClass @ 1441f2110

FFieldClass * __thiscall
UE::Net::Private::FNopNetSerializerInfo::GetPropertyTypeClass(FNopNetSerializerInfo *this)

{
  return (FFieldClass *)0x0;
}

// IsSupported @ 1441f2120

bool __thiscall
UE::Net::Private::FNopNetSerializerInfo::IsSupported(FNopNetSerializerInfo *this,FProperty *param_1)

{
  return true;
}

// GetNetSerializer @ 1441f2130

FNetSerializer * __thiscall
UE::Net::Private::FNopNetSerializerInfo::GetNetSerializer
          (FNopNetSerializerInfo *this,FProperty *param_1)

{
  return &FNopNetSerializerNetSerializerInfo::Serializer;
}

// CanUseDefaultConfig @ 1441f2140

bool __thiscall
UE::Net::Private::FNopNetSerializerInfo::CanUseDefaultConfig
          (FNopNetSerializerInfo *this,FProperty *param_1)

{
  return true;
}

// BuildNetSerializerConfig @ 1441f2150

FNetSerializerConfig * __thiscall
UE::Net::Private::FNopNetSerializerInfo::BuildNetSerializerConfig
          (FNopNetSerializerInfo *this,void *param_1,FProperty *param_2)

{
  return (FNetSerializerConfig *)0x0;
}

