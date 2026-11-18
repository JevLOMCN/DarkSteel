// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 70

// RegisterCompiledInStruct @ 14a0a1a60

void __thiscall
FRigVMRegistry_RWLock::RegisterCompiledInStruct
          (FRigVMRegistry_RWLock *this,UScriptStruct *param_1,
          TArrayView<FRigVMCompiledInFunction_const_,int> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_38;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  FRigVMRegistryHandle::FRigVMRegistryHandle(&local_28,(FRigVMRegistry_NoLock *)this);
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
  local_18 = this;
  AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  local_18->WriteLockOwnerThread = aVar5;
  UNLOCK();
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38.DataPtr = param_2->DataPtr;
  local_38.ArrayNum = param_2->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FRigVMRegistry_NoLock::RegisterCompiledInStruct_NoLock
            ((FRigVMRegistry_NoLock *)this,param_1,&local_38);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if ((int)aVar2 + -1 < 0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538070>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x26a,"CurrentLockCount >= 0");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      aVar5 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar5 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if (aVar2 != (atomic<int>)0x1) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return;
}

// FRigVMRegistry_RWLock @ 14a0bf7f0

FRigVMRegistry_RWLock * __thiscall
FRigVMRegistry_RWLock::FRigVMRegistry_RWLock(FRigVMRegistry_RWLock *this,bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  FRigVMRegistry_RWLock *pFVar6;
  
  FRigVMRegistry_NoLock::FRigVMRegistry_NoLock((FRigVMRegistry_NoLock *)this,param_1);
  this->_padding_ = (longlong)&___7FRigVMRegistry_RWLock__6B_;
  (this->Lock).Mutex.Mutex.Ptr = (void *)0x0;
  this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
  this->LockCount = (atomic<int>)0x0;
  this->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
  *(undefined8 *)&this->OnRigVMRegistryChangedDelegate = 0;
  *(undefined8 *)&(this->OnRigVMRegistryChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnRigVMRegistryChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnRigVMRegistryChangedDelegate).field_0x18 = 2;
  AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->WriteLockOwnerThread = aVar5;
  UNLOCK();
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
    UNLOCK();
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRigVMRegistry_RWLock *)(*pcVar3)();
      return pFVar6;
    }
  }
  Initialize_NoLock(this);
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538060>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x274,"CurrentLockCount == 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRigVMRegistry_RWLock *)(*pcVar3)();
      return pFVar6;
    }
  }
  LOCK();
  this->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  return this;
}

// ~FRigVMRegistry_RWLock @ 14a0c3180

void __thiscall FRigVMRegistry_RWLock::~FRigVMRegistry_RWLock(FRigVMRegistry_RWLock *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRigVMRegistryChangedDelegate).field_0x8,
             *(int *)&(this->OnRigVMRegistryChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnRigVMRegistryChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRigVMRegistryChangedDelegate);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar3 != '\0') {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
    FRigVMRegistry_NoLock::~FRigVMRegistry_NoLock((FRigVMRegistry_NoLock *)this);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FRigVMRegistry_NoLock::~FRigVMRegistry_NoLock((FRigVMRegistry_NoLock *)this);
  return;
}

// AddTemplateFromArguments_NoLock @ 14a0cd940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FRigVMTemplate * __thiscall
FRigVMRegistry_RWLock::AddTemplateFromArguments_NoLock
          (FRigVMRegistry_RWLock *this,FName *param_1,
          TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *param_2,
          FRigVMTemplateDelegates *param_3)

{
  FRigVMTemplateArgument *this_00;
  TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *this_01;
  code *pcVar1;
  undefined4 uVar2;
  FRigVMTemplateDelegates *pFVar3;
  bool bVar4;
  char cVar5;
  FScriptContainerElement FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FRigVMTemplate *pFVar13;
  TTuple<FName,int> *pTVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  byte *pbVar20;
  ForAnyElementType this_02;
  byte *pbVar21;
  ulonglong uVar22;
  byte *pbVar23;
  FRigVMTemplateArgument *pFVar24;
  byte *pbVar25;
  uint uVar26;
  ulonglong uVar27;
  byte *pbVar28;
  ulonglong uVar29;
  undefined1 auStackY_2b8 [32];
  FScriptContainerElement FStack_268;
  FScriptContainerElement aFStack_267 [3];
  int iStack_264;
  uint uStack_260;
  undefined1 uStack_25c;
  undefined1 uStack_25b;
  undefined1 auStack_25a [2];
  undefined4 auStack_258 [2];
  FRigVMTemplate *pFStack_250;
  TArray<FRigVMTypeCacheScope_NoLock,TSizedDefaultAllocator<32>_> TStack_248;
  undefined1 auStack_238 [16];
  undefined4 uStack_228;
  longlong *plStack_220;
  FRigVMRegistry_RWLock *pFStack_218;
  FRigVMTemplateDelegates *pFStack_210;
  FName aFStack_208 [2];
  FName FStack_1f8;
  undefined4 uStack_1f0;
  FName FStack_1e8;
  undefined4 uStack_1e0;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_1d8;
  FName *pFStack_1c8;
  int *piStack_1c0;
  FString FStack_1b8;
  FRigVMTemplate FStack_1a8;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pFStack_250 = (FRigVMTemplate *)0x0;
  uStack_260 = 0;
  plStack_220 = &this->_padding_;
  auStack_238._0_8_ = param_1;
  pFStack_218 = this;
  pFStack_210 = param_3;
  FRigVMTemplate::FRigVMTemplate(&FStack_1a8,param_1,param_2,(FRigVMRegistryHandle *)plStack_220);
  iVar9 = FStack_1a8.Arguments.ArrayNum;
  uVar22 = (ulonglong)FStack_1a8.Arguments.ArrayNum;
  pFVar24 = (FRigVMTemplateArgument *)(FStack_1a8.Arguments.AllocatorInstance.Data + uVar22 * 0x80);
  this_02.Data = FStack_1a8.Arguments.AllocatorInstance.Data;
  uVar10 = 0;
  while( true ) {
    if ((uint)uVar22 != iVar9) {
      uStack_25c = 0;
      `TCheckedPointerIterator<FRigVMTemplateArgument,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&uStack_25c);
      uVar22 = (ulonglong)(uint)FStack_1a8.Arguments.ArrayNum;
    }
    if ((FRigVMTemplateArgument *)this_02.Data == pFVar24) break;
    uVar8 = FRigVMTemplateArgument::GetNumTypes_NoLock
                      ((FRigVMTemplateArgument *)this_02.Data,
                       (FRigVMRegistryHandle *)&this->_padding_);
    TStack_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_1d8.ArrayNum = 0;
    TStack_1d8.ArrayMax = 0;
    bVar4 = FRigVMTemplateArgument::IsSingleton_NoLock
                      ((FRigVMTemplateArgument *)this_02.Data,&TStack_1d8,
                       (FRigVMRegistryHandle *)&this->_padding_);
    if (((!bVar4) && (1 < (int)uVar10)) && (uVar8 != uVar10)) {
      if (1 < (byte)LogRigVM._0_1_) {
        ::FName::ToString((FName *)auStack_238._0_8_,&FStack_1b8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
LAB_14a0cd8ec:
        if ((FRigVMTypeCacheScope_NoLock *)FStack_1b8.Data.AllocatorInstance.Data !=
            (FRigVMTypeCacheScope_NoLock *)0x0) {
          FMemory::Free(FStack_1b8.Data.AllocatorInstance.Data);
        }
      }
      FRigVMTemplate::~FRigVMTemplate(&FStack_1a8);
      return pFStack_250;
    }
    if ((int)uVar8 < (int)uVar10) {
      uVar8 = uVar10;
    }
    this_02.Data = this_02.Data + 0x80;
    uVar22 = (ulonglong)(uint)FStack_1a8.Arguments.ArrayNum;
    uVar10 = uVar8;
  }
  uStack_260 = (uint)uVar22;
  uVar15 = (ulonglong)(int)uStack_260;
  pFVar24 = (FRigVMTemplateArgument *)(FStack_1a8.Arguments.AllocatorInstance.Data + uVar15 * 0x80);
  pFVar18 = FStack_1a8.Arguments.AllocatorInstance.Data + 0x30;
  while( true ) {
    uVar8 = (uint)uVar22;
    if ((uint)uVar22 != (uint)uVar15) {
      uStack_25b = 0;
      `TCheckedPointerIterator<FRigVMTemplateArgument,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&uStack_25b);
      uVar8 = FStack_1a8.Arguments.ArrayNum;
    }
    this_00 = (FRigVMTemplateArgument *)(pFVar18 + -0x30);
    if (this_00 == pFVar24) break;
    iVar9 = FRigVMTemplateArgument::GetNumTypes_NoLock
                      (this_00,(FRigVMRegistryHandle *)&this->_padding_);
    uVar8 = uVar10;
    if (iVar9 == 1) {
      FRigVMTemplateArgument::GetTypeIndex_NoLock
                (this_00,(TRigVMTypeIndex *)(auStack_238 + 8),0,
                 (FRigVMRegistryHandle *)&this->_padding_);
      uVar2 = uStack_228;
      FStack_1f8.ComparisonIndex.Value = auStack_238._8_4_;
      FStack_1f8.Number = auStack_238._12_4_;
      uStack_1f0 = uStack_228;
      cVar5 = (**(code **)(this->_padding_ + 0x128))(this,&FStack_1f8);
      if (cVar5 != '\0') {
        FStack_1e8.ComparisonIndex.Value = auStack_238._8_4_;
        FStack_1e8.Number = auStack_238._12_4_;
        uStack_1e0 = uVar2;
        cVar5 = (**(code **)(this->_padding_ + 0x108))(this,&FStack_1e8);
        pFVar16 = (((TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *)
                   (pFVar18 + -8))->AllocatorInstance).Data;
        if (cVar5 == '\0') {
          aFStack_267[0] = (FScriptContainerElement)0x1;
          if (((pFVar16 <= aFStack_267) && (aFStack_267 < pFVar16 + *(int *)(pFVar18 + 4))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            pFVar13 = (FRigVMTemplate *)(*pcVar1)();
            return pFVar13;
          }
          iVar9 = *(int *)pFVar18;
          FVar6 = aFStack_267[0];
          if (iVar9 == *(int *)(pFVar18 + 4)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,(ForAnyElementType *)(pFVar18 + -8),(int *)(pFVar18 + 4));
            FVar6 = aFStack_267[0];
          }
        }
        else {
          FStack_268 = (FScriptContainerElement)0x2;
          if (((pFVar16 <= &FStack_268) && (&FStack_268 < pFVar16 + *(int *)(pFVar18 + 4))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            pFVar13 = (FRigVMTemplate *)(*pcVar1)();
            return pFVar13;
          }
          iVar9 = *(int *)pFVar18;
          FVar6 = FStack_268;
          if (iVar9 == *(int *)(pFVar18 + 4)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,(ForAnyElementType *)(pFVar18 + -8),(int *)(pFVar18 + 4));
            FVar6 = FStack_268;
          }
        }
        *(int *)pFVar18 = iVar9 + 1;
        (((TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *)
         (pFVar18 + -8))->AllocatorInstance).Data[iVar9] = FVar6;
        pFVar18[-0x10] = (FScriptContainerElement)0x1;
        *(int *)(pFVar18 + -0x18) = 0;
        if (*(int *)(pFVar18 + -0x14) < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)(pFVar18 + -0x20),0,(int *)(pFVar18 + -0x14));
        }
        uVar8 = FRigVMTemplateArgument::GetNumTypes_NoLock
                          (this_00,(FRigVMRegistryHandle *)&this->_padding_);
        if ((int)uVar8 < (int)uVar10) {
          uVar8 = uVar10;
        }
      }
    }
    uVar10 = uVar8;
    uVar22 = (ulonglong)(uint)FStack_1a8.Arguments.ArrayNum;
    pFVar18 = pFVar18 + 0x80;
    uVar15 = (ulonglong)uStack_260;
  }
  uVar22 = 0;
  TStack_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_248.ArrayNum = 0;
  TStack_248.ArrayMax = 0;
  uStack_260 = uVar10;
  if (uVar8 != 0) {
    TArray<FRigVMTypeCacheScope_NoLock,TSizedDefaultAllocator<32>_>::SetNum
              (&TStack_248,uVar8,Default);
    bVar4 = false;
    pFStack_250 = (FRigVMTemplate *)(longlong)(int)uVar8;
    uVar15 = uVar22;
    uVar27 = uVar22;
    uVar29 = uVar22;
    if (0 < (int)uVar8) {
      do {
        uVar8 = (uint)uVar22;
        uVar10 = 0;
        if ((int)uVar8 < TStack_248.ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar1 = (code *)swi(3);
          pFVar13 = (FRigVMTemplate *)(*pcVar1)();
          return pFVar13;
        }
        pFVar18 = TStack_248.AllocatorInstance.Data + uVar27;
        uVar10 = 0;
        if ((int)uVar8 < FStack_1a8.Arguments.ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar1 = (code *)swi(3);
          pFVar13 = (FRigVMTemplate *)(*pcVar1)();
          return pFVar13;
        }
        pFVar16 = FStack_1a8.Arguments.AllocatorInstance.Data + uVar29;
        if (*(longlong *)pFVar18 != *plStack_220) {
          *(longlong *)pFVar18 = *plStack_220;
          *(longlong *)(pFVar18 + 8) = 0;
        }
        if (*(FScriptContainerElement **)(pFVar18 + 8) != pFVar16) {
          *(FScriptContainerElement **)(pFVar18 + 8) = pFVar16;
          pFVar18[0x10] = (FScriptContainerElement)(*(longlong *)(pFVar16 + 0x40) != 0);
        }
        if (bVar4) {
LAB_14a0cd43f:
          bVar4 = true;
        }
        else {
          uVar10 = 0;
          if ((int)uVar8 < TStack_248.ArrayNum) {
            uVar10 = ~uVar8 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            pFVar13 = (FRigVMTemplate *)(*pcVar1)();
            return pFVar13;
          }
          iVar9 = FRigVMTypeCacheScope_NoLock::GetNumTypes_NoLock
                            ((FRigVMTypeCacheScope_NoLock *)
                             (TStack_248.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x30));
          if (iVar9 == 0) goto LAB_14a0cd43f;
          bVar4 = false;
        }
        uVar22 = (ulonglong)(uVar8 + 1);
        uVar15 = uVar15 + 1;
        uVar27 = uVar27 + 0x30;
        this = pFStack_218;
        uVar29 = uVar29 + 0x80;
        uVar10 = uStack_260;
      } while ((longlong)uVar15 < (longlong)pFStack_250);
    }
  }
  pbVar21 = (byte *)0x0;
  auStack_258[0] = 0xffffffff;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  uVar8 = 0;
  FStack_1a8.Permutations.ArrayNum = 0;
  pbVar25 = pbVar21;
  if (FStack_1a8.Permutations.ArrayMax != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&FStack_1a8.Permutations.AllocatorInstance,0,
               &FStack_1a8.Permutations.ArrayMax);
    pbVar25 = (byte *)(ulonglong)(uint)FStack_1a8.Permutations.ArrayNum;
  }
  if (0 < (int)uVar10) {
    uVar22 = (ulonglong)uVar10;
    while( true ) {
      uVar10 = (uint)pbVar25;
      if (((FStack_1a8.Permutations.AllocatorInstance.Data <= (FScriptContainerElement *)auStack_258
           ) && ((FScriptContainerElement *)auStack_258 <
                 FStack_1a8.Permutations.AllocatorInstance.Data +
                 (longlong)FStack_1a8.Permutations.ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar10 = FStack_1a8.Permutations.ArrayNum, bVar4)) {
        pcVar1 = (code *)swi(3);
        pFVar13 = (FRigVMTemplate *)(*pcVar1)();
        return pFVar13;
      }
      if (uVar10 == FStack_1a8.Permutations.ArrayMax) {
        uVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&FStack_1a8.Permutations.AllocatorInstance,
                            &FStack_1a8.Permutations.ArrayMax);
      }
      FStack_1a8.Permutations.ArrayNum = uVar10 + 1;
      *(undefined4 *)(FStack_1a8.Permutations.AllocatorInstance.Data + (longlong)(int)uVar10 * 4) =
           auStack_258[0];
      uVar22 = uVar22 - 1;
      if (uVar22 == 0) break;
      pbVar25 = (byte *)(ulonglong)(uint)FStack_1a8.Permutations.ArrayNum;
    }
  }
  FRigVMTemplate::RecomputeTypesHashToPermutations
            (&FStack_1a8,&TStack_248,(FRigVMRegistryHandle *)&this->_padding_);
  this_01 = (TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)&this->_padding_;
  iStack_264 = (int)this->_padding_;
  aFStack_208[0] = FStack_1a8.Notation;
  pTVar14 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->_padding_,FStack_1a8.Notation);
  pbVar25 = &pTVar14->field_0x8;
  if (pTVar14 == (TTuple<FName,int> *)0x0) {
    pbVar25 = pbVar21;
  }
  if (pbVar25 != (byte *)0x0) {
    iStack_264 = *(int *)pbVar25;
  }
  if (iStack_264 == (int)this->_padding_) {
    pFVar13 = operator_new<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>(0x150,this_01);
    if (pFVar13 != (FRigVMTemplate *)0x0) {
      FRigVMTemplate::FRigVMTemplate(pFVar13,&FStack_1a8);
    }
  }
  else {
    pFVar13 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                        (this_01,iStack_264);
    FRigVMTemplate::operator=(pFVar13,&FStack_1a8);
  }
  iVar9 = iStack_264;
  pFVar13 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                      (this_01,iStack_264);
  pFVar13->Index = iVar9;
  pFVar13 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                      (this_01,iStack_264);
  pFVar13->OwnerRegistry = (FRigVMRegistry_NoLock *)this;
  pFVar13 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                      (this_01,iStack_264);
  pFVar3 = pFStack_210;
  TDelegate<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>___cdecl(FName_const_&,TRigVMTypeIndex,FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar13->Delegates).NewArgumentTypeDelegate,&pFStack_210->NewArgumentTypeDelegate);
  TDelegate<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar13->Delegates).GetDispatchFactoryDelegate,&pFVar3->GetDispatchFactoryDelegate);
  pFStack_1c8 = aFStack_208;
  piStack_1c0 = &iStack_264;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->_padding_,(TPairInitializer<FName_const_&,int_const_&> *)auStack_238,
             (bool *)&pFStack_1c8);
  uStack_260 = 0;
  pbVar25 = pbVar21;
  pbVar28 = pbVar21;
  while( true ) {
    iVar9 = iStack_264;
    uVar10 = iStack_264 / 0x30;
    uVar26 = uVar8;
    if ((int)uVar10 < (int)this->_padding_) {
      uVar26 = ~uVar10 >> 0x1f;
    }
    pFStack_250 = (FRigVMTemplate *)pbVar25;
    if ((uVar26 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      pFVar13 = (FRigVMTemplate *)(*pcVar1)();
      return pFVar13;
    }
    iVar12 = iStack_264;
    uVar26 = (uint)pbVar28;
    if (*(int *)((ulonglong)(uint)(iVar9 % 0x30) * 0x150 + 0x18 +
                *(longlong *)
                 ((((TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)
                   &this->_padding_)->Chunks).Array.AllocatorInstance.Data +
                 (longlong)(int)uVar10 * 8)) <= (int)uVar26) break;
    uVar10 = iStack_264 / 0x30;
    uVar11 = uVar8;
    if ((int)uVar10 < (int)this->_padding_) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      pFVar13 = (FRigVMTemplate *)(*pcVar1)();
      return pFVar13;
    }
    lVar19 = *(longlong *)
              ((((TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)&this->_padding_
                )->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar10 * 8) +
             (ulonglong)(uint)(iVar12 % 0x30) * 0x150;
    uVar10 = uVar8;
    if ((int)uVar26 < *(int *)(lVar19 + 0x18)) {
      uVar10 = ~uVar26 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      pFVar13 = (FRigVMTemplate *)(*pcVar1)();
      return pFVar13;
    }
    lVar19 = *(longlong *)(lVar19 + 0x10);
    pbVar23 = *(byte **)(pbVar25 + lVar19 + 0x28);
    iVar9 = *(int *)(pbVar25 + lVar19 + 0x30);
    pbVar28 = pbVar23 + iVar9;
    while( true ) {
      if (*(int *)(pbVar25 + lVar19 + 0x30) != iVar9) {
        auStack_25a[0] = 0;
        `TCheckedPointerIterator<enum_FRigVMTemplateArgument::ETypeCategory,int,0>::operator!='::
        __l2::<lambda_1>::operator()(auStack_25a);
      }
      if (pbVar23 == pbVar28) break;
      pbVar20 = pbVar21;
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar17 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar17 = (longlong *)this->_padding_;
        }
        iVar12 = *(int *)((longlong)plVar17 +
                         ((ulonglong)((int)this->_padding_ - 1) & (ulonglong)*pbVar23) * 4);
        if (iVar12 != -1) {
          do {
            pbVar20 = (byte *)((longlong)iVar12 * 0x20 + *(longlong *)&this->_padding_);
            if (*pbVar20 == *pbVar23) {
              if (pbVar20 != (byte *)0x0) goto LAB_14a0cd890;
              break;
            }
            iVar12 = *(int *)(pbVar20 + 0x18);
            pbVar20 = pbVar21;
          } while (iVar12 != -1);
        }
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pFVar13 = (FRigVMTemplate *)(*pcVar1)();
        return pFVar13;
      }
LAB_14a0cd890:
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pbVar20 + 8),&iStack_264);
      pbVar23 = pbVar23 + 1;
    }
    uStack_260 = uStack_260 + 1;
    pbVar28 = (byte *)(ulonglong)uStack_260;
    pbVar25 = (byte *)((longlong)pFStack_250 + 0x80);
  }
  pFStack_250 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                          ((TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_,iStack_264);
  DestructItems<FRigVMTypeCacheScope_NoLock,int>
            ((FRigVMTypeCacheScope_NoLock *)TStack_248.AllocatorInstance.Data,TStack_248.ArrayNum);
  FStack_1b8.Data.AllocatorInstance.Data = TStack_248.AllocatorInstance.Data;
  goto LAB_14a0cd8ec;
}

// CanMatchTypes_NoLock @ 14a0cf2c0

bool __thiscall
FRigVMRegistry_RWLock::CanMatchTypes_NoLock
          (FRigVMRegistry_RWLock *this,TRigVMTypeIndex *param_1,TRigVMTypeIndex *param_2,
          bool param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FName local_28;
  int local_20;
  
  iVar2 = param_1->Index;
  iVar3 = param_2->Index;
  local_28 = param_1->Name;
  if ((((-1 < iVar2) && (iVar4 = (int)this->_padding_, iVar2 < iVar4)) && (-1 < iVar3)) &&
     (iVar3 < iVar4)) {
    if (iVar2 == iVar3) {
      return true;
    }
    local_20 = iVar2;
    cVar1 = (**(code **)(this->_padding_ + 0x110))(local_28,&local_28);
    if (cVar1 != '\0') {
      local_28 = param_2->Name;
      local_20 = iVar3;
      cVar1 = (**(code **)(this->_padding_ + 0x110))(this,&local_28);
      if (cVar1 != '\0') {
        local_28 = param_1->Name;
        local_20 = iVar2;
        iVar2 = (**(code **)(this->_padding_ + 0x120))(this,&local_28);
        local_20 = param_2->Index;
        local_28 = param_2->Name;
        iVar3 = (**(code **)(this->_padding_ + 0x120))(this,&local_28);
        return iVar2 == iVar3;
      }
    }
    if (param_3) {
      iVar4 = iVar3;
      if (iVar3 < iVar2) {
        iVar4 = param_1->Index;
        iVar2 = iVar3;
      }
      if ((iVar2 == RigVMTypeUtils::TypeIndex::Float.Index) &&
         (iVar4 == RigVMTypeUtils::TypeIndex::Double.Index)) {
        return true;
      }
      if ((iVar2 == RigVMTypeUtils::TypeIndex::FloatArray.Index) &&
         (iVar4 == RigVMTypeUtils::TypeIndex::DoubleArray.Index)) {
        return true;
      }
    }
  }
  return false;
}

// ConvertExecuteContextToBaseType_NoLock @ 14a0d17d0

bool __thiscall
FRigVMRegistry_RWLock::ConvertExecuteContextToBaseType_NoLock
          (FRigVMRegistry_RWLock *this,TRigVMTypeIndex *param_1)

{
  char cVar1;
  FName *pFVar2;
  FName local_28;
  int local_20;
  undefined1 local_18 [16];
  
  local_20 = param_1->Index;
  if (local_20 == -1) {
    return false;
  }
  if (local_20 != RigVMTypeUtils::TypeIndex::Execute.Index) {
    local_28 = param_1->Name;
    cVar1 = (**(code **)(this->_padding_ + 0x110))(local_28,&local_28);
    if (cVar1 == '\0') {
      return false;
    }
    local_20 = param_1->Index;
    local_28 = param_1->Name;
    cVar1 = (**(code **)(this->_padding_ + 0x108))(this,&local_28);
    if (cVar1 != '\0') {
      local_20 = RigVMTypeUtils::TypeIndex::Execute.Index;
      local_28 = RigVMTypeUtils::TypeIndex::Execute.Name;
      pFVar2 = (FName *)(**(code **)(this->_padding_ + 0x148))(this,local_18,&local_28);
      param_1->Name = *pFVar2;
      param_1->Index = pFVar2[1].ComparisonIndex.Value;
      return true;
    }
    param_1->Name = RigVMTypeUtils::TypeIndex::Execute.Name;
    param_1->Index = RigVMTypeUtils::TypeIndex::Execute.Index;
  }
  return true;
}

// EnsureLocked @ 14a0d6e70

void __cdecl FRigVMRegistry_RWLock::EnsureLocked(ELockType param_1)

{
  code *pcVar1;
  bool bVar2;
  FRigVMRegistry_RWLock *pFVar3;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  if (param_1 == LockType_Invalid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InLockType != LockType_Invalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0xbe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = Get();
  if (param_1 == LockType_Read) {
    if (1 < (byte)pFVar3->LockType) {
      `FRigVMRegistry_RWLock::EnsureLocked'::__l13::<lambda_1>::operator()(local_res10);
      return;
    }
  }
  else if ((param_1 == LockType_Write) &&
          (pFVar3->LockType != (atomic<FRigVMRegistry_NoLock::ELockType>)0x1)) {
    `FRigVMRegistry_RWLock::EnsureLocked'::__l14::<lambda_2>::operator()(local_res8);
    return;
  }
  return;
}

// FindDispatchFactory_NoLock @ 14a0d8a70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FRigVMDispatchFactory * __thiscall
FRigVMRegistry_RWLock::FindDispatchFactory_NoLock(FRigVMRegistry_RWLock *this,FName *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  uint uVar6;
  EInternalObjectFlags EVar7;
  FRigVMDispatchFactory **ppFVar8;
  FString *this_00;
  size_t sVar9;
  UClass *pUVar10;
  FRigVMDispatchFactory *pFVar11;
  FRigVMDispatchFactory *this_01;
  FName FVar12;
  FRigVMTemplateArgumentInfo *pFStack_68;
  undefined8 uStack_60;
  FString FStack_58;
  TObjectIterator<UScriptStruct> TStack_48;
  
  ppFVar8 = TMapBase<FName,FRigVMDispatchFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>_>
            ::Find((TMapBase<FName,FRigVMDispatchFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>_>
                    *)&this->_padding_,*param_1);
  if (ppFVar8 != (FRigVMDispatchFactory **)0x0) {
    return *ppFVar8;
  }
  if ((char)this->_padding_ != '\0') {
    this_00 = ::FName::ToString(param_1,&FStack_58);
    pwVar4 = FRigVMDispatchFactory::DispatchPrefix;
    pFVar11 = (FRigVMDispatchFactory *)0x0;
    uVar6 = 0;
    if (FRigVMDispatchFactory::DispatchPrefix != (wchar_t *)0x0) {
      sVar9 = wcslen(FRigVMDispatchFactory::DispatchPrefix);
      uVar6 = (uint)sVar9;
    }
    bVar5 = ::FString::StartsWith(this_00,pwVar4,uVar6,IgnoreCase);
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      TStack_48.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_48.ObjectArray.ArrayNum = 0;
      TStack_48.ObjectArray.ArrayMax = 0;
      TStack_48.Index = 0xffffffff;
      EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
      GetObjectsOfClass(pUVar10,&TStack_48.ObjectArray,true,RF_ClassDefaultObject,
                        EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      TObjectIterator<UScriptStruct>::Advance(&TStack_48);
      while( true ) {
        if ((TStack_48.Index < 0) || (TStack_48.ObjectArray.ArrayNum <= TStack_48.Index)) {
          if (TStack_48.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return pFVar11;
          }
          FMemory::Free(TStack_48.ObjectArray.AllocatorInstance.Data);
          return pFVar11;
        }
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS0) {
          _Init_thread_header(&::_TSS0);
          if (::_TSS0 == -1) {
            SuperStruct = FRigVMDispatchFactory::StaticStruct();
            _Init_thread_footer(&::_TSS0);
          }
        }
        iVar1 = TStack_48.Index;
        uVar6 = 0;
        if (TStack_48.Index < TStack_48.ObjectArray.ArrayNum) {
          uVar6 = (uint)~TStack_48.Index >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        pUVar2 = *(UScriptStruct **)
                  (TStack_48.ObjectArray.AllocatorInstance.Data + (longlong)iVar1 * 8);
        if ((pUVar2 != SuperStruct) && (SuperStruct != (UScriptStruct *)0x0)) {
          iVar1 = (int)SuperStruct->_padding_;
          if (((int)pUVar2->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
              &SuperStruct->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            pFStack_68 = (FRigVMTemplateArgumentInfo *)0x0;
            uStack_60 = 0;
            this_01 = (FRigVMDispatchFactory *)
                      (**(code **)(this->_padding_ + 0x38))(this,pUVar2,&pFStack_68);
            DestructItems<FRigVMTemplateArgumentInfo,int>(pFStack_68,(int)uStack_60);
            if (pFStack_68 != (FRigVMTemplateArgumentInfo *)0x0) {
              FMemory::Free(pFStack_68);
            }
            if ((((this_01 != (FRigVMDispatchFactory *)0x0) &&
                 (pFVar11 == (FRigVMDispatchFactory *)0x0)) &&
                (FVar12 = FRigVMDispatchFactory::GetFactoryName(this_01),
                *(uint *)FVar12 == (param_1->ComparisonIndex).Value)) &&
               (*(uint *)((longlong)FVar12 + 4) == param_1->Number)) {
              pFVar11 = this_01;
            }
          }
        }
        TObjectIterator<UScriptStruct>::Advance(&TStack_48);
      }
      pcVar3 = (code *)swi(3);
      pFVar11 = (FRigVMDispatchFactory *)(*pcVar3)();
      return pFVar11;
    }
  }
  return (FRigVMDispatchFactory *)0x0;
}

// FindFunction_NoLock @ 14a0da060

FRigVMFunction * __thiscall
FRigVMRegistry_RWLock::FindFunction_NoLock
          (FRigVMRegistry_RWLock *this,UScriptStruct *param_1,wchar_t *param_2,
          FRigVMUserDefinedTypeResolver *param_3)

{
  code *pcVar1;
  bool bVar2;
  FRigVMFunction *pFVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0xa3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRigVMFunction *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_2 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0xa40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRigVMFunction *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(&local_28,param_2);
  pFVar4 = (FString *)(**(code **)(param_1->_padding_ + 0x388))(param_1,local_18,0);
  RigVMStringUtils::JoinStrings(&local_38,pFVar4,&local_28,L"::",(wchar_t *)0x0,(wchar_t *)0x0);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar3 = (FRigVMFunction *)(**(code **)(this->_padding_ + 0x160))(this,FVar5.Data,param_3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return pFVar3;
}

// FindFunction_NoLock @ 14a0da1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FRigVMFunction * __thiscall
FRigVMRegistry_RWLock::FindFunction_NoLock
          (FRigVMRegistry_RWLock *this,wchar_t *param_1,FRigVMUserDefinedTypeResolver *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  TTuple<FName,int> *pTVar7;
  FRigVMFunction *pFVar8;
  FRigVMDispatchFactory *this_00;
  FRigVMTemplate *this_01;
  FString *pFVar9;
  undefined8 *puVar10;
  size_t sVar11;
  FScriptContainerElement *pFVar12;
  FName *pFVar13;
  ulonglong uVar14;
  int *piVar15;
  wchar_t *pwVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  int iVar21;
  undefined1 auStackY_2d8 [32];
  FString FStack_298;
  undefined1 auStack_288 [8];
  FString FStack_280;
  FString FStack_270;
  FString FStack_260;
  TArray<FCoreRedirect_const_*,TSizedDefaultAllocator<32>_> TStack_250;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined8 uStack_228;
  int iStack_220;
  FString FStack_218;
  FString FStack_208;
  FString FStack_1f8;
  FString FStack_1e8;
  FName FStack_1d8;
  FName FStack_1d0;
  UObject *pUStack_1c8;
  undefined1 auStack_1c0 [12];
  FName FStack_1b4;
  FName FStack_1ac;
  wchar_t *pwStack_1a0;
  FName FStack_198;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> *pTStack_190
  ;
  FString FStack_188;
  FString FStack_178;
  FString FStack_168;
  FString FStack_158;
  FString FStack_148;
  FString FStack_138;
  FString FStack_128;
  FScriptContainerElement *pFStack_118;
  undefined8 *puStack_110;
  FString FStack_108;
  FName *pFStack_f8;
  int *piStack_f0;
  FString FStack_e8;
  FName FStack_d8;
  FString aFStack_d0 [2];
  FCoreRedirectObjectName FStack_b0;
  undefined1 auStack_98 [32];
  void *pvStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  ForElementType<FSetElementId> FStack_58;
  int iStack_50;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pwStack_1a0 = param_1;
  pTStack_190 = (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->_padding_;
  pFVar6 = ::FName::FName(&FStack_d8,param_1);
  pTVar7 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->_padding_,*pFVar6);
  piVar15 = (int *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<FName,int> *)0x0) {
    piVar15 = (int *)0x0;
  }
  if (piVar15 != (int *)0x0) {
    pFVar8 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                       ((TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *)
                        &this->_padding_,*piVar15);
    return pFVar8;
  }
  ::FString::FString(&FStack_e8,param_1);
  FStack_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_298.Data.ArrayNum = 0;
  FStack_298.Data.ArrayMax = 0;
  FStack_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_218.Data.ArrayNum = 0;
  FStack_218.Data.ArrayMax = 0;
  ::FString::FString(&FStack_158,L"::");
  bVar3 = ::FString::Split(&FStack_e8,&FStack_158,&FStack_298,&FStack_218);
  if (FStack_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_158.Data.AllocatorInstance.Data);
  }
  iVar21 = 0;
  if (bVar3) {
    FVar20.Data = (FScriptContainerElement *)L"";
    if (FStack_298.Data.ArrayNum != 0) {
      FVar20.Data = FStack_298.Data.AllocatorInstance.Data;
    }
    pcVar1 = *(code **)(this->_padding_ + 400);
    ::FName::FName((FName *)(auStack_1c0 + 4),(wchar_t *)FVar20.Data);
    this_00 = (FRigVMDispatchFactory *)(*pcVar1)(this,auStack_1c0 + 4);
    if ((this_00 != (FRigVMDispatchFactory *)0x0) &&
       (this_01 = FRigVMDispatchFactory::GetTemplate_NoLock
                            (this_00,(FRigVMRegistryHandle *)&this->_padding_),
       this_01 != (FRigVMTemplate *)0x0)) {
      if (((FRigVMRegistry_NoLock *)this->_padding_ != this_01->OwnerRegistry) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InRegistry.GetRegistry() == OwnerRegistry",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                             ,0x466,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FRigVMFunction *)(*pcVar1)();
        return pFVar8;
      }
      FVar20.Data = FStack_218.Data.AllocatorInstance.Data;
      lVar19 = (longlong)FStack_218.Data.ArrayNum;
      auStack_98._0_8_ = (FScriptContainerElement *)0x0;
      auStack_98._8_8_ = 0;
      pvStack_78 = (void *)0x0;
      uStack_70 = 0;
      uStack_6c = 0x80;
      uStack_68 = 0xffffffff;
      iStack_64 = 0;
      FStack_58 = (ForElementType<FSetElementId>)0x0;
      iStack_50 = 0;
      if (1 < FStack_218.Data.ArrayNum) {
        auStack_240._8_8_ = (TRigVMTypeIndex *)0x0;
        uStack_230 = 0;
        FStack_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_270.Data.ArrayNum = FStack_218.Data.ArrayNum;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,FStack_218.Data.ArrayNum,0,(ForAnyElementType *)&FStack_270,
                   FStack_218.Data.ArrayNum,&FStack_270.Data.ArrayMax);
        memcpy(FStack_270.Data.AllocatorInstance.Data,FVar20.Data,lVar19 * 2);
        if (1 < FStack_270.Data.ArrayNum) {
LAB_14a0d9730:
          ::FString::FString(&FStack_148,L",");
          bVar3 = ::FString::Split(&FStack_270,&FStack_148,(FString *)(auStack_240 + 8),&FStack_270)
          ;
          if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
          }
          if (!bVar3) {
            iVar5 = FStack_270.Data.ArrayNum + -1;
            if (FStack_270.Data.ArrayNum == 0) {
              iVar5 = iVar21;
            }
            ::FString::AssignRange
                      ((FString *)(auStack_240 + 8),
                       (wchar_t *)FStack_270.Data.AllocatorInstance.Data,iVar5);
            ::FString::Reset(&FStack_270,0);
          }
          FStack_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_208.Data.ArrayNum = 0;
          FStack_208.Data.ArrayMax = 0;
          FStack_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_260.Data.ArrayNum = 0;
          FStack_260.Data.ArrayMax = 0;
          ::FString::FString(&FStack_138,L":");
          bVar3 = ::FString::Split((FString *)(auStack_240 + 8),&FStack_138,&FStack_208,&FStack_260)
          ;
          if (FStack_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_138.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            FVar20.Data = (FScriptContainerElement *)L"";
            if (FStack_208.Data.ArrayNum != 0) {
              FVar20.Data = FStack_208.Data.AllocatorInstance.Data;
            }
            ::FName::FName(&FStack_1b4,(wchar_t *)FVar20.Data);
            pFVar18 = (this_01->Arguments).AllocatorInstance.Data;
            pFVar12 = pFVar18 + (longlong)(this_01->Arguments).ArrayNum * 0x80;
            for (; pFVar18 != pFVar12; pFVar18 = pFVar18 + 0x80) {
              if (*(FName *)(pFVar18 + 4) == FStack_1b4) {
                if (pFVar18 != (FScriptContainerElement *)0x0) {
                  FVar20.Data = (FScriptContainerElement *)L"";
                  if (FStack_260.Data.ArrayNum != 0) {
                    FVar20.Data = FStack_260.Data.AllocatorInstance.Data;
                  }
                  ::FName::FName(&FStack_1d8,(wchar_t *)FVar20.Data);
                  pFVar13 = (FName *)(this_01->TypeNamesToIgnore).AllocatorInstance.Data;
                  pFVar6 = pFVar13 + (this_01->TypeNamesToIgnore).ArrayNum;
                  goto joined_r0x00014a0d987c;
                }
                break;
              }
            }
          }
          goto LAB_14a0d99cc;
        }
LAB_14a0d9a82:
        if (FStack_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_270.Data.AllocatorInstance.Data);
        }
        if ((TRigVMTypeIndex *)auStack_240._8_8_ != (TRigVMTypeIndex *)0x0) {
          FMemory::Free((void *)auStack_240._8_8_);
        }
      }
      if ((auStack_98._8_4_ - iStack_64 == (this_01->Arguments).ArrayNum) &&
         (iVar5 = FRigVMTemplate::FindPermutation_NoLock
                            (this_01,(TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                                      *)auStack_98,(FRigVMRegistryHandle *)&this->_padding_),
         iVar5 != -1)) {
        pFVar8 = FRigVMTemplate::GetOrCreatePermutation_NoLock
                           (this_01,iVar5,(FRigVMRegistryHandle *)&this->_padding_);
        iStack_50 = 0;
        if (FStack_58 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)FStack_58);
        }
        iVar21 = SUB84(auStack_98._8_8_,4);
        auStack_98._8_8_ = auStack_98._8_8_ & 0xffffffff00000000;
        if (iVar21 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,0,(ForAnyElementType *)auStack_98,0,(int *)(auStack_98 + 0xc));
        }
        uStack_68 = 0xffffffff;
        iStack_64 = 0;
        uStack_70 = 0;
        if (0x80 < uStack_6c) {
          uStack_6c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10),0);
        }
        if (pvStack_78 != (void *)0x0) {
          FMemory::Free(pvStack_78);
        }
        if ((FScriptContainerElement *)auStack_98._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)auStack_98._0_8_);
        }
        goto LAB_14a0d9faa;
      }
      iStack_50 = 0;
      if (FStack_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_58);
      }
      iVar5 = SUB84(auStack_98._8_8_,4);
      auStack_98._8_8_ = auStack_98._8_8_ & 0xffffffff00000000;
      if (iVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,0,(ForAnyElementType *)auStack_98,0,(int *)(auStack_98 + 0xc));
      }
      uStack_68 = 0xffffffff;
      iStack_64 = 0;
      uStack_70 = 0;
      if (0x80 < uStack_6c) {
        uStack_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10),0);
      }
      if (pvStack_78 != (void *)0x0) {
        FMemory::Free(pvStack_78);
      }
      if ((FScriptContainerElement *)auStack_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_98._0_8_);
      }
    }
  }
  if (1 < FStack_298.Data.ArrayNum) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&StructPrefix,L"F");
      atexit(`FRigVMRegistry_NoLock::FindFunction_NoLock'::__l23::
             _dynamic_atexit_destructor_for__StructPrefix__);
      _Init_thread_footer(&::_TSS0);
    }
    pwVar16 = FRigVMDispatchFactory::DispatchPrefix;
    if (FRigVMDispatchFactory::DispatchPrefix != (wchar_t *)0x0) {
      sVar11 = wcslen(FRigVMDispatchFactory::DispatchPrefix);
      iVar21 = (int)sVar11;
    }
    bVar3 = ::FString::StartsWith(&FStack_298,pwVar16,iVar21,CaseSensitive);
    if (bVar3) {
      sVar11 = wcslen(FRigVMDispatchFactory::DispatchPrefix);
      ::FString::RightChop(&FStack_298,&FStack_188,(int)sVar11);
      if (FStack_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_298.Data.AllocatorInstance.Data);
      }
      FStack_298.Data.AllocatorInstance.Data = FStack_188.Data.AllocatorInstance.Data;
LAB_14a0d9d6c:
      FStack_298.Data.ArrayMax = FStack_188.Data.ArrayMax;
      FStack_298.Data.ArrayNum = FStack_188.Data.ArrayNum;
    }
    else {
      pwVar16 = L"";
      iVar21 = StructPrefix.Data.ArrayNum;
      if (iVar21 != 0) {
        pwVar16 = (wchar_t *)StructPrefix.Data.AllocatorInstance;
      }
      iVar5 = iVar21 + -1;
      if (iVar21 == 0) {
        iVar5 = 0;
      }
      bVar4 = ::FString::StartsWith(&FStack_298,pwVar16,iVar5,CaseSensitive);
      if (bVar4) {
        iVar21 = StructPrefix.Data.ArrayNum + -1;
        if (StructPrefix.Data.ArrayNum == 0) {
          iVar21 = 0;
        }
        ::FString::RightChop(&FStack_298,&FStack_178,iVar21);
        if (FStack_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_298.Data.AllocatorInstance.Data);
        }
        FStack_298.Data.AllocatorInstance.Data = FStack_178.Data.AllocatorInstance.Data;
        FStack_188.Data.ArrayMax = FStack_178.Data.ArrayMax;
        FStack_188.Data.ArrayNum = FStack_178.Data.ArrayNum;
        goto LAB_14a0d9d6c;
      }
    }
    pFVar8 = (FRigVMFunction *)0x0;
    FCoreRedirectObjectName::FCoreRedirectObjectName(&FStack_b0,&FStack_298);
    TStack_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_250.ArrayNum = 0;
    TStack_250.ArrayMax = 0;
    bVar4 = FCoreRedirects::GetMatchingRedirects
                      (Type_Struct,&FStack_b0,&TStack_250,AllowPartialMatch);
    if (bVar4) {
      iVar21 = TStack_250.ArrayNum;
      uVar14 = (ulonglong)TStack_250.ArrayNum;
      pFVar18 = TStack_250.AllocatorInstance.Data + uVar14 * 8;
      FVar20.Data = TStack_250.AllocatorInstance.Data;
      do {
        if ((int)uVar14 != iVar21) {
          `TCheckedPointerIterator<FCoreRedirect_const_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStack_288);
        }
        if (FVar20.Data == pFVar18) break;
        ::FName::ToString((FName *)(*(longlong *)FVar20.Data + 0x1c),&FStack_280);
        if (FStack_280.Data.ArrayNum == FStack_298.Data.ArrayNum) {
          if (1 < FStack_280.Data.ArrayNum) {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)FStack_280.Data.AllocatorInstance.Data,
                               (wchar_t *)FStack_298.Data.AllocatorInstance.Data);
            bVar4 = iVar5 == 0;
            goto LAB_14a0d9e15;
          }
        }
        else {
          bVar4 = FStack_280.Data.ArrayNum + FStack_298.Data.ArrayNum == 1;
LAB_14a0d9e15:
          if (!bVar4) {
            if (bVar3) {
              ::FString::ConcatCF(&FStack_1f8,FRigVMDispatchFactory::DispatchPrefix,&FStack_280);
              if ((FRigVMFunction *)FStack_280.Data.AllocatorInstance.Data != (FRigVMFunction *)0x0)
              {
                FMemory::Free(FStack_280.Data.AllocatorInstance.Data);
              }
              FStack_280.Data.AllocatorInstance.Data = FStack_1f8.Data.AllocatorInstance.Data;
              FStack_280.Data.ArrayNum = FStack_1f8.Data.ArrayNum;
              FStack_280.Data.ArrayMax = FStack_1f8.Data.ArrayMax;
              FStack_1f8.Data.ArrayNum = 0;
              FStack_1f8.Data.ArrayMax = 0;
              FStack_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar8;
            }
            else {
              ::FString::ConcatFF(&FStack_1e8,&StructPrefix,&FStack_280);
              if ((FRigVMFunction *)FStack_280.Data.AllocatorInstance.Data != (FRigVMFunction *)0x0)
              {
                FMemory::Free(FStack_280.Data.AllocatorInstance.Data);
              }
              FStack_280.Data.AllocatorInstance.Data = FStack_1e8.Data.AllocatorInstance.Data;
              FStack_280.Data.ArrayNum = FStack_1e8.Data.ArrayNum;
              FStack_280.Data.ArrayMax = FStack_1e8.Data.ArrayMax;
              FStack_1e8.Data.ArrayNum = 0;
              FStack_1e8.Data.ArrayMax = 0;
              FStack_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar8;
            }
            pcVar1 = *(code **)(this->_padding_ + 0x160);
            ::FString::ConcatFC(&FStack_108,&FStack_280,L"::");
            ::FString::ConcatFF(&FStack_168,&FStack_108,&FStack_218);
            FVar17.Data = (FScriptContainerElement *)L"";
            if (FStack_168.Data.ArrayNum != 0) {
              FVar17.Data = FStack_168.Data.AllocatorInstance.Data;
            }
            pFVar8 = (FRigVMFunction *)(*pcVar1)(this,FVar17.Data,param_2);
            if (FStack_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_168.Data.AllocatorInstance.Data);
            }
            if (FStack_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_108.Data.AllocatorInstance.Data);
            }
            if (pFVar8 != (FRigVMFunction *)0x0) goto LAB_14a0d9f3d;
          }
        }
        if ((FRigVMFunction *)FStack_280.Data.AllocatorInstance.Data != (FRigVMFunction *)0x0) {
          FMemory::Free(FStack_280.Data.AllocatorInstance.Data);
        }
        uVar14 = TStack_250._8_8_ & 0xffffffff;
        FVar20.Data = FVar20.Data + 8;
      } while( true );
    }
    if (TStack_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_250.AllocatorInstance.Data);
    }
  }
  pFVar8 = (FRigVMFunction *)0x0;
LAB_14a0d9faa:
  if (FStack_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_218.Data.AllocatorInstance.Data);
  }
  if (FStack_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_298.Data.AllocatorInstance.Data);
  }
  if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
  }
  return pFVar8;
joined_r0x00014a0d987c:
  if (pFVar13 == pFVar6) goto LAB_14a0d9894;
  if (*pFVar13 == FStack_1d8) {
    if (auStack_98._8_4_ != iStack_64) {
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                        *)auStack_98);
      uVar2 = auStack_98._8_8_;
      auStack_98._8_8_ = auStack_98._8_8_ & 0xffffffff00000000;
      if ((longlong)uVar2 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,0,(ForAnyElementType *)auStack_98,0,(int *)(auStack_98 + 0xc));
      }
      uStack_68 = 0xffffffff;
      iStack_64 = 0;
      uStack_70 = 0;
    }
    if (FStack_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_260.Data.AllocatorInstance.Data);
    }
    if (FStack_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_208.Data.AllocatorInstance.Data);
    }
    goto LAB_14a0d9a82;
  }
  pFVar13 = pFVar13 + 1;
  goto joined_r0x00014a0d987c;
LAB_14a0d9894:
  (**(code **)(*(longlong *)this->_padding_ + 0x100))();
  if (iStack_220 == -1) {
    bVar3 = RigVMTypeUtils::RequiresCPPTypeObject(&FStack_260);
    if (bVar3) {
      pUStack_1c8 = RigVMTypeUtils::ObjectFromCPPType(&FStack_260,true,param_2);
      FStack_1d0 = FStack_1d8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_1c8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUStack_1c8);
      }
      ::FName::ToString(&FStack_1d0,&FStack_128);
      pFVar9 = RigVMTypeUtils::PostProcessCPPType
                         (aFStack_d0,&FStack_128,pUStack_1c8,(FRigVMUserDefinedTypeResolver *)0x0);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&FStack_1ac,pwVar16);
      FStack_1d0 = FStack_1ac;
      if (aFStack_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_d0[0].Data.AllocatorInstance.Data);
      }
      if (FStack_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_128.Data.AllocatorInstance.Data);
      }
      puVar10 = (undefined8 *)(**(code **)(*(longlong *)this->_padding_ + 0xc0))();
      uStack_228 = *puVar10;
      iStack_220 = *(int *)(puVar10 + 1);
    }
    if (iStack_220 == -1) goto LAB_14a0d99cc;
  }
  pFStack_118 = pFVar18 + 4;
  puStack_110 = &uStack_228;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_>
            ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              *)auStack_98,(TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)auStack_240,
             (bool *)&pFStack_118);
LAB_14a0d99cc:
  if (FStack_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_260.Data.AllocatorInstance.Data);
  }
  if (FStack_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_208.Data.AllocatorInstance.Data);
  }
  if (FStack_270.Data.ArrayNum < 2) goto LAB_14a0d9a82;
  goto LAB_14a0d9730;
LAB_14a0d9f3d:
  ::FName::FName(&FStack_198,pwStack_1a0);
  pFStack_f8 = &FStack_198;
  piStack_f0 = &pFVar8->Index;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_const_&>_>
            (pTStack_190,(TPairInitializer<FName_&&,int_const_&> *)auStack_1c0,(bool *)&pFStack_f8);
  if ((FRigVMFunction *)FStack_280.Data.AllocatorInstance.Data != (FRigVMFunction *)0x0) {
    FMemory::Free(FStack_280.Data.AllocatorInstance.Data);
  }
  if (TStack_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_250.AllocatorInstance.Data);
  }
  goto LAB_14a0d9faa;
}

// FindOrAddDispatchFactory_NoLock @ 14a0dadb0

FRigVMDispatchFactory * __thiscall
FRigVMRegistry_RWLock::FindOrAddDispatchFactory_NoLock
          (FRigVMRegistry_RWLock *this,UScriptStruct *param_1)

{
  FRigVMDispatchFactory *pFVar1;
  FRigVMTemplateArgumentInfo *local_18;
  undefined8 local_10;
  
  local_18 = (FRigVMTemplateArgumentInfo *)0x0;
  local_10 = 0;
  pFVar1 = (FRigVMDispatchFactory *)(**(code **)(this->_padding_ + 0x38))(this,param_1,&local_18);
  DestructItems<FRigVMTemplateArgumentInfo,int>(local_18,(int)local_10);
  if (local_18 != (FRigVMTemplateArgumentInfo *)0x0) {
    FMemory::Free(local_18);
  }
  return pFVar1;
}

// FindOrAddSingletonDispatchFunction_NoLock @ 14a0db1b0

FString * __thiscall
FRigVMRegistry_RWLock::FindOrAddSingletonDispatchFunction_NoLock
          (FRigVMRegistry_RWLock *this,FString *__return_storage_ptr__,UScriptStruct *param_1)

{
  FRigVMRegistry_NoLock::FindOrAddSingletonDispatchFunction_NoLock
            ((FRigVMRegistry_NoLock *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FindOrAddType_NoLock @ 14a0dd430

TRigVMTypeIndex * __thiscall
FRigVMRegistry_RWLock::FindOrAddType_NoLock
          (FRigVMRegistry_RWLock *this,TRigVMTypeIndex *__return_storage_ptr__,
          FRigVMTemplateArgumentType *param_1,bool param_2)

{
  FRigVMRegistry_NoLock::FindOrAddType_NoLock
            ((FRigVMRegistry_NoLock *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// FindTemplate_NoLock @ 14a0de2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FRigVMTemplate * __thiscall
FRigVMRegistry_RWLock::FindTemplate_NoLock(FRigVMRegistry_RWLock *this,FName *param_1,bool param_2)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TTuple<FName,int> *pTVar6;
  FRigVMTemplate *pFVar7;
  UScriptStruct *pUVar8;
  FRigVMDispatchFactory *pFVar9;
  FName FVar10;
  FRigVMTemplate *pFVar11;
  size_t sVar12;
  FString *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong *puVar17;
  FScriptContainerElement *pFVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  ulonglong uVar21;
  FRigVMTemplate *pFVar22;
  undefined1 auStackY_2f8 [32];
  FString FStack_2b0;
  FString FStack_2a0;
  FString FStack_290;
  FString FStack_280;
  FName FStack_270;
  FName FStack_268;
  FString FStack_260;
  initializer_list<TPairInitializer<FString_const_&,FString_const_&>_> iStack_248;
  FString FStack_238;
  FString FStack_228;
  FString FStack_218;
  TPairInitializer<FString_const_&,FString_const_&> TStack_208;
  FString *pFStack_1f8;
  FString *pFStack_1f0;
  TPairInitializer<FString_const_&,FString_const_&> TStack_1e8;
  FString FStack_1d8;
  FString FStack_1c8;
  FString FStack_1b8;
  undefined1 auStack_1a8 [32];
  FString FStack_188;
  FString FStack_178;
  FString FStack_168;
  FString FStack_158;
  FString FStack_148;
  FString FStack_138;
  FString FStack_128;
  FString FStack_118;
  FString FStack_108;
  FString FStack_f8;
  FString FStack_e8;
  FString FStack_d8;
  FString FStack_c8;
  FString FStack_b8;
  FString FStack_a8;
  FString FStack_98;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  ulonglong auStack_48 [2];
  
  auStack_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  if (*param_1 == (FName)0x0) {
    return (FRigVMTemplate *)0x0;
  }
  pTVar6 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->_padding_,*param_1);
  pFVar11 = (FRigVMTemplate *)0x0;
  pFVar7 = (FRigVMTemplate *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<FName,int> *)0x0) {
    pFVar7 = pFVar11;
  }
  if (pFVar7 != (FRigVMTemplate *)0x0) {
    pFVar7 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                       ((TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)
                        &this->_padding_,
                        *(int *)&((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->Index)->
                                 AllocatorInstance);
    if (pFVar7->Notation != (FName)0x0) {
      return pFVar7;
    }
    return (FRigVMTemplate *)0x0;
  }
  ::FName::ToString(param_1,&FStack_218);
  FStack_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_2a0.Data.ArrayNum = 0;
  FStack_2a0.Data.ArrayMax = 0;
  FStack_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_280.Data.ArrayNum = 0;
  FStack_280.Data.ArrayMax = 0;
  ::FString::FString(&FStack_260,L"(");
  bVar3 = ::FString::Split(&FStack_218,&FStack_260,&FStack_2a0,&FStack_280);
  if (FStack_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_260.Data.AllocatorInstance.Data);
  }
  uVar21 = (ulonglong)_tls_index;
  if (bVar3) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&FStack_228,L"Equals::Execute");
      pcVar2 = *(code **)(this->_padding_ + 0x198);
      pUVar8 = FRigVMDispatch_CoreEquals::StaticStruct();
      pFVar9 = (FRigVMDispatchFactory *)(*pcVar2)(this,pUVar8);
      FVar10 = FRigVMDispatchFactory::GetFactoryName(pFVar9);
      TStack_208.Value = ::FName::ToString((FName *)FVar10,&FStack_1c8);
      TStack_208.Key = &FStack_228;
      ::FString::FString(&FStack_238,L"NotEquals::Execute");
      pcVar2 = *(code **)(this->_padding_ + 0x198);
      pUVar8 = FRigVMDispatch_CoreNotEquals::StaticStruct();
      pFVar9 = (FRigVMDispatchFactory *)(*pcVar2)(this,pUVar8);
      FVar10 = FRigVMDispatchFactory::GetFactoryName(pFVar9);
      pFStack_1f0 = ::FName::ToString((FName *)FVar10,&FStack_1d8);
      pFStack_1f8 = &FStack_238;
      iStack_248._First = &TStack_208;
      iStack_248._Last = &TStack_1e8;
      TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
      TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                (&CoreDispatchMap,&iStack_248);
      if (FStack_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1d8.Data.AllocatorInstance.Data);
      }
      if (FStack_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_238.Data.AllocatorInstance.Data);
      }
      if (FStack_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1c8.Data.AllocatorInstance.Data);
      }
      if (FStack_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_228.Data.AllocatorInstance.Data);
      }
      atexit(`FRigVMRegistry_NoLock::FindTemplate_NoLock'::__l14::
             _dynamic_atexit_destructor_for__CoreDispatchMap__);
      _Init_thread_footer(&::_TSS0);
    }
    uVar4 = FStack_2a0.Data.ArrayNum - 1;
    FVar14.Data = FStack_2a0.Data.AllocatorInstance.Data;
    if (FStack_2a0.Data.ArrayNum == 0) {
      uVar4 = 0;
      FVar14.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar4,(wchar_t *)FVar14.Data);
    iVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&CoreDispatchMap,uVar4,&FStack_2a0);
    if (iVar5 != -1) {
      lVar16 = CoreDispatchMap._0_8_ + (longlong)iVar5 * 0x28;
      pFVar7 = (FRigVMTemplate *)(lVar16 + 0x10);
      if (lVar16 == 0) {
        pFVar7 = pFVar11;
      }
      if (pFVar7 != (FRigVMTemplate *)0x0) {
        ::FString::operator=(&FStack_2a0,(FString *)pFVar7);
      }
    }
    FVar14.Data = (FScriptContainerElement *)L"";
    if (FStack_2a0.Data.ArrayNum != 0) {
      FVar14.Data = FStack_2a0.Data.AllocatorInstance.Data;
    }
    pcVar2 = *(code **)(this->_padding_ + 400);
    ::FName::FName(&FStack_270,(wchar_t *)FVar14.Data);
    pFVar9 = (FRigVMDispatchFactory *)(*pcVar2)(this,&FStack_270);
    if (pFVar9 != (FRigVMDispatchFactory *)0x0) {
      pFVar11 = FRigVMDispatchFactory::GetTemplate_NoLock
                          (pFVar9,(FRigVMRegistryHandle *)&this->_padding_);
      goto LAB_14a0de27a;
    }
  }
  if (param_2) {
    pTVar6 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
             Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)&this->_padding_,*param_1);
    pFVar7 = (FRigVMTemplate *)&pTVar6->field_0x8;
    if (pTVar6 == (TTuple<FName,int> *)0x0) {
      pFVar7 = pFVar11;
    }
    if (pFVar7 != (FRigVMTemplate *)0x0) {
      pFVar11 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                          ((TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_,
                           *(int *)&((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->Index)
                                    ->AllocatorInstance);
      goto LAB_14a0de27a;
    }
  }
  ::FName::ToString(param_1,&FStack_290);
  FVar14.Data = FStack_290.Data.AllocatorInstance.Data;
  FStack_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = FStack_290.Data.ArrayNum;
  FStack_2b0.Data.ArrayNum = iVar5;
  if (iVar5 == 0) {
    FStack_2b0.Data.ArrayMax = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,(ForAnyElementType *)&FStack_2b0,iVar5,&FStack_2b0.Data.ArrayMax);
    memcpy(FStack_2b0.Data.AllocatorInstance.Data,FVar14.Data,(longlong)iVar5 * 2);
    iVar5 = FStack_290.Data.ArrayNum;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x9d4c) < ::_TSS1)
  {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FString::FString((FString *)auStack_1a8,
                         L"FRigUnit_SequenceExecution::Execute(in ExecuteContext,out A,out B,out C,out D)"
                        );
      ::FString::FString((FString *)(auStack_1a8 + 0x10),L"FRigUnit_SequenceExecution::Execute()");
      ::FString::FString(&FStack_188,
                         L"FRigUnit_SequenceAggregate::Execute(in ExecuteContext,out A,out B)");
      ::FString::FString(&FStack_178,L"FRigUnit_SequenceAggregate::Execute()");
      ::FString::FString(&FStack_168,L",io ExecuteContext");
      ::FString::FString(&FStack_158,L"");
      ::FString::FString(&FStack_148,L"io ExecuteContext,");
      ::FString::FString(&FStack_138,L"");
      ::FString::FString(&FStack_128,L"(io ExecuteContext)");
      ::FString::FString(&FStack_118,L"()");
      ::FString::FString(&FStack_108,L",out ExecuteContext");
      ::FString::FString(&FStack_f8,L"");
      ::FString::FString(&FStack_e8,L"out ExecuteContext,");
      ::FString::FString(&FStack_d8,L"");
      ::FString::FString(&FStack_c8,L"(out ExecuteContext)");
      ::FString::FString(&FStack_b8,L"()");
      ::FString::FString(&FStack_a8,L",out Completed");
      ::FString::FString(&FStack_98,L"");
      ::FString::FString(&FStack_88,L"out Completed,");
      ::FString::FString(&FStack_78,L"");
      ::FString::FString(&FStack_68,L"(out Completed)");
      ::FString::FString(&FStack_58,L"()");
      lVar16 = 0xb;
      ExecuteContextArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ExecuteContextArgs.ArrayNum = 0xb;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0xb,0,&ExecuteContextArgs.AllocatorInstance,0xb,&ExecuteContextArgs.ArrayMax
                );
      ConstructItems<TTuple<FString,FString>,TTuple<FString,FString>,int>
                (ExecuteContextArgs.AllocatorInstance.Data,(TTuple<FString,FString> *)auStack_1a8,
                 0xb);
      puVar17 = auStack_48;
      do {
        puVar1 = puVar17 + -2;
        puVar17 = puVar17 + -4;
        lVar16 = lVar16 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
        if ((void *)*puVar17 != (void *)0x0) {
          FMemory::Free((void *)*puVar17);
        }
      } while (lVar16 != 0);
      atexit(`FRigVMRegistry_NoLock::FindTemplate_NoLock'::__l27::
             _dynamic_atexit_destructor_for__ExecuteContextArgs__);
      _Init_thread_footer(&::_TSS1);
    }
    iVar5 = FStack_290.Data.ArrayNum;
  }
  pFVar7 = pFVar11;
  pFVar22 = pFVar11;
  if (0 < ExecuteContextArgs.ArrayNum) {
    do {
      uVar15 = (uint)pFVar7;
      uVar4 = 0;
      if ((int)uVar15 < ExecuteContextArgs.ArrayNum) {
        uVar4 = ~uVar15 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FRigVMTemplate *)(*pcVar2)();
        return pFVar7;
      }
      pFVar18 = ExecuteContextArgs.AllocatorInstance.Data + (longlong)pFVar22;
      if (*(int *)(pFVar18 + 8) == 0) {
        pwVar20 = L"";
LAB_14a0de13c:
        sVar12 = wcslen(pwVar20);
        iVar5 = ::FString::Find(&FStack_2b0,pwVar20,(int)sVar12,IgnoreCase,FromStart,-1);
        if (iVar5 != -1) {
          if (*(int *)(pFVar18 + 0x18) == 0) {
            pwVar20 = L"";
          }
          else {
            pwVar20 = *(wchar_t **)(pFVar18 + 0x10);
          }
          if (*(int *)(pFVar18 + 8) == 0) {
            pwVar19 = L"";
          }
          else {
            pwVar19 = *(wchar_t **)pFVar18;
          }
          pFVar13 = ::FString::Replace(&FStack_2b0,&FStack_1b8,pwVar19,pwVar20,IgnoreCase);
          if (&FStack_2b0 != pFVar13) {
            if (FStack_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_2b0.Data.AllocatorInstance.Data);
            }
            FStack_2b0.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
            (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FStack_2b0.Data.ArrayNum = (pFVar13->Data).ArrayNum;
            FStack_2b0.Data.ArrayMax = (pFVar13->Data).ArrayMax;
            (pFVar13->Data).ArrayNum = 0;
            (pFVar13->Data).ArrayMax = 0;
          }
          if (FStack_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_1b8.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pwVar20 = *(wchar_t **)pFVar18;
        if (pwVar20 != (wchar_t *)0x0) goto LAB_14a0de13c;
      }
      pFVar7 = (FRigVMTemplate *)(ulonglong)(uVar15 + 1);
      pFVar22 = (FRigVMTemplate *)&pFVar22->ExecuteArguments;
    } while ((int)(uVar15 + 1) < ExecuteContextArgs.ArrayNum);
    iVar5 = FStack_290.Data.ArrayNum;
  }
  if (FStack_2b0.Data.ArrayNum == iVar5) {
    if (1 < FStack_2b0.Data.ArrayNum) {
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)FStack_2b0.Data.AllocatorInstance.Data,
                         (wchar_t *)FStack_290.Data.AllocatorInstance.Data);
      bVar3 = iVar5 == 0;
      goto LAB_14a0de221;
    }
  }
  else {
    bVar3 = FStack_2b0.Data.ArrayNum + iVar5 == 1;
LAB_14a0de221:
    if (!bVar3) {
      FVar14.Data = (FScriptContainerElement *)L"";
      if (FStack_2b0.Data.ArrayNum != 0) {
        FVar14.Data = FStack_2b0.Data.AllocatorInstance.Data;
      }
      pcVar2 = *(code **)(this->_padding_ + 0x170);
      ::FName::FName(&FStack_268,(wchar_t *)FVar14.Data);
      pFVar11 = (FRigVMTemplate *)(*pcVar2)(this,&FStack_268,param_2);
    }
  }
  if (FStack_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b0.Data.AllocatorInstance.Data);
  }
  if (FStack_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_290.Data.AllocatorInstance.Data);
  }
LAB_14a0de27a:
  if (FStack_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_280.Data.AllocatorInstance.Data);
  }
  if (FStack_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a0.Data.AllocatorInstance.Data);
  }
  if (FStack_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_218.Data.AllocatorInstance.Data);
  }
  return pFVar11;
}

// FindTypeFromCPPType_NoLock @ 14a0de450

FRigVMTemplateArgumentType * __thiscall
FRigVMRegistry_RWLock::FindTypeFromCPPType_NoLock(FRigVMRegistry_RWLock *this,FString *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FRigVMTemplateArgumentType *pFVar5;
  FLazyName *this_00;
  TObjectPtr<UObject>_u_0 TVar6;
  uint uVar7;
  FName local_res8;
  undefined1 local_18 [16];
  
  lVar4 = (**(code **)(this->_padding_ + 0x100))(this,local_18,param_1);
  uVar1 = *(uint *)(lVar4 + 8);
  if ((-1 < (int)uVar1) && ((int)uVar1 < (int)this->_padding_)) {
    uVar7 = 0;
    if ((int)uVar1 < (int)this->_padding_) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRigVMTemplateArgumentType *)(*pcVar2)();
        return pFVar5;
      }
    }
    return (FRigVMTemplateArgumentType *)((longlong)(int)uVar1 * 0x30 + this->_padding_);
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3262262746346944794>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                     ,0x6e6,"Types.IsValidIndex(TypeIndex)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRigVMTemplateArgumentType *)(*pcVar2)();
    return pFVar5;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      EmptyType.CPPType.ComparisonIndex.Value = 0;
      EmptyType.CPPType.Number = 0;
      EmptyType.CPPTypeObject.field0_0x0 = (TObjectPtr<UObject>_u_0)(FObjectPtr)0x0;
      this_00 = RigVMTypeUtils::GetWildCardCPPTypeName();
      FLazyName::Resolve(this_00);
      EmptyType.CPPType = local_res8;
      TVar6.DebugPtr = (UObject *)RigVMTypeUtils::GetWildCardCPPTypeObject();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar6.DebugPtr);
      }
      EmptyType.CPPTypeObject.field0_0x0 =
           (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar6.DebugPtr;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyType;
}

// Get @ 14a0df080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRigVMRegistry_RWLock * __cdecl FRigVMRegistry_RWLock::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FRigVMRegistry_RWLock *pFVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FRigVMRegistry_NoLock::FRigVMRegistry_NoLock((FRigVMRegistry_NoLock *)&s_RigVMRegistry,true);
      s_RigVMRegistry._padding_ = (longlong)&___7FRigVMRegistry_RWLock__6B_;
      s_RigVMRegistry.LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      s_RigVMRegistry.Lock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
      s_RigVMRegistry.LockCount = (atomic<int>)0x0;
      s_RigVMRegistry.WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      s_RigVMRegistry.OnRigVMRegistryChangedDelegate._0_8_ = 0;
      s_RigVMRegistry.OnRigVMRegistryChangedDelegate._8_8_ = 0;
      s_RigVMRegistry.OnRigVMRegistryChangedDelegate._16_8_ =
           ___xmm_00000000000000020000000000000000;
      s_RigVMRegistry.OnRigVMRegistryChangedDelegate._24_8_ = _UNK_150631d48;
      AcquireSRWLockExclusive((PSRWLOCK)&s_RigVMRegistry.Lock);
      s_RigVMRegistry.WriteLockOwnerThread = (atomic<unsigned_int>)GetCurrentThreadId();
      LOCK();
      UNLOCK();
      LOCK();
      UNLOCK();
      if (s_RigVMRegistry.LockCount == (atomic<int>)0x0) {
        LOCK();
        s_RigVMRegistry.LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
        UNLOCK();
        s_RigVMRegistry.LockCount = (atomic<int>)((int)s_RigVMRegistry.LockCount + 1);
      }
      else {
        s_RigVMRegistry.LockCount = (atomic<int>)((int)s_RigVMRegistry.LockCount + 1);
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x249,"DesiredLockType != LockType_Write");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FRigVMRegistry_RWLock *)(*pcVar1)();
          return pFVar3;
        }
      }
      Initialize_NoLock(&s_RigVMRegistry);
      LOCK();
      UNLOCK();
      if (s_RigVMRegistry.LockCount == (atomic<int>)0x1) {
        LOCK();
        s_RigVMRegistry.LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
        UNLOCK();
        s_RigVMRegistry.LockCount = (atomic<int>)((int)s_RigVMRegistry.LockCount + -1);
      }
      else {
        s_RigVMRegistry.LockCount = (atomic<int>)((int)s_RigVMRegistry.LockCount + -1);
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FRigVMRegistry_RWLock *)(*pcVar1)();
          return pFVar3;
        }
      }
      LOCK();
      s_RigVMRegistry.WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&s_RigVMRegistry.Lock);
      atexit(`FRigVMRegistry_RWLock::Get'::__l2::_dynamic_atexit_destructor_for__s_RigVMRegistry__);
      _Init_thread_footer(&::_TSS0);
      return &s_RigVMRegistry;
    }
  }
  return &s_RigVMRegistry;
}

// GetArrayDimensionsForType_NoLock @ 14a0e13e0

int __thiscall
FRigVMRegistry_RWLock::GetArrayDimensionsForType_NoLock
          (FRigVMRegistry_RWLock *this,TRigVMTypeIndex *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar1 = param_1->Index;
  if (((int)uVar1 < 0) || ((int)this->_padding_ <= (int)uVar1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3262262746346944651>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0x775,"Types.IsValidIndex(InTypeIndex)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  else {
    uVar5 = 0;
    if ((int)uVar1 < (int)this->_padding_) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    lVar7 = (longlong)(int)uVar1;
    lVar2 = this->_padding_;
    if (*(char *)(lVar2 + 0x28 + lVar7 * 0x30) != '\0') {
      local_18 = *(undefined8 *)(lVar2 + 0x10 + lVar7 * 0x30);
      local_10 = *(undefined4 *)(lVar2 + 0x18 + lVar7 * 0x30);
      iVar6 = (**(code **)(this->_padding_ + 0x120))(this,&local_18);
      return iVar6 + 1;
    }
  }
  return 0;
}

// GetArrayTypeFromBaseTypeIndex_NoLock @ 14a0e1840

TRigVMTypeIndex * __thiscall
FRigVMRegistry_RWLock::GetArrayTypeFromBaseTypeIndex_NoLock
          (FRigVMRegistry_RWLock *this,TRigVMTypeIndex *__return_storage_ptr__,
          TRigVMTypeIndex *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TRigVMTypeIndex *pTVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  FName local_res8;
  FName local_48;
  uint local_40;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_40 = param_1->Index;
  lVar8 = (longlong)(int)local_40;
  local_48 = param_1->Name;
  if (((int)local_40 < 0) || (iVar1 = (int)this->_padding_, iVar1 <= (int)local_40)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3262262746346944562>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0x7ce,"Types.IsValidIndex(InTypeIndex)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TRigVMTypeIndex *)(*pcVar2)();
      return pTVar5;
    }
    (__return_storage_ptr__->Name).ComparisonIndex = 0;
    (__return_storage_ptr__->Name).Number = 0;
    __return_storage_ptr__->Index = -1;
  }
  else {
    uVar4 = 0;
    if ((int)local_40 < iVar1) {
      uVar4 = ~local_40 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TRigVMTypeIndex *)(*pcVar2)();
      return pTVar5;
    }
    local_38.Data.AllocatorInstance.Data =
         *(FScriptContainerElement **)(this->_padding_ + 0x1c + lVar8 * 0x30);
    iVar1 = *(int *)(this->_padding_ + 0x24 + lVar8 * 0x30);
    if (local_48 != (FName)0x0) {
      pFVar6 = ::FName::ToString(&local_48,&local_18);
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      RigVMStringUtils::JoinStrings(&local_28,&local_38,pFVar6,L"TArray<",(wchar_t *)0x0,L">");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar7.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_res8;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Name = (FName)local_38.Data.AllocatorInstance.Data;
    __return_storage_ptr__->Index = iVar1;
  }
  return __return_storage_ptr__;
}

// GetBaseTypeFromArrayTypeIndex_NoLock @ 14a0e1db0

TRigVMTypeIndex * __thiscall
FRigVMRegistry_RWLock::GetBaseTypeFromArrayTypeIndex_NoLock
          (FRigVMRegistry_RWLock *this,TRigVMTypeIndex *__return_storage_ptr__,
          TRigVMTypeIndex *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TRigVMTypeIndex *pTVar5;
  FString *this_00;
  uint uVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  int iVar9;
  FName local_res8;
  FName local_48;
  uint local_40;
  FName local_38;
  FString local_28;
  FString local_18;
  
  local_40 = param_1->Index;
  lVar8 = (longlong)(int)local_40;
  local_48 = param_1->Name;
  if (((int)local_40 < 0) || (iVar1 = (int)this->_padding_, iVar1 <= (int)local_40)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3262262746346944544>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0x7e0,"Types.IsValidIndex(InTypeIndex)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TRigVMTypeIndex *)(*pcVar3)();
      return pTVar5;
    }
    (__return_storage_ptr__->Name).ComparisonIndex = 0;
    (__return_storage_ptr__->Name).Number = 0;
    __return_storage_ptr__->Index = -1;
  }
  else {
    uVar6 = 0;
    if ((int)local_40 < iVar1) {
      uVar6 = ~local_40 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TRigVMTypeIndex *)(*pcVar3)();
      return pTVar5;
    }
    local_38 = *(FName *)(this->_padding_ + 0x10 + lVar8 * 0x30);
    iVar1 = *(int *)(this->_padding_ + 0x18 + lVar8 * 0x30);
    if (local_48 != (FName)0x0) {
      this_00 = ::FName::ToString(&local_48,&local_18);
      iVar2 = (this_00->Data).ArrayNum;
      iVar9 = iVar2 + -9;
      if (iVar2 == 0) {
        iVar9 = -8;
      }
      ::FString::Mid(this_00,&local_28,7,iVar9);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar7.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
      local_38 = local_res8;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Name = local_38;
    __return_storage_ptr__->Index = iVar1;
  }
  return __return_storage_ptr__;
}

// GetCompatibleTypes_NoLock @ 14a0e2cb0

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMRegistry_RWLock::GetCompatibleTypes_NoLock
          (FRigVMRegistry_RWLock *this,TRigVMTypeIndex *param_1)

{
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar1;
  TRigVMTypeIndex local_18 [2];
  
  local_18[0].Name = param_1->Name;
  local_18[0].Index = param_1->Index;
  pTVar1 = FRigVMRegistry_NoLock::GetCompatibleTypes_NoLock((FRigVMRegistry_NoLock *)this,local_18);
  return pTVar1;
}

// GetFactories_NoLock @ 14a0e5050

TArray<FRigVMDispatchFactory_*,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMRegistry_RWLock::GetFactories_NoLock(FRigVMRegistry_RWLock *this)

{
  return (TArray<FRigVMDispatchFactory_*,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetFunctions_NoLock @ 14a0e6490

TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMRegistry_RWLock::GetFunctions_NoLock(FRigVMRegistry_RWLock *this)

{
  return (TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetHashForEnum_NoLock @ 14a0e6990

uint __thiscall
FRigVMRegistry_RWLock::GetHashForEnum_NoLock
          (FRigVMRegistry_RWLock *this,UEnum *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TTuple<FName,__int64> *pTVar7;
  FText *this_00;
  FString *pFVar8;
  int iVar9;
  wchar_t *pwVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FName FStackX_20;
  FName FStack_78;
  undefined8 uStack_70;
  int iStack_68;
  undefined8 uStack_58;
  int iStack_50;
  FString FStack_48;
  longlong *aplStack_38 [2];
  TTuple<FName,__int64> TStack_28;
  
  if (param_2) {
    pcVar2 = *(code **)(this->_padding_ + 0xd8);
    if ((param_1->CppType).Data.ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(param_1->CppType).Data.AllocatorInstance.Data;
    }
    ::FName::FName(&FStackX_20,pwVar10);
    (*pcVar2)(this,&uStack_70,&FStackX_20,param_1);
    if (iStack_68 != -1) {
      iStack_50 = iStack_68;
      uStack_58 = uStack_70;
      uVar5 = (**(code **)(this->_padding_ + 0x1b8))(this,&uStack_58);
      return uVar5;
    }
  }
  FStack_78 = (FName)param_1->_padding_;
  ::FName::ToString(&FStack_78,&FStack_48);
  iVar9 = FStack_48.Data.ArrayNum + -1;
  FVar3.Data = FStack_48.Data.AllocatorInstance.Data;
  if (FStack_48.Data.ArrayNum == 0) {
    iVar9 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar3.Data);
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  iVar9 = (param_1->Names).NumValues;
  iVar12 = 0;
  if (0 < iVar9) {
    do {
      if (((iVar12 < 0) || (iVar9 <= iVar12)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Names.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xb2d,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      pTVar7 = UEnum::FNameData::operator[](&param_1->Names,&TStack_28,iVar12);
      uVar13 = (int)((ulonglong)*(undefined8 *)&pTVar7->field_0x8 >> 0x20) * 0x17 +
               (int)*(undefined8 *)&pTVar7->field_0x8;
      uVar11 = uVar5 - uVar13 ^ uVar13 >> 0xd;
      uVar5 = (-0x61c88647 - uVar11) - uVar13 ^ uVar11 << 8;
      uVar13 = (uVar13 - uVar5) - uVar11 ^ uVar5 >> 0xd;
      uVar11 = (uVar11 - uVar13) - uVar5 ^ uVar13 >> 0xc;
      uVar5 = (uVar5 - uVar11) - uVar13 ^ uVar11 << 0x10;
      uVar13 = (uVar13 - uVar5) - uVar11 ^ uVar5 >> 5;
      uVar11 = (uVar11 - uVar13) - uVar5 ^ uVar13 >> 3;
      uVar5 = (uVar5 - uVar11) - uVar13 ^ uVar11 << 10;
      this_00 = (FText *)(**(code **)(param_1->_padding_ + 0x2c0))(param_1,aplStack_38,iVar12);
      pFVar8 = FText::ToString(this_00);
      iVar1 = (pFVar8->Data).ArrayNum;
      iVar9 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar10 = L"";
        iVar9 = 0;
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
      uVar13 = ((uVar13 - uVar5) - uVar11 ^ uVar5 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
      uVar5 = (-0x61c88647 - uVar13) - uVar6 ^ uVar13 << 8;
      uVar11 = (uVar6 - uVar5) - uVar13 ^ uVar5 >> 0xd;
      uVar13 = (uVar13 - uVar11) - uVar5 ^ uVar11 >> 0xc;
      uVar5 = (uVar5 - uVar13) - uVar11 ^ uVar13 << 0x10;
      uVar11 = (uVar11 - uVar5) - uVar13 ^ uVar5 >> 5;
      uVar13 = (uVar13 - uVar11) - uVar5 ^ uVar11 >> 3;
      uVar5 = (uVar5 - uVar13) - uVar11 ^ uVar13 << 10;
      uVar5 = (uVar11 - uVar5) - uVar13 ^ uVar5 >> 0xf;
      if (aplStack_38[0] != (longlong *)0x0) {
        (**(code **)(*aplStack_38[0] + 0x10))();
      }
      iVar9 = (param_1->Names).NumValues;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar9);
  }
  return uVar5;
}

// GetHashForProperty_NoLock @ 14a0e6cc0

uint __thiscall
FRigVMRegistry_RWLock::GetHashForProperty_NoLock(FRigVMRegistry_RWLock *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  int iVar7;
  uint uVar8;
  wchar_t *pwStack_38;
  undefined8 uStack_30;
  FString FStack_28;
  FString FStack_18;
  
  bVar2 = IsThisNotNull(param_1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)&param_1->_padding_,&FStack_18);
  }
  else {
    ::FString::FString(&FStack_18,L"None");
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (FStack_18.Data.ArrayNum != 0) {
    FVar6.Data = FStack_18.Data.AllocatorInstance.Data;
  }
  iVar7 = 0;
  iVar5 = FStack_18.Data.ArrayNum + -1;
  if (FStack_18.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar6.Data);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (param_1 == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMTypeUtils.h"
                       ,0x1ca,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  pwStack_38 = (wchar_t *)0x0;
  uStack_30 = 0;
  (**(code **)(param_1->_padding_ + 0x68))(param_1,&FStack_28,&pwStack_38,0);
  iVar5 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&FStack_28,pwStack_38,iVar5);
  RigVMTypeUtils::CleanupCPPType(&FStack_28);
  if (pwStack_38 != (wchar_t *)0x0) {
    FMemory::Free(pwStack_38);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (FStack_28.Data.ArrayNum != 0) {
    iVar7 = FStack_28.Data.ArrayNum + -1;
    FVar6.Data = FStack_28.Data.AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar6.Data);
  uVar8 = uVar3 - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar8) - uVar4 ^ uVar8 << 8;
  uVar4 = (uVar4 - uVar3) - uVar8 ^ uVar3 >> 0xd;
  uVar8 = (uVar8 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar8) - uVar4 ^ uVar8 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar8 ^ uVar3 >> 5;
  uVar8 = (uVar8 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar8) - uVar4 ^ uVar8 << 10;
  uVar3 = (uVar4 - uVar3) - uVar8 ^ uVar3 >> 0xf;
  if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) != 0) {
    param_1 = (FProperty *)param_1[1]._padding_;
  }
  if (param_1 != (FProperty *)0x0) {
    if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0) {
      if (param_1 == (FProperty *)0x0) goto LAB_14a0e6c83;
      if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) == 0) {
        if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) == 0) goto LAB_14a0e6c83;
        uVar4 = (**(code **)(this->_padding_ + 0x1d0))(this,param_1[1]._padding_,1);
        uVar3 = uVar3 - uVar4 ^ uVar4 >> 0xd;
        uVar8 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
        uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 0xd;
        uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xc;
        uVar8 = (uVar8 - uVar4) - uVar3;
      }
      else {
        if (param_1[1]._padding_ == 0) goto LAB_14a0e6c83;
        uVar4 = (**(code **)(this->_padding_ + 0x1d0))(this,param_1[1]._padding_,1);
        uVar3 = uVar3 - uVar4 ^ uVar4 >> 0xd;
        uVar8 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
        uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 0xd;
        uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xc;
        uVar8 = (uVar8 - uVar3) - uVar4;
      }
    }
    else {
      uVar4 = (**(code **)(this->_padding_ + 0x1c8))(this,param_1[1]._padding_);
      uVar3 = uVar3 - uVar4 ^ uVar4 >> 0xd;
      uVar8 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
      uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 0xd;
      uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xc;
      uVar8 = (uVar8 - uVar3) - uVar4;
    }
    uVar8 = uVar8 ^ uVar3 << 0x10;
    uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 3;
    uVar8 = (uVar8 - uVar3) - uVar4 ^ uVar3 << 10;
    uVar3 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 0xf;
  }
LAB_14a0e6c83:
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return uVar3;
}

// GetHashForScriptStruct_NoLock @ 14a0e6e80

uint __thiscall
FRigVMRegistry_RWLock::GetHashForScriptStruct_NoLock
          (FRigVMRegistry_RWLock *this,UScriptStruct *param_1,bool param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  wchar_t *pwVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  FName FStackX_20;
  void *pvStack_28;
  int iStack_20;
  void *pvStack_18;
  int iStack_10;
  
  pwVar8 = L"";
  if (param_2) {
    pcVar1 = *(code **)(this->_padding_ + 0xd8);
    puVar4 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x388))(param_1,&pvStack_18,0);
    if (*(int *)(puVar4 + 1) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)*puVar4;
    }
    ::FName::FName(&FStackX_20,pwVar6);
    (*pcVar1)(this,&pvStack_28,&FStackX_20,param_1);
    if (pvStack_18 != (void *)0x0) {
      FMemory::Free(pvStack_18);
    }
    if (iStack_20 != -1) {
      iStack_10 = iStack_20;
      pvStack_18 = pvStack_28;
      uVar2 = (**(code **)(this->_padding_ + 0x1b8))(this,&pvStack_18);
      return uVar2;
    }
  }
  puVar4 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x388))(param_1,&pvStack_18,0);
  iVar5 = *(int *)(puVar4 + 1) + -1;
  if (*(int *)(puVar4 + 1) == 0) {
    iVar5 = 0;
  }
  else {
    pwVar8 = (wchar_t *)*puVar4;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
  if (pvStack_18 != (void *)0x0) {
    FMemory::Free(pvStack_18);
  }
  uVar3 = (**(code **)(this->_padding_ + 0x1c8))(this,param_1);
  uVar7 = uVar2 - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar7) - uVar3 ^ uVar7 << 8;
  uVar9 = (uVar3 - uVar2) - uVar7 ^ uVar2 >> 0xd;
  uVar3 = (uVar7 - uVar9) - uVar2 ^ uVar9 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar9 ^ uVar3 << 0x10;
  uVar7 = (uVar9 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar7) - uVar2 ^ uVar7 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 10;
  return (uVar7 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// GetHashForStruct_NoLock @ 14a0e7010

uint __thiscall
FRigVMRegistry_RWLock::GetHashForStruct_NoLock(FRigVMRegistry_RWLock *this,UStruct *param_1)

{
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FString *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  uint uVar8;
  TFieldIterator<FProperty> local_28;
  
  pFVar5 = UObjectBaseUtility::GetPathName
                     ((UObjectBaseUtility *)param_1,(FString *)&local_28,(UObject *)0x0);
  iVar6 = (pFVar5->Data).ArrayNum;
  if (iVar6 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    iVar6 = iVar6 + -1;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  if (local_28.Struct != (UStruct *)0x0) {
    FMemory::Free(local_28.Struct);
  }
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = param_1->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = true;
  local_28.bIncludeDeprecated = true;
  local_28.bIncludeInterface = false;
  local_28.Struct = param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  pFVar1 = (FProperty *)local_28.Field;
  while (pFVar1 != (FProperty *)0x0) {
    local_28.Field = (FField *)pFVar1;
    bVar2 = FRigVMRegistry_NoLock::IsAllowedType_NoLock((FRigVMRegistry_NoLock *)this,pFVar1);
    if (bVar2) {
      uVar4 = (**(code **)(this->_padding_ + 0x1d8))(this,pFVar1);
      uVar3 = uVar3 - uVar4 ^ uVar4 >> 0xd;
      uVar8 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
      uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 0xd;
      uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xc;
      uVar8 = (uVar8 - uVar3) - uVar4 ^ uVar3 << 0x10;
      uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 5;
      uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 3;
      uVar8 = (uVar8 - uVar3) - uVar4 ^ uVar3 << 10;
      uVar3 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 0xf;
    }
    local_28.Field = (FField *)pFVar1->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    pFVar1 = (FProperty *)local_28.Field;
  }
  return uVar3;
}

// GetHashForType_NoLock @ 14a0e7360

uint __thiscall
FRigVMRegistry_RWLock::GetHashForType_NoLock(FRigVMRegistry_RWLock *this,TRigVMTypeIndex *param_1)

{
  uint uVar1;
  TRigVMTypeIndex local_18 [2];
  
  local_18[0].Name = param_1->Name;
  local_18[0].Index = param_1->Index;
  uVar1 = FRigVMRegistry_NoLock::GetHashForType_NoLock((FRigVMRegistry_NoLock *)this,local_18);
  return uVar1;
}

// GetOrAddTemplateFromArguments_NoLock @ 14a0e96a0

FRigVMTemplate * __thiscall
FRigVMRegistry_RWLock::GetOrAddTemplateFromArguments_NoLock
          (FRigVMRegistry_RWLock *this,FName *param_1,
          TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *param_2,
          FRigVMTemplateDelegates *param_3)

{
  FRigVMTemplate *pFVar1;
  undefined1 local_res8 [8];
  
  FRigVMTemplateArgumentInfo::ComputeTemplateNotation
            ((FName)local_res8,
             (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)*param_1);
  pFVar1 = (FRigVMTemplate *)(**(code **)(this->_padding_ + 0x170))(this,local_res8,0);
  if (pFVar1 == (FRigVMTemplate *)0x0) {
    pFVar1 = (FRigVMTemplate *)(**(code **)(this->_padding_ + 0x188))(this,param_1,param_2,param_3);
  }
  return pFVar1;
}

// GetPredicatesForStruct_NoLock @ 14a0ea910

TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMRegistry_RWLock::GetPredicatesForStruct_NoLock(FRigVMRegistry_RWLock *this,FName *param_1)

{
  TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->_padding_,*param_1);
  return pTVar1;
}

// GetTemplates_NoLock @ 14a0ece10

TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMRegistry_RWLock::GetTemplates_NoLock(FRigVMRegistry_RWLock *this)

{
  return (TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetTypeIndexFromCPPType_NoLock @ 14a0f0a30

TRigVMTypeIndex * __thiscall
FRigVMRegistry_RWLock::GetTypeIndexFromCPPType_NoLock
          (FRigVMRegistry_RWLock *this,TRigVMTypeIndex *__return_storage_ptr__,FString *param_1)

{
  FRigVMRegistry_NoLock::GetTypeIndexFromCPPType_NoLock
            ((FRigVMRegistry_NoLock *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTypeIndex_NoLock @ 14a0f0b80

TRigVMTypeIndex * __thiscall
FRigVMRegistry_RWLock::GetTypeIndex_NoLock
          (FRigVMRegistry_RWLock *this,TRigVMTypeIndex *__return_storage_ptr__,
          FRigVMTemplateArgumentType *param_1)

{
  TRigVMTypeIndex *pTVar1;
  
  pTVar1 = TMapBase<FRigVMTemplateArgumentType,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>_>
           ::Find((TMapBase<FRigVMTemplateArgumentType,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>_>
                   *)&this->_padding_,param_1);
  if (pTVar1 != (TRigVMTypeIndex *)0x0) {
    __return_storage_ptr__->Name = pTVar1->Name;
    __return_storage_ptr__->Index = pTVar1->Index;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  __return_storage_ptr__->Index = -1;
  return __return_storage_ptr__;
}

// GetTypeIndex_NoLock @ 14a0f0bd0

TRigVMTypeIndex * __thiscall
FRigVMRegistry_RWLock::GetTypeIndex_NoLock
          (FRigVMRegistry_RWLock *this,TRigVMTypeIndex *__return_storage_ptr__,FName *param_1,
          UObject *param_2)

{
  FString *pFVar1;
  TRigVMTypeIndex *pTVar2;
  wchar_t *pwVar3;
  FName local_res8;
  FRigVMTemplateArgumentType local_38;
  FString local_28;
  FString local_18;
  
  local_38.CPPType = *param_1;
  local_38.CPPTypeObject.field0_0x0 = (TObjectPtr<UObject>_u_0)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  ::FName::ToString(&local_38.CPPType,&local_28);
  pFVar1 = RigVMTypeUtils::PostProcessCPPType
                     (&local_18,&local_28,(UObject *)local_38.CPPTypeObject.field0_0x0,
                      (FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar3);
  local_38.CPPType = local_res8;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pTVar2 = TMapBase<FRigVMTemplateArgumentType,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>_>
           ::Find((TMapBase<FRigVMTemplateArgumentType,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>_>
                   *)&this->_padding_,&local_38);
  if (pTVar2 != (TRigVMTypeIndex *)0x0) {
    __return_storage_ptr__->Name = pTVar2->Name;
    __return_storage_ptr__->Index = pTVar2->Index;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  __return_storage_ptr__->Index = -1;
  return __return_storage_ptr__;
}

// GetType_NoLock @ 14a0f1270

FRigVMTemplateArgumentType * __thiscall
FRigVMRegistry_RWLock::GetType_NoLock(FRigVMRegistry_RWLock *this,TRigVMTypeIndex *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FRigVMTemplateArgumentType *pFVar4;
  FLazyName *this_00;
  TObjectPtr<UObject>_u_0 TVar5;
  uint uVar6;
  FName local_res8;
  
  uVar1 = param_1->Index;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (int)this->_padding_)) {
    uVar6 = 0;
    if ((int)uVar1 < (int)this->_padding_) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FRigVMTemplateArgumentType *)(*pcVar2)();
        return pFVar4;
      }
    }
    return (FRigVMTemplateArgumentType *)((longlong)(int)uVar1 * 0x30 + this->_padding_);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      EmptyType.CPPType.ComparisonIndex.Value = 0;
      EmptyType.CPPType.Number = 0;
      EmptyType.CPPTypeObject.field0_0x0 = (TObjectPtr<UObject>_u_0)(FObjectPtr)0x0;
      this_00 = RigVMTypeUtils::GetWildCardCPPTypeName();
      FLazyName::Resolve(this_00);
      EmptyType.CPPType = local_res8;
      TVar5.DebugPtr = (UObject *)RigVMTypeUtils::GetWildCardCPPTypeObject();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar5.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar5.DebugPtr);
      }
      EmptyType.CPPTypeObject.field0_0x0 =
           (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar5.DebugPtr;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyType;
}

// GetTypesForCategory_NoLock @ 14a0f14a0

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMRegistry_RWLock::GetTypesForCategory_NoLock(FRigVMRegistry_RWLock *this,ETypeCategory param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  ETypeCategory *pEVar6;
  
  if ((param_1 == ETypeCategory_Invalid) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCategory != FRigVMTemplateArgument::ETypeCategory_Invalid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x7c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar5 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar5 = &this->_padding_;
    }
    uVar3 = *(int *)((longlong)plVar5 +
                    ((ulonglong)((int)this->_padding_ - 1) & (ulonglong)param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar6 = (ETypeCategory *)((longlong)(int)uVar3 * 0x20 + this->_padding_);
        if (*pEVar6 == param_1) {
          if (pEVar6 != (ETypeCategory *)0x0) {
            return (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(pEVar6 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar6 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// Initialize_NoLock @ 14a0f7d00

void __thiscall FRigVMRegistry_RWLock::Initialize_NoLock(FRigVMRegistry_RWLock *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *pFVar3;
  IModuleInterface *pIVar4;
  longlong *plVar5;
  TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
  *this_01;
  IPluginManager *pIVar6;
  TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *pTVar7;
  FName local_res8 [2];
  
  FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock((FRigVMRegistry_NoLock *)this);
  pFVar2 = ::FName::FName(local_res8,L"AssetRegistry");
  FVar1 = *pFVar2;
  pFVar3 = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(pFVar3,FVar1);
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x40))(pIVar4);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
             *)(**(code **)(*plVar5 + 0x308))(plVar5);
  TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>::
  AddRaw<FRigVMRegistry_RWLock>
            (this_00,(FRigVMRegistry_RWLock *)(local_res8 + 1),(pmf_75611fca *)this);
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x40))(pIVar4);
  this_01 = (TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
             *)(**(code **)(*plVar5 + 0x318))(plVar5);
  TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
  ::AddRaw<FRigVMRegistry_RWLock>(this_01,(FRigVMRegistry_RWLock *)local_res8,(pmf_974cada4 *)this);
  if ((char)this->_padding_ != '\0') {
    pIVar6 = IPluginManager::Get();
    pTVar7 = (TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *)
             (**(code **)((longlong)*pIVar6 + 0x120))(pIVar6);
    TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::
    AddRaw<FRigVMRegistry_RWLock>(pTVar7,(FRigVMRegistry_RWLock *)local_res8,(pmf_732ab2f4 *)this);
    pIVar6 = IPluginManager::Get();
    pTVar7 = (TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *)
             (**(code **)((longlong)*pIVar6 + 0x138))(pIVar6);
    TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::
    AddRaw<FRigVMRegistry_RWLock>(pTVar7,(FRigVMRegistry_RWLock *)local_res8,(pmf_732ab2f4 *)this);
    pFVar3 = FModuleManager::Get();
    TMulticastDelegateRegistration<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
    ::AddRaw<FRigVMRegistry_RWLock>
              ((TMulticastDelegateRegistration<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
                *)&pFVar3->OnModulesUnloadCallback,(FRigVMRegistry_RWLock *)local_res8,
               (pmf_c8c0a726 *)this);
  }
  TMulticastDelegateRegistration<void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
  ::AddRaw<FRigVMRegistry_RWLock>
            ((TMulticastDelegateRegistration<void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
              *)&UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate,
             (FRigVMRegistry_RWLock *)local_res8,(pmf_ba032c68 *)this);
  TMulticastDelegateRegistration<void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
  ::AddRaw<FRigVMRegistry_RWLock>
            ((TMulticastDelegateRegistration<void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::CleanupUnloadingObjects,(FRigVMRegistry_RWLock *)local_res8,
             (pmf_2a7e7458 *)this);
  return;
}

// IsArrayType_NoLock @ 14a0f8ea0

bool __thiscall
FRigVMRegistry_RWLock::IsArrayType_NoLock(FRigVMRegistry_RWLock *this,TRigVMTypeIndex *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar1 = param_1->Index;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (int)this->_padding_)) {
    uVar5 = 0;
    if ((int)uVar1 < (int)this->_padding_) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return (bool)*(undefined1 *)(this->_padding_ + 0x28 + (longlong)(int)uVar1 * 0x30);
  }
  return false;
}

// IsExecuteType_NoLock @ 14a0f9400

bool __thiscall
FRigVMRegistry_RWLock::IsExecuteType_NoLock(FRigVMRegistry_RWLock *this,TRigVMTypeIndex *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar1 = param_1->Index;
  if (uVar1 != 0xffffffff) {
    if ((-1 < (int)uVar1) && ((int)uVar1 < (int)this->_padding_)) {
      uVar5 = 0;
      if ((int)uVar1 < (int)this->_padding_) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      return (bool)*(undefined1 *)(this->_padding_ + 0x29 + (longlong)(int)uVar1 * 0x30);
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3262262746346944693>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0x74b,"Types.IsValidIndex(InTypeIndex)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// IsWildCardType_NoLock @ 14a0fa2a0

bool __thiscall
FRigVMRegistry_RWLock::IsWildCardType_NoLock(FRigVMRegistry_RWLock *this,TRigVMTypeIndex *param_1)

{
  if ((RigVMTypeUtils::TypeIndex::WildCard.Index != param_1->Index) &&
     (RigVMTypeUtils::TypeIndex::WildCardArray.Index != param_1->Index)) {
    return false;
  }
  return true;
}

// NumTypes_NoLock @ 14a0fdf80

int __thiscall FRigVMRegistry_RWLock::NumTypes_NoLock(FRigVMRegistry_RWLock *this)

{
  return (int)this->_padding_;
}

// OnAnimationAttributeTypesChanged @ 14a0fe6e0

void __thiscall
FRigVMRegistry_RWLock::OnAnimationAttributeTypesChanged
          (FRigVMRegistry_RWLock *this,UScriptStruct *param_1,bool param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->WriteLockOwnerThread = aVar5;
  UNLOCK();
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
    UNLOCK();
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRigVMRegistry_NoLock::OnAnimationAttributeTypesChanged_NoLock
            ((FRigVMRegistry_NoLock *)this,param_1,param_2);
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538060>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x274,"CurrentLockCount == 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  this->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (param_2) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnRigVMRegistryChangedDelegate);
  }
  return;
}

// OnAnimationAttributeTypesChanged_NoLock @ 14a0fe8e0

void __thiscall
FRigVMRegistry_RWLock::OnAnimationAttributeTypesChanged_NoLock
          (FRigVMRegistry_RWLock *this,UScriptStruct *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  undefined1 auStack_38 [16];
  FName FStack_28;
  UScriptStruct *pUStack_20;
  FString FStack_18;
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3262262746346945455>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0x451,"InStruct");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2) {
    pcVar1 = *(code **)(this->_padding_ + 0xc0);
    pFVar3 = RigVMTypeUtils::GetUniqueStructTypeName(&FStack_18,param_1);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&FStack_28,pwVar4);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
    pUStack_20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (*pcVar1)(this,auStack_38,&FStack_28,0);
  }
  return;
}

// OnAssetRemoved @ 14a0fe8f0

void __thiscall
FRigVMRegistry_RWLock::OnAssetRemoved(FRigVMRegistry_RWLock *this,FAssetData *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  FSoftObjectPath local_28;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->WriteLockOwnerThread = aVar6;
  UNLOCK();
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
    UNLOCK();
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar3 = *(code **)(this->_padding_ + 0xd0);
  FAssetData::GetSoftObjectPath(param_1,&local_28);
  cVar4 = (*pcVar3)(this);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538060>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x274,"CurrentLockCount == 0");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  this->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (cVar4 != '\0') {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnRigVMRegistryChangedDelegate);
  }
  return;
}

// OnAssetRemoved_NoLock @ 14a0fea90

bool __thiscall
FRigVMRegistry_RWLock::OnAssetRemoved_NoLock(FRigVMRegistry_RWLock *this,FAssetData *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  FSoftObjectPath local_28;
  
  pcVar1 = *(code **)(this->_padding_ + 0xd0);
  FAssetData::GetSoftObjectPath(param_1,&local_28);
  uVar2 = (*pcVar1)(this,&local_28);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// OnAssetRenamed @ 14a0feaf0

void __thiscall
FRigVMRegistry_RWLock::OnAssetRenamed
          (FRigVMRegistry_RWLock *this,FAssetData *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->WriteLockOwnerThread = aVar5;
  UNLOCK();
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
    UNLOCK();
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRigVMRegistry_NoLock::OnAssetRenamed_NoLock((FRigVMRegistry_NoLock *)this,param_1,param_2);
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538060>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x274,"CurrentLockCount == 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  this->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00014a0febed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  return;
}

// OnAssetRenamed_NoLock @ 14a0fee80

void __thiscall
FRigVMRegistry_RWLock::OnAssetRenamed_NoLock
          (FRigVMRegistry_RWLock *this,FAssetData *param_1,FString *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FName FVar7;
  FName FVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> *pTVar14;
  FNameEntryId FVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *this_00;
  FSoftObjectPath FStack_78;
  FSoftObjectPath aFStack_58 [2];
  
  FStack_78.AssetPath.PackageName = (FName)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  aFStack_58[0].AssetPath.PackageName.ComparisonIndex.Value = 0;
  aFStack_58[0].AssetPath.PackageName.Number = 0;
  aFStack_58[0].AssetPath.AssetName.ComparisonIndex.Value = 0;
  aFStack_58[0].AssetPath.AssetName.Number = 0;
  aFStack_58[0].SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  aFStack_58[0].SubPathString.Data.ArrayNum = 0;
  aFStack_58[0].SubPathString.Data.ArrayMax = 0;
  uVar12 = 0;
  FVar15.Value = iVar1 - 1;
  if (iVar1 == 0) {
    FVar15.Value = uVar12;
  }
  FStack_78.AssetPath.AssetName.ComparisonIndex.Value = FVar15.Value;
  FSoftObjectPath::SetPath(aFStack_58,(TStringView<wchar_t> *)&FStack_78);
  FVar8 = aFStack_58[0].AssetPath.AssetName;
  this_00 = &this->_padding_;
  uVar10 = ::GetTypeHash(aFStack_58[0].AssetPath.AssetName.ComparisonIndex.Value);
  FVar7 = aFStack_58[0].AssetPath.PackageName;
  uVar11 = ::GetTypeHash(aFStack_58[0].AssetPath.PackageName.ComparisonIndex.Value);
  uVar11 = uVar11 + FVar7.Number;
  uVar11 = uVar11 * 0x40 + uVar10 + FVar8.Number + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
  if (1 < aFStack_58[0].SubPathString.Data.ArrayNum) {
    uVar10 = aFStack_58[0].SubPathString.Data.ArrayNum - 1;
    if (aFStack_58[0].SubPathString.Data.ArrayNum == 0) {
      uVar10 = uVar12;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<char8_t>
                       (uVar10,(uchar *)aFStack_58[0].SubPathString.Data.AllocatorInstance.Data);
    uVar11 = uVar11 ^ uVar10 + 0x9e3779b9 + uVar11 * 0x40 + (uVar11 >> 2);
  }
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar16 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar16 = &this->_padding_;
    }
    iVar1 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar11) * 4);
    while (iVar1 != -1) {
      lVar17 = (longlong)iVar1 * 0x50;
      bVar9 = FSoftObjectPath::operator==((FSoftObjectPath *)(*this_00 + lVar17),aFStack_58);
      FVar7 = aFStack_58[0].AssetPath.AssetName;
      if (bVar9) {
        lVar17 = *this_00 + lVar17;
        puVar13 = (undefined8 *)(lVar17 + 0x20);
        if (lVar17 == 0) {
          puVar13 = (undefined8 *)0x0;
        }
        if (puVar13 != (undefined8 *)0x0) {
          uVar2 = *(undefined4 *)(puVar13 + 4);
          uVar3 = *puVar13;
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
            uVar10 = ::GetTypeHash(aFStack_58[0].AssetPath.AssetName.ComparisonIndex.Value);
            FVar8 = aFStack_58[0].AssetPath.PackageName;
            uVar11 = ::GetTypeHash(aFStack_58[0].AssetPath.PackageName.ComparisonIndex.Value);
            uVar11 = uVar11 + FVar8.Number;
            uVar11 = uVar11 * 0x40 + uVar10 + FVar7.Number + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
            if (1 < aFStack_58[0].SubPathString.Data.ArrayNum) {
              uVar10 = aFStack_58[0].SubPathString.Data.ArrayNum - 1;
              if (aFStack_58[0].SubPathString.Data.ArrayNum == 0) {
                uVar10 = uVar12;
              }
              uVar12 = FCrc::Strihash_DEPRECATED<char8_t>
                                 (uVar10,(uchar *)aFStack_58[0].SubPathString.Data.AllocatorInstance
                                                  .Data);
              uVar11 = uVar11 ^ uVar12 + 0x9e3779b9 + uVar11 * 0x40 + (uVar11 >> 2);
            }
            TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FSoftObjectPath>
                      ((TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
                        *)this_00,uVar11,aFStack_58);
          }
          FAssetData::GetSoftObjectPath(param_1,&FStack_78);
          pTVar14 = TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
                    ::Emplace<FSoftObjectPath>
                              ((TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
                                *)this_00,&FStack_78);
          *(undefined8 *)pTVar14 = uVar3;
          *(undefined8 *)&pTVar14->field_0x8 = uVar4;
          *(undefined8 *)&pTVar14->field_0x10 = uVar5;
          *(undefined8 *)&pTVar14->field_0x18 = uVar6;
          *(undefined4 *)&pTVar14->field_0x20 = uVar2;
          if (FStack_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(FStack_78.SubPathString.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      iVar1 = *(int *)(*this_00 + 0x48 + lVar17);
    }
  }
  if (aFStack_58[0].SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(aFStack_58[0].SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnCleanupUnloadingObjects @ 14a0fee90

void __thiscall
FRigVMRegistry_RWLock::OnCleanupUnloadingObjects
          (FRigVMRegistry_RWLock *this,TArrayView<UObject_*,int> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  TArrayView<UObject_*,int> local_18;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->WriteLockOwnerThread = aVar6;
  UNLOCK();
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
    UNLOCK();
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar4 = FRigVMRegistry_NoLock::OnCleanupUnloadingObjects_NoLock
                    ((FRigVMRegistry_NoLock *)this,&local_18);
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538060>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x274,"CurrentLockCount == 0");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  this->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (bVar4) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnRigVMRegistryChangedDelegate);
  }
  return;
}

// OnCleanupUnloadingObjects_NoLock @ 14a0ff0b0

bool __thiscall
FRigVMRegistry_RWLock::OnCleanupUnloadingObjects_NoLock
          (FRigVMRegistry_RWLock *this,TArrayView<UObject_*,int> *param_1)

{
  bool bVar1;
  TArrayView<UObject_*,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = FRigVMRegistry_NoLock::OnCleanupUnloadingObjects_NoLock
                    ((FRigVMRegistry_NoLock *)this,&local_18);
  return bVar1;
}

// OnModulesUnloaded @ 14a0ff1e0

/* WARNING: Removing unreachable block (ram,0x00014a0ff39e) */

void __thiscall
FRigVMRegistry_RWLock::OnModulesUnloaded
          (FRigVMRegistry_RWLock *this,TArrayView<FName_const_,int> *param_1)

{
  atomic<int> *paVar1;
  FName *pFVar2;
  atomic<int> aVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  FName local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  FName *local_38;
  undefined8 uStack_30;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->WriteLockOwnerThread = aVar7;
  UNLOCK();
  LOCK();
  paVar1 = &this->LockCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar3 == (atomic<int>)0x0) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
    UNLOCK();
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar10 = param_1->DataPtr;
  uStack_30 = *(undefined8 *)&param_1->ArrayNum;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  pFVar2 = pFVar10 + (int)uStack_30;
  local_38 = pFVar10;
  while( true ) {
    if (pFVar10 == pFVar2) {
      bVar5 = FRigVMRegistry_NoLock::OnModulesUnloadedInternal
                        ((FRigVMRegistry_NoLock *)this,&local_68);
      DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      LOCK();
      paVar1 = &this->LockCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        LOCK();
        this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
        UNLOCK();
      }
      else {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      this->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
      if (bVar5) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnRigVMRegistryChangedDelegate);
      }
      return;
    }
    local_res10 = *pFVar10;
    ::FName::ToString(&local_res10,&local_48);
    ::FString::PrintfImpl(&local_58,L"/Script/%s.");
    if (((local_68.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar8 = local_68.ArrayNum;
    if (local_68.ArrayNum == local_68.ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
    }
    local_68.ArrayNum = iVar8 + 1;
    pFVar9 = local_68.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 = local_58.Data.AllocatorInstance.Data;
    *(int *)(pFVar9 + 8) = local_58.Data.ArrayNum;
    *(int *)(pFVar9 + 0xc) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar10 = pFVar10 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// OnPluginLoaded @ 14a0ffd90

void __thiscall FRigVMRegistry_RWLock::OnPluginLoaded(FRigVMRegistry_RWLock *this,IPlugin *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->WriteLockOwnerThread = aVar6;
  UNLOCK();
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
    UNLOCK();
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    cVar4 = '\0';
  }
  else {
    cVar4 = (**(code **)(this->_padding_ + 0x70))(this);
  }
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538060>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x274,"CurrentLockCount == 0");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  this->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (cVar4 != '\0') {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnRigVMRegistryChangedDelegate);
  }
  return;
}

// OnPluginLoaded_NoLock @ 14a0ffee0

bool __thiscall
FRigVMRegistry_RWLock::OnPluginLoaded_NoLock(FRigVMRegistry_RWLock *this,IPlugin *param_1)

{
  undefined1 uVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a0ffeef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x70))();
  return (bool)uVar1;
}

// OnPluginUnloaded @ 14a0fff00

void __thiscall
FRigVMRegistry_RWLock::OnPluginUnloaded(FRigVMRegistry_RWLock *this,IPlugin *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->WriteLockOwnerThread = aVar6;
  UNLOCK();
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
    UNLOCK();
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRigVMRegistry_NoLock::GetPluginModulePrefixes(&local_18,param_1);
  bVar4 = FRigVMRegistry_NoLock::OnModulesUnloadedInternal((FRigVMRegistry_NoLock *)this,&local_18);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538060>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x274,"CurrentLockCount == 0");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  this->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (bVar4) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnRigVMRegistryChangedDelegate);
  }
  return;
}

// OnPluginUnloaded_NoLock @ 14a1000a0

bool __thiscall
FRigVMRegistry_RWLock::OnPluginUnloaded_NoLock(FRigVMRegistry_RWLock *this,IPlugin *param_1)

{
  bool bVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  FRigVMRegistry_NoLock::GetPluginModulePrefixes(&local_18,param_1);
  bVar1 = FRigVMRegistry_NoLock::OnModulesUnloadedInternal((FRigVMRegistry_NoLock *)this,&local_18);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// RebuildRegistry_NoLock @ 14a101f40

void __thiscall FRigVMRegistry_RWLock::RebuildRegistry_NoLock(FRigVMRegistry_RWLock *this)

{
  int iVar1;
  
  (**(code **)(this->_padding_ + 0xb8))();
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  TSet<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  TIndirectArray<TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty((TIndirectArray<TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *)&this->_padding_,0);
  *(undefined4 *)&this->_padding_ = 0;
  TIndirectArray<TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty((TIndirectArray<TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *)&this->_padding_,0);
  *(undefined4 *)&this->_padding_ = 0;
  TIndirectArray<TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty((TIndirectArray<TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *)&this->_padding_,0);
  *(undefined4 *)&this->_padding_ = 0;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,(int *)((longlong)&this->_padding_ + 4)
              );
  }
  TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->_padding_);
  TSet<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->_padding_);
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->_padding_);
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset(&this->_padding_);
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset(&this->_padding_);
  TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
                      *)&this->_padding_);
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->_padding_,0,
                 (int *)((longlong)&this->_padding_ + 4));
    }
    *(undefined4 *)&this->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    *(undefined4 *)&this->_padding_ = 0;
  }
  FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock((FRigVMRegistry_NoLock *)this);
  return;
}

// RefreshEngineTypesIfRequired_NoLock @ 14a102510

void __thiscall
FRigVMRegistry_RWLock::RefreshEngineTypesIfRequired_NoLock(FRigVMRegistry_RWLock *this)

{
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014a10251c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x68))();
    return;
  }
  return;
}

// RefreshEngineTypes_NoLock @ 14a103420

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FRigVMRegistry_RWLock::RefreshEngineTypes_NoLock(FRigVMRegistry_RWLock *this)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar2;
  UEnum *pUVar3;
  code *pcVar4;
  bool bVar5;
  TConsoleVariableData<bool> *pTVar6;
  uint *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  EInternalObjectFlags EVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  UClass *pUVar15;
  UScriptStruct *pUVar16;
  FString *pFVar17;
  UClass *pUVar18;
  ulonglong uVar19;
  uint uVar20;
  wchar_t *pwVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  uint uVar25;
  longlong *plVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  uint uVar28;
  uint *puVar29;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  undefined1 uStack_2c8;
  undefined1 uStack_2c7;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_2c0;
  uint uStack_2b8;
  ForAnyElementType FStack_2b0;
  undefined8 uStack_2a8;
  ForAnyElementType FStack_2a0;
  int aiStack_298 [2];
  FString FStack_290;
  uint uStack_280;
  FString FStack_278;
  TObjectIterator<UScriptStruct> TStack_268;
  TObjectIterator<UEnum> TStack_250;
  TObjectIterator<UClass> TStack_238;
  FRigVMTemplateArgumentInfo *pFStack_220;
  undefined8 uStack_218;
  FName FStack_210;
  UEnum *pUStack_208;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_200;
  FName FStack_1f8;
  FName FStack_1f0;
  FName FStack_1e8;
  FName FStack_1e0;
  uint *puStack_1d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d0;
  FString FStack_1c8;
  FString FStack_1b8;
  int iStack_1a8;
  int iStack_1a4;
  longlong *plStack_1a0;
  uint uStack_198;
  uint uStack_194;
  longlong *plStack_190;
  undefined4 uStack_188;
  uint uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  longlong *plStack_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  FName FStack_140;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_138;
  FName FStack_130;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_128;
  FString FStack_120;
  FName FStack_110;
  UClass *pUStack_108;
  FName FStack_100;
  UClass *pUStack_f8;
  FString FStack_f0;
  FString FStack_e0;
  FString FStack_d0;
  FString FStack_c0;
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [44];
  undefined4 uStack_54;
  
  pTVar6 = CVarRigVMEnableLocalizedRegistry.Ref;
  bVar5 = false;
  bVar10 = false;
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
    lVar24 = 0;
  }
  else {
    lVar24 = 1;
  }
  if (pTVar6->ShadowedValue[lVar24] == true) {
    return;
  }
  if ((char)this->_padding_ == '\0') {
    return;
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId745,"FRigVMRegistry::RefreshEngineTypes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
               ,0x2e9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId745);
  }
  uStack_2c7 = (undefined1)this->_padding_;
  *(undefined1 *)&this->_padding_ = 1;
  uStack_2b8 = (uint)this->_padding_;
  FStack_2b0.Data = (FScriptContainerElement *)0x0;
  uStack_2a8 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x20,&FStack_2b0,0,(int *)((longlong)&uStack_2a8 + 4));
  TStack_268.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_268.ObjectArray.ArrayNum = 0;
  TStack_268.ObjectArray.ArrayMax = 0;
  TStack_268.Index = 0xffffffff;
  EVar11 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar15 = Z_Construct_UClass_UScriptStruct_NoRegister();
  GetObjectsOfClass(pUVar15,&TStack_268.ObjectArray,true,RF_ClassDefaultObject,
                    EVar11 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UScriptStruct>::Advance(&TStack_268);
    lVar24 = (longlong)TStack_268.Index;
    if ((TStack_268.Index < 0) || (TStack_268.ObjectArray.ArrayNum <= TStack_268.Index)) break;
    uVar20 = 0;
    if (TStack_268.Index < TStack_268.ObjectArray.ArrayNum) {
      uVar20 = (uint)~TStack_268.Index >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar2 = (TObjectPtr<UScriptStruct_const_>_u_0)
            ((TObjectPtr<UScriptStruct_const_>_u_0 *)
            (TStack_268.ObjectArray.AllocatorInstance.Data + lVar24 * 8))->DebugPtr;
    TStack_2c0 = TVar2;
    pUVar15 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    lVar24 = (TVar2.DebugPtr)->_padding_;
    iVar12 = (int)pUVar15->_padding_;
    if ((*(int *)(lVar24 + 0x38) < iVar12) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar24 + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar15->_padding_)) {
      pUVar16 = FRigVMExecutePin::StaticStruct();
      if (pUVar16 != (UScriptStruct *)0x0) {
        iVar12 = (int)pUVar16->_padding_;
        if (((int)(TStack_2c0.DebugPtr)->_padding_ < iVar12) ||
           ((longlong *)*(undefined1 **)((TStack_2c0.DebugPtr)->_padding_ + (longlong)iVar12 * 8) !=
            &pUVar16->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) goto LAB_14a10275d;
      }
      pUVar16 = FRigVMDispatchFactory::StaticStruct();
      if ((TStack_2c0.DebugPtr == pUVar16) ||
         (pUVar16 = FRigVMDispatchFactory::StaticStruct(), pUVar16 == (UScriptStruct *)0x0)) {
LAB_14a1028f3:
        TVar2 = TStack_2c0;
        TStack_200 = TStack_2c0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (TStack_2c0.DebugPtr != (UScriptStruct *)0x0) {
            UE::GC::MarkAsReachable((UObject *)TStack_2c0.DebugPtr);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar2.DebugPtr != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
          }
        }
        uVar20 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
        uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
        iVar12 = TSet<TObjectPtr<UScriptStruct_const_>,DefaultKeyFuncs<TObjectPtr<UScriptStruct_const_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<UScriptStruct_const_>_>
                           ((TSet<TObjectPtr<UScriptStruct_const_>,DefaultKeyFuncs<TObjectPtr<UScriptStruct_const_>,0>,FDefaultSetAllocator>
                             *)&this->_padding_,uVar20 >> 0x10 ^ uVar20,
                            (TObjectPtr<UScriptStruct_const_> *)&TStack_200.ObjectPtr);
        TVar2 = TStack_2c0;
        if (iVar12 != -1) {
          pcVar4 = *(code **)(this->_padding_ + 0xc0);
          pFVar17 = RigVMTypeUtils::GetUniqueStructTypeName(&FStack_e0,TStack_2c0.DebugPtr);
          if ((pFVar17->Data).ArrayNum == 0) {
            pwVar21 = L"";
          }
          else {
            pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
          }
          ::FName::FName(&FStack_130,pwVar21);
          if (FStack_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_e0.Data.AllocatorInstance.Data);
          }
          TStack_128.DebugPtr = TVar2.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar2.DebugPtr != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
          }
          (*pcVar4)(this,auStack_8c,&FStack_130,0);
        }
      }
      else {
        iVar12 = (int)pUVar16->_padding_;
        if (((int)(TStack_2c0.DebugPtr)->_padding_ < iVar12) ||
           ((longlong *)*(undefined1 **)((TStack_2c0.DebugPtr)->_padding_ + (longlong)iVar12 * 8) !=
            &pUVar16->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (!bVar9) goto LAB_14a1028f3;
        if (((FStack_2b0.Data <= &TStack_2c0) &&
            (&TStack_2c0 <
             (TObjectPtr<UScriptStruct_const_>_u_0 *)
             (FStack_2b0.Data + (longlong)uStack_2a8._4_4_ * 8))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = (int)uStack_2a8;
        if ((int)uStack_2a8 == uStack_2a8._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&FStack_2b0,(int *)((longlong)&uStack_2a8 + 4));
        }
        uStack_2a8 = CONCAT44(uStack_2a8._4_4_,iVar12 + 1);
        ((TObjectPtr<UScriptStruct_const_>_u_0 *)(FStack_2b0.Data + (longlong)iVar12 * 8))->DebugPtr
             = (UScriptStruct *)TStack_2c0;
      }
    }
    else {
LAB_14a10275d:
      bVar9 = FRigVMRegistry_NoLock::IsAllowedType_NoLock
                        ((FRigVMRegistry_NoLock *)this,(UStruct *)TStack_2c0.DebugPtr);
      TVar2 = TStack_2c0;
      if (bVar9) {
        pcVar4 = *(code **)(this->_padding_ + 0xc0);
        pFVar17 = RigVMTypeUtils::GetUniqueStructTypeName(&FStack_f0,TStack_2c0.DebugPtr);
        if ((pFVar17->Data).ArrayNum == 0) {
          pwVar21 = L"";
        }
        else {
          pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&FStack_140,pwVar21);
        if (FStack_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_f0.Data.AllocatorInstance.Data);
        }
        TStack_138.DebugPtr = TVar2.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar2.DebugPtr != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        (*pcVar4)(this,auStack_a4,&FStack_140);
      }
    }
  }
  if (TStack_268.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_268.ObjectArray.AllocatorInstance.Data);
  }
  TStack_250.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_250.ObjectArray.ArrayNum = 0;
  TStack_250.ObjectArray.ArrayMax = 0;
  TStack_250.Index = 0xffffffff;
  EVar11 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar15 = Z_Construct_UClass_UEnum_NoRegister();
  GetObjectsOfClass(pUVar15,&TStack_250.ObjectArray,true,RF_ClassDefaultObject,
                    EVar11 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UEnum>::Advance(&TStack_250);
    lVar24 = (longlong)TStack_250.Index;
    if ((TStack_250.Index < 0) || (TStack_250.ObjectArray.ArrayNum <= TStack_250.Index)) break;
    uVar20 = 0;
    if (TStack_250.Index < TStack_250.ObjectArray.ArrayNum) {
      uVar20 = (uint)~TStack_250.Index >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar3 = *(UEnum **)(TStack_250.ObjectArray.AllocatorInstance.Data + lVar24 * 8);
    bVar9 = FRigVMRegistry_NoLock::IsAllowedType_NoLock((FRigVMRegistry_NoLock *)this,pUVar3);
    if (bVar9) {
      if ((pUVar3->CppType).Data.ArrayNum < 2) {
        FStack_1f8 = (FName)pUVar3->_padding_;
        bVar5 = true;
        ::FName::ToString(&FStack_1f8,&FStack_1b8);
        pFVar17 = &FStack_1b8;
        FVar23.Data = FStack_1b8.Data.AllocatorInstance.Data;
      }
      else {
        iVar12 = (pUVar3->CppType).Data.ArrayNum;
        bVar10 = true;
        pFVar22 = (pUVar3->CppType).Data.AllocatorInstance.Data;
        FStack_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_278.Data.ArrayNum = iVar12;
        if (iVar12 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar12,0,(ForAnyElementType *)&FStack_278,iVar12,&FStack_278.Data.ArrayMax)
          ;
          memcpy(FStack_278.Data.AllocatorInstance.Data,pFVar22,(longlong)iVar12 * 2);
        }
        pFVar17 = &FStack_278;
        FVar23.Data = FStack_278.Data.AllocatorInstance.Data;
      }
      (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar12 = (pFVar17->Data).ArrayNum;
      (pFVar17->Data).ArrayNum = 0;
      (pFVar17->Data).ArrayMax = 0;
      if ((bVar10) &&
         (bVar10 = false, FStack_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(FStack_278.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, FStack_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(FStack_1b8.Data.AllocatorInstance.Data);
      }
      pFVar22 = (FScriptContainerElement *)L"";
      if (iVar12 != 0) {
        pFVar22 = FVar23.Data;
      }
      pcVar4 = *(code **)(this->_padding_ + 0xc0);
      ::FName::FName(&FStack_1f0,(wchar_t *)pFVar22);
      FStack_210 = FStack_1f0;
      pUStack_208 = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      ::FName::ToString(&FStack_210,&FStack_120);
      pFVar17 = RigVMTypeUtils::PostProcessCPPType
                          (&FStack_d0,&FStack_120,(UObject *)pUStack_208,
                           (FRigVMUserDefinedTypeResolver *)0x0);
      if ((pFVar17->Data).ArrayNum == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&FStack_1e8,pwVar21);
      FStack_210 = FStack_1e8;
      if (FStack_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_d0.Data.AllocatorInstance.Data);
      }
      if (FStack_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_120.Data.AllocatorInstance.Data);
      }
      (*pcVar4)(this,auStack_b0,&FStack_210);
      if (FVar23.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar23.Data);
      }
    }
  }
  if (TStack_250.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_250.ObjectArray.AllocatorInstance.Data);
  }
  TStack_238.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_238.ObjectArray.ArrayNum = 0;
  TStack_238.ObjectArray.ArrayMax = 0;
  TStack_238.Index = 0xffffffff;
  EVar11 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar15 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar15,&TStack_238.ObjectArray,true,RF_ClassDefaultObject,
                    EVar11 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&TStack_238);
  uVar20 = 1;
  while( true ) {
    lVar24 = (longlong)TStack_238.Index;
    uVar25 = 0;
    if ((TStack_238.Index < 0) || (TStack_238.ObjectArray.ArrayNum <= TStack_238.Index)) break;
    if (TStack_238.Index < TStack_238.ObjectArray.ArrayNum) {
      uVar25 = (uint)~TStack_238.Index >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar15 = *(UClass **)(TStack_238.ObjectArray.AllocatorInstance.Data + lVar24 * 8);
    bVar10 = FRigVMRegistry_NoLock::IsAllowedType_NoLock((FRigVMRegistry_NoLock *)this,pUVar15);
    if (bVar10) {
      pcVar4 = *(code **)(this->_padding_ + 0xc0);
      if (pUVar15 == (UClass *)0x0) {
LAB_14a102e15:
        FStack_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_290.Data.ArrayNum = 0;
        FStack_290.Data.ArrayMax = 0;
      }
      else {
        pUVar18 = Z_Construct_UClass_UClass_NoRegister();
        iVar12 = (int)pUVar18->_padding_;
        if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar12) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
            &pUVar18->_padding_)) {
          pUVar18 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar12 = (int)pUVar18->_padding_;
          if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar12) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
              &pUVar18->_padding_)) {
            pUVar18 = Z_Construct_UClass_UEnum_NoRegister();
            iVar12 = (int)pUVar18->_padding_;
            if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar12) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
                &pUVar18->_padding_)) goto LAB_14a102e15;
            RigVMTypeUtils::CPPTypeFromEnum(&FStack_290,(UEnum *)pUVar15);
          }
          else {
            RigVMTypeUtils::GetUniqueStructTypeName(&FStack_290,(UScriptStruct *)pUVar15);
          }
        }
        else {
          FStack_1e0 = (FName)pUVar15->_padding_;
          ::FName::ToString(&FStack_1e0,&FStack_1c8);
          (**(code **)(pUVar15->_padding_ + 0x318))(pUVar15);
          ::FString::PrintfImpl(&FStack_290,L"TSubclassOf<%s%s>");
          if (FStack_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_1c8.Data.AllocatorInstance.Data);
          }
        }
      }
      FVar23.Data = (FScriptContainerElement *)L"";
      if (FStack_290.Data.ArrayNum != 0) {
        FVar23.Data = FStack_290.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&FStack_110,(wchar_t *)FVar23.Data);
      if (FStack_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_290.Data.AllocatorInstance.Data);
      }
      pUStack_108 = pUVar15;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      (*pcVar4)(this,auStack_98,&FStack_110,0);
      pcVar4 = *(code **)(this->_padding_ + 0xc0);
      pFVar17 = RigVMTypeUtils::CPPTypeFromObject(&FStack_c0,(UObject *)pUVar15,AsObject);
      if ((pFVar17->Data).ArrayNum == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&FStack_100,pwVar21);
      if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
      }
      pUStack_f8 = pUVar15;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      (*pcVar4)(this,auStack_80,&FStack_100);
    }
    TObjectIterator<UClass>::Advance(&TStack_238);
  }
  if (TStack_238.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_238.ObjectArray.AllocatorInstance.Data);
  }
  iVar12 = (int)uStack_2a8;
  uVar19 = (ulonglong)(int)uStack_2a8;
  pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(FStack_2b0.Data + uVar19 * 8);
  FVar23.Data = FStack_2b0.Data;
  while( true ) {
    if ((int)uVar19 != iVar12) {
      auStackX_18[0] = 0;
      `TCheckedPointerIterator<UScriptStruct_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_18);
    }
    if ((TObjectPtr<UScriptStruct_const_>_u_0 *)FVar23.Data == pTVar1) break;
    pFStack_220 = (FRigVMTemplateArgumentInfo *)0x0;
    uStack_218 = 0;
    (**(code **)(this->_padding_ + 0x38))(this,*(UScriptStruct **)FVar23.Data,&pFStack_220);
    DestructItems<FRigVMTemplateArgumentInfo,int>(pFStack_220,(int)uStack_218);
    if (pFStack_220 != (FRigVMTemplateArgumentInfo *)0x0) {
      FMemory::Free(pFStack_220);
    }
    uVar19 = uStack_2a8 & 0xffffffff;
    FVar23.Data = FVar23.Data + 8;
  }
  if (uStack_2b8 != (uint)this->_padding_) {
    iVar12 = (int)this->_padding_;
    FStack_2a0.Data = (FScriptContainerElement *)0x0;
    aiStack_298[0] = 0;
    aiStack_298[1] = 0;
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar12,&FStack_2a0,aiStack_298,aiStack_298 + 1);
    memset(FStack_2a0.Data + iVar13,0,(longlong)iVar12);
    plStack_1a0 = &this->_padding_;
    uVar14 = (uint)this->_padding_;
    plStack_190 = &this->_padding_;
    uStack_180 = 0;
    uStack_184 = uVar25;
    if (uVar14 != 0) {
      plVar26 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar26 = plStack_190;
      }
      uVar28 = (uint)*plVar26;
      uVar25 = 0;
      uStack_180 = 0;
      while (uVar28 == 0) {
        uVar25 = uVar25 + 1;
        uStack_180 = uStack_180 + 0x20;
        uStack_184 = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar25)
        goto LAB_14a10304f;
        uVar28 = *(uint *)((longlong)plVar26 + (longlong)(int)uVar25 * 4);
      }
      uVar20 = -uVar28 & uVar28;
      uVar19 = (ulonglong)uVar20 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iStack_1a8 = (int)lVar24;
      uStack_184 = iStack_1a8 + -1 + uStack_180;
      if ((int)uVar14 < (int)uStack_184) {
        uStack_184 = uVar14;
      }
    }
LAB_14a10304f:
    pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
    uStack_17c = uStack_54;
    iStack_178 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
    uVar14 = (uint)this->_padding_;
    uStack_188 = 0xffffffff;
    TStack_168._padding_ = CONCAT44(uVar20,uVar25);
    uVar28 = uVar14 & 0xffffffe0;
    TStack_168.CurrentBitIndex = uStack_184;
    TStack_168.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar14 >> 5;
    TStack_168._28_4_ = uStack_54;
    TStack_168.BaseBitIndex = uStack_180;
    uStack_148 = CONCAT44(uStack_174,iStack_178);
    uStack_2b8 = uVar14;
    pTStack_1d0 = pTVar27;
    uStack_198 = uVar25;
    uStack_194 = uVar20;
    plStack_170 = plStack_1a0;
    TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)plStack_190;
    if ((((int)uVar14 < 0) || ((int)this->_padding_ < (int)uVar14)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar20 = (uint)this->_padding_;
    if (uVar14 != uVar20) {
      plVar26 = (longlong *)pTVar27;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar26 = (longlong *)this->_padding_;
      }
      uVar25 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)plVar26 + (longlong)iVar12 * 4);
      while (uVar25 == 0) {
        iVar12 = iVar12 + 1;
        uVar28 = uVar28 + 0x20;
        uVar14 = uVar20;
        uStack_2b8 = uVar20;
        if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < iVar12)
        goto LAB_14a103191;
        uVar25 = *(uint *)((longlong)plVar26 + (longlong)iVar12 * 4);
      }
      uVar19 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iStack_1a4 = (int)lVar24;
      uVar14 = (uVar28 - 1) + iStack_1a4;
      uStack_2b8 = uVar14;
      if ((int)uVar20 < (int)uVar14) {
        uVar14 = uVar20;
        uStack_2b8 = uVar20;
      }
    }
LAB_14a103191:
    while( true ) {
      plVar26 = plStack_170;
      if ((int)plStack_170[1] - *(int *)((longlong)plStack_170 + 0x34) != (int)uStack_148) {
        auStackX_20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_20);
      }
      if (((TStack_168.CurrentBitIndex == uVar14) && (TStack_168.Array == pTVar27)) &&
         (plVar26 == &this->_padding_)) break;
      lVar24 = (longlong)TStack_168.CurrentBitIndex * 0x20 + *plVar26;
      uStack_280 = *(uint *)(lVar24 + 0x10);
      uVar19 = (ulonglong)(int)uStack_280;
      puVar29 = *(uint **)(lVar24 + 8);
      puStack_1d8 = puVar29 + uVar19;
      while( true ) {
        puVar7 = puStack_1d8;
        if (*(int *)(lVar24 + 0x10) != (int)uVar19) {
          uStack_2c8 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&uStack_2c8);
        }
        if (puVar29 == puVar7) break;
        uVar20 = *puVar29;
        uVar25 = 0;
        if ((int)uVar20 < aiStack_298[0]) {
          uVar25 = ~uVar20 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (FStack_2a0.Data[(int)uVar20] == (FScriptContainerElement)0x0) {
          uVar25 = (int)uVar20 / 0x30;
          uVar14 = 0;
          if ((int)uVar25 < (int)this->_padding_) {
            uVar14 = ~uVar25 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FRigVMTemplate::UpdateAllArgumentTypesSlow
                    ((FRigVMTemplate *)
                     ((ulonglong)(uint)((int)uVar20 % 0x30) * 0x150 +
                     *(longlong *)(this->_padding_ + (longlong)(int)uVar25 * 8)),
                     (FRigVMRegistryHandle *)&this->_padding_);
          uVar25 = 0;
          if ((int)uVar20 < aiStack_298[0]) {
            uVar25 = ~uVar20 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FStack_2a0.Data[(int)uVar20] = (FScriptContainerElement)0x1;
        }
        uVar19 = (ulonglong)uStack_280;
        puVar29 = puVar29 + 1;
      }
      TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
      pTVar27 = pTStack_1d0;
      uVar14 = uStack_2b8;
    }
    if (FStack_2a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2a0.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x70))(this);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  if ((TObjectPtr<UScriptStruct_const_>_u_0 *)FStack_2b0.Data !=
      (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    FMemory::Free(FStack_2b0.Data);
  }
  *(undefined1 *)&this->_padding_ = uStack_2c7;
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RefreshFunctionsAndDispatches_NoLock @ 14a1034e0

bool __thiscall
FRigVMRegistry_RWLock::RefreshFunctionsAndDispatches_NoLock(FRigVMRegistry_RWLock *this)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 local_res10 [8];
  
  cVar3 = (**(code **)(*(longlong *)CVarRigVMUpdateDispatchFactoriesGreedily._padding_ + 0xc0))();
  if (cVar3 == '\0') {
    return false;
  }
  puVar4 = (undefined8 *)this->_padding_;
  bVar5 = false;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<FRigVMDispatchFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar4 == puVar1) break;
    if (((FRigVMDispatchFactory *)*puVar4)->CachedTemplate == (FRigVMTemplate *)0x0) {
      FRigVMDispatchFactory::GetTemplate_NoLock
                ((FRigVMDispatchFactory *)*puVar4,(FRigVMRegistryHandle *)&this->_padding_);
      bVar5 = true;
    }
    puVar4 = puVar4 + 1;
  }
  return bVar5;
}

// RegisterCompiledInStruct_NoLock @ 14a104210

void __thiscall
FRigVMRegistry_RWLock::RegisterCompiledInStruct_NoLock
          (FRigVMRegistry_RWLock *this,UScriptStruct *param_1,
          TArrayView<FRigVMCompiledInFunction_const_,int> *param_2)

{
  FRigVMCompiledInFunction *pFVar1;
  int iVar2;
  FRigVMCompiledInFunctionArgument *pFVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  TArrayView<FRigVMCompiledInFunctionArgument_const_,int> *pTVar7;
  FRigVMCompiledInFunction *pFVar8;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FRigVMCompiledInFunction *local_38;
  undefined8 uStack_30;
  
  local_38 = param_2->DataPtr;
  uStack_30 = *(undefined8 *)&param_2->ArrayNum;
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x91b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = local_38 + (int)uStack_30;
  if (local_38 != pFVar8) {
    pTVar7 = &local_38->Parameters;
    do {
      iVar2 = pTVar7->ArrayNum;
      pFVar3 = pTVar7->DataPtr;
      if (((FRigVMCompiledInFunction *)(pTVar7 + -1))->Function ==
          (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
           *)0x0) {
        pcVar4 = *(code **)(this->_padding_ + 0x50);
        local_48.Data = (FScriptContainerElement *)0x0;
        local_40 = iVar2;
        if (iVar2 == 0) {
          local_3c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,iVar2,0,&local_48,iVar2,&local_3c);
          ConstructItems<FRigVMFunctionArgument,FRigVMCompiledInFunctionArgument,int>
                    (local_48.Data,pFVar3,iVar2);
        }
        (*pcVar4)(this,param_1,((FRigVMCompiledInFunction *)(pTVar7 + -1))->MethodName);
        DestructItems<FRigVMFunctionArgument,int>((FRigVMFunctionArgument *)local_48.Data,local_40);
        FVar6.Data = local_48.Data;
      }
      else {
        pcVar4 = *(code **)(this->_padding_ + 0x20);
        local_58.Data = (FScriptContainerElement *)0x0;
        local_50 = iVar2;
        if (iVar2 == 0) {
          local_4c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,iVar2,0,&local_58,iVar2,&local_4c);
          ConstructItems<FRigVMFunctionArgument,FRigVMCompiledInFunctionArgument,int>
                    (local_58.Data,pFVar3,iVar2);
        }
        (*pcVar4)(this,((FRigVMCompiledInFunction *)(pTVar7 + -1))->MethodName,
                  ((FRigVMCompiledInFunction *)(pTVar7 + -1))->Function,param_1,&local_58);
        DestructItems<FRigVMFunctionArgument,int>((FRigVMFunctionArgument *)local_58.Data,local_50);
        FVar6.Data = local_58.Data;
      }
      if ((FRigVMFunctionArgument *)FVar6.Data != (FRigVMFunctionArgument *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      pFVar1 = (FRigVMCompiledInFunction *)(pTVar7 + 1);
      pTVar7 = pTVar7 + 2;
    } while (pFVar1 != pFVar8);
  }
  return;
}

// RegisterFactory_NoLock @ 14a104790

/* WARNING: Type propagation algorithm not settling */

FRigVMDispatchFactory * __thiscall
FRigVMRegistry_RWLock::RegisterFactory_NoLock
          (FRigVMRegistry_RWLock *this,UScriptStruct *param_1,
          TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRigVMDispatchFactory *pFVar7;
  UScriptStruct *pUVar8;
  FName FVar9;
  FString *pFVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong *plVar14;
  FString *pFVar15;
  TPairInitializer<FName_const_&,FRigVMDispatchFactory_*_const_&> aTStackX_8 [2];
  FRigVMDispatchFactory *pFStack_78;
  undefined1 auStack_70 [8];
  FName *pFStack_68;
  FRigVMDispatchFactory **ppFStack_60;
  FRigVMDispatchFactory ***pppFStack_58;
  FRigVMDispatchFactory **ppFStack_50;
  FString FStack_48;
  
  aTStackX_8[0].Value = (FRigVMDispatchFactory **)param_1;
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFactoryStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x93d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FRigVMDispatchFactory *)(*pcVar5)();
    return pFVar7;
  }
  pUVar8 = FRigVMDispatchFactory::StaticStruct();
  if (((UScriptStruct *)aTStackX_8[0].Value == pUVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFactoryStruct != FRigVMDispatchFactory::StaticStruct()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x93e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FRigVMDispatchFactory *)(*pcVar5)();
    return pFVar7;
  }
  pUVar8 = FRigVMDispatchFactory::StaticStruct();
  if (pUVar8 != (UScriptStruct *)0x0) {
    iVar13 = (int)pUVar8->_padding_;
    if (((int)*(longlong *)((longlong)aTStackX_8[0].Value + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((longlong)aTStackX_8[0].Value + 0x30) + (longlong)iVar13 * 8)
        != &pUVar8->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14a1044d8;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("InFactoryStruct->IsChildOf(FRigVMDispatchFactory::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                     ,0x93f,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FRigVMDispatchFactory *)(*pcVar5)();
    return pFVar7;
  }
LAB_14a1044d8:
  uVar11 = ((uint)((ulonglong)aTStackX_8[0].Value >> 0x14) & 0xffff ^
           (uint)((ulonglong)aTStackX_8[0].Value >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar14 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar14 = &this->_padding_;
    }
    iVar13 = *(int *)((longlong)plVar14 +
                     (ulonglong)((int)this->_padding_ - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
    if (iVar13 != -1) {
      lVar3 = this->_padding_;
      do {
        lVar2 = lVar3 + (longlong)iVar13 * 0x18;
        if (*(UScriptStruct **)(lVar3 + (longlong)iVar13 * 0x18) ==
            (UScriptStruct *)aTStackX_8[0].Value) {
          puVar12 = (undefined8 *)(lVar2 + 8);
          if (lVar2 == 0) {
            puVar12 = (undefined8 *)0x0;
          }
          if (puVar12 != (undefined8 *)0x0) {
            return (FRigVMDispatchFactory *)*puVar12;
          }
          break;
        }
        iVar13 = *(int *)(lVar2 + 0x10);
      } while (iVar13 != -1);
    }
  }
  iVar13 = (int)*(short *)((longlong)((longlong)aTStackX_8[0].Value + 0x58) + 4);
  pFStack_78 = FMemory::Malloc((longlong)
                               ((int)*(longlong *)((longlong)aTStackX_8[0].Value + 0x58) + -1 +
                                iVar13 & -iVar13),0);
  (**(code **)(*(longlong *)aTStackX_8[0].Value + 0x2f8))(aTStackX_8[0].Value,pFStack_78,1);
  plVar14 = &this->_padding_;
  pFStack_78->FactoryScriptStruct = (UScriptStruct *)aTStackX_8[0].Value;
  if ((((FRigVMDispatchFactory **)*plVar14 <= &pFStack_78) &&
      (&pFStack_78 < (FRigVMDispatchFactory **)*plVar14 + *(int *)((longlong)&this->_padding_ + 4)))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FRigVMDispatchFactory *)(*pcVar5)();
    return pFVar7;
  }
  iVar13 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar14,piVar1);
  }
  *(int *)&this->_padding_ = iVar13 + 1;
  *(FRigVMDispatchFactory **)(*plVar14 + (longlong)iVar13 * 8) = pFStack_78;
  pFStack_78->FactoryIndex = iVar13;
  FVar9 = FRigVMDispatchFactory::GetFactoryName((UScriptStruct *)auStack_70);
  pFStack_78->FactoryName = *(FName *)FVar9;
  pFVar10 = ::FName::ToString(&pFStack_78->FactoryName,(FString *)(auStack_70 + 0x28));
  pFVar7 = pFStack_78;
  pFVar15 = &pFStack_78->FactoryNameString;
  if (pFVar15 != pFVar10) {
    pFVar4 = (pFVar15->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar15->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->FactoryNameString).Data.ArrayNum = (pFVar10->Data).ArrayNum;
    (pFVar7->FactoryNameString).Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (FStack_48.Data.AllocatorInstance.Data != (void *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  pFStack_78->OwnerRegistry = (FRigVMRegistry_NoLock *)this;
  pFStack_68 = &pFStack_78->FactoryName;
  ppFStack_60 = &pFStack_78;
  TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FRigVMDispatchFactory_*_const_&>_>
            ((TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
              *)&this->_padding_,aTStackX_8,(bool *)(auStack_70 + 8));
  pppFStack_58 = &aTStackX_8[0].Value;
  ppFStack_50 = &pFStack_78;
  TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UScriptStruct_const_*_const_&,FRigVMDispatchFactory_*_const_&>_>
            ((TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<UScriptStruct_const_*_const_&,FRigVMDispatchFactory_*_const_&> *)
             ((longlong)(aTStackX_8 + 1) + 8),(bool *)(auStack_70 + 0x18));
  (**(code **)(pFStack_78->_padding_ + 0x28))(pFStack_78,&this->_padding_);
  if (param_2->ArrayNum != 0) {
    FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock
              (pFStack_78,param_2,(FRigVMRegistryHandle *)&this->_padding_);
  }
  return pFStack_78;
}

// RegisterObjectTypes_NoLock @ 14a1049c0

void __thiscall
FRigVMRegistry_RWLock::RegisterObjectTypes_NoLock
          (FRigVMRegistry_RWLock *this,
          TArrayView<TTuple<UClass_*,FRigVMRegistry_NoLock::ERegisterObjectOperation>_const_,int>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  UClass *pUVar6;
  TTuple<UClass_*,FRigVMRegistry_NoLock::ERegisterObjectOperation> *pTVar7;
  TTuple<UClass_*,FRigVMRegistry_NoLock::ERegisterObjectOperation> *pTVar8;
  UClass *local_res10;
  TObjectPtr<UClass_const_> local_res18;
  TObjectPtr<UClass_const_> local_res20;
  TObjectPtr<UClass_const_> local_58;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_50;
  
  pTVar8 = param_1->DataPtr;
  pTVar7 = pTVar8 + (int)*(undefined8 *)&param_1->ArrayNum;
  for (; pTVar8 != pTVar7; pTVar8 = pTVar8 + 1) {
    pUVar6 = *(UClass **)pTVar8;
    iVar2 = (int)*(undefined8 *)&pTVar8->field_0x8;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      if (iVar2 == 0) {
        local_res10 = pUVar6;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
        ::Emplace<TObjectPtr<UClass_const_>_>
                  ((TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
                    *)&this->_padding_,&local_58,(bool *)&local_res10);
      }
      else {
        uVar3 = iVar2 - 1;
        if (uVar3 == 0) {
          do {
            local_res10 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
            }
            TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
            ::Emplace<TObjectPtr<UClass_const_>_>
                      ((TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
                        *)&this->_padding_,&local_res20,(bool *)&local_res10);
            pUVar6 = (UClass *)pUVar6->_padding_;
          } while (pUVar6 != (UClass *)0x0);
        }
        else if (uVar3 == 1) {
          local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_50.ArrayNum = uVar3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,1,0,&local_50.AllocatorInstance,1,&local_50.ArrayMax);
          *(UClass **)local_50.AllocatorInstance.Data = pUVar6;
          GetDerivedClasses(pUVar6,&local_50,true);
          iVar2 = local_50.ArrayNum;
          uVar4 = (ulonglong)local_50.ArrayNum;
          pFVar1 = local_50.AllocatorInstance.Data + uVar4 * 8;
          FVar5.Data = local_50.AllocatorInstance.Data;
          while( true ) {
            if ((uint)uVar4 != iVar2) {
              `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_res10);
            }
            if (FVar5.Data == pFVar1) break;
            local_res10 = *(UClass **)FVar5.Data;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res10 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_res10);
            }
            TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
            ::Emplace<TObjectPtr<UClass_const_>_>
                      ((TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
                        *)&this->_padding_,&local_res18,(bool *)&local_res10);
            uVar4 = (ulonglong)(uint)local_50.ArrayNum;
            FVar5.Data = FVar5.Data + 8;
          }
          if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// RegisterPredicate_NoLock @ 14a104e60

void __thiscall
FRigVMRegistry_RWLock::RegisterPredicate_NoLock
          (FRigVMRegistry_RWLock *this,UScriptStruct *param_1,wchar_t *param_2,
          TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  FName FVar2;
  FRigVMFunction *pFVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *pTVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  FName *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FName FStackX_8;
  FRigVMFunction FStack_88;
  
  pTVar5 = CVarRigVMEnableLocalizedRegistry.Ref;
  if ((char)this->_padding_ != '\0') {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar9 = 0;
    }
    else {
      lVar9 = 1;
    }
    if (pTVar5->ShadowedValue[lVar9] == true) {
      return;
    }
  }
  FVar2 = (FName)param_1->_padding_;
  FStackX_8 = FVar2;
  uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar7 = uVar7 + FVar2.Number;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar12 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar12 = &this->_padding_;
    }
    uVar1 = *(uint *)((longlong)plVar12 + (ulonglong)((int)this->_padding_ - 1U & uVar7) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar13 = (FName *)((longlong)(int)uVar1 * 0x20 + this->_padding_);
        if (*pFVar13 == FStackX_8) {
          if (pFVar13 != (FName *)0x0) {
            pTVar10 = (TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *)(pFVar13 + 1);
            goto LAB_14a104ccf;
          }
          break;
        }
        uVar1 = pFVar13[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pTVar10 = TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
            ::EmplaceByHash<FName>
                      ((TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->_padding_,uVar7,&FStackX_8);
LAB_14a104ccf:
  pFVar14 = (pTVar10->AllocatorInstance).Data;
  iVar8 = pTVar10->ArrayNum;
  pFVar15 = pFVar14 + (longlong)iVar8 * 0x70;
  if (pFVar14 != pFVar15) {
    do {
      if (*(int *)(pFVar14 + 8) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)pFVar14;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar11,param_2);
      if (iVar8 == 0) {
        return;
      }
      pFVar14 = pFVar14 + 0x70;
    } while (pFVar14 != pFVar15);
    iVar8 = pTVar10->ArrayNum;
  }
  FRigVMFunction::FRigVMFunction
            (&FStack_88,param_2,
             (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
              *)0x0,param_1,iVar8,param_3);
  pFVar3 = (FRigVMFunction *)(pTVar10->AllocatorInstance).Data;
  if (((pFVar3 <= &FStack_88) && (&FStack_88 < pFVar3 + pTVar10->ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = pTVar10->ArrayNum;
  if (iVar8 == pTVar10->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
  }
  pTVar10->ArrayNum = iVar8 + 1;
  FRigVMFunction::FRigVMFunction
            ((FRigVMFunction *)((pTVar10->AllocatorInstance).Data + (longlong)iVar8 * 0x70),
             &FStack_88);
  if (FStack_88.ArgumentNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.ArgumentNames.AllocatorInstance.Data);
  }
  if (FStack_88.ArgumentTypeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.ArgumentTypeIndices.AllocatorInstance.Data);
  }
  DestructItems<FRigVMFunctionArgument,int>
            ((FRigVMFunctionArgument *)FStack_88.Arguments.AllocatorInstance.Data,
             FStack_88.Arguments.ArrayNum);
  if ((FRigVMFunctionArgument *)FStack_88.Arguments.AllocatorInstance.Data !=
      (FRigVMFunctionArgument *)0x0) {
    FMemory::Free(FStack_88.Arguments.AllocatorInstance.Data);
  }
  if (FStack_88.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Name.Data.AllocatorInstance.Data);
  }
  return;
}

// Register_NoLock @ 14a105440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMRegistry_RWLock::Register_NoLock
          (FRigVMRegistry_RWLock *this,wchar_t *param_1,
          _func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
          *param_2,UScriptStruct *param_3,
          TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined1 *puVar1;
  TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  FProperty *pFVar6;
  TConsoleVariableData<bool> *pTVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  TTuple<FName,int> *pTVar12;
  FRigVMFunction *pFVar13;
  longlong *plVar14;
  undefined1 auStackY_238 [32];
  int aiStack_1f8 [2];
  TFieldIterator<FProperty> TStack_1f0;
  FName FStack_1d8;
  undefined1 auStack_1d0 [8];
  FRigVMFunction FStack_1c8;
  FName *pFStack_158;
  int *piStack_150;
  longlong lStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  longlong *plStack_120;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  void *pvStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  void *pvStack_d8;
  ulonglong uStack_d0;
  undefined1 auStack_c8 [128];
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  uStack_e0 = 0;
  pvStack_f8 = (void *)0x0;
  lStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  plStack_120 = (longlong *)0x0;
  auStack_118._0_8_ = (FScriptContainerElement *)0x0;
  auStack_118._8_8_ = 0;
  auStack_118._16_8_ = 0;
  uStack_100 = 0;
  uStack_f0 = 0x8000000000;
  uStack_e8 = 0xffffffff;
  pvStack_d8 = (void *)0x0;
  uStack_d0 = 0;
  lVar11 = (**(code **)(this->_padding_ + 0x160))(0,param_1,&lStack_148);
  uStack_d0 = uStack_d0 & 0xffffffff00000000;
  if (pvStack_d8 != (void *)0x0) {
    FMemory::Free(pvStack_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)auStack_118,0,auStack_118._8_4_);
  iVar5 = SUB84(auStack_118._8_8_,4);
  auStack_118._8_8_ = auStack_118._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)auStack_118,0,(int *)(auStack_118 + 0xc));
  }
  uVar9 = uStack_f0._4_4_;
  uStack_e8 = 0xffffffff;
  uStack_f0 = (ulonglong)uStack_f0._4_4_ << 0x20;
  if (0x80 < uVar9) {
    uStack_f0 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_118 + 0x10),0);
  }
  if (pvStack_f8 != (void *)0x0) {
    FMemory::Free(pvStack_f8);
  }
  if ((FScriptContainerElement *)auStack_118._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_118._0_8_);
  }
  if (lStack_148 != 0) {
    plVar14 = &lStack_138;
    if (plStack_120 != (longlong *)0x0) {
      plVar14 = plStack_120;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (lVar11 != 0) {
    return;
  }
  ::FName::FName(&FStack_1d8,param_1);
  aiStack_1f8[0] = (int)this->_padding_;
  pTVar12 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->_padding_,FStack_1d8);
  if ((pTVar12 != (TTuple<FName,int> *)0x0) &&
     (puVar1 = &pTVar12->field_0x8, puVar1 != (undefined1 *)0x0)) {
    if (((*(int *)puVar1 < 0) || ((int)this->_padding_ <= *(int *)puVar1)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Functions.IsValidIndex(*ExistingFunctionIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                            ,0x8b7,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aiStack_1f8[0] = *(int *)puVar1;
  }
  FRigVMFunction::FRigVMFunction
            ((FRigVMFunction *)(auStack_1d0 + 8),param_1,param_2,param_3,aiStack_1f8[0],param_4);
  if ((FStack_1c8.Index != aiStack_1f8[0]) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Function.Index == FunctionIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                          ,0x8bc,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (aiStack_1f8[0] == (int)this->_padding_) {
    TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::AddElement
              ((TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (FRigVMFunction *)(auStack_1d0 + 8));
  }
  else {
    pFVar13 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                        ((TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *)
                         &this->_padding_,aiStack_1f8[0]);
    ::FString::operator=(&pFVar13->Name,(FString *)(auStack_1d0 + 8));
    pTVar2 = &pFVar13->Arguments;
    pFVar13->Struct = FStack_1c8.Struct;
    pFVar13->Factory = FStack_1c8.Factory;
    pFVar13->OwnerRegistry = FStack_1c8.OwnerRegistry;
    pFVar13->FunctionPtr = FStack_1c8.FunctionPtr;
    pFVar13->Index = FStack_1c8.Index;
    pFVar13->TemplateIndex = FStack_1c8.TemplateIndex;
    pFVar13->PermutationIndex = FStack_1c8.PermutationIndex;
    if (pTVar2 != &FStack_1c8.Arguments) {
      DestructItems<FRigVMFunctionArgument,int>
                ((FRigVMFunctionArgument *)(pTVar2->AllocatorInstance).Data,
                 (pFVar13->Arguments).ArrayNum);
      iVar5 = FStack_1c8.Arguments.ArrayNum;
      FVar8.Data = FStack_1c8.Arguments.AllocatorInstance.Data;
      piVar3 = &(pFVar13->Arguments).ArrayMax;
      (pFVar13->Arguments).ArrayNum = FStack_1c8.Arguments.ArrayNum;
      if ((FStack_1c8.Arguments.ArrayNum == 0) && (*piVar3 == 0)) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,FStack_1c8.Arguments.ArrayNum,*piVar3,&pTVar2->AllocatorInstance,
                   FStack_1c8.Arguments.ArrayNum,piVar3);
        ConstructItems<FRigVMFunctionArgument,FRigVMFunctionArgument,int>
                  ((pTVar2->AllocatorInstance).Data,(FRigVMFunctionArgument *)FVar8.Data,iVar5);
      }
    }
    TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::operator=
              (&pFVar13->ArgumentTypeIndices,&FStack_1c8.ArgumentTypeIndices);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&pFVar13->ArgumentNames,&FStack_1c8.ArgumentNames);
  }
  pFVar13 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                      ((TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_,aiStack_1f8[0]);
  pFVar13->OwnerRegistry = (FRigVMRegistry_NoLock *)this;
  pFStack_158 = &FStack_1d8;
  piStack_150 = aiStack_1f8;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->_padding_,(TPairInitializer<FName_const_&,int_const_&> *)auStack_1d0,
             (bool *)&pFStack_158);
  pTVar7 = CVarRigVMEnableLocalizedRegistry.Ref;
  if ((char)this->_padding_ != '\0') {
    bVar10 = IsInParallelGameThread();
    if (bVar10) {
LAB_14a1052f3:
      lVar11 = 0;
    }
    else {
      bVar10 = IsInGameThread();
      lVar11 = 1;
      if (bVar10) goto LAB_14a1052f3;
    }
    if (pTVar7->ShadowedValue[lVar11] == true) goto LAB_14a1053c4;
  }
  if (param_3 == (UScriptStruct *)0x0) {
    TStack_1f0.Field = (FField *)0x0;
  }
  else {
    TStack_1f0.Field = (FField *)param_3->_padding_;
  }
  TStack_1f0.InterfaceIndex = -1;
  TStack_1f0.bIncludeSuper = true;
  TStack_1f0.bIncludeDeprecated = true;
  TStack_1f0.bIncludeInterface = false;
  TStack_1f0.Struct = (UStruct *)param_3;
  TFieldIterator<FProperty>::IterateToNext(&TStack_1f0);
  pFVar6 = (FProperty *)TStack_1f0.Field;
  while (TStack_1f0.Field = (FField *)pFVar6, pFVar6 != (FProperty *)0x0) {
    FRigVMTemplateArgument::FRigVMTemplateArgument
              ((FRigVMTemplateArgument *)auStack_c8,pFVar6,(FRigVMRegistryHandle *)&this->_padding_)
    ;
    if (auStack_c8._64_8_ != 0) {
      plVar14 = (longlong *)(auStack_c8 + 0x50);
      if ((longlong *)auStack_c8._104_8_ != (longlong *)0x0) {
        plVar14 = (longlong *)auStack_c8._104_8_;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if ((FScriptContainerElement *)auStack_c8._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_c8._40_8_);
    }
    if ((FScriptContainerElement *)auStack_c8._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_c8._16_8_);
    }
    TStack_1f0.Field = (FField *)pFVar6->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&TStack_1f0);
    pFVar6 = (FProperty *)TStack_1f0.Field;
  }
LAB_14a1053c4:
  if (FStack_1c8.ArgumentNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c8.ArgumentNames.AllocatorInstance.Data);
  }
  if (FStack_1c8.ArgumentTypeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c8.ArgumentTypeIndices.AllocatorInstance.Data);
  }
  DestructItems<FRigVMFunctionArgument,int>
            ((FRigVMFunctionArgument *)FStack_1c8.Arguments.AllocatorInstance.Data,
             FStack_1c8.Arguments.ArrayNum);
  if ((FRigVMFunctionArgument *)FStack_1c8.Arguments.AllocatorInstance.Data !=
      (FRigVMFunctionArgument *)0x0) {
    FMemory::Free(FStack_1c8.Arguments.AllocatorInstance.Data);
  }
  if (FStack_1c8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c8.Name.Data.AllocatorInstance.Data);
  }
  return;
}

// RemoveFactory_NoLock @ 14a107e30

bool __thiscall
FRigVMRegistry_RWLock::RemoveFactory_NoLock(FRigVMRegistry_RWLock *this,UScriptStruct *param_1)

{
  longlong *plVar1;
  void *_Dst;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  FRigVMTemplate *pFVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uStackX_10;
  FName FStackX_18;
  UScriptStruct *pUStackX_20;
  
  plVar1 = &this->_padding_;
  plVar2 = (longlong *)*plVar1;
  iVar10 = (int)this->_padding_;
  plVar11 = plVar2;
  while( true ) {
    if (plVar11 == plVar2 + iVar10) {
      return false;
    }
    if (*(UScriptStruct **)(*plVar11 + 0x28) == param_1) break;
    plVar11 = plVar11 + 1;
  }
  uVar8 = (uint)((longlong)plVar11 - (longlong)plVar2 >> 3);
  if (uVar8 == 0xffffffff) {
    return false;
  }
  if ((((int)uVar8 < 0) || (iVar10 <= (int)uVar8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Factories.IsValidIndex(FactoryIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x96d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar12 = ~uVar8 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar8 < (int)this->_padding_) {
    uVar7 = uVar12;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar13 = (longlong)(int)uVar8;
  pFVar9 = FRigVMDispatchFactory::GetTemplate_NoLock
                     (*(FRigVMDispatchFactory **)(*plVar1 + lVar13 * 8),
                      (FRigVMRegistryHandle *)&this->_padding_);
  cVar6 = (**(code **)(this->_padding_ + 0x48))(this,pFVar9->Index);
  if (cVar6 == '\0') {
    return false;
  }
  uVar7 = 0;
  if ((int)uVar8 < (int)this->_padding_) {
    uVar7 = uVar12;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FRigVMDispatchFactory::GetFactoryName(*(FRigVMDispatchFactory **)(*plVar1 + lVar13 * 8));
  pcVar3 = *(code **)(param_1->_padding_ + 0x300);
  uVar7 = 0;
  if ((int)uVar8 < (int)this->_padding_) {
    uVar7 = uVar12;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  (*pcVar3)(param_1,*(undefined8 *)(*plVar1 + lVar13 * 8),1);
  uVar7 = 0;
  if ((int)uVar8 < (int)this->_padding_) {
    uVar7 = uVar12;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FMemory::Free(*(void **)(*plVar1 + lVar13 * 8));
  uVar7 = 0;
  if ((int)uVar8 < (int)this->_padding_) {
    uVar7 = uVar12;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  _Dst = (void *)(*plVar1 + lVar13 * 8);
  iVar10 = (int)this->_padding_ + ~uVar8;
  if (iVar10 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar10 << 3);
  }
  *(int *)&this->_padding_ = (int)this->_padding_ + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(ForAnyElementType *)plVar1,(int)this->_padding_,
             (int *)((longlong)&this->_padding_ + 4));
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    uVar8 = ::GetTypeHash((FNameEntryId)(uint)uStackX_10);
    TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
                         *)&this->_padding_,(int)((ulonglong)uStackX_10 >> 0x20) + uVar8,&FStackX_18
                       );
  }
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    pUStackX_20 = param_1;
    TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<UScriptStruct_const_*>
              ((TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,uVar8 >> 0x10 ^ uVar8,&pUStackX_20);
  }
  return true;
}

// RemoveFunction_NoLock @ 14a108420

bool __thiscall
FRigVMRegistry_RWLock::RemoveFunction_NoLock(FRigVMRegistry_RWLock *this,int param_1)

{
  longlong *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FRigVMFunction *pFVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  longlong *this_01;
  int iVar9;
  longlong lVar10;
  int aiStackX_8 [2];
  undefined4 auStackX_10 [2];
  FName FStackX_18;
  FName FStackX_20;
  ForAnyElementType FStack_d8;
  int iStack_d0;
  int iStack_cc;
  FRigVMFunction FStack_c8;
  FName *pFStack_58;
  undefined4 *puStack_50;
  
  if (((param_1 < 0) || ((int)this->_padding_ <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Functions.IsValidIndex(InFunctionIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x92c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  this_00 = &this->_padding_;
  pFVar6 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                     ((TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *)this_00,
                      param_1);
  if (((pFVar6->Name).Data.ArrayNum < 2) ||
     (pFVar6->FunctionPtr ==
      (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
       *)0x0)) {
    return false;
  }
  pFVar6 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                     ((TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *)this_00,
                      param_1);
  FStack_d8.Data = (FScriptContainerElement *)0x0;
  iStack_d0 = (pFVar6->Name).Data.ArrayNum;
  lVar10 = (longlong)iStack_d0;
  _Src = (pFVar6->Name).Data.AllocatorInstance.Data;
  if (iStack_d0 == 0) {
    iStack_cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iStack_d0,0,&FStack_d8,iStack_d0,&iStack_cc);
    memcpy(FStack_d8.Data,_Src,lVar10 * 2);
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (iStack_d0 != 0) {
    FVar8.Data = FStack_d8.Data;
  }
  ::FName::FName(&FStackX_18,(wchar_t *)FVar8.Data);
  if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data);
  }
  FVar2 = FStackX_18;
  FStackX_20 = FStackX_18;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    uVar5 = ::GetTypeHash(FStackX_18.ComparisonIndex.Value);
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                       *)&this->_padding_,FVar2.Number + uVar5,&FStackX_20);
  }
  FVar2 = FStackX_18;
  auStackX_10[0] = 0xffffffff;
  this_01 = &this->_padding_;
  uVar5 = ::GetTypeHash(FStackX_18.ComparisonIndex.Value);
  uVar5 = uVar5 + FVar2.Number;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar7 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar7 = &this->_padding_;
    }
    iVar9 = *(int *)((longlong)plVar7 + (ulonglong)((int)this->_padding_ - 1U & uVar5) * 4);
    if (iVar9 != -1) {
      do {
        lVar10 = *this_01 + (longlong)iVar9 * 0x14;
        if (*(FName *)(*this_01 + (longlong)iVar9 * 0x14) == FStackX_18) {
          if (lVar10 != 0) goto LAB_14a108349;
          break;
        }
        iVar9 = *(int *)(lVar10 + 0xc);
      } while (iVar9 != -1);
    }
  }
  pFStack_58 = &FStackX_18;
  puStack_50 = auStackX_10;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TPairInitializer<FName_const_&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this_01,(uint)aiStackX_8,(TPairInitializer<FName_const_&,int_&&> *)(ulonglong)uVar5,
             (bool *)&pFStack_58);
  lVar10 = *this_01 + (longlong)aiStackX_8[0] * 0x14;
LAB_14a108349:
  *(int *)(lVar10 + 8) = param_1;
  FStack_c8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_c8.Name.Data.ArrayNum = 0;
  FStack_c8.Name.Data.ArrayMax = 0;
  FStack_c8.Struct = (UScriptStruct *)0x0;
  FStack_c8.Factory = (FRigVMDispatchFactory *)0x0;
  FStack_c8.OwnerRegistry = (FRigVMRegistry_NoLock *)0x0;
  FStack_c8.FunctionPtr =
       (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
        *)0x0;
  FStack_c8.Index = -1;
  FStack_c8.TemplateIndex = -1;
  FStack_c8.PermutationIndex = -1;
  FStack_c8.Arguments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_c8.Arguments.ArrayNum = 0;
  FStack_c8.Arguments.ArrayMax = 0;
  FStack_c8.ArgumentTypeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_c8.ArgumentTypeIndices.ArrayNum = 0;
  FStack_c8.ArgumentTypeIndices.ArrayMax = 0;
  FStack_c8.ArgumentNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_c8.ArgumentNames.ArrayNum = 0;
  FStack_c8.ArgumentNames.ArrayMax = 0;
  pFVar6 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                     ((TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *)this_00,
                      param_1);
  FRigVMFunction::operator=(pFVar6,&FStack_c8);
  if (FStack_c8.ArgumentNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.ArgumentNames.AllocatorInstance.Data);
  }
  if (FStack_c8.ArgumentTypeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.ArgumentTypeIndices.AllocatorInstance.Data);
  }
  FVar8.Data = FStack_c8.Arguments.AllocatorInstance.Data;
  DestructItems<FRigVMFunctionArgument,int>
            ((FRigVMFunctionArgument *)FStack_c8.Arguments.AllocatorInstance.Data,
             FStack_c8.Arguments.ArrayNum);
  if ((FRigVMFunctionArgument *)FVar8.Data != (FRigVMFunctionArgument *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  if (FStack_c8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Name.Data.AllocatorInstance.Data);
  }
  return true;
}

// RemoveTemplate_NoLock @ 14a108820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigVMRegistry_RWLock::RemoveTemplate_NoLock(FRigVMRegistry_RWLock *this,int param_1)

{
  longlong *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  FRigVMTemplate *pFVar8;
  FRigVMTemplate *this_01;
  longlong lVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  longlong *this_02;
  int iVar12;
  undefined1 auStack_1e8 [32];
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [8];
  FName FStack_1b0;
  int aiStack_1a8 [2];
  FName FStack_1a0;
  FName FStack_198;
  FName *pFStack_190;
  FName *pFStack_188;
  FRigVMTemplate FStack_180;
  ulonglong uStack_30;
  
  uStack_30 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (((param_1 < 0) || ((int)this->_padding_ <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Templates.IsValidIndex(InTemplateIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x982,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  this_00 = &this->_padding_;
  pFVar8 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                     ((TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)this_00,
                      param_1);
  if (pFVar8->Notation != (FName)0x0) {
    pFVar8 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                       ((TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)this_00,
                        param_1);
    pFVar11 = (pFVar8->Permutations).AllocatorInstance.Data;
    iVar12 = (pFVar8->Permutations).ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar12 * 4;
    while( true ) {
      if ((pFVar8->Permutations).ArrayNum != iVar12) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStack_1b8);
      }
      if (pFVar11 == pFVar1) {
        pFVar8 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                           ((TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)
                            &this->_padding_,param_1);
        FStack_1a0 = pFVar8->Notation;
        FStack_198 = FStack_1a0;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          FStack_1b0 = FStack_1a0;
          uVar7 = ::GetTypeHash(FStack_1a0.ComparisonIndex.Value);
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                             *)&this->_padding_,FStack_1b0.Number + uVar7,&FStack_198);
        }
        FVar3 = FStack_1a0;
        FStack_1b0.ComparisonIndex.Value = 0xffffffff;
        this_02 = &this->_padding_;
        uVar7 = ::GetTypeHash(FStack_1a0.ComparisonIndex.Value);
        uVar7 = uVar7 + FVar3.Number;
        if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) goto LAB_14a108762;
        plVar10 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar10 = &this->_padding_;
        }
        iVar12 = *(int *)((longlong)plVar10 + (ulonglong)((int)this->_padding_ - 1U & uVar7) * 4);
        if (iVar12 == -1) goto LAB_14a108762;
        goto LAB_14a108740;
      }
      if ((*(int *)pFVar11 != -1) &&
         (cVar6 = (**(code **)(this->_padding_ + 0x30))(this), cVar6 == '\0')) break;
      pFVar11 = pFVar11 + 4;
    }
  }
  return false;
  while (iVar12 = *(int *)(lVar9 + 0xc), iVar12 != -1) {
LAB_14a108740:
    lVar9 = *this_02 + (longlong)iVar12 * 0x14;
    if (*(FName *)(*this_02 + (longlong)iVar12 * 0x14) == FStack_1a0) {
      if (lVar9 != 0) goto LAB_14a1087a4;
      break;
    }
  }
LAB_14a108762:
  pFStack_190 = &FStack_1a0;
  uStack_1c8 = 0;
  pFStack_188 = &FStack_1b0;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TPairInitializer<FName_const_&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this_02,(uint)aiStack_1a8,(TPairInitializer<FName_const_&,int_&&> *)(ulonglong)uVar7
             ,(bool *)&pFStack_190);
  lVar9 = *this_02 + (longlong)aiStack_1a8[0] * 0x14;
LAB_14a1087a4:
  *(int *)(lVar9 + 8) = param_1;
  pFVar8 = FRigVMTemplate::FRigVMTemplate(&FStack_180);
  this_01 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                      ((TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)this_00,
                       param_1);
  FRigVMTemplate::operator=(this_01,pFVar8);
  FRigVMTemplate::~FRigVMTemplate(&FStack_180);
  return true;
}

// RemoveType_NoLock @ 14a109e70

bool __thiscall
FRigVMRegistry_RWLock::RemoveType_NoLock(FRigVMRegistry_RWLock *this,FSoftObjectPath *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  UObject *pUVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  uint local_10;
  
  uVar6 = ::GetTypeHash(param_1);
  iVar7 = TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSoftObjectPath>
                    ((TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
                      *)&this->_padding_,uVar6,param_1);
  puVar12 = (undefined8 *)0x0;
  if (iVar7 != -1) {
    lVar8 = (longlong)iVar7 * 0x50 + this->_padding_;
    puVar9 = (undefined8 *)(lVar8 + 0x20);
    if (lVar8 == 0) {
      puVar9 = puVar12;
    }
    if (puVar9 != (undefined8 *)0x0) {
      if (*(int *)(puVar9 + 1) == -1) {
        return false;
      }
      local_28 = *puVar9;
      local_20 = *(undefined4 *)(puVar9 + 1);
      cVar3 = (**(code **)(this->_padding_ + 200))(this,&local_28);
      if (cVar3 == '\0') {
        return false;
      }
      return true;
    }
  }
  pUVar10 = FSoftObjectPath::ResolveObject(param_1);
  if ((pUVar10 != (UObject *)0x0) && (puVar9 = puVar12, 0 < (int)this->_padding_)) {
    do {
      uVar11 = (uint)puVar12;
      uVar6 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pUVar1 = *(UObject **)(this->_padding_ + 8 + (longlong)puVar9);
      if ((pUVar1 != (UObject *)0x0) && (pUVar1 == pUVar10)) {
        local_18 = 0;
        local_10 = uVar11;
        cVar3 = (**(code **)(this->_padding_ + 200))(this,&local_18);
        if (cVar3 != '\0') {
          return true;
        }
      }
      puVar12 = (undefined8 *)(ulonglong)(uVar11 + 1);
      puVar9 = puVar9 + 6;
    } while ((int)(uVar11 + 1) < (int)this->_padding_);
  }
  return false;
}

// RemoveType_NoLock @ 14a10a000

bool __thiscall
FRigVMRegistry_RWLock::RemoveType_NoLock(FRigVMRegistry_RWLock *this,TRigVMTypeIndex *param_1)

{
  bool bVar1;
  TRigVMTypeIndex local_18 [2];
  
  local_18[0].Name = param_1->Name;
  local_18[0].Index = param_1->Index;
  bVar1 = FRigVMRegistry_NoLock::RemoveType_NoLock((FRigVMRegistry_NoLock *)this,local_18);
  return bVar1;
}

// Reset_NoLock @ 14a10b270

void __thiscall FRigVMRegistry_RWLock::Reset_NoLock(FRigVMRegistry_RWLock *this)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStackX_8 [8];
  
  puVar5 = (undefined8 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<FRigVMDispatchFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (puVar5 == puVar1) break;
    pvVar3 = (void *)*puVar5;
    plVar4 = *(longlong **)((longlong)pvVar3 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x300))();
    }
    FMemory::Free(pvVar3);
    puVar5 = puVar5 + 1;
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,(int *)((longlong)&this->_padding_ + 4)
              );
  }
  TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  return;
}

// operator() @ 15054ba70

bool __thiscall `FRigVMRegistry_RWLock::EnsureLocked'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3262262746346943501>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3262262746346943501>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054bb10

bool __thiscall `FRigVMRegistry_RWLock::EnsureLocked'::__l14::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3262262746346943494>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3262262746346943494>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

