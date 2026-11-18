// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// Get @ 144919b90

FRendererOnScreenNotification * __cdecl FRendererOnScreenNotification::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FRendererOnScreenNotification *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FLazySingleton::Construct<FRendererOnScreenNotification>
              (&`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_1550a81e8 =
         &`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FRendererOnScreenNotification>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FRendererOnScreenNotification *)DAT_1550a81e8 == (FRendererOnScreenNotification *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRendererOnScreenNotification *)(*pcVar1)();
    return pFVar3;
  }
  return (FRendererOnScreenNotification *)DAT_1550a81e8;
}

// ~FRendererOnScreenNotification @ 144ef0f70

void __thiscall
FRendererOnScreenNotification::~FRendererOnScreenNotification(FRendererOnScreenNotification *this)

{
  ulong64 uVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 *puVar6;
  uint uVar7;
  longlong lVar8;
  ForAnyElementType *this_00;
  FDestructionSentinel local_38;
  
  uVar1 = (this->BaseDelegateHandle).ID;
  if (uVar1 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnGetOnScreenMessages,(FWriteAccessScope *)&local_38);
    uVar7 = 0;
    if (0 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = (ForAnyElementType *)(FCoreDelegates::OnGetOnScreenMessages._8_8_ + lVar8);
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar6 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar6 == uVar1)) {
          if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_00->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
            *(undefined4 *)&this_00[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FCoreDelegates::OnGetOnScreenMessages,false);
          break;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((int)uVar7 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  *(undefined4 *)&(this->Messages).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Messages).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->Messages);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ProxyDelegate).field_0x8,*(int *)&(this->ProxyDelegate).field_0x10);
  pvVar2 = *(void **)&(this->ProxyDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ProxyDelegate);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MessageCS);
                    /* WARNING: Could not recover jumptable at 0x000144ef1107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Broadcast @ 1454e24b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRendererOnScreenNotification::Broadcast(FRendererOnScreenNotification *this)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  *this_00;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStackY_d8 [32];
  FDestructionSentinel local_a8;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
  ::Empty(&local_88,*(int *)&(this->Messages).field_0x8 - *(int *)&(this->Messages).field_0x34);
  if (this != (FRendererOnScreenNotification *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ProxyDelegate,
               (FWriteAccessScope *)&local_a8);
    puVar1 = &(this->ProxyDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar12 = *(int *)&(this->ProxyDelegate).field_0x10 - 1;
    if (-1 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 << 4;
      bVar6 = false;
      do {
        uVar11 = 0;
        if ((int)uVar12 < *(int *)&(this->ProxyDelegate).field_0x10) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar2 = *(longlong *)&(this->ProxyDelegate).field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar13) == 0) ||
            (plVar3 = *(longlong **)(lVar2 + lVar13), plVar3 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar3 + 0x68))(), cVar10 == '\0')) {
          bVar6 = true;
        }
        lVar13 = lVar13 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    puVar1 = &(this->ProxyDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ProxyDelegate,false);
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    lpCriticalSection = &this->MessageCS;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      this_00 = &this->Messages;
      if (this_00 !=
          (TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
           *)&local_88) {
        TSparseArray<TSparseSetElement<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements(this_00,0,*(int *)&(this->Messages).field_0x8);
        if (*(void **)this_00 != (void *)0x0) {
          FMemory::Free(*(void **)this_00);
        }
        *(FScriptContainerElement **)this_00 = local_88.Data;
        *(int *)&(this->Messages).field_0x8 = (int)local_80;
        *(undefined4 *)&(this->Messages).field_0xc = local_80._4_4_;
        local_88.Data = (FScriptContainerElement *)0x0;
        local_80 = 0;
        if ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Messages).field_0x10 != &local_78) {
          if (local_78.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
            (this->Messages).field_0x10 = local_78.AllocatorInstance.InlineData[0];
            (this->Messages).field_0x11 = local_78.AllocatorInstance.InlineData[1];
            (this->Messages).field_0x12 = local_78.AllocatorInstance.InlineData[2];
            (this->Messages).field_0x13 = local_78.AllocatorInstance.InlineData[3];
            (this->Messages).field_0x14 = local_78.AllocatorInstance.InlineData[4];
            (this->Messages).field_0x15 = local_78.AllocatorInstance.InlineData[5];
            (this->Messages).field_0x16 = local_78.AllocatorInstance.InlineData[6];
            (this->Messages).field_0x17 = local_78.AllocatorInstance.InlineData[7];
            (this->Messages).field_0x18 = local_78.AllocatorInstance.InlineData[8];
            (this->Messages).field_0x19 = local_78.AllocatorInstance.InlineData[9];
            (this->Messages).field_0x1a = local_78.AllocatorInstance.InlineData[10];
            (this->Messages).field_0x1b = local_78.AllocatorInstance.InlineData[0xb];
            (this->Messages).field_0x1c = local_78.AllocatorInstance.InlineData[0xc];
            (this->Messages).field_0x1d = local_78.AllocatorInstance.InlineData[0xd];
            (this->Messages).field_0x1e = local_78.AllocatorInstance.InlineData[0xe];
            (this->Messages).field_0x1f = local_78.AllocatorInstance.InlineData[0xf];
          }
          pvVar4 = *(void **)&(this->Messages).field_0x20;
          if (pvVar4 != (void *)0x0) {
            FMemory::Free(pvVar4);
          }
          *(ForElementType<unsigned_int> *)&(this->Messages).field_0x20 =
               local_78.AllocatorInstance.SecondaryData;
          *(int *)&(this->Messages).field_0x28 = local_78.NumBits;
          *(int *)&(this->Messages).field_0x2c = local_78.MaxBits;
          local_78.NumBits = 0;
          local_78.MaxBits = 0;
          local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        }
        *(undefined4 *)&(this->Messages).field_0x30 = local_58;
        *(undefined4 *)&(this->Messages).field_0x34 = local_54;
        local_54 = 0;
        local_58 = 0xffffffff;
        if (local_48 == (void *)0x0) {
          *(undefined4 *)&(this->Messages).field_0x38 = local_50;
        }
        pvVar4 = *(void **)&(this->Messages).field_0x40;
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        *(void **)&(this->Messages).field_0x40 = local_48;
        *(undefined4 *)&(this->Messages).field_0x48 = local_40;
        local_40 = 0;
        local_48 = (void *)0x0;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_40 = 0;
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&local_88,0,(int)local_80);
      uVar7 = local_80 >> 0x20;
      local_80 = local_80 & 0xffffffff00000000;
      if ((int)uVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&local_88,0,(int *)((longlong)&local_80 + 4));
      }
      iVar8 = local_78.MaxBits;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_78._24_8_ = (ulonglong)(uint)local_78.MaxBits << 0x20;
      if (0x80 < (uint)iVar8) {
        local_78.NumBits = 0;
        local_78.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
      }
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
      }
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

