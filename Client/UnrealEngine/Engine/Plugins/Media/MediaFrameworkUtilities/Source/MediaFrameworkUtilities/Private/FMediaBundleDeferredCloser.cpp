// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 2

// Get @ 14d7d7c20

FMediaBundleDeferredCloser * __cdecl MediaBundlePrivate::FMediaBundleDeferredCloser::Get(void)

{
  FMediaBundleDeferredCloser local_res8 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_MediaBundlePrivate::FMediaBundleDeferredCloser*___ptr64___cdecl_MediaBundlePrivate::FMediaBundleDeferredCloser::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_MediaBundlePrivate::FMediaBundleDeferredCloser*___ptr64___cdecl_MediaBundlePrivate::FMediaBundleDeferredCloser::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_MediaBundlePrivate::FMediaBundleDeferredCloser*___ptr64___cdecl_MediaBundlePrivate::FMediaBundleDeferredCloser::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_MediaBundlePrivate::FMediaBundleDeferredCloser*___ptr64___cdecl_MediaBundlePrivate::FMediaBundleDeferredCloser::Get(void)'
      ::__l2::Instance.BundlesToClose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_class_MediaBundlePrivate::FMediaBundleDeferredCloser*___ptr64___cdecl_MediaBundlePrivate::FMediaBundleDeferredCloser::Get(void)'
      ::__l2::Instance.BundlesToClose.ArrayNum = 0;
      `public:_static_class_MediaBundlePrivate::FMediaBundleDeferredCloser*___ptr64___cdecl_MediaBundlePrivate::FMediaBundleDeferredCloser::Get(void)'
      ::__l2::Instance.BundlesToClose.ArrayMax = 0;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddRaw<MediaBundlePrivate::FMediaBundleDeferredCloser>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnEndFrame,local_res8,(pmf_bb54096c)0x15536c5c0);
      atexit(`MediaBundlePrivate::FMediaBundleDeferredCloser::Get'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&`public:_static_class_MediaBundlePrivate::FMediaBundleDeferredCloser*___ptr64___cdecl_MediaBundlePrivate::FMediaBundleDeferredCloser::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_MediaBundlePrivate::FMediaBundleDeferredCloser*___ptr64___cdecl_MediaBundlePrivate::FMediaBundleDeferredCloser::Get(void)'
              ::__l2::Instance;
    }
  }
  return &`public:_static_class_MediaBundlePrivate::FMediaBundleDeferredCloser*___ptr64___cdecl_MediaBundlePrivate::FMediaBundleDeferredCloser::Get(void)'
          ::__l2::Instance;
}

// OnEndFrame @ 14d7dcdd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
MediaBundlePrivate::FMediaBundleDeferredCloser::OnEndFrame(FMediaBundleDeferredCloser *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FUObjectItem *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar3 = (this->BundlesToClose).ArrayNum;
  pFVar9 = (this->BundlesToClose).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->BundlesToClose).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UMediaBundle_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar2) break;
    lVar4 = *(longlong *)pFVar9;
    if (lVar4 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
      pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar4 + 0xc));
      if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
        lVar5 = *(longlong *)(lVar4 + 0x38);
        if (lVar5 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Test",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                             ,0x760,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) {
          pFVar8 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)(*(longlong *)(lVar4 + 0x38) + 0xc));
          if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
            UMediaPlayer::Close(*(UMediaPlayer **)(lVar4 + 0x38));
          }
        }
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  piVar1 = &(this->BundlesToClose).ArrayMax;
  (this->BundlesToClose).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

