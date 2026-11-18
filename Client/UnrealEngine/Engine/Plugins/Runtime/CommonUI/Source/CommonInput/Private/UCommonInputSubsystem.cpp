// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 46

// StaticClass @ 14a76d380

UClass * __cdecl UCommonInputSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputSubsystem",
               &Z_Registration_Info_UClass_UCommonInputSubsystem.InnerSingleton,
               StaticRegisterNativesUCommonInputSubsystem,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonInputSubsystem>,
               InternalVTableHelperCtorCaller<UCommonInputSubsystem>,local_res8,
               ULocalPlayerSubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputSubsystem.InnerSingleton;
}

// UCommonInputSubsystem @ 14a771f60

UCommonInputSubsystem * __thiscall
UCommonInputSubsystem::UCommonInputSubsystem(UCommonInputSubsystem *this,FVTableHelper *param_1)

{
  ULocalPlayerSubsystem::ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonInputSubsystem__6B_;
  *(undefined8 *)&this->OnInputMethodChangedNative = 0;
  *(undefined8 *)&(this->OnInputMethodChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputMethodChangedNative).field_0x10 = 0;
  (this->CommonInputPreprocessor).Object = (FCommonInputPreprocessor *)0x0;
  (this->CommonInputPreprocessor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TickHandle).Object = (FElement *)0x0;
  (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnInputMethodChanged = 0;
  *(undefined8 *)&(this->OnInputMethodChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputMethodChanged).field_0x10 = 0;
  this->NumberOfInputMethodChangesRecently = 0;
  this->LastInputMethodChangeTime = 0.0;
  this->LastTimeInputMethodThrashingBegan = 0.0;
  (this->GamepadInputType).ComparisonIndex = 0;
  (this->GamepadInputType).Number = 0;
  this->bInputMethodLockedByThrashing = false;
  *(undefined8 *)&this->CurrentInputLocks = 0;
  *(undefined8 *)&(this->CurrentInputLocks).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentInputLocks).field_0x20 = 0;
  *(undefined8 *)&(this->OnInputMethodChangedNative).field_0x18 = 2;
  *(undefined4 *)&(this->CurrentInputLocks).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentInputLocks).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentInputLocks).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentInputLocks).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentInputLocks).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentInputLocks).field_0x48 = 0;
  (this->CurrentInputLock).bIsSet = false;
  (this->ActionDomainTable).field0_0x0.DebugPtr = (UCommonInputActionDomainTable *)0x0;
  return this;
}

// UCommonInputSubsystem @ 14a772030

UCommonInputSubsystem * __thiscall
UCommonInputSubsystem::UCommonInputSubsystem(UCommonInputSubsystem *this)

{
  ULocalPlayerSubsystem::ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this);
  this->_padding_ = (longlong)&___7UCommonInputSubsystem__6B_;
  *(undefined8 *)&this->OnInputMethodChangedNative = 0;
  *(undefined8 *)&(this->OnInputMethodChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputMethodChangedNative).field_0x10 = 0;
  (this->CommonInputPreprocessor).Object = (FCommonInputPreprocessor *)0x0;
  (this->CommonInputPreprocessor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TickHandle).Object = (FElement *)0x0;
  (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnInputMethodChanged = 0;
  *(undefined8 *)&(this->OnInputMethodChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputMethodChanged).field_0x10 = 0;
  this->NumberOfInputMethodChangesRecently = 0;
  this->LastInputMethodChangeTime = 0.0;
  this->LastTimeInputMethodThrashingBegan = 0.0;
  (this->GamepadInputType).ComparisonIndex = 0;
  (this->GamepadInputType).Number = 0;
  this->bInputMethodLockedByThrashing = false;
  *(undefined8 *)&this->CurrentInputLocks = 0;
  *(undefined8 *)&(this->CurrentInputLocks).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentInputLocks).field_0x20 = 0;
  *(undefined8 *)&(this->OnInputMethodChangedNative).field_0x18 = 2;
  *(undefined4 *)&(this->CurrentInputLocks).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentInputLocks).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentInputLocks).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentInputLocks).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentInputLocks).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentInputLocks).field_0x48 = 0;
  (this->CurrentInputLock).bIsSet = false;
  (this->ActionDomainTable).field0_0x0.DebugPtr = (UCommonInputActionDomainTable *)0x0;
  return this;
}

// ~UCommonInputSubsystem @ 14a772700

void __thiscall UCommonInputSubsystem::~UCommonInputSubsystem(UCommonInputSubsystem *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->_padding_ = (longlong)&___7UCommonInputSubsystem__6B_;
  *(undefined4 *)&(this->CurrentInputLocks).field_0x48 = 0;
  pvVar3 = *(void **)&(this->CurrentInputLocks).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_ECommonInputType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_ECommonInputType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->CurrentInputLocks);
  pvVar3 = *(void **)&(this->OnInputMethodChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputMethodChanged);
  pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CommonInputPreprocessor).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInputMethodChangedNative).field_0x8,
             *(int *)&(this->OnInputMethodChangedNative).field_0x10);
  pvVar3 = *(void **)&(this->OnInputMethodChangedNative).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputMethodChangedNative);
  ULocalPlayerSubsystem::~ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this);
  return;
}

// AddOrRemoveInputTypeLock @ 14a7738f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonInputSubsystem::AddOrRemoveInputTypeLock
          (UCommonInputSubsystem *this,FName param_1,ECommonInputType param_2,bool param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  FName FVar7;
  TMap<FName,ECommonInputType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ECommonInputType,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  ECommonInputType *pEVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  TMap<FName,ECommonInputType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ECommonInputType,0>_>
  *pTVar17;
  uint uVar18;
  FName local_res10;
  undefined1 local_res20 [8];
  undefined1 local_d8 [8];
  TMap<FName,ECommonInputType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ECommonInputType,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  FName local_98;
  TMap<FName,ECommonInputType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ECommonInputType,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString local_60;
  FString local_50;
  
  local_res10 = param_1;
  if ((param_3) && (bVar9 = PlatformSupportsInputType(this,param_2), FVar7 = local_res10, bVar9)) {
    uVar10 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
    pEVar11 = TMapBase<FName,enum_ECommonInputType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_ECommonInputType,0>_>
              ::FindOrAddImpl<FName_const_&>
                        (&this->CurrentInputLocks,uVar10 + FVar7.Number,&local_res10);
    *pEVar11 = param_2;
    if ((byte)LogCommonInput._0_1_ < 5) goto LAB_14a773a27;
    ::FName::ToString(&local_res10,&local_60);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCommonInput);
  }
  else {
    FVar7 = local_res10;
    local_98 = local_res10;
    if (*(int *)&(this->CurrentInputLocks).field_0x8 !=
        *(int *)&(this->CurrentInputLocks).field_0x34) {
      uVar10 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
      TSet<TTuple<FName,enum_ECommonInputType>,TDefaultMapHashableKeyFuncs<FName,enum_ECommonInputType,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>(&this->CurrentInputLocks,FVar7.Number + uVar10,&local_98);
    }
    if ((byte)LogCommonInput._0_1_ < 5) goto LAB_14a773a27;
    ::FName::ToString(&local_res10,&local_50);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCommonInput);
    local_60.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
LAB_14a773a27:
  pTVar17 = &this->CurrentInputLocks;
  iStack_c8 = 0;
  puVar1 = &(this->CurrentInputLocks).field_0x10;
  iVar4 = *(int *)&(this->CurrentInputLocks).field_0x28;
  uVar10 = 0xffffffff;
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->CurrentInputLocks).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar12 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14a773aad;
      uVar14 = puVar16[lVar12 + 1];
    }
    uStack_c4 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_a0 = (int)lVar12;
    iStack_b4 = local_b0 + -1 + local_a0;
    if (iVar4 < iStack_b4) {
      iStack_b4 = iVar4;
    }
  }
LAB_14a773aad:
  uVar14 = *(uint *)&(this->CurrentInputLocks).field_0x28;
  iStack_a8 = *(int *)&(this->CurrentInputLocks).field_0x8 -
              *(int *)&(this->CurrentInputLocks).field_0x34;
  uVar18 = uVar14 & 0xffffffe0;
  uStack_b8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_88.CurrentBitIndex = iStack_b4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_88._28_4_ = iStack_b4;
  TStack_88.BaseBitIndex = local_b0;
  uStack_68 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = pTVar17;
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_90 = pTVar17;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->CurrentInputLocks).field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&(this->CurrentInputLocks).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a773bb0;
      uVar14 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar18;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_14a773bb0:
  while( true ) {
    uVar18 = uVar10;
    pTVar8 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<FName,enum_ECommonInputType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_88.CurrentBitIndex == uVar14) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar17))
    break;
    bVar3 = *(byte *)(*(longlong *)pTVar8 + 8 + (longlong)TStack_88.CurrentBitIndex * 0x14);
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    uVar10 = (uint)bVar3;
    if ((int)(uint)bVar3 <= (int)uVar18) {
      uVar10 = uVar18;
    }
  }
  if (uVar18 == 0xffffffff) {
    if ((this->CurrentInputLock).bIsSet != false) {
      (this->CurrentInputLock).bIsSet = false;
    }
  }
  else if ((TOptional<ECommonInputType> *)local_d8 != &this->CurrentInputLock) {
    (this->CurrentInputLock).TypedValue = (ECommonInputType)uVar18;
    (this->CurrentInputLock).bIsSet = true;
  }
  RecalculateCurrentInputType(this);
  return;
}

// BroadcastInputMethodChanged @ 14a773c60

void __thiscall UCommonInputSubsystem::BroadcastInputMethodChanged(UCommonInputSubsystem *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ECommonInputType local_res8 [8];
  LARGE_INTEGER local_res10;
  FDestructionSentinel local_48;
  
  lVar9 = (**(code **)(this->_padding_ + 0x180))();
  if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x18d) & 0x40) == 0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnInputMethodChangedNative,(FWriteAccessScope *)&local_48);
    puVar1 = &(this->OnInputMethodChangedNative).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar10 = *(int *)&(this->OnInputMethodChangedNative).field_0x10 - 1;
    if (-1 < (int)uVar10) {
      lVar9 = (longlong)(int)uVar10 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar10 < *(int *)&(this->OnInputMethodChangedNative).field_0x10) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->OnInputMethodChangedNative).field_0x8;
        if (((*(int *)(lVar9 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar9 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    puVar1 = &(this->OnInputMethodChangedNative).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnInputMethodChangedNative,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    local_res8[0] = this->CurrentInputType;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnInputMethodChanged,
               local_res8);
    QueryPerformanceCounter(&local_res10);
    this->LastInputMethodChangeTime =
         (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return;
}

// CheckForInputMethodThrashing @ 14a773e10

bool __thiscall
UCommonInputSubsystem::CheckForInputMethodThrashing
          (UCommonInputSubsystem *this,ECommonInputType param_1)

{
  FName FVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  UCommonInputSettings *pUVar5;
  FName *pFVar6;
  UCommonInputSettings *pUVar7;
  undefined1 *puVar8;
  LARGE_INTEGER local_res18;
  
  pUVar5 = ICommonInputModule::GetSettings();
  if (pUVar5->bEnableInputMethodThrashingProtection != false) {
    QueryPerformanceCounter(&local_res18);
    dVar2 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (dVar2 < pUVar5->InputMethodThrashingCooldownInSeconds +
                this->LastTimeInputMethodThrashingBegan) {
      return true;
    }
    pFVar6 = ::FName::FName((FName *)&local_res18.s,L"InputMethodThrashing");
    FVar1 = *pFVar6;
    uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (*(int *)&(this->CurrentInputLocks).field_0x8 !=
        *(int *)&(this->CurrentInputLocks).field_0x34) {
      puVar8 = *(undefined1 **)&(this->CurrentInputLocks).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->CurrentInputLocks).field_0x38;
      }
      iVar4 = *(int *)(puVar8 + (ulonglong)
                                (*(int *)&(this->CurrentInputLocks).field_0x48 - 1U &
                                FVar1.Number + uVar3) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FName *)(*(longlong *)&this->CurrentInputLocks + (longlong)iVar4 * 0x14) == FVar1) {
            pFVar6 = ::FName::FName((FName *)&local_res18.s,L"InputMethodThrashing");
            AddOrRemoveInputTypeLock(this,*pFVar6,MouseAndKeyboard,false);
            break;
          }
          iVar4 = *(int *)(*(longlong *)&this->CurrentInputLocks + 0xc + (longlong)iVar4 * 0x14);
        } while (iVar4 != -1);
      }
    }
    if ((param_1 == MouseAndKeyboard) || (param_1 == Gamepad)) {
      pUVar7 = ICommonInputModule::GetSettings();
      QueryPerformanceCounter(&local_res18);
      if (((double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000) - this->LastInputMethodChangeTime <
          pUVar7->InputMethodThrashingWindowInSeconds) {
        iVar4 = this->NumberOfInputMethodChangesRecently + 1;
        this->NumberOfInputMethodChangesRecently = iVar4;
        if (pUVar5->InputMethodThrashingLimit < iVar4) {
          this->LastTimeInputMethodThrashingBegan = dVar2;
          pFVar6 = ::FName::FName((FName *)&local_res18.s,L"InputMethodThrashing");
          AddOrRemoveInputTypeLock(this,*pFVar6,MouseAndKeyboard,true);
          this->NumberOfInputMethodChangesRecently = 0;
          return true;
        }
        return false;
      }
    }
    this->NumberOfInputMethodChangesRecently = 0;
  }
  return false;
}

// ClampPositionToViewport @ 14a773ff0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector2<double> * __thiscall
UCommonInputSubsystem::ClampPositionToViewport
          (UCommonInputSubsystem *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  UWorld *this_00;
  UGameViewportClient *this_01;
  SWindow *pSVar7;
  TVector2<double> *pTVar8;
  FGeometry *pFVar9;
  TTransform2<float> *pTVar10;
  SWindow *pSVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fStack_64;
  SWindow *local_58;
  TSharedPtr<SViewport,1> local_48;
  TTransform2<float> local_38;
  
  pSVar7 = (SWindow *)0x0;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if ((this_00 == (UWorld *)0x0) || (bVar5 = UWorld::IsGameWorld(this_00), !bVar5))
  goto LAB_14a774296;
  this_01 = UWorld::GetGameViewport(this_00);
  if ((this_01 == (UGameViewportClient *)0x0) || (this_01->Viewport == (FViewport *)0x0)) {
LAB_14a774097:
    bVar5 = true;
    pSVar11 = pSVar7;
  }
  else {
    local_58 = (SWindow *)(this_01->Window).WeakReferenceCount.ReferenceController;
    if (local_58 != (SWindow *)0x0) {
      aVar4 = *(atomic<int> *)&local_58->_padding_;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          local_58 = pSVar7;
          pSVar7 = (SWindow *)&DAT_00000001;
          goto LAB_14a774097;
        }
        LOCK();
        aVar6 = *(atomic<int> *)&local_58->_padding_;
        bVar5 = aVar4 == aVar6;
        if (bVar5) {
          *(atomic<int> *)&local_58->_padding_ = (atomic<int>)((int)aVar4 + 1);
          aVar6 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar6;
      } while (!bVar5);
      pSVar7 = (this_01->Window).Object;
    }
    pSVar11 = (SWindow *)&DAT_00000001;
    bVar5 = pSVar7 == (SWindow *)0x0;
    pSVar7 = pSVar11;
    if (bVar5) goto LAB_14a774097;
    bVar5 = false;
  }
  if (pSVar11 != (SWindow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_58);
  }
  if (!bVar5) {
    UGameViewportClient::GetGameViewportWidget(this_01,&local_48);
    if (local_48.Object == (SViewport *)0x0) {
      dVar3 = (param_1->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    if ((local_48.Object == (SViewport *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TVector2<double> *)(*pcVar2)();
      return pTVar8;
    }
    pFVar9 = SWidget::GetCachedGeometry((SWidget *)local_48.Object);
    fVar12 = (float)(param_1->field0_0x0)._s_0.X;
    fVar13 = (float)(param_1->field0_0x0)._s_0.Y;
    pTVar10 = Inverse<TTransform2<float>_>(&local_38,&pFVar9->AccumulatedRenderTransform);
    local_58._0_4_ = SUB84(pFVar9->Size,0);
    dVar3 = (double)(fVar13 * (pTVar10->M).M[1][0] + fVar12 * (pTVar10->M).M[0][0] +
                    (pTVar10->Trans).field0_0x0._s_0.X);
    dVar14 = (double)(local_58._0_4_ - __real_3f800000);
    if (dVar3 <= (double)(local_58._0_4_ - __real_3f800000)) {
      dVar14 = dVar3;
    }
    if (dVar14 <= __real_3ff0000000000000) {
      dVar14 = __real_3ff0000000000000;
    }
    fStack_64 = SUB84(pFVar9->Size,4);
    dVar3 = (double)(fVar13 * (pTVar10->M).M[1][1] + fVar12 * (pTVar10->M).M[0][1] +
                    (pTVar10->Trans).field0_0x0._s_0.Y);
    dVar15 = (double)(fStack_64 - __real_3f800000);
    if (dVar3 <= (double)(fStack_64 - __real_3f800000)) {
      dVar15 = dVar3;
    }
    if (dVar15 <= __real_3ff0000000000000) {
      dVar15 = __real_3ff0000000000000;
    }
    fVar12 = (pFVar9->AccumulatedRenderTransform).M.M[0][1];
    fVar13 = (pFVar9->AccumulatedRenderTransform).M.M[1][1];
    fVar1 = (pFVar9->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)((float)dVar15 * (pFVar9->AccumulatedRenderTransform).M.M[1][0] +
                  (float)dVar14 * (pFVar9->AccumulatedRenderTransform).M.M[0][0] +
                 (pFVar9->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)((float)dVar14 * fVar12 + (float)dVar15 * fVar13 + fVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
LAB_14a774296:
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  return __return_storage_ptr__;
}

// Deinitialize @ 14a774730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonInputSubsystem::Deinitialize(UCommonInputSubsystem *this)

{
  TSharedPtr<FCommonInputPreprocessor,1> *pTVar1;
  FSlateApplication *this_00;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<IInputProcessor,1> local_18;
  
  pTVar1 = &this->CommonInputPreprocessor;
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this_00 = FSlateApplication::Get();
    local_18.SharedReferenceCount.ReferenceController =
         (this->CommonInputPreprocessor).SharedReferenceCount.ReferenceController;
    local_18.Object = (IInputProcessor *)pTVar1->Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::UnregisterInputPreProcessor(this_00,&local_18);
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FCommonInputPreprocessor,1> *)&local_28) {
    pTVar1->Object = (FCommonInputPreprocessor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CommonInputPreprocessor).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18.Object = (IInputProcessor *)(this->TickHandle).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->TickHandle).WeakReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker((TWeakPtr<FTSTicker::FElement,1> *)&local_18);
  return;
}

// Get @ 14a774cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonInputSubsystem * __cdecl UCommonInputSubsystem::Get(ULocalPlayer *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UCommonInputSubsystem *pUVar5;
  
  if (param_1 == (ULocalPlayer *)0x0) {
    return (UCommonInputSubsystem *)0x0;
  }
  pUVar3 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_14a774ce7;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14a774ce7:
    pUVar4 = StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14a774d17;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_14a774d17:
  pUVar5 = (UCommonInputSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  return pUVar5;
}

// GetCurrentGamepadName @ 14a775140

FName __thiscall UCommonInputSubsystem::GetCurrentGamepadName(UCommonInputSubsystem *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->GamepadInputType;
  return in_RDX;
}

// GetCurrentInputType @ 14a775160

ECommonInputType __thiscall UCommonInputSubsystem::GetCurrentInputType(UCommonInputSubsystem *this)

{
  return this->CurrentInputType;
}

// GetDefaultInputType @ 14a775580

ECommonInputType __thiscall UCommonInputSubsystem::GetDefaultInputType(UCommonInputSubsystem *this)

{
  UClass *this_00;
  UCommonInputPlatformSettings *pUVar1;
  
  this_00 = Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = UPlatformSettingsManager::GetSettingsForPlatform<UCommonInputPlatformSettings>
                     ((UPlatformSettingsManager *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr)
  ;
  return pUVar1->DefaultInputType;
}

// GetInputTypeFilter @ 14a775a80

bool __thiscall
UCommonInputSubsystem::GetInputTypeFilter(UCommonInputSubsystem *this,ECommonInputType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->CommonInputPreprocessor).Object == (FCommonInputPreprocessor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return ((this->CommonInputPreprocessor).Object)->InputMethodPermissions[param_1];
}

// GetIsGamepadSimulatedClick @ 14a775ae0

bool __thiscall UCommonInputSubsystem::GetIsGamepadSimulatedClick(UCommonInputSubsystem *this)

{
  return this->bIsGamepadSimulatedClick;
}

// GetOnGamepadChangeDetected @ 14a775b10

FGamepadChangeDetectedEvent * __thiscall
UCommonInputSubsystem::GetOnGamepadChangeDetected(UCommonInputSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  FGamepadChangeDetectedEvent *pFVar3;
  
  if ((this->CommonInputPreprocessor).Object == (FCommonInputPreprocessor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGamepadChangeDetectedEvent *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->CommonInputPreprocessor).Object)->OnGamepadChangeDetected;
}

// GetPrivateStaticClass @ 14a775f10

UClass * __cdecl UCommonInputSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputSubsystem",
               &Z_Registration_Info_UClass_UCommonInputSubsystem.InnerSingleton,
               StaticRegisterNativesUCommonInputSubsystem,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonInputSubsystem>,
               InternalVTableHelperCtorCaller<UCommonInputSubsystem>,local_res8,
               ULocalPlayerSubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputSubsystem.InnerSingleton;
}

// HadAnyChangeOfInputMethodInTheLastThrashingWindow @ 14a7763a0

bool __thiscall
UCommonInputSubsystem::HadAnyChangeOfInputMethodInTheLastThrashingWindow
          (UCommonInputSubsystem *this)

{
  UCommonInputSettings *pUVar1;
  LARGE_INTEGER local_res8;
  
  pUVar1 = ICommonInputModule::GetSettings();
  QueryPerformanceCounter(&local_res8);
  return ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000) - this->LastInputMethodChangeTime <
         pUVar1->InputMethodThrashingWindowInSeconds;
}

// Initialize @ 14a776830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonInputSubsystem::Initialize(UCommonInputSubsystem *this,FSubsystemCollectionBase *param_1)

{
  TSharedPtr<FCommonInputPreprocessor,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  ECommonInputType EVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  UCommonInputActionDomainTable *pUVar7;
  undefined8 uVar8;
  USubsystem *pUVar9;
  UCommonInputSettings *pUVar10;
  UClass *this_00;
  UCommonInputPlatformSettings *pUVar11;
  undefined8 *puVar12;
  FSlateApplication *this_01;
  FTSTicker *this_02;
  ulong64 uVar13;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  UClass *local_res8;
  TSharedPtr<IInputProcessor,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_res8 = Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar9 = FSubsystemCollectionBase::InitializeDependency
                     (param_1,(TSubclassOf<USubsystem>)&local_res8);
  if (pUVar9 != (USubsystem *)0x0) {
    Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
  }
  pUVar10 = ICommonInputModule::GetSettings();
  UCommonInputSettings::LoadData(pUVar10);
  this_00 = Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar11 = UPlatformSettingsManager::GetSettingsForPlatform<UCommonInputPlatformSettings>
                      ((UPlatformSettingsManager *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr
                      );
  this->GamepadInputType = pUVar11->DefaultGamepadName;
  EVar4 = pUVar11->DefaultInputType;
  this->RawInputType = EVar4;
  this->CurrentInputType = EVar4;
  puVar12 = (undefined8 *)(**(code **)(this->_padding_ + 0x2d0))(this,&local_78);
  pTVar1 = &this->CommonInputPreprocessor;
  if (pTVar1 != (TSharedPtr<FCommonInputPreprocessor,1> *)puVar12) {
    pTVar1->Object = (FCommonInputPreprocessor *)*puVar12;
    *puVar12 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CommonInputPreprocessor).SharedReferenceCount,
               (FSharedReferencer<1> *)(puVar12 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this_01 = FSlateApplication::Get();
    local_78.Object = (IInputProcessor *)pTVar1->Object;
    local_78.SharedReferenceCount.ReferenceController =
         (this->CommonInputPreprocessor).SharedReferenceCount.ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::RegisterInputPreProcessor(this_01,&local_78,PreGame);
  }
  this_02 = FTSTicker::GetCoreTicker();
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonInputSubsystem____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_res8 = (UClass *)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_res8);
    puVar12[4] = Tick;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar14 = FTSTicker::AddTicker
                      (this_02,(TWeakPtr<FTSTicker::FElement,1> *)&local_78,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,
                       __real_3dcccccd);
  if (&this->TickHandle != pTVar14) {
    (this->TickHandle).Object = pTVar14->Object;
    pTVar14->Object = (FElement *)0x0;
    pTVar5 = (this->TickHandle).WeakReferenceCount.ReferenceController;
    (this->TickHandle).WeakReferenceCount.ReferenceController =
         (pTVar14->WeakReferenceCount).ReferenceController;
    (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if ((aVar3 == (atomic<int>)0x1) &&
       (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)((local_78.SharedReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.SharedReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  uVar8 = CVarInputKeysVisible._8_8_;
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar6 = *(code **)(*(longlong *)CVarInputKeysVisible._8_8_ + 0xe0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonInputSubsystem____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_res8 = (UClass *)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_res8);
    puVar12[4] = ShouldShowInputKeysChanged;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  (*pcVar6)(uVar8,local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  pUVar10 = ICommonInputModule::GetSettings();
  pUVar7 = (pUVar10->ActionDomainTablePtr).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar7 != (UCommonInputActionDomainTable *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UCommonInputActionDomainTable *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
  }
  (this->ActionDomainTable).field0_0x0.DebugPtr = pUVar7;
  return;
}

// IsInputMethodActive @ 14a777130

bool __thiscall
UCommonInputSubsystem::IsInputMethodActive(UCommonInputSubsystem *this,ECommonInputType param_1)

{
  return this->CurrentInputType == param_1;
}

// IsMobileGamepadKey @ 14a777150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UCommonInputSubsystem::IsMobileGamepadKey(FKey *param_1)

{
  ForAnyElementType FVar1;
  undefined1 auStackY_b8 [32];
  FKey local_78;
  FName local_60;
  FKeyDetails *local_58;
  TReferenceControllerBase<1> *local_50;
  FName local_48;
  FKeyDetails *local_40;
  TReferenceControllerBase<1> *local_38;
  FName local_30;
  FKeyDetails *local_28;
  TReferenceControllerBase<1> *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_78.KeyName = EKeys::Android_Back.KeyName;
    local_78.KeyDetails.Object = EKeys::Android_Back.KeyDetails.Object;
    local_78.KeyDetails.SharedReferenceCount =
         (FSharedReferencer<1>)
         EKeys::Android_Back.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::Android_Back.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Android_Back.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Android_Back.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_60 = EKeys::Android_Menu.KeyName;
    local_58 = EKeys::Android_Menu.KeyDetails.Object;
    local_50 = EKeys::Android_Menu.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::Android_Menu.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Android_Menu.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Android_Menu.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = EKeys::Android_Volume_Down.KeyName;
    local_40 = EKeys::Android_Volume_Down.KeyDetails.Object;
    local_38 = EKeys::Android_Volume_Down.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::Android_Volume_Down.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Android_Volume_Down.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Android_Volume_Down.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_30 = EKeys::Android_Volume_Up.KeyName;
    local_28 = EKeys::Android_Volume_Up.KeyDetails.Object;
    local_20 = EKeys::Android_Volume_Up.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::Android_Volume_Up.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Android_Volume_Up.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Android_Volume_Up.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    PhysicalMobileKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    PhysicalMobileKeys.ArrayNum = 4;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,4,0,&PhysicalMobileKeys.AllocatorInstance,4,&PhysicalMobileKeys.ArrayMax);
    ConstructItems<FKey,FKey,int>(PhysicalMobileKeys.AllocatorInstance.Data,&local_78,4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.KeyDetails.SharedReferenceCount.ReferenceController);
    atexit(`UCommonInputSubsystem::IsMobileGamepadKey'::__l2::
           _dynamic_atexit_destructor_for__PhysicalMobileKeys__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((FName *)PhysicalMobileKeys.AllocatorInstance.Data !=
      (FName *)(PhysicalMobileKeys.AllocatorInstance.Data +
               (longlong)PhysicalMobileKeys.ArrayNum * 0x18)) {
    FVar1.Data = PhysicalMobileKeys.AllocatorInstance.Data;
    do {
      if (*(FName *)FVar1.Data == param_1->KeyName) {
        return true;
      }
      FVar1.Data = FVar1.Data + 0x18;
    } while ((FName *)FVar1.Data !=
             (FName *)(PhysicalMobileKeys.AllocatorInstance.Data +
                      (longlong)PhysicalMobileKeys.ArrayNum * 0x18));
  }
  return false;
}

// IsUsingPointerInput @ 14a777440

bool __thiscall UCommonInputSubsystem::IsUsingPointerInput(UCommonInputSubsystem *this)

{
  ECommonInputType EVar1;
  
  EVar1 = this->RawInputType;
  if ((EVar1 != MouseAndKeyboard) && ((EVar1 == Gamepad || (EVar1 != Touch)))) {
    return false;
  }
  return true;
}

// LockInput @ 14a777910

ECommonInputType __thiscall
UCommonInputSubsystem::LockInput(UCommonInputSubsystem *this,ECommonInputType param_1)

{
  TOptional<ECommonInputType> *pTVar1;
  TOptional<ECommonInputType> local_res10 [12];
  
  local_res10[0].TypedValue = param_1;
  pTVar1 = local_res10;
  if ((this->CurrentInputLock).bIsSet != false) {
    pTVar1 = &this->CurrentInputLock;
  }
  return pTVar1->TypedValue;
}

// MakeInputProcessor @ 14a777940

TSharedPtr<FCommonInputPreprocessor,1> * __thiscall
UCommonInputSubsystem::MakeInputProcessor
          (UCommonInputSubsystem *this,
          TSharedPtr<FCommonInputPreprocessor,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FCommonInputPreprocessor,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar3 = ::operator_new(0x150);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FCommonInputPreprocessor *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCommonInputPreprocessor___00_SharedPointerInternals__6B_
    ;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    *(UCommonInputSubsystem **)&pTVar3[3].SharedReferenceCount = this;
    *(undefined1 *)&pTVar3[4]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&___7FCommonInputPreprocessor__6B_;
    pTVar3[3]._padding_ = 2;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[7]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[7]._padding_ + 4) = 0x80;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[8].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[9]._padding_ = 0;
    pTVar3[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[10]._padding_ = 0;
    pTVar3[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xb].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0xc]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0xc]._padding_ + 4) = 0x80;
    pTVar3[0xc].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0xe]._padding_ = 0;
    pTVar3[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xf]._padding_ = 0;
    pTVar3[0x10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x10].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x11]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x11]._padding_ + 4) = 0x80;
    pTVar3[0x11].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x11].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x12].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x12].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x13]._padding_ = 0;
    pTVar3[0x13].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x13].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x14]._padding_ = 0;
    pTVar3[0x14].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x14].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)((longlong)&pTVar3[4]._padding_ + 1) = 0;
    *(undefined1 *)((longlong)&pTVar3[4]._padding_ + 3) = 0;
    if ((FCommonInputPreprocessor *)(pTVar3 + 1) == (FCommonInputPreprocessor *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FCommonInputPreprocessor,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FCommonInputPreprocessor *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// PlatformSupportsHardwareCursor @ 14a777b90

bool __thiscall UCommonInputSubsystem::PlatformSupportsHardwareCursor(UCommonInputSubsystem *this)

{
  return true;
}

// PlatformSupportsInputType @ 14a777ba0

bool __thiscall
UCommonInputSubsystem::PlatformSupportsInputType
          (UCommonInputSubsystem *this,ECommonInputType param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  UClass *pUVar7;
  UCommonInputPlatformSettings *pUVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  
  pUVar7 = Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar8 = UPlatformSettingsManager::GetSettingsForPlatform<UCommonInputPlatformSettings>
                     ((UPlatformSettingsManager *)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr);
  if (param_1 == MouseAndKeyboard) {
    local_res10[0] = pUVar8->bSupportsMouseAndKeyboard;
  }
  else if (param_1 == Gamepad) {
    local_res10[0] = pUVar8->bSupportsGamepad;
  }
  else if (param_1 == Touch) {
    local_res10[0] = pUVar8->bSupportsTouch;
  }
  else {
    local_res10[0] = 0;
  }
  if (param_1 == Touch) {
    local_res10[0] = 1;
  }
  lVar10 = this->_padding_;
  if (lVar10 != 0) {
    pUVar7 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    iVar9 = (int)pUVar7->_padding_;
    if ((iVar9 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar9 * 8)
        == &pUVar7->_padding_)) goto LAB_14a777c47;
  }
  lVar10 = 0;
LAB_14a777c47:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &OnPlatformInputSupportOverride,(FWriteAccessScope *)&local_38);
  bVar3 = false;
  OnPlatformInputSupportOverride._28_4_ = OnPlatformInputSupportOverride._28_4_ + 1;
  iVar9 = OnPlatformInputSupportOverride._16_4_ + -1;
  if (-1 < iVar9) {
    lVar11 = (longlong)iVar9 << 4;
    bVar3 = false;
    do {
      if (((int)OnPlatformInputSupportOverride._16_4_ <= iVar9) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (((*(int *)(lVar11 + 8 + OnPlatformInputSupportOverride._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar11 + OnPlatformInputSupportOverride._8_8_),
          plVar1 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar1 + 0x68))(plVar1,lVar10,param_1,local_res10), cVar6 == '\0'))
      {
        bVar3 = true;
      }
      lVar11 = lVar11 + -0x10;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  OnPlatformInputSupportOverride._28_4_ = OnPlatformInputSupportOverride._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnPlatformInputSupportOverride
               ,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (bool)local_res10[0];
}

// RecalculateCurrentInputType @ 14a777fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonInputSubsystem::RecalculateCurrentInputType(UCommonInputSubsystem *this)

{
  ECommonInputType EVar1;
  FScriptContainerElement *pFVar2;
  UGameViewportClient *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  size_t sVar7;
  FSlateApplication *this_01;
  ULocalPlayer *pUVar8;
  undefined8 *puVar9;
  bool bVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FString FStack_10188;
  undefined8 uStack_10178;
  undefined8 uStack_10170;
  undefined8 uStack_10168;
  undefined8 uStack_10160;
  TReferenceControllerBase<1> *pTStack_10150;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_10148;
  char acStack_10028 [65552];
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  FStack_10188.Data.AllocatorInstance.Data._0_4_ = 0;
  lVar6 = 0x100;
  if ((this->CurrentInputLock).bIsSet == false) {
    lVar6 = 0xa0;
  }
  EVar1 = *(ECommonInputType *)((longlong)&this->_padding_ + lVar6);
  if (EVar1 == this->CurrentInputType) {
    return;
  }
  if (bDumpInputTypeChangeCallstack != 0) {
    memset(acStack_10028,0,0xffff);
    FFrame::GetScriptCallstack(&FStack_10188,true,false);
    FWindowsPlatformStackWalk::StackWalkAndDump(acStack_10028,0xffff,0,(void *)0x0);
    if (((4 < (byte)LogCommonInput._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCommonInput),
        4 < (byte)LogCommonInput._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCommonInput),
       4 < (byte)LogCommonInput._0_1_)) {
      TStack_10148._padding_ = 0;
      sVar7 = strlen(acStack_10028);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_10148,acStack_10028,(int)sVar7,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCommonInput);
      if ((void *)TStack_10148._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_10148._padding_);
      }
    }
    if ((void *)CONCAT44(FStack_10188.Data.AllocatorInstance.Data._4_4_,
                         FStack_10188.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(FStack_10188.Data.AllocatorInstance.Data._4_4_,
                                     FStack_10188.Data.AllocatorInstance.Data._0_4_));
    }
  }
  this->CurrentInputType = EVar1;
  this_01 = FSlateApplication::Get();
  pUVar8 = ULocalPlayerSubsystem::GetLocalPlayerChecked<ULocalPlayer>((ULocalPlayerSubsystem *)this)
  ;
  if (pUVar8 == (ULocalPlayer *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)
              CONCAT44(FStack_10188.Data.AllocatorInstance.Data._4_4_,
                       FStack_10188.Data.AllocatorInstance.Data._0_4_);
LAB_14a778289:
    bVar4 = false;
  }
  else {
    lVar6 = (longlong)(int)FSlateApplicationBase::CursorUserIndex;
    if (((int)FSlateApplicationBase::CursorUserIndex < 0) ||
       ((this_01->Users).ArrayNum <= (int)FSlateApplicationBase::CursorUserIndex)) {
      uStack_10160 = 0;
      uStack_10168 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar13 = pTVar11;
LAB_14a778240:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateUser.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                         ,0x456,L"");
      pTVar12 = pTVar11;
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      uVar5 = 0;
      if ((int)FSlateApplicationBase::CursorUserIndex < (this_01->Users).ArrayNum) {
        uVar5 = ~FSlateApplicationBase::CursorUserIndex >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this_01->Users).AllocatorInstance.Data;
      pTVar13 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar6 * 0x10 + 8);
      pTVar11 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar6 * 0x10);
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      uStack_10170 = 0;
      uStack_10178 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar12 = pTVar11;
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) goto LAB_14a778240;
    }
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000003;
    puVar9 = (undefined8 *)(**(code **)(pUVar8->_padding_ + 0x2d0))(pUVar8);
    if ((TReferenceControllerBase<1> *)*puVar9 != pTVar12) goto LAB_14a778289;
    bVar4 = true;
  }
  if (((ulonglong)pTVar11 & 2) != 0) {
    pTVar11 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar11 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_10150);
  }
  if (((ulonglong)pTVar11 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  EVar1 = this->CurrentInputType;
  if (EVar1 == MouseAndKeyboard) {
LAB_14a778356:
    if (4 < (byte)LogCommonInput._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCommonInput);
    }
    if (bVar4) {
      bVar10 = true;
LAB_14a778379:
      FSlateApplication::UsePlatformCursorForCursorUser(this_01,bVar10);
    }
  }
  else {
    if (EVar1 != Gamepad) {
      if (EVar1 == Touch) {
        if (4 < (byte)LogCommonInput._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCommonInput);
        }
        FSlateApplication::SetGameAllowsFakingTouchEvents(this_01,true);
        if (((pUVar8 == (ULocalPlayer *)0x0) ||
            (this_00 = (pUVar8->ViewportClient).field0_0x0.DebugPtr,
            this_00 == (UGameViewportClient *)0x0)) ||
           (bVar4 = UGameViewportClient::GetUseMouseForTouch(this_00), !bVar4)) {
          FSlateApplication::SetGameIsFakingTouchEvents(this_01,false,(TVector2<double> *)0x0);
        }
        else {
          FSlateApplication::SetGameIsFakingTouchEvents(this_01,true,(TVector2<double> *)0x0);
        }
        goto LAB_14a77838b;
      }
      goto LAB_14a778356;
    }
    if (4 < (byte)LogCommonInput._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCommonInput);
    }
    bVar10 = bEnableGamepadPlatformCursor;
    if (bVar4) goto LAB_14a778379;
  }
  FSlateApplication::SetGameAllowsFakingTouchEvents(this_01,false);
LAB_14a77838b:
  BroadcastInputMethodChanged(this);
  return;
}

// SetCurrentInputType @ 14a778a70

void __thiscall
UCommonInputSubsystem::SetCurrentInputType(UCommonInputSubsystem *this,ECommonInputType param_1)

{
  bool bVar1;
  
  if ((this->RawInputType != param_1) || (this->bInputMethodLockedByThrashing != false)) {
    bVar1 = PlatformSupportsInputType(this,param_1);
    if (bVar1) {
      this->RawInputType = param_1;
      bVar1 = CheckForInputMethodThrashing(this,param_1);
      this->bInputMethodLockedByThrashing = bVar1;
      if (!bVar1) {
        RecalculateCurrentInputType(this);
      }
    }
  }
  return;
}

// SetCursorPosition @ 14a778ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonInputSubsystem::SetCursorPosition
          (UCommonInputSubsystem *this,TVector2<double> *param_1,bool param_2)

{
  FCommonInputPreprocessor *pFVar1;
  FSlateUser *pFVar2;
  ULocalPlayer *pUVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<FSlateUser,1> local_28;
  
  pFVar1 = (this->CommonInputPreprocessor).Object;
  if (pFVar1 != (FCommonInputPreprocessor *)0x0) {
    pFVar1->bIgnoreNextMove = true;
  }
  pUVar3 = ULocalPlayerSubsystem::GetLocalPlayerChecked<ULocalPlayer>((ULocalPlayerSubsystem *)this)
  ;
  if (pUVar3 == (ULocalPlayer *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar4 = (longlong *)(**(code **)(pUVar3->_padding_ + 0x2d0))(pUVar3,&local_28);
    pFVar2 = (FSlateUser *)*plVar4;
    pTVar5 = (TReferenceControllerBase<1> *)plVar4[1];
    plVar4[1] = 0;
    *plVar4 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (pFVar2 != (FSlateUser *)0x0) {
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = pFVar2;
      local_28.SharedReferenceCount.ReferenceController = pTVar5;
      UpdateCursorPosition(this,&local_28,param_1,param_2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// SetGamepadInputType @ 14a778ba0

void __thiscall
UCommonInputSubsystem::SetGamepadInputType(UCommonInputSubsystem *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *this_00;
  UCommonInputPlatformSettings *pUVar3;
  
  this_00 = Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar3 = UPlatformSettingsManager::GetSettingsForPlatform<UCommonInputPlatformSettings>
                     ((UPlatformSettingsManager *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr)
  ;
  if (pUVar3->bCanChangeGamepadType == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3271655917132709555>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonInput\\Private\\CommonInputSubsystem.cpp"
                       ,0x14d,"UCommonInputPlatformSettings::Get()->CanChangeGamepadType()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->GamepadInputType = param_1;
    BroadcastInputMethodChanged(this);
  }
  return;
}

// SetInputTypeFilter @ 14a778ec0

void __thiscall
UCommonInputSubsystem::SetInputTypeFilter
          (UCommonInputSubsystem *this,ECommonInputType param_1,FName param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->CommonInputPreprocessor).Object == (FCommonInputPreprocessor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FCommonInputPreprocessor::SetInputTypeFilter
            ((this->CommonInputPreprocessor).Object,param_1,param_2,param_3);
  return;
}

// SetIsGamepadSimulatedClick @ 14a778f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonInputSubsystem::SetIsGamepadSimulatedClick(UCommonInputSubsystem *this,bool param_1)

{
  if (((this->bIsGamepadSimulatedClick != param_1) &&
      (this->bIsGamepadSimulatedClick = param_1, 6 < (byte)LogCommonInput._0_1_)) && (param_1)) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCommonInput);
    return;
  }
  return;
}

// ShouldShowInputKeys @ 14a778fd0

bool __thiscall UCommonInputSubsystem::ShouldShowInputKeys(UCommonInputSubsystem *this)

{
  return GCommonInputKeysVisible != 0;
}

// ShouldShowInputKeysChanged @ 14a778ff0

void __thiscall
UCommonInputSubsystem::ShouldShowInputKeysChanged
          (UCommonInputSubsystem *this,IConsoleVariable *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ECommonInputType aEStackX_8 [8];
  LARGE_INTEGER LStackX_10;
  FDestructionSentinel FStack_48;
  
  lVar9 = (**(code **)(this->_padding_ + 0x180))();
  if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x18d) & 0x40) == 0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnInputMethodChangedNative,(FWriteAccessScope *)&FStack_48);
    puVar1 = &(this->OnInputMethodChangedNative).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar10 = *(int *)&(this->OnInputMethodChangedNative).field_0x10 - 1;
    if (-1 < (int)uVar10) {
      lVar9 = (longlong)(int)uVar10 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar10 < *(int *)&(this->OnInputMethodChangedNative).field_0x10) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->OnInputMethodChangedNative).field_0x8;
        if (((*(int *)(lVar9 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar9 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    puVar1 = &(this->OnInputMethodChangedNative).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnInputMethodChangedNative,false);
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    aEStackX_8[0] = this->CurrentInputType;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnInputMethodChanged,
               aEStackX_8);
    QueryPerformanceCounter(&LStackX_10);
    this->LastInputMethodChangeTime =
         (double)LStackX_10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return;
}

// StaticRegisterNativesUCommonInputSubsystem @ 14a779260

void __cdecl UCommonInputSubsystem::StaticRegisterNativesUCommonInputSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UCommonInputSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14a779300

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UCommonInputSubsystem::Tick(UCommonInputSubsystem *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_private:_bool___cdecl_UCommonInputSubsystem::Tick(float)_::_2_::FStat_STAT_UCommonInputSubsystem_Tick>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_UCommonInputSubsystem_Tick ==
          (FThreadSafeStaticStat<_private:_bool___cdecl_UCommonInputSubsystem::Tick(float)_::_2_::FStat_STAT_UCommonInputSubsystem_Tick>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res18.s,"STAT_UCommonInputSubsystem_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UCommonInputSubsystem_Tick,*pFVar4,
                   L"STAT_UCommonInputSubsystem_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_UCommonInputSubsystem_Tick;
  if (StatPtr_STAT_UCommonInputSubsystem_Tick ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_UCommonInputSubsystem::Tick(float)_::_2_::FStat_STAT_UCommonInputSubsystem_Tick>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res20,"STAT_UCommonInputSubsystem_Tick");
    FVar5 = (FThreadSafeStaticStat<_private:_bool___cdecl_UCommonInputSubsystem::Tick(float)_::_2_::FStat_STAT_UCommonInputSubsystem_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UCommonInputSubsystem_Tick,
                         *pFVar4,L"STAT_UCommonInputSubsystem_Tick","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar7.Value;
        local_res18.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonInput\\Private\\CommonInputSubsystem.cpp"
                   ,0x176);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res18.s.LowPart = FVar7.Value;
      local_res18.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res18);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  }
  return true;
}

// UpdateCursorPosition @ 14a779a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonInputSubsystem::UpdateCursorPosition
          (UCommonInputSubsystem *this,TSharedRef<FSlateUser,1> *param_1,TVector2<double> *param_2,
          bool param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  uint uVar6;
  GenericApplication *pGVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  FDeprecateSlateVector2D FVar10;
  FDeprecateSlateVector2D FVar11;
  FSlateApplication *this_00;
  undefined2 *puVar12;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *pTVar13;
  atomic<int> *paVar14;
  undefined1 local_res20 [8];
  undefined8 local_120;
  TVector2<double>_u_0 local_110;
  LARGE_INTEGER local_100;
  FPointerEvent local_f8;
  
  ClampPositionToViewport(this,(TVector2<double> *)&local_110._s_0,param_2);
  FVar10 = FSlateUser::GetCursorPosition(param_1->Object);
  fVar1 = *(float *)FVar10;
  fVar2 = *(float *)((longlong)FVar10 + 4);
  FVar10 = *(FDeprecateSlateVector2D *)FVar10;
  if (((param_3) || ((int)fVar1 != (int)local_110._s_0.X)) || ((int)fVar2 != (int)local_110._s_0.Y))
  {
    FSlateUser::SetCursorPosition(param_1->Object,(int)local_110._s_0.X,(int)local_110._s_0.Y);
    FVar11 = FSlateUser::GetCursorPosition(param_1->Object);
    fVar3 = *(float *)FVar11;
    fVar4 = *(float *)((longlong)FVar11 + 4);
    FVar11 = *(FDeprecateSlateVector2D *)FVar11;
    this_00 = FSlateApplication::Get();
    FVar8 = FSlateApplicationBase::PlatformApplication.SharedReferenceCount;
    pGVar7 = FSlateApplicationBase::PlatformApplication.Object;
    if (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(FSlateApplicationBase::PlatformApplication.SharedReferenceCount.
                 ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pGVar7 == (GenericApplication *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar12 = (undefined2 *)(**(code **)(pGVar7->_padding_ + 0x58))(pGVar7,local_res20);
    local_f8.EffectingButton.KeyDetails.SharedReferenceCount =
         EKeys::Invalid.KeyDetails.SharedReferenceCount;
    local_f8.EffectingButton.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
    local_110._s_0.X = (double)EKeys::Invalid.KeyName;
    if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController ==
        (TReferenceControllerBase<1> *)0x0) {
      paVar14 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar14 = &(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount;
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
    pTVar13 = FSlateApplication::GetPressedMouseButtons(this_00);
    uVar6 = FSlateApplicationBase::CursorPointerIndex;
    local_f8._padding_._0_2_ = *puVar12;
    local_f8._padding_._2_1_ = 0;
    local_f8._12_8_ = 0;
    local_f8._padding_ = 0;
    QueryPerformanceCounter(&local_100);
    local_f8._padding_ = (longlong)local_100;
    local_f8._padding_ = (longlong)&___7FPointerEvent__6B_;
    local_120._4_4_ = fVar4 - fVar2;
    local_120._0_4_ = fVar3 - fVar1;
    local_f8.CursorDelta = local_120;
    local_f8.EffectingButton.KeyName = (FName)local_110._s_0.X;
    if (local_f8.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
    local_f8.PointerIndex = uVar6;
    local_f8.TouchpadIndex = 0;
    local_f8.Force = 1.0;
    local_f8.bIsTouchEvent = false;
    local_f8.GestureType = None;
    local_f8.WheelOrGestureDelta = (FDeprecateSlateVector2D)0x0;
    local_f8.bIsDirectionInvertedFromDevice = false;
    local_f8.bIsTouchForceChanged = false;
    local_f8.bIsTouchFirstMove = false;
    local_f8.ScreenSpacePosition = FVar11;
    local_f8.LastScreenSpacePosition = FVar10;
    local_f8.PressedButtons = pTVar13;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    FSlateApplication::ProcessMouseMoveEvent(this_00,&local_f8,false);
    FPointerEvent::~FPointerEvent(&local_f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// execBroadcastInputMethodChanged @ 14a779fe0

void __cdecl
UCommonInputSubsystem::execBroadcastInputMethodChanged
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  BroadcastInputMethodChanged((UCommonInputSubsystem *)param_1);
  return;
}

// execGetCurrentGamepadName @ 14a77a000

void __cdecl
UCommonInputSubsystem::execGetCurrentGamepadName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[4].field_0x4;
  return;
}

// execGetCurrentInputType @ 14a77a030

void __cdecl
UCommonInputSubsystem::execGetCurrentInputType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[4].field_0x1;
  return;
}

// execGetDefaultInputType @ 14a77a060

void __cdecl
UCommonInputSubsystem::execGetDefaultInputType(UObject *param_1,FFrame *param_2,void *param_3)

{
  UClass *this;
  UCommonInputPlatformSettings *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = UPlatformSettingsManager::GetSettingsForPlatform<UCommonInputPlatformSettings>
                     ((UPlatformSettingsManager *)(this->ClassDefaultObject).field0_0x0.DebugPtr);
  *(ECommonInputType *)param_3 = pUVar1->DefaultInputType;
  return;
}

// execIsInputMethodActive @ 14a77a210

void __cdecl
UCommonInputSubsystem::execIsInputMethodActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[4].field_0x1 == local_res8[0];
  return;
}

// execIsUsingPointerInput @ 14a77a2b0

void __cdecl
UCommonInputSubsystem::execIsUsingPointerInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = *(char *)(param_1 + 4);
  if ((cVar1 != '\0') && ((cVar1 == '\x01' || (cVar1 != '\x02')))) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetCurrentInputType @ 14a77a2f0

void __cdecl
UCommonInputSubsystem::execSetCurrentInputType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ECommonInputType EVar2;
  bool bVar3;
  ECommonInputType local_res8 [8];
  
  local_res8[0] = MouseAndKeyboard;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  EVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(ECommonInputType *)(param_1 + 4) != local_res8[0]) || (param_1[4].field_0xc != '\0')) {
    bVar3 = PlatformSupportsInputType((UCommonInputSubsystem *)param_1,local_res8[0]);
    if (bVar3) {
      *(ECommonInputType *)(param_1 + 4) = EVar2;
      bVar3 = CheckForInputMethodThrashing((UCommonInputSubsystem *)param_1,EVar2);
      param_1[4].field_0xc = bVar3;
      if (!bVar3) {
        RecalculateCurrentInputType((UCommonInputSubsystem *)param_1);
      }
    }
  }
  return;
}

// execSetGamepadInputType @ 14a77a3b0

void __cdecl
UCommonInputSubsystem::execSetGamepadInputType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetGamepadInputType((UCommonInputSubsystem *)param_1,local_res10);
  return;
}

// execShouldShowInputKeys @ 14a77a440

void __cdecl
UCommonInputSubsystem::execShouldShowInputKeys(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = GCommonInputKeysVisible != 0;
  return;
}

