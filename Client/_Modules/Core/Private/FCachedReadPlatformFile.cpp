// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 44

// ConvertToAbsolutePathForExternalAppForRead @ 1416e6720

FString * __thiscall
FCachedReadPlatformFile::ConvertToAbsolutePathForExternalAppForRead
          (FCachedReadPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  (**(code **)((longlong)*this->LowerLevel + 0x218))();
  return __return_storage_ptr__;
}

// ConvertToAbsolutePathForExternalAppForWrite @ 1416e6780

FString * __thiscall
FCachedReadPlatformFile::ConvertToAbsolutePathForExternalAppForWrite
          (FCachedReadPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  (**(code **)((longlong)*this->LowerLevel + 0x220))();
  return __return_storage_ptr__;
}

// CopyDirectoryTree @ 1416e67e0

bool __thiscall
FCachedReadPlatformFile::CopyDirectoryTree
          (FCachedReadPlatformFile *this,wchar_t *param_1,wchar_t *param_2,bool param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416e67e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x210))();
  return (bool)uVar1;
}

// CopyFile @ 1416e6820

bool __thiscall
FCachedReadPlatformFile::CopyFile
          (FCachedReadPlatformFile *this,wchar_t *param_1,wchar_t *param_2,EPlatformFileRead param_3
          ,EPlatformFileWrite param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416e6837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x208))();
  return (bool)uVar1;
}

// CreateDirectory @ 1416e7e60

bool __thiscall
FCachedReadPlatformFile::CreateDirectory(FCachedReadPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416e7e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x120))();
  return (bool)uVar1;
}

// CreateDirectoryTree @ 1416e8050

bool __thiscall
FCachedReadPlatformFile::CreateDirectoryTree(FCachedReadPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416e8057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x200))();
  return (bool)uVar1;
}

// DeleteDirectory @ 1416e9bc0

bool __thiscall
FCachedReadPlatformFile::DeleteDirectory(FCachedReadPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416e9bc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x128))();
  return (bool)uVar1;
}

// DeleteDirectoryRecursively @ 1416e9db0

bool __thiscall
FCachedReadPlatformFile::DeleteDirectoryRecursively(FCachedReadPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416e9db7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x1f8))();
  return (bool)uVar1;
}

// DeleteFile @ 1416e9fa0

bool __thiscall FCachedReadPlatformFile::DeleteFile(FCachedReadPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416e9fa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x88))();
  return (bool)uVar1;
}

// DirectoryExists @ 1416ebab0

bool __thiscall
FCachedReadPlatformFile::DirectoryExists(FCachedReadPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ebab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x118))();
  return (bool)uVar1;
}

// FileExists @ 1416edb80

bool __thiscall FCachedReadPlatformFile::FileExists(FCachedReadPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416edb87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x78))();
  return (bool)uVar1;
}

// FileJournalGetFileData @ 1416edd60

FFileJournalData * __thiscall
FCachedReadPlatformFile::FileJournalGetFileData
          (FCachedReadPlatformFile *this,FFileJournalData *__return_storage_ptr__,wchar_t *param_1,
          FString *param_2)

{
  (**(code **)((longlong)*this->LowerLevel + 0x178))();
  return __return_storage_ptr__;
}

// FileJournalGetLatestEntry @ 1416eddf0

EFileJournalResult __thiscall
FCachedReadPlatformFile::FileJournalGetLatestEntry
          (FCachedReadPlatformFile *this,wchar_t *param_1,ulong64 *param_2,ulong64 *param_3,
          FString *param_4)

{
  EFileJournalResult EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416eddfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*this->LowerLevel + 0x168))();
  return EVar1;
}

// FileJournalGetMaximumSize @ 1416ede50

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FCachedReadPlatformFile::FileJournalGetMaximumSize
          (FCachedReadPlatformFile *this,wchar_t *param_1,Type *param_2,FString *param_3)

{
  ulong64 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ede57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x160))();
  return uVar1;
}

// FileJournalGetVolumeName @ 1416edeb0

FString * __thiscall
FCachedReadPlatformFile::FileJournalGetVolumeName
          (FCachedReadPlatformFile *this,FString *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

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

// FileJournalIsAvailable @ 1416edf70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCachedReadPlatformFile::FileJournalIsAvailable
          (FCachedReadPlatformFile *this,wchar_t *param_1,Type *param_2,FString *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416edf77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x158))();
  return (bool)uVar1;
}

// FileJournalIterateDirectory @ 1416edfd0

bool __thiscall
FCachedReadPlatformFile::FileJournalIterateDirectory
          (FCachedReadPlatformFile *this,wchar_t *param_1,
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

// FileJournalReadModified @ 1416ee090

EFileJournalResult __thiscall
FCachedReadPlatformFile::FileJournalReadModified
          (FCachedReadPlatformFile *this,wchar_t *param_1,ulong64 *param_2,ulong64 *param_3,
          TMap<FFileJournalFileHandle,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileJournalFileHandle,FString,0>_>
          *param_4,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_5,
          ulong64 *param_6,FString *param_7)

{
  EFileJournalResult EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ee09e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*this->LowerLevel + 0x180))();
  return EVar1;
}

// FileSize @ 1416ee0f0

long64 __thiscall FCachedReadPlatformFile::FileSize(FCachedReadPlatformFile *this,wchar_t *param_1)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ee0f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)((longlong)*this->LowerLevel + 0x80))();
  return lVar1;
}

// FindFiles @ 1416eefe0

void __thiscall
FCachedReadPlatformFile::FindFiles
          (FCachedReadPlatformFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,wchar_t *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001416eefe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->LowerLevel + 0x1e8))();
  return;
}

// FindFilesRecursively @ 1416ef000

void __thiscall
FCachedReadPlatformFile::FindFilesRecursively
          (FCachedReadPlatformFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,wchar_t *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001416ef007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->LowerLevel + 0x1f0))();
  return;
}

// GetAccessTimeStamp @ 1416f17d0

FDateTime __thiscall
FCachedReadPlatformFile::GetAccessTimeStamp(FCachedReadPlatformFile *this,wchar_t *param_1)

{
  (**(code **)((longlong)*this->LowerLevel + 0xc0))();
  return (FDateTime)(long64)param_1;
}

// GetFilenameOnDisk @ 1416f82c0

FString * __thiscall
FCachedReadPlatformFile::GetFilenameOnDisk
          (FCachedReadPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  (**(code **)((longlong)*this->LowerLevel + 200))();
  return __return_storage_ptr__;
}

// GetLowerLevel @ 1416f8ac0

IPlatformFile * __thiscall FCachedReadPlatformFile::GetLowerLevel(FCachedReadPlatformFile *this)

{
  return this->LowerLevel;
}

// GetName @ 1416f8bd0

wchar_t * __thiscall FCachedReadPlatformFile::GetName(FCachedReadPlatformFile *this)

{
  return L"CachedReadFile";
}

// GetStatData @ 1416fb7d0

FFileStatData * __thiscall
FCachedReadPlatformFile::GetStatData
          (FCachedReadPlatformFile *this,FFileStatData *__return_storage_ptr__,wchar_t *param_1)

{
  (**(code **)((longlong)*this->LowerLevel + 0x130))();
  return __return_storage_ptr__;
}

// GetTimeStamp @ 1416fc350

FDateTime __thiscall
FCachedReadPlatformFile::GetTimeStamp(FCachedReadPlatformFile *this,wchar_t *param_1)

{
  (**(code **)((longlong)*this->LowerLevel + 0xb0))();
  return (FDateTime)(long64)param_1;
}

// Initialize @ 1416fe930

bool __thiscall
FCachedReadPlatformFile::Initialize
          (FCachedReadPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IPlatformFile *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inner != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileCachedWrapper.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  this->LowerLevel = param_1;
  return param_1 != (IPlatformFile *)0x0;
}

// IsReadOnly @ 141702650

bool __thiscall FCachedReadPlatformFile::IsReadOnly(FCachedReadPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141702657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x98))();
  return (bool)uVar1;
}

// IterateDirectory @ 141702a80

bool __thiscall
FCachedReadPlatformFile::IterateDirectory
          (FCachedReadPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141702a87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x140))();
  return (bool)uVar1;
}

// IterateDirectoryRecursively @ 141702ca0

bool __thiscall
FCachedReadPlatformFile::IterateDirectoryRecursively
          (FCachedReadPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141702ca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x1d0))();
  return (bool)uVar1;
}

// IterateDirectoryStat @ 141702ec0

bool __thiscall
FCachedReadPlatformFile::IterateDirectoryStat
          (FCachedReadPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141702ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x150))();
  return (bool)uVar1;
}

// IterateDirectoryStatRecursively @ 1417030d0

bool __thiscall
FCachedReadPlatformFile::IterateDirectoryStatRecursively
          (FCachedReadPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001417030d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x1e0))();
  return (bool)uVar1;
}

// MoveFile @ 141705140

bool __thiscall
FCachedReadPlatformFile::MoveFile(FCachedReadPlatformFile *this,wchar_t *param_1,wchar_t *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141705147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0xa0))();
  return (bool)uVar1;
}

// OpenAsyncRead @ 141706480

IAsyncReadFileHandle * __thiscall
FCachedReadPlatformFile::OpenAsyncRead(FCachedReadPlatformFile *this,wchar_t *param_1,bool param_2)

{
  IAsyncReadFileHandle *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141706487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IAsyncReadFileHandle *)(**(code **)((longlong)*this->LowerLevel + 400))();
  return pIVar1;
}

// OpenMappedEx @ 141706dd0

TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError> *
__thiscall
FCachedReadPlatformFile::OpenMappedEx
          (FCachedReadPlatformFile *this,
          TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenReadFlags param_2,long64 param_3)

{
  (**(code **)((longlong)*this->LowerLevel + 0x1b0))();
  return __return_storage_ptr__;
}

// OpenRead @ 141706e10

IFileHandle * __thiscall
FCachedReadPlatformFile::OpenRead(FCachedReadPlatformFile *this,wchar_t *param_1,bool param_2)

{
  IFileHandle *pIVar1;
  FCachedFileHandle *pFVar2;
  
  pIVar1 = (IFileHandle *)(**(code **)((longlong)*this->LowerLevel + 0xe8))();
  if (pIVar1 != (IFileHandle *)0x0) {
    pFVar2 = ::operator_new(0x20058);
    if (pFVar2 != (FCachedFileHandle *)0x0) {
      pFVar2 = FCachedFileHandle::FCachedFileHandle(pFVar2,pIVar1,true,false);
      return (IFileHandle *)pFVar2;
    }
  }
  return (IFileHandle *)0x0;
}

// OpenWrite @ 141707080

IFileHandle * __thiscall
FCachedReadPlatformFile::OpenWrite
          (FCachedReadPlatformFile *this,wchar_t *param_1,bool param_2,bool param_3)

{
  IFileHandle *pIVar1;
  FCachedFileHandle *pFVar2;
  undefined7 in_register_00000081;
  
  pIVar1 = (IFileHandle *)
           (**(code **)((longlong)*this->LowerLevel + 0x110))
                     (this->LowerLevel,param_1,CONCAT71(in_register_00000081,param_2));
  if (pIVar1 != (IFileHandle *)0x0) {
    pFVar2 = ::operator_new(0x20058);
    if (pFVar2 != (FCachedFileHandle *)0x0) {
      pFVar2 = FCachedFileHandle::FCachedFileHandle(pFVar2,pIVar1,param_3,true);
      return (IFileHandle *)pFVar2;
    }
  }
  return (IFileHandle *)0x0;
}

// SendMessageToServer @ 14170fee0

bool __thiscall
FCachedReadPlatformFile::SendMessageToServer
          (FCachedReadPlatformFile *this,wchar_t *param_1,IFileServerMessageHandler *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014170fee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x228))();
  return (bool)uVar1;
}

// SetAsyncMinimumPriority @ 141710b10

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FCachedReadPlatformFile::SetAsyncMinimumPriority
          (FCachedReadPlatformFile *this,EAsyncIOPriorityAndFlags param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141710b17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->LowerLevel + 0x1a0))();
  return;
}

// SetLowerLevel @ 1417114c0

void __thiscall
FCachedReadPlatformFile::SetLowerLevel(FCachedReadPlatformFile *this,IPlatformFile *param_1)

{
  this->LowerLevel = param_1;
  return;
}

// SetReadOnly @ 1417117e0

bool __thiscall
FCachedReadPlatformFile::SetReadOnly(FCachedReadPlatformFile *this,wchar_t *param_1,bool param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001417117e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0xa8))();
  return (bool)uVar1;
}

// SetTimeStamp @ 1417121d0

void __thiscall
FCachedReadPlatformFile::SetTimeStamp
          (FCachedReadPlatformFile *this,wchar_t *param_1,FDateTime param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001417121d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->LowerLevel + 0xb8))();
  return;
}

// ShouldBeUsed @ 1417128a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCachedReadPlatformFile::ShouldBeUsed
          (FCachedReadPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = FParse::Param(param_2,L"NoCachedReadFile");
  if (bVar1) {
    bVar1 = false;
  }
  else {
    bVar2 = FParse::Param(param_2,L"CachedReadFile");
    bVar1 = false;
    if (bVar2) {
      bVar1 = true;
    }
  }
  if (5 < (byte)LogPlatformFile._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_virtual_bool___cdecl_FCachedReadPlatformFile::ShouldBeUsed(IPlatformFile*___ptr64,wchar_t_const*___ptr64)const___ptr64'
                ::__l11::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
  }
  return bVar1;
}

