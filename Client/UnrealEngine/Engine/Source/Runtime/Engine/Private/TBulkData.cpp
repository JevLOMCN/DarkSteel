// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetCopyAsBuffer @ 1486bcca0

FBulkDataBuffer<unsigned_char> * __thiscall
TBulkData<unsigned_char>::GetCopyAsBuffer
          (TBulkData<unsigned_char> *this,FBulkDataBuffer<unsigned_char> *__return_storage_ptr__,
          long64 param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  FBulkDataBuffer<unsigned_char> *pFVar4;
  uchar *local_res10;
  
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)this);
  if (lVar3 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequestedElementCount <= MaxElementCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\BulkData.h"
                       ,0x43c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBulkDataBuffer<unsigned_char> *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_res10 = (uchar *)0x0;
  FBulkData::GetCopy((FBulkData *)this,&local_res10,param_2);
  (__return_storage_ptr__->View).DataPtr = local_res10;
  if (0 < param_1) {
    lVar3 = param_1;
  }
  (__return_storage_ptr__->View).ArrayNum = lVar3;
  if (lVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBulkDataBuffer<unsigned_char> *)(*pcVar1)();
      return pFVar4;
    }
  }
  return __return_storage_ptr__;
}

