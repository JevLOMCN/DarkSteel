// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// Get @ 14af94960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSharedStateShuffleManager * __cdecl Metasound::FSharedStateShuffleManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
                  ::__l2::GSM,4000);
      `public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
      ::__l2::GSM.Shufflers._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
      ::__l2::GSM.Shufflers._48_8_ = _UNK_150631d98;
      `public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
      ::__l2::GSM.Shufflers._0_8_ = 0;
      `public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
      ::__l2::GSM.Shufflers._8_8_ = 0;
      `public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
      ::__l2::GSM.Shufflers._32_8_ = 0;
      `public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
      ::__l2::GSM.Shufflers._64_8_ = 0;
      `public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
      ::__l2::GSM.Shufflers._72_4_ = 0;
      atexit(`Metasound::FSharedStateShuffleManager::Get'::__l2::
             _dynamic_atexit_destructor_for__GSM__);
      _Init_thread_footer(&`public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
              ::__l2::GSM;
    }
  }
  return &`public:_static_class_Metasound::FSharedStateShuffleManager&___ptr64___cdecl_Metasound::FSharedStateShuffleManager::Get(void)'
          ::__l2::GSM;
}

// InitSharedState @ 14afaedc0

void __thiscall
Metasound::FSharedStateShuffleManager::InitSharedState
          (FSharedStateShuffleManager *this,uint param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FArrayIndexShuffler *pFVar3;
  undefined1 *puVar4;
  TPairInitializer<unsigned_int_const_&,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_&&>
  local_res8;
  FArrayIndexShuffler *local_38;
  TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>
  **local_30;
  FArrayIndexShuffler **local_28;
  
  local_res8.Value._0_4_ = param_1;
  if (this == (FSharedStateShuffleManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (*(int *)&(this->Shufflers).field_0x8 != *(int *)&(this->Shufflers).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Shufflers).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Shufflers).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->Shufflers).field_0x48 - 1U & (uint)local_res8.Value)
                              * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->Shufflers + (longlong)iVar2 * 0x18) ==
            (uint)local_res8.Value) goto LAB_14afaeea5;
        iVar2 = *(int *)(*(longlong *)&this->Shufflers + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  pFVar3 = ::operator_new(0x20);
  local_38 = (FArrayIndexShuffler *)0x0;
  if (pFVar3 != (FArrayIndexShuffler *)0x0) {
    local_38 = FArrayIndexShuffler::FArrayIndexShuffler(pFVar3,param_2,param_3);
  }
  local_30 = &local_res8.Value;
  local_28 = &local_38;
  TSet<TTuple<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_&&>_>
            ((TSet<TTuple<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>,0>,FDefaultSetAllocator>
              *)&this->Shufflers,&local_res8,(bool *)&local_30);
  pFVar3 = local_38;
  if (local_38 != (FArrayIndexShuffler *)0x0) {
    pFVar1 = (local_38->ShuffleIndices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar3,0x20);
  }
LAB_14afaeea5:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ResetSeed @ 14afbcd90

void __thiscall
Metasound::FSharedStateShuffleManager::ResetSeed(FSharedStateShuffleManager *this,uint param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  
  if (this == (FSharedStateShuffleManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  puVar5 = (undefined8 *)0x0;
  puVar2 = puVar5;
  if (*(int *)&(this->Shufflers).field_0x8 != *(int *)&(this->Shufflers).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Shufflers).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Shufflers).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->Shufflers).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar1 != -1) {
      do {
        puVar2 = (undefined8 *)(*(longlong *)&this->Shufflers + (longlong)iVar1 * 0x18);
        if (*(uint *)(*(longlong *)&this->Shufflers + (longlong)iVar1 * 0x18) == param_1) break;
        iVar1 = *(int *)(puVar2 + 2);
        puVar2 = puVar5;
      } while (iVar1 != -1);
    }
  }
  puVar3 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = puVar5;
  }
  FArrayIndexShuffler::ResetSeed((FArrayIndexShuffler *)*puVar3);
                    /* WARNING: Could not recover jumptable at 0x00014afbce1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// SetSeed @ 14afbe050

void __thiscall
Metasound::FSharedStateShuffleManager::SetSeed
          (FSharedStateShuffleManager *this,uint param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  
  if (this == (FSharedStateShuffleManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  puVar5 = (undefined8 *)0x0;
  puVar2 = puVar5;
  if (*(int *)&(this->Shufflers).field_0x8 != *(int *)&(this->Shufflers).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Shufflers).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Shufflers).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->Shufflers).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar1 != -1) {
      do {
        puVar2 = (undefined8 *)(*(longlong *)&this->Shufflers + (longlong)iVar1 * 0x18);
        if (*(uint *)(*(longlong *)&this->Shufflers + (longlong)iVar1 * 0x18) == param_1) break;
        iVar1 = *(int *)(puVar2 + 2);
        puVar2 = puVar5;
      } while (iVar1 != -1);
    }
  }
  puVar3 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = puVar5;
  }
  FArrayIndexShuffler::SetSeed((FArrayIndexShuffler *)*puVar3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014afbe0e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ShuffleArray @ 14afbe470

void __thiscall
Metasound::FSharedStateShuffleManager::ShuffleArray(FSharedStateShuffleManager *this,uint param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  
  if (this == (FSharedStateShuffleManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  puVar5 = (undefined8 *)0x0;
  puVar2 = puVar5;
  if (*(int *)&(this->Shufflers).field_0x8 != *(int *)&(this->Shufflers).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Shufflers).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Shufflers).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->Shufflers).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar1 != -1) {
      do {
        puVar2 = (undefined8 *)(*(longlong *)&this->Shufflers + (longlong)iVar1 * 0x18);
        if (*(uint *)(*(longlong *)&this->Shufflers + (longlong)iVar1 * 0x18) == param_1) break;
        iVar1 = *(int *)(puVar2 + 2);
        puVar2 = puVar5;
      } while (iVar1 != -1);
    }
  }
  puVar3 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = puVar5;
  }
  FArrayIndexShuffler::ShuffleArray((FArrayIndexShuffler *)*puVar3);
                    /* WARNING: Could not recover jumptable at 0x00014afbe4fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

