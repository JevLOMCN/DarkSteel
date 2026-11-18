// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 12

// FCompressionSettings @ 141f20f80

FCompressionSettings * __thiscall
UE::Serialization::Private::FCompressionSettings::FCompressionSettings
          (FCompressionSettings *this,FCompressedBuffer *param_1)

{
  bool bVar1;
  ulong64 local_res8;
  
  bVar1 = FCompressedBuffer::TryGetCompressParameters
                    (param_1,&this->Compressor,&this->CompressionLevel,&local_res8);
  if (!bVar1) {
    this->Compressor = NotSet;
    this->CompressionLevel = None;
    this->bIsSet = false;
    return this;
  }
  this->bIsSet = true;
  return this;
}

// FCompressionSettings @ 141f20fe0

FCompressionSettings * __thiscall
UE::Serialization::Private::FCompressionSettings::FCompressionSettings(FCompressionSettings *this)

{
  this->Compressor = NotSet;
  this->CompressionLevel = None;
  this->bIsSet = false;
  return this;
}

// operator== @ 141f26470

bool __thiscall
UE::Serialization::Private::FCompressionSettings::operator==
          (FCompressionSettings *this,FCompressionSettings *param_1)

{
  if (((this->Compressor == param_1->Compressor) &&
      (this->CompressionLevel == param_1->CompressionLevel)) && (this->bIsSet == param_1->bIsSet)) {
    return true;
  }
  return false;
}

// operator!= @ 141f264a0

bool __thiscall
UE::Serialization::Private::FCompressionSettings::operator!=
          (FCompressionSettings *this,FCompressionSettings *param_1)

{
  if (((this->Compressor == param_1->Compressor) &&
      (this->CompressionLevel == param_1->CompressionLevel)) && (this->bIsSet == param_1->bIsSet)) {
    return false;
  }
  return true;
}

// GetCompressionLevel @ 141f33a70

ECompressionLevel __thiscall
UE::Serialization::Private::FCompressionSettings::GetCompressionLevel(FCompressionSettings *this)

{
  return this->CompressionLevel;
}

// GetCompressor @ 141f33a80

ECompressor __thiscall
UE::Serialization::Private::FCompressionSettings::GetCompressor(FCompressionSettings *this)

{
  return this->Compressor;
}

// IsCompressed @ 141f3a090

bool __thiscall
UE::Serialization::Private::FCompressionSettings::IsCompressed(FCompressionSettings *this)

{
  if ((this->bIsSet == true) && (this->CompressionLevel != None)) {
    return true;
  }
  return false;
}

// IsSet @ 141f3a560

bool __thiscall UE::Serialization::Private::FCompressionSettings::IsSet(FCompressionSettings *this)

{
  return this->bIsSet;
}

// Reset @ 141f43ba0

void __thiscall UE::Serialization::Private::FCompressionSettings::Reset(FCompressionSettings *this)

{
  this->Compressor = NotSet;
  this->CompressionLevel = None;
  this->bIsSet = false;
  return;
}

// Set @ 141f4d1c0

void __thiscall
UE::Serialization::Private::FCompressionSettings::Set
          (FCompressionSettings *this,ECompressor param_1,ECompressionLevel param_2)

{
  this->Compressor = param_1;
  this->CompressionLevel = param_2;
  this->bIsSet = true;
  return;
}

// SetToDefault @ 141f4d710

void __thiscall
UE::Serialization::Private::FCompressionSettings::SetToDefault(FCompressionSettings *this)

{
  this->Compressor = Kraken;
  this->CompressionLevel = Fast;
  this->bIsSet = true;
  return;
}

// SetToDisabled @ 141f4d720

void __thiscall
UE::Serialization::Private::FCompressionSettings::SetToDisabled(FCompressionSettings *this)

{
  this->Compressor = NotSet;
  this->CompressionLevel = None;
  this->bIsSet = true;
  return;
}

