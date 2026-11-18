// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 30

// Call @ 142a60580

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OverlappingNodesInIntervalTreeMask<FPakPrecacher::FCacheBlock>'::__l2::<lambda_1>,bool,unsigned_int>
::Call(void *param_1,uint *param_2)

{
  MaskInterval<FPakPrecacher::FCacheBlock>
            (*param_2,*(TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> **)param_1,
             *(ulong64 *)((longlong)param_1 + 8),*(ulong64 *)((longlong)param_1 + 0x10),
             *(uint *)((longlong)param_1 + 0x18),*(ulong64 **)((longlong)param_1 + 0x20));
  return true;
}

// Call @ 142a605c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OverlappingNodesInIntervalTreeMask<FPakPrecacher::FPakInRequest>'::__l2::<lambda_1>,bool,unsigned_int>
::Call(void *param_1,uint *param_2)

{
  MaskInterval<FPakPrecacher::FPakInRequest>
            (*param_2,*(TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> **)param_1,
             *(ulong64 *)((longlong)param_1 + 8),*(ulong64 *)((longlong)param_1 + 0x10),
             *(uint *)((longlong)param_1 + 0x18),*(ulong64 **)((longlong)param_1 + 0x20));
  return true;
}

// Call @ 142a60600

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakAsyncReadFileHandle::FPakAsyncReadFileHandle'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
::Call(void *param_1,bool *param_2,IAsyncReadRequest **param_3)

{
  FPakAsyncReadFileHandle::RawReadCallback(*(FPakAsyncReadFileHandle **)param_1,*param_2,*param_3);
  return;
}

// Call @ 142a60620

/* WARNING: Enum "EVersion": Some values do not have unique names */

FSharedPakReader * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPlatformFile::CreatePakFileHandle'::__l2::<lambda_1>,FSharedPakReader>::Call
          (FSharedPakReader *__return_storage_ptr__,void *param_1)

{
  FPakFile::GetSharedReader
            (*(FPakFile **)param_1,__return_storage_ptr__,*(IPlatformFile **)((longlong)param_1 + 8)
            );
  return __return_storage_ptr__;
}

// Call @ 142a60650

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FCompressionScratchBuffersStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x68);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFCompressionScratchBuffersStack____6B_;
    DVar1 = GetCurrentThreadId();
    *(undefined1 *)(pFVar2 + 2) = 0;
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FCompressionScratchBuffersStack__6B_;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0xffffffffffffffff;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 10) = 0;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)&pFVar2[10].field_0x4 = 0xffffffff;
    pFVar2[0xc] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 142a60660

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::GetCompletedRequestData'::__l2::<lambda_1>,bool,unsigned_int>::
Call(void *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = `FPakPrecacher::GetCompletedRequestData'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142a60670

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPlatformFile::Initialize'::__l2::<lambda_1>,bool,float>::Call
          (void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `FPakPlatformFile::Initialize'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142a60680

FPakEntryPair * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakFile::LoadLegacyIndex'::__l2::<lambda_1>,FPakEntryPair_&>::Call
          (void *param_1)

{
  ::operator<<(*(FArchive **)((longlong)param_1 + 8),*(FString **)param_1);
  FPakEntry::Reset((FPakEntry *)(*(longlong *)param_1 + 0x10));
  FPakEntry::Serialize
            ((FPakEntry *)(*(longlong *)param_1 + 0x10),*(FArchive **)((longlong)param_1 + 8),
             *(int *)(*(longlong *)((longlong)param_1 + 0x10) + 0x7c));
  return *(FPakEntryPair **)param_1;
}

// Call @ 142a606d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::StartBlockTask'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
::Call(void *param_1,bool *param_2,IAsyncReadRequest **param_3)

{
  `FPakPrecacher::StartBlockTask'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 142a606f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::Unmount'::__l7::<lambda_1>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Pak cannot be unmounted with outstanding requests\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x93f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  **(undefined1 **)param_1 = 1;
  return false;
}

// Call @ 142a60740

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::GetNextBlock'::__l24::<lambda_1>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = `FPakPrecacher::GetNextBlock'::__l24::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142a60750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l31::<lambda_1>,void,UE::FIoFileReadResult_&&>
::Call(void *param_1,FIoFileReadResult *param_2)

{
  byte *pbVar1;
  byte bVar2;
  FIoRequestImpl *pFVar3;
  longlong lVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  code *pcVar5;
  atomic<unsigned___int64> aVar6;
  bool bVar7;
  FReadAccessScope FStack_28;
  
  pFVar3 = param_2->UserData;
  if ((param_2->ErrorCode != Ok) && (pFVar3->LastBackendError != Cancelled)) {
    pFVar3->LastBackendError = ReadError;
  }
  lVar4 = *(longlong *)param_1;
  LOCK();
  bVar7 = *(char *)(lVar4 + 0x50) == '\0';
  if (bVar7) {
    *(char *)(lVar4 + 0x50) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow((FMutex *)(lVar4 + 0x50));
  }
  TIntrusiveList<UE::Private::FIoRequestListTraits>::AddTail
            ((TIntrusiveList<UE::Private::FIoRequestListTraits> *)(*(longlong *)param_1 + 0x40),
             pFVar3);
  LOCK();
  pbVar1 = (byte *)(lVar4 + 0x50);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - 1;
  UNLOCK();
  if ((bVar2 & 2) != 0) {
    FMutex::WakeWaitingThread((FMutex *)(lVar4 + 0x50));
  }
  lVar4 = *(longlong *)param_1;
  if ((*(longlong *)(lVar4 + 8) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)(lVar4 + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&FStack_28);
  if (*(int *)&this[2].AccessDetector.State == 0) {
    aVar6 = (atomic<unsigned___int64>)0x0;
  }
  else {
    aVar6 = this[1].AccessDetector.State;
  }
  (**(code **)(*(longlong *)aVar6 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// Call @ 142a60760

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::TrimCache'::__l44::<lambda_1>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = `FPakPrecacher::TrimCache'::__l44::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142a60770

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::AddNewBlock'::__l65::<lambda_1>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = `FPakPrecacher::AddNewBlock'::__l65::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142a60780

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::CompleteRequest'::__l117::<lambda_1>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = `FPakPrecacher::CompleteRequest'::__l117::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142a60790

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPlatformFile::ForeachPackageInIostoreWhile'::__l12::<lambda_1>,bool,TStringView<wchar_t>,unsigned_int>
::Call(void *param_1,TStringView<wchar_t> *param_2,uint *param_3)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar1 = `FPakPlatformFile::ForeachPackageInIostoreWhile'::__l12::<lambda_1>::operator()
                    (param_1,&local_18,*param_3);
  return bVar1;
}

// Call @ 142a607c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::RemoveRequest'::__l12::<lambda_1>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = `FPakPrecacher::RemoveRequest'::__l12::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142a607d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::AddRequest'::__l15::<lambda_1>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = `FPakPrecacher::AddRequest'::__l15::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142a607e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::Unmount'::__l7::<lambda_2>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Pak cannot be unmounted with outstanding requests\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x94f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  **(undefined1 **)param_1 = 1;
  return false;
}

// Call @ 142a60830

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::AddRequest'::__l26::<lambda_2>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = `FPakPrecacher::AddRequest'::__l26::<lambda_2>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142a60840

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l30::<lambda_2>,void,UE::FIoFileReadResult_&&>
::Call(void *param_1,FIoFileReadResult *param_2)

{
  byte *pbVar1;
  byte bVar2;
  FIoRequestImpl *pFVar3;
  longlong lVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  code *pcVar5;
  atomic<unsigned___int64> aVar6;
  bool bVar7;
  FReadAccessScope FStack_28;
  
  pFVar3 = param_2->UserData;
  if (((pFVar3->LastBackendError != Cancelled) && (param_2->ErrorCode != Ok)) &&
     (pFVar3->LastBackendError = ReadError, param_2->ErrorCode == SignatureError)) {
    IoStore::FFileIoDispatcherBackend::HandleSignatureError
              (*(FFileIoDispatcherBackend **)param_1,pFVar3,param_2->FailedBlockId);
  }
  lVar4 = *(longlong *)param_1;
  LOCK();
  bVar7 = *(char *)(lVar4 + 0x50) == '\0';
  if (bVar7) {
    *(char *)(lVar4 + 0x50) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow((FMutex *)(lVar4 + 0x50));
  }
  TIntrusiveList<UE::Private::FIoRequestListTraits>::AddTail
            ((TIntrusiveList<UE::Private::FIoRequestListTraits> *)(*(longlong *)param_1 + 0x40),
             pFVar3);
  LOCK();
  pbVar1 = (byte *)(lVar4 + 0x50);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - 1;
  UNLOCK();
  if ((bVar2 & 2) != 0) {
    FMutex::WakeWaitingThread((FMutex *)(lVar4 + 0x50));
  }
  lVar4 = *(longlong *)param_1;
  if ((*(longlong *)(lVar4 + 8) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)(lVar4 + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&FStack_28);
  if (*(int *)&this[2].AccessDetector.State == 0) {
    aVar6 = (atomic<unsigned___int64>)0x0;
  }
  else {
    aVar6 = this[1].AccessDetector.State;
  }
  (**(code **)(*(longlong *)aVar6 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// Call @ 142a60850

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::AddNewBlock'::__l62::<lambda_2>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x704,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// Call @ 142a60890

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::TrimCache'::__l81::<lambda_2>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = `FPakPrecacher::TrimCache'::__l81::<lambda_2>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142a608a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::RemoveRequest'::__l12::<lambda_2>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = `FPakPrecacher::RemoveRequest'::__l12::<lambda_2>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142a608b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::Unmount'::__l9::<lambda_3>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Pak cannot be unmounted with outstanding requests\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x961,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  **(undefined1 **)param_1 = 1;
  return false;
}

// Call @ 142a60900

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::AddRequest'::__l33::<lambda_3>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x47c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return true;
}

// Call @ 142a60940

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::AddNewBlock'::__l62::<lambda_3>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x713,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// Call @ 142a60980

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::TrimCache'::__l124::<lambda_3>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = `FPakPrecacher::TrimCache'::__l124::<lambda_3>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142a60990

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::Unmount'::__l9::<lambda_4>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Pak cannot be unmounted with outstanding requests\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x971,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  **(undefined1 **)param_1 = 1;
  return false;
}

// Call @ 142a609e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPakPrecacher::Unmount'::__l9::<lambda_5>,bool,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Pak cannot be unmounted with outstanding requests\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x981,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  **(undefined1 **)param_1 = 1;
  return false;
}

