// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 46

// FBulkData @ 141f20aa0

FBulkData * __thiscall FBulkData::FBulkData(FBulkData *this,FBulkData *param_1)

{
  (this->DataAllocation).Allocation.RawData = (void *)0x0;
  (this->BulkMeta).Data[0] = '\0';
  (this->BulkMeta).Data[1] = '\0';
  (this->BulkMeta).Data[2] = '\0';
  (this->BulkMeta).Data[3] = '\0';
  (this->BulkMeta).Data[4] = '\0';
  (this->BulkMeta).Data[5] = '\0';
  (this->BulkMeta).Data[6] = '\0';
  (this->BulkMeta).Data[7] = '\0';
  (this->BulkMeta).Data[8] = '\0';
  (this->BulkMeta).Data[9] = '\0';
  (this->BulkMeta).Data[10] = '\0';
  (this->BulkMeta).Data[0xb] = '\0';
  (this->BulkMeta).Data[0xc] = '\0';
  (this->BulkMeta).Data[0xd] = '\0';
  (this->BulkMeta).Data[0xe] = '\0';
  (this->BulkMeta).Data[0xf] = '\0';
  (this->BulkMeta).Data[5] = 0xff;
  (this->BulkMeta).Data[6] = 0xff;
  (this->BulkMeta).Data[7] = 0xff;
  (this->BulkMeta).Data[8] = 0xff;
  (this->BulkMeta).Data[9] = 0xff;
  *(undefined8 *)(this->BulkChunkId).Id = FIoChunkId::InvalidChunkId.Id._0_8_;
  *(undefined4 *)((this->BulkChunkId).Id + 8) = FIoChunkId::InvalidChunkId.Id._8_4_;
  operator=(this,param_1);
  return this;
}

// ~FBulkData @ 141f23700

void __thiscall FBulkData::~FBulkData(FBulkData *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->BulkMeta).Data[0xb] != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsUnlocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x26b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FAllocatedPtr::Free(&this->DataAllocation,this);
  return;
}

// operator= @ 141f23f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f240ed) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FBulkData * __thiscall FBulkData::operator=(FBulkData *this,FBulkData *param_1)

{
  uchar *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint5 uVar5;
  bool bVar6;
  FBulkData *pFVar7;
  FIoDispatcher *this_00;
  FOwnedBulkDataPtr *pFVar8;
  void *_Src;
  void *_Dst;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  FIoReadOptions local_78;
  IMappedFileHandle *local_58;
  IMappedFileRegion *pIStack_50;
  undefined1 local_48 [24];
  IMappedFileRegion *pIStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((this->BulkMeta).Data[0xb] != '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsUnlocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                         ,0x285,L"Attempting to modify a BulkData object that is locked"), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FBulkData *)(*pcVar3)();
    return pFVar7;
  }
  if (((param_1->BulkMeta).Data[0xb] == '\x02') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Other.BulkMeta.GetLockStatus() != LOCKSTATUS_ReadWriteLock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                         ,0x286,
                         L"Attempting to read from a BulkData object that is locked for write"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FBulkData *)(*pcVar3)();
    return pFVar7;
  }
  if (((this->BulkMeta).Data[0xb] != '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsUnlocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                         ,0x41b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FBulkData *)(*pcVar3)();
    return pFVar7;
  }
  (this->BulkMeta).Data[0] = '\0';
  (this->BulkMeta).Data[1] = '\0';
  (this->BulkMeta).Data[2] = '\0';
  (this->BulkMeta).Data[3] = '\0';
  (this->BulkMeta).Data[4] = '\0';
  FAllocatedPtr::Free(&this->DataAllocation,this);
  puVar1 = (this->BulkMeta).Data + 0xc;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffbffff;
  uVar4 = *(undefined8 *)((param_1->BulkMeta).Data + 8);
  *(undefined8 *)(this->BulkMeta).Data = *(undefined8 *)(param_1->BulkMeta).Data;
  *(undefined8 *)((this->BulkMeta).Data + 8) = uVar4;
  *(undefined8 *)(this->BulkChunkId).Id = *(undefined8 *)(param_1->BulkChunkId).Id;
  *(undefined4 *)((this->BulkChunkId).Id + 8) = *(undefined4 *)((param_1->BulkChunkId).Id + 8);
  uVar2 = *(uint *)((param_1->BulkMeta).Data + 0xc);
  if ((uVar2 >> 0x1e & 1) == 0) {
    _Src = (param_1->DataAllocation).Allocation.RawData;
  }
  else {
    if ((uVar2 >> 8 & 1) != 0) {
      uVar5 = *(uint5 *)(this->BulkMeta).Data;
      uVar9 = (ulonglong)*(uint5 *)((this->BulkMeta).Data + 5);
      this_00 = FIoDispatcher::Get();
      if (0xfffffffffe < uVar9) {
        uVar9 = 0xffffffffffffffff;
      }
      local_78.TargetVa = (void *)0x0;
      local_78.Flags = None;
      local_78.RequestedOffset = uVar9;
      local_78.RequestedSize = (ulonglong)uVar5;
      FIoDispatcher::OpenMapped
                (this_00,(TIoStatusOr<FIoMappedRegion> *)local_48,&this->BulkChunkId,&local_78);
      if (local_48._8_4_ == Ok) {
        FIoStatus::operator=((FIoStatus *)local_48,&FIoStatus::Unknown);
        local_58 = (IMappedFileHandle *)local_48._16_8_;
        pIStack_50 = pIStack_30;
        FIoStatus::operator=((FIoStatus *)local_48,Unknown);
        FIoStatus::~FIoStatus((FIoStatus *)local_48);
        if (((this->DataAllocation).Allocation.RawData != (void *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Allocation.MemoryMappedData == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                               ,0x1b3,
                               L"Trying to assign a BulkData object without freeing it first!"),
           bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FBulkData *)(*pcVar3)();
          return pFVar7;
        }
        pFVar8 = ::operator_new(0x18);
        if (pFVar8 != (FOwnedBulkDataPtr *)0x0) {
          pFVar8->AllocatedData = (void *)0x0;
          pFVar8->MappedHandle = local_58;
          pFVar8->MappedRegion = pIStack_50;
          (this->DataAllocation).Allocation.MemoryMappedData = pFVar8;
          puVar1 = (this->BulkMeta).Data + 0xc;
          *(uint *)puVar1 = *(uint *)puVar1 | 0x40000000;
          return this;
        }
        (this->DataAllocation).Allocation.RawData = (void *)0x0;
        puVar1 = (this->BulkMeta).Data + 0xc;
        *(uint *)puVar1 = *(uint *)puVar1 | 0x40000000;
        return this;
      }
      FIoStatus::operator=((FIoStatus *)local_48,Unknown);
      FIoStatus::~FIoStatus((FIoStatus *)local_48);
      return this;
    }
    pFVar8 = (param_1->DataAllocation).Allocation.MemoryMappedData;
    if (pFVar8 == (FOwnedBulkDataPtr *)0x0) {
      return this;
    }
    _Src = FOwnedBulkDataPtr::GetPointer(pFVar8);
  }
  if (_Src != (void *)0x0) {
    _Dst = ReallocateData(this,(ulonglong)*(uint5 *)(this->BulkMeta).Data);
    memcpy(_Dst,_Src,(ulonglong)*(uint5 *)(this->BulkMeta).Data);
  }
  return this;
}

// CanDiscardInternalData @ 141f2a6a0

bool __thiscall FBulkData::CanDiscardInternalData(FBulkData *this)

{
  if ((((*(uint *)((this->BulkMeta).Data + 0xc) & 0x10000008) == 0) &&
      (*(longlong *)(this->BulkChunkId).Id == FIoChunkId::InvalidChunkId.Id._0_8_)) &&
     (*(int *)((this->BulkChunkId).Id + 8) == FIoChunkId::InvalidChunkId.Id._8_4_)) {
    return false;
  }
  return true;
}

// CanLoadFromDisk @ 141f2a770

bool __thiscall FBulkData::CanLoadFromDisk(FBulkData *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(this->BulkChunkId).Id - FIoChunkId::InvalidChunkId.Id._0_8_;
  if (lVar1 == 0) {
    lVar1 = (ulonglong)*(uint *)((this->BulkChunkId).Id + 8) -
            (ulonglong)(uint)FIoChunkId::InvalidChunkId.Id._8_4_;
  }
  return lVar1 != 0;
}

// ClearBulkDataFlags @ 141f2b350

void __thiscall FBulkData::ClearBulkDataFlags(FBulkData *this,uint param_1)

{
  uchar *puVar1;
  
  puVar1 = (this->BulkMeta).Data + 0xc;
  *(uint *)puVar1 = *(uint *)puVar1 & ~param_1;
  return;
}

// ClearBulkDataFlagsOn @ 141f2b360

/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */

void __cdecl FBulkData::ClearBulkDataFlagsOn(EBulkDataFlags *param_1,EBulkDataFlags param_2)

{
  *param_1 = *param_1 & ~param_2;
  return;
}

// CreateChunkId @ 141f2b700

FIoChunkId * __thiscall FBulkData::CreateChunkId(FBulkData *this,FIoChunkId *__return_storage_ptr__)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((this->BulkChunkId).Id + 8);
  *(undefined8 *)__return_storage_ptr__->Id = *(undefined8 *)(this->BulkChunkId).Id;
  *(undefined4 *)(__return_storage_ptr__->Id + 8) = uVar1;
  return __return_storage_ptr__;
}

// CreateStreamingRequest @ 141f2c520

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

IBulkDataIORequest * __thiscall
FBulkData::CreateStreamingRequest
          (FBulkData *this,EAsyncIOPriorityAndFlags param_1,
          TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *param_2,uchar *param_3)

{
  IBulkDataIORequest IVar1;
  TUniquePtr<IBulkDataIORequest,TDefaultDelete<IBulkDataIORequest>_> TVar2;
  ulonglong uVar3;
  undefined8 *local_res8;
  undefined4 in_stack_ffffffffffffffe4;
  
  uVar3 = (ulonglong)*(uint5 *)((this->BulkMeta).Data + 5);
  if (0xfffffffffe < uVar3) {
    uVar3 = 0xffffffffffffffff;
  }
  TVar2 = UE::BulkData::Private::CreateStreamingRequest
                    ((FBulkMetaData *)&local_res8,(FIoChunkId *)&this->BulkMeta,
                     (long64)&this->BulkChunkId,uVar3,
                     (EAsyncIOPriorityAndFlags)*(undefined5 *)(this->BulkMeta).Data,
                     (TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *)
                     CONCAT44(in_stack_ffffffffffffffe4,param_1),(uchar *)param_2);
  IVar1 = *TVar2.Ptr;
  *TVar2.Ptr = (IBulkDataIORequest)0x0;
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return (IBulkDataIORequest *)IVar1;
}

// CreateStreamingRequest @ 141f2c610

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

IBulkDataIORequest * __thiscall
FBulkData::CreateStreamingRequest
          (FBulkData *this,long64 param_1,long64 param_2,EAsyncIOPriorityAndFlags param_3,
          TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *param_4,uchar *param_5)

{
  IBulkDataIORequest IVar1;
  TUniquePtr<IBulkDataIORequest,TDefaultDelete<IBulkDataIORequest>_> TVar2;
  ulonglong uVar3;
  undefined8 *local_res8 [4];
  undefined4 in_stack_ffffffffffffffe4;
  
  uVar3 = (ulonglong)*(uint5 *)((this->BulkMeta).Data + 5);
  if (0xfffffffffe < uVar3) {
    uVar3 = 0xffffffffffffffff;
  }
  TVar2 = UE::BulkData::Private::CreateStreamingRequest
                    ((FBulkMetaData *)local_res8,(FIoChunkId *)&this->BulkMeta,
                     (long64)&this->BulkChunkId,uVar3 + param_1,(EAsyncIOPriorityAndFlags)param_2,
                     (TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *)
                     CONCAT44(in_stack_ffffffffffffffe4,param_3),(uchar *)param_4);
  IVar1 = *TVar2.Ptr;
  *TVar2.Ptr = (IBulkDataIORequest)0x0;
  if (local_res8[0] != (undefined8 *)0x0) {
    (**(code **)*local_res8[0])(local_res8[0],1);
  }
  return (IBulkDataIORequest *)IVar1;
}

// DoesExist @ 141f2daf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FBulkData::DoesExist(FBulkData *this)

{
  bool bVar1;
  FIoDispatcher *this_00;
  FIoOffsetAndLength *pFVar2;
  undefined1 auStack_48 [32];
  FIoOffsetAndLength local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  this_00 = FIoDispatcher::Get();
  pFVar2 = UE::BulkData::Private::FBulkMetaData::GetOffsetAndLength(&this->BulkMeta,&local_28);
  bVar1 = FIoDispatcher::DoesChunkExist(this_00,&this->BulkChunkId,pFVar2);
  return bVar1;
}

// DumpBulkDataUsage @ 141f2dfc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FBulkData::DumpBulkDataUsage(FOutputDevice *param_1)

{
  if (4 < (byte)LogSerialization._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    return;
  }
  return;
}

// ForceBulkDataResident @ 141f2fc70

void __thiscall FBulkData::ForceBulkDataResident(FBulkData *this)

{
  bool bVar1;
  void *pvVar2;
  FIoBuffer FVar3;
  ulonglong uVar4;
  FIoBuffer FStackX_8;
  
  if (((this->DataAllocation).Allocation.RawData == (void *)0x0) &&
     (uVar4 = (ulonglong)*(uint5 *)(this->BulkMeta).Data, uVar4 != 0)) {
    pvVar2 = ReallocateData(this,uVar4);
    FVar3.CorePtr.Reference =
         (TRefCountPtr<FIoBuffer::BufCore>)FIoBuffer::FIoBuffer(&FStackX_8,Wrap,pvVar2,uVar4);
    bVar1 = TryLoadDataIntoMemory(this,FVar3);
    if (!bVar1) {
      FAllocatedPtr::Free(&this->DataAllocation,this);
    }
  }
  return;
}

// GetBulkDataAlignment @ 141f33290

uint __thiscall FBulkData::GetBulkDataAlignment(FBulkData *this)

{
  return 0;
}

// GetBulkDataFlags @ 141f332a0

uint __thiscall FBulkData::GetBulkDataFlags(FBulkData *this)

{
  return *(uint *)((this->BulkMeta).Data + 0xc);
}

// GetBulkDataOffsetInFile @ 141f332b0

long64 __thiscall FBulkData::GetBulkDataOffsetInFile(FBulkData *this)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*(uint5 *)((this->BulkMeta).Data + 5);
  if (0xfffffffffe < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}

// GetBulkDataSize @ 141f33310

long64 __thiscall FBulkData::GetBulkDataSize(FBulkData *this)

{
  return (ulonglong)*(uint5 *)(this->BulkMeta).Data;
}

// GetBulkDataSizeOnDisk @ 141f33350

long64 __thiscall FBulkData::GetBulkDataSizeOnDisk(FBulkData *this)

{
  return (ulonglong)*(uint5 *)(this->BulkMeta).Data;
}

// GetBulkDataVersions @ 141f33390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBulkData::GetBulkDataVersions
          (FBulkData *this,FArchive *param_1,FPackageFileVersion *param_2,int *param_3,
          FCustomVersionContainer *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IPackageResourceManager *pIVar5;
  FString *pFVar6;
  FCustomVersionContainer *pFVar7;
  undefined1 auStack_218 [32];
  bool local_1f8;
  EPackageSegment local_1f7 [7];
  FArchive *local_1f0;
  FName local_1e8 [2];
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  FString local_1c8;
  FPackageFileSummary local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1e8[0].ComparisonIndex.Value = 0;
  local_1e8[0].Number = 0;
  bVar4 = UE::TryGetPackageNameFromChunkId(&this->BulkChunkId,local_1e8,local_1f7,&local_1f8);
  if (bVar4) {
    pIVar5 = IPackageResourceManager::Get();
    pcVar2 = *(code **)((longlong)*pIVar5 + 0x48);
    pFVar6 = ::FName::ToString(local_1e8,&local_1c8);
    local_1d8 = (pFVar6->Data).AllocatorInstance.Data;
    iVar1 = (pFVar6->Data).ArrayNum;
    iStack_1d0 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_1d0 = 0;
    }
    (*pcVar2)(pIVar5,&local_1f0,0,&local_1d8);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (local_1f0 != (FArchive *)0x0) {
      FPackageFileSummary::FPackageFileSummary(&local_1b8);
      ::operator<<(local_1f0,&local_1b8);
      if (((local_1f0->field_0x29 & 2) == 0) && (local_1b8.Tag == -0x61d57c3f)) {
        *param_2 = local_1b8.FileVersionUE;
        *param_3 = local_1b8.FileVersionLicenseeUE;
        FCustomVersionContainer::operator=(param_4,&local_1b8.CustomVersionContainer);
        FPackageFileSummary::~FPackageFileSummary(&local_1b8);
        if (local_1f0 == (FArchive *)0x0) {
          return;
        }
        (*(code *)**(undefined8 **)local_1f0)(local_1f0,1);
        return;
      }
      if (local_1b8.ChunkIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.ChunkIDs.AllocatorInstance.Data);
      }
      if (local_1b8.CompatibleWithEngineVersion.Branch.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.CompatibleWithEngineVersion.Branch.Data.AllocatorInstance.Data);
      }
      if (local_1b8.SavedByEngineVersion.Branch.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.SavedByEngineVersion.Branch.Data.AllocatorInstance.Data);
      }
      if (local_1b8.Generations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Generations.AllocatorInstance.Data);
      }
      if (local_1b8.LocalizationId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.LocalizationId.Data.AllocatorInstance.Data);
      }
      if (local_1b8.PackageName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.PackageName.Data.AllocatorInstance.Data);
      }
      if (local_1b8.CustomVersionContainer.Versions.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.CustomVersionContainer.Versions.AllocatorInstance.Data);
      }
    }
    if (local_1f0 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_1f0)(local_1f0,1);
    }
  }
  uVar3 = *(undefined4 *)&param_1->field_0x44;
  param_2->FileVersionUE4 = *(undefined4 *)&param_1->field_0x40;
  param_2->FileVersionUE5 = uVar3;
  *param_3 = *(int *)&param_1->field_0x48;
  pFVar7 = (FCustomVersionContainer *)(**(code **)(*(longlong *)param_1 + 0x60))(param_1);
  FCustomVersionContainer::operator=(param_4,pFVar7);
  return;
}

// GetCopy @ 141f33a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBulkData::GetCopy(FBulkData *this,void **param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  IMappedFileRegion *pIVar4;
  IMappedFileHandle *pIVar5;
  code *pcVar6;
  bool bVar7;
  FOwnedBulkDataPtr *pFVar8;
  void *pvVar9;
  TIoStatusOr<unsigned_char_*> *this_00;
  uchar *puVar10;
  FIoBuffer this_01;
  ulonglong _Size;
  undefined1 auStack_78 [32];
  TRefCountPtr<FIoBuffer::BufCore> local_58;
  FIoBuffer local_50;
  FIoBuffer local_48;
  TRefCountPtr<FIoBuffer::BufCore> local_40;
  TIoStatusOr<unsigned_char_*> local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (((this->BulkMeta).Data[0xb] != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsUnlocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                         ,0x36a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_1 == (void **)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                         ,0x36b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar8 = (this->DataAllocation).Allocation.MemoryMappedData;
  _Size = (ulonglong)*(uint5 *)(this->BulkMeta).Data;
  if (*param_1 == (void *)0x0) {
    if (pFVar8 == (FOwnedBulkDataPtr *)0x0) {
      if (_Size != 0) {
        FIoBuffer::FIoBuffer(&local_50,_Size);
        local_40 = local_50.CorePtr.Reference;
        if (local_50.CorePtr.Reference != (BufCore *)0x0) {
          LOCK();
          *(int *)((longlong)local_50.CorePtr.Reference + 0xc) =
               *(int *)((longlong)local_50.CorePtr.Reference + 0xc) + 1;
          UNLOCK();
        }
        bVar7 = TryLoadDataIntoMemory(this,(FIoBuffer)&local_40);
        this_01.CorePtr.Reference = local_50.CorePtr.Reference;
        if (bVar7) {
          this_00 = FIoBuffer::Release(&local_50,&local_38);
          puVar10 = TIoStatusOr<unsigned_char_*>::ConsumeValueOrDie(this_00);
          *param_1 = puVar10;
          FIoStatus::operator=(&local_38.StatusValue,Unknown);
          FIoStatus::~FIoStatus(&local_38.StatusValue);
          this_01.CorePtr.Reference = local_50.CorePtr.Reference;
        }
        goto LAB_141f33daf;
      }
    }
    else {
      if ((param_2) &&
         (((uVar3 = *(uint *)((this->BulkMeta).Data + 0xc), (uVar3 & 0x10000008) != 0 ||
           (*(longlong *)(this->BulkChunkId).Id != FIoChunkId::InvalidChunkId.Id._0_8_)) ||
          (*(int *)((this->BulkChunkId).Id + 8) != FIoChunkId::InvalidChunkId.Id._8_4_)))) {
        if ((uVar3 >> 0x1e & 1) == 0) {
          *param_1 = pFVar8;
          (this->DataAllocation).Allocation.RawData = (void *)0x0;
          return;
        }
        pvVar9 = FMemory::Malloc(_Size,0);
        *param_1 = pvVar9;
        pvVar9 = FOwnedBulkDataPtr::GetPointer((this->DataAllocation).Allocation.MemoryMappedData);
        memcpy(*param_1,pvVar9,_Size);
        pFVar8 = (this->DataAllocation).Allocation.MemoryMappedData;
        if (pFVar8 == (FOwnedBulkDataPtr *)0x0) goto LAB_141f33cc3;
        if (pFVar8->AllocatedData == (void *)0x0) {
          pIVar4 = pFVar8->MappedRegion;
          if (pIVar4 == (IMappedFileRegion *)0x0) {
            if (pFVar8->MappedHandle == (IMappedFileHandle *)0x0) goto LAB_141f33cb6;
          }
          else {
            (**(code **)pIVar4->_padding_)(pIVar4,1);
          }
          pIVar5 = pFVar8->MappedHandle;
          if (pIVar5 != (IMappedFileHandle *)0x0) {
            (**(code **)pIVar5->_padding_)(pIVar5,1);
          }
        }
        else {
          FMemory::Free(pFVar8->AllocatedData);
        }
LAB_141f33cb6:
        ::operator_delete(pFVar8,0x18);
LAB_141f33cc3:
        (this->DataAllocation).Allocation.RawData = (void *)0x0;
        puVar10 = (this->BulkMeta).Data + 0xc;
        *(uint *)puVar10 = *(uint *)puVar10 & 0xbfffffff;
        return;
      }
      if (_Size != 0) {
        pvVar9 = FMemory::Malloc(_Size,0);
        *param_1 = pvVar9;
        if ((*(uint *)((this->BulkMeta).Data + 0xc) & 0x40000000) == 0) {
          memcpy(*param_1,(this->DataAllocation).Allocation.RawData,_Size);
          return;
        }
        pFVar8 = (this->DataAllocation).Allocation.MemoryMappedData;
        if (pFVar8 != (FOwnedBulkDataPtr *)0x0) {
          pvVar9 = FOwnedBulkDataPtr::GetPointer(pFVar8);
          memcpy(*param_1,pvVar9,_Size);
          return;
        }
        memcpy(*param_1,(void *)0x0,_Size);
        return;
      }
    }
    *param_1 = (void *)0x0;
  }
  else {
    if (pFVar8 != (FOwnedBulkDataPtr *)0x0) {
      if ((*(uint *)((this->BulkMeta).Data + 0xc) & 0x40000000) != 0) {
        pFVar8 = FOwnedBulkDataPtr::GetPointer(pFVar8);
      }
      memcpy(*param_1,pFVar8,_Size);
      if (!param_2) {
        return;
      }
      if ((((*(uint *)((this->BulkMeta).Data + 0xc) & 0x10000008) == 0) &&
          (*(longlong *)(this->BulkChunkId).Id == FIoChunkId::InvalidChunkId.Id._0_8_)) &&
         (*(int *)((this->BulkChunkId).Id + 8) == FIoChunkId::InvalidChunkId.Id._8_4_)) {
        return;
      }
      if (2 < (byte)LogSerialization._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      }
      FAllocatedPtr::Free(&this->DataAllocation,this);
      return;
    }
    FIoBuffer::FIoBuffer(&local_48,Wrap,*param_1,_Size);
    local_58 = local_48.CorePtr.Reference;
    if (local_48.CorePtr.Reference != (BufCore *)0x0) {
      LOCK();
      *(int *)((longlong)local_48.CorePtr.Reference + 0xc) =
           *(int *)((longlong)local_48.CorePtr.Reference + 0xc) + 1;
      UNLOCK();
    }
    TryLoadDataIntoMemory(this,(FIoBuffer)&local_58);
    this_01.CorePtr.Reference = local_48.CorePtr.Reference;
LAB_141f33daf:
    if (this_01.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)this_01.CorePtr.Reference);
      LOCK();
      piVar1 = &((BufCore *)this_01.CorePtr.Reference)->NumRefs;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)this_01.CorePtr.Reference);
        ::operator_delete((void *)this_01.CorePtr.Reference,0x20);
      }
    }
  }
  return;
}

// GetDebugName @ 141f346a0

FString * __thiscall FBulkData::GetDebugName(FBulkData *this,FString *__return_storage_ptr__)

{
  ::LexToString(__return_storage_ptr__,&this->BulkChunkId);
  return __return_storage_ptr__;
}

// GetDecompressionFormat @ 141f347b0

FName __thiscall FBulkData::GetDecompressionFormat(FBulkData *this)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  FName in_RDX;
  undefined1 local_res8 [32];
  
  if (((this->BulkMeta).Data[0xc] & 2) == 0) {
    *(undefined4 *)in_RDX = 0;
    *(undefined4 *)((longlong)in_RDX + 4) = 0;
    return in_RDX;
  }
  FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
  *(undefined4 *)in_RDX = *(undefined4 *)CONCAT44(extraout_var,FVar1.Value);
  *(undefined4 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// GetDecompressionFormat @ 141f34800

/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */

FName __cdecl FBulkData::GetDecompressionFormat(EBulkDataFlags param_1)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  uint in_register_0000000c;
  FName FVar2;
  ulonglong in_RDX;
  undefined1 local_res10 [24];
  
  FVar2.Number = in_register_0000000c;
  FVar2.ComparisonIndex.Value = param_1;
  if ((in_RDX & 2) == 0) {
    *(undefined4 *)FVar2 = 0;
    *(undefined4 *)((longlong)FVar2 + 4) = 0;
    return FVar2;
  }
  FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
  *(undefined4 *)FVar2 = *(undefined4 *)CONCAT44(extraout_var,FVar1.Value);
  *(undefined4 *)((longlong)FVar2 + 4) = 0;
  return FVar2;
}

// HasFlags @ 141f370c0

/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */

bool __cdecl FBulkData::HasFlags(EBulkDataFlags param_1,EBulkDataFlags param_2)

{
  return (param_1 & param_2) == param_2;
}

// IsAsyncLoadingComplete @ 141f39f10

bool __thiscall FBulkData::IsAsyncLoadingComplete(FBulkData *this)

{
  return true;
}

// IsAvailableForUse @ 141f3a060

bool __thiscall FBulkData::IsAvailableForUse(FBulkData *this)

{
  return (bool)(~(byte)(*(uint *)((this->BulkMeta).Data + 0xc) >> 5) & 1);
}

// IsBulkDataLoaded @ 141f3a080

bool __thiscall FBulkData::IsBulkDataLoaded(FBulkData *this)

{
  return (this->DataAllocation).Allocation.RawData != (void *)0x0;
}

// IsStoredCompressedOnDisk @ 141f3a570

bool __thiscall FBulkData::IsStoredCompressedOnDisk(FBulkData *this)

{
  return (bool)((byte)(*(uint *)((this->BulkMeta).Data + 0xc) >> 1) & 1);
}

// Lock @ 141f3e080

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FBulkData::Lock(FBulkData *this,uint param_1)

{
  uchar *puVar1;
  FOwnedBulkDataPtr *this_00;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  if ((this->BulkMeta).Data[0xb] != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsUnlocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x3c0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  MakeSureBulkDataIsLoaded(this);
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) == 0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    }
    else {
      (this->BulkMeta).Data[0xb] = '\x01';
      if ((*(uint *)((this->BulkMeta).Data + 0xc) & 0x40000000) == 0) goto LAB_141f3e0dd;
      this_00 = (this->DataAllocation).Allocation.MemoryMappedData;
      if (this_00 != (FOwnedBulkDataPtr *)0x0) {
        pvVar4 = FOwnedBulkDataPtr::GetPointer(this_00);
        return pvVar4;
      }
    }
  }
  else {
    (this->BulkMeta).Data[0xb] = '\x02';
    puVar1 = (this->BulkMeta).Data + 0xc;
    *(uint *)puVar1 = *(uint *)puVar1 & 0xfffbffff;
    if ((*(uint *)((this->BulkMeta).Data + 0xc) & 0x40000000) == 0) {
LAB_141f3e0dd:
      return (this->DataAllocation).Allocation.RawData;
    }
  }
  return (void *)0x0;
}

// LockReadOnly @ 141f3e140

void * __thiscall FBulkData::LockReadOnly(FBulkData *this)

{
  FOwnedBulkDataPtr *this_00;
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((this->BulkMeta).Data[0xb] != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsUnlocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x3e5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  MakeSureBulkDataIsLoaded(this);
  (this->BulkMeta).Data[0xb] = '\x01';
  if ((*(uint *)((this->BulkMeta).Data + 0xc) & 0x40000000) == 0) {
    return (this->DataAllocation).Allocation.RawData;
  }
  this_00 = (this->DataAllocation).Allocation.MemoryMappedData;
  if (this_00 != (FOwnedBulkDataPtr *)0x0) {
    pvVar3 = FOwnedBulkDataPtr::GetPointer(this_00);
    return pvVar3;
  }
  return (void *)0x0;
}

// MakeSureBulkDataIsLoaded @ 141f3e590

void __thiscall FBulkData::MakeSureBulkDataIsLoaded(FBulkData *this)

{
  bool bVar1;
  void *pvVar2;
  FIoBuffer FVar3;
  ulonglong uVar4;
  FIoBuffer local_res8;
  
  if (((this->DataAllocation).Allocation.RawData == (void *)0x0) &&
     (uVar4 = (ulonglong)*(uint5 *)(this->BulkMeta).Data, uVar4 != 0)) {
    pvVar2 = ReallocateData(this,uVar4);
    FVar3.CorePtr.Reference =
         (TRefCountPtr<FIoBuffer::BufCore>)FIoBuffer::FIoBuffer(&local_res8,Wrap,pvVar2,uVar4);
    bVar1 = TryLoadDataIntoMemory(this,FVar3);
    if (!bVar1) {
      FAllocatedPtr::Free(&this->DataAllocation,this);
    }
  }
  return;
}

// NeedsOffsetFixup @ 141f3ea30

bool __thiscall FBulkData::NeedsOffsetFixup(FBulkData *this)

{
  return (bool)(((this->BulkMeta).Data[0xe] ^ 0xff) & 1);
}

// OpenAsyncReadHandle @ 141f3f550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f3f5c5) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

IAsyncReadFileHandle * __thiscall FBulkData::OpenAsyncReadHandle(FBulkData *this)

{
  ulong64 uVar1;
  FIoDispatcher *this_00;
  FIoOffsetAndLength *pFVar2;
  FChunkReadFileHandle *this_01;
  uchar auVar3 [8];
  uchar auVar4 [8];
  TTypeCompatibleBytes<unsigned___int64> TVar5;
  undefined1 auStackY_88 [32];
  ulong64 local_58;
  TIoStatusOr<unsigned___int64> local_50;
  FIoOffsetAndLength local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  auVar3[0] = '\0';
  auVar3[1] = '\0';
  auVar3[2] = '\0';
  auVar3[3] = '\0';
  auVar3[4] = '\0';
  auVar3[5] = '\0';
  auVar3[6] = '\0';
  auVar3[7] = '\0';
  local_58 = 0;
  this_00 = FIoDispatcher::Get();
  pFVar2 = UE::BulkData::Private::FBulkMetaData::GetOffsetAndLength(&this->BulkMeta,&local_38);
  FIoDispatcher::GetSizeForChunk(this_00,&local_50,&this->BulkChunkId,pFVar2,&local_58);
  uVar1 = local_58;
  TVar5.Pad = auVar3;
  if (local_50.StatusValue.ErrorCode == Ok) {
    TVar5.Pad = local_50.Value.Pad;
  }
  if ((*(longlong *)(this->BulkChunkId).Id != FIoChunkId::InvalidChunkId.Id._0_8_) ||
     (*(int *)((this->BulkChunkId).Id + 8) != FIoChunkId::InvalidChunkId.Id._8_4_)) {
    pFVar2 = UE::BulkData::Private::FBulkMetaData::GetOffsetAndLength(&this->BulkMeta,&local_38);
    this_01 = ::operator_new(0x30);
    if (this_01 != (FChunkReadFileHandle *)0x0) {
      auVar3 = (uchar  [8])
               UE::BulkData::Private::FChunkReadFileHandle::FChunkReadFileHandle
                         (this_01,&this->BulkChunkId,pFVar2,TVar5.Pad,uVar1);
    }
  }
  FIoStatus::operator=(&local_50.StatusValue,Unknown);
  FIoStatus::~FIoStatus(&local_50.StatusValue);
  auVar4[0] = auVar3[0];
  auVar4[1] = auVar3[1];
  auVar4[2] = auVar3[2];
  auVar4[3] = auVar3[3];
  auVar4[4] = auVar3[4];
  auVar4[5] = auVar3[5];
  auVar4[6] = auVar3[6];
  auVar4[7] = auVar3[7];
  return (IAsyncReadFileHandle *)auVar4;
}

// Realloc @ 141f41bc0

void * __thiscall FBulkData::Realloc(FBulkData *this,long64 param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  ulong64 uVar5;
  
  if ((this->BulkMeta).Data[0xb] == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x3f4,L"BulkData must be locked for \'write\' before reallocating!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((*(longlong *)(this->BulkChunkId).Id != FIoChunkId::InvalidChunkId.Id._0_8_) ||
     (*(int *)((this->BulkChunkId).Id + 8) != FIoChunkId::InvalidChunkId.Id._8_4_)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CanLoadFromDisk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x3f6,
                       L"Cannot re-allocate a FBulkDataBase object that represents a file on disk!")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if (*(int *)((this->BulkMeta).Data + 0xc) < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsUsingIODispatcher()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x3fa,L"Attempting to re-allocate data loaded from the IoDispatcher");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  uVar5 = param_1 * param_2;
  if (0xffffffffff < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BulkDataSize <= MaxBulkDataSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x3fd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  UE::BulkData::Private::FBulkMetaData::SetSize(&this->BulkMeta,uVar5);
  if ((*(uint *)((this->BulkMeta).Data + 0xc) & 0x40000000) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Owner->IsDataMemoryMapped()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x1a3,
                       L"Trying to reallocate a memory mapped BulkData object without freeing it first!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pvVar4 = FMemory::Realloc((this->DataAllocation).Allocation.RawData,uVar5,0);
  (this->DataAllocation).Allocation.RawData = pvVar4;
  pvVar3 = (void *)0x0;
  if ((*(uint *)((this->BulkMeta).Data + 0xc) & 0x40000000) == 0) {
    pvVar3 = pvVar4;
  }
  return pvVar3;
}

// ReallocateData @ 141f41da0

void * __thiscall FBulkData::ReallocateData(FBulkData *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((*(uint *)((this->BulkMeta).Data + 0xc) & 0x40000000) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Owner->IsDataMemoryMapped()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x1a3,
                       L"Trying to reallocate a memory mapped BulkData object without freeing it first!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pvVar3 = FMemory::Realloc((this->DataAllocation).Allocation.RawData,param_1,0);
  (this->DataAllocation).Allocation.RawData = pvVar3;
  return pvVar3;
}

// RemoveBulkData @ 141f43910

void __thiscall FBulkData::RemoveBulkData(FBulkData *this)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->BulkMeta).Data[0xb] != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsUnlocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x41b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->BulkMeta).Data[0] = '\0';
  (this->BulkMeta).Data[1] = '\0';
  (this->BulkMeta).Data[2] = '\0';
  (this->BulkMeta).Data[3] = '\0';
  (this->BulkMeta).Data[4] = '\0';
  FAllocatedPtr::Free(&this->DataAllocation,this);
  puVar1 = (this->BulkMeta).Data + 0xc;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffbffff;
  return;
}

// ResetBulkDataFlags @ 141f43ca0

void __thiscall FBulkData::ResetBulkDataFlags(FBulkData *this,uint param_1)

{
  *(uint *)((this->BulkMeta).Data + 0xc) = param_1;
  return;
}

// Serialize @ 141f43fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */

void __thiscall
FBulkData::Serialize
          (FBulkData *this,FArchive *param_1,UObject *param_2,bool param_3,int param_4,
          EFileRegionType param_5)

{
  int *piVar1;
  EBulkDataFlags EVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FBulkData::Serialize(FArchive_&,UObject_*,bool,int,EFileRegionType)_::_2_::FStat_STAT_UBD_Serialize>
  FVar11;
  void *pvVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  ulonglong uVar16;
  FName local_res8;
  LARGE_INTEGER local_res10;
  FName local_res18;
  FColor_u_0 local_res20 [2];
  FName local_88;
  long64 local_80;
  FName local_78;
  UObject *local_68;
  int local_60;
  EFileRegionType local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  FStatMessage local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_UBD_Serialize ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FBulkData::Serialize(FArchive_&,UObject_*,bool,int,EFileRegionType)_::_2_::FStat_STAT_UBD_Serialize>
           )0x0) {
        pFVar10 = ::FName::FName(&local_res18,"STAT_UBD_Serialize");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UBD_Serialize,*pFVar10,
                   L"FBulkData::Serialize","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,true
                   ,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_STAT_UBD_Serialize;
  if (StatPtr_STAT_UBD_Serialize ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FBulkData::Serialize(FArchive_&,UObject_*,bool,int,EFileRegionType)_::_2_::FStat_STAT_UBD_Serialize>
       )0x0) {
    pFVar10 = ::FName::FName(&local_88,"STAT_UBD_Serialize");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FBulkData::Serialize(FArchive_&,UObject_*,bool,int,EFileRegionType)_::_2_::FStat_STAT_UBD_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UBD_Serialize,*pFVar10,
                          L"FBulkData::Serialize","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar14.Value;
        local_res8.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                   ,0x4db);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar14.Value;
      local_res10.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_141f44130;
    }
  }
  bVar6 = false;
  FVar15 = local_78;
LAB_141f44130:
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1245,"BulkData_Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
               ,0x4dd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1245);
  }
  if ((this->BulkMeta).Data[0xb] != '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsUnlocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x4df,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_3) && ((param_1->field_0x28 & 1) == 0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bAttemptFileMapping || Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x4e1,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_5c = param_5;
  local_60 = param_4;
  local_5a = 0;
  local_68 = param_2;
  local_5b = param_3;
  cVar9 = (**(code **)(*(longlong *)param_1 + 0x1e0))(param_1,this);
  if ((((cVar9 == '\0') && ((param_1->field_0x29 & 1) != 0)) && ((param_1->field_0x2b & 9) == 0)) &&
     ((param_1->field_0x28 & 1) != 0)) {
    if ((this->BulkMeta).Data[0xb] != '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsUnlocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                         ,0x531,L"Serialize bulk data FAILED, bulk data is locked");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    UE::BulkData::Private::FBulkMetaData::FromSerialized
              (param_1,(longlong)param_4,&this->BulkMeta,&local_80);
    EVar2 = *(EBulkDataFlags *)((this->BulkMeta).Data + 0xc);
    *(undefined8 *)(this->BulkChunkId).Id = FIoChunkId::InvalidChunkId.Id._0_8_;
    *(undefined4 *)((this->BulkChunkId).Id + 8) = FIoChunkId::InvalidChunkId.Id._8_4_;
    uVar16 = (ulonglong)*(uint5 *)(this->BulkMeta).Data;
    pvVar12 = ReallocateData(this,uVar16);
    SerializeBulkData(this,param_1,pvVar12,uVar16,EVar2);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SerializeBulkData @ 141f45c00

/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
FBulkData::SerializeBulkData
          (FBulkData *this,FArchive *param_1,void *param_2,long64 param_3,EBulkDataFlags param_4)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1511,"BulkData_SerializeBulkData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
               ,0x5e7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1511);
  }
  if (((param_4 & BULKDATA_Unused) == BULKDATA_None) && (param_3 != 0)) {
    if ((param_4 & BULKDATA_SerializeCompressed) == BULKDATA_None) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,param_3);
    }
    else {
      FVar3 = FNameEntryId::FromValidEName((EName)&param_4);
      FVar1.Number = 0;
      FVar1.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
      FArchive::SerializeCompressed(param_1,param_2,param_3,FVar1,COMPRESS_NoFlags,false);
    }
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SerializePayload @ 141f4c640

/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */

long64 __thiscall
FBulkData::SerializePayload
          (FBulkData *this,FArchive *param_1,EBulkDataFlags param_2,
          TOptional<EFileRegionType> *param_3)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *pvVar7;
  
  if ((param_1->field_0x28 & 4) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsSaving()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x60a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar3 = (*pcVar1)();
      return lVar3;
    }
  }
  MakeSureBulkDataIsLoaded(this);
  lVar4 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  uVar6 = (ulonglong)*(uint5 *)(this->BulkMeta).Data;
  if (uVar6 != 0) {
    if (param_3->bIsSet != false) {
      (**(code **)(*(longlong *)param_1 + 600))(param_1,param_3->TypedValue);
    }
    if ((*(uint *)((this->BulkMeta).Data + 0xc) & 0x40000000) == 0) {
      pvVar7 = (this->DataAllocation).Allocation.RawData;
    }
    else {
      pvVar7 = (void *)0x0;
    }
    SerializeBulkData(this,param_1,pvVar7,uVar6,param_2);
    if (param_3->bIsSet != false) {
      (**(code **)(*(longlong *)param_1 + 0x260))(param_1);
    }
  }
  lVar5 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  return lVar5 - lVar4;
}

// SetBulkDataFlags @ 141f4d280

void __thiscall FBulkData::SetBulkDataFlags(FBulkData *this,uint param_1)

{
  uchar *puVar1;
  
  puVar1 = (this->BulkMeta).Data + 0xc;
  *(uint *)puVar1 = *(uint *)puVar1 | param_1;
  return;
}

// SetBulkDataFlagsOn @ 141f4d290

/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */

void __cdecl FBulkData::SetBulkDataFlagsOn(EBulkDataFlags *param_1,EBulkDataFlags param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}

// StoreCompressedOnDisk @ 141f4dd90

void __thiscall FBulkData::StoreCompressedOnDisk(FBulkData *this,FName param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  FName FVar5;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FName FVar6;
  FName FVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  if (((this->BulkMeta).Data[0xc] & 2) != 0) {
    FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  }
  if (param_1 != FVar5) {
    MakeSureBulkDataIsLoaded(this);
    if (param_1 == (FName)0x0) {
      puVar1 = (this->BulkMeta).Data + 0xc;
      *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffd;
      return;
    }
    FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
    FVar6.Number = 0;
    FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar4.Value);
    if ((param_1 != FVar6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompressionFormat == NAME_Zlib",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                           ,0x5db,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar4.Value);
    uVar8 = 0;
    if (param_1 == FVar7) {
      uVar8 = 2;
    }
    *(uint *)((this->BulkMeta).Data + 0xc) =
         uVar8 | *(uint *)((this->BulkMeta).Data + 0xc) & 0xffffffbf;
  }
  return;
}

// TryLoadDataIntoMemory @ 141f4e410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall FBulkData::TryLoadDataIntoMemory(FBulkData *this,FIoBuffer param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  code **ppcVar5;
  ulonglong uVar6;
  code *pcVar7;
  BufCore *pBVar8;
  undefined1 auStackY_a8 [32];
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar6 = (ulonglong)*(uint5 *)((this->BulkMeta).Data + 5);
  if (0xfffffffffe < uVar6) {
    uVar6 = 0xffffffffffffffff;
  }
  pcVar7 = (code *)(ulonglong)
                   CONCAT41(CONCAT31(CONCAT21(*(undefined2 *)((this->BulkMeta).Data + 3),
                                              (this->BulkMeta).Data[2]),(this->BulkMeta).Data[1]),
                            (this->BulkMeta).Data[0]);
  if (pcVar7 == (code *)0x0) {
    pBVar8 = *(BufCore **)param_1.CorePtr.Reference;
  }
  else {
    if (((code *)(ulonglong)
                 CONCAT14(*(undefined1 *)(*(longlong *)param_1.CorePtr.Reference + 0x18),
                          *(undefined4 *)(*(longlong *)param_1.CorePtr.Reference + 8)) != pcVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Dest.GetSize() == BulkDataSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                           ,0x670,L""), bVar3)) {
      pcVar7 = (code *)swi(3);
      uVar4 = (*pcVar7)();
      return (bool)uVar4;
    }
    if ((*(longlong *)(this->BulkChunkId).Id != FIoChunkId::InvalidChunkId.Id._0_8_) ||
       (*(int *)((this->BulkChunkId).Id + 8) != FIoChunkId::InvalidChunkId.Id._8_4_)) {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x20,8);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FBulkData::TryLoadDataIntoMemory'::`2'::<lambda_1>,0,1>
                           ::_vftable_;
      local_40[1] = (code *)this;
      local_40[2] = pcVar7;
      ((TRefCountPtr<FIoBuffer::BufCore> *)(local_40 + 3))->Reference =
           (BufCore *)param_1.CorePtr.Reference;
      if (local_40 + 1 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FBulkData::TryLoadDataIntoMemory'::__l2::<lambda_1>,void,FArchive_&>
                      ::Call;
      }
      bVar3 = UE::BulkData::Private::OpenReadBulkData
                        (&this->BulkMeta,&this->BulkChunkId,uVar6,(long64)pcVar7,AIOP_High,
                         (TFunction<void___cdecl(FArchive_&)> *)local_68);
      if (local_68[0] != (code *)0x0) {
        ppcVar5 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar5 = local_40;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
      pBVar8 = *(BufCore **)param_1.CorePtr.Reference;
      if (pBVar8 == (BufCore *)0x0) {
        return bVar3;
      }
      FIoBuffer::BufCore::CheckRefCount(pBVar8);
      LOCK();
      piVar1 = &pBVar8->NumRefs;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return bVar3;
      }
      FIoBuffer::BufCore::~BufCore(pBVar8);
      ::operator_delete(pBVar8,0x20);
      return bVar3;
    }
    if (1 < (byte)LogSerialization._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    }
    pBVar8 = *(BufCore **)param_1.CorePtr.Reference;
  }
  if (pBVar8 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(pBVar8);
    LOCK();
    piVar1 = &pBVar8->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar8);
      ::operator_delete(pBVar8,0x20);
    }
  }
  return false;
}

// UnloadBulkData @ 141f4f720

bool __thiscall FBulkData::UnloadBulkData(FBulkData *this)

{
  return false;
}

// Unlock @ 141f4f7a0

void __thiscall FBulkData::Unlock(FBulkData *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->BulkMeta).Data[0xb] == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsUnlocked() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x409,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->BulkMeta).Data[0xb] = '\0';
  if (((this->BulkMeta).Data[0xc] & 8) != 0) {
    FAllocatedPtr::Free(&this->DataAllocation,this);
    return;
  }
  return;
}

