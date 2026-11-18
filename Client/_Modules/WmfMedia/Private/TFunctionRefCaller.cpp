// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 13

// Call @ 14eaa0cb0

EWorkItemResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWmfMediaTracks::FlushSamples'::__l2::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
::Call(void *param_1,TComPtr<IMFMediaEvent> *param_2,ulong *param_3,long *param_4,
      FBaseWorkItemState **param_5)

{
  long lVar1;
  ulong uVar2;
  FBaseWorkItemState *pFVar3;
  EWorkItemResult EVar4;
  
  lVar1 = *param_4;
  uVar2 = *param_3;
  pFVar3 = *param_5;
  param_5 = (FBaseWorkItemState **)param_2->RawPointer;
  param_2->RawPointer = (IMFMediaEvent *)0x0;
  EVar4 = `FWmfMediaTracks::FlushSamples'::__l2::<lambda_1>::operator()
                    (param_1,(IMFMediaEvent *)&param_5,uVar2,lVar1,pFVar3);
  return EVar4;
}

// Call @ 14eaa0cf0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWmfMediaPlayer::InitializePlayer'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  FWmfMediaTracks *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FWmfMediaTracks *this;
  FWmfMediaTracks *pFVar5;
  bool bVar6;
  FArchive *pFStackX_8;
  FString FStack_28;
  
  this = (FWmfMediaTracks *)0x0;
  pFVar1 = *(FWmfMediaTracks **)((longlong)param_1 + 0xf8);
  pFVar5 = pFVar1;
  if (pFVar1 != (FWmfMediaTracks *)0x0) {
    iVar3 = (int)pFVar1->_padding_;
    do {
      pFVar5 = this;
      if (iVar3 == 0) goto LAB_14ea989ad;
      LOCK();
      iVar4 = (int)pFVar1->_padding_;
      bVar6 = iVar3 == iVar4;
      if (bVar6) {
        *(int *)&pFVar1->_padding_ = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar6);
    pFVar5 = pFVar1;
    if (pFVar1 != (FWmfMediaTracks *)0x0) {
      this = *(FWmfMediaTracks **)((longlong)param_1 + 0xf0);
    }
  }
LAB_14ea989ad:
  if (this != (FWmfMediaTracks *)0x0) {
    FStack_28.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_1;
    FStack_28.Data._8_8_ = *(longlong *)((longlong)param_1 + 8);
    if (FStack_28.Data._8_8_ != 0) {
      LOCK();
      *(int *)(FStack_28.Data._8_8_ + 8) = *(int *)(FStack_28.Data._8_8_ + 8) + 1;
      UNLOCK();
    }
    WmfMedia::ResolveMediaSource
              ((TSharedPtr<FArchive,1> *)&pFStackX_8,&FStack_28,(bool)((char)param_1 + '\x10'));
    if ((this == (FWmfMediaTracks *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FWmfMediaTracks::Initialize
              (this,(IMFMediaSource *)pFStackX_8,(FString *)((longlong)param_1 + 0x10),
               (FMediaPlayerOptions *)((longlong)param_1 + 0x28));
    if (pFStackX_8 != (FArchive *)0x0) {
      (**(code **)((longlong)*(IMFMediaSource *)pFStackX_8 + 0x10))(pFStackX_8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return;
}

// Call @ 14eaa0d00

EWorkItemResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWmfMediaSession::RequestMoreVideoData'::__l2::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
::Call(void *param_1,TComPtr<IMFMediaEvent> *param_2,ulong *param_3,long *param_4,
      FBaseWorkItemState **param_5)

{
  long lVar1;
  ulong uVar2;
  FBaseWorkItemState *pFVar3;
  EWorkItemResult EVar4;
  
  lVar1 = *param_4;
  uVar2 = *param_3;
  pFVar3 = *param_5;
  param_5 = (FBaseWorkItemState **)param_2->RawPointer;
  param_2->RawPointer = (IMFMediaEvent *)0x0;
  EVar4 = `FWmfMediaSession::RequestMoreVideoData'::__l2::<lambda_1>::operator()
                    (param_1,(IMFMediaEvent *)&param_5,uVar2,lVar1,pFVar3);
  return EVar4;
}

// Call @ 14eaa0d40

EWorkItemResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWmfMediaSession::Seek'::__l2::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
::Call(void *param_1,TComPtr<IMFMediaEvent> *param_2,ulong *param_3,long *param_4,
      FBaseWorkItemState **param_5)

{
  long lVar1;
  ulong uVar2;
  FBaseWorkItemState *pFVar3;
  EWorkItemResult EVar4;
  
  lVar1 = *param_4;
  uVar2 = *param_3;
  pFVar3 = *param_5;
  param_5 = (FBaseWorkItemState **)param_2->RawPointer;
  param_2->RawPointer = (IMFMediaEvent *)0x0;
  EVar4 = `FWmfMediaSession::Seek'::__l2::<lambda_1>::operator()
                    (param_1,(IMFMediaEvent *)&param_5,uVar2,lVar1,pFVar3);
  return EVar4;
}

// Call @ 14eaa0d80

EWorkItemResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWmfMediaSession::SetRate'::__l2::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
::Call(void *param_1,TComPtr<IMFMediaEvent> *param_2,ulong *param_3,long *param_4,
      FBaseWorkItemState **param_5)

{
  long lVar1;
  ulong uVar2;
  FBaseWorkItemState *pFVar3;
  EWorkItemResult EVar4;
  
  lVar1 = *param_4;
  uVar2 = *param_3;
  pFVar3 = *param_5;
  param_5 = (FBaseWorkItemState **)param_2->RawPointer;
  param_2->RawPointer = (IMFMediaEvent *)0x0;
  EVar4 = `FWmfMediaSession::SetRate'::__l2::<lambda_1>::operator()
                    (param_1,(IMFMediaEvent *)&param_5,uVar2,lVar1,pFVar3);
  return EVar4;
}

// Call @ 14eaa0dc0

EWorkItemResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWmfMediaSession::SetTopology'::__l2::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
::Call(void *param_1,TComPtr<IMFMediaEvent> *param_2,ulong *param_3,long *param_4,
      FBaseWorkItemState **param_5)

{
  long lVar1;
  ulong uVar2;
  FBaseWorkItemState *pFVar3;
  EWorkItemResult EVar4;
  
  lVar1 = *param_4;
  uVar2 = *param_3;
  pFVar3 = *param_5;
  param_5 = (FBaseWorkItemState **)param_2->RawPointer;
  param_2->RawPointer = (IMFMediaEvent *)0x0;
  EVar4 = `FWmfMediaSession::SetTopology'::__l2::<lambda_1>::operator()
                    (param_1,(IMFMediaEvent *)&param_5,uVar2,lVar1,pFVar3);
  return EVar4;
}

// Call @ 14eaa0e00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FWmfMediaPlayer::InitializePlayer'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14eaa0e20

EWorkItemResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWmfMediaSession::HandleSessionEnded'::__l29::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
::Call(void *param_1,TComPtr<IMFMediaEvent> *param_2,ulong *param_3,long *param_4,
      FBaseWorkItemState **param_5)

{
  long lVar1;
  ulong uVar2;
  FBaseWorkItemState *pFVar3;
  EWorkItemResult EVar4;
  
  lVar1 = *param_4;
  uVar2 = *param_3;
  pFVar3 = *param_5;
  param_5 = (FBaseWorkItemState **)param_2->RawPointer;
  param_2->RawPointer = (IMFMediaEvent *)0x0;
  EVar4 = `FWmfMediaSession::HandleSessionEnded'::__l29::<lambda_1>::operator()
                    (param_1,(IMFMediaEvent *)&param_5,uVar2,lVar1,pFVar3);
  return EVar4;
}

// Call @ 14eaa0e60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWmfMediaSession::CommitRate'::__l121::<lambda_1>,void>::Call(void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 local_res8;
  LPCRITICAL_SECTION local_res10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x18);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    local_res10 = lpCriticalSection;
    EnterCriticalSection(lpCriticalSection);
    local_res8 = 0;
    FWmfMediaSession::ExecuteNextWorkItems
              (*(FWmfMediaSession **)param_1,(IMFMediaEvent *)&local_res8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014eaa0eaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ReportNotNullPtr();
}

// Call @ 14eaa0ed0

EWorkItemResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWmfMediaSession::HandleSessionTopologyStatus'::__l122::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
::Call(void *param_1,TComPtr<IMFMediaEvent> *param_2,ulong *param_3,long *param_4,
      FBaseWorkItemState **param_5)

{
  long lVar1;
  ulong uVar2;
  FBaseWorkItemState *pFVar3;
  EWorkItemResult EVar4;
  
  lVar1 = *param_4;
  uVar2 = *param_3;
  pFVar3 = *param_5;
  param_5 = (FBaseWorkItemState **)param_2->RawPointer;
  param_2->RawPointer = (IMFMediaEvent *)0x0;
  EVar4 = `FWmfMediaSession::HandleSessionTopologyStatus'::__l122::<lambda_1>::operator()
                    (param_1,(IMFMediaEvent *)&param_5,uVar2,lVar1,pFVar3);
  return EVar4;
}

// Call @ 14eaa0f10

FMediaTimeStamp * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWmfMediaTracks::AddTrackToTopology'::__l166::<lambda_1>,FMediaTimeStamp,FTimespan,enum_EMediaTrackType>
::Call(FMediaTimeStamp *__return_storage_ptr__,void *param_1,FTimespan *param_2,
      EMediaTrackType *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  long64 lVar2;
  
  lVar1 = *(longlong *)param_1;
  lVar2 = param_2->Ticks;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x128);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    __return_storage_ptr__->SequenceIndex = *(int *)(lVar1 + 0x2f0);
    __return_storage_ptr__->LoopIndex = *(int *)(lVar1 + 0x2f4);
    (__return_storage_ptr__->Time).Ticks = lVar2;
    LeaveCriticalSection(lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  ReportNotNullPtr();
}

// Call @ 14eaa0f90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWmfMediaTracks::AddTrackToTopology'::__l166::<lambda_2>,bool>::Call
          (void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x128);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    if (*(char *)(lVar2 + 0x2ec) == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lVar2 + 0x2e8);
    }
    iVar1 = *(int *)(lVar2 + 0x2f0);
    LeaveCriticalSection(lpCriticalSection);
    return iVar3 <= iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ReportNotNullPtr();
}

// Call @ 14eaa1000

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWmfMediaSession::CommitRate'::__l246::<lambda_2>,void>::Call(void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 local_res8;
  LPCRITICAL_SECTION local_res10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x18);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    local_res10 = lpCriticalSection;
    EnterCriticalSection(lpCriticalSection);
    local_res8 = 0;
    FWmfMediaSession::ExecuteNextWorkItems
              (*(FWmfMediaSession **)param_1,(IMFMediaEvent *)&local_res8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014eaa104f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ReportNotNullPtr();
}

