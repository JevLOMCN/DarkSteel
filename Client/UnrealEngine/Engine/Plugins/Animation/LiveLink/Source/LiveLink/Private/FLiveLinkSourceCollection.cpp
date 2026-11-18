// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 32

// BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>,FGuid_&> @ 14cffb410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkSourceCollection::
BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>,FGuid_&>
          (FLiveLinkSourceCollection *this,
          TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy> *param_1,
          FGuid *param_2)

{
  bool bVar1;
  FGuid local_68;
  TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy> *local_58;
  FGuid FStack_50;
  code *local_38 [5];
  undefined8 *local_10;
  
  bVar1 = IsInGameThread();
  local_68.A = param_2->A;
  local_68.B = param_2->B;
  local_68.C = param_2->C;
  local_68.D = param_2->D;
  if (bVar1) {
    TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>::Broadcast
              (param_1,&local_68);
    return;
  }
  local_38[0] = (code *)0x0;
  local_58 = param_1;
  FStack_50._0_8_ = local_68._0_8_;
  FStack_50._8_8_ = local_68._8_8_;
  local_10 = FMemory::Malloc(0x20,8);
  local_10[1] = local_58;
  local_10[2] = FStack_50._0_8_;
  *local_10 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFGuid___ZUFDefaultTSDelegateUserPolicy____AEAUFGuid___FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFGuid___ZUFDefaultTSDelegateUserPolicy____AEAUFGuid___Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_10[3] = local_68._8_8_;
  if (local_10 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>,FGuid_&>'::__l7::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  return;
}

// BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&> @ 14cffb4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkSourceCollection::
BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>
          (FLiveLinkSourceCollection *this,
          TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
          *param_1,FLiveLinkSubjectKey *param_2)

{
  FName FVar1;
  bool bVar2;
  undefined1 local_58 [8];
  undefined1 auStack_50 [12];
  uint uStack_44;
  code *local_38 [5];
  undefined8 *local_10;
  
  bVar2 = IsInGameThread();
  auStack_50._0_4_ = (param_2->Source).A;
  auStack_50._4_4_ = (param_2->Source).B;
  auStack_50._8_4_ = (param_2->Source).C;
  uStack_44 = (param_2->Source).D;
  if (bVar2) {
    local_58 = (undefined1  [8])auStack_50._0_8_;
    auStack_50._0_8_ = unique0x10000188;
    unique0x1000029a = (param_2->SubjectName).Name;
    TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>::Broadcast
              (param_1,(FLiveLinkSubjectKey *)local_58);
    return;
  }
  FVar1 = (param_2->SubjectName).Name;
  local_38[0] = (code *)0x0;
  local_58 = (undefined1  [8])param_1;
  local_10 = FMemory::Malloc(0x28,8);
  *local_10 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey___FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey___Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_10[1] = local_58;
  local_10[2] = auStack_50._0_8_;
  *(undefined4 *)(local_10 + 3) = auStack_50._8_4_;
  *(uint *)((longlong)local_10 + 0x1c) = uStack_44;
  *(uint *)(local_10 + 4) = FVar1.ComparisonIndex.Value.Value;
  *(uint *)((longlong)local_10 + 0x24) = FVar1.Number;
  if (local_10 + 1 != (undefined8 *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>'::__l7::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  return;
}

// BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&> @ 14cffb5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkSourceCollection::
BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&>
          (FLiveLinkSourceCollection *this,
          TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>
          *param_1,FLiveLinkSubjectKey *param_2,bool *param_3)

{
  FName FVar1;
  bool bVar2;
  undefined1 local_68 [8];
  undefined1 auStack_60 [12];
  uint uStack_54;
  undefined1 local_48;
  undefined7 uStack_47;
  code *local_38 [5];
  undefined8 *local_10;
  
  bVar2 = IsInGameThread();
  auStack_60._0_4_ = (param_2->Source).A;
  auStack_60._4_4_ = (param_2->Source).B;
  auStack_60._8_4_ = (param_2->Source).C;
  uStack_54 = (param_2->Source).D;
  if (bVar2) {
    local_68 = (undefined1  [8])auStack_60._0_8_;
    auStack_60._0_8_ = unique0x100001a0;
    unique0x100002c1 = (param_2->SubjectName).Name;
    TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>::
    Broadcast(param_1,(FLiveLinkSubjectKey *)local_68,*param_3);
  }
  else {
    local_48 = *param_3;
    FVar1 = (param_2->SubjectName).Name;
    local_38[0] = (code *)0x0;
    local_68 = (undefined1  [8])param_1;
    local_10 = FMemory::Malloc(0x30,8);
    *local_10 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___N_ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEA_N_FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___N_ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEA_N_Z__00_00_Function_Private_Core_UE__6B_
    ;
    local_10[1] = local_68;
    local_10[2] = auStack_60._0_8_;
    *(undefined4 *)(local_10 + 3) = auStack_60._8_4_;
    *(uint *)((longlong)local_10 + 0x1c) = uStack_54;
    *(uint *)(local_10 + 4) = FVar1.ComparisonIndex.Value.Value;
    *(uint *)((longlong)local_10 + 0x24) = FVar1.Number;
    local_10[5] = CONCAT71(uStack_47,local_48);
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&>'::__l7::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  }
  return;
}

// FLiveLinkSourceCollection @ 14d011d60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FLiveLinkSourceCollection * __thiscall
FLiveLinkSourceCollection::FLiveLinkSourceCollection(FLiveLinkSourceCollection *this)

{
  FGuid *pFVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  int iVar5;
  FLiveLinkSourceCollection *pFVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  ULiveLinkVirtualSubjectSourceSettings *this_00;
  FScriptContainerElement *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FName local_res10;
  FSharedReferencer<1> local_70;
  FGuid local_68;
  ULiveLinkVirtualSubjectSourceSettings *local_58;
  TReferenceControllerBase<1> *local_50;
  FSharedReferencer<1> local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined2 local_30;
  
  *(undefined8 *)&(this->OnLiveLinkSourcesChangedDelegate).field_0x18 = 2;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  (this->Subjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subjects).ArrayNum = 0;
  (this->Subjects).ArrayMax = 0;
  *(undefined8 *)&this->OnLiveLinkSourcesChangedDelegate = 0;
  *(undefined8 *)&(this->OnLiveLinkSourcesChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLiveLinkSourcesChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnLiveLinkSubjectsChangedDelegate = 0;
  *(undefined8 *)&(this->OnLiveLinkSubjectsChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLiveLinkSubjectsChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnLiveLinkSubjectsChangedDelegate).field_0x18 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnLiveLinkSourceAddedDelegate,4000);
  *(undefined8 *)&(this->OnLiveLinkSourceAddedDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->OnLiveLinkSourceAddedDelegate).field_0x30 = 0;
  *(undefined8 *)&(this->OnLiveLinkSourceAddedDelegate).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnLiveLinkSourceRemovedDelegate,4000);
  *(undefined8 *)&(this->OnLiveLinkSourceRemovedDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->OnLiveLinkSourceRemovedDelegate).field_0x30 = 0;
  *(undefined8 *)&(this->OnLiveLinkSourceRemovedDelegate).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnLiveLinkSubjectAddedDelegate,4000);
  *(undefined8 *)&(this->OnLiveLinkSubjectAddedDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->OnLiveLinkSubjectAddedDelegate).field_0x30 = 0;
  *(undefined8 *)&(this->OnLiveLinkSubjectAddedDelegate).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnLiveLinkSubjectRemovedDelegate,4000);
  *(undefined8 *)&(this->OnLiveLinkSubjectRemovedDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->OnLiveLinkSubjectRemovedDelegate).field_0x30 = 0;
  *(undefined8 *)&(this->OnLiveLinkSubjectRemovedDelegate).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnLiveLinkSubjectStateChangedDelegate,4000);
  *(undefined8 *)&(this->OnLiveLinkSubjectStateChangedDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->OnLiveLinkSubjectStateChangedDelegate).field_0x30 = 0;
  *(undefined8 *)&(this->OnLiveLinkSubjectStateChangedDelegate).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnLiveLinkSubjectEnabledDelegate,4000);
  *(undefined8 *)&(this->OnLiveLinkSubjectEnabledDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->OnLiveLinkSubjectEnabledDelegate).field_0x30 = 0;
  *(undefined8 *)&(this->OnLiveLinkSubjectEnabledDelegate).field_0x38 = 2;
  local_48.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  uStack_40 = 0;
  (this->SubjectsLock).State = (atomic<unsigned_int>)0x0;
  (this->SubjectsLock).ThreadId = (atomic<unsigned_int>)0x0;
  (this->SourcesLock).State = (atomic<unsigned_int>)0x0;
  (this->SourcesLock).ThreadId = (atomic<unsigned_int>)0x0;
  local_68 = (FGuid)ZEXT816(0);
  local_58 = (ULiveLinkVirtualSubjectSourceSettings *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_70.ReferenceController = ::operator_new(0x20);
  if (local_70.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    (local_70.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10 = local_70.ReferenceController + 1;
    (local_70.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_70.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFLiveLinkDefaultVirtualSubjectSource___00_SharedPointerInternals__6B_
    ;
    local_70.ReferenceController[1]._padding_ =
         (longlong)&___7FLiveLinkDefaultVirtualSubjectSource__6B_;
    local_70.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    local_70.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLiveLinkSourceCollection *)(*pcVar2)();
      return pFVar6;
    }
    LOCK();
    (local_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar3.ReferenceController = local_70.ReferenceController;
  local_50 = pTVar10;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_48,&local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  local_68 = DefaultVirtualSubjectGuid;
  pUVar7 = ULiveLinkVirtualSubjectSourceSettings::StaticClass();
  pUVar8 = GetTransientPackage();
  this_00 = NewObject<ULiveLinkVirtualSubjectSourceSettings>
                      ((UObject *)pUVar8,pUVar7,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  ::FName::FName(&local_res10,L"DefaultVirtualSource");
  this_00->SourceName = local_res10;
  UObjectBase::AddRef((UObjectBase *)this_00);
  if (local_58 != this_00) {
    if (local_58 != (ULiveLinkVirtualSubjectSourceSettings *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_58);
    }
    UObjectBase::AddRef((UObjectBase *)this_00);
    local_58 = this_00;
  }
  UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
  local_30 = CONCAT11(1,local_30._0_1_);
  if ((local_50 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FLiveLinkSourceCollection *)(*pcVar2)();
    return pFVar6;
  }
  (**(code **)(local_50->_padding_ + 0x10))(local_50,this_00);
  bVar4 = IsInGameThread();
  if (!bVar4) {
    if ((local_58 == (ULiveLinkVirtualSubjectSourceSettings *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLiveLinkSourceCollection *)(*pcVar2)();
      return pFVar6;
    }
    UObjectBaseUtility::AtomicallyClearInternalFlags((UObjectBaseUtility *)local_58,Async);
  }
  pFVar1 = (FGuid *)(this->Sources).AllocatorInstance.Data;
  if (((pFVar1 <= &local_68) && (&local_68 < pFVar1 + (longlong)(this->Sources).ArrayMax * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FLiveLinkSourceCollection *)(*pcVar2)();
    return pFVar6;
  }
  iVar5 = (this->Sources).ArrayNum;
  if (iVar5 == (this->Sources).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,(ForAnyElementType *)this,&(this->Sources).ArrayMax);
  }
  (this->Sources).ArrayNum = iVar5 + 1;
  pFVar9 = (this->Sources).AllocatorInstance.Data + (longlong)iVar5 * 0x40;
  *(undefined8 *)pFVar9 = local_68._0_8_;
  *(undefined8 *)(pFVar9 + 8) = local_68._8_8_;
  *(ULiveLinkVirtualSubjectSourceSettings **)(pFVar9 + 0x10) = local_58;
  local_58 = (ULiveLinkVirtualSubjectSourceSettings *)0x0;
  *(TReferenceControllerBase<1> **)(pFVar9 + 0x18) = local_50;
  *(TReferenceControllerBase<1> **)(pFVar9 + 0x20) = local_48.ReferenceController;
  local_48.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_50 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)(pFVar9 + 0x28) = uStack_40;
  *(undefined8 *)(pFVar9 + 0x30) = local_38;
  local_38 = 0;
  uStack_40 = 0;
  pFVar9[0x38] = local_30._0_1_;
  pFVar9[0x39] = local_30._1_1_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.ReferenceController);
  if (local_58 != (ULiveLinkVirtualSubjectSourceSettings *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_58);
  }
  return this;
}

// ~FLiveLinkSourceCollection @ 14d016340

void __thiscall
FLiveLinkSourceCollection::~FLiveLinkSourceCollection(FLiveLinkSourceCollection *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLiveLinkSubjectEnabledDelegate).field_0x28,
             *(int *)&(this->OnLiveLinkSubjectEnabledDelegate).field_0x30);
  pvVar1 = *(void **)&(this->OnLiveLinkSubjectEnabledDelegate).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnLiveLinkSubjectEnabledDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLiveLinkSubjectStateChangedDelegate).field_0x28,
             *(int *)&(this->OnLiveLinkSubjectStateChangedDelegate).field_0x30);
  pvVar1 = *(void **)&(this->OnLiveLinkSubjectStateChangedDelegate).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnLiveLinkSubjectStateChangedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLiveLinkSubjectRemovedDelegate).field_0x28,
             *(int *)&(this->OnLiveLinkSubjectRemovedDelegate).field_0x30);
  pvVar1 = *(void **)&(this->OnLiveLinkSubjectRemovedDelegate).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnLiveLinkSubjectRemovedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLiveLinkSubjectAddedDelegate).field_0x28,
             *(int *)&(this->OnLiveLinkSubjectAddedDelegate).field_0x30);
  pvVar1 = *(void **)&(this->OnLiveLinkSubjectAddedDelegate).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnLiveLinkSubjectAddedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLiveLinkSourceRemovedDelegate).field_0x28,
             *(int *)&(this->OnLiveLinkSourceRemovedDelegate).field_0x30);
  pvVar1 = *(void **)&(this->OnLiveLinkSourceRemovedDelegate).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnLiveLinkSourceRemovedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLiveLinkSourceAddedDelegate).field_0x28,
             *(int *)&(this->OnLiveLinkSourceAddedDelegate).field_0x30);
  pvVar1 = *(void **)&(this->OnLiveLinkSourceAddedDelegate).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnLiveLinkSourceAddedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLiveLinkSubjectsChangedDelegate).field_0x8,
             *(int *)&(this->OnLiveLinkSubjectsChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnLiveLinkSubjectsChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLiveLinkSubjectsChangedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLiveLinkSourcesChangedDelegate).field_0x8,
             *(int *)&(this->OnLiveLinkSourcesChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnLiveLinkSourcesChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLiveLinkSourcesChangedDelegate);
  DestructItems<FLiveLinkCollectionSubjectItem,int>
            ((FLiveLinkCollectionSubjectItem *)(this->Subjects).AllocatorInstance.Data,
             (this->Subjects).ArrayNum);
  pFVar2 = (this->Subjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FLiveLinkCollectionSourceItem,int>
            ((FLiveLinkCollectionSourceItem *)(this->Sources).AllocatorInstance.Data,
             (this->Sources).ArrayNum);
  pFVar2 = (this->Sources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddSource @ 14d0213e0

void __thiscall
FLiveLinkSourceCollection::AddSource
          (FLiveLinkSourceCollection *this,FLiveLinkCollectionSourceItem *param_1)

{
  int *piVar1;
  FLiveLinkCollectionSourceItem *pFVar2;
  FLiveLinkTimedDataInput *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FGuid local_28 [2];
  
  UE::FRecursiveMutex::Lock(&this->SourcesLock);
  pFVar2 = (FLiveLinkCollectionSourceItem *)(this->Sources).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Sources).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (this->Sources).ArrayNum;
  piVar1 = &(this->Sources).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,(ForAnyElementType *)this,piVar1);
  }
  (this->Sources).ArrayNum = iVar9 + 1;
  uVar6 = *(undefined8 *)&(param_1->Guid).C;
  pFVar10 = (this->Sources).AllocatorInstance.Data + (longlong)iVar9 * 0x40;
  *(undefined8 *)pFVar10 = *(undefined8 *)&param_1->Guid;
  *(undefined8 *)(pFVar10 + 8) = uVar6;
  *(UObject **)(pFVar10 + 0x10) = (param_1->Setting).Object;
  (param_1->Setting).Object = (UObject *)0x0;
  *(ILiveLinkSource **)(pFVar10 + 0x18) = (param_1->Source).Object;
  *(TReferenceControllerBase<1> **)(pFVar10 + 0x20) =
       (param_1->Source).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->TimedData).Object;
  (param_1->Source).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Source).Object = (ILiveLinkSource *)0x0;
  *(FLiveLinkTimedDataInput **)(pFVar10 + 0x28) = pFVar3;
  *(TReferenceControllerBase<1> **)(pFVar10 + 0x30) =
       (param_1->TimedData).SharedReferenceCount.ReferenceController;
  (param_1->TimedData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (param_1->TimedData).Object = (FLiveLinkTimedDataInput *)0x0;
  pFVar10[0x38] = (FScriptContainerElement)param_1->bPendingKill;
  pFVar10[0x39] = (FScriptContainerElement)param_1->bIsVirtualSource;
  LiveLinkSourceCollection::SendAnalyticsSourceAdded(*(ILiveLinkSource **)(pFVar10 + 0x18));
  uVar6 = *(undefined8 *)pFVar10;
  uVar7 = *(undefined8 *)(pFVar10 + 8);
  UE::FRecursiveMutex::Unlock(&this->SourcesLock);
  local_28[0]._0_8_ = uVar6;
  local_28[0]._8_8_ = uVar7;
  TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>::Broadcast
            (&this->OnLiveLinkSourceAddedDelegate,local_28);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnLiveLinkSourcesChangedDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TimedData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Source).SharedReferenceCount.ReferenceController);
  pUVar4 = (param_1->Setting).Object;
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
    (param_1->Setting).Object = (UObject *)0x0;
  }
  return;
}

// AddSubject @ 14d021570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkSourceCollection::AddSubject
          (FLiveLinkSourceCollection *this,FLiveLinkCollectionSubjectItem *param_1)

{
  int *piVar1;
  FName FVar2;
  FLiveLinkSubject *pFVar3;
  FLiveLinkCollectionSubjectItem *pFVar4;
  UObject *pUVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  FScriptContainerElement *pFVar13;
  FLiveLinkSubjectKey local_78;
  FDestructionSentinel local_60;
  undefined1 *local_48;
  code *local_38 [2];
  undefined **local_28;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_20;
  undefined8 local_10;
  
  uVar8._0_4_ = (param_1->Key).Source.A;
  uVar8._4_4_ = (param_1->Key).Source.B;
  uVar7._0_4_ = (param_1->Key).Source.C;
  uVar7._4_4_ = (param_1->Key).Source.D;
  FVar2 = (param_1->Key).SubjectName.Name;
  pFVar3 = (param_1->LiveSubject).Ptr;
  local_78.Source._0_8_ = uVar8;
  local_78.Source._8_8_ = uVar7;
  local_78.SubjectName.Name = FVar2;
  if (pFVar3 != (FLiveLinkSubject *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar3->OnStateChangedDelegate,(FWriteAccessScope *)&local_60);
    local_48 = &(pFVar3->OnStateChangedDelegate).field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_48);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXW4ELiveLinkSubjectState___ZUFDefaultDelegateUserPolicy__UFLiveLinkSubjectKey____6B_
      ;
      puVar11[1] = uVar8;
      puVar11[2] = uVar7;
      *(FName *)(puVar11 + 3) = FVar2;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[4] = uVar12;
      *puVar11 = &
                 ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkSourceCollection____A6AXW4ELiveLinkSubjectState___ZUFDefaultDelegateUserPolicy__UFLiveLinkSubjectKey____6B_
      ;
      puVar11[6] = HandleSubjectStateChanged;
      puVar11[5] = this;
      if (this == (FLiveLinkSourceCollection *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
  }
  UE::FRecursiveMutex::Lock(&this->SubjectsLock);
  pFVar4 = (FLiveLinkCollectionSubjectItem *)(this->Subjects).AllocatorInstance.Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->Subjects).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar10 = (this->Subjects).ArrayNum;
  piVar1 = &(this->Subjects).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,&(this->Subjects).AllocatorInstance,piVar1);
  }
  (this->Subjects).ArrayNum = iVar10 + 1;
  uVar8 = *(undefined8 *)&(param_1->Key).Source.C;
  pFVar13 = (this->Subjects).AllocatorInstance.Data + (longlong)iVar10 * 0x38;
  *(undefined8 *)pFVar13 = *(undefined8 *)&(param_1->Key).Source;
  *(undefined8 *)(pFVar13 + 8) = uVar8;
  *(FName *)(pFVar13 + 0x10) = (param_1->Key).SubjectName.Name;
  pFVar13[0x18] = (FScriptContainerElement)param_1->bEnabled;
  pFVar13[0x19] = (FScriptContainerElement)param_1->bPendingKill;
  *(UObject **)(pFVar13 + 0x20) = (param_1->Setting).Object;
  (param_1->Setting).Object = (UObject *)0x0;
  *(FLiveLinkSubject **)(pFVar13 + 0x28) = (param_1->LiveSubject).Ptr;
  (param_1->LiveSubject).Ptr = (FLiveLinkSubject *)0x0;
  *(UObject **)(pFVar13 + 0x30) = (param_1->VirtualSubject).Object;
  (param_1->VirtualSubject).Object = (UObject *)0x0;
  UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
  BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>
            (this,&this->OnLiveLinkSubjectAddedDelegate,&local_78);
  bVar9 = IsInGameThread();
  if (bVar9) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnLiveLinkSubjectsChangedDelegate);
  }
  else {
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy______V_FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l7::<lambda_1>,void>
                  ::Call;
    local_20 = &this->OnLiveLinkSubjectsChangedDelegate;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  }
  pUVar5 = (param_1->VirtualSubject).Object;
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    (param_1->VirtualSubject).Object = (UObject *)0x0;
  }
  pFVar3 = (param_1->LiveSubject).Ptr;
  if (pFVar3 != (FLiveLinkSubject *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  pUVar5 = (param_1->Setting).Object;
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    (param_1->Setting).Object = (UObject *)0x0;
  }
  return;
}

// ApplyToSubject @ 14d023800

void __thiscall
FLiveLinkSourceCollection::ApplyToSubject
          (FLiveLinkSourceCollection *this,FLiveLinkSubjectKey *param_1,
          TFunctionRef<void___cdecl(FLiveLinkCollectionSubjectItem_&)> *param_2)

{
  FLiveLinkCollectionSubjectItem *pFVar1;
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = (param_1->Source).A;
  local_28.Source.B = (param_1->Source).B;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  pFVar1 = FindSubject(this,&local_28);
  if (pFVar1 != (FLiveLinkCollectionSubjectItem *)0x0) {
    UE::FRecursiveMutex::Lock(&this->SubjectsLock);
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar1);
    UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
  }
  return;
}

// FindEnabledSubject @ 14d041190

FLiveLinkCollectionSubjectItem * __thiscall
FLiveLinkSourceCollection::FindEnabledSubject
          (FLiveLinkSourceCollection *this,FLiveLinkSubjectName param_1)

{
  FLiveLinkCollectionSubjectItem *pFVar1;
  FLiveLinkCollectionSubjectItem *pFVar2;
  
  UE::FRecursiveMutex::Lock(&this->SubjectsLock);
  pFVar2 = (FLiveLinkCollectionSubjectItem *)(this->Subjects).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->Subjects).ArrayNum;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
    if ((((pFVar2->Key).SubjectName.Name == param_1.Name) && (pFVar2->bEnabled != false)) &&
       (pFVar2->bPendingKill == false)) goto LAB_14d0411ed;
  }
  pFVar2 = (FLiveLinkCollectionSubjectItem *)0x0;
LAB_14d0411ed:
  UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
  return pFVar2;
}

// FindSource @ 14d042500

FLiveLinkCollectionSourceItem * __thiscall
FLiveLinkSourceCollection::FindSource(FLiveLinkSourceCollection *this,FGuid *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FLiveLinkCollectionSourceItem *pFVar5;
  FLiveLinkCollectionSourceItem *pFVar6;
  uint local_18;
  uint uStack_14;
  uint uStack_c;
  
  UE::FRecursiveMutex::Lock(&this->SourcesLock);
  uVar1 = param_1->A;
  uVar2 = param_1->B;
  uVar3 = param_1->C;
  uVar4 = param_1->D;
  pFVar6 = (FLiveLinkCollectionSourceItem *)(this->Sources).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (this->Sources).ArrayNum;
  for (; pFVar6 != pFVar5; pFVar6 = pFVar6 + 1) {
    if (((uVar4 == (pFVar6->Guid).D && uVar3 == (pFVar6->Guid).C) && uVar2 == (pFVar6->Guid).B) &&
        uVar1 == (pFVar6->Guid).A) goto LAB_14d04257a;
  }
  pFVar6 = (FLiveLinkCollectionSourceItem *)0x0;
LAB_14d04257a:
  UE::FRecursiveMutex::Unlock(&this->SourcesLock);
  return pFVar6;
}

// FindSource @ 14d0425a0

FLiveLinkCollectionSourceItem * __thiscall
FLiveLinkSourceCollection::FindSource
          (FLiveLinkSourceCollection *this,TSharedPtr<ILiveLinkSource,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ILiveLinkSource *pIVar2;
  FLiveLinkCollectionSourceItem *pFVar3;
  FLiveLinkCollectionSourceItem *pFVar4;
  
  UE::FRecursiveMutex::Lock(&this->SourcesLock);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = (FLiveLinkCollectionSourceItem *)(this->Sources).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (this->Sources).ArrayNum;
  for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 1) {
    if ((pFVar4->Source).Object == pIVar2) goto LAB_14d042601;
  }
  pFVar4 = (FLiveLinkCollectionSourceItem *)0x0;
LAB_14d042601:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UE::FRecursiveMutex::Unlock(&this->SourcesLock);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pFVar4;
}

// FindSource @ 14d042640

FLiveLinkCollectionSourceItem * __thiscall
FLiveLinkSourceCollection::FindSource(FLiveLinkSourceCollection *this,FGuid *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FLiveLinkCollectionSourceItem *pFVar5;
  FLiveLinkCollectionSourceItem *pFVar6;
  uint local_18;
  uint uStack_14;
  uint uStack_c;
  
  UE::FRecursiveMutex::Lock(&this->SourcesLock);
  uVar1 = param_1->A;
  uVar2 = param_1->B;
  uVar3 = param_1->C;
  uVar4 = param_1->D;
  pFVar6 = (FLiveLinkCollectionSourceItem *)(this->Sources).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (this->Sources).ArrayNum;
  for (; pFVar6 != pFVar5; pFVar6 = pFVar6 + 1) {
    if (((uVar4 == (pFVar6->Guid).D && uVar3 == (pFVar6->Guid).C) && uVar2 == (pFVar6->Guid).B) &&
        uVar1 == (pFVar6->Guid).A) goto LAB_14d0426ba;
  }
  pFVar6 = (FLiveLinkCollectionSourceItem *)0x0;
LAB_14d0426ba:
  UE::FRecursiveMutex::Unlock(&this->SourcesLock);
  return pFVar6;
}

// FindSource @ 14d0426e0

FLiveLinkCollectionSourceItem * __thiscall
FLiveLinkSourceCollection::FindSource
          (FLiveLinkSourceCollection *this,TSharedPtr<ILiveLinkSource,1> *param_1)

{
  FLiveLinkCollectionSourceItem *pFVar1;
  TSharedPtr<ILiveLinkSource,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = FindSource(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pFVar1;
}

// FindSubject @ 14d042740

FLiveLinkCollectionSubjectItem * __thiscall
FLiveLinkSourceCollection::FindSubject(FLiveLinkSourceCollection *this,FLiveLinkSubjectKey *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FLiveLinkCollectionSubjectItem *pFVar5;
  FLiveLinkCollectionSubjectItem *pFVar6;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  UE::FRecursiveMutex::Lock(&this->SubjectsLock);
  uVar1 = (param_1->Source).A;
  uVar2 = (param_1->Source).B;
  uVar3 = (param_1->Source).C;
  uVar4 = (param_1->Source).D;
  pFVar6 = (FLiveLinkCollectionSubjectItem *)(this->Subjects).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (this->Subjects).ArrayNum;
  if (pFVar6 != pFVar5) {
    do {
      if (((pFVar6->Key).SubjectName.Name == (param_1->SubjectName).Name) &&
         (((uVar4 == (pFVar6->Key).Source.D && uVar3 == (pFVar6->Key).Source.C) &&
          uVar2 == (pFVar6->Key).Source.B) && uVar1 == (pFVar6->Key).Source.A)) goto LAB_14d0427d2;
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar5);
  }
  pFVar6 = (FLiveLinkCollectionSubjectItem *)0x0;
LAB_14d0427d2:
  UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
  return pFVar6;
}

// FindSubject @ 14d042800

FLiveLinkCollectionSubjectItem * __thiscall
FLiveLinkSourceCollection::FindSubject(FLiveLinkSourceCollection *this,FLiveLinkSubjectKey *param_1)

{
  FLiveLinkCollectionSubjectItem *pFVar1;
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = (param_1->Source).A;
  local_28.Source.B = (param_1->Source).B;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  pFVar1 = FindSubject(this,&local_28);
  return pFVar1;
}

// FindSubject @ 14d042830

FLiveLinkCollectionSubjectItem * __thiscall
FLiveLinkSourceCollection::FindSubject(FLiveLinkSourceCollection *this,FLiveLinkSubjectName param_1)

{
  FLiveLinkCollectionSubjectItem *pFVar1;
  FLiveLinkCollectionSubjectItem *pFVar2;
  
  UE::FRecursiveMutex::Lock(&this->SubjectsLock);
  pFVar2 = (FLiveLinkCollectionSubjectItem *)(this->Subjects).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->Subjects).ArrayNum;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
    if ((pFVar2->Key).SubjectName.Name == param_1.Name) goto LAB_14d042881;
  }
  pFVar2 = (FLiveLinkCollectionSubjectItem *)0x0;
LAB_14d042881:
  UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
  return pFVar2;
}

// FindVirtualSource @ 14d0428b0

FLiveLinkCollectionSourceItem * __thiscall
FLiveLinkSourceCollection::FindVirtualSource(FLiveLinkSourceCollection *this,FName param_1)

{
  int iVar1;
  UObject *pUVar2;
  FName FVar3;
  UClass *pUVar4;
  FLiveLinkCollectionSourceItem *pFVar5;
  FLiveLinkCollectionSourceItem *pFVar6;
  
  UE::FRecursiveMutex::Lock(&this->SourcesLock);
  pFVar5 = (FLiveLinkCollectionSourceItem *)(this->Sources).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (this->Sources).ArrayNum;
  for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 1) {
    if ((pFVar5->bIsVirtualSource != false) &&
       (pUVar2 = (pFVar5->Setting).Object, pUVar2 != (UObject *)0x0)) {
      pUVar4 = ULiveLinkVirtualSubjectSourceSettings::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         (((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_ &&
          (FVar3.ComparisonIndex.Value = *(uint *)&pUVar2[4].field_0x18,
          FVar3.Number = *(uint *)&pUVar2[4].field_0x1c, FVar3 == param_1)))) goto LAB_14d042938;
    }
  }
  pFVar5 = (FLiveLinkCollectionSourceItem *)0x0;
LAB_14d042938:
  UE::FRecursiveMutex::Unlock(&this->SourcesLock);
  return pFVar5;
}

// FindVirtualSource @ 14d042970

FLiveLinkCollectionSourceItem * __thiscall
FLiveLinkSourceCollection::FindVirtualSource(FLiveLinkSourceCollection *this,FName param_1)

{
  int iVar1;
  UObject *pUVar2;
  FName FVar3;
  UClass *pUVar4;
  FLiveLinkCollectionSourceItem *pFVar5;
  FLiveLinkCollectionSourceItem *pFVar6;
  
  UE::FRecursiveMutex::Lock(&this->SourcesLock);
  pFVar5 = (FLiveLinkCollectionSourceItem *)(this->Sources).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (this->Sources).ArrayNum;
  for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 1) {
    if ((pFVar5->bIsVirtualSource != false) &&
       (pUVar2 = (pFVar5->Setting).Object, pUVar2 != (UObject *)0x0)) {
      pUVar4 = ULiveLinkVirtualSubjectSourceSettings::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         (((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_ &&
          (FVar3.ComparisonIndex.Value = *(uint *)&pUVar2[4].field_0x18,
          FVar3.Number = *(uint *)&pUVar2[4].field_0x1c, FVar3 == param_1)))) goto LAB_14d042938;
    }
  }
  pFVar5 = (FLiveLinkCollectionSourceItem *)0x0;
LAB_14d042938:
  UE::FRecursiveMutex::Unlock(&this->SourcesLock);
  return pFVar5;
}

// ForEachSource @ 14d042a10

void __thiscall
FLiveLinkSourceCollection::ForEachSource
          (FLiveLinkSourceCollection *this,
          TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UE::FRecursiveMutex::Lock(&this->SourcesLock);
  iVar1 = (this->Sources).ArrayNum;
  pFVar3 = (this->Sources).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->Sources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLiveLinkCollectionSourceItem,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar3);
    pFVar3 = pFVar3 + 0x40;
  }
  UE::FRecursiveMutex::Unlock(&this->SourcesLock);
  return;
}

// ForEachSource @ 14d042ab0

void __thiscall
FLiveLinkSourceCollection::ForEachSource
          (FLiveLinkSourceCollection *this,
          TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_const_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UE::FRecursiveMutex::Lock(&this->SourcesLock);
  iVar1 = (this->Sources).ArrayNum;
  pFVar3 = (this->Sources).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->Sources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLiveLinkCollectionSourceItem_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar3);
    pFVar3 = pFVar3 + 0x40;
  }
  UE::FRecursiveMutex::Unlock(&this->SourcesLock);
  return;
}

// ForEachSubject @ 14d042b50

void __thiscall
FLiveLinkSourceCollection::ForEachSubject
          (FLiveLinkSourceCollection *this,
          TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
          *param_1)

{
  FRecursiveMutex *this_00;
  int iVar1;
  ForAnyElementType FVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FIdentityFunctor local_res8 [8];
  ForAnyElementType local_58;
  undefined8 uStack_50;
  FRecursiveMutex *local_48;
  FRecursiveMutex *pFStack_40;
  
  local_48 = &this->SubjectsLock;
  this_00 = &this->SourcesLock;
  local_58.Data = (FScriptContainerElement *)0x0;
  uStack_50 = CONCAT44(uStack_50._4_4_,2);
  pFStack_40 = this_00;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_58,2,(int *)((longlong)&uStack_50 + 4));
  FVar2.Data = local_58.Data;
  *(FRecursiveMutex **)local_58.Data = local_48;
  *(FRecursiveMutex **)(local_58.Data + 8) = pFStack_40;
  iVar1 = (int)uStack_50;
  lVar6 = (longlong)(int)uStack_50;
  local_58.Data = (FScriptContainerElement *)0x0;
  uStack_50 = 0;
  AlgoImpl::IntroSortInternal<UE::FRecursiveMutex_*,int,FIdentityFunctor,TLess<void>_>
            ((FRecursiveMutex **)FVar2.Data,iVar1,local_res8[0],(TLess<void>)local_res8[0]);
  for (FVar4.Data = FVar2.Data; FVar4.Data != FVar2.Data + lVar6 * 8; FVar4.Data = FVar4.Data + 8) {
    UE::FRecursiveMutex::Lock(*(FRecursiveMutex **)FVar4.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  iVar1 = (this->Subjects).ArrayNum;
  pFVar5 = (this->Subjects).AllocatorInstance.Data;
  pFVar8 = pFVar5 + (longlong)iVar1 * 0x38;
LAB_14d042c41:
  do {
    if ((this->Subjects).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLiveLinkCollectionSubjectItem,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    FVar4.Data = FVar2.Data;
    if (pFVar5 == pFVar8) {
      for (; FVar4.Data != FVar2.Data + lVar6 * 8; FVar4.Data = FVar4.Data + 8) {
        UE::FRecursiveMutex::Unlock(*(FRecursiveMutex **)FVar4.Data);
      }
      if (FVar2.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      return;
    }
                    /* WARNING: Load size is inaccurate */
    local_58.Data = *pFVar5;
    uStack_50 = *(undefined8 *)(pFVar5 + 8);
    UE::FRecursiveMutex::Lock(this_00);
    pFVar7 = (this->Sources).AllocatorInstance.Data;
    pFVar3 = pFVar7 + (longlong)(this->Sources).ArrayNum * 0x40;
    if (pFVar7 != pFVar3) {
      do {
        if (((local_58.Data._4_4_ == *(int *)(pFVar7 + 4) && (int)uStack_50 == *(int *)(pFVar7 + 8))
            && uStack_50._4_4_ == *(int *)(pFVar7 + 0xc)) && (int)local_58.Data == *(int *)pFVar7) {
          UE::FRecursiveMutex::Unlock(this_00);
          if (pFVar7 == (FScriptContainerElement *)0x0) goto LAB_14d042cd0;
          (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar7,pFVar5);
          pFVar5 = pFVar5 + 0x38;
          goto LAB_14d042c41;
        }
        pFVar7 = pFVar7 + 0x40;
      } while (pFVar7 != pFVar3);
    }
    UE::FRecursiveMutex::Unlock(this_00);
LAB_14d042cd0:
    pFVar5 = pFVar5 + 0x38;
  } while( true );
}

// ForEachSubject @ 14d042d50

void __thiscall
FLiveLinkSourceCollection::ForEachSubject
          (FLiveLinkSourceCollection *this,
          TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_const_&,FLiveLinkCollectionSubjectItem_const_&)>
          *param_1)

{
  FRecursiveMutex *this_00;
  int iVar1;
  ForAnyElementType FVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FIdentityFunctor local_res8 [8];
  ForAnyElementType local_58;
  undefined8 uStack_50;
  FRecursiveMutex *local_48;
  FRecursiveMutex *pFStack_40;
  
  local_48 = &this->SubjectsLock;
  this_00 = &this->SourcesLock;
  local_58.Data = (FScriptContainerElement *)0x0;
  uStack_50 = CONCAT44(uStack_50._4_4_,2);
  pFStack_40 = this_00;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_58,2,(int *)((longlong)&uStack_50 + 4));
  FVar2.Data = local_58.Data;
  *(FRecursiveMutex **)local_58.Data = local_48;
  *(FRecursiveMutex **)(local_58.Data + 8) = pFStack_40;
  iVar1 = (int)uStack_50;
  lVar6 = (longlong)(int)uStack_50;
  local_58.Data = (FScriptContainerElement *)0x0;
  uStack_50 = 0;
  AlgoImpl::IntroSortInternal<UE::FRecursiveMutex_*,int,FIdentityFunctor,TLess<void>_>
            ((FRecursiveMutex **)FVar2.Data,iVar1,local_res8[0],(TLess<void>)local_res8[0]);
  for (FVar4.Data = FVar2.Data; FVar4.Data != FVar2.Data + lVar6 * 8; FVar4.Data = FVar4.Data + 8) {
    UE::FRecursiveMutex::Lock(*(FRecursiveMutex **)FVar4.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  iVar1 = (this->Subjects).ArrayNum;
  pFVar5 = (this->Subjects).AllocatorInstance.Data;
  pFVar8 = pFVar5 + (longlong)iVar1 * 0x38;
LAB_14d042e41:
  do {
    if ((this->Subjects).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLiveLinkCollectionSubjectItem_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    FVar4.Data = FVar2.Data;
    if (pFVar5 == pFVar8) {
      for (; FVar4.Data != FVar2.Data + lVar6 * 8; FVar4.Data = FVar4.Data + 8) {
        UE::FRecursiveMutex::Unlock(*(FRecursiveMutex **)FVar4.Data);
      }
      if (FVar2.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      return;
    }
                    /* WARNING: Load size is inaccurate */
    local_58.Data = *pFVar5;
    uStack_50 = *(undefined8 *)(pFVar5 + 8);
    UE::FRecursiveMutex::Lock(this_00);
    pFVar7 = (this->Sources).AllocatorInstance.Data;
    pFVar3 = pFVar7 + (longlong)(this->Sources).ArrayNum * 0x40;
    if (pFVar7 != pFVar3) {
      do {
        if (((local_58.Data._4_4_ == *(int *)(pFVar7 + 4) && (int)uStack_50 == *(int *)(pFVar7 + 8))
            && uStack_50._4_4_ == *(int *)(pFVar7 + 0xc)) && (int)local_58.Data == *(int *)pFVar7) {
          UE::FRecursiveMutex::Unlock(this_00);
          if (pFVar7 == (FScriptContainerElement *)0x0) goto LAB_14d042ed0;
          (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar7,pFVar5);
          pFVar5 = pFVar5 + 0x38;
          goto LAB_14d042e41;
        }
        pFVar7 = pFVar7 + 0x40;
      } while (pFVar7 != pFVar3);
    }
    UE::FRecursiveMutex::Unlock(this_00);
LAB_14d042ed0:
    pFVar5 = pFVar5 + 0x38;
  } while( true );
}

// HandleSubjectStateChanged @ 14d059e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkSourceCollection::HandleSubjectStateChanged
          (FLiveLinkSourceCollection *this,ELiveLinkSubjectState param_1,
          FLiveLinkSubjectKey *param_2)

{
  FName FVar1;
  bool bVar2;
  undefined1 local_68 [8];
  undefined1 auStack_60 [12];
  uint uStack_54;
  ELiveLinkSubjectState local_48;
  undefined7 uStack_47;
  code *local_38 [5];
  undefined8 *local_10;
  
  bVar2 = IsInGameThread();
  auStack_60._0_4_ = (param_2->Source).A;
  auStack_60._4_4_ = (param_2->Source).B;
  auStack_60._8_4_ = (param_2->Source).C;
  uStack_54 = (param_2->Source).D;
  if (bVar2) {
    local_68 = (undefined1  [8])auStack_60._0_8_;
    auStack_60._0_8_ = unique0x10000188;
    unique0x100002b1 = (param_2->SubjectName).Name;
    TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>
    ::Broadcast(&this->OnLiveLinkSubjectStateChangedDelegate,(FLiveLinkSubjectKey *)local_68,param_1
               );
  }
  else {
    local_38[0] = (code *)0x0;
    local_68 = (undefined1  [8])&this->OnLiveLinkSubjectStateChangedDelegate;
    local_48 = param_1;
    local_10 = FMemory::Malloc(0x30,8);
    *local_10 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFLiveLinkSubjectKey__W4ELiveLinkSubjectState___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEAW4ELiveLinkSubjectState___FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFLiveLinkSubjectKey__W4ELiveLinkSubjectState___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEAW4ELiveLinkSubjectState___Z__00_00_Function_Private_Core_UE__6B_
    ;
    FVar1 = (param_2->SubjectName).Name;
    local_10[1] = local_68;
    local_10[2] = auStack_60._0_8_;
    *(undefined4 *)(local_10 + 3) = auStack_60._8_4_;
    *(uint *)((longlong)local_10 + 0x1c) = uStack_54;
    *(uint *)(local_10 + 4) = FVar1.ComparisonIndex.Value.Value;
    *(uint *)((longlong)local_10 + 0x24) = FVar1.Number;
    local_10[5] = CONCAT71(uStack_47,local_48);
    if (local_10 + 1 != (longlong *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,enum_ELiveLinkSubjectState_&>'::__l7::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  }
  return;
}

// IsSubjectEnabled @ 14d0606c0

bool __thiscall
FLiveLinkSourceCollection::IsSubjectEnabled
          (FLiveLinkSourceCollection *this,FLiveLinkSubjectKey *param_1)

{
  FLiveLinkCollectionSubjectItem *pFVar1;
  undefined1 uVar2;
  FLiveLinkSubjectKey local_28;
  
  UE::FRecursiveMutex::Lock(&this->SubjectsLock);
  local_28.Source.A = (param_1->Source).A;
  local_28.Source.B = (param_1->Source).B;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  pFVar1 = FindSubject(this,&local_28);
  if (pFVar1 == (FLiveLinkCollectionSubjectItem *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = pFVar1->bEnabled;
  }
  UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
  return (bool)uVar2;
}

// NumSources @ 14d062cd0

int __thiscall FLiveLinkSourceCollection::NumSources(FLiveLinkSourceCollection *this)

{
  int iVar1;
  
  UE::FRecursiveMutex::Lock(&this->SourcesLock);
  iVar1 = (this->Sources).ArrayNum;
  UE::FRecursiveMutex::Unlock(&this->SourcesLock);
  return iVar1;
}

// NumSubjects @ 14d062d10

int __thiscall FLiveLinkSourceCollection::NumSubjects(FLiveLinkSourceCollection *this)

{
  int iVar1;
  
  UE::FRecursiveMutex::Lock(&this->SubjectsLock);
  iVar1 = (this->Subjects).ArrayNum;
  UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
  return iVar1;
}

// RemoveAllSources @ 14d078350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkSourceCollection::RemoveAllSources(FLiveLinkSourceCollection *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uStack_168;
  uint uStack_164;
  FGuid local_158;
  FLiveLinkSubjectKey local_148;
  TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy> *local_128;
  FGuid FStack_120;
  code *local_108 [5];
  undefined8 *local_e0;
  code *local_d8 [2];
  undefined **local_c8;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_c0;
  undefined8 local_b0;
  code *local_a8 [5];
  undefined8 *local_80;
  code *local_78 [2];
  undefined **local_68;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_60;
  undefined8 local_50;
  
  UE::FRecursiveMutex::Lock(&this->SubjectsLock);
  uVar11 = (this->Subjects).ArrayNum - 1;
  if ((int)uVar11 < 0) {
    UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
  }
  else {
    lVar12 = (longlong)(int)uVar11 * 0x38;
    do {
      uVar8 = 0;
      if ((int)uVar11 < (this->Subjects).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Subjects).AllocatorInstance.Data;
      pFVar9 = pFVar2 + lVar12;
      uVar4 = *(undefined8 *)pFVar9;
      uVar5 = *(undefined8 *)(pFVar9 + 8);
      FVar1 = *(FName *)(pFVar2 + lVar12 + 0x10);
      uVar8 = 0;
      if ((int)uVar11 < (this->Subjects).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TArray<FLiveLinkCollectionSubjectItem,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                (&this->Subjects,uVar11);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,&(this->Subjects).AllocatorInstance,(this->Subjects).ArrayNum,
                 &(this->Subjects).ArrayMax);
      bVar6 = IsInGameThread();
      if (bVar6) {
        local_148.Source._0_8_ = uVar4;
        local_148.Source._8_8_ = uVar5;
        local_148.SubjectName.Name = FVar1;
        TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>::
        Broadcast(&this->OnLiveLinkSubjectRemovedDelegate,&local_148);
      }
      else {
        local_108[0] = (code *)0x0;
        local_e0 = (undefined8 *)0x0;
        local_e0 = FMemory::Malloc(0x28,8);
        uStack_168 = (uint)uVar5;
        uStack_164 = SUB84(uVar5,4);
        *local_e0 = &
                    ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey___FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey___Z__00_00_Function_Private_Core_UE__6B_
        ;
        local_e0[1] = &this->OnLiveLinkSubjectRemovedDelegate;
        local_e0[2] = uVar4;
        *(uint *)(local_e0 + 3) = uStack_168;
        *(uint *)((longlong)local_e0 + 0x1c) = uStack_164;
        *(uint *)(local_e0 + 4) = FVar1.ComparisonIndex.Value.Value;
        *(uint *)((longlong)local_e0 + 0x24) = FVar1.Number;
        if (local_e0 + 1 != (longlong *)0x0) {
          local_108[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>'::__l7::<lambda_1>,void>
                         ::Call;
        }
        AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_108);
      }
      lVar12 = lVar12 + -0x38;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
    UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
    bVar6 = IsInGameThread();
    if (bVar6) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnLiveLinkSubjectsChangedDelegate);
    }
    else {
      local_b0 = 0;
      local_c8 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy______V_FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_0A__Function_Private_Core_UE__6B_
      ;
      local_d8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l7::<lambda_1>,void>
                    ::Call;
      local_c0 = &this->OnLiveLinkSubjectsChangedDelegate;
      AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_d8);
    }
  }
  bVar6 = false;
  UE::FRecursiveMutex::Lock(&this->SubjectsLock);
  uVar11 = (this->Sources).ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 6;
    bVar6 = false;
    do {
      uVar10 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < (this->Sources).ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (this->Sources).AllocatorInstance.Data + lVar12;
      if (((*(int *)(pFVar9 + 0xc) != -0x574db5a6 || *(int *)(pFVar9 + 4) != -0x33a6ee32) ||
          *(int *)(pFVar9 + 8) != 0x4af0635d) || *(int *)pFVar9 != 0x4ed2dc4e) {
        bVar6 = true;
        uVar8 = 0;
        if ((int)uVar11 < (this->Sources).ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (this->Sources).AllocatorInstance.Data + lVar12;
        uVar4 = *(undefined8 *)pFVar9;
        uVar5 = *(undefined8 *)(pFVar9 + 8);
        uVar8 = 0;
        if ((int)uVar11 < (this->Sources).ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<FLiveLinkCollectionSourceItem,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->Sources,uVar11);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,(ForAnyElementType *)this,(this->Sources).ArrayNum,
                   &(this->Sources).ArrayMax);
        bVar7 = IsInGameThread();
        if (bVar7) {
          local_158._0_8_ = uVar4;
          local_158._8_8_ = uVar5;
          TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>::Broadcast
                    (&this->OnLiveLinkSourceRemovedDelegate,&local_158);
        }
        else {
          local_a8[0] = (code *)0x0;
          local_80 = (undefined8 *)0x0;
          local_128 = &this->OnLiveLinkSourceRemovedDelegate;
          FStack_120._0_8_ = uVar4;
          FStack_120._8_8_ = uVar5;
          local_80 = FMemory::Malloc(0x20,8);
          *local_80 = &
                      ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFGuid___ZUFDefaultTSDelegateUserPolicy____AEAUFGuid___FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFGuid___ZUFDefaultTSDelegateUserPolicy____AEAUFGuid___Z__00_00_Function_Private_Core_UE__6B_
          ;
          local_80[1] = local_128;
          local_80[2] = FStack_120._0_8_;
          local_80[3] = uVar5;
          if (local_80 + 1 != (longlong *)0x0) {
            local_a8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>,FGuid_&>'::__l7::<lambda_1>,void>
                          ::Call;
          }
          AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_a8);
        }
      }
      lVar12 = lVar12 + -0x40;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
  if (bVar6) {
    bVar6 = IsInGameThread();
    if (bVar6) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnLiveLinkSourcesChangedDelegate);
      return;
    }
    local_50 = 0;
    local_68 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy______V_FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l7::<lambda_1>,void>
                  ::Call;
    local_60 = &this->OnLiveLinkSourcesChangedDelegate;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_78);
  }
  return;
}

// RemovePendingKill @ 14d079170

void __thiscall FLiveLinkSourceCollection::RemovePendingKill(FLiveLinkSourceCollection *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  FIdentityFunctor local_res8 [8];
  FScriptContainerElement *local_res10;
  FScriptContainerElement *local_res18;
  ForAnyElementType local_88;
  undefined8 local_80;
  FRecursiveMutex *local_78;
  FRecursiveMutex *pFStack_70;
  FGuid local_68;
  FLiveLinkSubjectKey local_58;
  
  local_78 = &this->SubjectsLock;
  pFStack_70 = &this->SourcesLock;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = CONCAT44(local_80._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_88,2,(int *)((longlong)&local_80 + 4));
  FVar11.Data = local_88.Data;
  *(FRecursiveMutex **)local_88.Data = local_78;
  *(FRecursiveMutex **)(local_88.Data + 8) = pFStack_70;
  iVar1 = (int)local_80;
  lVar6 = (longlong)(int)local_80;
  local_res18 = local_88.Data;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  AlgoImpl::IntroSortInternal<UE::FRecursiveMutex_*,int,FIdentityFunctor,TLess<void>_>
            ((FRecursiveMutex **)FVar11.Data,iVar1,local_res8[0],(TLess<void>)local_res8[0]);
  pFVar10 = FVar11.Data + lVar6 * 8;
  local_res10 = pFVar10;
  for (FVar9.Data = FVar11.Data; FVar9.Data != pFVar10; FVar9.Data = FVar9.Data + 8) {
    UE::FRecursiveMutex::Lock(*(FRecursiveMutex **)FVar9.Data);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  uVar12 = (this->Sources).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar6 = (longlong)(int)uVar12 << 6;
    do {
      uVar5 = 0;
      if ((int)uVar12 < (this->Sources).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (this->Sources).AllocatorInstance.Data + lVar6;
      if (pFVar10[0x38] != (FScriptContainerElement)0x0) {
        if (((*(int *)(pFVar10 + 8) == 0x4af0635d && *(int *)(pFVar10 + 0xc) == -0x574db5a6) &&
            *(int *)(pFVar10 + 4) == -0x33a6ee32) && *(int *)pFVar10 == 0x4ed2dc4e) {
          iVar1 = (this->Subjects).ArrayNum;
          pFVar7 = (this->Subjects).AllocatorInstance.Data;
          pFVar8 = pFVar7 + (longlong)iVar1 * 0x38;
          while( true ) {
            if ((this->Subjects).ArrayNum != iVar1) {
              local_res8[0] = (FIdentityFunctor)0x0;
              `TCheckedPointerIterator<FLiveLinkCollectionSubjectItem,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res8);
            }
            if (pFVar7 == pFVar8) break;
            if (((*(int *)(pFVar7 + 0xc) == -0x574db5a6 && *(int *)(pFVar7 + 4) == -0x33a6ee32) &&
                *(int *)(pFVar7 + 8) == 0x4af0635d) && *(int *)pFVar7 == 0x4ed2dc4e) {
              pFVar7[0x19] = (FScriptContainerElement)0x1;
            }
            pFVar7 = pFVar7 + 0x38;
          }
          pFVar10[0x38] = (FScriptContainerElement)0x0;
        }
        else {
          if ((*(longlong *)(pFVar10 + 0x18) == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          cVar4 = (**(code **)(**(longlong **)(pFVar10 + 0x18) + 0x30))();
          if (cVar4 != '\0') {
            local_68._0_8_ = *(undefined8 *)pFVar10;
            local_68._8_8_ = *(undefined8 *)(pFVar10 + 8);
            RemoveSource(this,&local_68);
          }
        }
      }
      lVar6 = lVar6 + -0x40;
      uVar12 = uVar12 - 1;
      pFVar10 = local_res10;
      FVar11.Data = local_res18;
    } while (-1 < (int)uVar12);
  }
  uVar12 = (this->Subjects).ArrayNum - 1;
  pFVar7 = FVar11.Data;
  if (-1 < (int)uVar12) {
    lVar6 = (longlong)(int)uVar12 * 0x38;
    do {
      uVar5 = 0;
      if ((int)uVar12 < (this->Subjects).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (this->Subjects).AllocatorInstance.Data;
      if (pFVar8[lVar6 + 0x19] != (FScriptContainerElement)0x0) {
        local_58.Source._0_8_ = *(undefined8 *)(pFVar8 + lVar6);
        local_58.Source._8_8_ = *(undefined8 *)(pFVar8 + lVar6 + 8);
        local_58.SubjectName.Name = *(FName *)(pFVar8 + lVar6 + 0x10);
        RemoveSubject(this,&local_58);
      }
      lVar6 = lVar6 + -0x38;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  for (; pFVar7 != pFVar10; pFVar7 = pFVar7 + 8) {
    UE::FRecursiveMutex::Unlock(*(FRecursiveMutex **)pFVar7);
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  return;
}

// RemoveSource @ 14d079920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkSourceCollection::RemoveSource(FLiveLinkSourceCollection *this,FGuid *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  uint uVar22;
  FIdentityFunctor local_res10;
  ForAnyElementType local_128;
  undefined8 local_120;
  int local_118;
  int local_114;
  uint local_110;
  longlong local_108;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  FRecursiveMutex *local_c0;
  FRecursiveMutex *pFStack_b8;
  FLiveLinkSubjectKey local_b0;
  code *local_98 [2];
  undefined **local_88;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_80;
  undefined8 local_70;
  code *local_68 [2];
  undefined **local_58;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_50;
  undefined8 local_40;
  
  if (((param_1->D != 0xa8b24a5a || param_1->B != 0xcc5911ce) || param_1->C != 0x4af0635d) ||
      param_1->A != 0x4ed2dc4e) {
    local_c0 = &this->SubjectsLock;
    pFStack_b8 = &this->SourcesLock;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = CONCAT44(local_120._4_4_,2);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,2,0,&local_128,2,(int *)((longlong)&local_120 + 4));
    FVar20.Data = local_128.Data;
    local_res10 = SUB81(param_1,0);
    *(FRecursiveMutex **)local_128.Data = local_c0;
    *(FRecursiveMutex **)(local_128.Data + 8) = pFStack_b8;
    iVar1 = (int)local_120;
    lVar16 = (longlong)(int)local_120;
    local_c8 = local_128.Data;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = 0;
    AlgoImpl::IntroSortInternal<UE::FRecursiveMutex_*,int,FIdentityFunctor,TLess<void>_>
              ((FRecursiveMutex **)FVar20.Data,iVar1,local_res10,(TLess<void>)local_res10);
    pFVar15 = FVar20.Data + lVar16 * 8;
    local_d0 = pFVar15;
    for (; FVar20.Data != pFVar15; FVar20.Data = FVar20.Data + 8) {
      UE::FRecursiveMutex::Lock(*(FRecursiveMutex **)FVar20.Data);
    }
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
    pFVar2 = (this->Sources).AllocatorInstance.Data;
    iVar1 = (this->Sources).ArrayNum;
    uVar4 = param_1->A;
    uVar5 = param_1->B;
    uVar6 = param_1->C;
    uVar7 = param_1->D;
    for (pFVar17 = pFVar2; pFVar18 = local_c8, local_f8 = uVar4, iStack_f4 = uVar5,
        iStack_f0 = uVar6, iStack_ec = uVar7, pFVar10 = local_c8,
        pFVar17 != pFVar2 + (longlong)iVar1 * 0x40; pFVar17 = pFVar17 + 0x40) {
      if (((uVar7 == *(int *)(pFVar17 + 0xc) && uVar6 == *(int *)(pFVar17 + 8)) &&
          uVar5 == *(int *)(pFVar17 + 4)) && uVar4 == *(int *)pFVar17) {
        lVar16 = (longlong)pFVar17 - (longlong)pFVar2 >> 6;
        uVar19 = (uint)lVar16;
        if (uVar19 != 0xffffffff) {
          local_110 = ~uVar19 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar19 < iVar1) {
            uVar14 = local_110;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_108 = (longlong)(int)uVar19;
          uVar19 = (this->Subjects).ArrayNum - 1;
          pFVar2 = (this->Sources).AllocatorInstance.Data + local_108 * 0x40;
          uVar8 = *(undefined8 *)pFVar2;
          uVar9 = *(undefined8 *)(pFVar2 + 8);
          local_e8 = uVar8;
          uStack_e0 = uVar9;
          if (-1 < (int)uVar19) {
            uStack_e0._4_4_ = (int)((ulonglong)uVar9 >> 0x20);
            iVar11 = uStack_e0._4_4_;
            uStack_e0._0_4_ = (int)uVar9;
            iVar1 = (int)uStack_e0;
            local_e8._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
            local_118 = local_e8._4_4_;
            local_e8._0_4_ = (int)uVar8;
            lVar21 = (longlong)(int)uVar19 * 0x38;
            bVar12 = false;
            local_114 = (int)local_e8;
            local_d8 = lVar16;
            do {
              uVar22 = ~uVar19 >> 0x1f;
              uVar14 = 0;
              if ((int)uVar19 < (this->Subjects).ArrayNum) {
                uVar14 = uVar22;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar15 = (this->Subjects).AllocatorInstance.Data + lVar21;
              if (((iVar11 == *(int *)(pFVar15 + 0xc) && iVar1 == *(int *)(pFVar15 + 8)) &&
                  local_118 == *(int *)(pFVar15 + 4)) && local_114 == *(int *)pFVar15) {
                bVar12 = true;
                uVar14 = 0;
                if ((int)uVar19 < (this->Subjects).ArrayNum) {
                  uVar14 = uVar22;
                }
                if ((uVar14 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar2 = (this->Subjects).AllocatorInstance.Data;
                pFVar15 = pFVar2 + lVar21;
                local_b0.Source._0_8_ = *(undefined8 *)pFVar15;
                local_b0.Source._8_8_ = *(undefined8 *)(pFVar15 + 8);
                local_b0.SubjectName.Name = *(FName *)(pFVar2 + lVar21 + 0x10);
                uVar14 = 0;
                if ((int)uVar19 < (this->Subjects).ArrayNum) {
                  uVar14 = uVar22;
                }
                if ((uVar14 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                TArray<FLiveLinkCollectionSubjectItem,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                          (&this->Subjects,uVar19);
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x38,8,&(this->Subjects).AllocatorInstance,(this->Subjects).ArrayNum,
                           &(this->Subjects).ArrayMax);
                BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>
                          (this,&this->OnLiveLinkSubjectRemovedDelegate,&local_b0);
              }
              pFVar15 = local_d0;
              lVar16 = local_d8;
              lVar21 = lVar21 + -0x38;
              uVar19 = uVar19 - 1;
            } while (-1 < (int)uVar19);
            if (bVar12) {
              bVar12 = IsInGameThread();
              if (bVar12) {
                TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                          (&this->OnLiveLinkSubjectsChangedDelegate);
              }
              else {
                local_70 = 0;
                local_88 = &
                           ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy______V_FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_0A__Function_Private_Core_UE__6B_
                ;
                local_98[0] = UE::Core::Private::Function::
                              TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l7::<lambda_1>,void>
                              ::Call;
                local_80 = &this->OnLiveLinkSubjectsChangedDelegate;
                AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_98);
              }
            }
          }
          uVar19 = 0;
          if ((int)lVar16 < (this->Sources).ArrayNum) {
            uVar19 = local_110;
          }
          if ((uVar19 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArray<FLiveLinkCollectionSourceItem,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&this->Sources,(int)lVar16);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,(ForAnyElementType *)this,(this->Sources).ArrayNum,
                     &(this->Sources).ArrayMax);
          BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>,FGuid_&>
                    (this,&this->OnLiveLinkSourceRemovedDelegate,param_1);
          bVar12 = IsInGameThread();
          if (bVar12) {
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                      (&this->OnLiveLinkSourcesChangedDelegate);
            pFVar18 = local_c8;
            pFVar10 = local_c8;
          }
          else {
            local_40 = 0;
            local_58 = &
                       ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy______V_FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_0A__Function_Private_Core_UE__6B_
            ;
            local_68[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l7::<lambda_1>,void>
                          ::Call;
            local_50 = &this->OnLiveLinkSourcesChangedDelegate;
            AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_68);
            pFVar18 = local_c8;
            pFVar10 = local_c8;
          }
        }
        break;
      }
    }
    for (; pFVar18 != pFVar15; pFVar18 = pFVar18 + 8) {
      UE::FRecursiveMutex::Unlock(*(FRecursiveMutex **)pFVar18);
    }
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
  }
  return;
}

// RemoveSubject @ 14d079f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkSourceCollection::RemoveSubject
          (FLiveLinkSourceCollection *this,FLiveLinkSubjectKey *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  code *local_58 [2];
  undefined **local_48;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_40;
  undefined8 local_30;
  
  UE::FRecursiveMutex::Lock(&this->SubjectsLock);
  pFVar2 = (this->Subjects).AllocatorInstance.Data;
  iVar1 = (this->Subjects).ArrayNum;
  uVar5 = (param_1->Source).A;
  uVar6 = (param_1->Source).B;
  uVar7 = (param_1->Source).C;
  uVar8 = (param_1->Source).D;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x38) {
    pFVar11 = pFVar2;
    do {
      if ((*(FName *)(pFVar11 + 0x10) == (param_1->SubjectName).Name) &&
         (((uVar8 == *(int *)(pFVar11 + 0xc) && uVar7 == *(int *)(pFVar11 + 8)) &&
          uVar6 == *(int *)(pFVar11 + 4)) && uVar5 == *(int *)pFVar11)) {
        uVar4 = (uint)(((longlong)pFVar11 - (longlong)pFVar2) / 0x38);
        if (uVar4 != 0xffffffff) {
          uVar10 = 0;
          if ((int)uVar4 < iVar1) {
            uVar10 = ~uVar4 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          TArray<FLiveLinkCollectionSubjectItem,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&this->Subjects,uVar4);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,&(this->Subjects).AllocatorInstance,(this->Subjects).ArrayNum,
                     &(this->Subjects).ArrayMax);
        }
        break;
      }
      pFVar11 = pFVar11 + 0x38;
    } while (pFVar11 != pFVar2 + (longlong)iVar1 * 0x38);
  }
  UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
  BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>
            (this,&this->OnLiveLinkSubjectRemovedDelegate,param_1);
  bVar9 = IsInGameThread();
  if (!bVar9) {
    local_30 = 0;
    local_48 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy______V_FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l7::<lambda_1>,void>
                  ::Call;
    local_40 = &this->OnLiveLinkSubjectsChangedDelegate;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_58);
    return;
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnLiveLinkSubjectsChangedDelegate);
  return;
}

// RequestShutdown @ 14d07a310

bool __thiscall FLiveLinkSourceCollection::RequestShutdown(FLiveLinkSourceCollection *this)

{
  int *piVar1;
  int iVar2;
  FLiveLinkCollectionSubjectItem *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  UE::FRecursiveMutex::Lock(&this->SubjectsLock);
  piVar1 = &(this->Subjects).ArrayMax;
  pFVar3 = (FLiveLinkCollectionSubjectItem *)(this->Subjects).AllocatorInstance.Data;
  iVar2 = (this->Subjects).ArrayNum;
  if ((this->Subjects).ArrayMax < 0) {
    DestructItems<FLiveLinkCollectionSubjectItem,int>(pFVar3,iVar2);
    (this->Subjects).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->Subjects).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FLiveLinkCollectionSubjectItem,int>(pFVar3,iVar2);
    (this->Subjects).ArrayNum = 0;
  }
  UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
  UE::FRecursiveMutex::Lock(&this->SourcesLock);
  uVar10 = (this->Sources).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 6;
    do {
      uVar9 = 0;
      if ((int)uVar10 < (this->Sources).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar4 = (this->Sources).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar4 + lVar11 + 0x18) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      cVar8 = (**(code **)(**(longlong **)(pFVar4 + lVar11 + 0x18) + 0x30))();
      if (cVar8 != '\0') {
        uVar9 = 0;
        if ((int)uVar10 < (this->Sources).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        TArray<FLiveLinkCollectionSourceItem,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->Sources,uVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,(ForAnyElementType *)this,(this->Sources).ArrayNum,
                   &(this->Sources).ArrayMax);
      }
      lVar11 = lVar11 + -0x40;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  iVar2 = (this->Sources).ArrayNum;
  UE::FRecursiveMutex::Unlock(&this->SourcesLock);
  return iVar2 == 0;
}

// SetSubjectEnabled @ 14d07f3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkSourceCollection::SetSubjectEnabled
          (FLiveLinkSourceCollection *this,FLiveLinkSubjectKey *param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  FLiveLinkCollectionSubjectItem *pFVar3;
  FLiveLinkSubjectKey *pFVar4;
  FLiveLinkSubjectKey *pFVar5;
  FName *pFVar6;
  FName *pFVar7;
  undefined1 local_res18 [8];
  FName local_res20;
  FName local_98;
  FName FStack_90;
  FName local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined1 local_78;
  undefined7 uStack_77;
  code *local_68 [5];
  undefined8 *local_40;
  
  if (param_2) {
    local_98.ComparisonIndex.Value = (param_1->Source).A;
    local_98.Number = (param_1->Source).B;
    FStack_90.ComparisonIndex.Value = (param_1->Source).C;
    FStack_90.Number = (param_1->Source).D;
    local_88 = (param_1->SubjectName).Name;
    pFVar3 = FindSubject(this,(FLiveLinkSubjectKey *)&local_98);
    if (pFVar3 != (FLiveLinkCollectionSubjectItem *)0x0) {
      UE::FRecursiveMutex::Lock(&this->SubjectsLock);
      pFVar3->bEnabled = true;
      BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&>
                (this,&this->OnLiveLinkSubjectEnabledDelegate,&pFVar3->Key,&pFVar3->bEnabled);
      iVar1 = (this->Subjects).ArrayNum;
      pFVar5 = (FLiveLinkSubjectKey *)(this->Subjects).AllocatorInstance.Data;
      pFVar4 = (FLiveLinkSubjectKey *)((longlong)pFVar5 + (longlong)iVar1 * 0x38);
      while( true ) {
        if ((this->Subjects).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FLiveLinkCollectionSubjectItem,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar5 == pFVar4) break;
        if ((((char)pFVar5[1].Source.A != '\0') &&
            ((pFVar5->SubjectName).Name == (param_1->SubjectName).Name)) &&
           ((((pFVar5->Source).D != (param_1->Source).D || (pFVar5->Source).B != (param_1->Source).B
             ) || (pFVar5->Source).C != (param_1->Source).C) ||
            (param_1->Source).A != (pFVar5->Source).A)) {
          *(bool *)&pFVar5[1].Source.A = false;
          BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&>
                    (this,&this->OnLiveLinkSubjectEnabledDelegate,pFVar5,(bool *)(pFVar5 + 1));
        }
        pFVar5 = (FLiveLinkSubjectKey *)&pFVar5[2].Source.C;
      }
      UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
    }
    return;
  }
  UE::FRecursiveMutex::Lock(&this->SubjectsLock);
  iVar1 = (this->Subjects).ArrayNum;
  pFVar6 = (FName *)(this->Subjects).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 7;
  do {
    while( true ) {
      if ((this->Subjects).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FLiveLinkCollectionSubjectItem,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar6 == pFVar7) {
        UE::FRecursiveMutex::Unlock(&this->SubjectsLock);
        return;
      }
      if (pFVar6[2] == (param_1->SubjectName).Name) break;
LAB_14d07f5ce:
      pFVar6 = pFVar6 + 7;
    }
    *(undefined1 *)&pFVar6[3].ComparisonIndex.Value = 0;
    bVar2 = IsInGameThread();
    FStack_90 = *pFVar6;
    local_88 = pFVar6[1];
    if (!bVar2) {
      local_78 = (undefined1)pFVar6[3].ComparisonIndex.Value;
      local_res20 = pFVar6[2];
      local_68[0] = (code *)0x0;
      local_40 = (undefined8 *)0x0;
      local_98 = (FName)&this->OnLiveLinkSubjectEnabledDelegate;
      local_40 = FMemory::Malloc(0x30,8);
      *local_40 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___N_ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEA_N_FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___N_ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEA_N_Z__00_00_Function_Private_Core_UE__6B_
      ;
      uStack_80 = (uint)local_res20.ComparisonIndex.Value;
      uStack_7c = local_res20.Number;
      *(FName *)(local_40 + 1) = local_98;
      *(FName *)(local_40 + 2) = FStack_90;
      *(uint *)(local_40 + 3) = local_88.ComparisonIndex.Value;
      *(uint *)((longlong)local_40 + 0x1c) = local_88.Number;
      *(uint *)(local_40 + 4) = uStack_80;
      *(uint *)((longlong)local_40 + 0x24) = uStack_7c;
      local_40[5] = CONCAT71(uStack_77,local_78);
      if ((FName *)(local_40 + 1) != (FName *)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&>'::__l7::<lambda_1>,void>
                      ::Call;
      }
      AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_68);
      goto LAB_14d07f5ce;
    }
    local_98 = FStack_90;
    FStack_90 = local_88;
    local_88 = pFVar6[2];
    TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>::
    Broadcast(&this->OnLiveLinkSubjectEnabledDelegate,(FLiveLinkSubjectKey *)&local_98,
              SUB41(pFVar6[3].ComparisonIndex.Value,0));
    pFVar6 = pFVar6 + 7;
  } while( true );
}

