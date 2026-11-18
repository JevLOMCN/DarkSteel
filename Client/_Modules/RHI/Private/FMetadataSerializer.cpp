// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 12

// FMetadataSerializer @ 145c45750

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FMetadataSerializer * __thiscall
UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(FMetadataSerializer *this)

{
  int *piVar1;
  FMemoryWriter *this_00;
  FMemoryWriter *pFVar2;
  FCborWriter *pFVar3;
  
  pFVar2 = (FMemoryWriter *)0x0;
  piVar1 = &(this->CborData).ArrayMax;
  (this->CborData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CborData).ArrayNum = 0;
  *piVar1 = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x80,&(this->CborData).AllocatorInstance,0,piVar1);
  this_00 = ::operator_new(0xa8);
  if (this_00 != (FMemoryWriter *)0x0) {
    pFVar2 = FMemoryWriter::FMemoryWriter(this_00,&this->CborData,false,true,(FName)0x0);
  }
  this->MemoryWriter = pFVar2;
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 == (FCborWriter *)0x0) {
    this->CborWriter = (FCborWriter *)0x0;
    return this;
  }
  pFVar3 = FCborWriter::FCborWriter(pFVar3,(FArchive *)this->MemoryWriter,BigEndian);
  this->CborWriter = pFVar3;
  return this;
}

// ~FMetadataSerializer @ 145c47e80

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(FMetadataSerializer *this)

{
  FCborWriter *this_00;
  FMemoryWriter *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this_00 = this->CborWriter;
  if (this_00 != (FCborWriter *)0x0) {
    FCborWriter::~FCborWriter(this_00);
    ::operator_delete(this_00,0x20);
  }
  pFVar1 = this->MemoryWriter;
  if (pFVar1 != (FMemoryWriter *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar2 = (this->CborData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AppendValue @ 145c4fbf0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue
          (FMetadataSerializer *this,FDebugName *param_1)

{
  FCborWriter *this_00;
  FString *pFVar1;
  FString local_18;
  
  this_00 = this->CborWriter;
  pFVar1 = FDebugName::ToString(param_1,&local_18);
  FCborWriter::WriteValue(this_00,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AppendValue @ 145c4fc30

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(FMetadataSerializer *this,FName *param_1)

{
  FCborWriter *this_00;
  FString *pFVar1;
  FString local_18;
  
  this_00 = this->CborWriter;
  pFVar1 = ::FName::ToString(param_1,&local_18);
  FCborWriter::WriteValue(this_00,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AppendValue @ 145c4fc70

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(FMetadataSerializer *this,FString *param_1)

{
  FCborWriter::WriteValue(this->CborWriter,param_1);
  return;
}

// AppendValue @ 145c4fc80

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(FMetadataSerializer *this,double param_1)

{
  FCborWriter::WriteValue(this->CborWriter,param_1);
  return;
}

// AppendValue @ 145c4fc90

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(FMetadataSerializer *this,char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FCborWriter::WriteValue(this->CborWriter,param_1,(longlong)(int)sVar1);
  return;
}

// AppendValue @ 145c4fcd0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(FMetadataSerializer *this,uchar *param_1)

{
  FCborWriter *this_00;
  size_t sVar1;
  TStringView<char8_t> local_18;
  
  this_00 = this->CborWriter;
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (uchar *)0x0) {
    sVar1 = strlen((char *)param_1);
    local_18.Size = (int)sVar1;
  }
  FCborWriter::WriteValue(this_00,&local_18);
  return;
}

// AppendValue @ 145c4fd10

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(FMetadataSerializer *this,wchar_t *param_1)

{
  FCborWriter *this_00;
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  this_00 = this->CborWriter;
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    local_18.Size = (int)sVar1;
  }
  FCborWriter::WriteValue(this_00,&local_18);
  return;
}

// AppendValue @ 145c4fd50

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(FMetadataSerializer *this,long64 param_1)

{
  FCborWriter::WriteValue(this->CborWriter,param_1);
  return;
}

// AppendValue @ 145c4fd60

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(FMetadataSerializer *this,ulong64 param_1)

{
  FCborWriter::WriteValue(this->CborWriter,param_1);
  return;
}

// AppendValue @ 145c4fd70

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(FMetadataSerializer *this,bool param_1)

{
  FCborWriter::WriteValue(this->CborWriter,param_1);
  return;
}

