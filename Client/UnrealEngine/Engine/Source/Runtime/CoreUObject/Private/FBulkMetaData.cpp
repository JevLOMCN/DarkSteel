// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FromSerialized @ 141f30610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::BulkData::Private::FBulkMetaData::FromSerialized
          (FArchive *param_1,long64 param_2,FBulkMetaData *param_3,long64 *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  long64 lVar7;
  FString local_98;
  FString local_88;
  long64 local_78;
  undefined1 local_70;
  FBulkMetaResource local_68;
  
  if (((param_1->field_0x28 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                         ,0x116,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  param_3->Data[0] = '\0';
  param_3->Data[1] = '\0';
  param_3->Data[2] = '\0';
  param_3->Data[3] = '\0';
  param_3->Data[4] = '\0';
  param_3->Data[5] = 0xff;
  param_3->Data[6] = 0xff;
  param_3->Data[7] = 0xff;
  param_3->Data[8] = 0xff;
  param_3->Data[9] = 0xff;
  param_3->Data[10] = '\0';
  param_3->Data[0xb] = '\0';
  param_3->Data[0xc] = '\0';
  param_3->Data[0xd] = '\0';
  param_3->Data[0xe] = '\0';
  param_3->Data[0xf] = '\0';
  if ((param_1->field_0x29 & 2) != 0) {
    return false;
  }
  lVar7 = 0;
  local_68.Flags = BULKDATA_None;
  local_68.ElementCount = ___xmm_ffffffffffffffffffffffffffffffff;
  local_68.SizeOnDisk = _UNK_15060db28;
  local_68.Offset = 0xffffffffffffffff;
  local_68.DuplicateFlags = BULKDATA_None;
  local_68.DuplicateSizeOnDisk = ___xmm_ffffffffffffffffffffffffffffffff;
  local_68.DuplicateOffset = _UNK_15060db28;
  Private::operator<<(param_1,&local_68);
  if ((param_1->field_0x29 & 2) == 0) {
    if (0 < local_68.ElementCount) {
      if (param_2 != 0) {
        uVar6 = (ulonglong)(byte)((byte)((ulonglong)local_68.ElementCount >> 0x3f) ^ 1);
        if (-1 < param_2) {
          uVar6 = (ulonglong)local_68.ElementCount >> 0x3f;
        }
        uVar5 = -param_2;
        if (-1 < param_2) {
          uVar5 = param_2;
        }
        if ((uVar6 + 0x7fffffffffffffff) / uVar5 < (ulonglong)local_68.ElementCount) {
          FArchiveState::SetError((FArchiveState *)param_1);
          lVar4 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
          if ((lVar4 == 0) || (*(int *)(lVar4 + 0xb8) != 1)) {
            ::FString::FString(&local_88,L"Unknown");
          }
          else {
            FPackagePath::GetDebugName((FPackagePath *)(lVar4 + 0x3a0),&local_88);
          }
          Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          local_98.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
          goto LAB_141f30730;
        }
        lVar7 = local_68.ElementCount * param_2;
      }
      local_70 = 1;
      local_78 = lVar7;
      SetSize(param_3,lVar7);
    }
    SetOffset(param_3,local_68.Offset);
    *(EBulkDataFlags *)(param_3->Data + 0xc) = local_68.Flags;
    if (((-1 < local_68.ElementCount) &&
        ((ulonglong)*(uint5 *)param_3->Data != local_68.ElementCount * param_2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource.ElementCount < 0 || OutMetaData.GetSize() == Resource.ElementCount * ElementSize"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                           ,0x14a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar6 = (ulonglong)*(uint5 *)(param_3->Data + 5);
    if (0xfffffffffe < uVar6) {
      uVar6 = 0xffffffffffffffff;
    }
    if ((uVar6 != local_68.Offset) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutMetaData.GetOffset() == Resource.Offset",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                           ,0x14b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((*(EBulkDataFlags *)(param_3->Data + 0xc) != local_68.Flags) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutMetaData.GetFlags() == Resource.Flags",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                           ,0x14c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    *param_4 = local_68.DuplicateOffset;
    return true;
  }
  lVar4 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0xb8) != 1)) {
    ::FString::FString(&local_98,L"Unknown");
  }
  else {
    FPackagePath::GetDebugName((FPackagePath *)(lVar4 + 0x3a0),&local_98);
  }
  Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
LAB_141f30730:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetOffsetAndLength @ 141f34f60

FIoOffsetAndLength * __thiscall
UE::BulkData::Private::FBulkMetaData::GetOffsetAndLength
          (FBulkMetaData *this,FIoOffsetAndLength *__return_storage_ptr__)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)*(uint5 *)(this->Data + 5);
  uVar1 = this->Data[3];
  if (0xfffffffffe < uVar6) {
    uVar6 = 0xffffffffffffffff;
  }
  uVar2 = this->Data[4];
  uVar3 = this->Data[2];
  uVar4 = this->Data[1];
  uVar5 = this->Data[0];
  if (CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4),uVar5) != 0) {
    __return_storage_ptr__->OffsetAndLength[4] = (uchar)uVar6;
    __return_storage_ptr__->OffsetAndLength[0] = (uchar)(uVar6 >> 0x20);
    __return_storage_ptr__->OffsetAndLength[1] = (uchar)(uVar6 >> 0x18);
    __return_storage_ptr__->OffsetAndLength[2] = (uchar)(uVar6 >> 0x10);
    __return_storage_ptr__->OffsetAndLength[3] = (uchar)(uVar6 >> 8);
    __return_storage_ptr__->OffsetAndLength[5] = uVar2;
    __return_storage_ptr__->OffsetAndLength[6] = uVar1;
    __return_storage_ptr__->OffsetAndLength[7] = uVar3;
    __return_storage_ptr__->OffsetAndLength[8] = uVar4;
    __return_storage_ptr__->OffsetAndLength[9] = uVar5;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->OffsetAndLength[0] = '\0';
  __return_storage_ptr__->OffsetAndLength[1] = '\0';
  __return_storage_ptr__->OffsetAndLength[2] = '\0';
  __return_storage_ptr__->OffsetAndLength[3] = '\0';
  __return_storage_ptr__->OffsetAndLength[4] = '\0';
  __return_storage_ptr__->OffsetAndLength[5] = '\0';
  __return_storage_ptr__->OffsetAndLength[6] = '\0';
  __return_storage_ptr__->OffsetAndLength[7] = '\0';
  __return_storage_ptr__->OffsetAndLength[8] = '\0';
  __return_storage_ptr__->OffsetAndLength[9] = '\0';
  return __return_storage_ptr__;
}

// SetOffset @ 141f4d510

void __thiscall UE::BulkData::Private::FBulkMetaData::SetOffset(FBulkMetaData *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if (0xfffffffffe < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset <= MaxOffset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\BulkData.h"
                       ,0x16d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar3 = 0x7fffffffffffffff;
  if (-1 < param_1) {
    lVar3 = param_1;
  }
  this->Data[5] = (uchar)lVar3;
  this->Data[6] = (uchar)((ulonglong)lVar3 >> 8);
  this->Data[7] = (uchar)((ulonglong)lVar3 >> 0x10);
  this->Data[9] = (uchar)((ulonglong)lVar3 >> 0x20);
  this->Data[8] = (uchar)((ulonglong)lVar3 >> 0x18);
  return;
}

// SetSize @ 141f4d690

void __thiscall UE::BulkData::Private::FBulkMetaData::SetSize(FBulkMetaData *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffffff < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size <= MaxSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\BulkData.h"
                       ,0x151,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Data[0] = (uchar)param_1;
  this->Data[1] = (uchar)((ulonglong)param_1 >> 8);
  this->Data[2] = (uchar)((ulonglong)param_1 >> 0x10);
  this->Data[4] = (uchar)((ulonglong)param_1 >> 0x20);
  this->Data[3] = (uchar)((ulonglong)param_1 >> 0x18);
  return;
}

