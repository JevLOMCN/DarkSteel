// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 11

// FRequestPayloadInFileStream @ 14314dd80

FRequestPayloadInFileStream * __thiscall
FRequestPayloadInFileStream::FRequestPayloadInFileStream
          (FRequestPayloadInFileStream *this,FString *param_1)

{
  this->_padding_ = (longlong)&___7FRequestPayloadInFileStream__6B_;
  ::FString::FString(&this->Filename,param_1);
  (this->File).Object = (FArchive *)0x0;
  (this->File).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bCloseWhenComplete = false;
  return this;
}

// FRequestPayloadInFileStream @ 14314ddc0

FRequestPayloadInFileStream * __thiscall
FRequestPayloadInFileStream::FRequestPayloadInFileStream
          (FRequestPayloadInFileStream *this,TSharedRef<FArchive,1> *param_1,bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FRequestPayloadInFileStream__6B_;
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  (this->File).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->File).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bCloseWhenComplete = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FRequestPayloadInFileStream @ 143150e10

void __thiscall
FRequestPayloadInFileStream::~FRequestPayloadInFileStream(FRequestPayloadInFileStream *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRequestPayloadInFileStream__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->File).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRequestPayload__6B_;
  return;
}

// Close @ 143158bb0

void __thiscall FRequestPayloadInFileStream::Close(FRequestPayloadInFileStream *this)

{
  FArchive *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (this->bCloseWhenComplete != false) {
    pFVar1 = (this->File).Object;
    if (pFVar1 != (FArchive *)0x0) {
      (**(code **)(*(longlong *)pFVar1 + 0x210))();
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->File != (TSharedPtr<FArchive,1> *)&local_18) {
        (this->File).Object = (FArchive *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->File).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    }
  }
  return;
}

// FillOutputBuffer @ 14315e2d0

ulong64 __thiscall
FRequestPayloadInFileStream::FillOutputBuffer
          (FRequestPayloadInFileStream *this,void *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  void *local_18;
  int iStack_10;
  
  pcVar1 = *(code **)(this->_padding_ + 0x20);
  if ((int)param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  iStack_10 = (int)param_2;
  local_18 = param_1;
  uVar3 = (*pcVar1)(this,&local_18,param_3);
  return uVar3;
}

// FillOutputBuffer @ 14315e350

ulong64 __thiscall
FRequestPayloadInFileStream::FillOutputBuffer
          (FRequestPayloadInFileStream *this,TArrayView<unsigned_char,int> *param_1,ulong64 param_2)

{
  FArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  
  if ((this->File).Object == (FArchive *)0x0) {
    return 0;
  }
  uVar4 = (**(code **)(this->_padding_ + 8))();
  if (uVar4 < param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SizeAlreadySent <= ContentLength",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\GenericPlatform\\HttpRequestPayload.cpp"
                       ,0x55,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  uVar6 = (longlong)param_1->ArrayNum;
  if (uVar4 - param_2 < (ulonglong)(longlong)param_1->ArrayNum) {
    uVar6 = uVar4 - param_2;
  }
  if (uVar6 != 0) {
    if ((this->File).Object == (FArchive *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
    }
    uVar5 = (**(code **)(*(longlong *)(this->File).Object + 0x28))();
    if (uVar5 != param_2) {
      if ((this->File).Object == (FArchive *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
      }
      pFVar1 = (this->File).Object;
      (**(code **)(*(longlong *)pFVar1 + 0x1b8))(pFVar1,param_2);
    }
    if ((this->File).Object == (FArchive *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
    }
    pFVar1 = (this->File).Object;
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,param_1->DataPtr,uVar6);
  }
  return uVar6;
}

// GetContent @ 143161c40

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FRequestPayloadInFileStream::GetContent(FRequestPayloadInFileStream *this)

{
  undefined1 local_res10 [24];
  
  `FRequestPayloadInFileStream::GetContent'::__l2::<lambda_1>::operator()(local_res10);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FRequestPayloadInFileStream::GetContent'::__l2::
             _dynamic_atexit_destructor_for__NotSupported__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &NotSupported;
}

// GetContentLength @ 143162090

ulong64 __thiscall FRequestPayloadInFileStream::GetContentLength(FRequestPayloadInFileStream *this)

{
  FArchive *pFVar1;
  ulong64 uVar2;
  
  pFVar1 = (this->File).Object;
  if (pFVar1 != (FArchive *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014316209c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)pFVar1 + 0x30))();
    return uVar2;
  }
  return 0;
}

// IsURLEncoded @ 14316cda0

bool __thiscall FRequestPayloadInFileStream::IsURLEncoded(FRequestPayloadInFileStream *this)

{
  return false;
}

// Open @ 143171c60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FRequestPayloadInFileStream::Open(FRequestPayloadInFileStream *this)

{
  TSharedPtr<FArchive,1> *pTVar1;
  IFileManager *pIVar2;
  FArchive *pFVar3;
  wchar_t *pwVar4;
  bool bVar5;
  FArchive *local_18;
  FSharedReferencer<1> local_10;
  
  pTVar1 = &this->File;
  bVar5 = false;
  if ((this->File).Object == (FArchive *)0x0) {
    if (1 < (this->Filename).Data.ArrayNum) {
      pIVar2 = IFileManager::Get();
      if ((this->Filename).Data.ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
      }
      pFVar3 = (FArchive *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,pwVar4,0);
      if (pFVar3 == (FArchive *)0x0) {
        if (2 < (byte)LogHttp._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
        return false;
      }
      local_18 = pFVar3;
      local_10.ReferenceController = ::operator_new(0x18);
      if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        (local_10.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        (local_10.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VFArchive__U__DefaultDeleter_VFArchive___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        (local_10.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        local_10.ReferenceController[1]._padding_ = (longlong)pFVar3;
      }
      if (pTVar1 != (TSharedPtr<FArchive,1> *)&local_18) {
        pTVar1->Object = pFVar3;
        local_18 = (FArchive *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->File).SharedReferenceCount,&local_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_10.ReferenceController);
      this->bCloseWhenComplete = true;
    }
    bVar5 = pTVar1->Object == (FArchive *)0x0;
  }
  return !bVar5;
}

// operator() @ 15049ba70

bool __thiscall `FRequestPayloadInFileStream::GetContent'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3811588075662868420>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3811588075662868420>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

