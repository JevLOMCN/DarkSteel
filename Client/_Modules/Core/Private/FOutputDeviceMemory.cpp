// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// FOutputDeviceMemory @ 1418bca60

FOutputDeviceMemory * __thiscall
FOutputDeviceMemory::FOutputDeviceMemory
          (FOutputDeviceMemory *this,int param_1,int param_2,bool param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  IFileManager *pIVar5;
  FOutputDeviceMemory *pFVar6;
  ForAnyElementType FVar7;
  ulonglong in_stack_ffffffffffffffb8;
  FString local_38;
  
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7FOutputDeviceMemory__6B_;
  FArchiveState::FArchiveState((FArchiveState *)&this->ArchiveProxy);
  (this->ArchiveProxy).OutputDevice = this;
  (this->ArchiveProxy)._padding_ =
       (longlong)&___7FOutputDeviceMemoryProxyArchive_FOutputDeviceMemory__6B_;
  piVar1 = &(this->Buffer).ArrayNum;
  this->PreserveSize = param_1;
  piVar2 = &(this->Buffer).ArrayMax;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  this->BufferStartPos = 0;
  this->BufferLength = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->BufferPosCritical,4000);
  *(bool *)&this->_padding_ = param_3;
  FGenericPlatformOutputDevices::GetAbsoluteLogFilename(&local_38);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  FOutputDeviceFile::CreateBackupCopy((wchar_t *)FVar7.Data);
  pIVar5 = IFileManager::Get();
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar5 + 0x38))
            (pIVar5,FVar7.Data,0,0,in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
  if (param_2 < param_1 * 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBufferSize >= InPreserveSize * 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceMemory.cpp"
                       ,0x22,L"FOutputDeviceMemory buffer size should be >= 2x PreserveSize");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FOutputDeviceMemory *)(*pcVar3)();
      return pFVar6;
    }
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_2,&(this->Buffer).AllocatorInstance,piVar1,piVar2);
  if ((char)this->_padding_ == '\0') {
    FGenericPlatformTime::StrTimestamp();
    FOutputDevice::LogfImpl((FOutputDevice *)this,L"Log file open, %s");
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FOutputDeviceMemory @ 1418bf120

void __thiscall FOutputDeviceMemory::~FOutputDeviceMemory(FOutputDeviceMemory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FOutputDeviceMemory__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->BufferPosCritical);
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)&this->ArchiveProxy);
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  return;
}

// CanBeUsedOnAnyThread @ 1418c9f70

bool __thiscall FOutputDeviceMemory::CanBeUsedOnAnyThread(FOutputDeviceMemory *this)

{
  return true;
}

// CanBeUsedOnPanicThread @ 1418c9fc0

bool __thiscall FOutputDeviceMemory::CanBeUsedOnPanicThread(FOutputDeviceMemory *this)

{
  return true;
}

// Dump @ 1418d70a0

void __thiscall FOutputDeviceMemory::Dump(FOutputDeviceMemory *this,FArchive *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->Buffer).ArrayNum;
  iVar2 = this->BufferLength;
  if (this->PreserveSize < this->BufferLength) {
    iVar2 = this->PreserveSize;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,(this->Buffer).AllocatorInstance.Data,(longlong)iVar2);
  if (this->BufferLength == iVar1) {
    (**(code **)(*(longlong *)param_1 + 0x188))
              (param_1,(this->Buffer).AllocatorInstance.Data + this->BufferStartPos,
               (longlong)(iVar1 - this->BufferStartPos));
  }
  iVar1 = this->PreserveSize;
  if (iVar1 < this->BufferLength) {
    (**(code **)(*(longlong *)param_1 + 0x188))
              (param_1,(this->Buffer).AllocatorInstance.Data + iVar1,
               (longlong)(this->BufferStartPos - iVar1));
  }
  return;
}

// Flush @ 1418daae0

void __thiscall FOutputDeviceMemory::Flush(FOutputDeviceMemory *this)

{
  return;
}

// IsMemoryOnly @ 1418e3300

bool __thiscall FOutputDeviceMemory::IsMemoryOnly(FOutputDeviceMemory *this)

{
  return true;
}

// Serialize @ 1418f5c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceMemory::Serialize
          (FOutputDeviceMemory *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  (**(code **)(this->_padding_ + 8))();
  return;
}

// Serialize @ 1418f5c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceMemory::Serialize
          (FOutputDeviceMemory *this,wchar_t *param_1,Type param_2,FName *param_3,double param_4)

{
  FOutputDeviceHelper::FormatCastAndSerializeLine
            ((FArchive *)&this->ArchiveProxy,param_1,param_2,param_3,param_4,
             SUB81(this->_padding_,0),*(bool *)((longlong)&this->_padding_ + 1));
  return;
}

// SerializeToBuffer @ 1418f8a20

void __thiscall
FOutputDeviceMemory::SerializeToBuffer(FOutputDeviceMemory *this,char *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = (this->Buffer).ArrayNum;
  if ((iVar1 < param_2) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3903348948135313498>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceMemory.cpp"
                         ,0x5a,"Length <= BufferCapacity"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2 != 0) {
    lpCriticalSection = &this->BufferPosCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar2 = this->BufferStartPos;
      iVar5 = iVar2 + param_2;
      iVar7 = param_2;
      if (iVar1 < iVar5) {
        iVar5 = this->PreserveSize;
        iVar7 = iVar1 - iVar2;
      }
      iVar6 = this->BufferLength + iVar7;
      this->BufferStartPos = iVar5;
      iVar5 = iVar1;
      if (iVar6 < iVar1) {
        iVar5 = iVar6;
      }
      this->BufferLength = iVar5;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      memcpy((this->Buffer).AllocatorInstance.Data + iVar2,param_1,(longlong)iVar7);
      param_1 = param_1 + iVar7;
      param_2 = param_2 - iVar7;
    } while (param_2 != 0);
  }
  return;
}

// TearDown @ 1418fa0c0

void __thiscall FOutputDeviceMemory::TearDown(FOutputDeviceMemory *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  IFileManager *pIVar3;
  longlong *plVar4;
  ForAnyElementType FVar5;
  FString local_18;
  
  if ((char)this->_padding_ == '\0') {
    FGenericPlatformTime::StrTimestamp();
    FOutputDevice::LogfImpl((FOutputDevice *)this,L"Log file closed, %s");
  }
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"DumpLogOnExitCrashOnly");
  if ((GIsCriticalError != false) || (!bVar1)) {
    FGenericPlatformOutputDevices::GetAbsoluteLogFilename(&local_18);
    pIVar3 = IFileManager::Get();
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar5.Data = local_18.Data.AllocatorInstance.Data;
    }
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,FVar5.Data,0x10);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(this->_padding_ + 0x30))(this,plVar4);
      (**(code **)(*plVar4 + 0x208))(plVar4);
      (**(code **)*plVar4)(plVar4,1);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

