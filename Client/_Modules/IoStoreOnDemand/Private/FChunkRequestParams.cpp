// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 2

// Create @ 1445be120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FChunkRequestParams * __cdecl
UE::IoStore::FChunkRequestParams::Create
          (FChunkRequestParams *__return_storage_ptr__,FIoOffsetAndLength *param_1,
          FOnDemandChunkInfo *param_2)

{
  uint uVar1;
  FOnDemandChunkEntry *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TArrayView<unsigned_int_const_,int> *pTVar7;
  FChunkRequestParams *pFVar8;
  TIoStatusOr<FIoOffsetAndLength> *this;
  FBlake3Hash *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStackY_858 [32];
  TArrayView<unsigned_int_const_,int> local_818;
  TArrayView<unsigned_int_const_,int> local_808;
  longlong local_7f8;
  undefined2 local_7f0;
  TIoStatusOr<FIoOffsetAndLength> local_7e8;
  FBlake3Hash local_7c8;
  FBlake3 local_7a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_858;
  uVar1 = param_2->Entry->EncodedSize;
  if ((ulonglong)((longlong)GIasHttpRangeRequestMinSizeKiB * 0x400) < (ulonglong)uVar1) {
    uVar11 = (ulonglong)
             CONCAT41(CONCAT31(CONCAT21(CONCAT11(param_1->OffsetAndLength[0],
                                                 param_1->OffsetAndLength[1]),
                                        param_1->OffsetAndLength[2]),param_1->OffsetAndLength[3]),
                      param_1->OffsetAndLength[4]);
    uVar12 = param_2->Entry->RawSize - uVar11;
    uVar10 = (ulonglong)
             CONCAT41(CONCAT31(CONCAT21(CONCAT11(param_1->OffsetAndLength[5],
                                                 param_1->OffsetAndLength[6]),
                                        param_1->OffsetAndLength[7]),param_1->OffsetAndLength[8]),
                      param_1->OffsetAndLength[9]);
    if (uVar10 < uVar12) {
      uVar12 = uVar10;
    }
    pTVar7 = FOnDemandChunkInfo::Blocks(param_2,&local_808);
    local_818.DataPtr._0_4_ = *(undefined4 *)&pTVar7->DataPtr;
    local_818.DataPtr._4_4_ = *(undefined4 *)((longlong)&pTVar7->DataPtr + 4);
    local_818.ArrayNum = pTVar7->ArrayNum;
    local_818._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
    if (((param_2->SharedContainer).Object == (FOnDemandContainer *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FChunkRequestParams *)(*pcVar4)();
      return pFVar8;
    }
    this = FIoChunkEncoding::GetChunkRange
                     (&local_7e8,(ulonglong)param_2->Entry->RawSize,
                      ((param_2->SharedContainer).Object)->BlockSize,&local_818,uVar11,uVar12);
    if ((this->StatusValue).ErrorCode != Ok) {
      StatusOrCrash(&this->StatusValue);
    }
    FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
    local_7f8 = *(longlong *)(this->Value).Pad;
    local_7f0 = *(undefined2 *)((this->Value).Pad + 8);
    FIoStatus::operator=(&local_7e8.StatusValue,Unknown);
    FIoStatus::~FIoStatus(&local_7e8.StatusValue);
  }
  else {
    local_7f8 = (ulonglong)CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18)) << 0x30;
    local_7f0 = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
  }
  pFVar2 = param_2->Entry;
  FBlake3::Reset(&local_7a8);
  FBlake3::Update(&local_7a8,pFVar2,0x14);
  FBlake3::Update(&local_7a8,&local_7f8,10);
  pFVar9 = FBlake3::Finalize(&local_7a8,&local_7c8);
  (__return_storage_ptr__->ChunkKey).Hash[0] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[1] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[2] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[3] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[4] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[5] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[6] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[7] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[8] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[9] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[10] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[0xb] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[0xc] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[0xd] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[0xe] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[0xf] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[0x10] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[0x11] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[0x12] = '\0';
  (__return_storage_ptr__->ChunkKey).Hash[0x13] = '\0';
  uVar5 = *(undefined8 *)(pFVar9->Hash + 8);
  *(undefined8 *)(__return_storage_ptr__->ChunkKey).Hash = *(undefined8 *)pFVar9->Hash;
  *(undefined8 *)((__return_storage_ptr__->ChunkKey).Hash + 8) = uVar5;
  *(undefined4 *)((__return_storage_ptr__->ChunkKey).Hash + 0x10) =
       *(undefined4 *)(pFVar9->Hash + 0x10);
  *(longlong *)(__return_storage_ptr__->ChunkRange).OffsetAndLength = local_7f8;
  *(undefined2 *)((__return_storage_ptr__->ChunkRange).OffsetAndLength + 8) = local_7f0;
  (__return_storage_ptr__->ChunkInfo).SharedContainer.Object = (param_2->SharedContainer).Object;
  pTVar3 = (param_2->SharedContainer).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->ChunkInfo).SharedContainer.SharedReferenceCount.ReferenceController =
       pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (__return_storage_ptr__->ChunkInfo).Entry = param_2->Entry;
  return __return_storage_ptr__;
}

// GetDecodingParams @ 1445d4ab0

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FIoChunkDecodingParams * __thiscall
UE::IoStore::FChunkRequestParams::GetDecodingParams
          (FChunkRequestParams *this,FIoChunkDecodingParams *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  FIoChunkDecodingParams *pFVar8;
  FName FVar9;
  TArrayView<unsigned_int_const_,int> *pTVar10;
  undefined4 uStack_1c;
  TArrayView<unsigned_int_const_,int> local_18;
  
  ::FName::FName((FName *)__return_storage_ptr__,L"Oodle");
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0x10000;
  __return_storage_ptr__->TotalRawSize = 0;
  __return_storage_ptr__->EncodedOffset = 0;
  (__return_storage_ptr__->EncodedBlockSize).DataPtr = (uint *)0x0;
  (__return_storage_ptr__->EncodedBlockSize).ArrayNum = 0;
  (__return_storage_ptr__->BlockHash).DataPtr = (uint *)0x0;
  (__return_storage_ptr__->BlockHash).ArrayNum = 0;
  __return_storage_ptr__->RawOffset = 0;
  if ((this->ChunkInfo).SharedContainer.Object == (FOnDemandContainer *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FIoChunkDecodingParams *)(*pcVar4)();
      return pFVar8;
    }
  }
  __return_storage_ptr__->_padding_ = (longlong)(this->ChunkInfo).SharedContainer.Object;
  __return_storage_ptr__->_padding_ = 0x20;
  FVar9 = FOnDemandChunkInfo::CompressionFormat(&this->ChunkInfo);
  __return_storage_ptr__->_padding_ = *(longlong *)FVar9;
  if ((this->ChunkInfo).SharedContainer.Object == (FOnDemandContainer *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FIoChunkDecodingParams *)(*pcVar4)();
      return pFVar8;
    }
  }
  *(uint *)&__return_storage_ptr__->_padding_ =
       ((this->ChunkInfo).SharedContainer.Object)->BlockSize;
  __return_storage_ptr__->TotalRawSize = (ulonglong)((this->ChunkInfo).Entry)->RawSize;
  uVar1 = ((this->ChunkInfo).Entry)->BlockCount;
  if ((this->ChunkInfo).SharedContainer.Object == (FOnDemandContainer *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FIoChunkDecodingParams *)(*pcVar4)();
      return pFVar8;
    }
  }
  uVar2 = ((this->ChunkInfo).Entry)->BlockOffset;
  pFVar3 = (((this->ChunkInfo).SharedContainer.Object)->BlockSizes).AllocatorInstance.Data;
  if ((int)uVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FIoChunkDecodingParams *)(*pcVar4)();
      return pFVar8;
    }
  }
  (__return_storage_ptr__->EncodedBlockSize).DataPtr = (uint *)(pFVar3 + (ulonglong)uVar2 * 4);
  *(ulonglong *)&(__return_storage_ptr__->EncodedBlockSize).ArrayNum = CONCAT44(uStack_1c,uVar1);
  pTVar10 = FOnDemandChunkInfo::BlockHashes(&this->ChunkInfo,&local_18);
  iVar5 = pTVar10->ArrayNum;
  uVar6 = *(undefined4 *)&pTVar10->field_0xc;
  (__return_storage_ptr__->BlockHash).DataPtr = pTVar10->DataPtr;
  (__return_storage_ptr__->BlockHash).ArrayNum = iVar5;
  *(undefined4 *)&(__return_storage_ptr__->BlockHash).field_0xc = uVar6;
  __return_storage_ptr__->EncodedOffset =
       (ulonglong)
       CONCAT41(CONCAT31(CONCAT21(CONCAT11((this->ChunkRange).OffsetAndLength[0],
                                           (this->ChunkRange).OffsetAndLength[1]),
                                  (this->ChunkRange).OffsetAndLength[2]),
                         (this->ChunkRange).OffsetAndLength[3]),
                (this->ChunkRange).OffsetAndLength[4]);
  return __return_storage_ptr__;
}

