// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 28

// StaticClass @ 149482080

UClass * __cdecl UWN_CommonSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CommonSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_CommonSubsystem",
               &Z_Registration_Info_UClass_UWN_CommonSubsystem.InnerSingleton,
               StaticRegisterNativesUWN_CommonSubsystem,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_CommonSubsystem>,
               InternalVTableHelperCtorCaller<UWN_CommonSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CommonSubsystem.InnerSingleton;
}

// UWN_CommonSubsystem @ 14948e110

UWN_CommonSubsystem * __thiscall
UWN_CommonSubsystem::UWN_CommonSubsystem(UWN_CommonSubsystem *this,FVTableHelper *param_1)

{
  FWN_UniqueIndexAllocator *this_00;
  
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this_00 = &this->VolumeIndexAllocator;
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->OnEnter = 0;
  *(undefined8 *)&(this->OnEnter).field_0x8 = 0;
  *(undefined8 *)&(this->OnEnter).field_0x10 = 0;
  *(undefined8 *)&this->OnLeave = 0;
  *(undefined8 *)&(this->OnLeave).field_0x8 = 0;
  *(undefined8 *)&(this->OnLeave).field_0x10 = 0;
  *(undefined8 *)&this->OnVolumeListChanged = 0;
  *(undefined8 *)&(this->OnVolumeListChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnVolumeListChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnVolumeListChanged).field_0x18 = 2;
  *(undefined8 *)&this->AllVolumesPerType = 0;
  *(undefined8 *)&(this->AllVolumesPerType).field_0x8 = 0;
  *(undefined8 *)&(this->AllVolumesPerType).field_0x20 = 0;
  *(undefined4 *)&(this->AllVolumesPerType).field_0x28 = 0;
  *(undefined4 *)&(this->AllVolumesPerType).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllVolumesPerType).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllVolumesPerType).field_0x34 = 0;
  *(undefined8 *)&(this->AllVolumesPerType).field_0x40 = 0;
  *(undefined4 *)&(this->AllVolumesPerType).field_0x48 = 0;
  *(undefined8 *)&this->EnteredVolumesPerMode = 0;
  *(undefined8 *)&(this->EnteredVolumesPerMode).field_0x8 = 0;
  *(undefined8 *)&(this->EnteredVolumesPerMode).field_0x20 = 0;
  *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x28 = 0;
  *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x2c = 0x80;
  *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x34 = 0;
  *(undefined8 *)&(this->EnteredVolumesPerMode).field_0x40 = 0;
  *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x48 = 0;
  (this->CachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
  this_00->Granularity = 0x400;
  this_00->BaseIndex = 0;
  (this->VolumeIndexAllocator).NumIndices = 0;
  (this->VolumeIndexAllocator).FreedIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VolumeIndexAllocator).FreedIndices.ArrayNum = 0;
  (this->VolumeIndexAllocator).FreedIndices.ArrayMax = 0;
  FWN_UniqueIndexAllocator::TryResize(this_00);
  *(undefined8 *)&(this->PendingUnregisterVolumes).Elements = 0;
  *(undefined8 *)&(this->PendingUnregisterVolumes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingUnregisterVolumes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingUnregisterVolumes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingUnregisterVolumes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingUnregisterVolumes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingUnregisterVolumes).Elements.field_0x34 = 0;
  (this->PendingUnregisterVolumes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingUnregisterVolumes).HashSize = 0;
  return this;
}

// UWN_CommonSubsystem @ 14948e270

UWN_CommonSubsystem * __thiscall UWN_CommonSubsystem::UWN_CommonSubsystem(UWN_CommonSubsystem *this)

{
  FWN_UniqueIndexAllocator *this_00;
  
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  this_00 = &this->VolumeIndexAllocator;
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->OnEnter = 0;
  *(undefined8 *)&(this->OnEnter).field_0x8 = 0;
  *(undefined8 *)&(this->OnEnter).field_0x10 = 0;
  *(undefined8 *)&this->OnLeave = 0;
  *(undefined8 *)&(this->OnLeave).field_0x8 = 0;
  *(undefined8 *)&(this->OnLeave).field_0x10 = 0;
  *(undefined8 *)&this->OnVolumeListChanged = 0;
  *(undefined8 *)&(this->OnVolumeListChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnVolumeListChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnVolumeListChanged).field_0x18 = 2;
  *(undefined8 *)&this->AllVolumesPerType = 0;
  *(undefined8 *)&(this->AllVolumesPerType).field_0x8 = 0;
  *(undefined8 *)&(this->AllVolumesPerType).field_0x20 = 0;
  *(undefined4 *)&(this->AllVolumesPerType).field_0x28 = 0;
  *(undefined4 *)&(this->AllVolumesPerType).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllVolumesPerType).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllVolumesPerType).field_0x34 = 0;
  *(undefined8 *)&(this->AllVolumesPerType).field_0x40 = 0;
  *(undefined4 *)&(this->AllVolumesPerType).field_0x48 = 0;
  *(undefined8 *)&this->EnteredVolumesPerMode = 0;
  *(undefined8 *)&(this->EnteredVolumesPerMode).field_0x8 = 0;
  *(undefined8 *)&(this->EnteredVolumesPerMode).field_0x20 = 0;
  *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x28 = 0;
  *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x2c = 0x80;
  *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x34 = 0;
  *(undefined8 *)&(this->EnteredVolumesPerMode).field_0x40 = 0;
  *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x48 = 0;
  (this->CachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
  this_00->Granularity = 0x400;
  this_00->BaseIndex = 0;
  (this->VolumeIndexAllocator).NumIndices = 0;
  (this->VolumeIndexAllocator).FreedIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VolumeIndexAllocator).FreedIndices.ArrayNum = 0;
  (this->VolumeIndexAllocator).FreedIndices.ArrayMax = 0;
  FWN_UniqueIndexAllocator::TryResize(this_00);
  *(undefined8 *)&(this->PendingUnregisterVolumes).Elements = 0;
  *(undefined8 *)&(this->PendingUnregisterVolumes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingUnregisterVolumes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingUnregisterVolumes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingUnregisterVolumes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingUnregisterVolumes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingUnregisterVolumes).Elements.field_0x34 = 0;
  (this->PendingUnregisterVolumes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingUnregisterVolumes).HashSize = 0;
  return this;
}

// ~UWN_CommonSubsystem @ 1494905d0

void __thiscall UWN_CommonSubsystem::~UWN_CommonSubsystem(UWN_CommonSubsystem *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->PendingUnregisterVolumes).HashSize = 0;
  FVar1 = (this->PendingUnregisterVolumes).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UWN_VolumeComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UWN_VolumeComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingUnregisterVolumes).Elements);
  pFVar2 = (this->VolumeIndexAllocator).FreedIndices.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x48 = 0;
  pvVar3 = *(void **)&(this->EnteredVolumesPerMode).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EnteredVolumesPerMode);
  *(undefined4 *)&(this->AllVolumesPerType).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AllVolumesPerType).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllVolumesPerType);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnVolumeListChanged).field_0x8,*(int *)&(this->OnVolumeListChanged).field_0x10
            );
  pvVar3 = *(void **)&(this->OnVolumeListChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnVolumeListChanged);
  pvVar3 = *(void **)&(this->OnLeave).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLeave);
  pvVar3 = *(void **)&(this->OnEnter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEnter);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// BroadCastOnVolumeListChange @ 149496480

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

void __thiscall UWN_CommonSubsystem::BroadCastOnVolumeListChange(UWN_CommonSubsystem *this)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UWorld *pUVar10;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  FDestructionSentinel local_a8;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar10 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  pTVar11 = GetAllVolumes(this,&local_88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnVolumeListChanged,
             (FWriteAccessScope *)&local_a8);
  puVar1 = &(this->OnVolumeListChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar6 = false;
  uVar12 = *(int *)&(this->OnVolumeListChanged).field_0x10 - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12;
    lVar14 = lVar13 << 4;
    bVar6 = false;
    do {
      iVar2 = *(int *)&(this->OnVolumeListChanged).field_0x10;
      uVar9 = 0;
      if ((int)uVar12 < iVar2) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (local_b8 = lVar13, local_b0 = (longlong)iVar2,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)&(this->OnVolumeListChanged).field_0x8;
      if (((*(int *)(lVar3 + 8 + lVar14) == 0) ||
          (plVar4 = *(longlong **)(lVar3 + lVar14), plVar4 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,pTVar11,pUVar10), cVar8 == '\0')) {
        bVar6 = true;
      }
      lVar13 = lVar13 + -1;
      lVar14 = lVar14 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  puVar1 = &(this->OnVolumeListChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnVolumeListChanged,
               false);
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return;
}

// CheckVolumeOverlap @ 14949a4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UWN_CommonSubsystem::CheckVolumeOverlap(UWN_CommonSubsystem *this,UWN_VolumeComponent *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  UWN_VolumeComponent *pUVar5;
  byte bVar6;
  longlong lVar7;
  FWeakObjectPtr FVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 auStack_178 [32];
  undefined1 local_158 [8];
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  FWeakObjectPtr local_138;
  FWeakObjectPtr local_130;
  longlong *local_128;
  uint uStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int local_f8;
  UWN_VolumeComponent *local_f0;
  UWN_VolumeComponent *local_e8;
  UWN_VolumeComponent *local_e0;
  UWN_VolumeComponent *local_d8;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  GetAllVolumes(this,(TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)local_98);
  uVar10 = local_70;
  uStack_120 = 0;
  uStack_11c = 1;
  local_108 = 0;
  uStack_10c = local_108;
  if (local_70 != 0) {
    puVar12 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar12 = local_78;
    }
    uVar13 = *puVar12;
    local_108 = 0;
    uStack_120 = 0;
    while (uVar13 == 0) {
      lVar7 = (longlong)(int)uStack_120;
      local_108 = local_108 + 0x20;
      uStack_120 = uStack_120 + 1;
      uStack_10c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_120)
      goto LAB_14949a573;
      uVar13 = puVar12[lVar7 + 1];
    }
    uStack_11c = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_11c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_f8 = (int)lVar7;
    uStack_10c = (local_108 - 1) + local_f8;
    if ((int)local_70 < (int)uStack_10c) {
      uStack_10c = local_70;
    }
  }
LAB_14949a573:
  local_128 = (longlong *)local_98;
  local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar13 = local_70 & 0xffffffe0;
  iStack_100 = local_98._8_4_ - local_64;
  uStack_110 = 0xffffffff;
  TStack_c8.CurrentBitIndex = uStack_10c;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_11c,uStack_120);
  iVar9 = (int)local_70 >> 5;
  TStack_c8._28_4_ = uStack_10c;
  TStack_c8.BaseBitIndex = local_108;
  uStack_a8 = CONCAT44(uStack_fc,iStack_100);
  bVar6 = (byte)local_70;
  uStack_104 = uStack_10c;
  local_d0 = local_128;
  TStack_c8.Array = local_118;
  if (((int)local_70 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (uVar10 != local_70) {
    puVar12 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar12 = local_78;
    }
    uVar10 = -1 << (bVar6 & 0x1f) & puVar12[iVar9];
    while (uVar10 == 0) {
      lVar7 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      uVar10 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14949a67d;
      uVar10 = puVar12[lVar7 + 1];
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar10 = (int)lVar7 + -1 + uVar13;
    if ((int)local_70 < (int)uVar10) {
      uVar10 = local_70;
    }
  }
LAB_14949a67d:
  while( true ) {
    plVar2 = local_d0;
    if ((int)local_d0[1] - *(int *)((longlong)local_d0 + 0x34) != (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if (((TStack_c8.CurrentBitIndex == uVar10) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar2 == (longlong *)local_98)) break;
    local_130 = *(FWeakObjectPtr *)(*plVar2 + (longlong)TStack_c8.CurrentBitIndex * 0x10);
    bVar3 = FWeakObjectPtr::IsValid(&local_130);
    if ((!bVar3) || (param_1 == (UWN_VolumeComponent *)0x0)) break;
    pUVar5 = (UWN_VolumeComponent *)FWeakObjectPtr::Get(&local_130);
    if ((param_1 != pUVar5) && (lVar7 = param_1->_padding_, lVar7 != 0)) {
      if ((*(int *)(pUVar5->_padding_ + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        cVar4 = (**(code **)(pUVar5->_padding_ + 0xab8))(pUVar5,param_1);
        if (cVar4 == '\0') {
          pcVar11 = *(code **)(pUVar5->_padding_ + 0xac8);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_140.ObjectIndex = 0;
          local_140.ObjectSerialNumber = 0;
          local_e0 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_e0);
          (*pcVar11)(pUVar5,local_140);
          pcVar11 = *(code **)(param_1->_padding_ + 0xac8);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          local_138.ObjectIndex = 0;
          local_138.ObjectSerialNumber = 0;
          local_d8 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_d8);
          FVar8 = local_138;
        }
        else {
          pcVar11 = *(code **)(pUVar5->_padding_ + 0xac0);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_150.ObjectIndex = 0;
          local_150.ObjectSerialNumber = 0;
          local_f0 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_f0);
          (*pcVar11)(pUVar5,local_150);
          pcVar11 = *(code **)(param_1->_padding_ + 0xac0);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          local_148.ObjectIndex = 0;
          local_148.ObjectSerialNumber = 0;
          local_e8 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_e8);
          FVar8 = local_148;
        }
        (*pcVar11)(param_1,FVar8);
      }
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// Deinitialize @ 14949b970

void __thiscall UWN_CommonSubsystem::Deinitialize(UWN_CommonSubsystem *this)

{
  undefined1 *puVar1;
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *pTVar2;
  TMap<EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>_>
  *this_00;
  TSet<TObjectPtr<UWN_VolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_VolumeComponent>,0>,FDefaultSetAllocator>
  *this_01;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  UObject *pUVar8;
  UWN_CommonSubsystem *pUVar9;
  UObject *pUVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  int iVar22;
  longlong *plVar23;
  FWeakObjectPtr *pFVar24;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20;
  uint local_1c0;
  FWeakObjectPtr local_1b8;
  uint local_1b0;
  int local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_178;
  undefined8 local_158;
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *local_110;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  longlong *local_100;
  longlong *local_f8;
  int iStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80 [2];
  undefined4 local_4c;
  
  puVar1 = &(this->AllVolumesPerType).field_0x10;
  iStack_148 = 0;
  iVar12 = *(int *)&(this->AllVolumesPerType).field_0x28;
  local_150 = &this->AllVolumesPerType;
  local_130 = 0;
  uStack_144 = 1;
  iStack_134 = 0;
  if (iVar12 != 0) {
    puVar20 = *(uint **)&(this->AllVolumesPerType).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    while (uVar16 == 0) {
      lVar13 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      iStack_134 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_14949ba1d;
      uVar16 = puVar20[lVar13 + 1];
    }
    uStack_144 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_144 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_120 = (int)lVar13;
    iStack_134 = local_130 + -1 + local_120;
    if (iVar12 < iStack_134) {
      iStack_134 = iVar12;
    }
  }
LAB_14949ba1d:
  uVar16 = *(uint *)&(this->AllVolumesPerType).field_0x28;
  bVar11 = (byte)uVar16 & 0x1f;
  iStack_128 = *(int *)&(this->AllVolumesPerType).field_0x8 -
               *(int *)&(this->AllVolumesPerType).field_0x34;
  uVar17 = uVar16 & 0xffffffe0;
  iVar22 = (int)uVar16 >> 5;
  uStack_1a4 = 1 << bVar11;
  uVar15 = -1 << bVar11;
  uStack_138 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_144,iStack_148);
  TStack_c0.CurrentBitIndex = iStack_134;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = local_130;
  uStack_a0 = CONCAT44(uStack_124,iStack_128);
  local_1a8 = iVar22;
  pTStack_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_198 = uVar15;
  uStack_194 = uVar16;
  uStack_190 = uVar17;
  local_140 = puVar1;
  local_110 = local_150;
  local_c8 = local_150;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar12 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->AllVolumesPerType).field_0x28;
  if (uVar16 != uVar4) {
    puVar18 = *(undefined1 **)&(this->AllVolumesPerType).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar15 = uVar15 & *(uint *)(puVar18 + (longlong)iVar22 * 4);
    while (uVar15 == 0) {
      uStack_190 = uVar17 + 0x20;
      local_1a8 = iVar22 + 1;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1a8)
      goto LAB_14949bb6d;
      uVar15 = *(uint *)(puVar18 + (longlong)iVar22 * 4 + 4);
      local_198 = 0xffffffff;
      uVar17 = uStack_190;
      iVar22 = local_1a8;
    }
    uStack_1a4 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_1a4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_11c = (int)lVar13;
    uStack_194 = local_11c + -1 + uVar17;
    if ((int)uVar4 < (int)uStack_194) {
LAB_14949bb6d:
      uStack_194 = uVar4;
    }
  }
  local_178._padding_ = CONCAT44(uStack_1a4,local_1a8);
  local_178.CurrentBitIndex = uStack_194;
  local_178.UnvisitedBitMask = local_198;
  local_178._28_4_ = uStack_18c;
  local_178.BaseBitIndex = uStack_190;
  local_178.Array = pTStack_1a0;
  local_188 = pTStack_1a0;
  local_1b0 = uStack_194;
  uVar16 = uStack_194;
  do {
    pTVar2 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_c0.CurrentBitIndex == uVar16) && (TStack_c0.Array == local_188)) &&
       (pTVar2 == local_110)) {
      pTVar2 = &this->AllVolumesPerType;
      bVar7 = 1 < *(int *)&(this->AllVolumesPerType).field_0x48;
      if (!bVar7) {
        TSet<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
                          *)pTVar2);
      }
      puVar1 = &(this->AllVolumesPerType).field_0xc;
      *(undefined4 *)&(this->AllVolumesPerType).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->AllVolumesPerType).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->AllVolumesPerType).field_0x34 = 0;
      iVar12 = *(int *)&(this->AllVolumesPerType).field_0x2c;
      *(undefined4 *)&(this->AllVolumesPerType).field_0x28 = 0;
      if ((iVar12 < 0) || (0x80 < iVar12)) {
        *(undefined4 *)&(this->AllVolumesPerType).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AllVolumesPerType).field_0x10,0);
      }
      if (bVar7) {
        *(undefined4 *)&(this->AllVolumesPerType).field_0x48 = 1;
        TSet<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
                  *)pTVar2);
      }
      this_00 = &this->EnteredVolumesPerMode;
      bVar7 = 1 < *(int *)&(this->EnteredVolumesPerMode).field_0x48;
      if (!bVar7) {
        TSet<TTuple<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
        ::UnhashElements(this_00);
      }
      puVar1 = &(this->EnteredVolumesPerMode).field_0xc;
      *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x34 = 0;
      iVar12 = *(int *)&(this->EnteredVolumesPerMode).field_0x2c;
      *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x28 = 0;
      if ((iVar12 < 0) || (0x80 < iVar12)) {
        *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EnteredVolumesPerMode).field_0x10
                   ,0);
      }
      if (bVar7) {
        *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x48 = 1;
        TSet<TTuple<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
      this_01 = &this->PendingUnregisterVolumes;
      bVar7 = 1 < (this->PendingUnregisterVolumes).HashSize;
      if (!bVar7) {
        TSet<TObjectPtr<UWN_VolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_VolumeComponent>,0>,FDefaultSetAllocator>
        ::UnhashElements(this_01);
      }
      puVar1 = &(this->PendingUnregisterVolumes).Elements.field_0xc;
      *(undefined4 *)&(this->PendingUnregisterVolumes).Elements.field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->PendingUnregisterVolumes).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->PendingUnregisterVolumes).Elements.field_0x34 = 0;
      iVar12 = *(int *)&(this->PendingUnregisterVolumes).Elements.field_0x2c;
      *(undefined4 *)&(this->PendingUnregisterVolumes).Elements.field_0x28 = 0;
      if ((iVar12 < 0) || (0x80 < iVar12)) {
        *(undefined4 *)&(this->PendingUnregisterVolumes).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->PendingUnregisterVolumes).Elements.field_0x10,0);
      }
      if (bVar7) {
        (this->PendingUnregisterVolumes).HashSize = 1;
        TSet<TObjectPtr<UWN_VolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_VolumeComponent>,0>,FDefaultSetAllocator>
        ::Rehash(this_01);
      }
      UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
      return;
    }
    lVar13 = *(longlong *)(*(longlong *)pTVar2 + 8 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
    if (lVar13 != 0) {
      iVar12 = *(int *)(lVar13 + 0x50);
      local_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0x38);
      iStack_f0 = 0;
      plVar23 = (longlong *)(lVar13 + 0x28);
      local_d8 = 0;
      iStack_dc = 0;
      uStack_ec = 1;
      if (iVar12 != 0) {
        pTVar21 = local_178.Array;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x48) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x48);
        }
        uStack_ec = *(uint *)(pTVar21->AllocatorInstance).InlineData;
        while (uStack_ec == 0) {
          lVar14 = (longlong)iStack_f0;
          local_d8 = local_d8 + 0x20;
          iStack_f0 = iStack_f0 + 1;
          iStack_dc = iVar12;
          uStack_ec = 1;
          if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0)
          goto LAB_14949bc7e;
          uStack_ec = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar14 * 4 + 4);
        }
        uStack_ec = -uStack_ec & uStack_ec;
        uVar3 = (ulonglong)uStack_ec * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_118 = (int)lVar14;
        iStack_dc = local_d8 + -1 + local_118;
        if (iVar12 < iStack_dc) {
          iStack_dc = iVar12;
        }
      }
LAB_14949bc7e:
      uVar15 = *(uint *)(lVar13 + 0x50);
      pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0x38);
      iStack_d4 = iStack_134;
      iStack_d0 = *(int *)(lVar13 + 0x30) - *(int *)(lVar13 + 0x5c);
      uVar16 = uVar15 & 0xffffffe0;
      local_178._padding_ = CONCAT44(uStack_ec,iStack_f0);
      uStack_e0 = 0xffffffff;
      local_178.CurrentBitIndex = iStack_dc;
      local_178.UnvisitedBitMask = 0xffffffff;
      iVar22 = (int)uVar15 >> 5;
      local_178._28_4_ = iStack_134;
      local_178.BaseBitIndex = local_d8;
      local_158 = CONCAT44(uStack_cc,iStack_d0);
      local_180 = plVar23;
      local_108 = pTVar21;
      local_100 = plVar23;
      local_f8 = plVar23;
      local_e8 = local_178.Array;
      if ((((int)uVar15 < 0) || (iVar12 < (int)uVar15)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar17 = *(uint *)(lVar13 + 0x50);
      local_1c0 = uVar15;
      if (uVar15 != uVar17) {
        pTVar19 = pTVar21;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x48) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x48);
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) &
                 *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar22 * 4);
        while (uVar15 == 0) {
          lVar13 = (longlong)iVar22;
          uVar16 = uVar16 + 0x20;
          iVar22 = iVar22 + 1;
          uVar15 = uVar17;
          local_1c0 = uVar17;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
          goto LAB_14949bda0;
          uVar15 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_114 = (int)lVar13;
        uVar15 = (uVar16 - 1) + local_114;
        local_1c0 = uVar15;
        if ((int)uVar17 < (int)uVar15) {
          uVar15 = uVar17;
          local_1c0 = uVar17;
        }
      }
LAB_14949bda0:
      while( true ) {
        plVar6 = local_180;
        if ((int)local_180[1] - *(int *)((longlong)local_180 + 0x34) != (int)local_158) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((local_178.CurrentBitIndex == uVar15) && (local_178.Array == pTVar21)) &&
           (uVar16 = local_1b0, plVar6 == plVar23)) break;
        local_1b8 = *(FWeakObjectPtr *)(*plVar6 + (longlong)local_178.CurrentBitIndex * 0x10);
        bVar7 = FWeakObjectPtr::IsValid(&local_1b8);
        if (bVar7) {
          pUVar8 = FWeakObjectPtr::Get(&local_1b8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pUVar8[0x23].field_0x20,(FWriteAccessScope *)&local_98);
          uVar16 = *(int *)&pUVar8[0x24].field_0x8 - 1;
          if (-1 < (int)uVar16) {
            lVar13 = (longlong)(int)uVar16 << 4;
            do {
              uVar15 = 0;
              if ((int)uVar16 < *(int *)&pUVar8[0x24].field_0x8) {
                uVar15 = ~uVar16 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar24 = (FWeakObjectPtr *)(*(longlong *)(pUVar8 + 0x24) + lVar13);
              local_res20 = 0;
              if ((((this != (UWN_CommonSubsystem *)0x0) &&
                   (pUVar9 = (UWN_CommonSubsystem *)FWeakObjectPtr::Get(pFVar24), this == pUVar9))
                  || (pFVar24[1] == (FWeakObjectPtr)0x0)) ||
                 (pUVar10 = FWeakObjectPtr::Get(pFVar24,true), pUVar10 == (UObject *)0x0)) {
                uVar15 = 0;
                if ((int)uVar16 < *(int *)&pUVar8[0x24].field_0x8) {
                  uVar15 = ~uVar16 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar12 = ~uVar16 + *(int *)&pUVar8[0x24].field_0x8;
                if (1 < iVar12) {
                  iVar12 = 1;
                }
                if (iVar12 != 0) {
                  memmove((void *)(lVar13 + *(longlong *)(pUVar8 + 0x24)),
                          (void *)((longlong)(*(int *)&pUVar8[0x24].field_0x8 - iVar12) * 0x10 +
                                  *(longlong *)(pUVar8 + 0x24)),(longlong)iVar12 << 4);
                }
                *(int *)&pUVar8[0x24].field_0x8 = *(int *)&pUVar8[0x24].field_0x8 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,(ForAnyElementType *)(pUVar8 + 0x24),
                           *(int *)&pUVar8[0x24].field_0x8,(int *)&pUVar8[0x24].field_0xc);
              }
              lVar13 = lVar13 + -0x10;
              uVar16 = uVar16 - 1;
            } while (-1 < (int)uVar16);
          }
          if (local_98.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
          }
          pUVar8 = FWeakObjectPtr::Get(&local_1b8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pUVar8[0x24].field_0x10,(FWriteAccessScope *)local_80);
          uVar16 = *(int *)&pUVar8[0x24].field_0x20 - 1;
          if (-1 < (int)uVar16) {
            lVar13 = (longlong)(int)uVar16 << 4;
            do {
              uVar15 = 0;
              if ((int)uVar16 < *(int *)&pUVar8[0x24].field_0x20) {
                uVar15 = ~uVar16 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar24 = (FWeakObjectPtr *)(*(longlong *)&pUVar8[0x24].field_0x18 + lVar13);
              if ((((this != (UWN_CommonSubsystem *)0x0) &&
                   (pUVar9 = (UWN_CommonSubsystem *)FWeakObjectPtr::Get(pFVar24), this == pUVar9))
                  || (pFVar24[1] == (FWeakObjectPtr)0x0)) ||
                 (pUVar10 = FWeakObjectPtr::Get(pFVar24,true), pUVar10 == (UObject *)0x0)) {
                uVar15 = 0;
                if ((int)uVar16 < *(int *)&pUVar8[0x24].field_0x20) {
                  uVar15 = ~uVar16 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar12 = ~uVar16 + *(int *)&pUVar8[0x24].field_0x20;
                if (1 < iVar12) {
                  iVar12 = 1;
                }
                if (iVar12 != 0) {
                  memmove((void *)(lVar13 + *(longlong *)&pUVar8[0x24].field_0x18),
                          (void *)((longlong)(*(int *)&pUVar8[0x24].field_0x20 - iVar12) * 0x10 +
                                  *(longlong *)&pUVar8[0x24].field_0x18),(longlong)iVar12 << 4);
                }
                *(int *)&pUVar8[0x24].field_0x20 = *(int *)&pUVar8[0x24].field_0x20 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,(ForAnyElementType *)&pUVar8[0x24].field_0x18,
                           *(int *)&pUVar8[0x24].field_0x20,(int *)&pUVar8[0x24].field_0x24);
              }
              lVar13 = lVar13 + -0x10;
              uVar16 = uVar16 - 1;
            } while (-1 < (int)uVar16);
          }
          if (local_80[0].bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80[0].Accessor,local_80);
          }
          pUVar8 = FWeakObjectPtr::Get(&local_1b8);
          *(undefined8 *)&pUVar8[0x23].field_0x10 = 0;
          pUVar8 = FWeakObjectPtr::Get(&local_1b8);
          *(undefined4 *)&pUVar8[0x23].field_0x18 = 0xffffffff;
          plVar23 = local_100;
          pTVar21 = local_108;
          uVar15 = local_1c0;
        }
        local_178.UnvisitedBitMask = local_178.UnvisitedBitMask & ~local_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_178);
      }
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// FindAndBindVolumes @ 14949f530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWN_CommonSubsystem::FindAndBindVolumes(UWN_CommonSubsystem *this)

{
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *this_00;
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  AActor *this_01;
  UClass *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  char *pcVar10;
  FString *pFVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  wchar_t *pwVar15;
  char *pcVar16;
  int local_res10 [2];
  TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr> local_res18;
  FWeakObjectPtr local_res20;
  undefined8 *local_148;
  undefined8 local_140;
  UWorld *local_138;
  UClass *local_130;
  UClass *local_128;
  UClass *local_120;
  UObject *local_118;
  ulonglong local_110;
  ulonglong *local_108;
  FName local_100;
  FName local_f8 [2];
  code *local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  code *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  TActorIteratorBase<TActorIterator<AActor>_> local_c8;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  FString local_48;
  
  pUVar5 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (pUVar5 != (UWorld *)0x0) {
    local_138 = pUVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&(this->CachedWorld).WeakPtr,(FObjectPtr)&local_138);
    pUVar6 = Z_Construct_UClass_AActor_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
    }
    local_c8.Flags = OnlyActiveLevels|SkipPendingKill;
    local_c8.State.bIsSet = false;
    local_130 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FActorIteratorState::FActorIteratorState
              (&local_c8.State.TypedValue,pUVar5,(TSubclassOf<AActor>)&local_130);
    local_c8.State.bIsSet = true;
    TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_c8);
    while( true ) {
      if ((local_c8.State.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_c8.State.TypedValue.ReachedEnd != false) break;
      if ((local_c8.State.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01 = FActorIteratorState::GetActorChecked(&local_c8.State.TypedValue);
      if (this_01 == (AActor *)0x0) {
        pFVar11 = GetTypeName<AActor>(&local_48);
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar15);
      }
      local_148 = (undefined8 *)0x0;
      local_140 = 0;
      pUVar6 = UWN_VolumeComponent::StaticClass();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar6 != (UClass *)0x0) goto LAB_14949f6d9;
LAB_14949f70a:
        pUVar7 = (UClass *)0x0;
      }
      else {
        if (pUVar6 == (UClass *)0x0) goto LAB_14949f70a;
        UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_14949f6d9:
        pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar7 == (UClass *)0x0) goto LAB_14949f70a;
        iVar4 = (int)pUVar7->_padding_;
        if (((int)pUVar6->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar7->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        pUVar7 = pUVar6;
        if (!bVar3) goto LAB_14949f70a;
      }
      pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar7 == pUVar8) {
        local_128 = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        AActor::
        ForEachComponent_Internal<UWN_VolumeComponent,1,0,_AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_128,
                   (TArray<UWN_VolumeComponent_*,TSizedDefaultAllocator<32>_> *)&local_148);
      }
      else {
        local_120 = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        AActor::
        ForEachComponent_Internal<UWN_VolumeComponent,0,0,_AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_120,
                   (TArray<UWN_VolumeComponent_*,TSizedDefaultAllocator<32>_> *)&local_148);
      }
      if ((int)local_140 != 0) {
        if (((int)local_140 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar9 = (UObject *)*local_148;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_118 = pUVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_118);
        pUVar9 = FWeakObjectPtr::Get(&local_res20);
        this_00 = &this->AllVolumesPerType;
        local_110 = *(ulonglong *)&pUVar9->field_0x10;
        uVar12 = ((uint)(local_110 >> 0x14) & 0xffff ^ (uint)(local_110 >> 4)) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        uVar12 = uVar12 >> 0x10 ^ uVar12;
        if (*(int *)&(this->AllVolumesPerType).field_0x8 !=
            *(int *)&(this->AllVolumesPerType).field_0x34) {
          puVar1 = *(undefined1 **)&(this->AllVolumesPerType).field_0x40;
          puVar14 = &(this->AllVolumesPerType).field_0x38;
          if (puVar1 != (undefined1 *)0x0) {
            puVar14 = puVar1;
          }
          iVar4 = *(int *)(puVar14 +
                          (ulonglong)(*(int *)&(this->AllVolumesPerType).field_0x48 - 1U & uVar12) *
                          4);
          if (iVar4 != -1) {
            do {
              lVar13 = *(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18;
              if (*(ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) ==
                  local_110) {
                if (lVar13 != 0) goto LAB_14949f8d7;
                break;
              }
              iVar4 = *(int *)(lVar13 + 0x10);
            } while (iVar4 != -1);
          }
        }
        local_108 = &local_110;
        TSet<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
                  ((TSet<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
                    *)this_00,(uint)local_res10,
                   (TKeyInitializer<UClass_*_const_&> *)(ulonglong)uVar12,(bool *)&local_108);
        lVar13 = *(longlong *)&this_00->field_0x0 + (longlong)local_res10[0] * 0x18;
LAB_14949f8d7:
        TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Emplace<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_const_&>
                  ((TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)(*(longlong *)(lVar13 + 8) + 0x28),&local_res18,(bool *)&local_res20);
        pUVar9 = FWeakObjectPtr::Get(&local_res20);
        pcVar10 = strstr("&UWN_CommonSubsystem::HandleVolumeEnter","::");
        if (pcVar10 == (char *)0x0) {
LAB_14949f94b:
          pcVar16 = &DAT_00000002;
LAB_14949f950:
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          do {
            pcVar16 = pcVar10;
            pcVar10 = strstr(pcVar16 + 1,"::");
          } while (pcVar10 != (char *)0x0);
          if (pcVar16 == (char *)0x0) goto LAB_14949f94b;
          pcVar16 = pcVar16 + 2;
          if (*pcVar16 == '0') goto LAB_14949f950;
        }
        ::FName::FName(&local_100,pcVar16);
        local_e8 = HandleVolumeEnter;
        uStack_e0 = 0;
        lStack_60 = (ulonglong)uStack_dc << 0x20;
        local_68 = HandleVolumeEnter;
        TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UWN_VolumeComponent_*,enum_EWN_VolumeObserverMode,UE::Math::TVector<double>_const_&>
        ::__Internal_AddDynamic<UWN_CommonSubsystem>
                  (&pUVar9[0x23].field_0x20,this,(pmf_0829b9b7 *)&local_68,local_100);
        pUVar9 = FWeakObjectPtr::Get(&local_res20);
        pcVar10 = strstr("&UWN_CommonSubsystem::HandleVolumeLeave","::");
        if (pcVar10 == (char *)0x0) {
LAB_14949fa0b:
          pcVar16 = &DAT_00000002;
LAB_14949fa10:
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          do {
            pcVar16 = pcVar10;
            pcVar10 = strstr(pcVar16 + 1,"::");
          } while (pcVar10 != (char *)0x0);
          if (pcVar16 == (char *)0x0) goto LAB_14949fa0b;
          pcVar16 = pcVar16 + 2;
          if (*pcVar16 == '0') goto LAB_14949fa10;
        }
        ::FName::FName(local_f8,pcVar16);
        local_d8 = HandleVolumeLeave;
        uStack_d0 = 0;
        lStack_50 = (ulonglong)uStack_cc << 0x20;
        local_58 = HandleVolumeLeave;
        TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UWN_VolumeComponent_*,enum_EWN_VolumeObserverMode>
        ::__Internal_AddDynamic<UWN_CommonSubsystem>
                  (&pUVar9[0x24].field_0x10,this,(pmf_ed8db45d *)&local_58,local_f8[0]);
      }
      if (local_148 != (undefined8 *)0x0) {
        FMemory::Free(local_148);
      }
      TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_c8);
    }
    if (local_c8.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_c8.State.TypedValue.CurrentWorld,
                 local_c8.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_c8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_c8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetAllVolumes @ 14949fef0

TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
* __thiscall
UWN_CommonSubsystem::GetAllVolumes
          (UWN_CommonSubsystem *this,
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  UObject *pUVar1;
  ulonglong uVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *pTVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_12c;
  undefined1 local_11c [12];
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *local_108;
  UObject *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  UObject *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  iVar14 = 0;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->AllVolumesPerType).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  pTVar19 = &this->AllVolumesPerType;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  uVar8 = 1;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  iVar17 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  iVar3 = *(int *)&(this->AllVolumesPerType).field_0x28;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(this->AllVolumesPerType).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)pTVar20;
    }
    uVar13 = *puVar18;
    iVar17 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar17 = iVar17 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14949ffd1;
      uVar13 = puVar18[lVar11 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar9 = iVar17 + -1 + local_res20;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14949ffd1:
  uVar13 = *(uint *)&(this->AllVolumesPerType).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar8,iVar14);
  TStack_98.CurrentBitIndex = iVar9;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar17;
  uStack_78 = CONCAT44(uStack_12c,
                       *(int *)&(this->AllVolumesPerType).field_0x8 -
                       *(int *)&(this->AllVolumesPerType).field_0x34);
  local_res18 = uVar13;
  local_110 = pTVar20;
  local_108 = pTVar19;
  local_a0 = pTVar19;
  TStack_98.Array = pTVar20;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
               *)(*pcVar5)();
    return pTVar10;
  }
  uVar8 = *(uint *)&(this->AllVolumesPerType).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->AllVolumesPerType).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = (undefined1 *)pTVar20;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      local_res18 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1494a0100;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    local_res18 = uVar13;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
      local_res18 = uVar8;
    }
  }
LAB_1494a0100:
  do {
    pTVar6 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_98.CurrentBitIndex == uVar13) && (TStack_98.Array == pTVar20)) &&
       (pTVar6 == pTVar19)) {
      return __return_storage_ptr__;
    }
    pUVar4 = *(UObject **)(*(longlong *)pTVar6 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1494a0160:
      if (pUVar4 != (UObject *)0x0) {
        iVar3 = *(int *)(pUVar4 + 2);
        puVar15 = &pUVar4[1].field_0x10;
        iStack_f8 = 0;
        pUVar1 = pUVar4 + 1;
        local_e0 = 0;
        uStack_f4 = 1;
        iStack_e4 = 0;
        if (iVar3 != 0) {
          puVar18 = (uint *)puVar15;
          if (*(uint **)&pUVar4[1].field_0x20 != (uint *)0x0) {
            puVar18 = *(uint **)&pUVar4[1].field_0x20;
          }
          uVar8 = *puVar18;
          while (uVar8 == 0) {
            lVar11 = (longlong)iStack_f8;
            local_e0 = local_e0 + 0x20;
            iStack_f8 = iStack_f8 + 1;
            iStack_e4 = iVar3;
            if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8)
            goto LAB_1494a01ef;
            uVar8 = puVar18[lVar11 + 1];
          }
          uStack_f4 = -uVar8 & uVar8;
          uVar2 = (ulonglong)uStack_f4 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iStack_e4 = local_e0 + -1 + (int)lVar11;
          if (iVar3 < iStack_e4) {
            iStack_e4 = iVar3;
          }
        }
LAB_1494a01ef:
        uVar8 = *(uint *)(pUVar4 + 2);
        iStack_d8 = *(int *)&pUVar4[1].field_0x8 - *(int *)&pUVar4[2].field_0xc;
        uVar13 = uVar8 & 0xffffffe0;
        TStack_c8._padding_ = CONCAT44(uStack_f4,iStack_f8);
        uStack_e8 = 0xffffffff;
        TStack_c8.CurrentBitIndex = iStack_e4;
        TStack_c8.UnvisitedBitMask = 0xffffffff;
        iVar17 = (int)uVar8 >> 5;
        TStack_c8._28_4_ = iVar9;
        TStack_c8.BaseBitIndex = local_e0;
        uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
        local_100 = pUVar1;
        local_f0 = puVar15;
        iStack_dc = iVar9;
        local_d0 = pUVar1;
        TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar15;
        if ((((int)uVar8 < 0) || (iVar3 < (int)uVar8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                     *)(*pcVar5)();
          return pTVar10;
        }
        uVar12 = *(uint *)(pUVar4 + 2);
        if (uVar8 != uVar12) {
          puVar16 = puVar15;
          if (*(undefined1 **)&pUVar4[1].field_0x20 != (undefined1 *)0x0) {
            puVar16 = *(undefined1 **)&pUVar4[1].field_0x20;
          }
          uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar17 * 4);
          while (uVar8 == 0) {
            lVar11 = (longlong)iVar17;
            uVar13 = uVar13 + 0x20;
            iVar17 = iVar17 + 1;
            uVar8 = uVar12;
            if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_1494a02f0;
            uVar8 = *(uint *)(puVar16 + lVar11 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar8 = (int)lVar11 + -1 + uVar13;
          if ((int)uVar12 < (int)uVar8) {
            uVar8 = uVar12;
          }
        }
LAB_1494a02f0:
        while( true ) {
          pUVar4 = local_d0;
          if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0[1].field_0xc != (int)uStack_a8) {
            local_res10[0] = 0;
            `TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (((TStack_c8.CurrentBitIndex == uVar8) &&
              (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar15)) &&
             (pTVar19 = local_108, pTVar20 = local_110, uVar13 = local_res18, pUVar4 == pUVar1))
          break;
          local_11c._4_8_ =
               *(undefined8 *)(*(longlong *)pUVar4 + (longlong)TStack_c8.CurrentBitIndex * 0x10);
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Emplace<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_const_&>
                    (__return_storage_ptr__,
                     (TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr> *)local_11c,
                     (bool *)(local_11c + 4));
          TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
        }
      }
    }
    else if (pUVar4 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar4);
      goto LAB_1494a0160;
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// GetPrivateStaticClass @ 1494a19d0

UClass * __cdecl UWN_CommonSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CommonSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_CommonSubsystem",
               &Z_Registration_Info_UClass_UWN_CommonSubsystem.InnerSingleton,
               StaticRegisterNativesUWN_CommonSubsystem,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_CommonSubsystem>,
               InternalVTableHelperCtorCaller<UWN_CommonSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CommonSubsystem.InnerSingleton;
}

// GetStatId @ 1494a2900

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UWN_CommonSubsystem::GetStatId(UWN_CommonSubsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_CommonSubsystem::GetStatId(void)const_::_2_::FStat_UWN_CommonSubsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UWN_CommonSubsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_CommonSubsystem::GetStatId(void)const_::_2_::FStat_UWN_CommonSubsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UWN_CommonSubsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UWN_CommonSubsystem,*pFVar1,
                   L"UWN_CommonSubsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true
                   ,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UWN_CommonSubsystem;
  if (StatPtr_UWN_CommonSubsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_CommonSubsystem::GetStatId(void)const_::_2_::FStat_UWN_CommonSubsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UWN_CommonSubsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_CommonSubsystem::GetStatId(void)const_::_2_::FStat_UWN_CommonSubsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UWN_CommonSubsystem,*pFVar1,
                         L"UWN_CommonSubsystem","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetVolumeContextByClass @ 1494a3a10

UWN_VolumeContext * __thiscall
UWN_CommonSubsystem::GetVolumeContextByClass(UWN_CommonSubsystem *this,UClass *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  
  if (param_1 != (UClass *)0x0) {
    pFVar1 = (FObjectPtr_u_0 *)
             TMapBase<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
             ::Find((TMapBase<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
                     *)&this->AllVolumesPerType,param_1);
    if (pFVar1 != (FObjectPtr_u_0 *)0x0) {
      return (UWN_VolumeContext *)(FObjectPtr)pFVar1->Handle;
    }
  }
  return (UWN_VolumeContext *)0x0;
}

// GetVolumesByClass @ 1494a3a40

TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
* __thiscall
UWN_CommonSubsystem::GetVolumesByClass
          (UWN_CommonSubsystem *this,
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,UClass *param_1)

{
  TObjectPtr<UWN_VolumeContext> *pTVar1;
  UWN_VolumeContext *pUVar2;
  
  pUVar2 = (UWN_VolumeContext *)0x0;
  if ((param_1 != (UClass *)0x0) &&
     (pTVar1 = TMapBase<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
               ::Find((TMapBase<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
                       *)&this->AllVolumesPerType,param_1),
     pTVar1 != (TObjectPtr<UWN_VolumeContext> *)0x0)) {
    pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  }
  if (pUVar2 == (UWN_VolumeContext *)0x0) {
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = 0;
    (__return_storage_ptr__->Hash).InlineData[0] = '\0';
    (__return_storage_ptr__->Hash).InlineData[1] = '\0';
    (__return_storage_ptr__->Hash).InlineData[2] = '\0';
    (__return_storage_ptr__->Hash).InlineData[3] = '\0';
    (__return_storage_ptr__->Hash)._padding_ = 0;
    *(undefined8 *)&__return_storage_ptr__->HashSize = 0;
    *(undefined8 *)&__return_storage_ptr__->Elements = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
    (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::operator=(__return_storage_ptr__,&pUVar2->Volumes);
  return __return_storage_ptr__;
}

// GetVolumesEntered @ 1494a3b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
* __thiscall
UWN_CommonSubsystem::GetVolumesEntered
          (UWN_CommonSubsystem *this,
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,EWN_VolumeObserverMode param_1)

{
  TObjectPtr<UWN_VolumeContext> TVar1;
  int iVar2;
  TObjectPtr<UWN_VolumeContext>_u_0 *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [24];
  undefined8 uStack_b0;
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_90;
  ulonglong local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pTVar3 = &TMapBase<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>_>
            ::Find(&this->EnteredVolumesPerMode,param_1)->field0_0x0;
  TVar1.field0_0x0 = (TObjectPtr<UWN_VolumeContext>_u_0)pTVar3->DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1494a3b54:
    if (TVar1.field0_0x0 != (UWN_VolumeContext *)0x0) {
      local_78._0_8_ = (FScriptContainerElement *)0x0;
      local_78._8_8_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_4c = 0x80;
      local_48 = 0xffffffff;
      local_44 = 0;
      local_38 = (ForElementType<FSetElementId>)0x0;
      local_30 = 0;
      TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                   *)local_78,
                  (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                   *)((longlong)TVar1.field0_0x0 + 0x28));
      TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::
      TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                (__return_storage_ptr__,
                 (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)local_78);
      local_30 = 0;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_38);
      }
      iVar2 = SUB84(local_78._8_8_,4);
      local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
      }
      local_48 = 0xffffffff;
      local_44 = 0;
      local_50 = 0;
      if (0x80 < local_4c) {
        local_4c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
      }
      pFVar4 = (FScriptContainerElement *)local_78._0_8_;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
        pFVar4 = (FScriptContainerElement *)local_78._0_8_;
      }
      goto LAB_1494a3cce;
    }
  }
  else if (TVar1.field0_0x0 != (UWN_VolumeContext *)0x0) {
    UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
    goto LAB_1494a3b54;
  }
  local_90.InlineData[0] = '\0';
  local_90.InlineData[1] = '\0';
  local_90.InlineData[2] = '\0';
  local_90.InlineData[3] = '\0';
  local_90._padding_ = 0;
  local_c8._16_8_ = 0;
  uStack_b0 = 0;
  local_80 = 0;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_90.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            (__return_storage_ptr__,
             (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)local_c8);
  local_80 = local_80 & 0xffffffff00000000;
  if (local_90.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_90.SecondaryData);
  }
  iVar2 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  pFVar4 = (FScriptContainerElement *)local_c8._0_8_;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
    pFVar4 = (FScriptContainerElement *)local_c8._0_8_;
  }
LAB_1494a3cce:
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return __return_storage_ptr__;
}

// HandleVolumeEnter @ 1494a3d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UWN_CommonSubsystem::HandleVolumeEnter
          (UWN_CommonSubsystem *this,UWN_VolumeComponent *param_1,EWN_VolumeObserverMode param_2,
          TVector<double> *param_3)

{
  UWN_VolumeContext *pUVar1;
  undefined4 uVar2;
  int iVar3;
  TObjectPtr<UWN_VolumeContext>_u_0 *pTVar4;
  TObjectPtr<UWN_VolumeContext>_u_0 TVar5;
  uint uVar6;
  ForAnyElementType _Dst;
  undefined1 *_Dst_00;
  ForElementType<FSetElementId> _Src;
  undefined1 *_Src_00;
  longlong lVar7;
  undefined1 auStackY_158 [32];
  EWN_VolumeObserverMode local_128 [8];
  FWeakObjectPtr local_120;
  FWeakObjectPtr local_118 [2];
  undefined1 local_108 [32];
  undefined1 *local_e8;
  int local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [8];
  ForElementType<FSetElementId> local_c8;
  uint local_c0;
  EWN_VolumeObserverMode local_b8 [8];
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined1 local_98 [32];
  undefined1 *local_78;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  if (param_1 != (UWN_VolumeComponent *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
    local_128[0] = param_2;
    pTVar4 = &TMapBase<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>_>
              ::FindOrAddImpl<enum_EWN_VolumeObserverMode_const_&>
                        (&this->EnteredVolumesPerMode,(uint)param_2,local_128)->field0_0x0;
    TVar5.DebugPtr = pTVar4->DebugPtr;
    if (TVar5 == (UWN_VolumeContext *)0x0) {
      TVar5.DebugPtr = NewObject<UWN_VolumeContext>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar5.DebugPtr != (UWN_VolumeContext *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      }
      pTVar4->DebugPtr = (UWN_VolumeContext *)TVar5;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_120.ObjectIndex = 0;
    local_120.ObjectSerialNumber = 0;
    local_118[0] = (FWeakObjectPtr)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_120,(FObjectPtr)local_118);
    local_118[0] = local_120;
    iVar3 = TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr>_>
                      (&(TVar5.DebugPtr)->Volumes,
                       local_120.ObjectSerialNumber ^ local_120.ObjectIndex,
                       (TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr> *)local_118);
    if (iVar3 == -1) {
      pUVar1 = pTVar4->DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_118[0].ObjectIndex = 0;
      local_118[0].ObjectSerialNumber = 0;
      local_120 = (FWeakObjectPtr)param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(local_118,(FObjectPtr)&local_120);
      TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Emplace<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>
                (&pUVar1->Volumes,(TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr> *)&local_120,
                 (bool *)local_118);
      local_108._0_8_ = (FScriptContainerElement *)0x0;
      local_108._8_8_ = 0;
      local_e8 = (undefined1 *)0x0;
      local_e0 = 0;
      local_dc = 0x80;
      local_d8 = 0xffffffff;
      local_d4 = 0;
      local_c8 = (ForElementType<FSetElementId>)0x0;
      local_c0 = 0;
      TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                   *)local_108,&pTVar4->DebugPtr->Volumes);
      uVar6 = local_c0;
      local_b0 = (param_3->field0_0x0)._s_0.X;
      dStack_a8 = (param_3->field0_0x0)._s_0.Y;
      lVar7 = (longlong)(int)local_c0;
      local_a0 = (param_3->field0_0x0)._s_0.Z;
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (undefined1 *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      local_b8[0] = local_128[0];
      if (1 < local_c0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,local_c0,4)
        ;
      }
      _Src = (ForElementType<FSetElementId>)local_d0;
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        _Src = local_c8;
      }
      _Dst.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        _Dst.Data = local_58.Data;
      }
      if (uVar6 != 0) {
        memcpy(_Dst.Data,(void *)_Src,lVar7 << 2);
      }
      local_50 = uVar6;
      uVar2 = local_108._8_4_;
      lVar7 = (longlong)(int)local_108._8_4_;
      TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,local_108._8_4_);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar2,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                 (int *)(local_98 + 0xc));
      local_68 = local_d8;
      local_64 = local_d4;
      local_70 = 0;
      uVar6 = local_e0 + 0x1fU & 0xffffffe0;
      if (((int)local_6c < (int)uVar6) || (0x80 < (int)local_6c)) {
        local_6c = 0x80;
        if (0x80 < (int)uVar6) {
          local_6c = uVar6;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      local_70 = local_e0;
      if (local_e0 != 0) {
        _Src_00 = local_108 + 0x10;
        if (local_e8 != (undefined1 *)0x0) {
          _Src_00 = local_e8;
        }
        _Dst_00 = local_98 + 0x10;
        if (local_78 != (undefined1 *)0x0) {
          _Dst_00 = local_78;
        }
        memcpy(_Dst_00,_Src_00,(ulonglong)(local_e0 + 0x1fU >> 5) << 2);
      }
      if (uVar2 != 0) {
        memcpy((void *)local_98._0_8_,(void *)local_108._0_8_,lVar7 << 4);
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnEnter,local_b8);
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      iVar3 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (undefined1 *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      local_c0 = 0;
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_c8);
      }
      iVar3 = SUB84(local_108._8_8_,4);
      local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
      }
      local_d8 = 0xffffffff;
      local_d4 = 0;
      local_e0 = 0;
      if (0x80 < local_dc) {
        local_dc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
      }
      if (local_e8 != (undefined1 *)0x0) {
        FMemory::Free(local_e8);
      }
      if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_108._0_8_);
      }
    }
  }
  return;
}

// HandleVolumeLeave @ 1494a4150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UWN_CommonSubsystem::HandleVolumeLeave
          (UWN_CommonSubsystem *this,UWN_VolumeComponent *param_1,EWN_VolumeObserverMode param_2)

{
  TObjectPtr<UWN_VolumeContext> TVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  TObjectPtr<UWN_VolumeContext>_u_0 *pTVar5;
  ForAnyElementType _Dst;
  uint uVar6;
  undefined1 *_Dst_00;
  ForElementType<FSetElementId> _Src;
  undefined1 *_Src_00;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar7;
  undefined1 auStackY_128 [32];
  FWeakObjectPtr local_f8;
  FWeakObjectPtr local_f0;
  EWN_VolumeObserverMode local_e8 [8];
  undefined1 local_e0 [32];
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FScriptContainerElement local_a8 [8];
  ForAnyElementType local_a0;
  uint local_98;
  undefined1 local_88 [32];
  undefined1 *local_68;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  uint local_40;
  ulonglong local_38;
  
  if (param_1 != (UWN_VolumeComponent *)0x0) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
    pTVar5 = &TMapBase<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>_>
              ::Find(&this->EnteredVolumesPerMode,param_2)->field0_0x0;
    TVar1.field0_0x0 = (TObjectPtr<UWN_VolumeContext>_u_0)pTVar5->DebugPtr;
    if (TVar1.field0_0x0 != (UWN_VolumeContext *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      this_00 = (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                 *)((longlong)TVar1.field0_0x0 + 0x28);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_f8.ObjectIndex = 0;
      local_f8.ObjectSerialNumber = 0;
      local_f0 = (FWeakObjectPtr)param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_f0);
      local_f0 = local_f8;
      iVar3 = TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr>_>
                        (this_00,local_f8.ObjectSerialNumber ^ local_f8.ObjectIndex,
                         (TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr> *)&local_f0);
      if (iVar3 != -1) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_f8.ObjectIndex = 0;
        local_f8.ObjectSerialNumber = 0;
        local_f0 = (FWeakObjectPtr)param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_f0);
        local_f0 = local_f8;
        if (*(int *)((longlong)TVar1.field0_0x0 + 0x30) !=
            *(int *)((longlong)TVar1.field0_0x0 + 0x5c)) {
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr>_>
                    (this_00,local_f8.ObjectSerialNumber ^ local_f8.ObjectIndex,
                     (TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr> *)&local_f0);
        }
        local_88._0_8_ = (FScriptContainerElement *)0x0;
        local_88._8_8_ = 0;
        local_68 = (undefined1 *)0x0;
        local_60 = 0;
        local_5c = 0x80;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_48 = (ForElementType<FSetElementId>)0x0;
        local_40 = 0;
        TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::operator=((TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                     *)local_88,this_00);
        uVar4 = local_40;
        lVar7 = (longlong)(int)local_40;
        local_b8 = ___xmm_00000000ffffffff0000008000000000;
        uStack_b0 = _UNK_150631d98;
        local_a0.Data = (FScriptContainerElement *)0x0;
        local_e0._0_8_ = (FScriptContainerElement *)0x0;
        local_e0._8_8_ = 0;
        local_c0 = (undefined1 *)0x0;
        local_98 = 0;
        local_e8[0] = param_2;
        if (1 < local_40) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_a0,0,local_40,4);
        }
        _Src = (ForElementType<FSetElementId>)local_50;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          _Src = local_48;
        }
        _Dst.Data = local_a8;
        if (local_a0.Data != (FScriptContainerElement *)0x0) {
          _Dst.Data = local_a0.Data;
        }
        if (uVar4 != 0) {
          memcpy(_Dst.Data,(void *)_Src,lVar7 << 2);
        }
        local_98 = uVar4;
        uVar2 = local_88._8_4_;
        lVar7 = (longlong)(int)local_88._8_4_;
        TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_e0,local_88._8_4_);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,uVar2,(ForAnyElementType *)local_e0,(int *)(local_e0 + 8),
                   (int *)(local_e0 + 0xc));
        uVar4 = local_b8._4_4_;
        uStack_b0._4_4_ = local_54;
        uStack_b0._0_4_ = local_58;
        local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
        uVar6 = local_60 + 0x1fU & 0xffffffe0;
        if (((int)uVar4 < (int)uVar6) || (0x80 < (int)uVar4)) {
          uVar4 = 0x80;
          if (0x80 < (int)uVar6) {
            uVar4 = uVar6;
          }
          local_b8 = (ulonglong)uVar4 << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_e0 + 0x10),0);
        }
        local_b8._0_4_ = local_60;
        if (local_60 != 0) {
          _Src_00 = local_88 + 0x10;
          if (local_68 != (undefined1 *)0x0) {
            _Src_00 = local_68;
          }
          _Dst_00 = local_e0 + 0x10;
          if (local_c0 != (undefined1 *)0x0) {
            _Dst_00 = local_c0;
          }
          memcpy(_Dst_00,_Src_00,(ulonglong)(local_60 + 0x1fU >> 5) << 2);
        }
        if (uVar2 != 0) {
          memcpy((void *)local_e0._0_8_,(void *)local_88._0_8_,lVar7 << 4);
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnLeave,local_e8);
        local_98 = 0;
        if (local_a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data);
        }
        iVar3 = SUB84(local_e0._8_8_,4);
        local_e0._8_8_ = local_e0._8_8_ & 0xffffffff00000000;
        if (iVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)local_e0,0,(int *)(local_e0 + 0xc));
        }
        uVar4 = local_b8._4_4_;
        uStack_b0 = 0xffffffff;
        local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
        if (0x80 < uVar4) {
          local_b8 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_e0 + 0x10),0);
        }
        if (local_c0 != (undefined1 *)0x0) {
          FMemory::Free(local_c0);
        }
        if ((FScriptContainerElement *)local_e0._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_e0._0_8_);
        }
        local_40 = 0;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_48);
        }
        iVar3 = SUB84(local_88._8_8_,4);
        local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
        if (iVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
        }
        local_58 = 0xffffffff;
        local_54 = 0;
        local_60 = 0;
        if (0x80 < local_5c) {
          local_5c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
        }
        if (local_68 != (undefined1 *)0x0) {
          FMemory::Free(local_68);
        }
        if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_88._0_8_);
        }
      }
    }
  }
  return;
}

// Initialize @ 1494a52c0

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
UWN_CommonSubsystem::Initialize(UWN_CommonSubsystem *this,FSubsystemCollectionBase *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ForAnyElementType FVar11;
  UWorld *local_res8;
  TPairInitializer<UClass_*_const_&,TObjectPtr<UWN_VolumeContext>_&&> local_res18;
  UWN_VolumeContext *local_68;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_60;
  UWorld **local_50;
  TObjectPtr<UWN_VolumeContext> **local_48;
  
  UTickableWorldSubsystem::Initialize((UTickableWorldSubsystem *)this,param_1);
  local_res8 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(this->CachedWorld).WeakPtr,(FObjectPtr)&local_res8);
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  pUVar7 = UWN_VolumeComponent::StaticClass();
  GetDerivedClasses(pUVar7,&local_60,true);
  iVar5 = local_60.ArrayNum;
  pFVar1 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 8;
  FVar11.Data = local_60.AllocatorInstance.Data;
  do {
    if (local_60.ArrayNum != iVar5) {
      `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar11.Data == pFVar1) {
      local_50 = &local_res8;
      local_res18.Value = (TObjectPtr<UWN_VolumeContext> *)0x0;
      local_48 = &local_res18.Value;
      local_res8 = (UWorld *)((ulonglong)local_res8 & 0xffffffffffffff00);
      TSet<TTuple<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EWN_VolumeObserverMode_&&,TObjectPtr<UWN_VolumeContext>_&&>_>
                (&this->EnteredVolumesPerMode,
                 (TPairInitializer<EWN_VolumeObserverMode_&&,TObjectPtr<UWN_VolumeContext>_&&> *)
                 &local_res18,(bool *)&local_50);
      local_50 = &local_res8;
      local_res18.Value = (TObjectPtr<UWN_VolumeContext> *)0x0;
      local_48 = &local_res18.Value;
      local_res8._0_1_ = 1;
      TSet<TTuple<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EWN_VolumeObserverMode_&&,TObjectPtr<UWN_VolumeContext>_&&>_>
                (&this->EnteredVolumesPerMode,
                 (TPairInitializer<EWN_VolumeObserverMode_&&,TObjectPtr<UWN_VolumeContext>_&&> *)
                 &local_res18,(bool *)&local_50);
      local_50 = &local_res8;
      local_res18.Value = (TObjectPtr<UWN_VolumeContext> *)0x0;
      local_48 = &local_res18.Value;
      local_res8._0_1_ = 2;
      TSet<TTuple<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EWN_VolumeObserverMode_&&,TObjectPtr<UWN_VolumeContext>_&&>_>
                (&this->EnteredVolumesPerMode,
                 (TPairInitializer<EWN_VolumeObserverMode_&&,TObjectPtr<UWN_VolumeContext>_&&> *)
                 &local_res18,(bool *)&local_50);
      local_50 = &local_res8;
      local_res18.Value = (TObjectPtr<UWN_VolumeContext> *)0x0;
      local_48 = &local_res18.Value;
      local_res8 = (UWorld *)CONCAT71(local_res8._1_7_,3);
      TSet<TTuple<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EWN_VolumeObserverMode_&&,TObjectPtr<UWN_VolumeContext>_&&>_>
                (&this->EnteredVolumesPerMode,
                 (TPairInitializer<EWN_VolumeObserverMode_&&,TObjectPtr<UWN_VolumeContext>_&&> *)
                 &local_res18,(bool *)&local_50);
      if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.AllocatorInstance.Data);
      }
      return;
    }
    local_res8 = *(UWorld **)FVar11.Data;
    if (local_res8 != (UWorld *)0x0) {
      if (Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton == (UClass *)0x0) {
        local_res18.Value = (TObjectPtr<UWN_VolumeContext> *)UActorComponent::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/WN_Common",L"WN_VolumeComponent",
                   &Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton,
                   UWN_VolumeComponent::StaticRegisterNativesUWN_VolumeComponent,0x6a0,0x10,
                   CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
                   InternalConstructor<UWN_VolumeComponent>,
                   InternalVTableHelperCtorCaller<UWN_VolumeComponent>,
                   (FUObjectCppClassStaticFunctions *)&local_res18.Value,
                   UPrimitiveComponent::StaticClass,UObject::StaticClass);
      }
      if (Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton != (UClass *)0x0) {
        iVar6 = (int)(Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton)->_padding_;
        if ((*(int *)&(local_res8->NetDriver).field0_0x0 < iVar6) ||
           ((longlong *)(&((local_res8->PersistentLevel).field0_0x0.DebugPtr)->_padding_)[iVar6] !=
            &(Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton)->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          uVar8 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^
                  (uint)((ulonglong)local_res8 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          if (*(int *)&(this->AllVolumesPerType).field_0x8 !=
              *(int *)&(this->AllVolumesPerType).field_0x34) {
            puVar3 = *(undefined1 **)&(this->AllVolumesPerType).field_0x40;
            puVar10 = &(this->AllVolumesPerType).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar10 = puVar3;
            }
            iVar6 = *(int *)(puVar10 +
                            (ulonglong)
                            (*(int *)&(this->AllVolumesPerType).field_0x48 - 1U &
                            (uVar8 >> 0x10 ^ uVar8)) * 4);
            if (iVar6 != -1) {
              lVar9 = *(longlong *)&(this->AllVolumesPerType).field_0x0;
              do {
                lVar2 = lVar9 + (longlong)iVar6 * 0x18;
                if (*(UWorld **)(lVar9 + (longlong)iVar6 * 0x18) == local_res8) {
                  lVar9 = lVar2 + 8;
                  if (lVar2 == 0) {
                    lVar9 = 0;
                  }
                  if (lVar9 != 0) goto LAB_1494a552f;
                  break;
                }
                iVar6 = *(int *)(lVar2 + 0x10);
              } while (iVar6 != -1);
            }
          }
          local_68 = NewObject<UWN_VolumeContext>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_68 != (UWN_VolumeContext *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_68);
          }
          local_50 = &local_res8;
          local_48 = (TObjectPtr<UWN_VolumeContext> **)&local_68;
          TSet<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UClass_*_const_&,TObjectPtr<UWN_VolumeContext>_&&>_>
                    ((TSet<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
                      *)&this->AllVolumesPerType,&local_res18,(bool *)&local_50);
        }
      }
    }
LAB_1494a552f:
    FVar11.Data = FVar11.Data + 8;
  } while( true );
}

// IsTickableInEditor @ 1494a5d20

bool __thiscall UWN_CommonSubsystem::IsTickableInEditor(UWN_CommonSubsystem *this)

{
  return (bool)(~(byte)(*(uint *)&this[-1].PendingUnregisterVolumes.Elements.field_0x20 >> 4) & 1);
}

// IsTickableWhenPaused @ 1494a5d40

bool __thiscall UWN_CommonSubsystem::IsTickableWhenPaused(UWN_CommonSubsystem *this)

{
  return (bool)((byte)(*(uint *)&this[-1].PendingUnregisterVolumes.Elements.field_0x20 >> 4) & 1);
}

// RegisterVolume @ 1494a9a50

void __thiscall
UWN_CommonSubsystem::RegisterVolume(UWN_CommonSubsystem *this,UWN_VolumeComponent *param_1)

{
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UWN_VolumeContext *pUVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  int local_res10 [2];
  TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr> local_res18;
  FWeakObjectPtr local_res20;
  UWN_CommonSubsystem *local_88;
  ulonglong local_80;
  ulonglong *local_78;
  UWN_VolumeComponent *local_70;
  FName local_68;
  FName local_60;
  code *local_58;
  undefined8 uStack_50;
  code *local_48;
  ulonglong uStack_40;
  
  if (param_1->IndexInSubsystem != -1) {
    return;
  }
  FWN_UniqueIndexAllocator::TryResize(&this->VolumeIndexAllocator);
  if (((this->VolumeIndexAllocator).FreedIndices.ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (this->VolumeIndexAllocator).FreedIndices.ArrayNum;
  iVar11 = iVar3 + -1;
  iVar3 = *(int *)((this->VolumeIndexAllocator).FreedIndices.AllocatorInstance.Data +
                  (longlong)iVar3 * 4 + -4);
  (this->VolumeIndexAllocator).FreedIndices.ArrayNum = iVar11;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->VolumeIndexAllocator).FreedIndices.AllocatorInstance,iVar11,
             &(this->VolumeIndexAllocator).FreedIndices.ArrayMax);
  local_88 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UWN_CommonSubsystem *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&(param_1->CommonSubsystem).WeakPtr,(FObjectPtr)&local_88);
  local_80 = param_1->_padding_;
  param_1->IndexInSubsystem = iVar3;
  this_00 = &this->AllVolumesPerType;
  uVar6 = ((uint)(local_80 >> 0x14) & 0xffff ^ (uint)(local_80 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->AllVolumesPerType).field_0x8 != *(int *)&(this->AllVolumesPerType).field_0x34)
  {
    puVar7 = *(undefined1 **)&(this->AllVolumesPerType).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->AllVolumesPerType).field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->AllVolumesPerType).field_0x48 - 1U & uVar6) * 4);
    if (iVar3 != -1) {
      do {
        lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18;
        if (*(ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18) == local_80) {
          if (lVar8 != 0) goto LAB_1494a9bee;
          break;
        }
        iVar3 = *(int *)(lVar8 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_78 = &local_80;
  TSet<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
            ((TSet<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res10,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)uVar6,
             (bool *)&local_78);
  lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)local_res10[0] * 0x18;
LAB_1494a9bee:
  pUVar4 = *(UWN_VolumeContext **)(lVar8 + 8);
  if (pUVar4 == (UWN_VolumeContext *)0x0) {
    pUVar4 = NewObject<UWN_VolumeContext>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UWN_VolumeContext *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    *(UWN_VolumeContext **)(lVar8 + 8) = pUVar4;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_70 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_70);
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Emplace<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>
            (&pUVar4->Volumes,&local_res18,(bool *)&local_res20);
  pcVar5 = strstr("&UWN_CommonSubsystem::HandleVolumeEnter","::");
  pcVar10 = &DAT_00000002;
  if (pcVar5 == (char *)0x0) {
LAB_1494a9cba:
    pcVar9 = &DAT_00000002;
LAB_1494a9cbd:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar9 = pcVar5;
      pcVar5 = strstr(pcVar9 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar9 == (char *)0x0) goto LAB_1494a9cba;
    pcVar9 = pcVar9 + 2;
    if (*pcVar9 == '0') goto LAB_1494a9cbd;
  }
  ::FName::FName(&local_68,pcVar9);
  uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
  local_58 = HandleVolumeEnter;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UWN_VolumeComponent_*,enum_EWN_VolumeObserverMode,UE::Math::TVector<double>_const_&>
  ::__Internal_AddDynamic<UWN_CommonSubsystem>
            (&param_1->OnEnter,this,(pmf_0829b9b7 *)&local_58,local_68);
  pcVar5 = strstr("&UWN_CommonSubsystem::HandleVolumeLeave","::");
  if (pcVar5 != (char *)0x0) {
    do {
      pcVar9 = pcVar5;
      pcVar5 = strstr(pcVar9 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if ((pcVar9 != (char *)0x0) && (pcVar10 = pcVar9 + 2, pcVar9[2] != '0')) goto LAB_1494a9da8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1494a9da8:
  ::FName::FName(&local_60,pcVar10);
  local_58 = HandleVolumeLeave;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  local_48 = HandleVolumeLeave;
  uStack_40 = uStack_50;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UWN_VolumeComponent_*,enum_EWN_VolumeObserverMode>
  ::__Internal_AddDynamic<UWN_CommonSubsystem>
            (&param_1->OnLeave,this,(pmf_ed8db45d *)&local_48,local_60);
  BroadCastOnVolumeListChange(this);
  if (param_1->bCanOverlapVolume == false) {
    CheckVolumeOverlap(this,param_1);
  }
  return;
}

// SetCustomPositionForClass @ 1494ad4f0

void __thiscall
UWN_CommonSubsystem::SetCustomPositionForClass
          (UWN_CommonSubsystem *this,UClass *param_1,TVector<double> *param_2)

{
  TObjectPtr<UWN_VolumeContext> TVar1;
  double dVar2;
  TObjectPtr<UWN_VolumeContext>_u_0 *pTVar3;
  
  if (((param_1 != (UClass *)0x0) &&
      (pTVar3 = &TMapBase<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
                 ::Find((TMapBase<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
                         *)&this->AllVolumesPerType,param_1)->field0_0x0,
      pTVar3 != (TObjectPtr<UWN_VolumeContext>_u_0 *)0x0)) &&
     (TVar1.field0_0x0 = (TObjectPtr<UWN_VolumeContext>_u_0)pTVar3->DebugPtr,
     TVar1.field0_0x0 != (UWN_VolumeContext *)0x0)) {
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    *(double *)((longlong)TVar1.field0_0x0 + 0x78) = (param_2->field0_0x0)._s_0.X;
    *(double *)((longlong)TVar1.field0_0x0 + 0x80) = dVar2;
    *(double *)((longlong)TVar1.field0_0x0 + 0x88) = (param_2->field0_0x0)._s_0.Z;
  }
  return;
}

// ShouldCreateSubsystem @ 1494ad820

bool __thiscall
UWN_CommonSubsystem::ShouldCreateSubsystem(UWN_CommonSubsystem *this,UObject *param_1)

{
  return true;
}

// StaticRegisterNativesUWN_CommonSubsystem @ 1494ae290

void __cdecl UWN_CommonSubsystem::StaticRegisterNativesUWN_CommonSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UWN_CommonSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 1494ae430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWN_CommonSubsystem::Tick(UWN_CommonSubsystem *this,float param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  UObject *pUVar4;
  APlayerCameraManager *pAVar5;
  TSet<TObjectPtr<UWN_VolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_VolumeComponent>,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar6;
  UWorld *this_01;
  APlayerController *pAVar7;
  undefined4 *puVar8;
  double *pdVar9;
  longlong lVar10;
  int iVar11;
  TWeakObjectPtr<UWorld,FWeakObjectPtr> *pTVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_c8 [12];
  uint uStack_bc;
  TWeakObjectPtr<UWorld,FWeakObjectPtr> *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  TSet<TObjectPtr<UWN_VolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_VolumeComponent>,0>,FDefaultSetAllocator>
  *local_a0;
  TVector<double>_u_0 local_98;
  undefined1 *local_80;
  int iStack_78;
  uint uStack_74;
  TWeakObjectPtr<UWorld,FWeakObjectPtr> *local_70;
  undefined4 uStack_68;
  int iStack_64;
  int local_60;
  undefined4 uStack_5c;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38;
  
  UTickableWorldSubsystem::Tick((UTickableWorldSubsystem *)this,param_1);
  if (*(int *)&(this->EnteredVolumesPerMode).field_0x48 !=
      (this->VolumeIndexAllocator).FreedIndices.ArrayMax) {
    iStack_78 = 0;
    local_c8._0_8_ = &(this->EnteredVolumesPerMode).field_0x40;
    iVar2 = *(int *)&(this->VolumeIndexAllocator).FreedIndices.AllocatorInstance.Data;
    local_b8 = &this->CachedWorld;
    uStack_74 = 1;
    local_60 = 0;
    iStack_64 = 0;
    if (iVar2 != 0) {
      pTVar12 = *(TWeakObjectPtr<UWorld,FWeakObjectPtr> **)&(this->VolumeIndexAllocator).NumIndices;
      if (pTVar12 == (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)0x0) {
        pTVar12 = local_b8;
      }
      uVar3 = (pTVar12->WeakPtr).ObjectIndex;
      while (uVar3 == 0) {
        lVar10 = (longlong)iStack_78;
        local_60 = local_60 + 0x20;
        iStack_78 = iStack_78 + 1;
        iStack_64 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_78) goto LAB_1494ae4fb;
        uVar3 = (&(pTVar12->WeakPtr).ObjectSerialNumber)[lVar10];
      }
      uStack_74 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_74 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iStack_64 = local_60 + -1 + (int)lVar10;
      if (iVar2 < iStack_64) {
        iStack_64 = iVar2;
      }
    }
LAB_1494ae4fb:
    uStack_68 = 0xffffffff;
    uStack_5c = uStack_b0._4_4_;
    unique0x100003d6 = (double)CONCAT44(uStack_74,iStack_78);
    local_a8 = CONCAT44(uStack_b0._4_4_,local_60);
    iVar11 = iStack_64;
    uStack_b0 = CONCAT44(iStack_64,0xffffffff);
    local_a0 = (TSet<TObjectPtr<UWN_VolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_VolumeComponent>,0>,FDefaultSetAllocator>
                *)local_c8._0_8_;
    local_80 = (undefined1 *)local_c8._0_8_;
    local_70 = local_b8;
    if (iStack_64 < iVar2) {
      do {
        this_00 = local_a0;
        pUVar4 = *(UObject **)(*(longlong *)local_c8._0_8_ + (longlong)iVar11 * 0x10);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar4 != (UObject *)0x0) goto LAB_1494ae57e;
        }
        else if (pUVar4 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar4);
LAB_1494ae57e:
          (**(code **)(*(longlong *)pUVar4 + 0xab0))(pUVar4);
        }
        TSet<TObjectPtr<UWN_VolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_VolumeComponent>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(this_00,iVar11);
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_c8 + 8));
        iVar11 = uStack_b0._4_4_;
      } while (uStack_b0._4_4_ <
               *(int *)&(((TArray<int,TSizedDefaultAllocator<32>_> *)(local_b8 + 3))->
                        AllocatorInstance).Data);
    }
  }
  this_01 = UWorldSubsystem::GetWorld
                      ((UWorldSubsystem *)&this[-1].PendingUnregisterVolumes.Elements.field_0x18);
  if (this_01 != (UWorld *)0x0) {
    bVar6 = UWorld::IsGameWorld(this_01);
    if (((bVar6) &&
        (pAVar7 = UWorld::GetFirstPlayerController(this_01), pAVar7 != (APlayerController *)0x0)) &&
       (pAVar5 = (pAVar7->PlayerCameraManager).field0_0x0.DebugPtr,
       pAVar5 != (APlayerCameraManager *)0x0)) {
      puVar8 = (undefined4 *)(**(code **)(pAVar5->_padding_ + 0x798))();
      local_98._0_4_ = *puVar8;
      local_98._4_4_ = puVar8[1];
      local_98._8_4_ = puVar8[2];
      local_98._12_4_ = puVar8[3];
      local_98._s_0.Z = (double)*(undefined8 *)(puVar8 + 4);
      uVar13 = SUB84(local_98._s_0.Z,0);
      uVar14 = (undefined4)((ulonglong)local_98._s_0.Z >> 0x20);
    }
    else {
      bVar6 = WN_GetPlayerPosAndRot
                        (this_01,(TVector<double> *)&local_98._s_0,(TRotator<double> *)local_c8);
      if (!bVar6) goto LAB_1494ae69e;
      uVar13 = SUB84(local_98._s_0.Z,0);
      uVar14 = (undefined4)((ulonglong)local_98._16_8_ >> 0x20);
    }
    local_50._s_0.Z = (double)CONCAT44(uVar14,uVar13);
    local_38._s_0.Z = (double)CONCAT44(uVar14,uVar13);
    local_50._4_4_ = local_98._4_4_;
    local_50._0_4_ = local_98._0_4_;
    local_50._12_4_ = local_98._12_4_;
    local_50._8_4_ = local_98._8_4_;
    local_38._0_4_ = local_98._0_4_;
    local_38._4_4_ = local_98._4_4_;
    local_38._8_4_ = local_98._8_4_;
    local_38._12_4_ = local_98._12_4_;
    WN_GetPlayerPosAndRot(this_01,(TVector<double> *)&local_38._s_0,(TRotator<double> *)local_c8);
    bVar6 = UWorld::IsGameWorld(this_01);
    if (((bVar6) &&
        (pAVar7 = UWorld::GetFirstPlayerController(this_01), pAVar7 != (APlayerController *)0x0)) &&
       (pAVar5 = (pAVar7->PlayerCameraManager).field0_0x0.DebugPtr,
       pAVar5 != (APlayerCameraManager *)0x0)) {
      pdVar9 = (double *)(**(code **)(pAVar5->_padding_ + 0x798))();
      local_50._s_0.X = *pdVar9;
      local_50._s_0.Y = pdVar9[1];
      local_50._s_0.Z = pdVar9[2];
    }
  }
LAB_1494ae69e:
  UpdateAllVolumes((UWN_CommonSubsystem *)&this[-1].PendingUnregisterVolumes.Elements.field_0x18,
                   (TVector<double> *)&local_38._s_0,(TVector<double> *)&local_50._s_0,
                   (TVector<double> *)&local_98._s_0);
  return;
}

// UnRegisterVolume @ 1494af4c0

void __thiscall
UWN_CommonSubsystem::UnRegisterVolume(UWN_CommonSubsystem *this,UWN_VolumeComponent *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  TObjectPtr<UWN_VolumeContext> TVar6;
  UObject *pUVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TObjectPtr<UWN_VolumeContext>_u_0 *pTVar11;
  char *pcVar12;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar13;
  longlong lVar14;
  char *pcVar15;
  uint *puVar16;
  char *pcVar17;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  int local_108 [2];
  FWeakObjectPtr local_100;
  UObject *local_f8;
  undefined8 local_f0;
  UWN_VolumeComponent *local_e8;
  FWeakObjectPtr local_e0;
  FName local_d8;
  FName local_d0;
  UWN_VolumeComponent *local_c8;
  UObject *local_c0;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  undefined4 uStack_6c;
  undefined4 local_44;
  
  iVar10 = param_1->IndexInSubsystem;
  if (iVar10 == -1) {
    return;
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_f0 = 0;
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_f0);
  (param_1->CommonSubsystem).WeakPtr = local_res18;
  param_1->IndexInSubsystem = -1;
  local_108[0] = iVar10;
  if ((iVar10 < (this->VolumeIndexAllocator).BaseIndex) ||
     ((this->VolumeIndexAllocator).NumIndices <= iVar10)) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<668991184131063845>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Public\\WN_UniqueIndexAllocator.h"
                       ,0x25,"false");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    pTVar2 = &(this->VolumeIndexAllocator).FreedIndices;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)local_108) &&
        ((FScriptContainerElement *)local_108 <
         pFVar5 + (longlong)(this->VolumeIndexAllocator).FreedIndices.ArrayMax * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (this->VolumeIndexAllocator).FreedIndices.ArrayNum;
    piVar1 = &(this->VolumeIndexAllocator).FreedIndices.ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->VolumeIndexAllocator).FreedIndices.ArrayNum = iVar10 + 1;
    *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_108[0];
  }
  pTVar11 = &TMapBase<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
             ::Find((TMapBase<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
                     *)&this->AllVolumesPerType,(UClass *)param_1->_padding_)->field0_0x0;
  TVar6.field0_0x0 = (TObjectPtr<UWN_VolumeContext>_u_0)pTVar11->DebugPtr;
  if (TVar6.field0_0x0 != (UWN_VolumeContext *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable((UObject *)TVar6.field0_0x0),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_e8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_e8);
    local_e0 = local_res10;
    if (*(int *)((longlong)TVar6.field0_0x0 + 0x30) != *(int *)((longlong)TVar6.field0_0x0 + 0x5c))
    {
      TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr>_>
                ((TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)((longlong)TVar6.field0_0x0 + 0x28),
                 local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                 (TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr> *)&local_e0);
    }
  }
  pcVar12 = strstr("&UWN_CommonSubsystem::HandleVolumeEnter","::");
  pcVar17 = &DAT_00000002;
  if (pcVar12 == (char *)0x0) {
LAB_1494af6ea:
    pcVar15 = &DAT_00000002;
LAB_1494af6ed:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    do {
      pcVar15 = pcVar12;
      pcVar12 = strstr(pcVar15 + 1,"::");
    } while (pcVar12 != (char *)0x0);
    if (pcVar15 == (char *)0x0) goto LAB_1494af6ea;
    pcVar15 = pcVar15 + 2;
    if (*pcVar15 == '0') goto LAB_1494af6ed;
  }
  ::FName::FName(&local_d8,pcVar15);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->OnEnter,
             (UObject *)this,local_d8);
  pcVar12 = strstr("&UWN_CommonSubsystem::HandleVolumeLeave","::");
  if (pcVar12 != (char *)0x0) {
    do {
      pcVar15 = pcVar12;
      pcVar12 = strstr(pcVar15 + 1,"::");
    } while (pcVar12 != (char *)0x0);
    if ((pcVar15 != (char *)0x0) && (pcVar17 = pcVar15 + 2, pcVar15[2] != '0')) goto LAB_1494af7b8;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_1494af7b8:
  ::FName::FName(&local_d0,pcVar17);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->OnLeave,
             (UObject *)this,local_d0);
  BroadCastOnVolumeListChange(this);
  if (param_1->bCanOverlapVolume == false) {
    local_b8 = &param_1->OverlapVolumeComps;
    iStack_88 = 0;
    iVar10 = *(int *)&(param_1->OverlapVolumeComps).Elements.field_0x28;
    TStack_b0.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->OverlapVolumeComps).Elements.field_0x10;
    uStack_84 = 1;
    local_70 = iStack_88;
    iStack_74 = 0;
    if (iVar10 != 0) {
      puVar16 = *(uint **)&(param_1->OverlapVolumeComps).Elements.field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)TStack_b0.Array;
      }
      uVar4 = *puVar16;
      local_70 = 0;
      iStack_88 = 0;
      while (uVar4 == 0) {
        lVar14 = (longlong)iStack_88;
        local_70 = local_70 + 0x20;
        iStack_88 = iStack_88 + 1;
        iStack_74 = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_1494af87a;
        uVar4 = puVar16[lVar14 + 1];
      }
      uStack_84 = -uVar4 & uVar4;
      uVar3 = (ulonglong)uStack_84 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iStack_74 = (int)lVar14 + -1 + local_70;
      if (iVar10 < iStack_74) {
        iStack_74 = iVar10;
      }
    }
LAB_1494af87a:
    uStack_78 = 0xffffffff;
    uStack_6c = local_44;
    TStack_b0._padding_ = CONCAT44(uStack_84,iStack_88);
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    TStack_b0._28_4_ = local_44;
    TStack_b0.BaseBitIndex = local_70;
    local_90 = local_b8;
    local_80 = (undefined1 *)TStack_b0.Array;
    TStack_b0.CurrentBitIndex = iStack_74;
    if (iStack_74 < iVar10) {
      do {
        TVar13 = FWeakObjectPtr::Pin((FWeakObjectPtr *)
                                     ((longlong)TStack_b0.CurrentBitIndex * 0x10 +
                                     *(longlong *)&local_b8->Elements));
                    /* WARNING: Load size is inaccurate */
        pUVar7 = *TVar13.Object;
        *(undefined8 *)TVar13.Object = 0;
        if (local_f8 != (UObject *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject(local_f8);
          local_f8 = (UObject *)0x0;
        }
        if (pUVar7 != (UObject *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
          pcVar8 = *(code **)(*(longlong *)pUVar7 + 0xac8);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_c8 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_c8);
          (*pcVar8)(pUVar7,local_res20);
          pcVar8 = *(code **)(param_1->_padding_ + 0xac8);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          local_100.ObjectIndex = 0;
          local_100.ObjectSerialNumber = 0;
          local_c0 = pUVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_c0);
          (*pcVar8)(param_1,local_100);
        }
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
    }
  }
  return;
}

// UpdateAllVolumes @ 1494b03a0

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
UWN_CommonSubsystem::UpdateAllVolumes
          (UWN_CommonSubsystem *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  UObject *pUVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObject *pUVar5;
  longlong *plVar6;
  code *pcVar7;
  UObject *pUVar8;
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *pTVar9;
  bool bVar10;
  UWorld *pUVar11;
  UWorld *pUVar12;
  UWN_VolumeComponent *this_00;
  longlong lVar13;
  int iVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  uint *puVar22;
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *pTVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176;
  undefined1 local_175;
  uint local_174;
  TArray<FWN_VolumeStateChange,TSizedDefaultAllocator<32>_> local_170;
  FWeakObjectPtr local_160;
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *local_158;
  int iStack_150;
  uint uStack_14c;
  undefined1 *local_148;
  undefined4 uStack_140;
  int iStack_13c;
  int local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *local_110;
  UObject *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  UObject *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TMap<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  TVector<double>_u_0 local_78 [2];
  undefined4 local_44;
  
  pUVar11 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (pUVar11 == (UWorld *)0x0) {
    return;
  }
  bVar10 = FWeakObjectPtr::IsValid(&(this->CachedWorld).WeakPtr);
  if ((!bVar10) ||
     (pUVar12 = (UWorld *)FWeakObjectPtr::Get(&(this->CachedWorld).WeakPtr), pUVar12 != pUVar11)) {
    FindAndBindVolumes(this);
  }
  pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->AllVolumesPerType).field_0x10;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  pTVar23 = &this->AllVolumesPerType;
  iVar3 = *(int *)&(this->AllVolumesPerType).field_0x28;
  iStack_150 = 0;
  local_138 = 0;
  uStack_14c = 1;
  iStack_13c = 0;
  if (iVar3 != 0) {
    puVar22 = *(uint **)&(this->AllVolumesPerType).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)pTVar24;
    }
    uVar17 = *puVar22;
    while (uVar17 == 0) {
      lVar13 = (longlong)iStack_150;
      local_138 = local_138 + 0x20;
      iStack_150 = iStack_150 + 1;
      iStack_13c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_150) goto LAB_1494b04cf;
      uVar17 = puVar22[lVar13 + 1];
    }
    uStack_14c = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_14c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_128 = (int)lVar13;
    iStack_13c = local_138 + -1 + local_128;
    if (iVar3 < iStack_13c) {
      iStack_13c = iVar3;
    }
  }
LAB_1494b04cf:
  uVar17 = *(uint *)&(this->AllVolumesPerType).field_0x28;
  uStack_134 = local_44;
  iStack_130 = *(int *)&(this->AllVolumesPerType).field_0x8 -
               *(int *)&(this->AllVolumesPerType).field_0x34;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uStack_14c,iStack_150);
  uStack_140 = 0xffffffff;
  TStack_a0.CurrentBitIndex = iStack_13c;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_a0._28_4_ = local_44;
  TStack_a0.BaseBitIndex = local_138;
  uStack_80 = CONCAT44(uStack_12c,iStack_130);
  local_174 = uVar17;
  local_158 = pTVar23;
  local_148 = (undefined1 *)pTVar24;
  local_118 = pTVar24;
  local_110 = pTVar23;
  local_a8 = pTVar23;
  TStack_a0.Array = pTVar24;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(this->AllVolumesPerType).field_0x28;
  if (uVar17 != uVar4) {
    puVar20 = *(undefined1 **)&(this->AllVolumesPerType).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = (undefined1 *)pTVar24;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar4;
      local_174 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1494b0600;
      uVar17 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_124 = (int)lVar13;
    uVar17 = local_124 + -1 + uVar16;
    local_174 = uVar17;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
      local_174 = uVar4;
    }
  }
LAB_1494b0600:
  do {
    pTVar9 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      local_178 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_178);
    }
    if (((TStack_a0.CurrentBitIndex == uVar17) && (TStack_a0.Array == pTVar24)) &&
       (pTVar9 == pTVar23)) {
      iVar3 = local_170.ArrayNum;
      pFVar18 = local_170.AllocatorInstance.Data + (longlong)local_170.ArrayNum * 0x30;
      FVar15.Data = local_170.AllocatorInstance.Data;
      while( true ) {
        if (local_170.ArrayNum != iVar3) {
          `TCheckedPointerIterator<FWN_VolumeStateChange,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_176);
        }
        if (FVar15.Data == pFVar18) break;
        if (FVar15.Data[0x28] == (FScriptContainerElement)0x0) {
          (**(code **)(**(longlong **)FVar15.Data + 0xaa0))
                    (*(longlong **)FVar15.Data,FVar15.Data[8]);
        }
        FVar15.Data = FVar15.Data + 0x30;
      }
      iVar3 = local_170.ArrayNum;
      pFVar18 = local_170.AllocatorInstance.Data + 0x10;
      pFVar19 = local_170.AllocatorInstance.Data + (longlong)local_170.ArrayNum * 0x30;
      while( true ) {
        if (local_170.ArrayNum != iVar3) {
          `TCheckedPointerIterator<FWN_VolumeStateChange,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_175);
        }
        if (pFVar18 + -0x10 == pFVar19) break;
        if (pFVar18[0x18] != (FScriptContainerElement)0x0) {
          plVar6 = *(longlong **)(pFVar18 + -0x10);
          (**(code **)(*plVar6 + 0xa98))(plVar6,pFVar18[-8],pFVar18);
        }
        pFVar18 = pFVar18 + 0x30;
      }
      if (local_170.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_170.AllocatorInstance.Data);
      return;
    }
    pUVar5 = *(UObject **)(*(longlong *)pTVar9 + 8 + (longlong)TStack_a0.CurrentBitIndex * 0x18);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar5 != (UObject *)0x0) goto LAB_1494b0667;
    }
    else if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
LAB_1494b0667:
      iVar3 = *(int *)(pUVar5 + 2);
      puVar20 = &pUVar5[1].field_0x10;
      iStack_100 = 0;
      pUVar1 = pUVar5 + 1;
      local_e8 = 0;
      uStack_fc = 1;
      iStack_ec = 0;
      if (iVar3 != 0) {
        puVar22 = (uint *)puVar20;
        if (*(uint **)&pUVar5[1].field_0x20 != (uint *)0x0) {
          puVar22 = *(uint **)&pUVar5[1].field_0x20;
        }
        uVar17 = *puVar22;
        while (uVar17 == 0) {
          lVar13 = (longlong)iStack_100;
          local_e8 = local_e8 + 0x20;
          iStack_100 = iStack_100 + 1;
          iStack_ec = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100)
          goto LAB_1494b06ef;
          uVar17 = puVar22[lVar13 + 1];
        }
        uStack_fc = -uVar17 & uVar17;
        uVar2 = (ulonglong)uStack_fc * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_120 = (int)lVar13;
        iStack_ec = local_e8 + -1 + local_120;
        if (iVar3 < iStack_ec) {
          iStack_ec = iVar3;
        }
      }
LAB_1494b06ef:
      uVar16 = *(uint *)(pUVar5 + 2);
      iStack_e4 = iStack_13c;
      uVar17 = uVar16 & 0xffffffe0;
      iStack_e0 = *(int *)&pUVar5[1].field_0x8 - *(int *)&pUVar5[2].field_0xc;
      TStack_d0._padding_ = CONCAT44(uStack_fc,iStack_100);
      uStack_f0 = 0xffffffff;
      TStack_d0.CurrentBitIndex = iStack_ec;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar16 >> 5;
      TStack_d0._28_4_ = iStack_13c;
      TStack_d0.BaseBitIndex = local_e8;
      uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
      local_108 = pUVar1;
      local_f8 = puVar20;
      local_d8 = pUVar1;
      TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar20;
      if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar4 = *(uint *)(pUVar5 + 2);
      if (uVar16 != uVar4) {
        puVar21 = puVar20;
        if (*(undefined1 **)&pUVar5[1].field_0x20 != (undefined1 *)0x0) {
          puVar21 = *(undefined1 **)&pUVar5[1].field_0x20;
        }
        uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar14 * 4);
        while (uVar16 == 0) {
          lVar13 = (longlong)iVar14;
          uVar17 = uVar17 + 0x20;
          iVar14 = iVar14 + 1;
          uVar16 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_1494b07f0;
          uVar16 = *(uint *)(puVar21 + lVar13 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_11c = (int)lVar13;
        uVar16 = local_11c + -1 + uVar17;
        if ((int)uVar4 < (int)uVar16) {
          uVar16 = uVar4;
        }
      }
LAB_1494b07f0:
      while( true ) {
        pUVar8 = local_d8;
        if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8[1].field_0xc != (int)uStack_b0) {
          local_177 = 0;
          `TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_177);
        }
        if (((TStack_d0.CurrentBitIndex == uVar16) &&
            (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar20)) &&
           (pTVar23 = local_110, pTVar24 = local_118, uVar17 = local_174, pUVar8 == pUVar1)) break;
        local_160 = *(FWeakObjectPtr *)
                     (*(longlong *)pUVar8 + (longlong)TStack_d0.CurrentBitIndex * 0x10);
        bVar10 = FWeakObjectPtr::IsValid(&local_160);
        if (bVar10) {
          local_78[0]._0_8_ = *(undefined8 *)(pUVar5 + 3);
          local_78[0]._8_8_ = *(undefined8 *)&pUVar5[3].field_0x8;
          local_78[0]._16_8_ = *(undefined8 *)&pUVar5[3].field_0x10;
          this_00 = (UWN_VolumeComponent *)FWeakObjectPtr::Get(&local_160);
          UWN_VolumeComponent::CheckModeStateChange(this_00,Player,param_1,&local_170);
          UWN_VolumeComponent::CheckModeStateChange(this_00,PlayerCamera,param_2,&local_170);
          UWN_VolumeComponent::CheckModeStateChange(this_00,View,param_3,&local_170);
          UWN_VolumeComponent::CheckModeStateChange
                    (this_00,Custom,(TVector<double> *)&local_78[0]._s_0,&local_170);
        }
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      }
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  } while( true );
}

// execHandleVolumeEnter @ 1494b4040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UWN_CommonSubsystem::execHandleVolumeEnter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWN_VolumeContext *pUVar2;
  FWeakObjectPtr FVar3;
  undefined4 uVar4;
  int iVar5;
  TObjectPtr<UWN_VolumeContext>_u_0 *pTVar6;
  TObjectPtr<UWN_VolumeContext>_u_0 TVar7;
  uint uVar8;
  ForAnyElementType _Dst;
  undefined1 *_Dst_00;
  ForElementType<FSetElementId> _Src;
  undefined1 *_Src_00;
  longlong lVar9;
  uchar *puVar10;
  undefined1 auStackY_168 [32];
  EWN_VolumeObserverMode local_138 [8];
  EWN_VolumeObserverMode local_130 [8];
  FWeakObjectPtr local_128;
  FWeakObjectPtr local_120;
  FWeakObjectPtr local_118;
  uchar local_110 [24];
  undefined1 local_f8 [32];
  undefined1 *local_d8;
  int local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [8];
  ForElementType<FSetElementId> local_b8;
  uint local_b0;
  EWN_VolumeObserverMode local_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined1 *local_68;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_118.ObjectIndex = 0;
  local_118.ObjectSerialNumber = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_138[0] = Player;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_138);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_110);
  }
  FVar3 = local_118;
  puVar10 = local_110;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_130[0] = local_138[0];
  if (local_118 != (FWeakObjectPtr)0x0) {
    pTVar6 = &TMapBase<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>_>
              ::FindOrAddImpl<enum_EWN_VolumeObserverMode_const_&>
                        (&param_1[5].field_0x20,(uint)local_138[0],local_130)->field0_0x0;
    TVar7.DebugPtr = pTVar6->DebugPtr;
    if (TVar7 == (UWN_VolumeContext *)0x0) {
      TVar7.DebugPtr = NewObject<UWN_VolumeContext>(param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar7.DebugPtr != (UWN_VolumeContext *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
      }
      pTVar6->DebugPtr = (UWN_VolumeContext *)TVar7;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)FVar3);
    }
    local_128.ObjectIndex = 0;
    local_128.ObjectSerialNumber = 0;
    local_120 = FVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)FVar3);
    }
    FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_120);
    local_120 = local_128;
    iVar5 = TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr>_>
                      (&(TVar7.DebugPtr)->Volumes,
                       local_128.ObjectSerialNumber ^ local_128.ObjectIndex,
                       (TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr> *)&local_120);
    if (iVar5 == -1) {
      pUVar2 = pTVar6->DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      local_120.ObjectIndex = 0;
      local_120.ObjectSerialNumber = 0;
      local_128 = FVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      FWeakObjectPtr::operator=(&local_120,(FObjectPtr)&local_128);
      TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Emplace<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>
                (&pUVar2->Volumes,(TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr> *)&local_128,
                 (bool *)&local_120);
      local_f8._0_8_ = (FScriptContainerElement *)0x0;
      local_f8._8_8_ = 0;
      local_d8 = (undefined1 *)0x0;
      local_d0 = 0;
      local_cc = 0x80;
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_b8 = (ForElementType<FSetElementId>)0x0;
      local_b0 = 0;
      TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                   *)local_f8,&pTVar6->DebugPtr->Volumes);
      uVar8 = local_b0;
      local_a0 = *(undefined8 *)puVar10;
      uStack_98 = *(undefined8 *)(puVar10 + 8);
      lVar9 = (longlong)(int)local_b0;
      local_90 = *(undefined8 *)(puVar10 + 0x10);
      local_88._0_8_ = (FScriptContainerElement *)0x0;
      local_88._8_8_ = 0;
      local_68 = (undefined1 *)0x0;
      local_60 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      local_a8[0] = local_130[0];
      if (1 < local_b0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,local_b0,4)
        ;
      }
      _Src = (ForElementType<FSetElementId>)local_c0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        _Src = local_b8;
      }
      _Dst.Data = local_50;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        _Dst.Data = local_48.Data;
      }
      if (uVar8 != 0) {
        memcpy(_Dst.Data,(void *)_Src,lVar9 << 2);
      }
      local_40 = uVar8;
      uVar4 = local_f8._8_4_;
      lVar9 = (longlong)(int)local_f8._8_4_;
      TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_88,local_f8._8_4_);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar4,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                 (int *)(local_88 + 0xc));
      local_58 = local_c8;
      local_54 = local_c4;
      local_60 = 0;
      uVar8 = local_d0 + 0x1fU & 0xffffffe0;
      if (((int)local_5c < (int)uVar8) || (0x80 < (int)local_5c)) {
        local_5c = 0x80;
        if (0x80 < (int)uVar8) {
          local_5c = uVar8;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      local_60 = local_d0;
      if (local_d0 != 0) {
        _Src_00 = local_f8 + 0x10;
        if (local_d8 != (undefined1 *)0x0) {
          _Src_00 = local_d8;
        }
        _Dst_00 = local_88 + 0x10;
        if (local_68 != (undefined1 *)0x0) {
          _Dst_00 = local_68;
        }
        memcpy(_Dst_00,_Src_00,(ulonglong)(local_d0 + 0x1fU >> 5) << 2);
      }
      if (uVar4 != 0) {
        memcpy((void *)local_88._0_8_,(void *)local_f8._0_8_,lVar9 << 4);
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[1].field_0x20,
                 local_a8);
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      iVar5 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_58 = 0xffffffff;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (undefined1 *)0x0) {
        FMemory::Free(local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      local_b0 = 0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8);
      }
      iVar5 = SUB84(local_f8._8_8_,4);
      local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
      if (iVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
      }
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_d0 = 0;
      if (0x80 < local_cc) {
        local_cc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
      }
      if (local_d8 != (undefined1 *)0x0) {
        FMemory::Free(local_d8);
      }
      if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_f8._0_8_);
      }
    }
  }
  return;
}

// execHandleVolumeLeave @ 1494b4570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UWN_CommonSubsystem::execHandleVolumeLeave(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UWN_VolumeContext> TVar2;
  EWN_VolumeObserverMode EVar3;
  FWeakObjectPtr FVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  TObjectPtr<UWN_VolumeContext>_u_0 *pTVar8;
  ForAnyElementType _Dst;
  uint uVar9;
  undefined1 *_Dst_00;
  ForElementType<FSetElementId> _Src;
  undefined1 *_Src_00;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *this;
  longlong lVar10;
  undefined1 auStackY_138 [32];
  EWN_VolumeObserverMode local_108 [8];
  FWeakObjectPtr local_100;
  FWeakObjectPtr local_f8;
  FWeakObjectPtr local_f0;
  EWN_VolumeObserverMode local_e8 [8];
  undefined1 local_e0 [32];
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FScriptContainerElement local_a8 [8];
  ForAnyElementType local_a0;
  uint local_98;
  undefined1 local_88 [32];
  undefined1 *local_68;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f0.ObjectIndex = 0;
  local_f0.ObjectSerialNumber = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_108[0] = Player;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  FVar4 = local_f0;
  EVar3 = local_108[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_f0 != (FWeakObjectPtr)0x0) {
    pTVar8 = &TMapBase<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>_>
              ::Find(&param_1[5].field_0x20,local_108[0])->field0_0x0;
    TVar2.field0_0x0 = (TObjectPtr<UWN_VolumeContext>_u_0)pTVar8->DebugPtr;
    if (TVar2.field0_0x0 != (UWN_VolumeContext *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      this = (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)((longlong)TVar2.field0_0x0 + 0x28);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
      local_100.ObjectIndex = 0;
      local_100.ObjectSerialNumber = 0;
      local_f8 = FVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
      FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_f8);
      local_f8 = local_100;
      iVar6 = TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr>_>
                        (this,local_100.ObjectSerialNumber ^ local_100.ObjectIndex,
                         (TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr> *)&local_f8);
      if (iVar6 != -1) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar4);
        }
        local_100.ObjectIndex = 0;
        local_100.ObjectSerialNumber = 0;
        local_f8 = FVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar4);
        }
        FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_f8);
        local_f8 = local_100;
        if (*(int *)((longlong)TVar2.field0_0x0 + 0x30) !=
            *(int *)((longlong)TVar2.field0_0x0 + 0x5c)) {
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr>_>
                    (this,local_100.ObjectSerialNumber ^ local_100.ObjectIndex,
                     (TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr> *)&local_f8);
        }
        local_88._0_8_ = (FScriptContainerElement *)0x0;
        local_88._8_8_ = 0;
        local_68 = (undefined1 *)0x0;
        local_60 = 0;
        local_5c = 0x80;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_48 = (ForElementType<FSetElementId>)0x0;
        local_40 = 0;
        TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::operator=((TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                     *)local_88,this);
        uVar7 = local_40;
        lVar10 = (longlong)(int)local_40;
        local_b8 = ___xmm_00000000ffffffff0000008000000000;
        uStack_b0 = _UNK_150631d98;
        local_a0.Data = (FScriptContainerElement *)0x0;
        local_e0._0_8_ = (FScriptContainerElement *)0x0;
        local_e0._8_8_ = 0;
        local_c0 = (undefined1 *)0x0;
        local_98 = 0;
        local_e8[0] = EVar3;
        if (1 < local_40) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_a0,0,local_40,4);
        }
        _Src = (ForElementType<FSetElementId>)local_50;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          _Src = local_48;
        }
        _Dst.Data = local_a8;
        if (local_a0.Data != (FScriptContainerElement *)0x0) {
          _Dst.Data = local_a0.Data;
        }
        if (uVar7 != 0) {
          memcpy(_Dst.Data,(void *)_Src,lVar10 << 2);
        }
        local_98 = uVar7;
        uVar5 = local_88._8_4_;
        lVar10 = (longlong)(int)local_88._8_4_;
        TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_e0,local_88._8_4_);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,uVar5,(ForAnyElementType *)local_e0,(int *)(local_e0 + 8),
                   (int *)(local_e0 + 0xc));
        uVar7 = local_b8._4_4_;
        uStack_b0._4_4_ = local_54;
        uStack_b0._0_4_ = local_58;
        local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
        uVar9 = local_60 + 0x1fU & 0xffffffe0;
        if (((int)uVar7 < (int)uVar9) || (0x80 < (int)uVar7)) {
          uVar7 = 0x80;
          if (0x80 < (int)uVar9) {
            uVar7 = uVar9;
          }
          local_b8 = (ulonglong)uVar7 << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_e0 + 0x10),0);
        }
        local_b8._0_4_ = local_60;
        if (local_60 != 0) {
          _Src_00 = local_88 + 0x10;
          if (local_68 != (undefined1 *)0x0) {
            _Src_00 = local_68;
          }
          _Dst_00 = local_e0 + 0x10;
          if (local_c0 != (undefined1 *)0x0) {
            _Dst_00 = local_c0;
          }
          memcpy(_Dst_00,_Src_00,(ulonglong)(local_60 + 0x1fU >> 5) << 2);
        }
        if (uVar5 != 0) {
          memcpy((void *)local_e0._0_8_,(void *)local_88._0_8_,lVar10 << 4);
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[2].field_0x10,
                   local_e8);
        local_98 = 0;
        if (local_a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data);
        }
        iVar6 = SUB84(local_e0._8_8_,4);
        local_e0._8_8_ = local_e0._8_8_ & 0xffffffff00000000;
        if (iVar6 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)local_e0,0,(int *)(local_e0 + 0xc));
        }
        uVar7 = local_b8._4_4_;
        uStack_b0 = 0xffffffff;
        local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
        if (0x80 < uVar7) {
          local_b8 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_e0 + 0x10),0);
        }
        if (local_c0 != (undefined1 *)0x0) {
          FMemory::Free(local_c0);
        }
        if ((FScriptContainerElement *)local_e0._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_e0._0_8_);
        }
        local_40 = 0;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_48);
        }
        iVar6 = SUB84(local_88._8_8_,4);
        local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
        if (iVar6 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
        }
        local_58 = 0xffffffff;
        local_54 = 0;
        local_60 = 0;
        if (0x80 < local_5c) {
          local_5c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
        }
        if (local_68 != (undefined1 *)0x0) {
          FMemory::Free(local_68);
        }
        if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_88._0_8_);
        }
      }
    }
  }
  return;
}

