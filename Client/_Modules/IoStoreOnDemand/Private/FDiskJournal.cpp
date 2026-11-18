// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 9

// FDiskJournal @ 1445a2ab0

FDiskJournal * __thiscall
UE::IoStore::JournaledCache::FDiskJournal::FDiskJournal
          (FDiskJournal *this,TStringView<wchar_t> *param_1,uint param_2,uint param_3)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 uVar3;
  
  pwVar1 = param_1->DataPtr;
  iVar2 = param_1->Size;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  (this->RootPath).DataPtr = pwVar1;
  (this->RootPath).Size = iVar2;
  *(undefined4 *)&(this->RootPath).field_0xc = uVar3;
  (this->JrnHandle).Ptr = (IFileHandle *)0x0;
  this->Marker = 0;
  this->Cursor = 0;
  this->MaxSize = param_2 & 0xfffffff0;
  this->Magic = (param_3 + 3 & 0xffff) + 0x4930003;
  OpenJrnFile(this);
  return this;
}

// ClosePhrase @ 1445b76a0

void __thiscall
UE::IoStore::JournaledCache::FDiskJournal::ClosePhrase
          (FDiskJournal *this,FDiskPhrase *param_1,ulong64 param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FIoBuffer *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  FIoBuffer local_res20;
  
  uVar12 = param_1->Entries->ArrayNum - param_1->Index;
  if (uVar12 != 0) {
    if ((this->MaxSize + (this->Entries).ArrayNum * -0x10) - this->Cursor == 0x10) {
      pFVar8 = FIoBuffer::FIoBuffer(&local_res20);
      FDiskPhrase::Add(param_1,0,pFVar8,0);
      if (local_res20.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_res20.CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)local_res20.CorePtr.Reference + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)local_res20.CorePtr.Reference);
          ::operator_delete((void *)local_res20.CorePtr.Reference,0x20);
        }
      }
      uVar12 = uVar12 + 1;
    }
    if (0xffff < uVar12) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntryCount <= 0xffffui16",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                         ,0x23b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = (this->Entries).ArrayNum;
    uVar7 = param_1->Index;
    uVar10 = iVar2 - 1;
    pFVar9 = (param_1->Entries->AllocatorInstance).Data;
    uVar6 = 0;
    if ((int)uVar10 < iVar2) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = (this->Entries).ArrayNum;
    pFVar3 = (this->Entries).AllocatorInstance.Data;
    *(short *)(pFVar9 + (ulonglong)uVar7 * 0x10 + 0xe) = (short)uVar12;
    *(short *)(pFVar3 + ((longlong)iVar2 + -1) * 0x10 + 0xe) = (short)uVar12;
    uVar12 = param_1->Index;
    pFVar9 = (param_1->Entries->AllocatorInstance).Data;
    *(uint *)(pFVar9 + (ulonglong)uVar12 * 0x10 + -0x10) = this->Magic;
    uVar11 = (ulonglong)(this->Marker & 0x3fffffff) | param_2 << 0x1e;
    *(ulonglong *)(pFVar9 + (ulonglong)uVar12 * 0x10 + -8) = uVar11;
    uVar7 = param_1->Cursor;
    if (0x40 < uVar7) {
      uVar7 = 0x40;
    }
    uVar7 = CityHash32((char *)(param_1->Buffer).Ptr,uVar7);
    *(uint *)(pFVar9 + (ulonglong)uVar12 * 0x10 + -0xc) = uVar7 + ((uint)uVar11 & 0x3fffffff);
    this->Marker = this->Marker + 1;
    if (0x3fffffff < this->Marker) {
      this->Marker = 0;
    }
    return;
  }
  if ((this->Entries).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = (this->Entries).ArrayNum;
  uVar12 = iVar2 - 1;
  pFVar9 = (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
  iVar2 = ~uVar12 + iVar2;
  if (iVar2 != 0) {
    memmove(pFVar9,pFVar9 + 0x10,(longlong)iVar2 << 4);
  }
  piVar1 = &(this->Entries).ArrayNum;
  *piVar1 = *piVar1 + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,(ForAnyElementType *)this,(this->Entries).ArrayNum,&(this->Entries).ArrayMax);
  return;
}

// Drop @ 1445c8fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::JournaledCache::FDiskJournal::Drop(FDiskJournal *this)

{
  int *piVar1;
  IFileHandle *pIVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  char cVar5;
  DWORD DVar6;
  void *pvVar7;
  IPlatformFile *pIVar8;
  ulong64 uVar9;
  int iVar10;
  undefined1 auStackY_908 [32];
  TStringBuilderBase<wchar_t> local_8c8;
  wchar_t local_8a8 [64];
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_908;
  pIVar2 = (this->JrnHandle).Ptr;
  if (pIVar2 != (IFileHandle *)0x0) {
    (this->JrnHandle).Ptr = (IFileHandle *)0x0;
    (**(code **)*pIVar2)(pIVar2,1);
  }
  local_8c8.Base = local_8a8;
  pwVar4 = (this->RootPath).DataPtr;
  local_8c8.End = local_828;
  iVar10 = (int)*(undefined8 *)&(this->RootPath).Size;
  uVar9 = (ulong64)iVar10;
  local_8c8.CurPos = local_8a8;
  local_8c8.bIsDynamic = false;
  local_8c8.bIsExternal = false;
  if (local_828 < local_8a8 + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_8c8,uVar9);
  }
  if (iVar10 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(local_8c8.CurPos,pwVar4,uVar9 * 2);
    local_8c8.CurPos = (wchar_t *)((longlong)pvVar7 + uVar9 * 2);
  }
  if (local_8c8.End < local_8c8.CurPos + 4) {
    TStringBuilderBase<wchar_t>::Extend(&local_8c8,4);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_8c8.CurPos,L".jrn",8);
  local_8c8.CurPos = (wchar_t *)((longlong)pvVar7 + 8);
  pIVar8 = IPlatformFile::GetPlatformPhysical();
  pcVar3 = *(code **)((longlong)*pIVar8 + 0x88);
  if (local_8c8.End < local_8c8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_8c8,1);
  }
  *local_8c8.CurPos = L'\0';
  cVar5 = (*pcVar3)(pIVar8);
  if (cVar5 == '\0') {
    DVar6 = FWindowsPlatformMisc::GetLastError();
    memset(local_828,0,0x800);
    FWindowsPlatformMisc::GetSystemErrorMessage(local_828,0x400,DVar6);
    if (1 < (byte)LogIas._0_1_) {
      if (local_8c8.End < local_8c8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_8c8,1);
      }
      *local_8c8.CurPos = L'\0';
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
  }
  this->Cursor = 0;
  piVar1 = &(this->Entries).ArrayMax;
  (this->Entries).ArrayNum = 0;
  if (*piVar1 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  OpenJrnFile(this);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8c8);
  return;
}

// Flush @ 1445cdaf0

int __thiscall UE::IoStore::JournaledCache::FDiskJournal::Flush(FDiskJournal *this)

{
  IFileHandle *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  
  if ((this->Entries).ArrayNum == 0) {
    return 0;
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId600,"IasCache::Flush_DiskCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
               ,600);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId600);
  }
  iVar4 = (this->Entries).ArrayNum * 0x10;
  if ((this->MaxSize < this->Cursor + iVar4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cursor + Size <= MaxSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                         ,0x25c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if ((this->JrnHandle).Ptr != (IFileHandle *)0x0) {
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId608,"IasCache::JournalWrite",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                 ,0x260);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId608);
    }
    pIVar1 = (this->JrnHandle).Ptr;
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,this->Cursor);
    pIVar1 = (this->JrnHandle).Ptr;
    (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,(this->Entries).AllocatorInstance.Data);
    pIVar1 = (this->JrnHandle).Ptr;
    if (pIVar1 != (IFileHandle *)0x0) {
      (this->JrnHandle).Ptr = (IFileHandle *)0x0;
      (**(code **)*pIVar1)(pIVar1,1);
    }
    this->Cursor = this->Cursor + iVar4;
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (this->MaxSize <= this->Cursor) {
    this->Cursor = 0;
  }
  (this->Entries).ArrayNum = 0;
  if ((this->Entries).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,&(this->Entries).ArrayMax);
  }
  OpenJrnFile(this);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return iVar4;
}

// GetAilments @ 1445d13a0

uint __thiscall UE::IoStore::JournaledCache::FDiskJournal::GetAilments(FDiskJournal *this)

{
  return (uint)((this->JrnHandle).Ptr == (IFileHandle *)0x0);
}

// GetPath @ 1445d6da0

void __thiscall
UE::IoStore::JournaledCache::FDiskJournal::GetPath
          (FDiskJournal *this,TStringBuilderWithBuffer<wchar_t,64> *param_1)

{
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,(this->RootPath).DataPtr,
             (int)*(undefined8 *)&(this->RootPath).Size);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L".jrn",4);
  return;
}

// HashBytes @ 1445d9570

uint __cdecl
UE::IoStore::JournaledCache::FDiskJournal::HashBytes(uchar *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = CityHash32((char *)param_1,param_2);
  return uVar1 + param_3;
}

// OpenJrnFile @ 1445e8010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::JournaledCache::FDiskJournal::OpenJrnFile(FDiskJournal *this)

{
  TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *pTVar1;
  code *pcVar2;
  IFileHandle *pIVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  void *pvVar6;
  IPlatformFile *pIVar7;
  ulong64 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_138 [32];
  FString local_118;
  longlong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  int iStack_f4;
  FFileSystemError local_f0;
  byte local_d8;
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [64];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_138;
  local_c8.bIsDynamic = false;
  local_c8.bIsExternal = false;
  local_c8.Base = local_a8;
  local_c8.End = (wchar_t *)local_28;
  local_118.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&(this->RootPath).DataPtr;
  local_118.Data.AllocatorInstance.Data._4_4_ =
       *(undefined4 *)((longlong)&(this->RootPath).DataPtr + 4);
  local_118.Data.ArrayNum = (this->RootPath).Size;
  local_118.Data.ArrayMax = *(int *)&(this->RootPath).field_0xc;
  local_c8.CurPos = local_a8;
  iVar9 = (int)*(undefined8 *)&(this->RootPath).Size;
  uVar8 = (ulong64)iVar9;
  local_100 = local_118.Data.AllocatorInstance.Data._0_4_;
  uStack_fc = local_118.Data.AllocatorInstance.Data._4_4_;
  iStack_f8 = local_118.Data.ArrayNum;
  iStack_f4 = local_118.Data.ArrayMax;
  if (local_28 < local_a8 + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,uVar8);
  }
  if (iVar9 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy
                       (local_c8.CurPos,
                        (void *)CONCAT44(local_118.Data.AllocatorInstance.Data._4_4_,
                                         local_118.Data.AllocatorInstance.Data._0_4_),uVar8 * 2);
    local_c8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
  }
  if (local_c8.End < local_c8.CurPos + 4) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,4);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_c8.CurPos,L".jrn",8);
  local_c8.CurPos = (wchar_t *)((longlong)pvVar6 + 8);
  pIVar7 = IPlatformFile::GetPlatformPhysical();
  pcVar2 = *(code **)((longlong)*pIVar7 + 0x108);
  if (local_c8.End < local_c8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
  }
  *local_c8.CurPos = L'\0';
  (*pcVar2)(pIVar7,&local_f0,local_c8.Base,3);
  uVar10 = (ulonglong)local_d8;
  if ((2 < uVar10) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar10) == '\0') {
    if (1 < (byte)LogIas._0_1_) {
      if ((local_d8 != 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FFileSystemError::GetMessage(&local_f0,&local_118);
      if (local_c8.End < local_c8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
      }
      *local_c8.CurPos = L'\0';
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      if ((void *)CONCAT44(local_118.Data.AllocatorInstance.Data._4_4_,
                           local_118.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_118.Data.AllocatorInstance.Data._4_4_,
                                       local_118.Data.AllocatorInstance.Data._0_4_));
      }
    }
  }
  else {
    if ((local_d8 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar4.Data = local_f0.ErrorMessage.Data.AllocatorInstance.Data;
    local_f0.ErrorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((2 < local_d8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_d8])(&local_f0);
    pTVar1 = &this->JrnHandle;
    local_d8 = 2;
    if (pTVar1 == (TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *)&local_108) {
      if ((IFileHandle *)FVar4.Data != (IFileHandle *)0x0) {
        (**(code **)*(IFileHandle *)FVar4.Data)(FVar4.Data,1);
      }
    }
    else {
      pIVar3 = pTVar1->Ptr;
      pTVar1->Ptr = (IFileHandle *)FVar4.Data;
      if (pIVar3 != (IFileHandle *)0x0) {
        (**(code **)*pIVar3)(pIVar3,1);
      }
    }
  }
  uVar10 = (ulonglong)local_d8;
  if ((2 < local_d8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar10])(&local_f0);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
  return;
}

// OpenPhrase @ 1445e86a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDiskPhrase * __thiscall
UE::IoStore::JournaledCache::FDiskJournal::OpenPhrase
          (FDiskJournal *this,FDiskPhrase *__return_storage_ptr__,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FDiskPhrase *pFVar7;
  uchar *puVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  TArray<UE::IoStore::JournaledCache::FDataEntry,TSizedDefaultAllocator<32>_> **local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  FDiskPhrase local_38;
  
  local_38._24_8_ = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((this->Cursor & 0xf) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Cursor & (sizeof(FDataEntry) - 1)) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                       ,0x21c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FDiskPhrase *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  local_38.Entries =
       (TArray<UE::IoStore::JournaledCache::FDataEntry,TSizedDefaultAllocator<32>_> *)0x0;
  local_38.Cursor = 0;
  local_38.Index = 0;
  if ((pFVar2 <= &local_38.Entries) &&
     (lVar10 = (longlong)(this->Entries).ArrayMax, &local_38.Entries < pFVar2 + lVar10 * 0x10)) {
    local_50 = (longlong)(this->Entries).ArrayNum;
    local_48 = 0x10;
    local_68 = &local_38.Entries;
    local_60 = pFVar2;
    local_58 = lVar10;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FDiskPhrase *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Entries).ArrayNum = iVar6 + 1;
  pFVar2 = (this->Entries).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(TArray<UE::IoStore::JournaledCache::FDataEntry,TSizedDefaultAllocator<32>_> **)pFVar2 =
       local_38.Entries;
  *(undefined8 *)(pFVar2 + 8) = local_38._16_8_;
  iVar9 = (this->MaxSize - this->Cursor >> 4) - (this->Entries).ArrayNum;
  (__return_storage_ptr__->Buffer).Ptr = (uchar *)0x0;
  __return_storage_ptr__->Entries = &this->Entries;
  __return_storage_ptr__->Cursor = 0;
  __return_storage_ptr__->Index = (this->Entries).ArrayNum;
  iVar6 = 0xffff;
  if (iVar9 < 0xffff) {
    iVar6 = iVar9;
  }
  __return_storage_ptr__->MaxEntries = iVar6;
  puVar8 = operator_new__((ulonglong)param_1);
  if (__return_storage_ptr__ != &local_38) {
    puVar3 = (__return_storage_ptr__->Buffer).Ptr;
    (__return_storage_ptr__->Buffer).Ptr = puVar8;
    puVar8 = (uchar *)0x0;
    operator_delete__(puVar3);
  }
  operator_delete__(puVar8);
  return __return_storage_ptr__;
}

