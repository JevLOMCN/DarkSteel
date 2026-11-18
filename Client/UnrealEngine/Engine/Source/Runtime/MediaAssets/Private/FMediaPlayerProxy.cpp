// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 3

// FMediaPlayerProxy @ 146c1c4d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FMediaPlayerProxy * __thiscall
FMediaPlayerProxy::FMediaPlayerProxy(FMediaPlayerProxy *this,FMediaPlayerProxy *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7IProxyData_Audio__6B_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FMediaPlayerProxy__6B_;
  (this->PlayerFacade).Object = (param_1->PlayerFacade).Object;
  pTVar1 = (param_1->PlayerFacade).WeakReferenceCount.ReferenceController;
  (this->PlayerFacade).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->TypeHash = param_1->TypeHash;
  return this;
}

// FMediaPlayerProxy @ 146c1c520

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FMediaPlayerProxy * __thiscall
FMediaPlayerProxy::FMediaPlayerProxy(FMediaPlayerProxy *this,UMediaPlayer *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMediaPlayerFacade *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FMediaPlayerProxy *pFVar8;
  uint uVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_FMediaPlayerProxy::GetAudioProxyTypeName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_FMediaPlayerProxy::GetAudioProxyTypeName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_FMediaPlayerProxy::GetAudioProxyTypeName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FMediaPlayerProxy::GetAudioProxyTypeName(void)'
                      ::__l2::MyClassName,"FMediaPlayerProxy");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FMediaPlayerProxy::GetAudioProxyTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  this->_padding_ =
       (longlong)
       `public:_static_class_FName___cdecl_FMediaPlayerProxy::GetAudioProxyTypeName(void)'::__l2::
       MyClassName;
  this->_padding_ = (longlong)&___7FMediaPlayerProxy__6B_;
  (this->PlayerFacade).Object = (FMediaPlayerFacade *)0x0;
  (this->PlayerFacade).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->TypeHash = 0xffffffff;
  if ((param_1->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FMediaPlayerProxy *)(*pcVar6)();
      return pFVar8;
    }
  }
  pTVar3 = (param_1->PlayerFacade).SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->PlayerFacade).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar4 == (FMediaPlayerFacade *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FMediaPlayerProxy *)(*pcVar6)();
      return pFVar8;
    }
  }
  (this->PlayerFacade).Object = pFVar4;
  if (pTVar3 != (this->PlayerFacade).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->PlayerFacade).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->PlayerFacade).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  this->TypeHash = uVar9 >> 0x10 ^ uVar9;
  return this;
}

// ~FMediaPlayerProxy @ 146c1e3e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerProxy::~FMediaPlayerProxy(FMediaPlayerProxy *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FMediaPlayerProxy__6B_;
  pTVar3 = (this->PlayerFacade).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000146c1e40a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

