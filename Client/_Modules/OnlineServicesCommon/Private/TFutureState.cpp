// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 16

// ~TFutureState<UE::Online::FBatchQueryPresenceHelperResult> @ 14ee17530

void __thiscall
TFutureState<UE::Online::FBatchQueryPresenceHelperResult>::
~TFutureState<UE::Online::FBatchQueryPresenceHelperResult>
          (TFutureState<UE::Online::FBatchQueryPresenceHelperResult> *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if (this->field_0x68 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->Result).Pad + 0x28));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->Result).Pad + 0x18));
    DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>
              (*(TSharedRef<UE::Online::FUserPresence_const_,1> **)(this->Result).Pad,
               *(int *)((this->Result).Pad + 8));
    pvVar1 = *(void **)(this->Result).Pad;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar2 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar2 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014ee175ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> @ 14ee175c0

void __thiscall
TFutureState<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>::
~TFutureState<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>
          (TFutureState<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014ee17664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> @ 14ee17680

void __thiscall
TFutureState<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>::
~TFutureState<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>
          (TFutureState<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FCreateSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014ee17724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> @ 14ee17740

void __thiscall
TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>::
~TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>
          (TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FFindSessions::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014ee177e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> @ 14ee17800

void __thiscall
TFutureState<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>::
~TFutureState<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>
          (TFutureState<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FJoinSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014ee178a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> @ 14ee178c0

void __thiscall
TFutureState<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>::
~TFutureState<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>
          (TFutureState<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014ee17964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> @ 14ee17980

void __thiscall
TFutureState<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>::
~TFutureState<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>
          (TFutureState<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014ee17a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> @ 14ee17a40

void __thiscall
TFutureState<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>::
~TFutureState<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>
          (TFutureState<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014ee17ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> @ 14ee17b00

void __thiscall
TFutureState<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>::
~TFutureState<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>
          (TFutureState<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014ee17ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> @ 14ee17bc0

void __thiscall
TFutureState<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>::
~TFutureState<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>
          (TFutureState<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014ee17c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> @ 14ee17c80

void __thiscall
TFutureState<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>::
~TFutureState<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>
          (TFutureState<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014ee17d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_> @ 14efe5850

void __thiscall
TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
::
~TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
          (TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
           *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if ((char)this->_padding_ != '\0') {
    DestructItems<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,int>
              (*(TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser> **)(this->Result).Pad
               ,*(int *)((this->Result).Pad + 8));
    pvVar1 = *(void **)(this->Result).Pad;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  if ((FEvent *)this->_padding_ != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this->_padding_);
    this->_padding_ = 0;
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014efe58b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_> @ 14efe58d0

void __thiscall
TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
::
~TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
          (TFutureState<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014efe5974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> @ 14efe5990

void __thiscall
TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::
~TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
          (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014efe5a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_> @ 14efe5a50

void __thiscall
TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::
~TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
          (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::Private::FFunctionalTestLogoutAllUsers::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014efe5af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> @ 14efe5b10

void __thiscall
TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::
~TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
          (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (this->field_0x68 != '\0') {
    uVar4 = (ulonglong)(this->Result).Pad[0x30];
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::Private::FFunctionalTestLogoutUser::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])((this->Result).Pad + 8);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar3 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014efe5bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

