// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 38

// HandleDumpCommand @ 1416a1e60

void __thiscall
FLoggedPlatformFile::HandleDumpCommand
          (FLoggedPlatformFile *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  lpCriticalSection = &this->LogFileCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bSuppressFileLog = true;
  FOutputDevice::LogfImpl(param_2,L"Open file handles: %d");
  iVar3 = *(int *)&(this->OpenHandles).field_0x28;
  puVar1 = &(this->OpenHandles).field_0x10;
  iVar11 = 0;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->OpenHandles).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1416a1f4f;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = iVar13 + -1 + (int)lVar9;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1416a1f4f:
  uVar10 = *(uint *)&(this->OpenHandles).field_0x28;
  TStack_68._padding_ = CONCAT44(uVar7,iVar11);
  uVar7 = uVar10 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar13;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->OpenHandles).field_0x8 -
                       *(int *)&(this->OpenHandles).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->OpenHandles).field_0x28;
  if (uVar10 != uVar4) {
    puVar12 = *(undefined1 **)&(this->OpenHandles).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar7 = uVar7 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1416a2060;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar7;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_1416a2060:
  while( true ) {
    if (*(int *)&(this->OpenHandles).field_0x8 - *(int *)&(this->OpenHandles).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar10) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FOutputDevice::LogfImpl(param_2,L"%s: %d");
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  bSuppressFileLog = false;
                    /* WARNING: Could not recover jumptable at 0x0001416a2100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Initialize @ 1416af970

bool __thiscall
FLoggedPlatformFile::Initialize(FLoggedPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  TUniquePtr<FFileLogExec,TDefaultDelete<FFileLogExec>_> TVar3;
  bool bVar4;
  undefined1 uVar5;
  TUniquePtr<FFileLogExec,TDefaultDelete<FFileLogExec>_> this_00;
  
  if (param_1 == (IPlatformFile *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inner != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\IPlatformFileLogWrapper.cpp"
                       ,0x2f,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  this->LowerLevel = param_1;
  this_00.Ptr = ::operator_new(0x10);
  if (this_00.Ptr == (FFileLogExec *)0x0) {
    this_00.Ptr = (FFileLogExec *)0x0;
  }
  else {
    FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)this_00.Ptr);
    (this_00.Ptr)->PlatformFile = this;
    (this_00.Ptr)->_padding_ = (longlong)&___7FFileLogExec__6B_;
  }
  TVar3.Ptr = GFileLogExec.Ptr;
  if (GFileLogExec.Ptr != (FFileLogExec *)0x0) {
    plVar2 = &(GFileLogExec.Ptr)->_padding_;
    GFileLogExec.Ptr = this_00.Ptr;
    (**(code **)*plVar2)(TVar3.Ptr,1);
    this_00.Ptr = GFileLogExec.Ptr;
  }
  GFileLogExec.Ptr = this_00.Ptr;
  return this->LowerLevel != (IPlatformFile *)0x0;
}

// OpenMappedEx @ 1416b5d30

TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError> *
__thiscall
FLoggedPlatformFile::OpenMappedEx
          (FLoggedPlatformFile *this,
          TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenReadFlags param_2,long64 param_3)

{
  (**(code **)((longlong)*this->LowerLevel + 0x1b0))();
  return __return_storage_ptr__;
}

// ShouldBeUsed @ 1416c13e0

bool __thiscall
FLoggedPlatformFile::ShouldBeUsed(FLoggedPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  bool bVar1;
  
  bVar1 = FParse::Param(param_2,L"FileLog");
  return bVar1;
}

// CopyFile @ 1416e6840

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLoggedPlatformFile::CopyFile
          (FLoggedPlatformFile *this,wchar_t *param_1,wchar_t *param_2,EPlatformFileRead param_3,
          EPlatformFileWrite param_4)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_38 [2];
  
  ::FString::PrintfImpl(local_38,L"CopyFile %s %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar2.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar2.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x1d3);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::CopyFile(wchar_t_const*___ptr64,wchar_t_const*___ptr64,EPlatformFileRead,EPlatformFileWrite)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x208))
                    (this->LowerLevel,param_1,param_2,param_3,param_4);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::CopyFile(wchar_t_const*___ptr64,wchar_t_const*___ptr64,EPlatformFileRead,EPlatformFileWrite)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// CreateDirectory @ 1416e7e80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLoggedPlatformFile::CreateDirectory(FLoggedPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"CreateDirectory %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x14e);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::CreateDirectory(wchar_t_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x120))(this->LowerLevel,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::CreateDirectory(wchar_t_const*___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// DeleteDirectory @ 1416e9be0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLoggedPlatformFile::DeleteDirectory(FLoggedPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"DeleteDirectory %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x159);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::DeleteDirectory(wchar_t_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x128))(this->LowerLevel,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::DeleteDirectory(wchar_t_const*___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// DeleteDirectoryRecursively @ 1416e9dd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLoggedPlatformFile::DeleteDirectoryRecursively(FLoggedPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"DeleteDirectoryRecursively %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x1c8);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::DeleteDirectoryRecursively(wchar_t_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x1f8))(this->LowerLevel,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::DeleteDirectoryRecursively(wchar_t_const*___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// DeleteFile @ 1416e9fc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLoggedPlatformFile::DeleteFile(FLoggedPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"DeleteFile %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0xd5);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::DeleteFile(wchar_t_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x88))(this->LowerLevel,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::DeleteFile(wchar_t_const*___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// DirectoryExists @ 1416ebad0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLoggedPlatformFile::DirectoryExists(FLoggedPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"DirectoryExists %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x143);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::DirectoryExists(wchar_t_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x118))(this->LowerLevel,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::DirectoryExists(wchar_t_const*___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// FileExists @ 1416edba0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLoggedPlatformFile::FileExists(FLoggedPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"FileExists %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0xbf);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::FileExists(wchar_t_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::FileExists(wchar_t_const*___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// FileJournalGetFileData @ 1416edd90

FFileJournalData * __thiscall
FLoggedPlatformFile::FileJournalGetFileData
          (FLoggedPlatformFile *this,FFileJournalData *__return_storage_ptr__,wchar_t *param_1,
          FString *param_2)

{
  (**(code **)((longlong)*this->LowerLevel + 0x178))();
  return __return_storage_ptr__;
}

// FileJournalGetLatestEntry @ 1416ede10

EFileJournalResult __thiscall
FLoggedPlatformFile::FileJournalGetLatestEntry
          (FLoggedPlatformFile *this,wchar_t *param_1,ulong64 *param_2,ulong64 *param_3,
          FString *param_4)

{
  EFileJournalResult EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ede1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*this->LowerLevel + 0x168))();
  return EVar1;
}

// FileJournalGetMaximumSize @ 1416ede70

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FLoggedPlatformFile::FileJournalGetMaximumSize
          (FLoggedPlatformFile *this,wchar_t *param_1,Type *param_2,FString *param_3)

{
  ulong64 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ede77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x160))();
  return uVar1;
}

// FileJournalGetVolumeName @ 1416edef0

FString * __thiscall
FLoggedPlatformFile::FileJournalGetVolumeName
          (FLoggedPlatformFile *this,FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)((longlong)*this->LowerLevel + 0x188))
            (this->LowerLevel,__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// FileJournalIsAvailable @ 1416edf90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLoggedPlatformFile::FileJournalIsAvailable
          (FLoggedPlatformFile *this,wchar_t *param_1,Type *param_2,FString *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416edf97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x158))();
  return (bool)uVar1;
}

// FileJournalIterateDirectory @ 1416ee010

bool __thiscall
FLoggedPlatformFile::FileJournalIterateDirectory
          (FLoggedPlatformFile *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,FFileJournalData_const_&)> *param_2,
          FString *param_3)

{
  undefined1 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_2;
  local_10 = *(undefined8 *)&param_2->field_0x8;
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x170))(this->LowerLevel,param_1,&local_18);
  return (bool)uVar1;
}

// FileJournalReadModified @ 1416ee0b0

EFileJournalResult __thiscall
FLoggedPlatformFile::FileJournalReadModified
          (FLoggedPlatformFile *this,wchar_t *param_1,ulong64 *param_2,ulong64 *param_3,
          TMap<FFileJournalFileHandle,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileJournalFileHandle,FString,0>_>
          *param_4,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_5,
          ulong64 *param_6,FString *param_7)

{
  EFileJournalResult EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ee0be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*this->LowerLevel + 0x180))();
  return EVar1;
}

// FileSize @ 1416ee110

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall FLoggedPlatformFile::FileSize(FLoggedPlatformFile *this,wchar_t *param_1)

{
  long64 lVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"FileSize %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0xca);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual___int64___cdecl_FLoggedPlatformFile::FileSize(wchar_t_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  lVar1 = (**(code **)((longlong)*this->LowerLevel + 0x80))(this->LowerLevel,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual___int64___cdecl_FLoggedPlatformFile::FileSize(wchar_t_const*___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return lVar1;
}

// GetAccessTimeStamp @ 1416f1800

/* WARNING: Enum "Type": Some values do not have unique names */

FDateTime __thiscall
FLoggedPlatformFile::GetAccessTimeStamp(FLoggedPlatformFile *this,wchar_t *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  LARGE_INTEGER local_res8;
  FString local_38 [2];
  
  ::FString::PrintfImpl(local_38,L"GetAccessTimeStamp %s");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar1.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar1.Data);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar1.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar1.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x116);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_struct_FDateTime___cdecl_FLoggedPlatformFile::GetAccessTimeStamp(wchar_t_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  (**(code **)((longlong)*this->LowerLevel + 0xc0))(this->LowerLevel,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_struct_FDateTime___cdecl_FLoggedPlatformFile::GetAccessTimeStamp(wchar_t_const*___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return (FDateTime)(long64)param_1;
}

// GetFilenameOnDisk @ 1416f82f0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FLoggedPlatformFile::GetFilenameOnDisk
          (FLoggedPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  LARGE_INTEGER local_res8;
  FString local_38 [2];
  
  ::FString::PrintfImpl(local_38,L"GetFilenameOnDisk %s");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar1.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar1.Data);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar1.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar1.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x121);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_class_FString___cdecl_FLoggedPlatformFile::GetFilenameOnDisk(wchar_t_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  (**(code **)((longlong)*this->LowerLevel + 200))(this->LowerLevel,__return_storage_ptr__,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_class_FString___cdecl_FLoggedPlatformFile::GetFilenameOnDisk(wchar_t_const*___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLowerLevel @ 1416f8ad0

IPlatformFile * __thiscall FLoggedPlatformFile::GetLowerLevel(FLoggedPlatformFile *this)

{
  return this->LowerLevel;
}

// GetName @ 1416f8cc0

wchar_t * __thiscall FLoggedPlatformFile::GetName(FLoggedPlatformFile *this)

{
  return L"LogFile";
}

// GetStatData @ 1416fb800

/* WARNING: Enum "Type": Some values do not have unique names */

FFileStatData * __thiscall
FLoggedPlatformFile::GetStatData
          (FLoggedPlatformFile *this,FFileStatData *__return_storage_ptr__,wchar_t *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  LARGE_INTEGER local_res8;
  FString local_38 [2];
  
  ::FString::PrintfImpl(local_38,L"GetStatData %s");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar1.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar1.Data);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar1.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar1.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x164);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_struct_FFileStatData___cdecl_FLoggedPlatformFile::GetStatData(wchar_t_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  (**(code **)((longlong)*this->LowerLevel + 0x130))
            (this->LowerLevel,__return_storage_ptr__,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_struct_FFileStatData___cdecl_FLoggedPlatformFile::GetStatData(wchar_t_const*___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTimeStamp @ 1416fc380

/* WARNING: Enum "Type": Some values do not have unique names */

FDateTime __thiscall FLoggedPlatformFile::GetTimeStamp(FLoggedPlatformFile *this,wchar_t *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  LARGE_INTEGER local_res8;
  FString local_38 [2];
  
  ::FString::PrintfImpl(local_38,L"GetTimeStamp %s");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar1.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar1.Data);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar1.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar1.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x101);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_struct_FDateTime___cdecl_FLoggedPlatformFile::GetTimeStamp(wchar_t_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  (**(code **)((longlong)*this->LowerLevel + 0xb0))(this->LowerLevel,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_struct_FDateTime___cdecl_FLoggedPlatformFile::GetTimeStamp(wchar_t_const*___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return (FDateTime)(long64)param_1;
}

// IsReadOnly @ 141702670

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLoggedPlatformFile::IsReadOnly(FLoggedPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"IsReadOnly %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0xe0);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::IsReadOnly(wchar_t_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x98))(this->LowerLevel,param_1);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::IsReadOnly(wchar_t_const*___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// IterateDirectory @ 141702aa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLoggedPlatformFile::IterateDirectory
          (FLoggedPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_58;
  undefined **local_48;
  undefined1 local_40;
  FDirectoryVisitor *local_38;
  
  ::FString::PrintfImpl(&local_58,L"IterateDirectory %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar2.Data = local_58.Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar2.Data = local_58.Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x183);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::IterateDirectory(wchar_t_const*___ptr64,IPlatformFile::FDirectoryVisitor&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  local_40 = 0;
  local_48 = &___7FLogVisitor_FLoggedPlatformFile__6B_;
  local_38 = param_2;
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x140))(this->LowerLevel,param_1,&local_48);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::IterateDirectory(wchar_t_const*___ptr64,IPlatformFile::FDirectoryVisitor&___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  local_48 = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// IterateDirectoryRecursively @ 141702cc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLoggedPlatformFile::IterateDirectoryRecursively
          (FLoggedPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_58;
  undefined **local_48;
  undefined1 local_40;
  FDirectoryVisitor *local_38;
  
  ::FString::PrintfImpl(&local_58,L"IterateDirectoryRecursively %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar2.Data = local_58.Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar2.Data = local_58.Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,399);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::IterateDirectoryRecursively(wchar_t_const*___ptr64,IPlatformFile::FDirectoryVisitor&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  local_40 = 0;
  local_48 = &___7FLogVisitor_FLoggedPlatformFile__6B_;
  local_38 = param_2;
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x1d0))(this->LowerLevel,param_1,&local_48);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::IterateDirectoryRecursively(wchar_t_const*___ptr64,IPlatformFile::FDirectoryVisitor&___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  local_48 = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// IterateDirectoryStat @ 141702ee0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLoggedPlatformFile::IterateDirectoryStat
          (FLoggedPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_48;
  undefined **local_38;
  FDirectoryStatVisitor *local_30;
  
  ::FString::PrintfImpl(&local_48,L"IterateDirectoryStat %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar2.Data = local_48.Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar2.Data = local_48.Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x1af);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::IterateDirectoryStat(wchar_t_const*___ptr64,IPlatformFile::FDirectoryStatVisitor&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  local_38 = &___7FLogStatVisitor_FLoggedPlatformFile__6B_;
  local_30 = param_2;
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x150))(this->LowerLevel,param_1,&local_38);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::IterateDirectoryStat(wchar_t_const*___ptr64,IPlatformFile::FDirectoryStatVisitor&___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  local_38 = &___7FDirectoryStatVisitor_IPlatformFile__6B_;
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// IterateDirectoryStatRecursively @ 1417030f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLoggedPlatformFile::IterateDirectoryStatRecursively
          (FLoggedPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_48;
  undefined **local_38;
  FDirectoryStatVisitor *local_30;
  
  ::FString::PrintfImpl(&local_48,L"IterateDirectoryStatRecursively %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar2.Data = local_48.Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar2.Data = local_48.Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x1bb);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::IterateDirectoryStatRecursively(wchar_t_const*___ptr64,IPlatformFile::FDirectoryStatVisitor&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  local_38 = &___7FLogStatVisitor_FLoggedPlatformFile__6B_;
  local_30 = param_2;
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x1e0))(this->LowerLevel,param_1,&local_38);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::IterateDirectoryStatRecursively(wchar_t_const*___ptr64,IPlatformFile::FDirectoryStatVisitor&___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  local_38 = &___7FDirectoryStatVisitor_IPlatformFile__6B_;
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// MoveFile @ 141705160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLoggedPlatformFile::MoveFile(FLoggedPlatformFile *this,wchar_t *param_1,wchar_t *param_2)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_38 [2];
  
  ::FString::PrintfImpl(local_38,L"MoveFile %s %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar2.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar2.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0xeb);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::MoveFile(wchar_t_const*___ptr64,wchar_t_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0xa0))(this->LowerLevel,param_1,param_2);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::MoveFile(wchar_t_const*___ptr64,wchar_t_const*___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// OpenAsyncRead @ 1417064a0

/* WARNING: Enum "Type": Some values do not have unique names */

IAsyncReadFileHandle * __thiscall
FLoggedPlatformFile::OpenAsyncRead(FLoggedPlatformFile *this,wchar_t *param_1,bool param_2)

{
  IAsyncReadFileHandle *pIVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_38 [2];
  
  ::FString::PrintfImpl(local_38,L"OpenAsyncRead %s");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar2.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar2.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x1f1);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_class_IAsyncReadFileHandle*___ptr64___cdecl_FLoggedPlatformFile::OpenAsyncRead(wchar_t_const*___ptr64,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  pIVar1 = (IAsyncReadFileHandle *)
           (**(code **)((longlong)*this->LowerLevel + 400))(this->LowerLevel,param_1,param_2);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_class_IAsyncReadFileHandle*___ptr64___cdecl_FLoggedPlatformFile::OpenAsyncRead(wchar_t_const*___ptr64,bool)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return pIVar1;
}

// OpenRead @ 141706e60

/* WARNING: Enum "Type": Some values do not have unique names */

IFileHandle * __thiscall
FLoggedPlatformFile::OpenRead(FLoggedPlatformFile *this,wchar_t *param_1,bool param_2)

{
  IFileHandle *pIVar1;
  FLoggedFileHandle *pFVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  LARGE_INTEGER local_res8;
  FString local_38 [2];
  
  ::FString::PrintfImpl(local_38,L"OpenRead %s");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar3.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar3.Data);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar3.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar3.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,300);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_class_IFileHandle*___ptr64___cdecl_FLoggedPlatformFile::OpenRead(wchar_t_const*___ptr64,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  pIVar1 = (IFileHandle *)
           (**(code **)((longlong)*this->LowerLevel + 0xe8))(this->LowerLevel,param_1,param_2);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_class_IFileHandle*___ptr64___cdecl_FLoggedPlatformFile::OpenRead(wchar_t_const*___ptr64,bool)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if ((pIVar1 == (IFileHandle *)0x0) ||
     (pFVar2 = ::operator_new(0x28), pFVar2 == (FLoggedFileHandle *)0x0)) {
    pFVar2 = (FLoggedFileHandle *)0x0;
  }
  else {
    pFVar2 = FLoggedFileHandle::FLoggedFileHandle(pFVar2,pIVar1,param_1,this);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return (IFileHandle *)pFVar2;
}

// OpenWrite @ 1417070f0

/* WARNING: Enum "Type": Some values do not have unique names */

IFileHandle * __thiscall
FLoggedPlatformFile::OpenWrite(FLoggedPlatformFile *this,wchar_t *param_1,bool param_2,bool param_3)

{
  IFileHandle *pIVar1;
  FLoggedFileHandle *pFVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  LARGE_INTEGER local_res8;
  FString local_38 [2];
  
  ::FString::PrintfImpl(local_38,L"OpenWrite %s %d %d");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar3.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar3.Data);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar3.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar3.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x137);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_class_IFileHandle*___ptr64___cdecl_FLoggedPlatformFile::OpenWrite(wchar_t_const*___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  pIVar1 = (IFileHandle *)
           (**(code **)((longlong)*this->LowerLevel + 0x110))
                     (this->LowerLevel,param_1,param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_class_IFileHandle*___ptr64___cdecl_FLoggedPlatformFile::OpenWrite(wchar_t_const*___ptr64,bool,bool)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if ((pIVar1 == (IFileHandle *)0x0) ||
     (pFVar2 = ::operator_new(0x28), pFVar2 == (FLoggedFileHandle *)0x0)) {
    pFVar2 = (FLoggedFileHandle *)0x0;
  }
  else {
    pFVar2 = FLoggedFileHandle::FLoggedFileHandle(pFVar2,pIVar1,param_1,this);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return (IFileHandle *)pFVar2;
}

// SetAsyncMinimumPriority @ 141710b30

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FLoggedPlatformFile::SetAsyncMinimumPriority
          (FLoggedPlatformFile *this,EAsyncIOPriorityAndFlags param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141710b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->LowerLevel + 0x1a0))();
  return;
}

// SetLowerLevel @ 1417114d0

void __thiscall FLoggedPlatformFile::SetLowerLevel(FLoggedPlatformFile *this,IPlatformFile *param_1)

{
  this->LowerLevel = param_1;
  return;
}

// SetReadOnly @ 141711800

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLoggedPlatformFile::SetReadOnly(FLoggedPlatformFile *this,wchar_t *param_1,bool param_2)

{
  undefined1 uVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_38 [2];
  
  ::FString::PrintfImpl(local_38,L"SetReadOnly %s %d");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar2.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar2.Data);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar2.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0xf6);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::SetReadOnly(wchar_t_const*___ptr64,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0xa8))(this->LowerLevel,param_1,param_2);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::SetReadOnly(wchar_t_const*___ptr64,bool)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// SetTimeStamp @ 1417121f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLoggedPlatformFile::SetTimeStamp(FLoggedPlatformFile *this,wchar_t *param_1,FDateTime param_2)

{
  ForAnyElementType FVar1;
  bool bVar2;
  LARGE_INTEGER local_res8;
  FString local_38 [2];
  
  ::FString::PrintfImpl(local_38,L"SetTimeStamp %s");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar1.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,(wchar_t *)FVar1.Data);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar1.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar1.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileLogWrapper.h"
               ,0x10c);
  }
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_void___cdecl_FLoggedPlatformFile::SetTimeStamp(wchar_t_const*___ptr64,FDateTime)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  (**(code **)((longlong)*this->LowerLevel + 0xb8))(this->LowerLevel,param_1,param_2.Ticks);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (4 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_void___cdecl_FLoggedPlatformFile::SetTimeStamp(wchar_t_const*___ptr64,FDateTime)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

