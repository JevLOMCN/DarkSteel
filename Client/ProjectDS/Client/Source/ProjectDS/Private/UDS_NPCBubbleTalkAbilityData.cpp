// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b534c60

UClass * __cdecl UDS_NPCBubbleTalkAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCBubbleTalkAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCBubbleTalkAbilityData",
               &Z_Registration_Info_UClass_UDS_NPCBubbleTalkAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_NPCBubbleTalkAbilityData,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCBubbleTalkAbilityData>,
               InternalVTableHelperCtorCaller<UDS_NPCBubbleTalkAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCBubbleTalkAbilityData.InnerSingleton;
}

// UDS_NPCBubbleTalkAbilityData @ 14b538180

UDS_NPCBubbleTalkAbilityData * __thiscall
UDS_NPCBubbleTalkAbilityData::UDS_NPCBubbleTalkAbilityData
          (UDS_NPCBubbleTalkAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCBubbleTalkAbilityData__6B_;
  *(undefined8 *)&this->DataPropertyDelegate_BubbleTalkTrigger = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_BubbleTalkTrigger).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_BubbleTalkTrigger).field_0x10 = 0;
  *(undefined8 *)&this->RequestDelegate_BubbleTalk = 0;
  *(undefined8 *)&(this->RequestDelegate_BubbleTalk).field_0x8 = 0;
  *(undefined4 *)&(this->RequestDelegate_BubbleTalk).field_0x10 = 0;
  *(undefined8 *)&this->ExcuteBubbleTalkDelegate = 0;
  *(undefined8 *)&(this->ExcuteBubbleTalkDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ExcuteBubbleTalkDelegate).field_0x10 = 0;
  (this->NpcDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  (this->BubbleTalkHelpers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BubbleTalkHelpers).ArrayNum = 0;
  (this->BubbleTalkHelpers).ArrayMax = 0;
  this->BubbleTalkBaseID = 0;
  (this->CurrentBubbleTalkData).DataIndex = 0;
  (this->CurrentBubbleTalkData).KeepTime = 0;
  (this->CurrentBubbleTalkData).CoolTime = 0;
  (this->CurrentBubbleTalkData).StringDialogueID = 0;
  (this->CurrentBubbleTalkData).AnimationID = 0;
  (this->TalkAbleTime).Ticks = 0;
  (this->TimerHandle_BubbleTalk).Handle = 0;
  (this->BubbleTalkExcutedDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BubbleTalkExcutedDataList).ArrayNum = 0;
  (this->BubbleTalkExcutedDataList).ArrayMax = 0;
  return this;
}

// ~UDS_NPCBubbleTalkAbilityData @ 14b538e00

void __thiscall
UDS_NPCBubbleTalkAbilityData::~UDS_NPCBubbleTalkAbilityData(UDS_NPCBubbleTalkAbilityData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_NPCBubbleTalkAbilityData__6B_;
  pFVar1 = (this->BubbleTalkExcutedDataList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BubbleTalkHelpers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExcuteBubbleTalkDelegate);
  pvVar2 = *(void **)&(this->ExcuteBubbleTalkDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ExcuteBubbleTalkDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RequestDelegate_BubbleTalk);
  pvVar2 = *(void **)&(this->RequestDelegate_BubbleTalk).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RequestDelegate_BubbleTalk);
  pvVar2 = *(void **)&(this->DataPropertyDelegate_BubbleTalkTrigger).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_BubbleTalkTrigger);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b53a090

UClass * __cdecl UDS_NPCBubbleTalkAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCBubbleTalkAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCBubbleTalkAbilityData",
               &Z_Registration_Info_UClass_UDS_NPCBubbleTalkAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_NPCBubbleTalkAbilityData,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCBubbleTalkAbilityData>,
               InternalVTableHelperCtorCaller<UDS_NPCBubbleTalkAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCBubbleTalkAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCBubbleTalkAbilityData @ 14b53a940

void __cdecl UDS_NPCBubbleTalkAbilityData::StaticRegisterNativesUDS_NPCBubbleTalkAbilityData(void)

{
  return;
}

// UDS_NPCBubbleTalkAbilityData @ 14ba32f90

UDS_NPCBubbleTalkAbilityData * __thiscall
UDS_NPCBubbleTalkAbilityData::UDS_NPCBubbleTalkAbilityData
          (UDS_NPCBubbleTalkAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCBubbleTalkAbilityData__6B_;
  *(undefined8 *)&this->DataPropertyDelegate_BubbleTalkTrigger = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_BubbleTalkTrigger).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_BubbleTalkTrigger).field_0x10 = 0;
  *(undefined8 *)&this->RequestDelegate_BubbleTalk = 0;
  *(undefined8 *)&(this->RequestDelegate_BubbleTalk).field_0x8 = 0;
  *(undefined4 *)&(this->RequestDelegate_BubbleTalk).field_0x10 = 0;
  *(undefined8 *)&this->ExcuteBubbleTalkDelegate = 0;
  *(undefined8 *)&(this->ExcuteBubbleTalkDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ExcuteBubbleTalkDelegate).field_0x10 = 0;
  (this->NpcDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  (this->BubbleTalkHelpers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BubbleTalkHelpers).ArrayNum = 0;
  (this->BubbleTalkHelpers).ArrayMax = 0;
  this->BubbleTalkBaseID = 0;
  (this->CurrentBubbleTalkData).DataIndex = 0;
  (this->CurrentBubbleTalkData).KeepTime = 0;
  (this->CurrentBubbleTalkData).CoolTime = 0;
  (this->CurrentBubbleTalkData).StringDialogueID = 0;
  (this->CurrentBubbleTalkData).AnimationID = 0;
  (this->TalkAbleTime).Ticks = 0;
  (this->TimerHandle_BubbleTalk).Handle = 0;
  (this->BubbleTalkExcutedDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BubbleTalkExcutedDataList).ArrayNum = 0;
  (this->BubbleTalkExcutedDataList).ArrayMax = 0;
  return this;
}

// ActivateBubbleTalk @ 14ba34740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_NPCBubbleTalkAbilityData::ActivateBubbleTalk(UDS_NPCBubbleTalkAbilityData *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FDS_BubbleTalkBaseTableRow *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UDS_LogManager *pUVar10;
  TArray<FDS_BubbleTalkBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  UDS_BubbleTalkCondition *this_00;
  longlong *plVar14;
  ForAnyElementType FVar15;
  ulong64 uVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  undefined1 auStackY_378 [32];
  ForAnyElementType local_328;
  undefined8 local_320;
  undefined1 local_318 [8];
  TArray<FDS_BubbleTalkBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_310;
  undefined1 local_300 [16];
  UDS_NPCBubbleTalkAbilityData *local_2f0;
  longlong local_2b8;
  longlong local_2a8 [3];
  longlong *local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_378;
  bVar7 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (bVar7) {
    if ((this->BubbleTalkHelpers).ArrayNum != 0) {
      return;
    }
    pTVar11 = FDS_BubbleTalkBaseTableRow::GetAll(&local_310);
    local_328.Data = (FScriptContainerElement *)0x0;
    local_320 = 0;
    pFVar17 = (pTVar11->AllocatorInstance).Data;
    pFVar2 = pFVar17 + (longlong)pTVar11->ArrayNum * 8;
    for (; pFVar17 != pFVar2; pFVar17 = pFVar17 + 8) {
      lVar3 = *(longlong *)pFVar17;
      if ((lVar3 != 0) &&
         (pUVar12 = FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr),
         *(int *)(lVar3 + 0x20) == *(int *)&pUVar12[4].field_0x20)) {
        if ((local_328.Data <= pFVar17) &&
           ((pFVar17 < local_328.Data + (longlong)local_320._4_4_ * 8 &&
            (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (int)local_320;
        if ((int)local_320 == local_320._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_328,(int *)((longlong)&local_320 + 4));
        }
        local_320 = CONCAT44(local_320._4_4_,iVar8 + 1);
        *(longlong *)(local_328.Data + (longlong)iVar8 * 8) = *(longlong *)pFVar17;
      }
    }
    if (local_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.AllocatorInstance.Data);
    }
    iVar8 = (int)local_320;
    local_310.AllocatorInstance.Data = local_328.Data + (longlong)(int)local_320 * 8;
    FVar18.Data = local_328.Data;
    while( true ) {
      FVar6.Data = local_310.AllocatorInstance.Data;
      if ((int)local_320 != iVar8) {
        `TCheckedPointerIterator<FDS_BubbleTalkBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_318);
      }
      FVar15.Data = local_328.Data;
      if (FVar18.Data == FVar6.Data) goto LAB_14ba34b37;
      pFVar4 = *(FDS_BubbleTalkBaseTableRow **)FVar18.Data;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar13 = Z_Construct_UClass_UDS_BubbleTalkCondition_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)(local_300 + 8),pUVar13);
      local_2f0 = this;
      this_00 = (UDS_BubbleTalkCondition *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_300 + 8));
      if (local_2b8 != 0) {
        plVar14 = local_2a8;
        if (local_290 != (longlong *)0x0) {
          plVar14 = local_290;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (this_00 == (UDS_BubbleTalkCondition *)0x0) break;
      bVar7 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      uVar16 = 0;
      if (!bVar7) {
        pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        bVar7 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar12 + 4),
                           (void *)0x0);
        if (!bVar7) {
          pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar12 + 4));
          uVar16 = *(ulong64 *)(pUVar12 + 1);
        }
      }
      UDS_BubbleTalkCondition::Init(this_00,uVar16,pFVar4);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->BubbleTalkHelperChangedDelegate,this);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_BubbleTalkCondition,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_NPCBubbleTalkAbilityData>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_BubbleTalkCondition,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                  *)&this_00->BubbleTalkHelperChangedDelegate,
                 (UDS_NPCBubbleTalkAbilityData *)local_300,(pmf_6030cb4a)this);
      iVar9 = (this->BubbleTalkHelpers).ArrayNum;
      piVar1 = &(this->BubbleTalkHelpers).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->BubbleTalkHelpers).AllocatorInstance,piVar1);
      }
      (this->BubbleTalkHelpers).ArrayNum = iVar9 + 1;
      *(UDS_BubbleTalkCondition **)
       ((this->BubbleTalkHelpers).AllocatorInstance.Data + (longlong)iVar9 * 8) = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      if (this->BubbleTalkBaseID != this_00->BubbleTalkBaseID) {
        this->BubbleTalkBaseID = this_00->BubbleTalkBaseID;
        (this->CurrentBubbleTalkData).DataIndex = 0;
        (this->CurrentBubbleTalkData).KeepTime = 0;
        (this->CurrentBubbleTalkData).CoolTime = 0;
        (this->CurrentBubbleTalkData).StringDialogueID = 0;
        (this->CurrentBubbleTalkData).AnimationID = 0;
      }
      FVar18.Data = FVar18.Data + 8;
    }
    pUVar10 = UDS_LogManager::GetInst();
    FVar15.Data = local_328.Data;
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_NPCBubbleTalkAbilityData::ActivateBubbleTalk",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_158.Ptr,0x4b,L"bubbleTalkCondition is nullptr.");
      FVar15.Data = local_328.Data;
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
        FVar15.Data = local_328.Data;
      }
    }
  }
  else {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_NPCBubbleTalkAbilityData::ActivateBubbleTalk",0x30,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Warning,local_278.Ptr,0x31,L"NpcDataSet is not valid.");
    FVar15.Data = (FScriptContainerElement *)local_278._padding_;
  }
LAB_14ba34b37:
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  return;
}

// CanRequestBubbleTalk @ 14ba38070

bool __thiscall
UDS_NPCBubbleTalkAbilityData::CanRequestBubbleTalk(UDS_NPCBubbleTalkAbilityData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FDateTime FVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  FVar4 = UDS_TimeUtilManager::GetCurrentServerDateTime();
  if (*(longlong *)FVar4.Ticks < (this->TalkAbleTime).Ticks) {
LAB_14ba380dd:
    bVar3 = false;
  }
  else {
    pFVar5 = (this->BubbleTalkHelpers).AllocatorInstance.Data;
    iVar2 = (this->BubbleTalkHelpers).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->BubbleTalkHelpers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_BubbleTalkCondition>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) goto LAB_14ba380dd;
      bVar3 = UDS_BubbleTalkCondition::ConditionHelperCheck(*(UDS_BubbleTalkCondition **)pFVar5);
      if (bVar3) break;
      pFVar5 = pFVar5 + 8;
    }
    bVar3 = true;
  }
  return bVar3;
}

// CancelBubbleTalk @ 14ba38100

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

void __thiscall UDS_NPCBubbleTalkAbilityData::CancelBubbleTalk(UDS_NPCBubbleTalkAbilityData *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FTimerManager *this_00;
  FTimerData *pFVar3;
  UDS_BubbleTalkManager *this_01;
  UObject *pUVar4;
  ulong64 uVar5;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_BubbleTalkManager *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_140 = UDS_BubbleTalkManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_BubbleTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  uVar5 = 0;
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_BubbleTalkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar1 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar1) {
    if ((this->TimerHandle_BubbleTalk).Handle != 0) {
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar3 = FTimerManager::FindTimer(this_00,&this->TimerHandle_BubbleTalk);
      if (pFVar3 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (this_00,(FTimerHandle)(this->TimerHandle_BubbleTalk).Handle);
      }
      (this->TimerHandle_BubbleTalk).Handle = 0;
    }
    FDS_DataPropertyDelegate_bool_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->DataPropertyDelegate_BubbleTalkTrigger,false);
    this_01 = (UDS_BubbleTalkManager *)FWeakObjectPtr::Get(&local_148);
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar4 + 4),
                         (void *)0x0);
      if (!bVar1) {
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 4));
        uVar5 = *(ulong64 *)(pUVar4 + 1);
      }
    }
    UDS_BubbleTalkManager::CancelRunningBubbleTalk(this_01,uVar5);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCBubbleTalkAbilityData::CancelBubbleTalk",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x138,L"BubbleTalkManager is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// Created @ 14ba3c140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NPCBubbleTalkAbilityData::Created(UDS_NPCBubbleTalkAbilityData *this)

{
  bool bVar1;
  UObject *pUVar2;
  TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
    }
  }
  TVar3 = TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_148);
                    /* WARNING: Load size is inaccurate */
  (this->NpcDataSet).WeakPtr = *TVar3.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if ((!bVar1) && (pUVar4 = UDS_LogManager::GetInst(), pUVar4 != (UDS_LogManager *)0x0)) {
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCBubbleTalkAbilityData::Created",0x25,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x21,L"NpcDataSet is not valid.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// DeactivateBubbleTalk @ 14ba3c690

void __thiscall
UDS_NPCBubbleTalkAbilityData::DeactivateBubbleTalk(UDS_NPCBubbleTalkAbilityData *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->BubbleTalkHelpers).AllocatorInstance.Data;
  iVar3 = (this->BubbleTalkHelpers).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->BubbleTalkHelpers).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UDS_BubbleTalkCondition>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    UDS_BubbleTalkCondition::ConditionHelpersUnbinding(*(UDS_BubbleTalkCondition **)pFVar4);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(*(longlong *)pFVar4 + 0x28),
               this);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->BubbleTalkHelpers).ArrayMax;
  (this->BubbleTalkHelpers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->BubbleTalkHelpers).AllocatorInstance,0,piVar1);
  }
  return;
}

// ExecuteBubbleTalk @ 14ba3e340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_NPCBubbleTalkAbilityData::ExecuteBubbleTalk(UDS_NPCBubbleTalkAbilityData *this)

{
  FDateTime FVar1;
  FTimerManager *pFVar2;
  FTimerData *pFVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar6 [16];
  UDS_NPCBubbleTalkAbilityData *local_res8;
  FDelegateAllocation local_28;
  
  FVar1 = UDS_TimeUtilManager::GetCurrentServerDateTime();
  auVar6._0_8_ = (double)(this->CurrentBubbleTalkData).CoolTime * __real_416312d000000000 +
                 __real_3fe0000000000000;
  auVar6._8_8_ = 0;
  auVar6 = roundpd(extraout_XMM0,auVar6,1);
  (this->TalkAbleTime).Ticks = (longlong)auVar6._0_8_ + *(longlong *)FVar1.Ticks;
  if ((this->TimerHandle_BubbleTalk).Handle != 0) {
    pFVar2 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar3 = FTimerManager::FindTimer(pFVar2,&this->TimerHandle_BubbleTalk);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar2,(FTimerHandle)(this->TimerHandle_BubbleTalk).Handle);
    }
    (this->TimerHandle_BubbleTalk).Handle = 0;
  }
  local_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_28.DelegateSize = 0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NPCBubbleTalkAbilityData____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = CancelBubbleTalk;
  }
  pFVar2 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimer
            (pFVar2,&this->TimerHandle_BubbleTalk,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_28,
             (float)(this->CurrentBubbleTalkData).KeepTime,false,__real_bf800000);
  FDS_DataPropertyDelegate_bool_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->DataPropertyDelegate_BubbleTalkTrigger,true);
  if ((local_28.DelegateSize != 0) &&
     (local_28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_28.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_28,0,0,0x10);
    local_28.DelegateSize = 0;
  }
  if (local_28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_28.DelegateAllocator);
  }
  return;
}

// GetBubbleTalkGroupCoolTime @ 14ba452c0

int __thiscall
UDS_NPCBubbleTalkAbilityData::GetBubbleTalkGroupCoolTime(UDS_NPCBubbleTalkAbilityData *this)

{
  bool bVar1;
  FDS_BubbleTalkBaseTableRow *this_00;
  
  if (this->BubbleTalkBaseID != 0) {
    this_00 = FDS_BubbleTalkBaseTableRow::GetRef((longlong)this->BubbleTalkBaseID,true);
    bVar1 = FDS_BubbleTalkBaseTableRow::IsValid(this_00);
    if (bVar1) {
      return (int)this_00->BubbleTalkGroupCooltime;
    }
  }
  return 0;
}

// GetData @ 14ba49450

TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> __cdecl
UDS_NPCBubbleTalkAbilityData::GetData(ulong64 param_1)

{
  EDS_AbilityTagType local_res10 [24];
  
  UDS_AbilityDataSet::GetAbilityData<UDS_NPCBubbleTalkAbilityData>((ulong64 *)param_1,local_res10);
  return (TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetRandomBubbleTalkStringIdIndex @ 14ba4e7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UDS_NPCBubbleTalkAbilityData::GetRandomBubbleTalkStringIdIndex(UDS_NPCBubbleTalkAbilityData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FDS_BubbleTalkBaseTableRow *this_00;
  UDS_LogManager *pUVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->BubbleTalkBaseID != 0) {
    this_00 = FDS_BubbleTalkBaseTableRow::GetRef((longlong)this->BubbleTalkBaseID,true);
    bVar3 = FDS_BubbleTalkBaseTableRow::IsValid(this_00);
    if ((bVar3) && (this_00->BubbleTalkType == Random)) {
      pFVar8 = (this_00->BubbleTalkRate).AllocatorInstance.Data;
      iVar10 = 0;
      iVar4 = (this_00->BubbleTalkRate).ArrayNum;
      pFVar1 = pFVar8 + (longlong)iVar4 * 4;
      while( true ) {
        if ((this_00->BubbleTalkRate).ArrayNum != iVar4) {
          local_158[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_158);
        }
        if (pFVar8 == pFVar1) break;
        iVar10 = iVar10 + *(int *)pFVar8;
        pFVar8 = pFVar8 + 4;
      }
      iVar4 = FMath::RandRange(1,iVar10);
      uVar7 = 0;
      if ((this_00->BubbleTalkRate).ArrayNum < 1) {
        if (iVar4 < 1) {
          return -1;
        }
      }
      else {
        lVar9 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar7 < (this_00->BubbleTalkRate).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          iVar4 = iVar4 - *(int *)((this_00->BubbleTalkRate).AllocatorInstance.Data + lVar9);
          if (iVar4 < 1) {
            if ((int)uVar7 < 0) {
              return -1;
            }
            if ((this_00->ID_StringDialogue).ArrayNum <= (int)uVar7) {
              return -1;
            }
            return uVar7;
          }
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 4;
        } while ((int)uVar7 < (this_00->BubbleTalkRate).ArrayNum);
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_NPCBubbleTalkAbilityData::GetRandomBubbleTalkStringIdIndex",0x3e,
                   Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x12a,L"randomValue is invalid.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
  }
  return -1;
}

// OnChangedBubbleTalkHelper @ 14ba60120

void __thiscall
UDS_NPCBubbleTalkAbilityData::OnChangedBubbleTalkHelper
          (UDS_NPCBubbleTalkAbilityData *this,
          TWeakObjectPtr<UDS_BubbleTalkCondition,FWeakObjectPtr> param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  FDS_BubbleTalkBaseTableRow *this_00;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FWeakObjectPtr local_res10 [2];
  undefined1 local_res20 [8];
  FReadAccessScope local_58;
  
  local_res10[0] = param_1.WeakPtr;
  bVar6 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar6) {
    pUVar8 = FWeakObjectPtr::Get(local_res10);
    this_00 = FDS_BubbleTalkBaseTableRow::GetRef((longlong)*(int *)&pUVar8[2].field_0x8,true);
    bVar6 = FDS_BubbleTalkBaseTableRow::IsValid(this_00);
    if (bVar6) {
      pFVar10 = (this_00->BubbleTalkConditionType).AllocatorInstance.Data;
      iVar2 = (this_00->BubbleTalkConditionType).ArrayNum;
      pFVar1 = pFVar10 + (longlong)iVar2 * 4;
      while( true ) {
        if ((this_00->BubbleTalkConditionType).ArrayNum != iVar2) {
          `TCheckedPointerIterator<enum_EDS_BubbleTalkConditionType_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res20);
        }
        if (pFVar10 == pFVar1) break;
        iVar3 = *(int *)pFVar10;
        pFVar4 = (this->BubbleTalkExcutedDataList).AllocatorInstance.Data;
        iVar7 = (this->BubbleTalkExcutedDataList).ArrayNum;
        for (pFVar9 = pFVar4; pFVar9 != pFVar4 + (longlong)iVar7 * 4; pFVar9 = pFVar9 + 4) {
          if (*(int *)pFVar9 == iVar3) {
            if (-1 < (int)((longlong)pFVar9 - (longlong)pFVar4 >> 2)) {
              return;
            }
            break;
          }
        }
        if ((iVar3 == 0x138b) || (iVar3 == 0x138c)) {
          if (iVar7 == (this->BubbleTalkExcutedDataList).ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&(this->BubbleTalkExcutedDataList).AllocatorInstance,
                               &(this->BubbleTalkExcutedDataList).ArrayMax);
            (this->BubbleTalkExcutedDataList).ArrayNum = iVar7;
          }
          iVar7 = (this->BubbleTalkExcutedDataList).ArrayNum;
          (this->BubbleTalkExcutedDataList).ArrayNum = iVar7 + 1;
          *(int *)((this->BubbleTalkExcutedDataList).AllocatorInstance.Data + (longlong)iVar7 * 4) =
               iVar3;
        }
        pFVar10 = pFVar10 + 4;
      }
      if (param_2) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->RequestDelegate_BubbleTalk,&local_58);
        if ((*(int *)&(this->RequestDelegate_BubbleTalk).field_0x10 != 0) &&
           (plVar5 = *(longlong **)&(this->RequestDelegate_BubbleTalk).field_0x8,
           plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x68))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_58);
      }
    }
  }
  return;
}

// SetBubbleTalkBase @ 14ba6a810

void __thiscall
UDS_NPCBubbleTalkAbilityData::SetBubbleTalkBase(UDS_NPCBubbleTalkAbilityData *this,int param_1)

{
  if (this->BubbleTalkBaseID != param_1) {
    this->BubbleTalkBaseID = param_1;
    (this->CurrentBubbleTalkData).DataIndex = 0;
    (this->CurrentBubbleTalkData).KeepTime = 0;
    (this->CurrentBubbleTalkData).CoolTime = 0;
    (this->CurrentBubbleTalkData).StringDialogueID = 0;
    (this->CurrentBubbleTalkData).AnimationID = 0;
  }
  return;
}

// UpdateNextBubbleTalk @ 14ba7f780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_NPCBubbleTalkAbilityData::UpdateNextBubbleTalk(UDS_NPCBubbleTalkAbilityData *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  FDS_BubbleTalkBaseTableRow *this_00;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FDateTime FVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  undefined1 auVar12 [16];
  undefined1 auStackY_3c8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  if (this->BubbleTalkBaseID == 0) {
    return false;
  }
  this_00 = FDS_BubbleTalkBaseTableRow::GetRef((longlong)this->BubbleTalkBaseID,true);
  bVar2 = FDS_BubbleTalkBaseTableRow::IsValid(this_00);
  if (!bVar2) {
    return false;
  }
  if (this_00->BubbleTalkType == Random) {
    iVar4 = GetRandomBubbleTalkStringIdIndex(this);
    (this->CurrentBubbleTalkData).DataIndex = iVar4;
    if (iVar4 < 0) {
      return false;
    }
LAB_14ba7f813:
    if ((this_00->ID_StringDialogue).ArrayNum <= iVar4) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"UDS_NPCBubbleTalkAbilityData::UpdateNextBubbleTalk",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_378.Ptr,0x93,L"bubbleTalkBaseTableRow has not data: (%d)");
      pvVar11 = (void *)local_378._padding_;
      goto LAB_14ba7f894;
    }
  }
  else {
    iVar4 = (this->CurrentBubbleTalkData).DataIndex;
    if ((iVar4 < 0) || ((this_00->ID_StringDialogue).ArrayNum <= iVar4)) {
      (this->CurrentBubbleTalkData).DataIndex = 0;
      iVar4 = 0;
      goto LAB_14ba7f813;
    }
  }
  if (iVar4 < (this_00->BubbleTalkKeepTime).ArrayNum) {
    if (iVar4 < (this_00->BubbleTalkAnimation).ArrayNum) {
      if ((this_00->BubbleTalkType == Random) ||
         ((this_00->BubbleTalkType == Sequential && (iVar4 == 0)))) {
        iVar4 = FMath::RandRange(1,100);
        pUVar7 = FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
        if (*(int *)(pUVar7 + 5) <= iVar4) {
          (this->CurrentBubbleTalkData).DataIndex = 0;
          (this->CurrentBubbleTalkData).KeepTime = 0;
          (this->CurrentBubbleTalkData).CoolTime = 0;
          (this->CurrentBubbleTalkData).StringDialogueID = 0;
          (this->CurrentBubbleTalkData).AnimationID = 0;
          FVar8 = UDS_TimeUtilManager::GetCurrentServerDateTime();
          auVar12._0_8_ =
               (double)(this_00->BubbleTalkGroupCooltime * __real_4b189680 + __real_3f000000);
          auVar12._8_8_ = 0;
          auVar12 = roundpd(auVar12,auVar12,1);
          (this->TalkAbleTime).Ticks = (longlong)auVar12._0_8_ + *(longlong *)FVar8.Ticks;
          return false;
        }
      }
      uVar5 = (this->CurrentBubbleTalkData).DataIndex;
      uVar9 = 0;
      uVar10 = uVar9;
      if ((int)uVar5 < (this_00->ID_StringDialogue).ArrayNum) {
        uVar10 = ~uVar5 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar10 = (this->CurrentBubbleTalkData).DataIndex;
      (this->CurrentBubbleTalkData).StringDialogueID =
           *(long64 *)
            ((this_00->ID_StringDialogue).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
      uVar5 = uVar9;
      if ((int)uVar10 < (this_00->BubbleTalkKeepTime).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar5 = (this->CurrentBubbleTalkData).DataIndex;
      (this->CurrentBubbleTalkData).KeepTime =
           (int)*(float *)((this_00->BubbleTalkKeepTime).AllocatorInstance.Data +
                          (longlong)(int)uVar10 * 4);
      (this->CurrentBubbleTalkData).CoolTime = (int)this_00->BubbleTalkGroupCooltime;
      if ((int)uVar5 < (this_00->BubbleTalkAnimation).ArrayNum) {
        uVar9 = ~uVar5 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      (this->CurrentBubbleTalkData).AnimationID =
           *(int *)((this_00->BubbleTalkAnimation).AllocatorInstance.Data + (longlong)(int)uVar5 * 4
                   );
      if (this_00->BubbleTalkType == Sequential) {
        (this->CurrentBubbleTalkData).DataIndex = (this->CurrentBubbleTalkData).DataIndex + 1;
      }
      return true;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCBubbleTalkAbilityData::UpdateNextBubbleTalk",0x32,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_138.Ptr,0x9f,L"BubbleTalkAnimation has not data: (%d)");
    pvVar11 = (void *)local_138._padding_;
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"UDS_NPCBubbleTalkAbilityData::UpdateNextBubbleTalk",0x32,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_258.Ptr,0x99,L"BubbleTalkKeepTime has not data: (%d)");
    pvVar11 = (void *)local_258._padding_;
  }
LAB_14ba7f894:
  if (pvVar11 != (void *)0x0) {
    FMemory::Free(pvVar11);
  }
  return false;
}

