// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b51bb30

UClass * __cdecl UDS_M_SummonBoss::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_SummonBoss.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_SummonBoss",
               &Z_Registration_Info_UClass_UDS_M_SummonBoss.InnerSingleton,
               StaticRegisterNativesUDS_M_SummonBoss,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_SummonBoss>,
               InternalVTableHelperCtorCaller<UDS_M_SummonBoss>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_SummonBoss.InnerSingleton;
}

// UDS_M_SummonBoss @ 14b5223d0

UDS_M_SummonBoss * __thiscall
UDS_M_SummonBoss::UDS_M_SummonBoss(UDS_M_SummonBoss *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_SummonBoss__6B_;
  this->SelectedSummonBossID = 0;
  (this->BossSlotModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BossSlotModelList).ArrayNum = 0;
  (this->BossSlotModelList).ArrayMax = 0;
  (this->ReleasedBossSlotModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReleasedBossSlotModelList).ArrayNum = 0;
  (this->ReleasedBossSlotModelList).ArrayMax = 0;
  (this->ItemModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->ItemModel).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_M_SummonBoss @ 14b522440

UDS_M_SummonBoss * __thiscall
UDS_M_SummonBoss::UDS_M_SummonBoss(UDS_M_SummonBoss *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_SummonBoss__6B_;
  this->SelectedSummonBossID = 0;
  (this->BossSlotModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BossSlotModelList).ArrayNum = 0;
  (this->BossSlotModelList).ArrayMax = 0;
  (this->ReleasedBossSlotModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReleasedBossSlotModelList).ArrayNum = 0;
  (this->ReleasedBossSlotModelList).ArrayMax = 0;
  (this->ItemModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->ItemModel).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_M_SummonBoss @ 14b523620

void __thiscall UDS_M_SummonBoss::~UDS_M_SummonBoss(UDS_M_SummonBoss *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_M_SummonBoss__6B_;
  pFVar1 = (this->ReleasedBossSlotModelList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BossSlotModelList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5265e0

UClass * __cdecl UDS_M_SummonBoss::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_SummonBoss.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_SummonBoss",
               &Z_Registration_Info_UClass_UDS_M_SummonBoss.InnerSingleton,
               StaticRegisterNativesUDS_M_SummonBoss,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_SummonBoss>,
               InternalVTableHelperCtorCaller<UDS_M_SummonBoss>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_SummonBoss.InnerSingleton;
}

// StaticRegisterNativesUDS_M_SummonBoss @ 14b527590

void __cdecl UDS_M_SummonBoss::StaticRegisterNativesUDS_M_SummonBoss(void)

{
  return;
}

// GetSummonBossList @ 14bd63470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FDS_EntryBindingEventField * __thiscall
UDS_M_SummonBoss::GetSummonBossList
          (UDS_M_SummonBoss *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  FWeakObjectPtr FVar4;
  FWeakObjectPtr *pFVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  FDS_EntryBindingEventField *pFVar13;
  UClass *pUVar14;
  UDS_ModelBase *pUVar15;
  UObject *pUVar16;
  FName FVar17;
  FString *pFVar18;
  FDS_NpcBaseTableRow *this_00;
  UDS_UserObjectListItem *this_01;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong *plVar21;
  wchar_t *pwVar22;
  ForAnyElementType _Src;
  undefined1 auStackY_218 [32];
  FWeakObjectPtr local_1c8;
  undefined1 local_1c0 [4];
  uint local_1bc;
  FDS_SummonBossTableRow *local_1b8;
  TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FScriptContainerElement *local_150;
  FDS_EntryBindingEventField *local_148;
  TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> local_140;
  undefined8 local_130;
  UDS_ModelBase *local_128;
  UDS_UserObjectListItem *local_120;
  FScriptContainerElement *local_118;
  TSharedPtr<FDS_ViewModelContext,1> local_110;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  TReferenceControllerBase<1> *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  local_148 = __return_storage_ptr__;
  GetSummonBossTables(this,&local_1b0);
  _Src.Data = local_1b0.AllocatorInstance.Data;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150 = local_1b0.AllocatorInstance.Data;
  if (local_1b0.ArrayNum == 0) {
    local_140.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_1b0.ArrayNum,0,&local_140.AllocatorInstance,local_1b0.ArrayNum,
               &local_140.ArrayMax);
    memcpy(local_140.AllocatorInstance.Data,_Src.Data,(longlong)local_1b0.ArrayNum << 3);
  }
  ValidCheckAndUpdate(this,&local_140);
  pTVar2 = &this->ReleasedBossSlotModelList;
  pTVar3 = &this->BossSlotModelList;
  if ((pTVar2 == pTVar3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar13 = (FDS_EntryBindingEventField *)(*pcVar8)();
    return pFVar13;
  }
  iVar11 = (this->BossSlotModelList).ArrayNum;
  if (iVar11 != 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,iVar11,&pTVar2->AllocatorInstance,
                        &(this->ReleasedBossSlotModelList).ArrayNum,
                        &(this->ReleasedBossSlotModelList).ArrayMax);
    memmove((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8,(pTVar3->AllocatorInstance).Data
            ,(longlong)iVar11 << 3);
    (this->BossSlotModelList).ArrayNum = 0;
  }
  uVar20 = (ulonglong)local_1b0.ArrayNum;
  local_118 = _Src.Data + uVar20 * 8;
  local_1bc = local_1b0.ArrayNum;
  do {
    pFVar7 = local_118;
    if (local_1b0.ArrayNum != (uint)uVar20) {
      local_1c0[0] = 0;
      `TCheckedPointerIterator<FDS_SummonBossTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_1c0);
    }
    if (_Src.Data == pFVar7) {
LAB_14bd63c47:
      if (local_1b0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_1b0.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    local_1b8 = *(FDS_SummonBossTableRow **)_Src.Data;
    local_1c8.ObjectIndex = 0;
    local_1c8.ObjectSerialNumber = 0;
    local_130 = 0;
    FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_130);
    iVar11 = (this->ReleasedBossSlotModelList).ArrayNum;
    if (iVar11 == 0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar14 = Z_Construct_UClass_UDS_ModelBase_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar14);
      local_c8._8_8_ = this;
      pUVar15 = (UDS_ModelBase *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar21 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar21 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar15);
      local_128 = pUVar15;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UDS_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_128);
    }
    else {
      if ((iVar11 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FDS_EntryBindingEventField *)(*pcVar8)();
        return pFVar13;
      }
      iVar11 = (this->ReleasedBossSlotModelList).ArrayNum;
      iVar10 = iVar11 + -1;
      FVar4 = *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8 + -8);
      (this->ReleasedBossSlotModelList).ArrayNum = iVar10;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&pTVar2->AllocatorInstance,iVar10,&(this->ReleasedBossSlotModelList).ArrayMax);
      local_1c8 = FVar4;
    }
    bVar9 = TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *)&local_1c8,(void *)0x0);
    if (bVar9) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7848083698623709116>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_SummonBoss.cpp"
                         ,0x44,"false");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FDS_EntryBindingEventField *)(*pcVar8)();
        return pFVar13;
      }
      goto LAB_14bd63c47;
    }
    pFVar5 = (FWeakObjectPtr *)(pTVar3->AllocatorInstance).Data;
    if (((pFVar5 <= &local_1c8) && (&local_1c8 < pFVar5 + (this->BossSlotModelList).ArrayMax)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FDS_EntryBindingEventField *)(*pcVar8)();
      return pFVar13;
    }
    iVar11 = (this->BossSlotModelList).ArrayNum;
    piVar1 = &(this->BossSlotModelList).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->BossSlotModelList).ArrayNum = iVar11 + 1;
    *(FWeakObjectPtr *)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_1c8;
    pUVar16 = FWeakObjectPtr::Get(&local_1c8);
    ::FString::PrintfImpl(&local_1a0,L"%d");
    FVar17 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>
                       ((FDS_DataContainer *)&pUVar16[1].field_0x18,
                        (EDS_SummonBossListSlotData)local_100);
    uVar6 = *(undefined8 *)FVar17;
    uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
    pFVar18 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar16[1].field_0x18,uVar12 + (int)((ulonglong)uVar6 >> 0x20),
                         (FName *)FVar17);
    if (pFVar18 != &local_1a0) {
      pFVar7 = (pFVar18->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pFVar18->Data).AllocatorInstance.Data = local_1a0.Data.AllocatorInstance.Data;
      local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar18->Data).ArrayNum = local_1a0.Data.ArrayNum;
      (pFVar18->Data).ArrayMax = local_1a0.Data.ArrayMax;
      local_1a0.Data.ArrayNum = 0;
      local_1a0.Data.ArrayMax = 0;
    }
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    pUVar16 = FWeakObjectPtr::Get(&local_1c8);
    ::FString::PrintfImpl(&local_190,L"%d");
    FVar17 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>
                       ((FDS_DataContainer *)&pUVar16[1].field_0x18,
                        (EDS_SummonBossListSlotData)local_f8);
    uVar6 = *(undefined8 *)FVar17;
    uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
    pFVar18 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar16[1].field_0x18,uVar12 + (int)((ulonglong)uVar6 >> 0x20),
                         (FName *)FVar17);
    if (pFVar18 != &local_190) {
      pFVar7 = (pFVar18->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pFVar18->Data).AllocatorInstance.Data = local_190.Data.AllocatorInstance.Data;
      local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar18->Data).ArrayNum = local_190.Data.ArrayNum;
      (pFVar18->Data).ArrayMax = local_190.Data.ArrayMax;
      local_190.Data.ArrayNum = 0;
      local_190.Data.ArrayMax = 0;
    }
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    pUVar16 = FWeakObjectPtr::Get(&local_1c8);
    this_00 = FDS_SummonBossTableRow::ID_SummonBossTable(local_1b8);
    FDS_NpcBaseTableRow::ID_NpcBattleTable(this_00);
    ::FString::PrintfImpl(&local_180,L"%d");
    FVar17 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>
                       ((FDS_DataContainer *)&pUVar16[1].field_0x18,
                        (EDS_SummonBossListSlotData)local_f0);
    uVar6 = *(undefined8 *)FVar17;
    uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
    pFVar18 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar16[1].field_0x18,uVar12 + (int)((ulonglong)uVar6 >> 0x20),
                         (FName *)FVar17);
    if (pFVar18 != &local_180) {
      pFVar7 = (pFVar18->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pFVar18->Data).AllocatorInstance.Data = local_180.Data.AllocatorInstance.Data;
      local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar18->Data).ArrayNum = local_180.Data.ArrayNum;
      (pFVar18->Data).ArrayMax = local_180.Data.ArrayMax;
      local_180.Data.ArrayNum = 0;
      local_180.Data.ArrayMax = 0;
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    pUVar16 = FWeakObjectPtr::Get(&local_1c8);
    DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,local_1b8->ID_SummonItem);
    ::FString::PrintfImpl(&local_170,L"%d");
    FVar17 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>
                       ((FDS_DataContainer *)&pUVar16[1].field_0x18,
                        (EDS_SummonBossListSlotData)local_e8);
    uVar6 = *(undefined8 *)FVar17;
    uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
    pFVar18 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar16[1].field_0x18,uVar12 + (int)((ulonglong)uVar6 >> 0x20),
                         (FName *)FVar17);
    if (pFVar18 != &local_170) {
      pFVar7 = (pFVar18->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pFVar18->Data).AllocatorInstance.Data = local_170.Data.AllocatorInstance.Data;
      local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar18->Data).ArrayNum = local_170.Data.ArrayNum;
      (pFVar18->Data).ArrayMax = local_170.Data.ArrayMax;
      local_170.Data.ArrayNum = 0;
      local_170.Data.ArrayMax = 0;
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    pUVar16 = FWeakObjectPtr::Get(&local_1c8);
    pwVar22 = L"true";
    if ((longlong)local_1b8->ID != this->SelectedSummonBossID) {
      pwVar22 = L"false";
    }
    ::FString::FString(&local_160,pwVar22);
    FVar17 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>
                       ((FDS_DataContainer *)&pUVar16[1].field_0x18,
                        (EDS_SummonBossListSlotData)local_e0);
    uVar6 = *(undefined8 *)FVar17;
    uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
    pFVar18 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar16[1].field_0x18,uVar12 + (int)((ulonglong)uVar6 >> 0x20),
                         (FName *)FVar17);
    if (pFVar18 != &local_160) {
      pFVar7 = (pFVar18->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pFVar18->Data).AllocatorInstance.Data = local_160.Data.AllocatorInstance.Data;
      local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar18->Data).ArrayNum = local_160.Data.ArrayNum;
      (pFVar18->Data).ArrayMax = local_160.Data.ArrayMax;
      local_160.Data.ArrayNum = 0;
      local_160.Data.ArrayMax = 0;
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    pUVar15 = (UDS_ModelBase *)FWeakObjectPtr::Get(&local_1c8);
    UDS_ModelBase::SetViewModelTemplateKey(pUVar15,SummonBossListSlot);
    this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bd63bd8;
    }
    else {
      if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bd63bd8:
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7848083698623709105>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_SummonBoss.cpp"
                           ,0x4f,"false");
        if (!bVar9) {
          if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.AllocatorInstance.Data);
          }
          return local_148;
        }
        pcVar8 = (code *)swi(3);
        pFVar13 = (FDS_EntryBindingEventField *)(*pcVar8)();
        return pFVar13;
      }
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    pUVar16 = FWeakObjectPtr::Get(&local_1c8);
    puVar19 = (undefined8 *)(**(code **)(*(longlong *)pUVar16 + 0x310))(pUVar16,local_d8);
    local_110.Object = (FDS_ViewModelContext *)*puVar19;
    local_110.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar19[1];
    if (local_110.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(this_01,&local_110);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    local_120 = this_01;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    __return_storage_ptr__ = local_148;
    FDS_EntryBindingEventField::Add(local_148,(TObjectPtr<UDS_UserObjectListItem>)&local_120);
    uVar20 = (ulonglong)local_1bc;
    _Src.Data = local_150 + 8;
    local_150 = _Src.Data;
  } while( true );
}

// GetSummonBossTables @ 14bd63c90

TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UDS_M_SummonBoss::GetSummonBossTables
          (UDS_M_SummonBoss *this,
          TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  longlong *this_00;
  undefined8 uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  UDS_NPCDataSet *pUVar10;
  FDS_SummonAltarTableRow *pFVar11;
  TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar12;
  wchar_t *_Str;
  atomic<unsigned_char> *paVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  wchar_t *_Str_00;
  FIdentityFunctor local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> local_58;
  TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> local_48;
  
  pFVar18 = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  this_00 = &this->_padding_;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossData>
                    ((FDS_DataContainer *)this_00,(EDS_SummonBossData)local_res18);
  uVar1 = *(undefined8 *)FVar8;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this_00,uVar5 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  _Str_00 = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  _wcstoui64(_Str,(wchar_t **)0x0,0);
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res10);
  bVar4 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar4) {
    iVar7 = 0x8f;
    paVar13 = &bGEnsureHasExecuted<_7848083698623709041>;
  }
  else {
    pUVar10 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_res10);
    bVar4 = UDS_NPCDataSet::HasInteractionFunctionType(pUVar10,SummonBossAltar);
    if (bVar4) {
      FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossData>
                        ((FDS_DataContainer *)this_00,(EDS_SummonBossData)local_res20);
      uVar1 = *(undefined8 *)FVar8;
      uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
      pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
               ::FindOrAddImpl<FName>
                         ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                           *)this_00,uVar5 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
      if ((pFVar9->Data).ArrayNum != 0) {
        _Str_00 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      iVar6 = _wtoi(_Str_00);
      pUVar10 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_res10);
      iVar6 = UDS_NPCDataSet::GetInteractionFunctionValue(pUVar10,iVar6,SummonBossAltar);
      pFVar11 = FDS_SummonAltarTableRow::Get((longlong)iVar6,true);
      if (pFVar11 != (FDS_SummonAltarTableRow *)0x0) {
        pTVar12 = FDS_SummonBossTableRow::GetAll(&local_48);
        local_58.ArrayNum = 0;
        local_58.ArrayMax = 0;
        local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar16 = (pTVar12->AllocatorInstance).Data;
        pFVar15 = pFVar16 + (longlong)pTVar12->ArrayNum * 8;
        FVar14.Data = pFVar18;
        pFVar17 = pFVar18;
        FVar3.Data = local_58.AllocatorInstance.Data;
        do {
          local_58.AllocatorInstance.Data = FVar14.Data;
          if (pFVar16 == pFVar15) {
            pFVar15 = local_58.AllocatorInstance.Data;
            if (__return_storage_ptr__ != &local_58) {
              pFVar15 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (pFVar15 != (FScriptContainerElement *)0x0) {
                local_58.AllocatorInstance.Data = FVar3.Data;
                FMemory::Free(pFVar15);
                iVar7 = local_58.ArrayNum;
              }
              (__return_storage_ptr__->AllocatorInstance).Data = local_58.AllocatorInstance.Data;
              local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              __return_storage_ptr__->ArrayNum = iVar7;
              __return_storage_ptr__->ArrayMax = local_58.ArrayMax;
              local_58.ArrayNum = 0;
              local_58.ArrayMax = 0;
              pFVar15 = pFVar18;
              FVar3.Data = local_58.AllocatorInstance.Data;
            }
            local_58.AllocatorInstance.Data = FVar3.Data;
            if (pFVar15 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar15);
            }
            if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.AllocatorInstance.Data);
            }
            AlgoImpl::
            IntroSortInternal<FDS_SummonBossTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_SummonBossTableRow_const_*,_UDS_M_SummonBoss::GetSummonBossTables_::__l2::<lambda_2>_>_>
                      ((FDS_SummonBossTableRow **)(__return_storage_ptr__->AllocatorInstance).Data,
                       __return_storage_ptr__->ArrayNum,local_res8[0],(<lambda_2> *)local_res8);
            return __return_storage_ptr__;
          }
          FVar14.Data = local_58.AllocatorInstance.Data;
          if (*(int *)(*(longlong *)pFVar16 + 0x20) == pFVar11->ID_SummonBossGroup) {
            iVar7 = (int)pFVar17;
            if ((local_58.AllocatorInstance.Data <= pFVar16) &&
               (pFVar16 < local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 8)) {
              local_58.AllocatorInstance.Data = FVar3.Data;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                pTVar12 = (TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> *)
                          (*pcVar2)();
                return pTVar12;
              }
              FVar14.Data = local_58.AllocatorInstance.Data;
              iVar7 = local_58.ArrayNum;
              FVar3.Data = local_58.AllocatorInstance.Data;
            }
            local_58.AllocatorInstance.Data = FVar3.Data;
            if (iVar7 == local_58.ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_58.AllocatorInstance,&local_58.ArrayMax);
              FVar14.Data = local_58.AllocatorInstance.Data;
            }
            local_58.ArrayNum = iVar7 + 1U;
            *(longlong *)(FVar14.Data + (longlong)iVar7 * 8) = *(longlong *)pFVar16;
            pFVar17 = (FScriptContainerElement *)(ulonglong)(iVar7 + 1U);
            FVar14.Data = local_58.AllocatorInstance.Data;
            FVar3.Data = local_58.AllocatorInstance.Data;
          }
          local_58.AllocatorInstance.Data = FVar3.Data;
          iVar7 = (int)pFVar17;
          pFVar16 = pFVar16 + 8;
          FVar3.Data = local_58.AllocatorInstance.Data;
        } while( true );
      }
      iVar7 = 0x94;
      paVar13 = &bGEnsureHasExecuted<_7848083698623709036>;
    }
    else {
      iVar7 = 0x90;
      paVar13 = &bGEnsureHasExecuted<_7848083698623709040>;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar13,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_SummonBoss.cpp"
                     ,iVar7,"false");
  if (!bVar4) {
    return __return_storage_ptr__;
  }
  pcVar2 = (code *)swi(3);
  pTVar12 = (TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar12;
}

// GetViewModelContext @ 14bd64b70

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_SummonBoss::GetViewModelContext
          (UDS_M_SummonBoss *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)this,SummonBoss);
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsEnableSummonBoss @ 14bd6b7a0

bool __thiscall UDS_M_SummonBoss::IsEnableSummonBoss(UDS_M_SummonBoss *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FDS_SummonBossTableRow *pFVar5;
  
  pFVar5 = FDS_SummonBossTableRow::Get(this->SelectedSummonBossID,true);
  if (pFVar5 != (FDS_SummonBossTableRow *)0x0) {
    iVar4 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,pFVar5->ID_SummonItem);
    return pFVar5->SummonItemValue <= iVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7848083698623709091>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_SummonBoss.cpp"
                     ,0x5d,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// OnClickedSummonBoss @ 14bd76000

void __thiscall UDS_M_SummonBoss::OnClickedSummonBoss(UDS_M_SummonBoss *this)

{
  code *pcVar1;
  long64 lVar2;
  bool bVar3;
  int iVar4;
  FDS_SummonBossTableRow *pFVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  UDS_ContentManager *this_00;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  pFVar5 = FDS_SummonBossTableRow::Get(this->SelectedSummonBossID,true);
  if (pFVar5 == (FDS_SummonBossTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7848083698623709091>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_SummonBoss.cpp"
                       ,0x5d,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    iVar4 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,pFVar5->ID_SummonItem);
    if (pFVar5->SummonItemValue <= iVar4) {
      uVar6 = FDS_DataContainer::GetData<unsigned___int64,enum_EDS_SummonBossData>
                        ((FDS_DataContainer *)&this->_padding_,InteractionID);
      lVar2 = this->SelectedSummonBossID;
      uVar7 = FDS_DataContainer::GetData<unsigned___int64,enum_EDS_SummonBossData>
                        ((FDS_DataContainer *)&this->_padding_,AltarEntityID);
      FDS_GimmickService::RequestAltarBossSummon(uVar7,(int)lVar2,(int)uVar6);
      this_00 = UDS_ContentManager::GetInst();
      if (this_00 != (UDS_ContentManager *)0x0) {
        UDS_ContentManager::CloseContent(this_00);
        return;
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7848083698623709064>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_SummonBoss.cpp"
                         ,0x78,"false");
      if (!bVar3) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x57ea5,Alert_System_01,&local_28);
  return;
}

// OnClickedSummonBossListSlot @ 14bd76130

void __thiscall UDS_M_SummonBoss::OnClickedSummonBossListSlot(UDS_M_SummonBoss *this,long64 param_1)

{
  code *pcVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->SelectedSummonBossID = param_1;
  UpdateItemSlot(this);
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (*pcVar1)(this,local_res8,1);
  return;
}

// OnUpdateModel @ 14bd82c30

void __thiscall
UDS_M_SummonBoss::OnUpdateModel
          (UDS_M_SummonBoss *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  FName FVar6;
  FString *pFVar7;
  longlong lVar8;
  wchar_t *_Str;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  undefined1 local_28 [16];
  
  local_res10 = param_1.WeakPtr;
  UDS_ModelBase::OnUpdateModel((UDS_ModelBase *)this,param_1);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7848083698623709144>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_SummonBoss.cpp"
                       ,0x28,"false");
    if (!bVar3) {
      return;
    }
code_r0x00014bd82cca:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pUVar5 + 1));
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 1));
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>
                      ((FDS_DataContainer *)&pUVar5[1].field_0x18,
                       (EDS_SummonBossListSlotData)local_28);
    uVar1 = *(undefined8 *)FVar6;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&pUVar5[1].field_0x18,uVar4 + (int)((ulonglong)uVar1 >> 0x20),
                        (FName *)FVar6);
    if ((pFVar7->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    lVar8 = _wtoi64(_Str);
    this->SelectedSummonBossID = lVar8;
    UpdateItemSlot(this);
    pcVar2 = *(code **)(this->_padding_ + 0x2e0);
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    (*pcVar2)(this,local_res18,1);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7848083698623709143>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_SummonBoss.cpp"
                       ,0x29,"false");
    if (bVar3) goto code_r0x00014bd82cca;
  }
  return;
}

// PreInitBindViewModel @ 14bd852c0

void __thiscall UDS_M_SummonBoss::PreInitBindViewModel(UDS_M_SummonBoss *this)

{
  UDS_ModelBase *pUVar1;
  TObjectPtr<UDS_M_ItemImplBase> TVar2;
  TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 in_RDX;
  UDS_ModelBase *local_res8;
  undefined1 local_res10 [8];
  TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  TVar2 = DS_ItemDataUtil::CreateItemModel
                    ((EDS_ItemSlotStateType)local_res10,
                     (int)CONCAT71((int7)((ulonglong)in_RDX >> 8),0xd));
  pUVar1 = *(UDS_ModelBase **)TVar2.field0_0x0;
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar1);
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&(this->ItemModel).WeakPtr,(FObjectPtr)&local_res8);
  pTVar3 = GetSummonBossTables(this,&local_18);
  ValidCheckAndUpdate(this,pTVar3);
  UpdateItemSlot(this);
  return;
}

// UpdateItemSlot @ 14bd91af0

void __thiscall UDS_M_SummonBoss::UpdateItemSlot(UDS_M_SummonBoss *this)

{
  TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EDS_ItemSlotStateType EVar4;
  FDS_SummonBossTableRow *pFVar5;
  UObject *pUVar6;
  UDS_M_ItemImplBase *pUVar7;
  UDS_ModelBase *this_01;
  
  this_00 = &this->ItemModel;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7848083698623709083>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_SummonBoss.cpp"
                       ,0x65,"false");
    if (!bVar3) {
      return;
    }
code_r0x00014bd91b98:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = FDS_SummonBossTableRow::Get(this->SelectedSummonBossID,true);
  if (pFVar5 == (FDS_SummonBossTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7848083698623709080>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_SummonBoss.cpp"
                       ,0x68,"false");
    if (bVar3) goto code_r0x00014bd91b98;
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar1 = pFVar5->ID_SummonItem;
    pcVar2 = *(code **)(*(longlong *)pUVar6 + 0x340);
    pUVar7 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    EVar4 = UDS_M_ItemImplBase::GetItemSlotType(pUVar7);
    (*pcVar2)(pUVar6,EVar4,iVar1);
    pUVar7 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_M_ItemImplBase::SetQuantity(pUVar7,pFVar5->SummonItemValue);
    this_01 = (UDS_ModelBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_ModelBase::SetDirty(this_01,true);
  }
  return;
}

// ValidCheckAndUpdate @ 14bd94290

void __thiscall
UDS_M_SummonBoss::ValidCheckAndUpdate
          (UDS_M_SummonBoss *this,
          TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7848083698623709006>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_SummonBoss.cpp"
                       ,0xb2,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (pFVar2 != pFVar2 + (longlong)iVar1 * 8) {
      pFVar5 = pFVar2;
      do {
        if ((longlong)*(int *)(*(longlong *)pFVar5 + 8) == this->SelectedSummonBossID)
        goto LAB_14bd94333;
        pFVar5 = pFVar5 + 8;
      } while (pFVar5 != pFVar2 + (longlong)iVar1 * 8);
    }
    if ((iVar1 < 1) || (*(longlong *)pFVar2 == 0)) {
      this->SelectedSummonBossID = 0;
    }
    else {
      this->SelectedSummonBossID = (longlong)*(int *)(*(longlong *)pFVar2 + 8);
    }
  }
LAB_14bd94333:
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

