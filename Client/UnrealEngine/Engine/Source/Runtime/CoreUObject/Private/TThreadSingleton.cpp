// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 19

// ~TThreadSingleton<FDeferredCdoInitializationTracker> @ 141e87630

void __thiscall
TThreadSingleton<FDeferredCdoInitializationTracker>::
~TThreadSingleton<FDeferredCdoInitializationTracker>
          (TThreadSingleton<FDeferredCdoInitializationTracker> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FDeferredCdoInitializationTracker> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFDeferredCdoInitializationTracker____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredCdoInitializationTracker>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredCdoInitializationTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredCdoInitializationTracker>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FDeferredSubObjInitializationTracker> @ 141e876b0

void __thiscall
TThreadSingleton<FDeferredSubObjInitializationTracker>::
~TThreadSingleton<FDeferredSubObjInitializationTracker>
          (TThreadSingleton<FDeferredSubObjInitializationTracker> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FDeferredSubObjInitializationTracker> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFDeferredSubObjInitializationTracker____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredSubObjInitializationTracker>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredSubObjInitializationTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredSubObjInitializationTracker>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FResolvingExportTracker> @ 141e87730

void __thiscall
TThreadSingleton<FResolvingExportTracker>::~TThreadSingleton<FResolvingExportTracker>
          (TThreadSingleton<FResolvingExportTracker> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FResolvingExportTracker> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFResolvingExportTracker____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FResolvingExportTracker>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FResolvingExportTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FResolvingExportTracker>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FSoftObjectPathThreadContext> @ 141e877b0

void __thiscall
TThreadSingleton<FSoftObjectPathThreadContext>::~TThreadSingleton<FSoftObjectPathThreadContext>
          (TThreadSingleton<FSoftObjectPathThreadContext> *this)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  TThreadSingleton<FSoftObjectPathThreadContext> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFSoftObjectPathThreadContext____6B_;
  puVar3 = GetTlsSlot();
  if (*puVar3 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puVar3 = GetTlsSlot();
  pTVar4 = TlsGetValue(*puVar3);
  if (pTVar4 == this) {
    puVar3 = GetTlsSlot();
    TlsSetValue(*puVar3,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 141e8b300

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FDeferredCdoInitializationTracker>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FDeferredInitializationTrackerBase *pFVar2;
  FDeferredInitializationTrackerBase *pFVar3;
  
  pFVar2 = ::operator_new(0x118);
  pFVar3 = (FDeferredInitializationTrackerBase *)0x0;
  if (pFVar2 != (FDeferredInitializationTrackerBase *)0x0) {
    memset(pFVar2,0,0x118);
    FDeferredInitializationTrackerBase::FDeferredInitializationTrackerBase(pFVar2);
    pFVar2[1]._padding_ =
         (longlong)&___7__TThreadSingleton_UFDeferredCdoInitializationTracker____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)&pFVar2[1].ArchetypeInstanceMap = DVar1;
    pFVar2->_padding_ =
         (longlong)
         &FDeferredCdoInitializationTracker::_vftable__for__FDeferredInitializationTrackerBase__;
    pFVar2[1]._padding_ =
         (longlong)
         &FDeferredCdoInitializationTracker::
          _vftable__for__TThreadSingleton<FDeferredCdoInitializationTracker>__;
    pFVar3 = pFVar2;
  }
  pFVar2 = pFVar3 + 1;
  if (pFVar3 == (FDeferredInitializationTrackerBase *)0x0) {
    pFVar2 = (FDeferredInitializationTrackerBase *)0x0;
  }
  return (FTlsAutoCleanup *)pFVar2;
}

// operator() @ 141e8b390

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FDeferredSubObjInitializationTracker>::Get'::__l2::<lambda_1>::operator()
          (void *this)

{
  DWORD DVar1;
  FDeferredInitializationTrackerBase *pFVar2;
  FDeferredInitializationTrackerBase *pFVar3;
  
  pFVar2 = ::operator_new(0x118);
  pFVar3 = (FDeferredInitializationTrackerBase *)0x0;
  if (pFVar2 != (FDeferredInitializationTrackerBase *)0x0) {
    memset(pFVar2,0,0x118);
    FDeferredInitializationTrackerBase::FDeferredInitializationTrackerBase(pFVar2);
    pFVar2[1]._padding_ =
         (longlong)&___7__TThreadSingleton_UFDeferredSubObjInitializationTracker____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)&pFVar2[1].ArchetypeInstanceMap = DVar1;
    pFVar2->_padding_ =
         (longlong)
         &FDeferredSubObjInitializationTracker::_vftable__for__FDeferredInitializationTrackerBase__;
    pFVar2[1]._padding_ =
         (longlong)
         &FDeferredSubObjInitializationTracker::
          _vftable__for__TThreadSingleton<FDeferredSubObjInitializationTracker>__;
    pFVar3 = pFVar2;
  }
  pFVar2 = pFVar3 + 1;
  if (pFVar3 == (FDeferredInitializationTrackerBase *)0x0) {
    pFVar2 = (FDeferredInitializationTrackerBase *)0x0;
  }
  return (FTlsAutoCleanup *)pFVar2;
}

// operator() @ 141e8b420

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FResolvingExportTracker>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0xb0);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    memset(pFVar2 + 1,0,0xa8);
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFResolvingExportTracker____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FResolvingExportTracker__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 7) = 0;
    *(undefined4 *)&pFVar2[7].field_0x4 = 0x80;
    *(undefined4 *)&pFVar2[8].field_0x4 = 0;
    *(undefined4 *)(pFVar2 + 8) = 0xffffffff;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xb) = 0;
    pFVar2[0xc] = (FTlsAutoCleanup)0x0;
    pFVar2[0xd] = (FTlsAutoCleanup)0x0;
    pFVar2[0x10] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x11) = 0;
    *(undefined4 *)&pFVar2[0x11].field_0x4 = 0x80;
    *(undefined4 *)&pFVar2[0x12].field_0x4 = 0;
    *(undefined4 *)(pFVar2 + 0x12) = 0xffffffff;
    pFVar2[0x14] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x15) = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// ~TThreadSingleton<FPlaceholderContainerTracker> @ 1420a4500

void __thiscall
TThreadSingleton<FPlaceholderContainerTracker>::~TThreadSingleton<FPlaceholderContainerTracker>
          (TThreadSingleton<FPlaceholderContainerTracker> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FPlaceholderContainerTracker> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFPlaceholderContainerTracker____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 1420a6ad0

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x40);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFPlaceholderContainerTracker____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FPlaceholderContainerTracker__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// ~TThreadSingleton<FBlueprintContextTracker> @ 142200b40

void __thiscall
TThreadSingleton<FBlueprintContextTracker>::~TThreadSingleton<FBlueprintContextTracker>
          (TThreadSingleton<FBlueprintContextTracker> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FBlueprintContextTracker> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFBlueprintContextTracker____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FDeferredScriptTracker> @ 142200bc0

void __thiscall
TThreadSingleton<FDeferredScriptTracker>::~TThreadSingleton<FDeferredScriptTracker>
          (TThreadSingleton<FDeferredScriptTracker> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FDeferredScriptTracker> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFDeferredScriptTracker____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredScriptTracker>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredScriptTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredScriptTracker>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 1422025a0

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x80);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    pFVar2[0xc] = (FTlsAutoCleanup)0x0;
    pFVar2[0xd] = (FTlsAutoCleanup)0x0;
    pFVar2[0xe] = (FTlsAutoCleanup)0x0;
    pFVar2[0xf] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFBlueprintContextTracker____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FBlueprintContextTracker__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    *(undefined2 *)(pFVar2 + 3) = 0;
    *(undefined4 *)&pFVar2[3].field_0x4 = 0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xb) = 0;
    *(undefined4 *)&pFVar2[0xb].field_0x4 = 0x80;
    *(undefined4 *)&pFVar2[0xc].field_0x4 = 0;
    *(undefined4 *)(pFVar2 + 0xc) = 0xffffffff;
    pFVar2[0xe] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xf) = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// operator() @ 142202650

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FDeferredScriptTracker>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x60);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFDeferredScriptTracker____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FDeferredScriptTracker__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 7) = 0;
    *(undefined4 *)&pFVar2[7].field_0x4 = 0x80;
    *(undefined4 *)&pFVar2[8].field_0x4 = 0;
    *(undefined4 *)(pFVar2 + 8) = 0xffffffff;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xb) = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// GetTlsSlot @ 14220fd40

uint * __cdecl TThreadSingleton<FSoftObjectPathThreadContext>::GetTlsSlot(void)

{
  return &::TlsSlot;
}

// ~TThreadSingleton<FThreadMarkAnnotation> @ 142295970

void __thiscall
TThreadSingleton<FThreadMarkAnnotation>::~TThreadSingleton<FThreadMarkAnnotation>
          (TThreadSingleton<FThreadMarkAnnotation> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FThreadMarkAnnotation> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFThreadMarkAnnotation____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FThreadMarkAnnotation>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FThreadMarkAnnotation>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FThreadMarkAnnotation>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FUObjectThreadContext> @ 1422959f0

void __thiscall
TThreadSingleton<FUObjectThreadContext>::~TThreadSingleton<FUObjectThreadContext>
          (TThreadSingleton<FUObjectThreadContext> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FUObjectThreadContext> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFUObjectThreadContext____6B_;
  if (::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 142296600

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FThreadMarkAnnotation>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x78);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFThreadMarkAnnotation____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FThreadMarkAnnotation__6B_;
    pFVar2[2] = (FTlsAutoCleanup)&___7__FUObjectAnnotationSparseNoSync_UFObjectMark____6B_;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 8) = 0;
    *(undefined4 *)&pFVar2[8].field_0x4 = 0x80;
    *(undefined4 *)&pFVar2[9].field_0x4 = 0;
    *(undefined4 *)(pFVar2 + 9) = 0xffffffff;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xc) = 0;
    pFVar2[0xd] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xe) = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// operator() @ 142296690

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  FTlsAutoCleanup FVar3;
  
  pFVar2 = ::operator_new(0x180);
  if (pFVar2 == (FTlsAutoCleanup *)0x0) {
    return (FTlsAutoCleanup *)0x0;
  }
  *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFUObjectThreadContext____6B_;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(pFVar2 + 1) = DVar1;
  pFVar2[2] = (FTlsAutoCleanup)0x0;
  pFVar2[3] = (FTlsAutoCleanup)0x0;
  *pFVar2 = (FTlsAutoCleanup)&___7FUObjectThreadContext__6B_;
  *(undefined2 *)(pFVar2 + 4) = 0;
  *(undefined8 *)&pFVar2[4].field_0x4 = 0;
  pFVar2[6] = (FTlsAutoCleanup)0x0;
  pFVar2[7] = (FTlsAutoCleanup)0x0;
  pFVar2[8] = (FTlsAutoCleanup)0x0;
  pFVar2[9] = (FTlsAutoCleanup)0x0;
  *(undefined4 *)(pFVar2 + 10) = 0;
  pFVar2[0x1b] = (FTlsAutoCleanup)0x0;
  *(undefined4 *)(pFVar2 + 0x1c) = 0;
  *(undefined4 *)&pFVar2[0x1c].field_0x4 = 0x10;
  pFVar2[0x2d] = (FTlsAutoCleanup)0x0;
  *(undefined4 *)(pFVar2 + 0x2e) = 0;
  *(undefined4 *)&pFVar2[0x2e].field_0x4 = 0x10;
  FVar3 = (FTlsAutoCleanup)::operator_new(0x60);
  if (FVar3 != (FTlsAutoCleanup)0x0) {
    *(undefined8 *)FVar3 = 0;
    ((int *)((longlong)FVar3 + 8))[0] = 0;
    ((int *)((longlong)FVar3 + 8))[1] = 0;
    ((int *)((longlong)FVar3 + 0x10))[0] = 0;
    ((int *)((longlong)FVar3 + 0x10))[1] = 0;
    ((int *)((longlong)FVar3 + 0x18))[0] = 0;
    ((int *)((longlong)FVar3 + 0x18))[1] = 0;
    ((int *)((longlong)FVar3 + 0x20))[0] = 0;
    ((int *)((longlong)FVar3 + 0x20))[1] = 0;
    ((int *)((longlong)FVar3 + 0x28))[0] = 0;
    ((int *)((longlong)FVar3 + 0x28))[1] = 0;
    ((int *)((longlong)FVar3 + 0x30))[0] = 0;
    ((int *)((longlong)FVar3 + 0x30))[1] = 0;
    ((int *)((longlong)FVar3 + 0x38))[0] = 0;
    ((int *)((longlong)FVar3 + 0x38))[1] = 0;
    *(int *)((longlong)FVar3 + 0x40) = 0;
    ((int *)((longlong)FVar3 + 0x48))[0] = 0;
    ((int *)((longlong)FVar3 + 0x48))[1] = 0;
    *(int *)((longlong)FVar3 + 0x50) = 0;
    ((int *)((longlong)FVar3 + 0x58))[0] = 0;
    ((int *)((longlong)FVar3 + 0x58))[1] = 0;
    pFVar2[0x2f] = FVar3;
    *(int *)FVar3 = *(int *)FVar3 + 1;
    return pFVar2;
  }
  pFVar2[0x2f] = (FTlsAutoCleanup)0x0;
  return pFVar2;
}

// GetTlsSlot @ 14229eab0

uint * __cdecl TThreadSingleton<FUObjectThreadContext>::GetTlsSlot(void)

{
  return &::TlsSlot;
}

