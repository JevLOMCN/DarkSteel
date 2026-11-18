// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 168

// ~FDS_FilteredEventDelegate<UObject_*,UObject_*> @ 14b444110

void __thiscall
FDS_FilteredEventDelegate<UObject_*,UObject_*>::~FDS_FilteredEventDelegate<UObject_*,UObject_*>
          (FDS_FilteredEventDelegate<UObject_*,UObject_*> *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate_PEAVUObject__PEAV1___6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// CleanupSubscriptions @ 14b444b40

void __thiscall
FDS_FilteredEventDelegate<UObject_*,UObject_*>::CleanupSubscriptions
          (FDS_FilteredEventDelegate<UObject_*,UObject_*> *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b444c6e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b444c6e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// ~FDS_FilteredEventDelegate<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_> @ 14b44eac0

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_>::
~FDS_FilteredEventDelegate<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_> *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate___CBU__TWeakObjectPtr_VUDS_ChattingData__UFWeakObjectPtr______V__6B_
  ;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// ~FDS_FilteredEventDelegate<__int64_const_> @ 14b44eb20

void __thiscall
FDS_FilteredEventDelegate<__int64_const_>::~FDS_FilteredEventDelegate<__int64_const_>
          (FDS_FilteredEventDelegate<__int64_const_> *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CB_J__V__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// CleanupSubscriptions @ 14b451e70

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_>::
CleanupSubscriptions
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_> *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  PRTL_CRITICAL_SECTION_DEBUG p_Var9;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_30 = '\0';
  cStack_2f = '\0';
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar8 = local_98._24_8_ >> 0x20;
  uVar10 = local_98._28_4_;
  local_38 = (TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if ((int)uVar10 < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      plVar4 = local_68;
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_68 + 8 + (longlong)(int)uVar8 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar7 = lpCriticalSection[1].LockCount;
      p_Var9 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var9->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar7) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var9 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar7 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          bVar5 = true;
          goto LAB_14b451fa7;
        }
        if ((*(int *)&p_Var9->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var9->Type, lVar1._2_2_ = p_Var9->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var9->field_0x4, lVar1 != 0)) break;
        p_Var9 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var9->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
      bVar5 = false;
LAB_14b451fa7:
      bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)(int)uVar10 * 0x50 + *plVar4));
      if (!bVar6 || bVar5) {
        TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_40,uVar10);
        local_30 = '\x01';
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar8 = (ulonglong)uStack_4c;
      uVar10 = uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar10 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar7 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_38->HashSize < iVar7)) || (iVar7 < local_38->HashSize)) {
        local_38->HashSize = iVar7;
        TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b452090

void __thiscall
FDS_FilteredEventDelegate<__int64_const_>::CleanupSubscriptions
          (FDS_FilteredEventDelegate<__int64_const_> *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b4521be;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b4521be:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// ~FDS_FilteredEventDelegate<enum_EDS_WindowWidget_const_,UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&> @ 14b471e40

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_WindowWidget_const_,UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&>
::
~FDS_FilteredEventDelegate<enum_EDS_WindowWidget_const_,UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&>
          (void *this)

{
  UDS_EventManager *this_00;
  
  *(undefined ***)this =
       &
       ___7__FDS_FilteredEventDelegate___CBW4EDS_WindowWidget__PEAVUDS_UserWidget__AEBW4EDS_ContentsTabFrameType____6B_
  ;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,this);
  }
  TSet<TTuple<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((void *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// CleanupSubscriptions @ 14b474800

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_WindowWidget_const_,UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&>
::CleanupSubscriptions(void *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  longlong *local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  int local_68;
  undefined4 uStack_64;
  void *pvStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  void *pvStack_30;
  TSet<TTuple<EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_88,
             (TSet<TTuple<EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8));
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_78;
  local_58 = local_88;
  auStack_50._0_8_ = lStack_80;
  local_38 = local_68;
  uStack_34 = uStack_64;
  pvStack_30 = pvStack_60;
  uVar6 = local_78._8_8_ >> 0x20;
  local_28 = (TSet<TTuple<EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8);
  if (local_78._12_4_ < *(int *)(local_78._0_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pvStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b47492e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b47492e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// ~FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&> @ 14b4b2f90

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::
~FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
          (void *this)

{
  UDS_EventManager *this_00;
  
  *(undefined ***)this =
       &
       ___7__FDS_FilteredEventDelegate___CBW4EDS_KeyActionType____CBW41___CBW4ETriggerEvent__AEBUFInputActionValue____6B_
  ;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,this);
  }
  TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((void *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// CleanupSubscriptions @ 14b4b5a30

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::CleanupSubscriptions(void *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  longlong *local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  int local_68;
  undefined4 uStack_64;
  void *pvStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  void *pvStack_30;
  TSet<TTuple<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_88,
             (TSet<TTuple<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8));
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_78;
  local_58 = local_88;
  auStack_50._0_8_ = lStack_80;
  local_38 = local_68;
  uStack_34 = uStack_64;
  pvStack_30 = pvStack_60;
  uVar6 = local_78._8_8_ >> 0x20;
  local_28 = (TSet<TTuple<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8);
  if (local_78._12_4_ < *(int *)(local_78._0_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pvStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b4b5b5e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b4b5b5e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// ~FDS_FilteredEventDelegate<unsigned___int64_const_,enum_EDS_TamingState_const_> @ 14b4cbc40

void __thiscall
FDS_FilteredEventDelegate<unsigned___int64_const_,enum_EDS_TamingState_const_>::
~FDS_FilteredEventDelegate<unsigned___int64_const_,enum_EDS_TamingState_const_>(void *this)

{
  UDS_EventManager *this_00;
  
  *(undefined ***)this = &___7__FDS_FilteredEventDelegate___CB_K__CBW4EDS_TamingState____6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,this);
  }
  TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((void *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// CleanupSubscriptions @ 14b4cca40

void __thiscall
FDS_FilteredEventDelegate<unsigned___int64_const_,enum_EDS_TamingState_const_>::CleanupSubscriptions
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  longlong *local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  int local_68;
  undefined4 uStack_64;
  void *pvStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  void *pvStack_30;
  TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_88,
             (TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8));
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_78;
  local_58 = local_88;
  auStack_50._0_8_ = lStack_80;
  local_38 = local_68;
  uStack_34 = uStack_64;
  pvStack_30 = pvStack_60;
  uVar6 = local_78._8_8_ >> 0x20;
  local_28 = (TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8);
  if (local_78._12_4_ < *(int *)(local_78._0_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pvStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b4ccb6e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b4ccb6e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// ~FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&> @ 14b501e00

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::
~FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>(void *this)

{
  UDS_EventManager *this_00;
  
  *(undefined ***)this =
       &___7__FDS_FilteredEventDelegate___CBW4EDS_MountStep__AEBVFDS_MountStepInfo____6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,this);
  }
  TSet<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((void *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// ~FDS_FilteredEventDelegate<enum_EDS_StatusType_const_> @ 14b501e60

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_StatusType_const_>::
~FDS_FilteredEventDelegate<enum_EDS_StatusType_const_>(void *this)

{
  UDS_EventManager *this_00;
  
  *(undefined ***)this = &___7__FDS_FilteredEventDelegate___CBW4EDS_StatusType____V__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,this);
  }
  TSet<TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((void *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// ~FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&> @ 14b501ec0

void __thiscall
FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>::
~FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>
          (FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&> *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CB_KAEB_K__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// CleanupSubscriptions @ 14b503780

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::CleanupSubscriptions
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  longlong *local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  int local_68;
  undefined4 uStack_64;
  void *pvStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  void *pvStack_30;
  TSet<TTuple<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_88,
             (TSet<TTuple<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8));
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_78;
  local_58 = local_88;
  auStack_50._0_8_ = lStack_80;
  local_38 = local_68;
  uStack_34 = uStack_64;
  pvStack_30 = pvStack_60;
  uVar6 = local_78._8_8_ >> 0x20;
  local_28 = (TSet<TTuple<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8);
  if (local_78._12_4_ < *(int *)(local_78._0_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pvStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b5038ae;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b5038ae:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b503960

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_StatusType_const_>::CleanupSubscriptions(void *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  longlong *local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  int local_68;
  undefined4 uStack_64;
  void *pvStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  void *pvStack_30;
  TSet<TTuple<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_88,
             (TSet<TTuple<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8));
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_78;
  local_58 = local_88;
  auStack_50._0_8_ = lStack_80;
  local_38 = local_68;
  uStack_34 = uStack_64;
  pvStack_30 = pvStack_60;
  uVar6 = local_78._8_8_ >> 0x20;
  local_28 = (TSet<TTuple<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8);
  if (local_78._12_4_ < *(int *)(local_78._0_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pvStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b503a8e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b503a8e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b503b40

void __thiscall
FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>::CleanupSubscriptions
          (FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&> *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b503c6e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b503c6e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// ~FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_> @ 14b54b100

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>::
~FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>(void *this)

{
  UDS_EventManager *this_00;
  
  *(undefined ***)this = &___7__FDS_FilteredEventDelegate___CBW4EDS_ItemBasketType____CBH__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,this);
  }
  TSet<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((void *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// CleanupSubscriptions @ 14b54c250

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>::CleanupSubscriptions
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  longlong *local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  int local_68;
  undefined4 uStack_64;
  void *pvStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  void *pvStack_30;
  TSet<TTuple<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_88,
             (TSet<TTuple<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8));
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_78;
  local_58 = local_88;
  auStack_50._0_8_ = lStack_80;
  local_38 = local_68;
  uStack_34 = uStack_64;
  pvStack_30 = pvStack_60;
  uVar6 = local_78._8_8_ >> 0x20;
  local_28 = (TSet<TTuple<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8);
  if (local_78._12_4_ < *(int *)(local_78._0_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pvStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b54c37e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b54c37e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// ~FDS_FilteredEventDelegate<int_const_> @ 14b587660

void __thiscall
FDS_FilteredEventDelegate<int_const_>::~FDS_FilteredEventDelegate<int_const_>
          (FDS_FilteredEventDelegate<int_const_> *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CBH__V__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// CleanupSubscriptions @ 14b5885a0

void __thiscall
FDS_FilteredEventDelegate<int_const_>::CleanupSubscriptions
          (FDS_FilteredEventDelegate<int_const_> *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b5886ce;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b5886ce:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// ~FDS_FilteredEventDelegate<int,int> @ 14b594c30

void __thiscall
FDS_FilteredEventDelegate<int,int>::~FDS_FilteredEventDelegate<int,int>
          (FDS_FilteredEventDelegate<int,int> *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate_HH__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// CleanupSubscriptions @ 14b595f90

void __thiscall
FDS_FilteredEventDelegate<int,int>::CleanupSubscriptions(FDS_FilteredEventDelegate<int,int> *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b5960be;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b5960be:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// ~FDS_FilteredEventDelegate<enum_EDS_SwimStep_const_,FDS_SwimStepInfo_const_&> @ 14b5b22e0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_SwimStep_const_,FDS_SwimStepInfo_const_&>::
~FDS_FilteredEventDelegate<enum_EDS_SwimStep_const_,FDS_SwimStepInfo_const_&>(void *this)

{
  UDS_EventManager *this_00;
  
  *(undefined ***)this =
       &___7__FDS_FilteredEventDelegate___CBW4EDS_SwimStep__AEBVFDS_SwimStepInfo____6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,this);
  }
  TSet<TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((void *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// CleanupSubscriptions @ 14b5b39a0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_SwimStep_const_,FDS_SwimStepInfo_const_&>::CleanupSubscriptions
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  longlong *local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  int local_68;
  undefined4 uStack_64;
  void *pvStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  void *pvStack_30;
  TSet<TTuple<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_88,
             (TSet<TTuple<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8));
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_78;
  local_58 = local_88;
  auStack_50._0_8_ = lStack_80;
  local_38 = local_68;
  uStack_34 = uStack_64;
  pvStack_30 = pvStack_60;
  uVar6 = local_78._8_8_ >> 0x20;
  local_28 = (TSet<TTuple<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8);
  if (local_78._12_4_ < *(int *)(local_78._0_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pvStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b5b3ace;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b5b3ace:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// ~FDS_FilteredEventDelegate<enum_EDS_ViewModelTemplateKey_const_,int_const_,int_const_> @ 14b5c7f00

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_ViewModelTemplateKey_const_,int_const_,int_const_>::
~FDS_FilteredEventDelegate<enum_EDS_ViewModelTemplateKey_const_,int_const_,int_const_>(void *this)

{
  UDS_EventManager *this_00;
  
  *(undefined ***)this =
       &___7__FDS_FilteredEventDelegate___CBW4EDS_ViewModelTemplateKey____CBH__CBH__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,this);
  }
  TSet<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((void *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// ~FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_> @ 14b5c7f60

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
~FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>
           *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBH__CBH__6B_
  ;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// ~FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,bool_const_> @ 14b5c7fc0

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,bool_const_>::
~FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,bool_const_>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,bool_const_>
           *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBH__CB_N__6B_
  ;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// ~FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_> @ 14b5c8020

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_>::
~FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_> *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ =
       (longlong)
       &___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBH__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// ~FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,FDS_Text_const_&> @ 14b5c8080

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,FDS_Text_const_&>::
~FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,FDS_Text_const_&>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,FDS_Text_const_&>
           *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBHAEBUFDS_Text____6B_
  ;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// ~FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,enum_EDS_TabErrorType_const_,int_const_,int_const_> @ 14b5c80e0

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,enum_EDS_TabErrorType_const_,int_const_,int_const_>
::
~FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,enum_EDS_TabErrorType_const_,int_const_,int_const_>
          (void *this)

{
  UDS_EventManager *this_00;
  
  *(undefined ***)this =
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBW4EDS_TabErrorType____CBH__CBH__6B_
  ;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,this);
  }
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((void *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// CleanupSubscriptions @ 14b5ca0f0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_ViewModelTemplateKey_const_,int_const_,int_const_>::
CleanupSubscriptions(void *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  longlong *local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  int local_68;
  undefined4 uStack_64;
  void *pvStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  void *pvStack_30;
  TSet<TTuple<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_88,
             (TSet<TTuple<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8));
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_78;
  local_58 = local_88;
  auStack_50._0_8_ = lStack_80;
  local_38 = local_68;
  uStack_34 = uStack_64;
  pvStack_30 = pvStack_60;
  uVar6 = local_78._8_8_ >> 0x20;
  local_28 = (TSet<TTuple<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8);
  if (local_78._12_4_ < *(int *)(local_78._0_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pvStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b5ca21e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b5ca21e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b5ca2d0

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
CleanupSubscriptions
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>
           *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  PRTL_CRITICAL_SECTION_DEBUG p_Var9;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_30 = '\0';
  cStack_2f = '\0';
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar8 = local_98._24_8_ >> 0x20;
  uVar10 = local_98._28_4_;
  local_38 = (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if ((int)uVar10 < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      plVar4 = local_68;
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_68 + 8 + (longlong)(int)uVar8 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar7 = lpCriticalSection[1].LockCount;
      p_Var9 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var9->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar7) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var9 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar7 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          bVar5 = true;
          goto LAB_14b5ca407;
        }
        if ((*(int *)&p_Var9->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var9->Type, lVar1._2_2_ = p_Var9->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var9->field_0x4, lVar1 != 0)) break;
        p_Var9 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var9->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
      bVar5 = false;
LAB_14b5ca407:
      bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)(int)uVar10 * 0x50 + *plVar4));
      if (!bVar6 || bVar5) {
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_40,uVar10);
        local_30 = '\x01';
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar8 = (ulonglong)uStack_4c;
      uVar10 = uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar10 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar7 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_38->HashSize < iVar7)) || (iVar7 < local_38->HashSize)) {
        local_38->HashSize = iVar7;
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b5ca4f0

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,bool_const_>::
CleanupSubscriptions
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,bool_const_>
           *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  PRTL_CRITICAL_SECTION_DEBUG p_Var9;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_30 = '\0';
  cStack_2f = '\0';
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar8 = local_98._24_8_ >> 0x20;
  uVar10 = local_98._28_4_;
  local_38 = (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if ((int)uVar10 < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      plVar4 = local_68;
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_68 + 8 + (longlong)(int)uVar8 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar7 = lpCriticalSection[1].LockCount;
      p_Var9 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var9->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar7) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var9 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar7 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          bVar5 = true;
          goto LAB_14b5ca627;
        }
        if ((*(int *)&p_Var9->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var9->Type, lVar1._2_2_ = p_Var9->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var9->field_0x4, lVar1 != 0)) break;
        p_Var9 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var9->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
      bVar5 = false;
LAB_14b5ca627:
      bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)(int)uVar10 * 0x50 + *plVar4));
      if (!bVar6 || bVar5) {
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_40,uVar10);
        local_30 = '\x01';
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar8 = (ulonglong)uStack_4c;
      uVar10 = uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar10 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar7 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_38->HashSize < iVar7)) || (iVar7 < local_38->HashSize)) {
        local_38->HashSize = iVar7;
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b5ca710

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_>::CleanupSubscriptions
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_> *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  PRTL_CRITICAL_SECTION_DEBUG p_Var9;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_30 = '\0';
  cStack_2f = '\0';
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar8 = local_98._24_8_ >> 0x20;
  uVar10 = local_98._28_4_;
  local_38 = (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if ((int)uVar10 < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      plVar4 = local_68;
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_68 + 8 + (longlong)(int)uVar8 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar7 = lpCriticalSection[1].LockCount;
      p_Var9 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var9->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar7) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var9 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar7 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          bVar5 = true;
          goto LAB_14b5ca847;
        }
        if ((*(int *)&p_Var9->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var9->Type, lVar1._2_2_ = p_Var9->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var9->field_0x4, lVar1 != 0)) break;
        p_Var9 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var9->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
      bVar5 = false;
LAB_14b5ca847:
      bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)(int)uVar10 * 0x50 + *plVar4));
      if (!bVar6 || bVar5) {
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_40,uVar10);
        local_30 = '\x01';
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar8 = (ulonglong)uStack_4c;
      uVar10 = uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar10 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar7 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_38->HashSize < iVar7)) || (iVar7 < local_38->HashSize)) {
        local_38->HashSize = iVar7;
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b5ca930

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,FDS_Text_const_&>::
CleanupSubscriptions
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,FDS_Text_const_&>
           *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  PRTL_CRITICAL_SECTION_DEBUG p_Var9;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_30 = '\0';
  cStack_2f = '\0';
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar8 = local_98._24_8_ >> 0x20;
  uVar10 = local_98._28_4_;
  local_38 = (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if ((int)uVar10 < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      plVar4 = local_68;
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_68 + 8 + (longlong)(int)uVar8 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar7 = lpCriticalSection[1].LockCount;
      p_Var9 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var9->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar7) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var9 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar7 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          bVar5 = true;
          goto LAB_14b5caa67;
        }
        if ((*(int *)&p_Var9->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var9->Type, lVar1._2_2_ = p_Var9->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var9->field_0x4, lVar1 != 0)) break;
        p_Var9 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var9->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
      bVar5 = false;
LAB_14b5caa67:
      bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)(int)uVar10 * 0x50 + *plVar4));
      if (!bVar6 || bVar5) {
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_40,uVar10);
        local_30 = '\x01';
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar8 = (ulonglong)uStack_4c;
      uVar10 = uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar10 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar7 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_38->HashSize < iVar7)) || (iVar7 < local_38->HashSize)) {
        local_38->HashSize = iVar7;
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b5cab50

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,enum_EDS_TabErrorType_const_,int_const_,int_const_>
::CleanupSubscriptions(void *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  PRTL_CRITICAL_SECTION_DEBUG p_Var9;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar10;
  undefined1 local_res8 [8];
  longlong *local_98;
  longlong lStack_90;
  undefined1 local_88 [16];
  int local_78;
  undefined4 uStack_74;
  void *pvStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  int local_48;
  undefined4 uStack_44;
  void *pvStack_40;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_98,
             (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8));
  local_30 = '\0';
  cStack_2f = '\0';
  stack0xffffffffffffffa8 = local_88;
  local_68 = local_98;
  auStack_60._0_8_ = lStack_90;
  local_48 = local_78;
  uStack_44 = uStack_74;
  pvStack_40 = pvStack_70;
  uVar8 = local_88._8_8_ >> 0x20;
  uVar10 = local_88._12_4_;
  local_38 = (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8);
  if ((int)uVar10 < *(int *)(local_88._0_8_ + 0x18)) {
    do {
      plVar4 = local_68;
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_68 + 8 + (longlong)(int)uVar8 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar7 = lpCriticalSection[1].LockCount;
      p_Var9 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var9->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar7) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var9 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar7 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          bVar5 = true;
          goto LAB_14b5cac87;
        }
        if ((*(int *)&p_Var9->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var9->Type, lVar1._2_2_ = p_Var9->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var9->field_0x4, lVar1 != 0)) break;
        p_Var9 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var9->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
      bVar5 = false;
LAB_14b5cac87:
      bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)(int)uVar10 * 0x50 + *plVar4));
      if (!bVar6 || bVar5) {
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pvStack_40,uVar10);
        local_30 = '\x01';
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar8 = (ulonglong)uStack_4c;
      uVar10 = uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar10 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar7 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_38->HashSize < iVar7)) || (iVar7 < local_38->HashSize)) {
        local_38->HashSize = iVar7;
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

// FDS_FilteredEventDelegate<int_const_,int_const_> @ 14b76c520

FDS_FilteredEventDelegate<int_const_,int_const_> * __thiscall
FDS_FilteredEventDelegate<int_const_,int_const_>::FDS_FilteredEventDelegate<int_const_,int_const_>
          (FDS_FilteredEventDelegate<int_const_,int_const_> *this)

{
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CBH__CBH__6B_;
  *(undefined8 *)&this->Subscriptions = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x20 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->Subscriptions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Subscriptions).field_0x34 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  return this;
}

// FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_> @ 14b76c580

FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
* __thiscall
FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::
FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
          (FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
           *this)

{
  UDS_EventManager *this_00;
  
  this->_padding_ =
       (longlong)
       &___7__FDS_FilteredEventDelegate___CBH__CBM__CBU__TVector2_N_Math_UE____CBU123___6B_;
  *(undefined8 *)&this->Subscriptions = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x20 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->Subscriptions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Subscriptions).field_0x34 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  return this;
}

// FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_> @ 14b76c5e0

FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_> * __thiscall
FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::
FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>
          (FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_> *this)

{
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CBH__CB_N__CBH__CBH__6B_;
  *(undefined8 *)&this->Subscriptions = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x20 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->Subscriptions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Subscriptions).field_0x34 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  return this;
}

// FDS_FilteredEventDelegate<int_const_> @ 14b76c640

FDS_FilteredEventDelegate<int_const_> * __thiscall
FDS_FilteredEventDelegate<int_const_>::FDS_FilteredEventDelegate<int_const_>
          (FDS_FilteredEventDelegate<int_const_> *this)

{
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CBH__V__6B_;
  *(undefined8 *)&this->Subscriptions = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x20 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->Subscriptions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Subscriptions).field_0x34 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  return this;
}

// FDS_FilteredEventDelegate<int_const_,int> @ 14b76c6a0

FDS_FilteredEventDelegate<int_const_,int> * __thiscall
FDS_FilteredEventDelegate<int_const_,int>::FDS_FilteredEventDelegate<int_const_,int>
          (FDS_FilteredEventDelegate<int_const_,int> *this)

{
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CBHH__6B_;
  *(undefined8 *)&this->Subscriptions = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x20 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->Subscriptions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Subscriptions).field_0x34 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  return this;
}

// FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_> @ 14b76c700

FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_> *
__thiscall
FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>::
FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>
          (FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>
           *this)

{
  UDS_EventManager *this_00;
  
  this->_padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_J__CBM__CBU__TVector2_N_Math_UE____6B_;
  *(undefined8 *)&this->Subscriptions = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x20 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->Subscriptions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Subscriptions).field_0x34 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  return this;
}

// FDS_FilteredEventDelegate<__int64_const_,float_const_> @ 14b76c760

FDS_FilteredEventDelegate<__int64_const_,float_const_> * __thiscall
FDS_FilteredEventDelegate<__int64_const_,float_const_>::
FDS_FilteredEventDelegate<__int64_const_,float_const_>
          (FDS_FilteredEventDelegate<__int64_const_,float_const_> *this)

{
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CB_J__CBM__6B_;
  *(undefined8 *)&this->Subscriptions = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x20 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->Subscriptions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Subscriptions).field_0x34 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  return this;
}

// FDS_FilteredEventDelegate<__int64_const_> @ 14b76c7c0

FDS_FilteredEventDelegate<__int64_const_> * __thiscall
FDS_FilteredEventDelegate<__int64_const_>::FDS_FilteredEventDelegate<__int64_const_>
          (FDS_FilteredEventDelegate<__int64_const_> *this)

{
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CB_J__V__6B_;
  *(undefined8 *)&this->Subscriptions = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x20 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->Subscriptions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Subscriptions).field_0x34 = 0;
  *(undefined8 *)&(this->Subscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  return this;
}

// ~FDS_FilteredEventDelegate<int_const_,int_const_> @ 14b76f9d0

void __thiscall
FDS_FilteredEventDelegate<int_const_,int_const_>::~FDS_FilteredEventDelegate<int_const_,int_const_>
          (FDS_FilteredEventDelegate<int_const_,int_const_> *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CBH__CBH__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// ~FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_> @ 14b76fa30

void __thiscall
FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::
~FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
          (FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
           *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ =
       (longlong)
       &___7__FDS_FilteredEventDelegate___CBH__CBM__CBU__TVector2_N_Math_UE____CBU123___6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// ~FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_> @ 14b76fa90

void __thiscall
FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::
~FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>
          (FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_> *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CBH__CB_N__CBH__CBH__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// ~FDS_FilteredEventDelegate<int_const_,int> @ 14b76faf0

void __thiscall
FDS_FilteredEventDelegate<int_const_,int>::~FDS_FilteredEventDelegate<int_const_,int>
          (FDS_FilteredEventDelegate<int_const_,int> *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CBHH__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// ~FDS_FilteredEventDelegate<int_const_,UE::Math::TVector2<double>_> @ 14b76fb50

void __thiscall
FDS_FilteredEventDelegate<int_const_,UE::Math::TVector2<double>_>::
~FDS_FilteredEventDelegate<int_const_,UE::Math::TVector2<double>_>
          (FDS_FilteredEventDelegate<int_const_,UE::Math::TVector2<double>_> *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CBHU__TVector2_N_Math_UE____6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// ~FDS_FilteredEventDelegate<int_const_,enum_EDS_WorldMapZoomStep> @ 14b76fbb0

void __thiscall
FDS_FilteredEventDelegate<int_const_,enum_EDS_WorldMapZoomStep>::
~FDS_FilteredEventDelegate<int_const_,enum_EDS_WorldMapZoomStep>(void *this)

{
  UDS_EventManager *this_00;
  
  *(undefined ***)this = &___7__FDS_FilteredEventDelegate___CBHW4EDS_WorldMapZoomStep____6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,this);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((void *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// ~FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_> @ 14b76fc10

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>::
~FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>
          (FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>
           *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_J__CBM__CBU__TVector2_N_Math_UE____6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// ~FDS_FilteredEventDelegate<__int64_const_,float_const_> @ 14b76fc70

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,float_const_>::
~FDS_FilteredEventDelegate<__int64_const_,float_const_>
          (FDS_FilteredEventDelegate<__int64_const_,float_const_> *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CB_J__CBM__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// ~FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_> @ 14b76fcd0

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::
~FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
          (FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
           *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_J__CBU__TVector2_N_Math_UE____CBU123___6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// ~FDS_FilteredEventDelegate<__int64_const_,FString> @ 14b76fd30

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,FString>::
~FDS_FilteredEventDelegate<__int64_const_,FString>
          (FDS_FilteredEventDelegate<__int64_const_,FString> *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CB_JVFString____6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&this->Subscriptions);
  *(undefined4 *)&(this->Subscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subscriptions);
  return;
}

// CleanupSubscriptions @ 14b772de0

void __thiscall
FDS_FilteredEventDelegate<int_const_,int_const_>::CleanupSubscriptions
          (FDS_FilteredEventDelegate<int_const_,int_const_> *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b772f0e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b772f0e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b772fc0

void __thiscall
FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::CleanupSubscriptions
          (FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
           *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b7730ee;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b7730ee:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b7731a0

void __thiscall
FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::CleanupSubscriptions
          (FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_> *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b7732ce;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b7732ce:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b773380

void __thiscall
FDS_FilteredEventDelegate<int_const_,int>::CleanupSubscriptions
          (FDS_FilteredEventDelegate<int_const_,int> *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b7734ae;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b7734ae:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b773560

void __thiscall
FDS_FilteredEventDelegate<int_const_,UE::Math::TVector2<double>_>::CleanupSubscriptions
          (FDS_FilteredEventDelegate<int_const_,UE::Math::TVector2<double>_> *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b77368e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b77368e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b773740

void __thiscall
FDS_FilteredEventDelegate<int_const_,enum_EDS_WorldMapZoomStep>::CleanupSubscriptions(void *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  longlong *local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  int local_68;
  undefined4 uStack_64;
  void *pvStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  void *pvStack_30;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_88,
             (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8));
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_78;
  local_58 = local_88;
  auStack_50._0_8_ = lStack_80;
  local_38 = local_68;
  uStack_34 = uStack_64;
  pvStack_30 = pvStack_60;
  uVar6 = local_78._8_8_ >> 0x20;
  local_28 = (TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8);
  if (local_78._12_4_ < *(int *)(local_78._0_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pvStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b77386e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b77386e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b773920

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>::
CleanupSubscriptions
          (FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>
           *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b773a4e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b773a4e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b773b00

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,float_const_>::CleanupSubscriptions
          (FDS_FilteredEventDelegate<__int64_const_,float_const_> *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b773c2e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b773c2e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b773ce0

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::CleanupSubscriptions
          (FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
           *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b773e0e;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b773e0e:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14b773ec0

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,FString>::CleanupSubscriptions
          (FDS_FilteredEventDelegate<__int64_const_,FString> *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->Subscriptions;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14b773fee;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14b773fee:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// Remove<UDS_ClimbingAbility> @ 14b799e60

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_ClimbingAbility>(void *this,UDS_ClimbingAbility *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b799efe;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b799efe:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b79a000;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b79a000:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_InteractionAbility_Hold> @ 14b7d5240

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_InteractionAbility_Hold>(void *this,UDS_InteractionAbility_Hold *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b7d52de;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b7d52de:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b7d53e0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b7d53e0:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_InteractionAbility_LiftUp> @ 14b7d5460

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_InteractionAbility_LiftUp>(void *this,UDS_InteractionAbility_LiftUp *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b7d54fe;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b7d54fe:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b7d5600;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b7d5600:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_InteractionAbility_NPCTaming> @ 14b7d5680

void __thiscall
FDS_FilteredEventDelegate<unsigned___int64_const_,enum_EDS_TamingState_const_>::
Remove<UDS_InteractionAbility_NPCTaming>(void *this,UDS_InteractionAbility_NPCTaming *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b7d571e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b7d571e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b7d5820;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b7d5820:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_MountAbility_AirDash> @ 14b820410

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::
Remove<UDS_MountAbility_AirDash>(void *this,UDS_MountAbility_AirDash *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b8204ae;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b8204ae:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b8205b0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b8205b0:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_MountAbility_Ascent> @ 14b820630

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::
Remove<UDS_MountAbility_Ascent>(void *this,UDS_MountAbility_Ascent *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b8206ce;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b8206ce:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b8207d0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b8207d0:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_MountAbility_Descent> @ 14b820850

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::
Remove<UDS_MountAbility_Descent>(void *this,UDS_MountAbility_Descent *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b8208ee;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b8208ee:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b8209f0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b8209f0:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_MountAbility_Sprint> @ 14b820a70

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::
Remove<UDS_MountAbility_Sprint>(void *this,UDS_MountAbility_Sprint *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b820b0e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b820b0e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b820c10;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b820c10:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_PlayerSkillAbility_InstallCamp> @ 14b820c90

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_PlayerSkillAbility_InstallCamp>(void *this,UDS_PlayerSkillAbility_InstallCamp *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b820d2e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b820d2e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b820e30;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b820e30:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_MountAnim> @ 14b862510

void __thiscall
FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>::Remove<UDS_MountAnim>
          (FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&> *this,
          UDS_MountAnim *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b8625ae;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b8625ae:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b8626b0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b8626b0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<ADS_PlayerController> @ 14b8b05a0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<ADS_PlayerController>(void *this,ADS_PlayerController *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b8b063e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b8b063e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b8b0740;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b8b0740:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Broadcast @ 14b8b6ed0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Broadcast(void *this,EDS_KeyActionType *param_1,EDS_KeyActionType param_2,ETriggerEvent param_3,
           FInputActionValue *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  EDS_KeyActionType EVar7;
  uint uVar8;
  EDS_KeyActionType *pEVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)((longlong)this + 0x10) != *(int *)((longlong)this + 0x3c)) {
    lVar10 = *(longlong *)((longlong)this + 0x48);
    if (*(longlong *)((longlong)this + 0x48) == 0) {
      lVar10 = (longlong)this + 0x40;
    }
    EVar7 = *(EDS_KeyActionType *)
             (lVar10 + (ulonglong)(*(int *)((longlong)this + 0x50) + ~None & *param_1) * 4);
    if (EVar7 != ~None) {
      while (pEVar9 = (EDS_KeyActionType *)
                      ((longlong)(int)EVar7 * 0x50 + *(longlong *)((longlong)this + 8)),
            *pEVar9 != *param_1) {
        EVar7 = pEVar9[0x12];
        if (EVar7 == ~None) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(pEVar9 + 2);
      if (pEVar9 == (EDS_KeyActionType *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar4 = false;
          do {
            uVar8 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_2,param_3,param_4), cVar6 == '\0'
               )) {
              bVar4 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Remove<UDS_InputSystem> @ 14b9d54c0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_InputSystem>(void *this,UDS_InputSystem *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b9d555e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b9d555e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b9d5660;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b9d5660:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Broadcast @ 14b9e1b20

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::Broadcast
          (void *this,EDS_MountStep *param_1,FDS_MountStepInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  EDS_MountStep *pEVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)((longlong)this + 0x10) != *(int *)((longlong)this + 0x3c)) {
    lVar10 = *(longlong *)((longlong)this + 0x48);
    if (*(longlong *)((longlong)this + 0x48) == 0) {
      lVar10 = (longlong)this + 0x40;
    }
    uVar7 = *(int *)(lVar10 + ((ulonglong)(*(int *)((longlong)this + 0x50) - 1) &
                              (ulonglong)*param_1) * 4);
    if (uVar7 != 0xffffffff) {
      while (pEVar9 = (EDS_MountStep *)
                      ((longlong)(int)uVar7 * 0x50 + *(longlong *)((longlong)this + 8)),
            *pEVar9 != *param_1) {
        uVar7 = *(undefined4 *)(pEVar9 + 0x48);
        if (uVar7 == 0xffffffff) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(pEVar9 + 8);
      if (pEVar9 == (EDS_MountStep *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar4 = false;
          do {
            uVar8 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Remove<UDS_PlayerData> @ 14ba2fbe0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_StatusType_const_>::Remove<UDS_PlayerData>
          (void *this,UDS_PlayerData *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ba2fc7e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14ba2fc7e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ba2fd80;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14ba2fd80:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Broadcast @ 14ba36d00

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_SwimStep_const_,FDS_SwimStepInfo_const_&>::Broadcast
          (void *this,EDS_SwimStep *param_1,FDS_SwimStepInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  EDS_SwimStep *pEVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)((longlong)this + 0x10) != *(int *)((longlong)this + 0x3c)) {
    lVar10 = *(longlong *)((longlong)this + 0x48);
    if (*(longlong *)((longlong)this + 0x48) == 0) {
      lVar10 = (longlong)this + 0x40;
    }
    uVar7 = *(int *)(lVar10 + ((ulonglong)(*(int *)((longlong)this + 0x50) - 1) &
                              (ulonglong)*param_1) * 4);
    if (uVar7 != 0xffffffff) {
      while (pEVar9 = (EDS_SwimStep *)
                      ((longlong)(int)uVar7 * 0x50 + *(longlong *)((longlong)this + 8)),
            *pEVar9 != *param_1) {
        uVar7 = *(undefined4 *)(pEVar9 + 0x48);
        if (uVar7 == 0xffffffff) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(pEVar9 + 8);
      if (pEVar9 == (EDS_SwimStep *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar4 = false;
          do {
            uVar8 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Broadcast @ 14ba36e90

void __thiscall
FDS_FilteredEventDelegate<int,int>::Broadcast
          (FDS_FilteredEventDelegate<int,int> *this,int *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Subscriptions).field_0x38;
    }
    uVar11 = *(uint *)(puVar9 + (ulonglong)
                                (*(int *)&(this->Subscriptions).field_0x48 - 1U & *param_1) * 4);
    if (uVar11 != 0xffffffff) {
      while (puVar8 = (uint *)((longlong)(int)uVar11 * 0x50 + *(longlong *)&this->Subscriptions),
            *puVar8 != *param_1) {
        uVar11 = puVar8[0x12];
        if (uVar11 == 0xffffffff) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar8 + 2);
      if (puVar8 == (uint *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar4 = false;
          do {
            uVar7 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// ~FDS_FilteredEventDelegate<enum_EDS_EquipSlotType_const_,__int64_const_> @ 14ba923a0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_EquipSlotType_const_,__int64_const_>::
~FDS_FilteredEventDelegate<enum_EDS_EquipSlotType_const_,__int64_const_>(void *this)

{
  UDS_EventManager *this_00;
  
  *(undefined ***)this = &___7__FDS_FilteredEventDelegate___CBW4EDS_EquipSlotType____CB_J__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,this);
  }
  TSet<TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((void *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// Broadcast @ 14ba94f60

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_EquipSlotType_const_,__int64_const_>::Broadcast
          (void *this,EDS_EquipSlotType *param_1,long64 param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  EDS_EquipSlotType EVar7;
  uint uVar8;
  EDS_EquipSlotType *pEVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)((longlong)this + 0x10) != *(int *)((longlong)this + 0x3c)) {
    lVar10 = *(longlong *)((longlong)this + 0x48);
    if (*(longlong *)((longlong)this + 0x48) == 0) {
      lVar10 = (longlong)this + 0x40;
    }
    EVar7 = *(EDS_EquipSlotType *)
             (lVar10 + (ulonglong)(*(int *)((longlong)this + 0x50) + ~None & *param_1) * 4);
    if (EVar7 != ~None) {
      while (pEVar9 = (EDS_EquipSlotType *)
                      ((longlong)(int)EVar7 * 0x50 + *(longlong *)((longlong)this + 8)),
            *pEVar9 != *param_1) {
        EVar7 = pEVar9[0x12];
        if (EVar7 == ~None) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(pEVar9 + 2);
      if (pEVar9 == (EDS_EquipSlotType *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar4 = false;
          do {
            uVar8 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Broadcast @ 14ba950f0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_StatusType_const_>::Broadcast(void *this,EDS_StatusType *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  EDS_StatusType EVar7;
  uint uVar8;
  EDS_StatusType *pEVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)((longlong)this + 0x10) != *(int *)((longlong)this + 0x3c)) {
    lVar10 = *(longlong *)((longlong)this + 0x48);
    if (*(longlong *)((longlong)this + 0x48) == 0) {
      lVar10 = (longlong)this + 0x40;
    }
    EVar7 = *(EDS_StatusType *)
             (lVar10 + (ulonglong)(*(int *)((longlong)this + 0x50) - Hp & *param_1) * 4);
    if (EVar7 != ~None) {
      while (pEVar9 = (EDS_StatusType *)
                      ((longlong)(int)EVar7 * 0x50 + *(longlong *)((longlong)this + 8)),
            *pEVar9 != *param_1) {
        EVar7 = pEVar9[0x12];
        if (EVar7 == ~None) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(pEVar9 + 2);
      if (pEVar9 == (EDS_StatusType *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar4 = false;
          do {
            uVar8 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// CleanupSubscriptions @ 14ba97aa0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_EquipSlotType_const_,__int64_const_>::CleanupSubscriptions
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  WORD *pWVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  undefined1 local_res8 [8];
  longlong *local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  int local_68;
  undefined4 uStack_64;
  void *pvStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  void *pvStack_30;
  TSet<TTuple<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  TSet<TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_88,
             (TSet<TTuple<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8));
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_78;
  local_58 = local_88;
  auStack_50._0_8_ = lStack_80;
  local_38 = local_68;
  uStack_34 = uStack_64;
  pvStack_30 = pvStack_60;
  uVar6 = local_78._8_8_ >> 0x20;
  local_28 = (TSet<TTuple<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)((longlong)this + 8);
  if (local_78._12_4_ < *(int *)(local_78._0_8_ + 0x18)) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(*local_58 + 8 + (longlong)(int)uVar6 * 0x50);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      iVar5 = lpCriticalSection[1].LockCount;
      p_Var7 = lpCriticalSection[1].DebugInfo;
      pWVar3 = &p_Var7->Type;
      while( true ) {
        if (lpCriticalSection[1].LockCount != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar3 + (longlong)iVar5 * 8)) {
          LeaveCriticalSection(lpCriticalSection);
          TSet<TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pvStack_30,uStack_3c);
          local_20 = '\x01';
          goto LAB_14ba97bce;
        }
        if ((*(int *)&p_Var7->CriticalSection != 0) &&
           (lVar1._0_2_ = p_Var7->Type, lVar1._2_2_ = p_Var7->CreatorBackTraceIndex,
           lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4, lVar1 != 0)) break;
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->ProcessLocksList;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14ba97bce:
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// Broadcast @ 14baf5840

void __thiscall
FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>::Broadcast
          (FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&> *this,
          ulong64 *param_1,ulong64 *param_2)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong *puVar10;
  undefined1 *puVar11;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar12;
  uint uVar13;
  
  uVar1 = *param_1;
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar11 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->Subscriptions).field_0x38;
    }
    iVar8 = *(int *)(puVar11 +
                    ((ulonglong)(*(int *)&(this->Subscriptions).field_0x48 - 1) &
                    (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
    if (iVar8 != -1) {
      while (puVar10 = (ulonglong *)((longlong)iVar8 * 0x50 + *(longlong *)&this->Subscriptions),
            *puVar10 != uVar1) {
        iVar8 = (int)puVar10[9];
        if (iVar8 == -1) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar10 + 1);
      if (puVar10 == (ulonglong *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar5 = false;
        uVar13 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar13) {
          lVar12 = (longlong)(int)uVar13 << 4;
          bVar5 = false;
          do {
            uVar9 = 0;
            if ((int)uVar13 < (this_00->InvocationList).ArrayNum) {
              uVar9 = ~uVar13 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar2 + lVar12 + 8) == 0) ||
                (plVar3 = *(longlong **)(pFVar2 + lVar12), plVar3 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
              bVar5 = true;
            }
            lVar12 = lVar12 + -0x10;
            uVar13 = uVar13 - 1;
          } while (-1 < (int)uVar13);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar5) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Broadcast @ 14bb52150

void __thiscall
FDS_FilteredEventDelegate<__int64_const_>::Broadcast
          (FDS_FilteredEventDelegate<__int64_const_> *this,long64 *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  lVar10 = *param_1;
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Subscriptions).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(this->Subscriptions).field_0x48 - 1) &
                              (lVar10 >> 0x20) * 0x17 + lVar10) * 4);
    if (iVar6 != -1) {
      while (plVar8 = (longlong *)((longlong)iVar6 * 0x50 + *(longlong *)&this->Subscriptions),
            *plVar8 != lVar10) {
        iVar6 = (int)plVar8[9];
        if (iVar6 == -1) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(plVar8 + 1);
      if (plVar8 == (longlong *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar3 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar3 = false;
          do {
            uVar7 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar8 = *(longlong **)(pFVar1 + lVar10), plVar8 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar8 + 0x68))(), cVar5 == '\0')) {
              bVar3 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar3) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Remove<UDS_SyncRecvComponent> @ 14bba6d00

void __thiscall
FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>::
Remove<UDS_SyncRecvComponent>
          (FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&> *this,
          UDS_SyncRecvComponent *param_1,ulong64 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  undefined1 *puVar4;
  
  uVar1 = *param_2;
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Subscriptions).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                              (ulonglong)(*(int *)&(this->Subscriptions).field_0x48 - 1)) * 4);
    if (iVar2 != -1) {
      while (puVar3 = (ulonglong *)((longlong)iVar2 * 0x50 + *(longlong *)&this->Subscriptions),
            *puVar3 != uVar1) {
        iVar2 = (int)puVar3[9];
        if (iVar2 == -1) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar3 + 1);
      if (puVar3 == (ulonglong *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,param_1);
        return;
      }
    }
  }
  return;
}

// Broadcast @ 14bbed230

void __thiscall
FDS_FilteredEventDelegate<int_const_>::Broadcast
          (FDS_FilteredEventDelegate<int_const_> *this,int *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Subscriptions).field_0x38;
    }
    uVar11 = *(uint *)(puVar9 + (ulonglong)
                                (*(int *)&(this->Subscriptions).field_0x48 - 1U & *param_1) * 4);
    if (uVar11 != 0xffffffff) {
      while (puVar8 = (uint *)((longlong)(int)uVar11 * 0x50 + *(longlong *)&this->Subscriptions),
            *puVar8 != *param_1) {
        uVar11 = puVar8[0x12];
        if (uVar11 == 0xffffffff) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar8 + 2);
      if (puVar8 == (uint *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar4 = false;
          do {
            uVar7 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Broadcast @ 14bbed3b0

void __thiscall
FDS_FilteredEventDelegate<unsigned___int64_const_,enum_EDS_TamingState_const_>::Broadcast
          (void *this,ulong64 *param_1,EDS_TamingState param_2)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong *puVar10;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar11;
  uint uVar12;
  
  uVar1 = *param_1;
  if (*(int *)((longlong)this + 0x10) != *(int *)((longlong)this + 0x3c)) {
    lVar11 = *(longlong *)((longlong)this + 0x48);
    if (*(longlong *)((longlong)this + 0x48) == 0) {
      lVar11 = (longlong)this + 0x40;
    }
    iVar8 = *(int *)(lVar11 + ((ulonglong)(*(int *)((longlong)this + 0x50) - 1) &
                              (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
    if (iVar8 != -1) {
      while (puVar10 = (ulonglong *)((longlong)iVar8 * 0x50 + *(longlong *)((longlong)this + 8)),
            *puVar10 != uVar1) {
        iVar8 = (int)puVar10[9];
        if (iVar8 == -1) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar10 + 1);
      if (puVar10 == (ulonglong *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar5 = false;
        uVar12 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar12) {
          lVar11 = (longlong)(int)uVar12 << 4;
          bVar5 = false;
          do {
            uVar9 = 0;
            if ((int)uVar12 < (this_00->InvocationList).ArrayNum) {
              uVar9 = ~uVar12 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar2 + lVar11 + 8) == 0) ||
                (plVar3 = *(longlong **)(pFVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
              bVar5 = true;
            }
            lVar11 = lVar11 + -0x10;
            uVar12 = uVar12 - 1;
          } while (-1 < (int)uVar12);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar5) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Remove<ADS_NPCMount> @ 14bc7e320

void __thiscall
FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>::Remove<ADS_NPCMount>
          (FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&> *this,
          ADS_NPCMount *param_1,ulong64 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  undefined1 *puVar4;
  
  uVar1 = *param_2;
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Subscriptions).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                              (ulonglong)(*(int *)&(this->Subscriptions).field_0x48 - 1)) * 4);
    if (iVar2 != -1) {
      while (puVar3 = (ulonglong *)((longlong)iVar2 * 0x50 + *(longlong *)&this->Subscriptions),
            *puVar3 != uVar1) {
        iVar2 = (int)puVar3[9];
        if (iVar2 == -1) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar3 + 1);
      if (puVar3 == (ulonglong *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,param_1);
        return;
      }
    }
  }
  return;
}

// Broadcast @ 14bce9b90

void __thiscall
FDS_FilteredEventDelegate<int_const_,UE::Math::TVector2<double>_>::Broadcast
          (FDS_FilteredEventDelegate<int_const_,UE::Math::TVector2<double>_> *this,int *param_1,
          TVector2<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Subscriptions).field_0x38;
    }
    uVar11 = *(uint *)(puVar9 + (ulonglong)
                                (*(int *)&(this->Subscriptions).field_0x48 - 1U & *param_1) * 4);
    if (uVar11 != 0xffffffff) {
      while (puVar8 = (uint *)((longlong)(int)uVar11 * 0x50 + *(longlong *)&this->Subscriptions),
            *puVar8 != *param_1) {
        uVar11 = puVar8[0x12];
        if (uVar11 == 0xffffffff) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar8 + 2);
      if (puVar8 == (uint *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar4 = false;
          do {
            uVar7 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Remove<UDS_M_ItemImplNpcGiftBasketSlot> @ 14bd3ef60

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>::
Remove<UDS_M_ItemImplNpcGiftBasketSlot>(void *this,UDS_M_ItemImplNpcGiftBasketSlot *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3effe;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd3effe:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3f100;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd3f100:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_M_ItemImplNpcShopBuyBasketSlot> @ 14bd3f180

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>::
Remove<UDS_M_ItemImplNpcShopBuyBasketSlot>(void *this,UDS_M_ItemImplNpcShopBuyBasketSlot *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3f21e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd3f21e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3f320;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd3f320:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_M_ItemImplNpcShopSellBasketSlot> @ 14bd3f3a0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>::
Remove<UDS_M_ItemImplNpcShopSellBasketSlot>(void *this,UDS_M_ItemImplNpcShopSellBasketSlot *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3f43e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd3f43e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3f540;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd3f540:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat> @ 14bd3f5c0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_VM_Chat>(void *this,UDS_VM_Chat *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3f65e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd3f65e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3f760;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd3f760:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat_ChatRoomInfo> @ 14bd3f7e0

void __thiscall
FDS_FilteredEventDelegate<__int64_const_>::Remove<UDS_VM_Chat_ChatRoomInfo>
          (FDS_FilteredEventDelegate<__int64_const_> *this,UDS_VM_Chat_ChatRoomInfo *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3f87e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd3f87e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3f980;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd3f980:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat_Command> @ 14bd3fa00

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_VM_Chat_Command>(void *this,UDS_VM_Chat_Command *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3fa9e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd3fa9e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3fba0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd3fba0:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat_EmotePopup> @ 14bd3fc20

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_VM_Chat_EmotePopup>(void *this,UDS_VM_Chat_EmotePopup *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3fcbe;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd3fcbe:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3fdc0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd3fdc0:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat_EmotePopup> @ 14bd3fe40

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_ViewModelTemplateKey_const_,int_const_,int_const_>::
Remove<UDS_VM_Chat_EmotePopup>(void *this,UDS_VM_Chat_EmotePopup *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3fede;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd3fede:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd3ffe0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd3ffe0:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat_GroupInvite> @ 14bd40060

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
Remove<UDS_VM_Chat_GroupInvite>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>
           *this,UDS_VM_Chat_GroupInvite *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd400fe;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd400fe:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd40200;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd40200:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat_GroupSetting> @ 14bd40280

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_ViewModelTemplateKey_const_,int_const_,int_const_>::
Remove<UDS_VM_Chat_GroupSetting>(void *this,UDS_VM_Chat_GroupSetting *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd4031e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd4031e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd40420;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd40420:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat_Input> @ 14bd404a0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_VM_Chat_Input>(void *this,UDS_VM_Chat_Input *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd4053e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd4053e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd40640;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd40640:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat_Macro> @ 14bd406c0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_VM_Chat_Macro>(void *this,UDS_VM_Chat_Macro *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd4075e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd4075e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd40860;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd40860:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat_MessageSlot> @ 14bda68c0

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_>::
Remove<UDS_VM_Chat_MessageSlot>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_> *this,
          UDS_VM_Chat_MessageSlot *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda695e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bda695e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda6a60;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bda6a60:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat_MessageSlot> @ 14bda6ae0

void __thiscall
FDS_FilteredEventDelegate<__int64_const_>::Remove<UDS_VM_Chat_MessageSlot>
          (FDS_FilteredEventDelegate<__int64_const_> *this,UDS_VM_Chat_MessageSlot *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda6b7e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bda6b7e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda6c80;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bda6c80:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat_SubTabs> @ 14bda6d00

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_VM_Chat_SubTabs>(void *this,UDS_VM_Chat_SubTabs *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda6d9e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bda6d9e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda6ea0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bda6ea0:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat_Tabs> @ 14bda6f20

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_VM_Chat_Tabs>(void *this,UDS_VM_Chat_Tabs *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda6fbe;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bda6fbe:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda70c0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bda70c0:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Chat_Viewer> @ 14bda7140

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_VM_Chat_Viewer>(void *this,UDS_VM_Chat_Viewer *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda71de;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bda71de:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda72e0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bda72e0:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Common_IconSlot> @ 14bda7360

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_ViewModelTemplateKey_const_,int_const_,int_const_>::
Remove<UDS_VM_Common_IconSlot>(void *this,UDS_VM_Common_IconSlot *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda73fe;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bda73fe:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda7500;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bda7500:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Common_Tab> @ 14bda7580

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
Remove<UDS_VM_Common_Tab>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>
           *this,UDS_VM_Common_Tab *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda761e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bda761e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda7720;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bda7720:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Common_Tab> @ 14bda77a0

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,bool_const_>::
Remove<UDS_VM_Common_Tab>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,bool_const_>
           *this,UDS_VM_Common_Tab *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda783e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bda783e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda7940;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bda7940:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Common_Tab> @ 14bda79c0

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,FDS_Text_const_&>::
Remove<UDS_VM_Common_Tab>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,FDS_Text_const_&>
           *this,UDS_VM_Common_Tab *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda7a5e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bda7a5e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda7b60;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bda7b60:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Common_TabGroup> @ 14bda7be0

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_>::
Remove<UDS_VM_Common_TabGroup>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_> *this,
          UDS_VM_Common_TabGroup *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda7c7e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bda7c7e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda7d80;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bda7d80:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_EquipItemSlot> @ 14bda7e00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_EquipSlotType_const_,__int64_const_>::
Remove<UDS_VM_EquipItemSlot>(void *this,UDS_VM_EquipItemSlot *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda7e9e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bda7e9e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bda7fa0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bda7fa0:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Broadcast @ 14bdb22a0

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,enum_EDS_TabErrorType_const_,int_const_,int_const_>
::Broadcast(void *this,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_1,EDS_TabErrorType param_2,
           int param_3,int param_4)

{
  FWeakObjectPtr FVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  uint uVar10;
  longlong lVar11;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  FVar1 = param_1->WeakPtr;
  if (*(int *)((longlong)this + 0x10) != *(int *)((longlong)this + 0x3c)) {
    lVar11 = *(longlong *)((longlong)this + 0x48);
    if (*(longlong *)((longlong)this + 0x48) == 0) {
      lVar11 = (longlong)this + 0x40;
    }
    iVar8 = *(int *)(lVar11 + (((ulonglong)FVar1 >> 0x20 ^ (ulonglong)FVar1 & 0xffffffff) &
                              (ulonglong)(*(int *)((longlong)this + 0x50) - 1)) * 4);
    if (iVar8 != -1) {
      while( true ) {
        lVar11 = (longlong)iVar8 * 0x50;
        local_res10 = *(FWeakObjectPtr *)(lVar11 + *(longlong *)((longlong)this + 8));
        local_res8 = FVar1;
        bVar5 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                          ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res10,
                           (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res8);
        if (bVar5) break;
        iVar8 = *(int *)(*(longlong *)((longlong)this + 8) + 0x48 + lVar11);
        if (iVar8 == -1) {
          return;
        }
      }
      lVar11 = *(longlong *)((longlong)this + 8) + lVar11;
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(lVar11 + 8);
      if (lVar11 == 0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar5 = false;
        uVar10 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar10) {
          lVar11 = (longlong)(int)uVar10 << 4;
          bVar5 = false;
          do {
            uVar9 = 0;
            if ((int)uVar10 < (this_00->InvocationList).ArrayNum) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar2 + lVar11 + 8) == 0) ||
                (plVar3 = *(longlong **)(pFVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_2,param_3,param_4), cVar7 == '\0'
               )) {
              bVar5 = true;
            }
            lVar11 = lVar11 + -0x10;
            uVar10 = uVar10 - 1;
          } while (-1 < (int)uVar10);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar5) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Remove<UDS_VM_InteractionGroup> @ 14be0a5c0

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_VM_InteractionGroup>(void *this,UDS_VM_InteractionGroup *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be0a65e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14be0a65e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be0a760;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14be0a760:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_ItemBasket> @ 14be0a7e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>::Remove<UDS_VM_ItemBasket>
          (void *this,UDS_VM_ItemBasket *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be0a87e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14be0a87e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be0a980;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14be0a980:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_Warehouse> @ 14be0aa00

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
Remove<UDS_VM_Warehouse>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>
           *this,UDS_VM_Warehouse *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be0aa9e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14be0aa9e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be0aba0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14be0aba0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_GuildCreate> @ 14be6e670

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_>::
Remove<UDS_VM_GuildCreate>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_> *this,
          UDS_VM_GuildCreate *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be6e70e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14be6e70e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be6e810;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14be6e810:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_GuildSetting> @ 14be6e890

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_>::
Remove<UDS_VM_GuildSetting>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_> *this,
          UDS_VM_GuildSetting *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be6e92e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14be6e92e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be6ea30;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14be6ea30:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_ItemCraft> @ 14be6eab0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
Remove<UDS_VM_ItemCraft>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>
           *this,UDS_VM_ItemCraft *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be6eb4e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14be6eb4e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be6ec50;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14be6ec50:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_ItemRepair> @ 14be6ecd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
Remove<UDS_VM_ItemRepair>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>
           *this,UDS_VM_ItemRepair *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be6ed6e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14be6ed6e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14be6ee70;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14be6ee70:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_HUD_MyPartyGroup> @ 14bed1d50

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_VM_HUD_MyPartyGroup>(void *this,UDS_VM_HUD_MyPartyGroup *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bed1dee;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bed1dee:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bed1ef0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bed1ef0:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_MountSlot> @ 14bed1f70

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_VM_MountSlot>(void *this,UDS_VM_MountSlot *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bed200e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bed200e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bed2110;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bed2110:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_MountSlot> @ 14bed2190

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::
Remove<UDS_VM_MountSlot>(void *this,UDS_VM_MountSlot *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bed222e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bed222e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bed2330;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bed2330:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_PartyInvitation> @ 14bed23b0

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
Remove<UDS_VM_PartyInvitation>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>
           *this,UDS_VM_PartyInvitation *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bed244e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bed244e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bed2550;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bed2550:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Broadcast @ 14bed9c20

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>::Broadcast
          (void *this,EDS_ItemBasketType *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  EDS_ItemBasketType EVar7;
  uint uVar8;
  EDS_ItemBasketType *pEVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)((longlong)this + 0x10) != *(int *)((longlong)this + 0x3c)) {
    lVar10 = *(longlong *)((longlong)this + 0x48);
    if (*(longlong *)((longlong)this + 0x48) == 0) {
      lVar10 = (longlong)this + 0x40;
    }
    EVar7 = *(EDS_ItemBasketType *)
             (lVar10 + (ulonglong)(*(int *)((longlong)this + 0x50) - BuyBasket & *param_1) * 4);
    if (EVar7 != ~None) {
      while (pEVar9 = (EDS_ItemBasketType *)
                      ((longlong)(int)EVar7 * 0x50 + *(longlong *)((longlong)this + 8)),
            *pEVar9 != *param_1) {
        EVar7 = pEVar9[0x12];
        if (EVar7 == ~None) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(pEVar9 + 2);
      if (pEVar9 == (EDS_ItemBasketType *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar4 = false;
          do {
            uVar8 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Remove<UDS_VM_QuestLocal> @ 14bf3a430

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
Remove<UDS_VM_QuestLocal>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>
           *this,UDS_VM_QuestLocal *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bf3a4ce;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bf3a4ce:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bf3a5d0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bf3a5d0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_QuestRepeat> @ 14bf3a650

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
Remove<UDS_VM_QuestRepeat>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>
           *this,UDS_VM_QuestRepeat *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bf3a6ee;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bf3a6ee:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bf3a7f0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bf3a7f0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_SwimSlot> @ 14bf3a870

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_VM_SwimSlot>(void *this,UDS_VM_SwimSlot *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bf3a90e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bf3a90e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bf3aa10;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bf3aa10:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_SwimSlot> @ 14bf3aa90

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_SwimStep_const_,FDS_SwimStepInfo_const_&>::
Remove<UDS_VM_SwimSlot>(void *this,UDS_VM_SwimSlot *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bf3ab2e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bf3ab2e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bf3ac30;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bf3ac30:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Broadcast @ 14bf43940

void __thiscall
FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::Broadcast(FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
            *this,int *param_1,float param_2,TVector2<double> *param_3,TVector2<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar14;
  uint uVar15;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar13 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->Subscriptions).field_0x38;
    }
    uVar15 = *(uint *)(puVar13 +
                      (ulonglong)(*(int *)&(this->Subscriptions).field_0x48 - 1U & *param_1) * 4);
    if (uVar15 != 0xffffffff) {
      while (puVar12 = (uint *)((longlong)(int)uVar15 * 0x50 + *(longlong *)&this->Subscriptions),
            *puVar12 != *param_1) {
        uVar15 = puVar12[0x12];
        if (uVar15 == 0xffffffff) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar12 + 2);
      if (puVar12 == (uint *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        dVar4 = (param_4->field0_0x0)._s_0.X;
        dVar5 = (param_4->field0_0x0)._s_0.Y;
        dVar6 = (param_3->field0_0x0)._s_0.X;
        dVar7 = (param_3->field0_0x0)._s_0.Y;
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar8 = false;
        uVar15 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar15) {
          lVar14 = (longlong)(int)uVar15 << 4;
          bVar8 = false;
          do {
            uVar11 = 0;
            if ((int)uVar15 < (this_00->InvocationList).ArrayNum) {
              uVar11 = ~uVar15 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar14 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar14), plVar2 == (longlong *)0x0)) ||
               (local_68 = dVar4, dStack_60 = dVar5, local_58 = dVar6, dStack_50 = dVar7,
               cVar10 = (**(code **)(*plVar2 + 0x68))(plVar2,param_2,&local_58,&local_68),
               cVar10 == '\0')) {
              bVar8 = true;
            }
            lVar14 = lVar14 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar8) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Broadcast @ 14bf43b40

void __thiscall
FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::Broadcast
          (FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_> *this,
          int *param_1,bool param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Subscriptions).field_0x38;
    }
    uVar11 = *(uint *)(puVar9 + (ulonglong)
                                (*(int *)&(this->Subscriptions).field_0x48 - 1U & *param_1) * 4);
    if (uVar11 != 0xffffffff) {
      while (puVar8 = (uint *)((longlong)(int)uVar11 * 0x50 + *(longlong *)&this->Subscriptions),
            *puVar8 != *param_1) {
        uVar11 = puVar8[0x12];
        if (uVar11 == 0xffffffff) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar8 + 2);
      if (puVar8 == (uint *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar4 = false;
          do {
            uVar7 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_2,param_3,param_4), cVar6 == '\0'
               )) {
              bVar4 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Broadcast @ 14bf43cf0

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,float_const_>::Broadcast
          (FDS_FilteredEventDelegate<__int64_const_,float_const_> *this,long64 *param_1,
          float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  lVar10 = *param_1;
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Subscriptions).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(this->Subscriptions).field_0x48 - 1) &
                              (lVar10 >> 0x20) * 0x17 + lVar10) * 4);
    if (iVar6 != -1) {
      while (plVar8 = (longlong *)((longlong)iVar6 * 0x50 + *(longlong *)&this->Subscriptions),
            *plVar8 != lVar10) {
        iVar6 = (int)plVar8[9];
        if (iVar6 == -1) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(plVar8 + 1);
      if (plVar8 == (longlong *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar3 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar3 = false;
          do {
            uVar7 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar8 = *(longlong **)(pFVar1 + lVar10), plVar8 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar8 + 0x68))(plVar8,param_2), cVar5 == '\0')) {
              bVar3 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar3) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Remove<UDS_VM_RingCmdQuickSlot> @ 14bf95510

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_FilteredEventDelegate<int_const_>::Remove<UDS_VM_RingCmdQuickSlot>
          (FDS_FilteredEventDelegate<int_const_> *this,UDS_VM_RingCmdQuickSlot *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bf955ae;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bf955ae:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bf956b0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bf956b0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_MapSpawn> @ 14bffbaf0

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,float_const_>::Remove<UDS_VM_MapSpawn>
          (FDS_FilteredEventDelegate<__int64_const_,float_const_> *this,UDS_VM_MapSpawn *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffbb8e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bffbb8e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffbc90;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bffbc90:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_MapTexture> @ 14bffbd10

void __thiscall
FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::Remove<UDS_VM_MapTexture>
          (FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
           *this,UDS_VM_MapTexture *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffbdae;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bffbdae:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffbeb0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bffbeb0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_MapTexture> @ 14bffbf30

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,float_const_>::Remove<UDS_VM_MapTexture>
          (FDS_FilteredEventDelegate<__int64_const_,float_const_> *this,UDS_VM_MapTexture *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffbfce;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bffbfce:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffc0d0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bffc0d0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_W_RingCmd> @ 14bffc150

void __thiscall
FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
::Remove<UDS_VM_W_RingCmd>(void *this,UDS_VM_W_RingCmd *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffc1ee;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bffc1ee:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffc2f0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bffc2f0:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_WorldMap> @ 14bffc370

void __thiscall
FDS_FilteredEventDelegate<int_const_,int_const_>::Remove<UDS_VM_WorldMap>
          (FDS_FilteredEventDelegate<int_const_,int_const_> *this,UDS_VM_WorldMap *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffc40e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bffc40e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffc510;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bffc510:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_WorldMapIndexBase> @ 14bffc590

void __thiscall
FDS_FilteredEventDelegate<int_const_,int>::Remove<UDS_VM_WorldMapIndexBase>
          (FDS_FilteredEventDelegate<int_const_,int> *this,UDS_VM_WorldMapIndexBase *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffc62e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bffc62e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffc730;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bffc730:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_WorldMapIndexBase> @ 14bffc7b0

void __thiscall
FDS_FilteredEventDelegate<int_const_,enum_EDS_WorldMapZoomStep>::Remove<UDS_VM_WorldMapIndexBase>
          (void *this,UDS_VM_WorldMapIndexBase *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffc84e;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bffc84e:
  uVar10 = *(uint *)((longlong)this + 0x30);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x30);
  if (uVar10 != uVar6) {
    pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffc950;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bffc950:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)((longlong)this + 8) + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_WorldMapIndexBase> @ 14bffc9d0

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::Remove<UDS_VM_WorldMapIndexBase>
          (FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
           *this,UDS_VM_WorldMapIndexBase *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffca6e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bffca6e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffcb70;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bffcb70:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_WorldMap_DetectionIcon> @ 14bffcbf0

void __thiscall
FDS_FilteredEventDelegate<__int64_const_>::Remove<UDS_VM_WorldMap_DetectionIcon>
          (FDS_FilteredEventDelegate<__int64_const_> *this,UDS_VM_WorldMap_DetectionIcon *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffcc8e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bffcc8e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffcd90;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bffcd90:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_WorldMap_Icon> @ 14bffce10

void __thiscall
FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::Remove<UDS_VM_WorldMap_Icon>
          (FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
           *this,UDS_VM_WorldMap_Icon *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffceae;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bffceae:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffcfb0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bffcfb0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_WorldMap_Icon> @ 14bffd030

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::Remove<UDS_VM_WorldMap_Icon>
          (FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
           *this,UDS_VM_WorldMap_Icon *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffd0ce;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bffd0ce:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffd1d0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bffd1d0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_WorldMap_IconAndText> @ 14bffd250

void __thiscall
FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::Remove<UDS_VM_WorldMap_IconAndText>
          (FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
           *this,UDS_VM_WorldMap_IconAndText *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffd2ee;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bffd2ee:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bffd3f0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bffd3f0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Broadcast @ 14c0052b0

void __thiscall
FDS_FilteredEventDelegate<int_const_,int_const_>::Broadcast
          (FDS_FilteredEventDelegate<int_const_,int_const_> *this,int *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Subscriptions).field_0x38;
    }
    uVar11 = *(uint *)(puVar9 + (ulonglong)
                                (*(int *)&(this->Subscriptions).field_0x48 - 1U & *param_1) * 4);
    if (uVar11 != 0xffffffff) {
      while (puVar8 = (uint *)((longlong)(int)uVar11 * 0x50 + *(longlong *)&this->Subscriptions),
            *puVar8 != *param_1) {
        uVar11 = puVar8[0x12];
        if (uVar11 == 0xffffffff) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar8 + 2);
      if (puVar8 == (uint *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar4 = false;
          do {
            uVar7 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Broadcast @ 14c005440

void __thiscall
FDS_FilteredEventDelegate<int_const_,enum_EDS_WorldMapZoomStep>::Broadcast
          (void *this,int *param_1,EDS_WorldMapZoomStep param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar9;
  uint uVar10;
  
  if (*(int *)((longlong)this + 0x10) != *(int *)((longlong)this + 0x3c)) {
    lVar9 = *(longlong *)((longlong)this + 0x48);
    if (*(longlong *)((longlong)this + 0x48) == 0) {
      lVar9 = (longlong)this + 0x40;
    }
    uVar10 = *(uint *)(lVar9 + (ulonglong)(*(int *)((longlong)this + 0x50) - 1U & *param_1) * 4);
    if (uVar10 != 0xffffffff) {
      while (puVar8 = (uint *)((longlong)(int)uVar10 * 0x50 + *(longlong *)((longlong)this + 8)),
            *puVar8 != *param_1) {
        uVar10 = puVar8[0x12];
        if (uVar10 == 0xffffffff) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar8 + 2);
      if (puVar8 == (uint *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar10 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar10) {
          lVar9 = (longlong)(int)uVar10 << 4;
          bVar4 = false;
          do {
            uVar7 = 0;
            if ((int)uVar10 < (this_00->InvocationList).ArrayNum) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar9 = lVar9 + -0x10;
            uVar10 = uVar10 - 1;
          } while (-1 < (int)uVar10);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Broadcast @ 14c0055d0

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>::Broadcast
          (FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>
           *this,long64 *param_1,float param_2,TVector2<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar12;
  uint uVar13;
  double local_48;
  double dStack_40;
  
  lVar12 = *param_1;
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar11 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->Subscriptions).field_0x38;
    }
    iVar8 = *(int *)(puVar11 +
                    ((ulonglong)(*(int *)&(this->Subscriptions).field_0x48 - 1) &
                    (lVar12 >> 0x20) * 0x17 + lVar12) * 4);
    if (iVar8 != -1) {
      while (plVar10 = (longlong *)((longlong)iVar8 * 0x50 + *(longlong *)&this->Subscriptions),
            *plVar10 != lVar12) {
        iVar8 = (int)plVar10[9];
        if (iVar8 == -1) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(plVar10 + 1);
      if (plVar10 == (longlong *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        dVar3 = (param_3->field0_0x0)._s_0.X;
        dVar4 = (param_3->field0_0x0)._s_0.Y;
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar5 = false;
        uVar13 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar13) {
          lVar12 = (longlong)(int)uVar13 << 4;
          bVar5 = false;
          do {
            uVar9 = 0;
            if ((int)uVar13 < (this_00->InvocationList).ArrayNum) {
              uVar9 = ~uVar13 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar12 + 8) == 0) ||
                (plVar10 = *(longlong **)(pFVar1 + lVar12), plVar10 == (longlong *)0x0)) ||
               (local_48 = dVar3, dStack_40 = dVar4,
               cVar7 = (**(code **)(*plVar10 + 0x68))(plVar10,param_2,&local_48), cVar7 == '\0')) {
              bVar5 = true;
            }
            lVar12 = lVar12 + -0x10;
            uVar13 = uVar13 - 1;
          } while (-1 < (int)uVar13);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar5) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Remove<UDS_VM_WorldMap_MapIndexFilter> @ 14c065700

void __thiscall
FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
Remove<UDS_VM_WorldMap_MapIndexFilter>
          (FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>
           *this,UDS_VM_WorldMap_MapIndexFilter *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c06579e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14c06579e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c0658a0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14c0658a0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_WorldMap_Marker> @ 14c065920

void __thiscall
FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::Remove<UDS_VM_WorldMap_Marker>
          (FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
           *this,UDS_VM_WorldMap_Marker *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c0659be;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14c0659be:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c065ac0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14c065ac0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_WorldMap_Marker> @ 14c065b40

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,FString>::Remove<UDS_VM_WorldMap_Marker>
          (FDS_FilteredEventDelegate<__int64_const_,FString> *this,UDS_VM_WorldMap_Marker *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c065bde;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14c065bde:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c065ce0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14c065ce0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_WorldMap_PlayerIcon> @ 14c065d60

void __thiscall
FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::Remove<UDS_VM_WorldMap_PlayerIcon>
          (FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
           *this,UDS_VM_WorldMap_PlayerIcon *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c065dfe;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14c065dfe:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c065f00;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14c065f00:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_WorldMap_RangeOverIcon> @ 14c065f80

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>::
Remove<UDS_VM_WorldMap_RangeOverIcon>
          (FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>
           *this,UDS_VM_WorldMap_RangeOverIcon *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c06601e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14c06601e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c066120;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14c066120:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_VM_WorldMap_RangeOverIcon> @ 14c0661a0

void __thiscall
FDS_FilteredEventDelegate<__int64_const_>::Remove<UDS_VM_WorldMap_RangeOverIcon>
          (FDS_FilteredEventDelegate<__int64_const_> *this,UDS_VM_WorldMap_RangeOverIcon *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c06623e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14c06623e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c066340;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14c066340:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_W_MapSpawnUnscaled> @ 14c0663c0

void __thiscall
FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::Remove<UDS_W_MapSpawnUnscaled>
          (FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
           *this,UDS_W_MapSpawnUnscaled *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c06645e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14c06645e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c066560;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14c066560:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_W_MapSpawnUnscaled> @ 14c0665e0

void __thiscall
FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::
Remove<UDS_W_MapSpawnUnscaled>
          (FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_> *this,
          UDS_W_MapSpawnUnscaled *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c06667e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14c06667e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c066780;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14c066780:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_W_MapSpawnUnscaled> @ 14c066800

void __thiscall
FDS_FilteredEventDelegate<int_const_>::Remove<UDS_W_MapSpawnUnscaled>
          (FDS_FilteredEventDelegate<int_const_> *this,UDS_W_MapSpawnUnscaled *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c06689e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14c06689e:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c0669a0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14c0669a0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_W_MapSpawnUnscaled> @ 14c066a20

void __thiscall
FDS_FilteredEventDelegate<int_const_,UE::Math::TVector2<double>_>::Remove<UDS_W_MapSpawnUnscaled>
          (FDS_FilteredEventDelegate<int_const_,UE::Math::TVector2<double>_> *this,
          UDS_W_MapSpawnUnscaled *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c066abe;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14c066abe:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c066bc0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14c066bc0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_W_MapTexture> @ 14c066c40

void __thiscall
FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::Remove<UDS_W_MapTexture>
          (FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_> *this,
          UDS_W_MapTexture *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c066cde;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14c066cde:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c066de0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14c066de0:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove<UDS_W_MapTexture> @ 14c066e60

void __thiscall
FDS_FilteredEventDelegate<int_const_>::Remove<UDS_W_MapTexture>
          (FDS_FilteredEventDelegate<int_const_> *this,UDS_W_MapTexture *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Subscriptions).field_0x28;
  puVar1 = &(this->Subscriptions).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Subscriptions).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c066efe;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14c066efe:
  uVar10 = *(uint *)&(this->Subscriptions).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Subscriptions).field_0x8 -
                       *(int *)&(this->Subscriptions).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Subscriptions).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c067000;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14c067000:
  while( true ) {
    if (*(int *)&(this->Subscriptions).field_0x8 - *(int *)&(this->Subscriptions).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&this->Subscriptions + 8),
               param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Broadcast @ 14c06dc30

void __thiscall
FDS_FilteredEventDelegate<int_const_,int>::Broadcast
          (FDS_FilteredEventDelegate<int_const_,int> *this,int *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Subscriptions).field_0x38;
    }
    uVar11 = *(uint *)(puVar9 + (ulonglong)
                                (*(int *)&(this->Subscriptions).field_0x48 - 1U & *param_1) * 4);
    if (uVar11 != 0xffffffff) {
      while (puVar8 = (uint *)((longlong)(int)uVar11 * 0x50 + *(longlong *)&this->Subscriptions),
            *puVar8 != *param_1) {
        uVar11 = puVar8[0x12];
        if (uVar11 == 0xffffffff) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar8 + 2);
      if (puVar8 == (uint *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar10 = (longlong)(int)uVar11 << 4;
          bVar4 = false;
          do {
            uVar7 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Broadcast @ 14c06ddc0

void __thiscall
FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
::Broadcast(FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
            *this,long64 *param_1,TVector2<double> *param_2,TVector2<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar14;
  uint uVar15;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  
  lVar14 = *param_1;
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar13 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->Subscriptions).field_0x38;
    }
    iVar10 = *(int *)(puVar13 +
                     ((ulonglong)(*(int *)&(this->Subscriptions).field_0x48 - 1) &
                     (lVar14 >> 0x20) * 0x17 + lVar14) * 4);
    if (iVar10 != -1) {
      while (plVar12 = (longlong *)((longlong)iVar10 * 0x50 + *(longlong *)&this->Subscriptions),
            *plVar12 != lVar14) {
        iVar10 = (int)plVar12[9];
        if (iVar10 == -1) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(plVar12 + 1);
      if (plVar12 == (longlong *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        dVar3 = (param_3->field0_0x0)._s_0.X;
        dVar4 = (param_3->field0_0x0)._s_0.Y;
        dVar5 = (param_2->field0_0x0)._s_0.X;
        dVar6 = (param_2->field0_0x0)._s_0.Y;
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar7 = false;
        uVar15 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar15) {
          lVar14 = (longlong)(int)uVar15 << 4;
          bVar7 = false;
          do {
            uVar11 = 0;
            if ((int)uVar15 < (this_00->InvocationList).ArrayNum) {
              uVar11 = ~uVar15 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar14 + 8) == 0) ||
                (plVar12 = *(longlong **)(pFVar1 + lVar14), plVar12 == (longlong *)0x0)) ||
               (local_58 = dVar3, dStack_50 = dVar4, local_48 = dVar5, dStack_40 = dVar6,
               cVar9 = (**(code **)(*plVar12 + 0x68))(plVar12,&local_48,&local_58), cVar9 == '\0'))
            {
              bVar7 = true;
            }
            lVar14 = lVar14 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar7) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

// Broadcast @ 14c06dfa0

void __thiscall
FDS_FilteredEventDelegate<UObject_*,UObject_*>::Broadcast
          (FDS_FilteredEventDelegate<UObject_*,UObject_*> *this,UObject **param_1,UObject *param_2)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar13;
  
  pUVar1 = *param_1;
  uVar11 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if (*(int *)&(this->Subscriptions).field_0x8 != *(int *)&(this->Subscriptions).field_0x34) {
    puVar12 = *(undefined1 **)&(this->Subscriptions).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->Subscriptions).field_0x38;
    }
    iVar8 = *(int *)(puVar12 +
                    (ulonglong)
                    (*(int *)&(this->Subscriptions).field_0x48 - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4
                    );
    if (iVar8 != -1) {
      while (puVar10 = (ulonglong *)((longlong)iVar8 * 0x50 + *(longlong *)&this->Subscriptions),
            (UObject *)*puVar10 != pUVar1) {
        iVar8 = (int)puVar10[9];
        if (iVar8 == -1) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar10 + 1);
      if (puVar10 == (ulonglong *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar5 = false;
        uVar11 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar11) {
          lVar13 = (longlong)(int)uVar11 << 4;
          bVar5 = false;
          do {
            uVar9 = 0;
            if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
              uVar9 = ~uVar11 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar2 + lVar13 + 8) == 0) ||
                (plVar3 = *(longlong **)(pFVar2 + lVar13), plVar3 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
              bVar5 = true;
            }
            lVar13 = lVar13 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar5) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
  }
  return;
}

