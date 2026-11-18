// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// ~FWhenAllState @ 14efe69d0

void __thiscall
`UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::
__l2::FWhenAllState::~FWhenAllState(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((*(longlong *)((longlong)this + 0x20) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  DestructItems<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,int>
            (*(TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser> **)
              ((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  DestructItems<TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>,int>
            (*(TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
               **)this,*(int *)((longlong)this + 8));
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

