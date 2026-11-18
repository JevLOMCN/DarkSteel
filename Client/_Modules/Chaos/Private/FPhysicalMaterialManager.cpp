// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 17

// FPhysicalMaterialManager @ 143d91ed0

FPhysicalMaterialManager * __thiscall
Chaos::FPhysicalMaterialManager::FPhysicalMaterialManager(FPhysicalMaterialManager *this)

{
  *(undefined8 *)&(this->OnMaterialUpdated).field_0x18 = 2;
  *(undefined8 *)&this->OnMaterialUpdated = 0;
  *(undefined8 *)&(this->OnMaterialUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnMaterialUpdated).field_0x10 = 0;
  *(undefined8 *)&this->OnMaterialCreated = 0;
  *(undefined8 *)&(this->OnMaterialCreated).field_0x8 = 0;
  *(undefined8 *)&(this->OnMaterialCreated).field_0x10 = 0;
  *(undefined8 *)&this->OnMaterialDestroyed = 0;
  *(undefined8 *)&(this->OnMaterialDestroyed).field_0x8 = 0;
  *(undefined8 *)&(this->OnMaterialDestroyed).field_0x10 = 0;
  *(undefined8 *)&this->OnMaterialMaskUpdated = 0;
  *(undefined8 *)&(this->OnMaterialMaskUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnMaterialMaskUpdated).field_0x10 = 0;
  *(undefined8 *)&this->OnMaterialMaskCreated = 0;
  *(undefined8 *)&(this->OnMaterialMaskCreated).field_0x8 = 0;
  *(undefined8 *)&(this->OnMaterialMaskCreated).field_0x10 = 0;
  *(undefined8 *)&this->OnMaterialMaskDestroyed = 0;
  *(undefined8 *)&(this->OnMaterialMaskDestroyed).field_0x8 = 0;
  *(undefined8 *)&(this->OnMaterialMaskDestroyed).field_0x10 = 0;
  *(undefined8 *)&(this->OnMaterialCreated).field_0x18 = 2;
  *(undefined8 *)&(this->OnMaterialDestroyed).field_0x18 = 2;
  *(undefined8 *)&(this->OnMaterialMaskUpdated).field_0x18 = 2;
  *(undefined8 *)&(this->OnMaterialMaskCreated).field_0x18 = 2;
  *(undefined8 *)&(this->OnMaterialMaskDestroyed).field_0x18 = 2;
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>
            (&this->Materials,4);
  (this->MaterialMasks).HandleEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialMasks).HandleEntries.ArrayNum = 0;
  (this->MaterialMasks).HandleEntries.ArrayMax = 0;
  (this->MaterialMasks).Validity.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
  ;
  (this->MaterialMasks).FreeList = 0xffffff;
  (this->MaterialMasks).Validity.NumBits = 0;
  (this->MaterialMasks).Validity.MaxBits = 0x80;
  (this->MaterialMasks).Data = (FChaosPhysicsMaterialMask *)0x0;
  (this->MaterialMasks).NumData = 0;
  (this->MaterialMasks).Capacity = 0;
  (this->MaterialMasks).NumActive = 0;
  (this->MaterialsLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->MaterialMasksLock).Mutex.Mutex.Ptr = (void *)0x0;
  return this;
}

// ~FPhysicalMaterialManager @ 143d92a80

void __thiscall
Chaos::FPhysicalMaterialManager::~FPhysicalMaterialManager(FPhysicalMaterialManager *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->MaterialMasksLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->MaterialMasksLock);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->MaterialsLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->MaterialsLock);
  }
  THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::
  ~THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>(&this->MaterialMasks);
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::~THandleArray<Chaos::FChaosPhysicsMaterial,24,8>
            (&this->Materials);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMaterialMaskDestroyed).field_0x8,
             *(int *)&(this->OnMaterialMaskDestroyed).field_0x10);
  pvVar1 = *(void **)&(this->OnMaterialMaskDestroyed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMaterialMaskDestroyed);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMaterialMaskCreated).field_0x8,
             *(int *)&(this->OnMaterialMaskCreated).field_0x10);
  pvVar1 = *(void **)&(this->OnMaterialMaskCreated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMaterialMaskCreated);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMaterialMaskUpdated).field_0x8,
             *(int *)&(this->OnMaterialMaskUpdated).field_0x10);
  pvVar1 = *(void **)&(this->OnMaterialMaskUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMaterialMaskUpdated);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMaterialDestroyed).field_0x8,*(int *)&(this->OnMaterialDestroyed).field_0x10
            );
  pvVar1 = *(void **)&(this->OnMaterialDestroyed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMaterialDestroyed);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMaterialCreated).field_0x8,*(int *)&(this->OnMaterialCreated).field_0x10);
  pvVar1 = *(void **)&(this->OnMaterialCreated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMaterialCreated);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMaterialUpdated).field_0x8,*(int *)&(this->OnMaterialUpdated).field_0x10);
  pvVar1 = *(void **)&(this->OnMaterialUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// Create @ 143da3b20

FMaterialHandle __thiscall Chaos::FPhysicalMaterialManager::Create(FPhysicalMaterialManager *this)

{
  code *pcVar1;
  bool bVar2;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> TVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> *in_RDX;
  FPlatformRWLock *SRWLock;
  FLLMScope local_res8 [5];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,ChaosMaterial,false,None,Default,true);
  FMemScope::FMemScope(local_res18,ChaosMaterial,true);
  if (CVars::bEnableAsyncInitBody == false) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicalMaterials.cpp"
                         ,0x80,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3 = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)(*pcVar1)();
        return (FMaterialHandle)TVar3;
      }
    }
  }
  *in_RDX = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)((uint)*in_RDX & 0xff000000);
  in_RDX->field_0x3 = 0;
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = &this->MaterialsLock;
  }
  if (SRWLock == (FPlatformRWLock *)0x0) {
    TVar3 = THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Create<>(&this->Materials);
    *in_RDX = *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)CONCAT44(extraout_var_00,TVar3);
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    TVar3 = THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Create<>(&this->Materials);
    *in_RDX = *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)CONCAT44(extraout_var,TVar3);
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  TMulticastDelegate<void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnMaterialCreated,(FMaterialHandle)*in_RDX);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return (FMaterialHandle)SUB84(in_RDX,0);
}

// CreateMask @ 143da3ec0

FMaterialMaskHandle __thiscall
Chaos::FPhysicalMaterialManager::CreateMask(FPhysicalMaterialManager *this)

{
  code *pcVar1;
  bool bVar2;
  THandle<Chaos::FChaosPhysicsMaterialMask,24,8> TVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *in_RDX;
  FPlatformRWLock *SRWLock;
  
  if (!CVars::bEnableAsyncInitBody) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicalMaterials.cpp"
                         ,0x8d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3 = (THandle<Chaos::FChaosPhysicsMaterialMask,24,8>)(*pcVar1)();
        return (FMaterialMaskHandle)TVar3;
      }
    }
  }
  *in_RDX = (THandle<Chaos::FChaosPhysicsMaterialMask,24,8>)((uint)*in_RDX & 0xff000000);
  in_RDX->field_0x3 = 0;
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = &this->MaterialMasksLock;
  }
  if (SRWLock == (FPlatformRWLock *)0x0) {
    TVar3 = THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::Create<>(&this->MaterialMasks);
    *in_RDX = *(THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)CONCAT44(extraout_var_00,TVar3);
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    TVar3 = THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::Create<>(&this->MaterialMasks);
    *in_RDX = *(THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)CONCAT44(extraout_var,TVar3);
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  TMulticastDelegate<void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnMaterialMaskCreated,(FMaterialMaskHandle)*in_RDX);
  return (FMaterialMaskHandle)SUB84(in_RDX,0);
}

// Destroy @ 143da4690

void __thiscall
Chaos::FPhysicalMaterialManager::Destroy(FPhysicalMaterialManager *this,FMaterialHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  FPlatformRWLock *SRWLock;
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  
  FLLMScope::FLLMScope(local_res10,ChaosMaterial,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,ChaosMaterial,true);
  if (((CVars::bEnableAsyncInitBody == false) && (bVar2 = IsInGameThread(), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicalMaterials.cpp"
                         ,0x9c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0xffffff < (uint)param_1.InnerHandle) {
    TMulticastDelegate<void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnMaterialDestroyed,param_1);
    SRWLock = (FPlatformRWLock *)0x0;
    if (CVars::bEnableAsyncInitBody != false) {
      SRWLock = &this->MaterialsLock;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Destroy(&this->Materials,param_1.InnerHandle);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// Destroy @ 143da4790

void __thiscall
Chaos::FPhysicalMaterialManager::Destroy(FPhysicalMaterialManager *this,FMaterialMaskHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  FPlatformRWLock *SRWLock;
  
  if (((!CVars::bEnableAsyncInitBody) && (bVar2 = IsInGameThread(), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicalMaterials.cpp"
                         ,0xa9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0xffffff < (uint)param_1.InnerHandle) {
    TMulticastDelegate<void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>::
    Broadcast(&this->OnMaterialMaskDestroyed,param_1);
    SRWLock = (FPlatformRWLock *)0x0;
    if (CVars::bEnableAsyncInitBody != false) {
      SRWLock = &this->MaterialMasksLock;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::Destroy
              (&this->MaterialMasks,param_1.InnerHandle);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return;
}

// Get @ 143da9100

FPhysicalMaterialManager * __cdecl Chaos::FPhysicalMaterialManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::
      THandleArray<Chaos::FChaosPhysicsMaterial,24,8>(&::Instance.Materials,4);
      ::Instance.MaterialMasks.FreeList = 0xffffff;
      ::Instance.MaterialMasks.HandleEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      ::Instance.MaterialMasks.HandleEntries.ArrayNum = 0;
      ::Instance.MaterialMasks.HandleEntries.ArrayMax = 0;
      ::Instance.MaterialMasks.Validity.AllocatorInstance.SecondaryData =
           (ForElementType<unsigned_int>)0x0;
      ::Instance.MaterialMasks.Validity.NumBits = 0;
      ::Instance.MaterialMasks.Data = (FChaosPhysicsMaterialMask *)0x0;
      ::Instance.MaterialMasks.NumData = 0;
      ::Instance.MaterialMasks.Capacity = 0;
      ::Instance.MaterialMasks.NumActive = 0;
      ::Instance.MaterialsLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
      ::Instance.MaterialMasksLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
      ::Instance.MaterialMasks.Validity.MaxBits = 0x80;
      atexit(`Chaos::FPhysicalMaterialManager::Get'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

// GetMasterMaterialMasks_External @ 143dabd00

THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8> * __thiscall
Chaos::FPhysicalMaterialManager::GetMasterMaterialMasks_External(FPhysicalMaterialManager *this)

{
  return &this->MaterialMasks;
}

// GetMasterMaterials_External @ 143dabd10

THandleArray<Chaos::FChaosPhysicsMaterial,24,8> * __thiscall
Chaos::FPhysicalMaterialManager::GetMasterMaterials_External(FPhysicalMaterialManager *this)

{
  return &this->Materials;
}

// GetPrimaryMaterialMasks_External @ 143dac0d0

THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8> * __thiscall
Chaos::FPhysicalMaterialManager::GetPrimaryMaterialMasks_External(FPhysicalMaterialManager *this)

{
  return &this->MaterialMasks;
}

// GetPrimaryMaterials_External @ 143dac0e0

THandleArray<Chaos::FChaosPhysicsMaterial,24,8> * __thiscall
Chaos::FPhysicalMaterialManager::GetPrimaryMaterials_External(FPhysicalMaterialManager *this)

{
  return &this->Materials;
}

// Resolve @ 143db49d0

FChaosPhysicsMaterial * __thiscall
Chaos::FPhysicalMaterialManager::Resolve
          (FPhysicalMaterialManager *this,THandle<Chaos::FChaosPhysicsMaterial,24,8> param_1)

{
  FChaosPhysicsMaterial *pFVar1;
  FPlatformRWLock *SRWLock;
  
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody) {
    SRWLock = &this->MaterialsLock;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
  }
  pFVar1 = THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Get(&this->Materials,param_1);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pFVar1;
}

// Resolve @ 143db4a40

FChaosPhysicsMaterialMask * __thiscall
Chaos::FPhysicalMaterialManager::Resolve
          (FPhysicalMaterialManager *this,THandle<Chaos::FChaosPhysicsMaterialMask,24,8> param_1)

{
  code *pcVar1;
  bool bVar2;
  FChaosPhysicsMaterialMask *pFVar3;
  FChaosPhysicsMaterialMask *SRWLock;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  
  pFVar3 = (FChaosPhysicsMaterialMask *)0x0;
  SRWLock = pFVar3;
  if (CVars::bEnableAsyncInitBody) {
    SRWLock = (FChaosPhysicsMaterialMask *)&this->MaterialMasksLock;
  }
  if (SRWLock != (FChaosPhysicsMaterialMask *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (0xffffff < (uint)param_1) {
    uVar4 = (uint)param_1 & 0xffffff;
    if ((int)uVar4 < (this->MaterialMasks).Validity.NumBits) {
      if ((this->MaterialMasks).Validity.NumBits <= (int)uVar4) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FChaosPhysicsMaterialMask *)(*pcVar1)();
          return pFVar3;
        }
      }
      FVar5 = (this->MaterialMasks).Validity.AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<unsigned_int>)0x0) {
        FVar5 = (ForElementType<unsigned_int>)&(this->MaterialMasks).Validity;
      }
      if ((*(uint *)((longlong)FVar5 + (ulonglong)(uVar4 >> 5) * 4) >> ((uint)param_1 & 0x1f) & 1)
          != 0) {
        if ((this->MaterialMasks).HandleEntries.ArrayNum <= (int)uVar4) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar3 = (FChaosPhysicsMaterialMask *)(*pcVar1)();
            return pFVar3;
          }
        }
        pFVar3 = (FChaosPhysicsMaterialMask *)0x0;
        if ((this->MaterialMasks).HandleEntries.AllocatorInstance.Data[(ulonglong)uVar4 * 4 + 3] ==
            param_1._3_1_) {
          pFVar3 = (this->MaterialMasks).Data + ((uint)param_1 & 0xffffff);
        }
      }
    }
  }
  if (SRWLock != (FChaosPhysicsMaterialMask *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pFVar3;
}

// Resolve @ 143db4ba0

FChaosPhysicsMaterial * __thiscall
Chaos::FPhysicalMaterialManager::Resolve
          (FPhysicalMaterialManager *this,TConstHandle<Chaos::FChaosPhysicsMaterial,24,8> param_1)

{
  code *pcVar1;
  bool bVar2;
  FChaosPhysicsMaterial *pFVar3;
  ForElementType<unsigned_int> FVar4;
  FChaosPhysicsMaterial *SRWLock;
  TConstHandle<Chaos::FChaosPhysicsMaterial,24,8> local_res10 [2];
  TConstHandle<Chaos::FChaosPhysicsMaterial,24,8> *local_28;
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *local_20;
  
  pFVar3 = (FChaosPhysicsMaterial *)0x0;
  SRWLock = pFVar3;
  if (CVars::bEnableAsyncInitBody) {
    SRWLock = (FChaosPhysicsMaterial *)&this->MaterialsLock;
  }
  if (SRWLock != (FChaosPhysicsMaterial *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
  }
  local_res10[0] = param_1;
  if (0xffffff < (uint)param_1) {
    if ((int)((uint)param_1 & 0xffffff) < (this->Materials).Validity.NumBits) {
      FVar4 = (this->Materials).Validity.AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<unsigned_int>)0x0) {
        FVar4 = (ForElementType<unsigned_int>)&(this->Materials).Validity;
      }
      if ((*(uint *)((longlong)FVar4 + (ulonglong)(((uint)param_1 & 0xffffff) >> 5) * 4) >>
           ((uint)param_1 & 0x1f) & 1) != 0) {
        if (((this->Materials).HandleEntries.ArrayNum <= (int)((uint)param_1 & 0xffffff)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FChaosPhysicsMaterial *)(*pcVar1)();
          return pFVar3;
        }
        if ((this->Materials).HandleEntries.AllocatorInstance.Data
            [(ulonglong)((uint)param_1 & 0xffffff) * 4 + 3] == local_res10[0]._3_1_) {
          pFVar3 = (this->Materials).Data + ((uint)local_res10[0] & 0xffffff);
        }
      }
    }
    else {
      local_28 = local_res10;
      local_20 = &this->Materials;
      `Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Get'::__l13::<lambda_1>::operator()
                (&local_28);
      pFVar3 = (FChaosPhysicsMaterial *)0x0;
    }
  }
  if (SRWLock != (FChaosPhysicsMaterial *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pFVar3;
}

// Resolve @ 143db4ce0

FChaosPhysicsMaterialMask * __thiscall
Chaos::FPhysicalMaterialManager::Resolve
          (FPhysicalMaterialManager *this,
          TConstHandle<Chaos::FChaosPhysicsMaterialMask,24,8> param_1)

{
  code *pcVar1;
  bool bVar2;
  FChaosPhysicsMaterialMask *pFVar3;
  ForElementType<unsigned_int> FVar4;
  FChaosPhysicsMaterialMask *SRWLock;
  TConstHandle<Chaos::FChaosPhysicsMaterialMask,24,8> local_res10 [2];
  TConstHandle<Chaos::FChaosPhysicsMaterialMask,24,8> *local_28;
  THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8> *local_20;
  
  pFVar3 = (FChaosPhysicsMaterialMask *)0x0;
  SRWLock = pFVar3;
  if (CVars::bEnableAsyncInitBody) {
    SRWLock = (FChaosPhysicsMaterialMask *)&this->MaterialMasksLock;
  }
  if (SRWLock != (FChaosPhysicsMaterialMask *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
  }
  local_res10[0] = param_1;
  if (0xffffff < (uint)param_1) {
    if ((int)((uint)param_1 & 0xffffff) < (this->MaterialMasks).Validity.NumBits) {
      FVar4 = (this->MaterialMasks).Validity.AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<unsigned_int>)0x0) {
        FVar4 = (ForElementType<unsigned_int>)&(this->MaterialMasks).Validity;
      }
      if ((*(uint *)((longlong)FVar4 + (ulonglong)(((uint)param_1 & 0xffffff) >> 5) * 4) >>
           ((uint)param_1 & 0x1f) & 1) != 0) {
        if (((this->MaterialMasks).HandleEntries.ArrayNum <= (int)((uint)param_1 & 0xffffff)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FChaosPhysicsMaterialMask *)(*pcVar1)();
          return pFVar3;
        }
        if ((this->MaterialMasks).HandleEntries.AllocatorInstance.Data
            [(ulonglong)((uint)param_1 & 0xffffff) * 4 + 3] == local_res10[0]._3_1_) {
          pFVar3 = (this->MaterialMasks).Data + ((uint)local_res10[0] & 0xffffff);
        }
      }
    }
    else {
      local_28 = local_res10;
      local_20 = &this->MaterialMasks;
      `Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::Get'::__l13::<lambda_1>::
      operator()(&local_28);
      pFVar3 = (FChaosPhysicsMaterialMask *)0x0;
    }
  }
  if (SRWLock != (FChaosPhysicsMaterialMask *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pFVar3;
}

// UpdateMaterial @ 143dbbcb0

void __thiscall
Chaos::FPhysicalMaterialManager::UpdateMaterial
          (FPhysicalMaterialManager *this,FMaterialHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (!CVars::bEnableAsyncInitBody) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicalMaterials.cpp"
                         ,0x5e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  TMulticastDelegate<void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnMaterialUpdated,param_1);
  return;
}

// UpdateMaterialMask @ 143dbbd20

void __thiscall
Chaos::FPhysicalMaterialManager::UpdateMaterialMask
          (FPhysicalMaterialManager *this,FMaterialMaskHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (!CVars::bEnableAsyncInitBody) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicalMaterials.cpp"
                         ,100,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  TMulticastDelegate<void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnMaterialMaskUpdated,param_1);
  return;
}

