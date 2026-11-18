// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 13

// FDiskCacheInterface @ 1459f52b0

FDiskCacheInterface * __thiscall FDiskCacheInterface::FDiskCacheInterface(FDiskCacheInterface *this)

{
  (this->mFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->mFileName).Data.ArrayNum = 0;
  (this->mFileName).Data.ArrayMax = 0;
  (this->mBackedMemory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->mBackedMemory).ArrayNum = 0;
  (this->mBackedMemory).ArrayMax = 0;
  return this;
}

// ~FDiskCacheInterface @ 1459f9970

void __thiscall FDiskCacheInterface::~FDiskCacheInterface(FDiskCacheInterface *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->mBackedMemory).AllocatorInstance.Data;
  iVar1 = (this->mBackedMemory).ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->mBackedMemory).ArrayNum != iVar1) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*(void **)pFVar3 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar3);
    }
    pFVar3 = pFVar3 + 8;
  }
  pFVar2 = (this->mBackedMemory).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->mFileName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AppendData @ 145a9caa0

bool __thiscall
FDiskCacheInterface::AppendData(FDiskCacheInterface *this,void *param_1,ulong64 param_2)

{
  GrowMapping(this,param_2,false);
  if (this->mInErrorState != false) {
    return false;
  }
  memcpy(this->mFileStart + this->mCurrentOffset,param_1,param_2);
  this->mCurrentOffset = this->mCurrentOffset + param_2;
  return true;
}

// ClearAndReinitialize @ 145a9d020

void __thiscall FDiskCacheInterface::ClearAndReinitialize(FDiskCacheInterface *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (1 < (this->mFileName).Data.ArrayNum) {
    ClearDiskCache(this);
    Init(this,&this->mFileName,this->mEnableDiskCache);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8580028705198309310>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12DiskCache.h"
                     ,0x42,"!mFileName.IsEmpty()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ClearDiskCache @ 145a9d090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDiskCacheInterface::ClearDiskCache(FDiskCacheInterface *this)

{
  bool bVar1;
  
  bVar1 = this->mEnableDiskCache;
  this->mInErrorState = true;
  (this->mHeader).mHeaderVersion = 0xb;
  (this->mHeader).mNumPsos = 0;
  if (bVar1 != false) {
    if (this->mMapAddress != (LPCVOID)0x0) {
      UnmapViewOfFile(this->mMapAddress);
    }
    if (this->mMemoryMap != (HANDLE)0x0) {
      CloseHandle(this->mMemoryMap);
    }
    if (this->mFile != (HANDLE)0x0) {
      CloseHandle(this->mFile);
    }
    DeleteFileW((LPCWSTR)(this->mFileName).Data.AllocatorInstance.Data);
    if (2 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      return;
    }
  }
  return;
}

// Close @ 145a9de50

void __thiscall FDiskCacheInterface::Close(FDiskCacheInterface *this,uint param_1)

{
  ulonglong uVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  ulong64 uVar6;
  bool bVar7;
  
  uVar1 = this->mCurrentOffset;
  (this->mHeader).mNumPsos = param_1;
  if (uVar1 < 0x10) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("mCurrentOffset >= sizeof(FDiskCacheHeader)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12DiskCache.cpp"
                       ,0xd8,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar7 = this->mInErrorState;
  (this->mHeader).mSizeInBytes = this->mCurrentOffset - 0x10;
  if (bVar7 == false) {
    if (this->mMapAddress != (void *)0x0) {
      puVar2 = (uint *)this->mFileStart;
      uVar4 = (this->mHeader).mNumPsos;
      uVar6 = (this->mHeader).mSizeInBytes;
      uVar5 = *(uint *)((longlong)&(this->mHeader).mSizeInBytes + 4);
      *puVar2 = (this->mHeader).mHeaderVersion;
      puVar2[1] = uVar4;
      puVar2[2] = (uint)uVar6;
      puVar2[3] = uVar5;
      FlushViewOfFile(this->mMapAddress,this->mCurrentOffset);
      UnmapViewOfFile(this->mMapAddress);
    }
    if (this->mMemoryMap != (HANDLE)0x0) {
      CloseHandle(this->mMemoryMap);
    }
    if (this->mFile != (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145a9dee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      CloseHandle(this->mFile);
      return;
    }
  }
  return;
}

// Flush @ 145aa8e40

void __thiscall FDiskCacheInterface::Flush(FDiskCacheInterface *this,uint param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ulong64 uVar7;
  bool bVar8;
  
  uVar1 = this->mCurrentOffset;
  (this->mHeader).mNumPsos = param_1;
  if (uVar1 < 0x10) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("mCurrentOffset >= sizeof(FDiskCacheHeader)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12DiskCache.cpp"
                       ,0x112,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pvVar2 = this->mMapAddress;
  (this->mHeader).mSizeInBytes = this->mCurrentOffset - 0x10;
  if ((pvVar2 != (void *)0x0) && (this->mInErrorState == false)) {
    puVar3 = (uint *)this->mFileStart;
    uVar5 = (this->mHeader).mNumPsos;
    uVar7 = (this->mHeader).mSizeInBytes;
    uVar6 = *(uint *)((longlong)&(this->mHeader).mSizeInBytes + 4);
    *puVar3 = (this->mHeader).mHeaderVersion;
    puVar3[1] = uVar5;
    puVar3[2] = (uint)uVar7;
    puVar3[3] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x000145aa8eaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FlushViewOfFile(this->mMapAddress,this->mCurrentOffset);
    return;
  }
  return;
}

// GetDataAt @ 145aa9520

void * __thiscall FDiskCacheInterface::GetDataAt(FDiskCacheInterface *this,ulong64 param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  puVar1 = this->mFileStart + param_1;
  if (this->mFileStart + this->mCurrentFileMapSize < puVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("data <= (mFileStart + mCurrentFileMapSize)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12DiskCache.cpp"
                       ,0x120,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  return puVar1;
}

// GetDataAtStart @ 145aa9570

void * __thiscall FDiskCacheInterface::GetDataAtStart(FDiskCacheInterface *this)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  puVar1 = this->mFileStart + 0x10;
  if (this->mFileStart + this->mCurrentFileMapSize < puVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("data <= (mFileStart + mCurrentFileMapSize)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12DiskCache.cpp"
                       ,0x120,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  return puVar1;
}

// GrowMapping @ 145aac050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDiskCacheInterface::GrowMapping(FDiskCacheInterface *this,ulong64 param_1,bool param_2)

{
  DWORD DVar1;
  ulonglong uVar2;
  HANDLE pvVar3;
  uchar *puVar4;
  undefined1 auStackY_98 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (this->mInErrorState == false) {
    uVar2 = param_1 + this->mCurrentOffset;
    if (this->mCurrentFileMapSize < uVar2) {
      this->mCurrentFileMapSize = uVar2 + 0xfffff & 0xfffffffffff00000;
      if (this->mMapAddress != (LPCVOID)0x0) {
        FlushViewOfFile(this->mMapAddress,this->mCurrentOffset);
        UnmapViewOfFile(this->mMapAddress);
      }
      if (this->mMemoryMap != (HANDLE)0x0) {
        CloseHandle(this->mMemoryMap);
      }
      if (this->mFile != (HANDLE)0x0) {
        CloseHandle(this->mFile);
      }
      DVar1 = 1;
      if (this->mCacheExists != false) {
        DVar1 = 3;
      }
      pvVar3 = CreateFileW((LPCWSTR)(this->mFileName).Data.AllocatorInstance.Data,0xc0000000,1,
                           (LPSECURITY_ATTRIBUTES)0x0,DVar1,0x80,(HANDLE)0x0);
      this->mFile = pvVar3;
      if (pvVar3 == (HANDLE)0xffffffffffffffff) {
        this->mInErrorState = true;
      }
      else {
        this->mCacheExists = true;
        DVar1 = GetFileSize(pvVar3,(LPDWORD)0x0);
        if (DVar1 == 0) {
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 0;
          uStack_40 = 0;
          local_38 = 0;
          uStack_30 = 0;
          local_28 = 0;
          uStack_20 = 0;
          WriteFile(this->mFile,&local_58,0x40,(LPDWORD)0x0,(LPOVERLAPPED)0x0);
        }
        else if (param_2) {
          this->mCurrentFileMapSize = (ulonglong)DVar1;
        }
        pvVar3 = CreateFileMappingW(this->mFile,(LPSECURITY_ATTRIBUTES)0x0,4,
                                    (DWORD)(this->mCurrentFileMapSize >> 0x20),
                                    (DWORD)this->mCurrentFileMapSize,(LPCWSTR)0x0);
        this->mMemoryMap = pvVar3;
        if (pvVar3 != (HANDLE)0x0) {
          puVar4 = MapViewOfFile(pvVar3,0xf001f,0,0,this->mCurrentFileMapSize);
          this->mMapAddress = puVar4;
          if (puVar4 != (uchar *)0x0) {
            this->mFileStart = puVar4;
            return;
          }
        }
        this->mInErrorState = true;
        ClearDiskCache(this);
      }
    }
  }
  return;
}

// Init @ 145aae680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDiskCacheInterface::Init(FDiskCacheInterface *this,FString *param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  uchar *puVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  DWORD DVar6;
  HANDLE hFindFile;
  int iVar7;
  undefined1 auStack_288 [32];
  _WIN32_FIND_DATAW local_268;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  this->mEnableDiskCache = param_2;
  this->mFileStart = (uchar *)0x0;
  this->mFile = (void *)0x0;
  this->mMemoryMap = (void *)0x0;
  this->mMapAddress = (void *)0x0;
  this->mCurrentFileMapSize = 0;
  this->mCurrentOffset = 0;
  this->mInErrorState = false;
  iVar2 = (param_1->Data).ArrayNum;
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange(&this->mFileName,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar7);
  this->mCacheExists = true;
  if (this->mEnableDiskCache == false) {
    this->mCacheExists = false;
    this->mInErrorState = true;
  }
  else {
    hFindFile = FindFirstFileW((LPCWSTR)(this->mFileName).Data.AllocatorInstance.Data,&local_268);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      DVar6 = GetLastError();
      if (DVar6 == 2) {
        this->mCacheExists = false;
      }
    }
    else {
      FindClose(hFindFile);
    }
  }
  bVar1 = this->mCacheExists;
  GrowMapping(this,0x10000,true);
  if ((bVar1 == false) || (puVar3 = this->mFileStart, puVar3 == (uchar *)0x0)) {
    (this->mHeader).mHeaderVersion = 0xb;
    (this->mHeader).mNumPsos = 0;
    (this->mHeader).mSizeInBytes = 0;
  }
  else {
    uVar4 = *(undefined8 *)puVar3;
    uVar5 = *(ulong64 *)(puVar3 + 8);
    (this->mHeader).mHeaderVersion = (int)uVar4;
    (this->mHeader).mNumPsos = (int)((ulonglong)uVar4 >> 0x20);
    (this->mHeader).mSizeInBytes = uVar5;
    if ((this->mHeader).mHeaderVersion != 0xb) {
      if (2 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      ClearAndReinitialize(this);
    }
  }
  return;
}

// Reset @ 145ab62b0

void __thiscall FDiskCacheInterface::Reset(FDiskCacheInterface *this,RESET_TYPE param_1)

{
  this->mCurrentOffset = 0x10;
  if (param_1 == RESET_TO_AFTER_LAST_OBJECT) {
    this->mCurrentOffset = (this->mHeader).mSizeInBytes + 0x10;
  }
  return;
}

// SetPointerAndAdvanceFilePosition @ 145ab8d50

bool __thiscall
FDiskCacheInterface::SetPointerAndAdvanceFilePosition
          (FDiskCacheInterface *this,void **param_1,ulong64 param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  void *local_18 [2];
  
  GrowMapping(this,param_2,false);
  if (this->mInErrorState == false) {
    if (!param_3) {
      *param_1 = this->mFileStart + this->mCurrentOffset;
      this->mCurrentOffset = this->mCurrentOffset + param_2;
      return true;
    }
    if (param_2 == 10) {
      lVar7 = *(longlong *)(this->mFileStart + this->mCurrentOffset) - attribute._0_8_;
      if (lVar7 == 0) {
        lVar7 = (ulonglong)*(ushort *)((longlong)(this->mFileStart + this->mCurrentOffset) + 8) -
                (ulonglong)(ushort)attribute._8_2_;
      }
      if (lVar7 == 0) {
        *param_1 = "ATTRIBUTE";
        this->mCurrentOffset = this->mCurrentOffset + 10;
        return true;
      }
    }
    local_18[0] = FMemory::Malloc(param_2,0);
    if (local_18[0] != (void *)0x0) {
      memcpy(local_18[0],this->mFileStart + this->mCurrentOffset,param_2);
      pFVar2 = (this->mBackedMemory).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->mBackedMemory).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = (this->mBackedMemory).ArrayNum;
      piVar1 = &(this->mBackedMemory).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->mBackedMemory).AllocatorInstance,piVar1);
      }
      (this->mBackedMemory).ArrayNum = iVar6 + 1;
      *(void **)((this->mBackedMemory).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      *param_1 = local_18[0];
      this->mCurrentOffset = this->mCurrentOffset + param_2;
      return true;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12DiskCache.cpp"
                       ,0xbb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return false;
}

