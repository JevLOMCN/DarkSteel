// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 17

// <lambda_invoker_cdecl> @ 1416c8c10

void __cdecl
`FThreadManager::Tick'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (uint param_1,FRunnableThread *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_2->_padding_ + 0x28))(param_2);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001416c8c31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->_padding_ + 0x40))(param_2);
    return;
  }
  return;
}

// FThreadManager @ 1416d7790

FThreadManager * __thiscall FThreadManager::FThreadManager(FThreadManager *this)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  *(undefined8 *)&(this->Threads).field_0x1800 = 0;
  *(undefined4 *)&(this->Threads).field_0x1808 = 0;
  *(undefined4 *)&(this->Threads).field_0x180c = 0x100;
  *(undefined8 *)&(this->Threads).field_0x1830 = 0;
  *(undefined4 *)&(this->Threads).field_0x1838 = 0;
  *(undefined4 *)&(this->Threads).field_0x183c = 0x100;
  *(undefined4 *)&(this->Threads).field_0x1840 = 0xffffffff;
  *(undefined4 *)&(this->Threads).field_0x1844 = 0;
  *(undefined8 *)&(this->Threads).field_0x1a48 = 0;
  *(undefined4 *)&(this->Threads).field_0x1a50 = 0;
  this->bIsThreadListDirty = false;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FThreadManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnParentPreFork,(FThreadManager *)&stack0x00000008,(pmf_2dff1dc5)this)
  ;
  return this;
}

// ~FThreadManager @ 1416d97d0

void __thiscall FThreadManager::~FThreadManager(FThreadManager *this)

{
  void *pvVar1;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnParentPreFork,
             this);
  *(undefined4 *)&(this->Threads).field_0x1a50 = 0;
  pvVar1 = *(void **)&(this->Threads).field_0x1a48;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRunnableThread_*>_>,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRunnableThread_*>_>,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRunnableThread_*>_>,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&this->Threads);
                    /* WARNING: Could not recover jumptable at 0x0001416d981d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// operator() @ 1416db410

void __thiscall
`FThreadManager::GetAllThreadStackBackTraces'::__l2::<lambda_1>::operator()
          (void *this,uint param_1,FRunnableThread *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar4 = *(int *)&pFVar2[1].Data;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x340,8,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar4 + 1;
  pFVar3 = pFVar2->Data;
  DefaultConstructItems<FThreadManager::FThreadStackBackTrace,int>
            ((FThreadStackBackTrace *)(pFVar3 + (longlong)iVar4 * 0x340),1);
  if ((param_2->ThreadName).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_2->ThreadName).Data.AllocatorInstance.Data;
  }
  GetAllThreadStackBackTraces_ProcessSingle
            (*(uint *)this,param_1,pwVar5,
             (FThreadStackBackTrace *)(pFVar3 + (longlong)iVar4 * 0x340));
  return;
}

// operator() @ 1416db4b0

void __thiscall
`FThreadManager::GetForkableThreads'::__l2::<lambda_1>::operator()
          (void *this,uint param_1,FRunnableThread *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 in_register_00000014;
  FRunnableThread *local_res18 [2];
  
  local_res18[0] = param_2;
  iVar5 = (**(code **)(param_2->_padding_ + 0x28))(param_2,CONCAT44(in_register_00000014,param_1));
  if (iVar5 == 2) {
    pFVar2 = *(ForAnyElementType **)this;
    if ((pFVar2->Data <= (FScriptContainerElement *)local_res18) &&
       ((FScriptContainerElement *)local_res18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(FRunnableThread **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res18[0];
  }
  return;
}

// AddThread @ 1416dfb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FThreadManager::AddThread(FThreadManager *this,uint param_1,FRunnableThread *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  wchar_t *pwVar5;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  uint local_60 [2];
  FRunnableThread *local_58;
  TPairInitializer<unsigned_int_const_&,FRunnableThread_*_const_&> local_50;
  FRunnableThread **local_40;
  char local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pcVar4 = local_38;
  iVar3 = 7;
  builtin_strncpy(local_38,"\x06\x10\x03 \x010",7);
  builtin_strncpy(local_38 + 7,"@\x05P\x02`\x04p",7);
  do {
    if ((int)*pcVar4 == param_2->ThreadPriority) {
      iVar3 = (int)pcVar4[1];
      break;
    }
    pcVar4 = pcVar4 + 2;
  } while (pcVar4 != local_38 + 0xe);
  if ((param_2->ThreadName).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_2->ThreadName).Data.AllocatorInstance.Data;
  }
  local_68[0] = param_1;
  local_58 = param_2;
  UE::Trace::ThreadRegister(pwVar5,param_2->ThreadID,iVar3);
  bVar2 = FGenericPlatformProcess::SupportsMultithreading();
  if ((((!bVar2) && (iVar3 = (**(code **)(local_58->_padding_ + 0x28))(), iVar3 == 0)) &&
      ((local_68[0] & 0x80000000) != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ThreadId & FFakeThread::FakeIdReservedBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x20a,
                         L"The thread ID  assigned by the kernel clashes with the bit reserved for identifying fake threads. Need to revisit the fake ID assignment algo."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this == (FThreadManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  local_60[0] = local_68[0];
  iVar3 = TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::FindIndexByHash<unsigned_int>
                    ((TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                      *)&this->Threads,local_68[0],local_60);
  if (iVar3 == -1) {
    local_50.Value = (FRunnableThread **)local_68;
    local_40 = &local_58;
    TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::Emplace<TPairInitializer<unsigned_int_const_&,FRunnableThread_*_const_&>_>
              ((TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                *)&this->Threads,&local_50,(bool *)&local_50.Value);
    this->bIsThreadListDirty = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// CheckThreadListSafeToContinueIteration @ 1416e2630

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FThreadManager::CheckThreadListSafeToContinueIteration(FThreadManager *this)

{
  if (this->bIsThreadListDirty != false) {
    if (1 < (byte)LogCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    return false;
  }
  return true;
}

// ForEachThread @ 1416ef730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FThreadManager::ForEachThread
          (FThreadManager *this,TFunction<void___cdecl(unsigned_int,FRunnableThread_*)> *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  ForElementType<unsigned_int> FVar12;
  uint uVar13;
  undefined1 auStackY_1b48 [32];
  undefined1 local_1b18 [8];
  undefined4 local_1b10;
  undefined1 *local_1b08;
  int iStack_1b00;
  uint uStack_1afc;
  TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *local_1af8;
  undefined4 uStack_1af0;
  uint uStack_1aec;
  int local_1ae8;
  uint uStack_1ae4;
  int iStack_1ae0;
  undefined4 uStack_1adc;
  int local_1ad8;
  undefined8 local_1ad0;
  undefined1 *local_1ac8;
  TConstSetBitIterator<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> TStack_1ac0;
  undefined8 uStack_1aa0;
  undefined1 local_1a98 [6144];
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> local_298;
  int local_290;
  int local_28c;
  TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_288;
  undefined8 uStack_258;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1b48;
  if (this == (FThreadManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iVar11 = 0;
  local_28c = 0x100;
  local_298 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0;
  local_288.NumBits = ___xmm_00000000ffffffff0000010000000000;
  local_288.MaxBits = _UNK_15066df54;
  uStack_258 = _UNK_15066df58;
  local_290 = 0;
  local_288.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50 = (ForElementType<FSetElementId>)0x0;
  local_48 = 0;
  TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::operator=((TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               *)local_1a98,
              (TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               *)&this->Threads);
  uVar10 = local_288.NumBits;
  uStack_1afc = 1;
  local_1ae8 = 0;
  uStack_1aec = 0;
  if (local_288.NumBits != 0) {
    FVar12 = (ForElementType<unsigned_int>)&local_288;
    if (local_288.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_288.AllocatorInstance.SecondaryData;
    }
    uVar13 = *(uint *)FVar12;
    local_1ae8 = 0;
    while (uVar13 == 0) {
      lVar6 = (longlong)iVar11;
      local_1ae8 = local_1ae8 + 0x20;
      iVar11 = iVar11 + 1;
      uStack_1aec = local_288.NumBits;
      if ((int)((local_288.NumBits - 1U) + ((int)(local_288.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar11) goto LAB_1416ef871;
      uVar13 = *(uint *)((uchar *)((longlong)FVar12 + 4) + lVar6 * 4);
    }
    uStack_1afc = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_1afc * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_1ad8 = (int)lVar6;
    uStack_1aec = local_1ad8 + -1 + local_1ae8;
    if (local_288.NumBits < (int)uStack_1aec) {
      uStack_1aec = local_288.NumBits;
    }
  }
LAB_1416ef871:
  local_1b08 = local_1a98;
  local_1af8 = &local_288;
  uVar13 = local_288.NumBits & 0xffffffe0;
  iStack_1ae0 = local_290 - uStack_258._4_4_;
  uStack_1af0 = 0xffffffff;
  TStack_1ac0.CurrentBitIndex = uStack_1aec;
  TStack_1ac0.UnvisitedBitMask = 0xffffffff;
  TStack_1ac0._padding_ = CONCAT44(uStack_1afc,iVar11);
  iVar8 = local_288.NumBits >> 5;
  TStack_1ac0._28_4_ = uStack_1aec;
  TStack_1ac0.BaseBitIndex = local_1ae8;
  uStack_1aa0 = CONCAT44(uStack_1adc,iStack_1ae0);
  bVar5 = (byte)local_288.NumBits;
  iStack_1b00 = iVar11;
  uStack_1ae4 = uStack_1aec;
  local_1ac8 = local_1b08;
  TStack_1ac0.Array = local_1af8;
  if (local_288.NumBits < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (uVar10 != local_288.NumBits) {
    FVar12 = (ForElementType<unsigned_int>)&local_288;
    if (local_288.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_288.AllocatorInstance.SecondaryData;
    }
    uVar10 = -1 << (bVar5 & 0x1f) & *(uint *)((longlong)FVar12 + (longlong)iVar8 * 4);
    while (uVar10 == 0) {
      lVar6 = (longlong)iVar8;
      uVar13 = uVar13 + 0x20;
      iVar8 = iVar8 + 1;
      uVar10 = local_288.NumBits;
      if ((int)((local_288.NumBits - 1U) + ((int)(local_288.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar8) goto LAB_1416ef98c;
      uVar10 = *(uint *)((uchar *)((longlong)FVar12 + 4) + lVar6 * 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar10 = (int)lVar6 + -1 + uVar13;
    if (local_288.NumBits < (int)uVar10) {
      uVar10 = local_288.NumBits;
    }
  }
LAB_1416ef98c:
  while( true ) {
    puVar9 = local_1ac8;
    if (*(int *)(local_1ac8 + 0x1808) - *(int *)(local_1ac8 + 0x1844) != (int)uStack_1aa0) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRunnableThread_*>_>,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b18);
    }
    if (((TStack_1ac0.CurrentBitIndex == uVar10) && (TStack_1ac0.Array == &local_288)) &&
       (puVar9 == local_1a98)) break;
    if (*(undefined1 **)(puVar9 + 0x1800) != (undefined1 *)0x0) {
      puVar9 = *(undefined1 **)(puVar9 + 0x1800);
    }
    local_1ad0 = *(undefined8 *)(puVar9 + (longlong)TStack_1ac0.CurrentBitIndex * 0x18 + 8);
    local_1b10 = *(undefined4 *)(puVar9 + (longlong)TStack_1ac0.CurrentBitIndex * 0x18);
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar7 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar7 = (longlong *)&param_1->field_0x10;
    }
    uVar4 = (**(code **)(*plVar7 + 8))();
    (*pcVar2)(uVar4);
    TStack_1ac0.UnvisitedBitMask = TStack_1ac0.UnvisitedBitMask & ~TStack_1ac0._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
              (&TStack_1ac0);
  }
  local_48 = 0;
  if (local_50 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50);
  }
  local_290 = 0;
  if (local_28c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
              (0x18,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *)
                        local_1a98,0,&local_28c);
  }
  iVar11 = local_288.MaxBits;
  local_288._40_8_ = (ulonglong)(uint)local_288.MaxBits << 0x20;
  uStack_258 = 0xffffffff;
  if (0x100 < (uint)iVar11) {
    local_288.NumBits = 0;
    local_288.MaxBits = 0x100;
    TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Realloc(&local_288,0);
  }
  if (local_288.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_288.AllocatorInstance.SecondaryData);
  }
  if (local_298 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
    FMemory::Free((void *)local_298);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  if (*(longlong *)param_1 != 0) {
    plVar7 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// ForEachThreadStackBackTrace @ 1416efb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FThreadManager::ForEachThreadStackBackTrace
          (FThreadManager *this,
          TFunctionRef<bool___cdecl(unsigned_int,wchar_t_const_*,TArrayView<unsigned___int64_const_,int>_const_&)>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
  *pTVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 auStackY_478 [32];
  undefined1 local_448 [8];
  uint local_440 [2];
  uint local_438;
  uint local_430 [2];
  int local_428;
  int local_424;
  wchar_t *local_420;
  TFunctionRef<bool___cdecl(unsigned_int,wchar_t_const_*,TArrayView<unsigned___int64_const_,int>_const_&)>
  *local_418;
  wchar_t *local_410;
  TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
  *local_408;
  int iStack_400;
  uint uStack_3fc;
  undefined1 *local_3f8;
  undefined4 uStack_3f0;
  int iStack_3ec;
  int local_3e8;
  undefined4 uStack_3e4;
  int iStack_3e0;
  undefined4 uStack_3dc;
  TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
  *local_3d8;
  TConstSetBitIterator<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> TStack_3d0;
  undefined8 uStack_3b0;
  ForElementType<unsigned___int64> *local_3a8;
  uint local_3a0;
  ForElementType<unsigned___int64> *local_398;
  uint local_390;
  undefined4 local_36c;
  ForElementType<unsigned___int64> local_368;
  uint local_48 [2];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_478;
  local_418 = param_1;
  DVar7 = GetCurrentThreadId();
  local_48[0] = 0;
  local_48[1] = 100;
  local_438 = DVar7;
  iVar8 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<100>::ForElementType<unsigned___int64>_>
                    (8,8,100,&local_368,(int *)local_48,(int *)(local_48 + 1));
  memset(local_368.InlineData + iVar8,0,800);
  if (this == (FThreadManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar14 = local_48[0];
  this->bIsThreadListDirty = false;
  if (((int)local_48[0] < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (DVar7 == GGameThreadId) {
    uVar9 = FWindowsPlatformStackWalk::CaptureStackBackTrace
                      ((ulong64 *)&local_368,uVar14,(void *)0x0);
  }
  else {
    uVar9 = FWindowsPlatformStackWalk::CaptureThreadStackBackTrace
                      ((ulonglong)GGameThreadId,(ulong64 *)&local_368,uVar14,(void *)0x0);
  }
  if ((int)uVar9 < (int)uVar14) {
    uVar14 = uVar9;
  }
  uVar9 = 0;
  if (0 < (int)uVar14) {
    uVar9 = uVar14;
  }
  if (((int)uVar9 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_3a8 = &local_368;
  local_420 = L"GameThread";
  local_440[0] = GGameThreadId;
  local_3a0 = uVar9;
  cVar6 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_440);
  if (this->bIsThreadListDirty == false) {
    if (cVar6 != '\0') {
      local_408 = &this->Threads;
      iStack_400 = 0;
      puVar1 = &(this->Threads).field_0x1810;
      iVar8 = *(int *)&(this->Threads).field_0x1838;
      local_3e8 = 0;
      uStack_3fc = 1;
      iStack_3ec = 0;
      if (iVar8 != 0) {
        puVar16 = *(uint **)&(this->Threads).field_0x1830;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)puVar1;
        }
        uVar14 = *puVar16;
        while (uVar14 == 0) {
          lVar11 = (longlong)iStack_400;
          local_3e8 = local_3e8 + 0x20;
          iStack_400 = iStack_400 + 1;
          iStack_3ec = iVar8;
          if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_400)
          goto LAB_1416efdde;
          uVar14 = puVar16[lVar11 + 1];
        }
        uStack_3fc = -uVar14 & uVar14;
        uVar2 = (ulonglong)uStack_3fc * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_428 = (int)lVar11;
        iStack_3ec = local_3e8 + -1 + local_428;
        if (iVar8 < iStack_3ec) {
          iStack_3ec = iVar8;
        }
      }
LAB_1416efdde:
      uVar14 = *(uint *)&(this->Threads).field_0x1838;
      uStack_3e4 = local_36c;
      uVar9 = uVar14 & 0xffffffe0;
      iStack_3e0 = *(int *)&(this->Threads).field_0x1808 - *(int *)&(this->Threads).field_0x1844;
      uStack_3f0 = 0xffffffff;
      TStack_3d0._padding_ = CONCAT44(uStack_3fc,iStack_400);
      TStack_3d0.CurrentBitIndex = iStack_3ec;
      TStack_3d0.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar14 >> 5;
      TStack_3d0._28_4_ = local_36c;
      TStack_3d0.BaseBitIndex = local_3e8;
      uStack_3b0 = CONCAT44(uStack_3dc,iStack_3e0);
      local_3f8 = puVar1;
      local_3d8 = local_408;
      TStack_3d0.Array =
           (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)puVar1;
      if ((((int)uVar14 < 0) || (iVar8 < (int)uVar14)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar3 = *(uint *)&(this->Threads).field_0x1838;
      if (uVar14 != uVar3) {
        puVar15 = *(undefined1 **)&(this->Threads).field_0x1830;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = puVar1;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar12;
          uVar9 = uVar9 + 0x20;
          iVar12 = iVar12 + 1;
          uVar14 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_1416efef0;
          uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_424 = (int)lVar11;
        uVar14 = local_424 + -1 + uVar9;
        if ((int)uVar3 < (int)uVar14) {
          uVar14 = uVar3;
        }
      }
LAB_1416efef0:
      do {
        pTVar13 = local_3d8;
        if (*(int *)&local_3d8->field_0x1808 - *(int *)&local_3d8->field_0x1844 != (int)uStack_3b0)
        {
          local_448[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRunnableThread_*>_>,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_448);
        }
        uVar9 = local_48[0];
        if (((TStack_3d0.CurrentBitIndex == uVar14) &&
            (TStack_3d0.Array ==
             (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)puVar1)) &&
           (pTVar13 == &this->Threads)) goto LAB_1416f005e;
        if (*(TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
              **)&pTVar13->field_0x1800 !=
            (TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
             *)0x0) {
          pTVar13 = *(TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
                      **)&pTVar13->field_0x1800;
        }
        uVar3 = *(uint *)(&pTVar13->field_0x0 + (longlong)TStack_3d0.CurrentBitIndex * 0x18);
        lVar11 = *(longlong *)(&pTVar13->field_0x8 + (longlong)TStack_3d0.CurrentBitIndex * 0x18);
        if (((int)local_48[0] < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_438 == uVar3) {
          uVar10 = FWindowsPlatformStackWalk::CaptureStackBackTrace
                             ((ulong64 *)&local_368,uVar9,(void *)0x0);
        }
        else {
          uVar10 = FWindowsPlatformStackWalk::CaptureThreadStackBackTrace
                             ((ulonglong)uVar3,(ulong64 *)&local_368,uVar9,(void *)0x0);
        }
        if ((int)uVar10 < (int)uVar9) {
          uVar9 = uVar10;
        }
        uVar10 = 0;
        if (0 < (int)uVar9) {
          uVar10 = uVar9;
        }
        if (((int)uVar10 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_398 = &local_368;
        if (*(int *)(lVar11 + 0x10) == 0) {
          local_410 = L"";
        }
        else {
          local_410 = *(wchar_t **)(lVar11 + 8);
        }
        local_430[0] = uVar3;
        local_390 = uVar10;
        cVar6 = (**(code **)local_418)(*(undefined8 *)&local_418->field_0x8,local_430);
        if (this->bIsThreadListDirty != false) {
          if (1 < (byte)LogCore._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
          }
LAB_1416f005e:
          LeaveCriticalSection((LPCRITICAL_SECTION)this);
          return;
        }
        if (cVar6 == '\0') goto LAB_1416f005e;
        TStack_3d0.UnvisitedBitMask = TStack_3d0.UnvisitedBitMask & ~TStack_3d0._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
        FindFirstSetBit(&TStack_3d0);
      } while( true );
    }
  }
  else if (1 < (byte)LogCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Get @ 1416f1540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FThreadManager * __cdecl FThreadManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton.Threads._6156_4_ = 0x100;
      ::Singleton.Threads._6144_8_ = 0;
      ::Singleton.Threads._6152_4_ = 0;
      ::Singleton.Threads._6192_8_ = 0;
      ::Singleton.Threads._6200_8_ = ___xmm_00000000ffffffff0000010000000000;
      ::Singleton.Threads._6208_8_ = _UNK_15066df58;
      ::Singleton.Threads._6728_8_ = 0;
      ::Singleton.Threads._6736_4_ = 0;
      ::Singleton.bIsThreadListDirty = false;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddRaw<FThreadManager>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnParentPreFork,(FThreadManager *)&stack0x00000008,
                 (pmf_2dff1dc5)0x154eb2958);
      atexit(`FThreadManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetAllThreadStackBackTraces @ 1416f1a00

void __thiscall
FThreadManager::GetAllThreadStackBackTraces
          (FThreadManager *this,
          TArray<FThreadManager::FThreadStackBackTrace,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  FThreadStackBackTrace *pFVar5;
  undefined4 uStack_44;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TArray<FThreadManager::FThreadStackBackTrace,TSizedDefaultAllocator<32>_> *pTStack_18;
  undefined8 local_10;
  
  DVar2 = GetCurrentThreadId();
  if (this == (FThreadManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar4 = (*(int *)&(this->Threads).field_0x1808 - *(int *)&(this->Threads).field_0x1844) + 1;
  if (-1 < (int)uVar4) {
    DestructItems<FThreadManager::FThreadStackBackTrace,int>
              ((FThreadStackBackTrace *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (*piVar1 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x340,8,uVar4,&param_1->AllocatorInstance,0,piVar1);
    }
    iVar3 = param_1->ArrayNum;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x340,8,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar3 + 1;
    pFVar5 = (FThreadStackBackTrace *)((param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x340);
    DefaultConstructItems<FThreadManager::FThreadStackBackTrace,int>(pFVar5,1);
    GetAllThreadStackBackTraces_ProcessSingle(DVar2,GGameThreadId,L"GameThread",pFVar5);
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FThreadManager::GetAllThreadStackBackTraces'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_20._4_4_ = uStack_44;
    local_20._0_4_ = DVar2;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FThreadManager::GetAllThreadStackBackTraces'::__l2::<lambda_1>,void,unsigned_int,FRunnableThread_*>
                  ::Call;
    local_10 = 0;
    pTStack_18 = param_1;
    ForEachThread(this,(TFunction<void___cdecl(unsigned_int,FRunnableThread_*)> *)local_38);
                    /* WARNING: Could not recover jumptable at 0x0001416f1b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// GetForkableThreads @ 1416f84d0

TArray<FRunnableThread_*,TSizedDefaultAllocator<32>_> * __thiscall
FThreadManager::GetForkableThreads
          (FThreadManager *this,
          TArray<FRunnableThread_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *local_38 [2];
  undefined **local_28;
  TArray<FRunnableThread_*,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FThreadManager::GetForkableThreads'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FThreadManager::GetForkableThreads'::__l2::<lambda_1>,void,unsigned_int,FRunnableThread_*>
                ::Call;
  local_20 = __return_storage_ptr__;
  ForEachThread(this,(TFunction<void___cdecl(unsigned_int,FRunnableThread_*)> *)local_38);
  return __return_storage_ptr__;
}

// GetThreadNameInternal @ 1416fbba0

FString * __thiscall FThreadManager::GetThreadNameInternal(FThreadManager *this,uint param_1)

{
  int iVar1;
  TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
  *pTVar2;
  longlong *plVar3;
  FString *pFVar4;
  uint local_res8 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FThreadManager::GetThreadNameInternal'::__l2::
             _dynamic_atexit_destructor_for__NoThreadName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (this == (FThreadManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  local_res8[0] = param_1;
  iVar1 = TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::FindIndexByHash<unsigned_int>
                    ((TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                      *)&this->Threads,param_1,local_res8);
  if (iVar1 != -1) {
    pTVar2 = *(TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
               **)&(this->Threads).field_0x1800;
    if (pTVar2 == (TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
                   *)0x0) {
      pTVar2 = &this->Threads;
    }
    plVar3 = (longlong *)(&pTVar2->field_0x0 + (longlong)iVar1 * 0x18 + 8);
    if (&pTVar2->field_0x0 + (longlong)iVar1 * 0x18 == (undefined1 *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 != (longlong *)0x0) {
      pFVar4 = (FString *)(*plVar3 + 8);
      goto LAB_1416fbc44;
    }
  }
  pFVar4 = &NoThreadName;
LAB_1416fbc44:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return pFVar4;
}

// HandleOnParentPreFork @ 1416fcfe0

void __thiscall FThreadManager::HandleOnParentPreFork(FThreadManager *this)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [8];
  undefined8 *local_48;
  ulonglong local_40;
  code *local_38 [2];
  undefined **local_28;
  undefined8 **local_20;
  undefined8 local_10;
  
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FThreadManager::GetForkableThreads'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_20 = &local_48;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FThreadManager::GetForkableThreads'::__l2::<lambda_1>,void,unsigned_int,FRunnableThread_*>
                ::Call;
  ForEachThread(this,(TFunction<void___cdecl(unsigned_int,FRunnableThread_*)> *)local_38);
  iVar2 = (int)local_40;
  uVar3 = (ulonglong)(int)local_40;
  puVar1 = local_48 + uVar3;
  puVar4 = local_48;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<FRunnableThread_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar4 == puVar1) break;
    (**(code **)(*(longlong *)*puVar4 + 0x48))();
    uVar3 = local_40 & 0xffffffff;
    puVar4 = puVar4 + 1;
  }
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// OnThreadListModified @ 141706470

void __thiscall FThreadManager::OnThreadListModified(FThreadManager *this)

{
  this->bIsThreadListDirty = true;
  return;
}

// RemoveThread @ 14170d3d0

void __thiscall FThreadManager::RemoveThread(FThreadManager *this,FRunnableThread *param_1)

{
  TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
  *pTVar5;
  TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
  *pTVar6;
  uint *puVar7;
  uint local_res8 [2];
  TConstSetBitIterator<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> TStack_70;
  TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  if (this == (FThreadManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iStack_48 = 0;
  this_00 = &this->Threads;
  TStack_70.Array =
       (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
       &(this->Threads).field_0x1810;
  uStack_44 = 1;
  iVar2 = *(int *)&(this->Threads).field_0x1838;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->Threads).field_0x1830;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)TStack_70.Array;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar4 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14170d48d;
      uVar3 = puVar7[lVar4 + 1];
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar4;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_14170d48d:
  uStack_38 = 0xffffffff;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this_00;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iStack_48;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < *(int *)&(this->Threads).field_0x1838) {
    do {
      pTVar6 = *(TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
                 **)&(this->Threads).field_0x1800;
      pTVar5 = this_00;
      if (pTVar6 != (TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
                     *)0x0) {
        pTVar5 = pTVar6;
      }
      if (*(FRunnableThread **)(&pTVar5->field_0x0 + (longlong)TStack_70.CurrentBitIndex * 0x18 + 8)
          == param_1) {
        if (pTVar6 == (TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
                       *)0x0) {
          pTVar6 = this_00;
        }
        if ((uint *)(&pTVar6->field_0x0 + (longlong)TStack_70.CurrentBitIndex * 0x18) != (uint *)0x0
           ) {
          local_res8[0] = *(uint *)(&pTVar6->field_0x0 + (longlong)TStack_70.CurrentBitIndex * 0x18)
          ;
          if (*(int *)&(this->Threads).field_0x1808 != *(int *)&(this->Threads).field_0x1844) {
            TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ::RemoveImpl<unsigned_int>
                      ((TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                        *)this_00,local_res8[0],local_res8);
          }
          this->bIsThreadListDirty = true;
        }
        break;
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
      FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
                    /* WARNING: Could not recover jumptable at 0x00014170d5a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Tick @ 141715270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FThreadManager::Tick(FThreadManager *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_void___cdecl_FThreadManager::Tick(void)_::_5_::FStat_STAT_FSingleThreadManager_Tick>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_68;
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined8 local_30;
  
  bVar4 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar4) {
    return;
  }
  FVar10.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FSingleThreadManager_Tick ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FThreadManager::Tick(void)_::_5_::FStat_STAT_FSingleThreadManager_Tick>
         )0x0) {
      pFVar5 = ::FName::FName((FName *)&local_res10.s,"STAT_FSingleThreadManager_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FSingleThreadManager_Tick,*pFVar5,
                 L"STAT_FSingleThreadManager_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_STAT_FSingleThreadManager_Tick;
  if (StatPtr_STAT_FSingleThreadManager_Tick ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FThreadManager::Tick(void)_::_5_::FStat_STAT_FSingleThreadManager_Tick>
       )0x0) {
    pFVar5 = ::FName::FName(local_res18,"STAT_FSingleThreadManager_Tick");
    FVar6 = (FThreadSafeStaticStat<_public:_void___cdecl_FThreadManager::Tick(void)_::_5_::FStat_STAT_FSingleThreadManager_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FSingleThreadManager_Tick,
                         *pFVar5,L"STAT_FSingleThreadManager_Tick","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar4 = false;
  bVar3 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar8.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                   ,0x227);
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar8.Value;
      local_res10.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar2 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_141715424;
    }
  }
  bVar2 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_141715424:
  local_30 = 0;
  local_48 = &
             ___7__TFunction_OwnedObject_P6AXIPEAVFRunnableThread___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_40 = `FThreadManager::Tick'::__l5::<lambda_1>::<lambda_invoker_cdecl>;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(unsigned_int,FRunnableThread_*),void,unsigned_int,FRunnableThread_*>
                ::Call;
  ForEachThread(this,(TFunction<void___cdecl(unsigned_int,FRunnableThread_*)> *)local_58);
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar2) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_68.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res10);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

