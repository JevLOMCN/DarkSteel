// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FEncryptionKeyManager @ 1418bb0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FEncryptionKeyManager * __thiscall
UE::FEncryptionKeyManager::FEncryptionKeyManager(FEncryptionKeyManager *this)

{
  bool bVar1;
  TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy> *pTVar2;
  longlong *plVar3;
  TMulticastDelegate<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy> *local_40;
  bool local_38;
  FAESKey local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  (this->Mutex).State = (atomic<unsigned_char>)0x0;
  plVar3 = (longlong *)0x0;
  *(undefined8 *)&this->Keys = 0;
  *(undefined8 *)&(this->Keys).field_0x8 = 0;
  *(undefined8 *)&(this->Keys).field_0x20 = 0;
  *(undefined4 *)&(this->Keys).field_0x28 = 0;
  *(undefined4 *)&(this->Keys).field_0x2c = 0x80;
  *(undefined4 *)&(this->Keys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Keys).field_0x34 = 0;
  *(undefined8 *)&(this->Keys).field_0x40 = 0;
  *(undefined4 *)&(this->Keys).field_0x48 = 0;
  *(undefined8 *)&this->KeyAdded = 0;
  *(undefined8 *)&(this->KeyAdded).field_0x8 = 0;
  *(undefined8 *)&(this->KeyAdded).field_0x10 = 0;
  *(undefined8 *)&(this->KeyAdded).field_0x18 = 2;
  pTVar2 = FCoreDelegates::GetPakEncryptionKeyDelegate();
  bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
  if (bVar1) {
    local_30.Key[0] = '\0';
    local_30.Key[1] = '\0';
    local_30.Key[2] = '\0';
    local_30.Key[3] = '\0';
    local_30.Key[4] = '\0';
    local_30.Key[5] = '\0';
    local_30.Key[6] = '\0';
    local_30.Key[7] = '\0';
    local_30.Key[8] = '\0';
    local_30.Key[9] = '\0';
    local_30.Key[10] = '\0';
    local_30.Key[0xb] = '\0';
    local_30.Key[0xc] = '\0';
    local_30.Key[0xd] = '\0';
    local_30.Key[0xe] = '\0';
    local_30.Key[0xf] = '\0';
    local_30.Key[0x10] = '\0';
    local_30.Key[0x11] = '\0';
    local_30.Key[0x12] = '\0';
    local_30.Key[0x13] = '\0';
    local_30.Key[0x14] = '\0';
    local_30.Key[0x15] = '\0';
    local_30.Key[0x16] = '\0';
    local_30.Key[0x17] = '\0';
    local_30.Key[0x18] = '\0';
    local_30.Key[0x19] = '\0';
    local_30.Key[0x1a] = '\0';
    local_30.Key[0x1b] = '\0';
    local_30.Key[0x1c] = '\0';
    local_30.Key[0x1d] = '\0';
    local_30.Key[0x1e] = '\0';
    local_30.Key[0x1f] = '\0';
    pTVar2 = FCoreDelegates::GetPakEncryptionKeyDelegate();
    local_48 = (undefined1  [8])((ulonglong)local_48 & 0xffffffff00000000);
    local_38 = false;
    local_40 = pTVar2;
    FMRSWRecursiveAccessDetector::AcquireReadAccess
              ((FMRSWRecursiveAccessDetector *)pTVar2,(FDestructionSentinel *)local_48);
    plVar4 = plVar3;
    if (*(int *)&pTVar2->field_0x10 != 0) {
      plVar4 = *(longlong **)&pTVar2->field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_30);
    if (local_38 == false) {
      FMRSWRecursiveAccessDetector::ReleaseReadAccess
                ((FMRSWRecursiveAccessDetector *)local_40,(FDestructionSentinel *)local_48);
    }
    do {
      if (*(int *)(local_30.Key + (longlong)plVar3 * 4) != 0) {
        local_48 = (undefined1  [8])0x0;
        local_40 = (TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy> *)0x0;
        AddKey(this,(FGuid *)local_48,&local_30);
        break;
      }
      plVar3 = (longlong *)((longlong)plVar3 + 1);
    } while ((longlong)plVar3 < 8);
  }
  this_00 = FCoreDelegates::GetRegisterEncryptionKeyMulticastDelegate();
  TMulticastDelegateRegistration<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<UE::FEncryptionKeyManager>
            ((TMulticastDelegateRegistration<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
              *)this_00,(FEncryptionKeyManager *)local_48,(pmf_b5398f4c)this);
  return this;
}

// ~FEncryptionKeyManager @ 1418bea90

void __thiscall UE::FEncryptionKeyManager::~FEncryptionKeyManager(FEncryptionKeyManager *this)

{
  void *pvVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreDelegates::GetRegisterEncryptionKeyMulticastDelegate();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->KeyAdded).field_0x8,
             *(int *)&(this->KeyAdded).field_0x10);
  pvVar1 = *(void **)&(this->KeyAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->KeyAdded);
  *(undefined4 *)&(this->Keys).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Keys).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Keys);
  return;
}

// AddKey @ 1418c6520

void __thiscall
UE::FEncryptionKeyManager::AddKey(FEncryptionKeyManager *this,FGuid *param_1,FAESKey *param_2)

{
  undefined1 *puVar1;
  atomic<unsigned_char> aVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulong64 uVar10;
  uint uVar11;
  longlong lVar12;
  TMulticastDelegate<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  bool bVar13;
  FGuid *local_58;
  FAESKey *local_50;
  FDestructionSentinel local_48;
  
  LOCK();
  bVar13 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar13) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar13) {
    FMutex::LockSlow(&this->Mutex);
  }
  uVar10 = CityHash64((char *)param_1,0x10);
  iVar8 = TSet<TTuple<FGuid,FAES::FAESKey>,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FAES::FAESKey>,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>,FDefaultSetAllocator>
                      *)&this->Keys,(uint)uVar10,param_1);
  if (iVar8 == -1) {
    local_58 = param_1;
    local_50 = param_2;
    TSet<TTuple<FGuid,FAES::FAESKey>,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_const_&,FAES::FAESKey_const_&>_>
              ((TSet<TTuple<FGuid,FAES::FAESKey>,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>,FDefaultSetAllocator>
                *)&this->Keys,
               (TPairInitializer<FGuid_const_&,FAES::FAESKey_const_&> *)&stack0x00000008,
               (bool *)&local_58);
  }
  LOCK();
  aVar2 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  if (iVar8 == -1) {
    this_00 = &this->KeyAdded;
    bVar13 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                       ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar13) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_48);
      puVar1 = &(this->KeyAdded).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar13 = false;
      uVar11 = *(int *)&(this->KeyAdded).field_0x10 - 1;
      if (-1 < (int)uVar11) {
        lVar12 = (longlong)(int)uVar11 << 4;
        bVar13 = false;
        do {
          uVar9 = 0;
          if ((int)uVar11 < *(int *)&(this->KeyAdded).field_0x10) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)&(this->KeyAdded).field_0x8;
          if (((*(int *)(lVar3 + 8 + lVar12) == 0) ||
              (plVar4 = *(longlong **)(lVar3 + lVar12), plVar4 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar4 + 0x68))(plVar4,param_1,param_2), cVar7 == '\0')) {
            bVar13 = true;
          }
          lVar12 = lVar12 + -0x10;
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
      puVar1 = &(this->KeyAdded).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar13) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
  }
  return;
}

// ContainsKey @ 1418d28e0

bool __thiscall UE::FEncryptionKeyManager::ContainsKey(FEncryptionKeyManager *this,FGuid *param_1)

{
  atomic<unsigned_char> aVar1;
  int iVar2;
  ulong64 uVar3;
  bool bVar4;
  
  LOCK();
  bVar4 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    FMutex::LockSlow(&this->Mutex);
  }
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,FAES::FAESKey>,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FAES::FAESKey>,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>,FDefaultSetAllocator>
                      *)&this->Keys,(uint)uVar3,param_1);
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  return iVar2 != -1;
}

// Get @ 1418dc1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FEncryptionKeyManager * __cdecl UE::FEncryptionKeyManager::Get(void)

{
  bool bVar1;
  TMulticastDelegate<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
  *this;
  TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy> *pTVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy> *local_40;
  bool local_38;
  FAESKey local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((::_TSS0 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c)) || (_Init_thread_header(&::_TSS0), ::_TSS0 != -1)) {
    return &Mgr;
  }
  pTVar2 = FCoreDelegates::GetPakEncryptionKeyDelegate();
  bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
  if (bVar1) {
    local_30.Key[0] = '\0';
    local_30.Key[1] = '\0';
    local_30.Key[2] = '\0';
    local_30.Key[3] = '\0';
    local_30.Key[4] = '\0';
    local_30.Key[5] = '\0';
    local_30.Key[6] = '\0';
    local_30.Key[7] = '\0';
    local_30.Key[8] = '\0';
    local_30.Key[9] = '\0';
    local_30.Key[10] = '\0';
    local_30.Key[0xb] = '\0';
    local_30.Key[0xc] = '\0';
    local_30.Key[0xd] = '\0';
    local_30.Key[0xe] = '\0';
    local_30.Key[0xf] = '\0';
    local_30.Key[0x10] = '\0';
    local_30.Key[0x11] = '\0';
    local_30.Key[0x12] = '\0';
    local_30.Key[0x13] = '\0';
    local_30.Key[0x14] = '\0';
    local_30.Key[0x15] = '\0';
    local_30.Key[0x16] = '\0';
    local_30.Key[0x17] = '\0';
    local_30.Key[0x18] = '\0';
    local_30.Key[0x19] = '\0';
    local_30.Key[0x1a] = '\0';
    local_30.Key[0x1b] = '\0';
    local_30.Key[0x1c] = '\0';
    local_30.Key[0x1d] = '\0';
    local_30.Key[0x1e] = '\0';
    local_30.Key[0x1f] = '\0';
    pTVar2 = FCoreDelegates::GetPakEncryptionKeyDelegate();
    plVar3 = (longlong *)0x0;
    local_48 = (undefined1  [8])((ulonglong)local_48 & 0xffffffff00000000);
    local_38 = false;
    local_40 = pTVar2;
    FMRSWRecursiveAccessDetector::AcquireReadAccess
              ((FMRSWRecursiveAccessDetector *)pTVar2,(FDestructionSentinel *)local_48);
    plVar4 = plVar3;
    if (*(int *)&pTVar2->field_0x10 != 0) {
      plVar4 = *(longlong **)&pTVar2->field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_30);
    if (local_38 == false) {
      FMRSWRecursiveAccessDetector::ReleaseReadAccess
                ((FMRSWRecursiveAccessDetector *)local_40,(FDestructionSentinel *)local_48);
    }
    do {
      if (*(int *)(local_30.Key + (longlong)plVar3 * 4) != 0) {
        local_48 = (undefined1  [8])0x0;
        local_40 = (TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy> *)0x0;
        AddKey(&Mgr,(FGuid *)local_48,&local_30);
        break;
      }
      plVar3 = (longlong *)((longlong)plVar3 + 1);
    } while ((longlong)plVar3 < 8);
  }
  this = FCoreDelegates::GetRegisterEncryptionKeyMulticastDelegate();
  TMulticastDelegateRegistration<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<UE::FEncryptionKeyManager>
            ((TMulticastDelegateRegistration<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
              *)this,(FEncryptionKeyManager *)local_48,(pmf_b5398f4c)0x154b7f850);
  atexit(`UE::FEncryptionKeyManager::Get'::__l2::_dynamic_atexit_destructor_for__Mgr__);
  _Init_thread_footer(&::_TSS0);
  return &Mgr;
}

// GetAllKeys @ 1418dc770

TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_> *
__thiscall
UE::FEncryptionKeyManager::GetAllKeys
          (FEncryptionKeyManager *this,
          TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
          *__return_storage_ptr__)

{
  atomic<unsigned_char> aVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar2) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar2) {
    FMutex::LockSlow(&this->Mutex);
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  TSet<TTuple<FGuid,FAES::FAESKey>,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FGuid,FAES::FAESKey>,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>,FDefaultSetAllocator>
               *)__return_storage_ptr__,
              (TSet<TTuple<FGuid,FAES::FAESKey>,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>,FDefaultSetAllocator>
               *)&this->Keys);
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  return __return_storage_ptr__;
}

// TryGetKey @ 1418fcdd0

bool __thiscall
UE::FEncryptionKeyManager::TryGetKey(FEncryptionKeyManager *this,FGuid *param_1,FAESKey *param_2)

{
  atomic<unsigned_char> aVar1;
  undefined8 uVar2;
  int iVar3;
  ulong64 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  LOCK();
  bVar7 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this->Mutex);
  }
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,FAES::FAESKey>,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FAES::FAESKey>,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>,FDefaultSetAllocator>
                      *)&this->Keys,(uint)uVar4,param_1);
  if (iVar3 != -1) {
    lVar5 = (longlong)iVar3 * 0x38 + *(longlong *)&this->Keys;
    puVar6 = (undefined8 *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    if (puVar6 != (undefined8 *)0x0) {
      uVar2 = puVar6[1];
      *(undefined8 *)param_2->Key = *puVar6;
      *(undefined8 *)(param_2->Key + 8) = uVar2;
      uVar2 = puVar6[3];
      *(undefined8 *)(param_2->Key + 0x10) = puVar6[2];
      *(undefined8 *)(param_2->Key + 0x18) = uVar2;
      bVar7 = true;
      goto LAB_1418fce51;
    }
  }
  bVar7 = false;
LAB_1418fce51:
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  return bVar7;
}

