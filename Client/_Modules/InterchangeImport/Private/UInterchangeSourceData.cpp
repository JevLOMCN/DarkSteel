// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// GetFileContentHash @ 14e6efca0

TOptional<FMD5Hash> * __thiscall
UInterchangeSourceData::GetFileContentHash
          (UInterchangeSourceData *this,TOptional<FMD5Hash> *__return_storage_ptr__)

{
  bool bVar1;
  undefined8 uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  bool bVar10;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_struct_TOptional<FMD5Hash>___cdecl_UInterchangeSourceData::GetFileContentHash(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId40,"UInterchangeSourceData::GetFileContentHash",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeSourceData.h"
               ,0x28);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_struct_TOptional<FMD5Hash>___cdecl_UInterchangeSourceData::GetFileContentHash(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId40);
  }
  if ((this->FileContentHashCache).bIsSet == false) {
    ComputeFileContentHashCache(this);
  }
  __return_storage_ptr__->bIsSet = false;
  bVar1 = (this->FileContentHashCache).bIsSet;
  __return_storage_ptr__->bIsSet = bVar1;
  if (bVar1 != false) {
    uVar3 = (this->FileContentHashCache).TypedValue.Bytes[0];
    uVar4 = (this->FileContentHashCache).TypedValue.Bytes[1];
    uVar5 = (this->FileContentHashCache).TypedValue.Bytes[2];
    uVar6 = (this->FileContentHashCache).TypedValue.Bytes[3];
    uVar7 = (this->FileContentHashCache).TypedValue.Bytes[4];
    uVar8 = (this->FileContentHashCache).TypedValue.Bytes[5];
    uVar9 = (this->FileContentHashCache).TypedValue.Bytes[6];
    uVar2 = *(undefined8 *)((this->FileContentHashCache).TypedValue.Bytes + 7);
    (__return_storage_ptr__->TypedValue).bIsValid = (this->FileContentHashCache).TypedValue.bIsValid
    ;
    (__return_storage_ptr__->TypedValue).Bytes[0] = uVar3;
    (__return_storage_ptr__->TypedValue).Bytes[1] = uVar4;
    (__return_storage_ptr__->TypedValue).Bytes[2] = uVar5;
    (__return_storage_ptr__->TypedValue).Bytes[3] = uVar6;
    (__return_storage_ptr__->TypedValue).Bytes[4] = uVar7;
    (__return_storage_ptr__->TypedValue).Bytes[5] = uVar8;
    (__return_storage_ptr__->TypedValue).Bytes[6] = uVar9;
    *(undefined8 *)((__return_storage_ptr__->TypedValue).Bytes + 7) = uVar2;
    (__return_storage_ptr__->TypedValue).Bytes[0xf] =
         (this->FileContentHashCache).TypedValue.Bytes[0xf];
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

