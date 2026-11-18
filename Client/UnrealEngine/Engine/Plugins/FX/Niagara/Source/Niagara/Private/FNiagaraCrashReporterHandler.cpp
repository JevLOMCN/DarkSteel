// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FNiagaraCrashReporterHandler @ 1490b0e60

FNiagaraCrashReporterHandler * __thiscall
FNiagaraCrashReporterHandler::FNiagaraCrashReporterHandler(FNiagaraCrashReporterHandler *this)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  *(undefined8 *)&this->ThreadScopeInfoStack = 0;
  *(undefined8 *)&(this->ThreadScopeInfoStack).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadScopeInfoStack).field_0x20 = 0;
  *(undefined4 *)&(this->ThreadScopeInfoStack).field_0x28 = 0;
  *(undefined4 *)&(this->ThreadScopeInfoStack).field_0x2c = 0x80;
  *(undefined4 *)&(this->ThreadScopeInfoStack).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ThreadScopeInfoStack).field_0x34 = 0;
  *(undefined8 *)&(this->ThreadScopeInfoStack).field_0x40 = 0;
  *(undefined4 *)&(this->ThreadScopeInfoStack).field_0x48 = 0;
  (this->CurrentInfo).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInfo).Data.ArrayNum = 0;
  (this->CurrentInfo).Data.ArrayMax = 0;
  (this->NullString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NullString).Data.ArrayNum = 0;
  (this->NullString).Data.ArrayMax = 0;
  ::FString::operator=(&this->NullString,L"nullptr");
  return this;
}

// Get @ 149102340

FNiagaraCrashReporterHandler * __cdecl FNiagaraCrashReporterHandler::Get(void)

{
  FNiagaraCrashReporterHandler *this;
  FNiagaraCrashReporterHandler *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FNiagaraCrashReporterHandler&___ptr64___cdecl_FNiagaraCrashReporterHandler::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FNiagaraCrashReporterHandler&___ptr64___cdecl_FNiagaraCrashReporterHandler::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FNiagaraCrashReporterHandler&___ptr64___cdecl_FNiagaraCrashReporterHandler::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      this = ::operator_new(0x98);
      pFVar1 = (FNiagaraCrashReporterHandler *)0x0;
      if (this != (FNiagaraCrashReporterHandler *)0x0) {
        pFVar1 = FNiagaraCrashReporterHandler(this);
      }
      `public:_static_class_FNiagaraCrashReporterHandler&___ptr64___cdecl_FNiagaraCrashReporterHandler::Get(void)'
      ::__l2::Instance.Ptr = pFVar1;
      atexit(`FNiagaraCrashReporterHandler::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&`public:_static_class_FNiagaraCrashReporterHandler&___ptr64___cdecl_FNiagaraCrashReporterHandler::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return `public:_static_class_FNiagaraCrashReporterHandler&___ptr64___cdecl_FNiagaraCrashReporterHandler::Get(void)'
             ::__l2::Instance.Ptr;
    }
  }
  return `public:_static_class_FNiagaraCrashReporterHandler&___ptr64___cdecl_FNiagaraCrashReporterHandler::Get(void)'
         ::__l2::Instance.Ptr;
}

// PushInfo @ 1491256b0

void __thiscall
FNiagaraCrashReporterHandler::PushInfo(FNiagaraCrashReporterHandler *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uint local_res8 [4];
  int local_res18 [2];
  uint *local_res20;
  
  local_res8[0] = GetCurrentThreadId();
  if (this == (FNiagaraCrashReporterHandler *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (*(int *)&(this->ThreadScopeInfoStack).field_0x8 !=
      *(int *)&(this->ThreadScopeInfoStack).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ThreadScopeInfoStack).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ThreadScopeInfoStack).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ThreadScopeInfoStack).field_0x48 - 1U & local_res8[0]
                              ) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)&this->ThreadScopeInfoStack + (longlong)iVar3 * 0x28;
        if (*(uint *)(*(longlong *)&this->ThreadScopeInfoStack + (longlong)iVar3 * 0x28) ==
            local_res8[0]) {
          if (lVar4 != 0) goto LAB_149125772;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x20);
      } while (iVar3 != -1);
    }
  }
  local_res20 = local_res8;
  TSet<TTuple<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>,FDefaultSetAllocator>
              *)&this->ThreadScopeInfoStack,(uint)local_res18,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_res8[0],(bool *)&local_res20)
  ;
  lVar4 = *(longlong *)&this->ThreadScopeInfoStack + (longlong)local_res18[0] * 0x28;
LAB_149125772:
  if (((*(FString **)(lVar4 + 0x10) <= param_1) &&
      (param_1 < *(FString **)(lVar4 + 0x10) + *(int *)(lVar4 + 0x1c))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = *(int *)(lVar4 + 0x18);
  if (iVar3 == *(int *)(lVar4 + 0x1c)) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar4 + 0x10),(int *)(lVar4 + 0x1c));
  }
  *(int *)(lVar4 + 0x18) = iVar3 + 1;
  ::FString::FString((FString *)
                     (((ForAnyElementType *)(lVar4 + 0x10))->Data + (longlong)iVar3 * 0x10),param_1)
  ;
  UpdateInfo(this);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// UpdateInfo @ 14913f720

void __thiscall FNiagaraCrashReporterHandler::UpdateInfo(FNiagaraCrashReporterHandler *this)

{
  FString *this_00;
  TMap<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>_>
  *pTVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar10 <
       `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                        ::__l2::CrashReportKey,L"NiagaraCRInfo");
    atexit(`FNiagaraCrashReporterHandler::UpdateInfo'::__l2::
           _dynamic_atexit_destructor_for__CrashReportKey__);
    _Init_thread_footer(&`private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar10 <
       `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'::__l2::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__),
     `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    ::FString::FString(&`private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                        ::__l2::GameThreadString,L"GameThread");
    atexit(`FNiagaraCrashReporterHandler::UpdateInfo'::__l2::
           _dynamic_atexit_destructor_for__GameThreadString__);
    _Init_thread_footer(&`private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*piVar10 <
       `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'::__l2::
       _thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_2__),
     `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'::__l2::
     _thread_safe_static_guard_2__ == -1)) {
    ::FString::FString(&`private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                        ::__l2::RenderThreadString,L"RenderThread");
    atexit(`FNiagaraCrashReporterHandler::UpdateInfo'::__l2::
           _dynamic_atexit_destructor_for__RenderThreadString__);
    _Init_thread_footer(&`private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  if ((*piVar10 <
       `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'::__l2::
       _thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_3__),
     `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'::__l2::
     _thread_safe_static_guard_3__ == -1)) {
    ::FString::FString(&`private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                        ::__l2::OtherThreadString,L"OtherThread");
    atexit(`FNiagaraCrashReporterHandler::UpdateInfo'::__l2::
           _dynamic_atexit_destructor_for__OtherThreadString__);
    _Init_thread_footer(&`private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_3__);
  }
  this_00 = &this->CurrentInfo;
  ::FString::Empty(this_00);
  pTVar1 = &this->ThreadScopeInfoStack;
  TSet<TTuple<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar7 = local_78._24_8_ >> 0x20;
  uVar12 = local_78._28_4_;
  local_18 = (TSet<TTuple<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>,FDefaultSetAllocator>
              *)pTVar1;
  if ((int)uVar12 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      plVar3 = local_48;
      if (*(int *)(*local_48 + 0x18 + (longlong)(int)uVar7 * 0x28) != 0) {
        lVar11 = (longlong)(int)uVar12 * 0x28;
        iVar6 = *(int *)(*local_48 + 8 + (longlong)(int)uVar12 * 0x28);
        FVar9.Data = `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                     ::__l2::GameThreadString.Data.AllocatorInstance.Data;
        iVar5 = `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'::__l2
                ::GameThreadString.Data.ArrayNum;
        if ((iVar6 != 0) &&
           (FVar9.Data = `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                         ::__l2::OtherThreadString.Data.AllocatorInstance.Data,
           iVar5 = `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'::
                   __l2::OtherThreadString.Data.ArrayNum, iVar6 == 1)) {
          FVar9.Data = `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'
                       ::__l2::RenderThreadString.Data.AllocatorInstance.Data;
          iVar5 = `private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'::
                  __l2::RenderThreadString.Data.ArrayNum;
        }
        iVar6 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(this_00,(wchar_t *)FVar9.Data,iVar6);
        ::FString::AppendChar(this_00,L'(');
        ::FString::AppendInt(this_00,*(int *)(*plVar3 + lVar11));
        ::FString::AppendChars(this_00,") ",2);
        lVar11 = lVar11 + *plVar3;
        uVar8 = *(int *)(lVar11 + 0x18) - 1;
        uVar12 = 0;
        if ((int)uVar8 < *(int *)(lVar11 + 0x18)) {
          uVar12 = ~uVar8 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar11 = (longlong)*(int *)(lVar11 + 0x18) * 0x10 + *(longlong *)(lVar11 + 0x10);
        iVar5 = *(int *)(lVar11 + -8);
        iVar6 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(this_00,*(wchar_t **)(lVar11 + -0x10),iVar6);
        ::FString::AppendChar(this_00,L'\n');
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar7 = (ulonglong)uStack_2c;
      uVar12 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar12 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar12 < 4) {
        iVar6 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((0 < (int)uVar12) && (local_18->HashSize < iVar6)) || (iVar6 < local_18->HashSize)) {
        local_18->HashSize = iVar6;
        TSet<TTuple<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  FGenericCrashContext::SetEngineData
            (&`private:_void___cdecl_FNiagaraCrashReporterHandler::UpdateInfo(void)___ptr64'::__l2::
              CrashReportKey,this_00);
  return;
}

