// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FLoggedFileHandle @ 141678a40

FLoggedFileHandle * __thiscall
FLoggedFileHandle::FLoggedFileHandle
          (FLoggedFileHandle *this,IFileHandle *param_1,wchar_t *param_2,
          FLoggedPlatformFile *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  (this->FileHandle).Ptr = param_1;
  this->_padding_ = (longlong)&___7FLoggedFileHandle__6B_;
  ::FString::FString(&this->Filename,param_2);
  lpCriticalSection = &param_3->LogFileCritical;
  this->PlatformFile = param_3;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->Filename).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  piVar3 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
           FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                       *)&param_3->OpenHandles,uVar2,&this->Filename);
  *piVar3 = *piVar3 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return this;
}

// ~FLoggedFileHandle @ 14167bcf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLoggedFileHandle::~FLoggedFileHandle(FLoggedFileHandle *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FLoggedPlatformFile *pFVar2;
  FScriptContainerElement *pFVar3;
  IFileHandle *pIVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  
  pFVar2 = this->PlatformFile;
  this->_padding_ = (longlong)&___7FLoggedFileHandle__6B_;
  lpCriticalSection = &pFVar2->LogFileCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar8 = (this->Filename).Data.ArrayNum;
  if (iVar8 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
  }
  lVar12 = 0;
  iVar10 = 0;
  iVar9 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar9 = iVar10;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar11);
  iVar8 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)&pFVar2->OpenHandles,uVar7,&this->Filename);
  if (((iVar8 == -1) ||
      (lVar12 = (longlong)iVar8 * 0x20 + *(longlong *)&pFVar2->OpenHandles, lVar12 == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar1 = (int *)(lVar12 + 0x10);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) &&
     (*(int *)&(pFVar2->OpenHandles).field_0x8 != *(int *)&(pFVar2->OpenHandles).field_0x34)) {
    iVar8 = (this->Filename).Data.ArrayNum;
    if (iVar8 == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
      iVar10 = iVar8 + -1;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar11);
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    RemoveImpl<FString>((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                         *)&pFVar2->OpenHandles,uVar7,&this->Filename);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  pFVar3 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pIVar4 = (this->FileHandle).Ptr;
  if (pIVar4 != (IFileHandle *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  this->_padding_ = (longlong)&___7IFileHandle__6B_;
  return;
}

// Flush @ 1416950f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLoggedFileHandle::Flush(FLoggedFileHandle *this,bool param_1)

{
  IFileHandle *pIVar1;
  undefined1 uVar2;
  LARGE_INTEGER local_res8;
  
  if (!bSuppressFileLog) {
    bSuppressFileLog = true;
    if (5 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::Flush(bool)___ptr64'::__l6::
                  LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  pIVar1 = (this->FileHandle).Ptr;
  uVar2 = (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (5 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::Flush(bool)___ptr64'::__l27::
                  LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  return (bool)uVar2;
}

// Read @ 1416b9ce0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLoggedFileHandle::Read(FLoggedFileHandle *this,uchar *param_1,long64 param_2)

{
  IFileHandle *pIVar1;
  undefined1 uVar2;
  LARGE_INTEGER local_res8;
  
  if (!bSuppressFileLog) {
    bSuppressFileLog = true;
    if (6 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::Read(unsigned_char*___ptr64,__int64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  pIVar1 = (this->FileHandle).Ptr;
  uVar2 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,param_1,param_2);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (6 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::Read(unsigned_char*___ptr64,__int64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  return (bool)uVar2;
}

// ReadAt @ 1416b9e00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLoggedFileHandle::ReadAt(FLoggedFileHandle *this,uchar *param_1,long64 param_2,long64 param_3)

{
  IFileHandle *pIVar1;
  undefined1 uVar2;
  LARGE_INTEGER local_res8;
  
  if (!bSuppressFileLog) {
    bSuppressFileLog = true;
    if (6 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::ReadAt(unsigned_char*___ptr64,__int64,__int64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  pIVar1 = (this->FileHandle).Ptr;
  uVar2 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,param_1,param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (6 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::ReadAt(unsigned_char*___ptr64,__int64,__int64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  return (bool)uVar2;
}

// Seek @ 1416bf110

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLoggedFileHandle::Seek(FLoggedFileHandle *this,long64 param_1)

{
  IFileHandle *pIVar1;
  undefined1 uVar2;
  LARGE_INTEGER local_res8;
  
  if (!bSuppressFileLog) {
    bSuppressFileLog = true;
    if (6 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::Seek(__int64)___ptr64'::__l6::
                  LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  pIVar1 = (this->FileHandle).Ptr;
  uVar2 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (6 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::Seek(__int64)___ptr64'::__l27::
                  LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  return (bool)uVar2;
}

// SeekFromEnd @ 1416bf220

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLoggedFileHandle::SeekFromEnd(FLoggedFileHandle *this,long64 param_1)

{
  IFileHandle *pIVar1;
  undefined1 uVar2;
  LARGE_INTEGER local_res8;
  
  if (!bSuppressFileLog) {
    bSuppressFileLog = true;
    if (6 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::SeekFromEnd(__int64)___ptr64'::
                  __l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  pIVar1 = (this->FileHandle).Ptr;
  uVar2 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (6 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::SeekFromEnd(__int64)___ptr64'::
                  __l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  return (bool)uVar2;
}

// ShrinkBuffers @ 1416c14e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLoggedFileHandle::ShrinkBuffers(FLoggedFileHandle *this)

{
  LARGE_INTEGER local_res8 [4];
  
  if (!bSuppressFileLog) {
    bSuppressFileLog = true;
    if (5 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual_void___cdecl_FLoggedFileHandle::ShrinkBuffers(void)___ptr64'::
                  __l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(local_res8);
  (**(code **)((longlong)*(this->FileHandle).Ptr + 0x48))();
  QueryPerformanceCounter(local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (5 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual_void___cdecl_FLoggedFileHandle::ShrinkBuffers(void)___ptr64'::
                  __l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  return;
}

// Size @ 1416c15e0

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall FLoggedFileHandle::Size(FLoggedFileHandle *this)

{
  long64 lVar1;
  LARGE_INTEGER local_res8 [4];
  
  if (!bSuppressFileLog) {
    bSuppressFileLog = true;
    if (5 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual___int64___cdecl_FLoggedFileHandle::Size(void)___ptr64'::__l6::
                  LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(local_res8);
  lVar1 = (**(code **)((longlong)*(this->FileHandle).Ptr + 0x50))();
  QueryPerformanceCounter(local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (5 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual___int64___cdecl_FLoggedFileHandle::Size(void)___ptr64'::__l27::
                  LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  return lVar1;
}

// Tell @ 1416c1b10

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall FLoggedFileHandle::Tell(FLoggedFileHandle *this)

{
  long64 lVar1;
  LARGE_INTEGER local_res8 [4];
  
  if (!bSuppressFileLog) {
    bSuppressFileLog = true;
    if (6 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_virtual___int64___cdecl_FLoggedFileHandle::Tell(void)___ptr64'::__l6::
                  LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(local_res8);
  lVar1 = (**(code **)((longlong)*(this->FileHandle).Ptr + 8))();
  QueryPerformanceCounter(local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (6 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_virtual___int64___cdecl_FLoggedFileHandle::Tell(void)___ptr64'::__l27::
                  LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  return lVar1;
}

// Truncate @ 1416c31c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLoggedFileHandle::Truncate(FLoggedFileHandle *this,long64 param_1)

{
  IFileHandle *pIVar1;
  undefined1 uVar2;
  LARGE_INTEGER local_res8;
  
  if (!bSuppressFileLog) {
    bSuppressFileLog = true;
    if (5 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::Truncate(__int64)___ptr64'::__l6
                  ::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  pIVar1 = (this->FileHandle).Ptr;
  uVar2 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (5 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::Truncate(__int64)___ptr64'::__l27
                  ::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  return (bool)uVar2;
}

// Write @ 1416c82b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLoggedFileHandle::Write(FLoggedFileHandle *this,uchar *param_1,long64 param_2)

{
  IFileHandle *pIVar1;
  undefined1 uVar2;
  LARGE_INTEGER local_res8;
  
  if (!bSuppressFileLog) {
    bSuppressFileLog = true;
    if (6 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::Write(unsigned_char_const*___ptr64,__int64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  pIVar1 = (this->FileHandle).Ptr;
  uVar2 = (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_1,param_2);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (6 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_virtual_bool___cdecl_FLoggedFileHandle::Write(unsigned_char_const*___ptr64,__int64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  return (bool)uVar2;
}

