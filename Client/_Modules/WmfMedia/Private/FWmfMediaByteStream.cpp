// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 25

// FWmfMediaByteStream @ 14ea95330

FWmfMediaByteStream * __thiscall
FWmfMediaByteStream::FWmfMediaByteStream(FWmfMediaByteStream *this,TSharedRef<FArchive,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->AsyncReadInProgress = false;
  this->_padding_ = (longlong)&_vftable__for__IMFAsyncCallback__;
  this->_padding_ = (longlong)&_vftable__for__IMFByteStream__;
  (this->Archive).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Archive).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  this->RefCount = 0;
  return this;
}

// ~FWmfMediaByteStream @ 14ea975c0

void __thiscall FWmfMediaByteStream::~FWmfMediaByteStream(FWmfMediaByteStream *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&_vftable__for__IMFAsyncCallback__;
  this->_padding_ = (longlong)&_vftable__for__IMFByteStream__;
  if (this->RefCount != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RefCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaByteStream.cpp"
                       ,0x19,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Archive).SharedReferenceCount.ReferenceController);
  return;
}

// AddRef @ 14ea9b380

ulong __thiscall FWmfMediaByteStream::AddRef(FWmfMediaByteStream *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

// AddRef`adjustor{8}' @ 14ea9b394

/* [thunk]:public: virtual unsigned long __cdecl FWmfMediaByteStream::AddRef`adjustor{8}' (void)
   __ptr64 */

ulong __thiscall FWmfMediaByteStream::AddRef_adjustor_8__(FWmfMediaByteStream *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWmfMediaByteStream *)&this[-1].RefCount);
  return uVar1;
}

// BeginRead @ 14eaa0a70

HRESULT __thiscall
FWmfMediaByteStream::BeginRead
          (FWmfMediaByteStream *this,uchar *param_1,ulong param_2,IMFAsyncCallback *param_3,
          IUnknown *param_4)

{
  HRESULT HVar1;
  IUnknown *punkObject;
  IMFAsyncResult *local_res20;
  
  if ((param_3 == (IMFAsyncCallback *)0x0) || (param_1 == (uchar *)0x0)) {
    HVar1 = -0x7ff8ffa9;
  }
  else {
    punkObject = ::operator_new(0x20);
    if (punkObject == (IUnknown *)0x0) {
      punkObject = (IUnknown *)0x0;
    }
    else {
      punkObject->lpVtbl = (IUnknownVtbl *)&___7FWmfMediaReadState__6B_;
      punkObject[1].lpVtbl = (IUnknownVtbl *)0x0;
      punkObject[2].lpVtbl = (IUnknownVtbl *)param_1;
      *(ulong *)&punkObject[3].lpVtbl = param_2;
      *(undefined4 *)((longlong)&punkObject[3].lpVtbl + 4) = 0;
      if (punkObject != (IUnknown *)0x0) {
        (*(code *)PTR_AddRef_152ffc2f0)(punkObject);
      }
    }
    if (punkObject == (IUnknown *)0x0) {
      HVar1 = -0x7ff8fff2;
    }
    else {
      local_res20 = (IMFAsyncResult *)0x0;
      HVar1 = MFCreateAsyncResult(punkObject,(IMFAsyncCallback *)param_3,(IUnknown *)param_4,
                                  &local_res20);
      if (-1 < HVar1) {
        *(undefined1 *)&this->_padding_ = 1;
        HVar1 = MFPutWorkItem(1,(IMFAsyncCallback *)&this[-1].RefCount,(IUnknown *)local_res20);
        (*local_res20->lpVtbl->Release)(local_res20);
      }
    }
    if (punkObject != (IUnknown *)0x0) {
      (*punkObject->lpVtbl->Release)(punkObject);
    }
  }
  return HVar1;
}

// BeginWrite @ 14eaa0b80

undefined4 __thiscall
FWmfMediaByteStream::BeginWrite
          (FWmfMediaByteStream *this,uchar *param_1,ulong param_2,IMFAsyncCallback *param_3,
          IUnknown *param_4)

{
  return 0x80004001;
}

// Close @ 14eaa1470

undefined4 __thiscall FWmfMediaByteStream::Close(FWmfMediaByteStream *this)

{
  return 0;
}

// EndRead @ 14eaa9760

undefined4 __thiscall
FWmfMediaByteStream::EndRead(FWmfMediaByteStream *this,IMFAsyncResult *param_1,ulong *param_2)

{
  longlong *local_res18 [2];
  
  if (param_2 == (ulong *)0x0) {
    return 0x80070057;
  }
  (**(code **)((longlong)*param_1 + 0x30))(param_1,local_res18);
  *param_2 = *(ulong *)(local_res18[0] + 1);
  (**(code **)(*local_res18[0] + 0x10))();
  *(undefined1 *)&this->_padding_ = 0;
  return 0;
}

// EndWrite @ 14eaa97c0

undefined4 __thiscall
FWmfMediaByteStream::EndWrite(FWmfMediaByteStream *this,IMFAsyncResult *param_1,ulong *param_2)

{
  return 0x80004001;
}

// Flush @ 14eaabfa0

undefined4 __thiscall FWmfMediaByteStream::Flush(FWmfMediaByteStream *this)

{
  return 0x80004001;
}

// GetCapabilities @ 14eaac9b0

undefined4 __thiscall FWmfMediaByteStream::GetCapabilities(FWmfMediaByteStream *this,ulong *param_1)

{
  FSharedReferencer<1> *lpCriticalSection;
  
  lpCriticalSection = &(this->Archive).SharedReferenceCount;
  if (lpCriticalSection != (FSharedReferencer<1> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *param_1 = 5;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetCurrentPosition @ 14eaacf40

undefined4 __thiscall
FWmfMediaByteStream::GetCurrentPosition(FWmfMediaByteStream *this,ulong64 *param_1)

{
  FSharedReferencer<1> *lpCriticalSection;
  ulong64 uVar1;
  
  lpCriticalSection = &(this->Archive).SharedReferenceCount;
  if (lpCriticalSection != (FSharedReferencer<1> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = (**(code **)(**(longlong **)&this->AsyncReadInProgress + 0x28))();
    *param_1 = uVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetLength @ 14eaad9a0

undefined4 __thiscall FWmfMediaByteStream::GetLength(FWmfMediaByteStream *this,ulong64 *param_1)

{
  FSharedReferencer<1> *lpCriticalSection;
  ulong64 uVar1;
  
  lpCriticalSection = &(this->Archive).SharedReferenceCount;
  if (lpCriticalSection != (FSharedReferencer<1> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = (**(code **)(**(longlong **)&this->AsyncReadInProgress + 0x30))();
    *param_1 = uVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetParameters @ 14eaae6e0

undefined4 __thiscall
FWmfMediaByteStream::GetParameters(FWmfMediaByteStream *this,ulong *param_1,ulong *param_2)

{
  return 0x80004001;
}

// Invoke @ 14eab5390

undefined4 __thiscall FWmfMediaByteStream::Invoke(FWmfMediaByteStream *this,IMFAsyncResult *param_1)

{
  IUnknown *pIVar1;
  int iVar2;
  HRESULT HVar3;
  uint local_res10 [2];
  IMFAsyncResult *local_res18;
  IUnknown *local_res20;
  longlong *local_18 [2];
  
  local_18[0] = (longlong *)0x0;
  iVar2 = (**(code **)((longlong)*param_1 + 0x18))(param_1,local_18);
  if (-1 < iVar2) {
    local_res18 = (IMFAsyncResult *)0x0;
    iVar2 = (**(code **)*local_18[0])
                      (local_18[0],&_GUID_ac6b7889_0740_4d51_8619_905994a55cc6,&local_res18);
    if ((-1 < iVar2) &&
       ((local_res20 = (IUnknown *)0x0, local_res18 == (IMFAsyncResult *)0x0 ||
        (HVar3 = (*local_res18->lpVtbl->GetObjectA)(local_res18,&local_res20), -1 < HVar3)))) {
      pIVar1 = local_res20;
      (**(code **)(this->_padding_ + 0x48))
                (&this->_padding_,local_res20[2].lpVtbl,
                 *(int *)&local_res20[3].lpVtbl - *(int *)&local_res20[1].lpVtbl,local_res10);
      pIVar1[1].lpVtbl =
           (IUnknownVtbl *)
           ((longlong)&(pIVar1[1].lpVtbl)->QueryInterface + (ulonglong)local_res10[0]);
      if (local_res18 != (IMFAsyncResult *)0x0) {
        (*local_res18->lpVtbl->SetStatus)(local_res18,0);
        MFInvokeCallback(local_res18);
        if (local_res18 != (IMFAsyncResult *)0x0) {
          (*local_res18->lpVtbl->Release)(local_res18);
        }
      }
      if (local_res20 != (IUnknown *)0x0) {
        (*local_res20->lpVtbl->Release)(local_res20);
      }
      if (local_18[0] != (longlong *)0x0) {
        (**(code **)(*local_18[0] + 0x10))();
      }
    }
  }
  return 0;
}

// IsEndOfStream @ 14eab6140

undefined4 __thiscall FWmfMediaByteStream::IsEndOfStream(FWmfMediaByteStream *this,int *param_1)

{
  FSharedReferencer<1> *lpCriticalSection;
  char cVar1;
  
  if (param_1 == (int *)0x0) {
    return 0x80070057;
  }
  lpCriticalSection = &(this->Archive).SharedReferenceCount;
  if (lpCriticalSection != (FSharedReferencer<1> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    cVar1 = (**(code **)(**(longlong **)&this->AsyncReadInProgress + 0x38))();
    *param_1 = (uint)(cVar1 != '\0');
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// QueryInterface @ 14eab9240

HRESULT __thiscall
FWmfMediaByteStream::QueryInterface(FWmfMediaByteStream *this,_GUID *param_1,void **param_2)

{
  HRESULT HVar1;
  
  HVar1 = QISearch(this,(LPCQITAB)QITab,(IID *)param_1,param_2);
  return HVar1;
}

// QueryInterface`adjustor{8}' @ 14eab9258

/* [thunk]:public: virtual long __cdecl FWmfMediaByteStream::QueryInterface`adjustor{8}' (struct
   _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWmfMediaByteStream::QueryInterface_adjustor_8__
          (FWmfMediaByteStream *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWmfMediaByteStream *)&this[-1].RefCount,(_GUID *)param_1,param_2);
  return lVar1;
}

// Read @ 14eab95d0

undefined4 __thiscall
FWmfMediaByteStream::Read(FWmfMediaByteStream *this,uchar *param_1,ulong param_2,ulong *param_3)

{
  FSharedReferencer<1> *lpCriticalSection;
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lpCriticalSection = &(this->Archive).SharedReferenceCount;
  if (lpCriticalSection != (FSharedReferencer<1> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar1 = (**(code **)(**(longlong **)&this->AsyncReadInProgress + 0x28))();
    uVar2 = (**(code **)(**(longlong **)&this->AsyncReadInProgress + 0x30))();
    uVar4 = (ulonglong)param_2;
    if ((uint)uVar2 < param_2) {
      uVar4 = uVar2;
    }
    uVar4 = uVar4 & 0xffffffff;
    lVar3 = (**(code **)(**(longlong **)&this->AsyncReadInProgress + 0x28))();
    if ((longlong)(uVar2 - uVar4) < lVar3) {
      uVar4 = (ulonglong)((uint)uVar2 - (int)lVar1);
    }
    if ((ulong)uVar4 != 0) {
      (**(code **)(**(longlong **)&this->AsyncReadInProgress + 0x188))
                (*(longlong **)&this->AsyncReadInProgress,param_1,uVar4);
    }
    if (param_3 != (ulong *)0x0) {
      *param_3 = (ulong)uVar4;
    }
    (**(code **)(**(longlong **)&this->AsyncReadInProgress + 0x1b8))
              (*(longlong **)&this->AsyncReadInProgress,uVar4 + lVar1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Release @ 14eab9a20

ulong __thiscall FWmfMediaByteStream::Release(FWmfMediaByteStream *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 - 1U == 0) && (this != (FWmfMediaByteStream *)0x0)) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  return iVar2 - 1U;
}

// Release`adjustor{8}' @ 14eab9a58

/* [thunk]:public: virtual unsigned long __cdecl FWmfMediaByteStream::Release`adjustor{8}' (void)
   __ptr64 */

ulong __thiscall FWmfMediaByteStream::Release_adjustor_8__(FWmfMediaByteStream *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWmfMediaByteStream *)&this[-1].RefCount);
  return uVar1;
}

// Seek @ 14eabbf40

undefined4 __thiscall
FWmfMediaByteStream::Seek
          (FWmfMediaByteStream *this,_MFBYTESTREAM_SEEK_ORIGIN param_1,long64 param_2,ulong param_3,
          ulong64 *param_4)

{
  FSharedReferencer<1> *lpCriticalSection;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulong64 uVar4;
  undefined4 uVar5;
  
  lpCriticalSection = &(this->Archive).SharedReferenceCount;
  if (lpCriticalSection == (FSharedReferencer<1> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((char)this->_padding_ == '\0') {
    plVar1 = *(longlong **)&this->AsyncReadInProgress;
    lVar2 = *plVar1;
    if (param_1 == msoCurrent) {
      lVar3 = (**(code **)(lVar2 + 0x28))(plVar1);
      param_2 = param_2 + lVar3;
    }
    (**(code **)(lVar2 + 0x1b8))(plVar1,param_2);
    if (param_4 != (ulong64 *)0x0) {
      uVar4 = (**(code **)(**(longlong **)&this->AsyncReadInProgress + 0x28))();
      *param_4 = uVar4;
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar5;
}

// SetCurrentPosition @ 14eabcb90

undefined4 __thiscall
FWmfMediaByteStream::SetCurrentPosition(FWmfMediaByteStream *this,ulong64 param_1)

{
  FSharedReferencer<1> *lpCriticalSection;
  ulonglong uVar1;
  undefined4 uVar2;
  
  lpCriticalSection = &(this->Archive).SharedReferenceCount;
  if (lpCriticalSection != (FSharedReferencer<1> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((char)this->_padding_ == '\0') {
      uVar1 = (**(code **)(**(longlong **)&this->AsyncReadInProgress + 0x30))();
      if (uVar1 < param_1) {
        param_1 = (**(code **)(**(longlong **)&this->AsyncReadInProgress + 0x30))();
      }
      (**(code **)(**(longlong **)&this->AsyncReadInProgress + 0x1b8))
                (*(longlong **)&this->AsyncReadInProgress,param_1);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetLength @ 14eabce40

undefined4 __thiscall FWmfMediaByteStream::SetLength(FWmfMediaByteStream *this,ulong64 param_1)

{
  return 0x80004001;
}

// Write @ 14eac2940

undefined4 __thiscall
FWmfMediaByteStream::Write(FWmfMediaByteStream *this,uchar *param_1,ulong param_2,ulong *param_3)

{
  return 0x80004001;
}

