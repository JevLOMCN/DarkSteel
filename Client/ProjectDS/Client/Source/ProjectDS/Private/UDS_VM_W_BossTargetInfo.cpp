// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// SetTargetIconID_WrapperImpl @ 14b70b910

void __cdecl UDS_VM_W_BossTargetInfo::SetTargetIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetTargetIconID(param_1,*(int *)param_2);
  return;
}

// SetTargetNameColor_WrapperImpl @ 14b70b920

void __cdecl UDS_VM_W_BossTargetInfo::SetTargetNameColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0xf0)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0xf4))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0xf8))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0xfc))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::TargetNameColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::TargetNameColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0xf0) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xf8) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b70b930

UClass * __cdecl UDS_VM_W_BossTargetInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_BossTargetInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_BossTargetInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_BossTargetInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_BossTargetInfo,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_BossTargetInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_BossTargetInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_BossTargetInfo.InnerSingleton;
}

// UDS_VM_W_BossTargetInfo @ 14b711060

UDS_VM_W_BossTargetInfo * __thiscall
UDS_VM_W_BossTargetInfo::UDS_VM_W_BossTargetInfo
          (UDS_VM_W_BossTargetInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Visibility_GroggyPoint = Collapsed;
  this->Visibility_GroggyPoint_SkillUse = Collapsed;
  this->Visibility_GroggyPoint_Abnormal = Collapsed;
  this->Visibility_GroggyPoint_HitDamage = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_BossTargetInfo__6B_;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->VM_StatusInfo_HP).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_StatusInfo_Shield).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_StatusInfo_GroggyPoint).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_CharBuffData).field0_0x0.DebugPtr = (UDS_VM_CharBuffData *)0x0;
  (this->VM_CharInfoData).field0_0x0.DebugPtr = (UDS_VM_CharInfoData *)0x0;
  this->TargetNameStyleID = 0;
  this->CurrentBossEntityID = 0;
  this->DefaultBroadCastRange = 0.0;
  (this->BossEntityIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BossEntityIDList).ArrayNum = 0;
  (this->BossEntityIDList).ArrayMax = 0;
  this->TargetInfoVisibility = SelfHitTestInvisible;
  return this;
}

// UDS_VM_W_BossTargetInfo @ 14b711110

UDS_VM_W_BossTargetInfo * __thiscall
UDS_VM_W_BossTargetInfo::UDS_VM_W_BossTargetInfo
          (UDS_VM_W_BossTargetInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Visibility_GroggyPoint = Collapsed;
  this->Visibility_GroggyPoint_SkillUse = Collapsed;
  this->Visibility_GroggyPoint_Abnormal = Collapsed;
  this->Visibility_GroggyPoint_HitDamage = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_BossTargetInfo__6B_;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->VM_StatusInfo_HP).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_StatusInfo_Shield).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_StatusInfo_GroggyPoint).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_CharBuffData).field0_0x0.DebugPtr = (UDS_VM_CharBuffData *)0x0;
  (this->VM_CharInfoData).field0_0x0.DebugPtr = (UDS_VM_CharInfoData *)0x0;
  this->TargetNameStyleID = 0;
  this->CurrentBossEntityID = 0;
  this->DefaultBroadCastRange = 0.0;
  (this->BossEntityIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BossEntityIDList).ArrayNum = 0;
  (this->BossEntityIDList).ArrayMax = 0;
  this->TargetInfoVisibility = SelfHitTestInvisible;
  return this;
}

// ~UDS_VM_W_BossTargetInfo @ 14b713320

void __thiscall UDS_VM_W_BossTargetInfo::~UDS_VM_W_BossTargetInfo(UDS_VM_W_BossTargetInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_BossTargetInfo__6B_;
  pFVar1 = (this->BossEntityIDList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716a60

IClassDescriptor * __thiscall
UDS_VM_W_BossTargetInfo::GetFieldNotificationDescriptor(UDS_VM_W_BossTargetInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_BossTargetInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b717ad0

UClass * __cdecl UDS_VM_W_BossTargetInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_BossTargetInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_BossTargetInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_BossTargetInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_BossTargetInfo,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_BossTargetInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_BossTargetInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_BossTargetInfo.InnerSingleton;
}

// GetTickableTickType @ 14b7187b0

ETickableTickType __thiscall
UDS_VM_W_BossTargetInfo::GetTickableTickType(UDS_VM_W_BossTargetInfo *this)

{
  return Conditional;
}

// IsUpdate @ 14b718880

bool __thiscall UDS_VM_W_BossTargetInfo::IsUpdate(UDS_VM_W_BossTargetInfo *this)

{
  return this->CurrentBossEntityID != 0;
}

// StaticRegisterNativesUDS_VM_W_BossTargetInfo @ 14b718a50

void __cdecl UDS_VM_W_BossTargetInfo::StaticRegisterNativesUDS_VM_W_BossTargetInfo(void)

{
  return;
}

// BindNameTagData @ 14bf9d050

void __thiscall UDS_VM_W_BossTargetInfo::BindNameTagData(UDS_VM_W_BossTargetInfo *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  FName local_48;
  int local_40;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->CharInfoData).WeakPtr);
  if (bVar2) {
    UDS_NameTagDataAsset::GetInst();
    bVar2 = FWeakObjectPtr::IsValid(local_res8);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8200601402959987019>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_BossTargetInfo.cpp"
                         ,0x14b,"pNametagAsset.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(local_res8);
      local_48 = FFieldNotificationClassDescriptor::TargetNameStyleID.FieldName;
      if (this->TargetNameStyleID != *(int *)&pUVar3[10].field_0x8) {
        local_40 = FFieldNotificationClassDescriptor::TargetNameStyleID.BitNumber;
        this->TargetNameStyleID = *(int *)&pUVar3[10].field_0x8;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
      }
    }
  }
  return;
}

// HideTargetInfo @ 14bfada60

void __thiscall UDS_VM_W_BossTargetInfo::HideTargetInfo(UDS_VM_W_BossTargetInfo *this)

{
  UDS_VM_StatusInfo *this_00;
  FName local_18;
  int local_10;
  
  if (this->TargetInfoVisibility != Collapsed) {
    this_00 = (this->VM_StatusInfo_HP).field0_0x0.DebugPtr;
    if (this_00 != (UDS_VM_StatusInfo *)0x0) {
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this_00,Collapsed);
    }
    if ((this->VM_StatusInfo_Shield).field0_0x0.DebugPtr != (UDS_VM_StatusInfo *)0x0) {
      UDS_ViewModelBase::SetVisibility
                ((UDS_ViewModelBase *)(this->VM_StatusInfo_HP).field0_0x0.DebugPtr,Collapsed);
    }
    local_10 = FFieldNotificationClassDescriptor::TargetInfoVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::TargetInfoVisibility.FieldName;
    if (this->TargetInfoVisibility != Collapsed) {
      this->TargetInfoVisibility = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// InitViewModel @ 14bfb05a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_W_BossTargetInfo::InitViewModel(UDS_VM_W_BossTargetInfo *this)

{
  int *piVar1;
  undefined8 *puVar2;
  double dVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  UDS_VM_StatusInfo *pUVar7;
  UDS_VM_CharInfoData *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UDS_VM_CharBuffData *pUVar11;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar12;
  FDS_EntityBase *pFVar13;
  UObject *pUVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  FWeakObjectPtr local_f0;
  undefined1 local_e8 [24];
  ulonglong local_d0;
  FWeakObjectPtr local_c8;
  longlong lStack_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StatusInfo>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_StatusInfo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->VM_StatusInfo_HP).field0_0x0.DebugPtr = pUVar7;
  pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StatusInfo>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_StatusInfo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->VM_StatusInfo_Shield).field0_0x0.DebugPtr = pUVar7;
  pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StatusInfo>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_StatusInfo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->VM_StatusInfo_GroggyPoint).field0_0x0.DebugPtr = pUVar7;
  pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CharInfoData>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_VM_CharInfoData *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->VM_CharInfoData).field0_0x0.DebugPtr = pUVar8;
  local_f0.ObjectIndex = 0;
  local_f0.ObjectSerialNumber = 0;
  pUVar9 = Z_Construct_UClass_UDS_VM_CharBuffData_NoRegister();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar10 = Z_Construct_UClass_UDS_VM_CharBuffData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar10,pUVar9);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar9);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_Transient;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  pUVar11 = (UDS_VM_CharBuffData *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar15 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if (pUVar11 != (UDS_VM_CharBuffData *)0x0) {
    *(undefined1 *)((longlong)&pUVar11->_padding_ + 4) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UDS_VM_CharBuffData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->VM_CharBuffData).field0_0x0.DebugPtr = pUVar11;
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 != (UDS_EntityManager *)0x0) {
    local_e8._8_4_ = 0;
    local_e8._0_8_ = OnSpawnEntity;
    lStack_c0 = (ulonglong)(uint)local_e8._12_4_ << 0x20;
    local_c8 = (FWeakObjectPtr)OnSpawnEntity;
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_BossTargetInfo>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&this_00->OnSpawnEntityEvent,(UDS_VM_W_BossTargetInfo *)local_e8,
               (pmf_9e1e2b6b *)this);
    local_e8._8_4_ = 0;
    local_e8._0_8_ = OnRemoveEntity;
    lStack_c0 = (ulonglong)(uint)local_e8._12_4_ << 0x20;
    local_c8 = (FWeakObjectPtr)OnRemoveEntity;
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_BossTargetInfo>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&this_00->OnRemoveEntityEvent,(UDS_VM_W_BossTargetInfo *)local_e8,
               (pmf_9e1e2b6b *)this);
  }
  dVar3 = DS_CommonDataHelper::DefaultBroadCastRange();
  this->DefaultBroadCastRange = dVar3;
  HideTargetInfo(this);
  local_e8._16_8_ = (undefined8 *)0x0;
  local_d0 = 0;
  UDS_EntityManager::GetAllEntityList
            (this_00,(TArray<AActor_*,TSizedDefaultAllocator<32>_> *)(local_e8 + 0x10));
  iVar4 = (int)local_d0;
  uVar16 = (ulonglong)(int)local_d0;
  puVar2 = (undefined8 *)(local_e8._16_8_ + uVar16 * 8);
  puVar17 = (undefined8 *)local_e8._16_8_;
  while( true ) {
    if ((int)uVar16 != iVar4) {
      `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (puVar17 == puVar2) break;
    pUVar14 = (UObject *)*puVar17;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    local_f0.ObjectIndex = 0;
    local_f0.ObjectSerialNumber = 0;
    local_e8._0_8_ = pUVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)local_e8);
    pFVar12 = FDS_EntityBase::GetEntityBaseFromActor
                        ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_f0);
    if (pFVar12 != (FDS_EntityBase *)0x0) {
      pFVar13 = FDS_EntityBase::GetEntityBase(&pFVar12->EntityID);
      if ((pFVar13 != (FDS_EntityBase *)0x0) && (pFVar13->EntityType == NPC)) {
        UDS_NPCBattleData::GetData((ulong64)&local_c8);
        bVar5 = FWeakObjectPtr::IsValid(&local_c8);
        if ((bVar5) && (pUVar14 = FWeakObjectPtr::Get(&local_c8), 3 < (byte)pUVar14[2].field_0x9)) {
          iVar6 = (this->BossEntityIDList).ArrayNum;
          piVar1 = &(this->BossEntityIDList).ArrayMax;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(this->BossEntityIDList).AllocatorInstance,piVar1);
          }
          (this->BossEntityIDList).ArrayNum = iVar6 + 1;
          *(ulong64 *)((this->BossEntityIDList).AllocatorInstance.Data + (longlong)iVar6 * 8) =
               pFVar12->EntityID;
          RefreshCurrentBossTarget(this);
        }
      }
    }
    uVar16 = local_d0 & 0xffffffff;
    puVar17 = puVar17 + 1;
  }
  if ((undefined8 *)local_e8._16_8_ != (undefined8 *)0x0) {
    FMemory::Free((void *)local_e8._16_8_);
  }
  return;
}

// OnCloseInit @ 14bfbbe90

void __thiscall UDS_VM_W_BossTargetInfo::OnCloseInit(UDS_VM_W_BossTargetInfo *this)

{
  UDS_EntityManager *pUVar1;
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  pUVar1 = UDS_EntityManager::GetInst();
  if (pUVar1 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSpawnEntityEvent,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemoveEntityEvent,
               this);
  }
  return;
}

// OnRemoveEntity @ 14bfc09d0

void __thiscall
UDS_VM_W_BossTargetInfo::OnRemoveEntity(UDS_VM_W_BossTargetInfo *this,ulong64 *param_1)

{
  int iVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_MovementCore *pUVar6;
  TVector<double> *pTVar7;
  TVector<double> *pTVar8;
  FScriptContainerElement *pFVar9;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar10;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar11;
  TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> TVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  int iVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  float fVar26;
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  uint uStackX_20;
  longlong lStack_e8;
  ForAnyElementType FStack_e0;
  undefined8 uStack_d8;
  FWeakObjectPtr FStack_d0;
  FWeakObjectPtr FStack_c8;
  FScriptContainerElement *pFStack_c0;
  ulong64 uStack_b8;
  FScriptContainerElement *pFStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  TVector<double> TStack_90;
  TVector<double> aTStack_78 [2];
  
  if ((this->BossEntityIDList).ArrayNum != 0) {
    uStack_b8 = 0;
    FStack_e0.Data = (FScriptContainerElement *)0x0;
    uStack_d8 = 0;
    FDS_EntityBase::GetMainPlayerEntityID(true);
    UDS_MovementCore::GetMovementCore((ulong64)&FStack_c8);
    bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&FStack_c8,(void *)0x0);
    if (!bVar4) {
      pFVar18 = (this->BossEntityIDList).AllocatorInstance.Data;
      iVar1 = (this->BossEntityIDList).ArrayNum;
      pFVar16 = pFVar18 + (longlong)iVar1 * 8;
      fVar26 = __real_46c80000;
      while( true ) {
        if ((this->BossEntityIDList).ArrayNum != iVar1) {
          auStackX_10[0] = 0;
          `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStackX_10);
        }
        if (pFVar18 == pFVar16) break;
        uVar2 = *(ulong64 *)pFVar18;
        UDS_MovementCore::GetMovementCore((ulong64)&FStack_d0);
        bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&FStack_d0,(void *)0x0
                          );
        if (bVar4) {
          iVar5 = (uint)uStack_d8;
          if ((uint)uStack_d8 == uStack_d8._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&FStack_e0,(int *)((longlong)&uStack_d8 + 4));
          }
          pFVar18 = pFVar18 + 8;
          uStack_d8 = CONCAT44(uStack_d8._4_4_,iVar5 + 1);
          *(ulong64 *)(FStack_e0.Data + (longlong)iVar5 * 8) = uVar2;
        }
        else {
          pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&FStack_d0);
          pTVar7 = UDS_MovementCore::GetActorFootLocation(pUVar6,&TStack_90);
          pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&FStack_c8);
          pTVar8 = UDS_MovementCore::GetActorFootLocation(pUVar6,aTStack_78);
          dVar25 = (pTVar7->field0_0x0)._s_0.Y - (pTVar8->field0_0x0)._s_0.Y;
          dVar24 = (pTVar7->field0_0x0)._s_0.X - (pTVar8->field0_0x0)._s_0.X;
          dVar21 = (pTVar7->field0_0x0)._s_0.Z - (pTVar8->field0_0x0)._s_0.Z;
          auVar22._0_8_ = dVar21 * dVar21;
          auVar22._8_8_ = 0;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = dVar25 * dVar25 + dVar24 * dVar24 + auVar22._0_8_;
          auVar23 = sqrtpd(auVar22,auVar23);
          if ((float)auVar23._0_8_ < fVar26) {
            fVar26 = (float)auVar23._0_8_;
            uStack_b8 = uVar2;
          }
          pFVar18 = pFVar18 + 8;
        }
      }
      uVar13 = (ulonglong)(int)(uint)uStack_d8;
      uStackX_20 = (uint)uStack_d8;
      pFVar16 = FStack_e0.Data + uVar13 * 8;
      FVar19.Data = FStack_e0.Data;
      pFStack_b0 = pFVar16;
      while( true ) {
        pFStack_c0 = FVar19.Data;
        if ((uint)uStack_d8 != (int)uVar13) {
          auStackX_18[0] = 0;
          `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStackX_18);
        }
        if (FVar19.Data == pFVar16) break;
        pFVar18 = (this->BossEntityIDList).AllocatorInstance.Data;
        lStack_e8 = *(longlong *)FVar19.Data;
        pFVar9 = pFVar18;
        if (pFVar18 == pFVar18 + (longlong)(this->BossEntityIDList).ArrayNum * 8) {
LAB_14bfd45b4:
          uVar13 = (ulonglong)uStackX_20;
          FVar19.Data = FVar19.Data + 8;
        }
        else {
          do {
            if (*(longlong *)pFVar9 == lStack_e8) {
              if (((pFVar18 <= (FScriptContainerElement *)&lStack_e8) &&
                  ((FScriptContainerElement *)&lStack_e8 <
                   pFVar18 + (longlong)(this->BossEntityIDList).ArrayMax * 8)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar1 = (this->BossEntityIDList).ArrayNum;
              if (iVar1 != 0) {
                pFVar16 = (this->BossEntityIDList).AllocatorInstance.Data;
                iVar20 = 0;
                lVar15 = 0;
                bVar4 = *(longlong *)pFVar16 != lStack_e8;
                lVar14 = lStack_e8;
                iVar5 = 0;
                do {
                  iVar17 = iVar5;
                  do {
                    lVar15 = lVar15 + 1;
                    iVar17 = iVar17 + 1;
                    if (iVar1 <= lVar15) break;
                  } while (bVar4 == (*(longlong *)(pFVar16 + lVar15 * 8) != lVar14));
                  if (bVar4 != false) {
                    if (iVar20 != iVar5) {
                      memmove(pFVar16 + (longlong)iVar20 * 8,pFVar16 + (longlong)iVar5 * 8,
                              (longlong)(iVar17 - iVar5) << 3);
                      lVar14 = lStack_e8;
                    }
                    iVar20 = iVar20 + (iVar17 - iVar5);
                  }
                  bVar4 = (bool)(bVar4 ^ 1);
                  iVar5 = iVar17;
                } while (lVar15 < iVar1);
                (this->BossEntityIDList).ArrayNum = iVar20;
                pFVar16 = pFStack_b0;
                FVar19.Data = pFStack_c0;
              }
              goto LAB_14bfd45b4;
            }
            pFVar9 = pFVar9 + 8;
          } while (pFVar9 != pFVar18 + (longlong)(this->BossEntityIDList).ArrayNum * 8);
          uVar13 = (ulonglong)uStackX_20;
          FVar19.Data = FVar19.Data + 8;
        }
      }
      if (this->CurrentBossEntityID != uStack_b8) {
        this->CurrentBossEntityID = uStack_b8;
        if (uStack_b8 == 0) {
          (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
          (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
          (this->CharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
          HideTargetInfo(this);
        }
        else {
          TVar10 = UDS_CharInfoData::GetData((ulong64)auStack_a8);
                    /* WARNING: Load size is inaccurate */
          (this->CharInfoData).WeakPtr = *TVar10.WeakPtr;
          TVar11 = UDS_CharStatusData::GetData((ulong64)auStack_a0);
                    /* WARNING: Load size is inaccurate */
          (this->CharStatusData).WeakPtr = *TVar11.WeakPtr;
          TVar12 = UDS_CharBuffData::GetData((ulong64)auStack_98);
                    /* WARNING: Load size is inaccurate */
          (this->CharBuffData).WeakPtr = *TVar12.WeakPtr;
          BindNameTagData(this);
          UpdateCharStatusInfo(this);
          UpdateCharInfoData(this);
          UpdateCharBuffData(this);
        }
      }
    }
    if (FStack_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_e0.Data);
    }
  }
  return;
}

// OnSetViewModel @ 14bfc7320

void __thiscall
UDS_VM_W_BossTargetInfo::OnSetViewModel
          (UDS_VM_W_BossTargetInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSpawnEntity @ 14bfcfad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_W_BossTargetInfo::OnSpawnEntity(UDS_VM_W_BossTargetInfo *this,ulong64 *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res18 [2];
  
  pFVar4 = FDS_EntityBase::GetEntityBase(param_1);
  if ((pFVar4 != (FDS_EntityBase *)0x0) && (pFVar4->EntityType == NPC)) {
    UDS_NPCBattleData::GetData((ulong64)local_res18);
    bVar2 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(local_res18);
      if (3 < (byte)pUVar5[2].field_0x9) {
        iVar3 = (this->BossEntityIDList).ArrayNum;
        piVar1 = &(this->BossEntityIDList).ArrayMax;
        if (iVar3 == *piVar1) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->BossEntityIDList).AllocatorInstance,piVar1);
        }
        (this->BossEntityIDList).ArrayNum = iVar3 + 1;
        *(ulong64 *)((this->BossEntityIDList).AllocatorInstance.Data + (longlong)iVar3 * 8) =
             *param_1;
        RefreshCurrentBossTarget(this);
      }
    }
  }
  return;
}

// OnUpdate @ 14bfd0b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_W_BossTargetInfo::OnUpdate(UDS_VM_W_BossTargetInfo *this,float param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  FDS_EntityBase *pFVar3;
  float local_res8 [2];
  FName local_18;
  int local_10;
  
  RefreshCurrentBossTarget(this);
  if (((this->CurrentBossEntityID != 0) &&
      (pFVar2 = FDS_EntityBase::GetEntityBase(&this->CurrentBossEntityID),
      pFVar2 != (FDS_EntityBase *)0x0)) &&
     (pFVar3 = FDS_EntityBase::GetMainPlayerEntityBase(true), pFVar3 != (FDS_EntityBase *)0x0)) {
    local_res8[0] = (float)this->DefaultBroadCastRange;
    bVar1 = DS_Util::IsCloseDist(pFVar3,pFVar2,local_res8);
    local_10 = FFieldNotificationClassDescriptor::TargetInfoVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::TargetInfoVisibility.FieldName;
    if (bVar1) {
      if (this->TargetInfoVisibility != SelfHitTestInvisible) {
        this->TargetInfoVisibility = SelfHitTestInvisible;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        BindNameTagData(this);
        UpdateCharStatusInfo(this);
        UpdateCharInfoData(this);
        UpdateCharBuffData(this);
        return;
      }
    }
    else {
      HideTargetInfo(this);
    }
  }
  return;
}

// RefreshCurrentBossTarget @ 14bfd4280

void __thiscall UDS_VM_W_BossTargetInfo::RefreshCurrentBossTarget(UDS_VM_W_BossTargetInfo *this)

{
  int iVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_MovementCore *pUVar6;
  TVector<double> *pTVar7;
  TVector<double> *pTVar8;
  FScriptContainerElement *pFVar9;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar10;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar11;
  TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> TVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  int iVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  float fVar26;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  longlong local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  FWeakObjectPtr local_d0;
  FWeakObjectPtr local_c8;
  FScriptContainerElement *local_c0;
  ulong64 local_b8;
  FScriptContainerElement *local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  TVector<double> local_90;
  TVector<double> local_78 [2];
  
  if ((this->BossEntityIDList).ArrayNum != 0) {
    local_b8 = 0;
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8 = 0;
    FDS_EntityBase::GetMainPlayerEntityID(true);
    UDS_MovementCore::GetMovementCore((ulong64)&local_c8);
    bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (!bVar4) {
      pFVar18 = (this->BossEntityIDList).AllocatorInstance.Data;
      iVar1 = (this->BossEntityIDList).ArrayNum;
      pFVar16 = pFVar18 + (longlong)iVar1 * 8;
      fVar26 = __real_46c80000;
      while( true ) {
        if ((this->BossEntityIDList).ArrayNum != iVar1) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar18 == pFVar16) break;
        uVar2 = *(ulong64 *)pFVar18;
        UDS_MovementCore::GetMovementCore((ulong64)&local_d0);
        bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_d0,(void *)0x0)
        ;
        if (bVar4) {
          iVar5 = (uint)local_d8;
          if ((uint)local_d8 == local_d8._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_e0,(int *)((longlong)&local_d8 + 4));
          }
          pFVar18 = pFVar18 + 8;
          local_d8 = CONCAT44(local_d8._4_4_,iVar5 + 1);
          *(ulong64 *)(local_e0.Data + (longlong)iVar5 * 8) = uVar2;
        }
        else {
          pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_d0);
          pTVar7 = UDS_MovementCore::GetActorFootLocation(pUVar6,&local_90);
          pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_c8);
          pTVar8 = UDS_MovementCore::GetActorFootLocation(pUVar6,local_78);
          dVar25 = (pTVar7->field0_0x0)._s_0.Y - (pTVar8->field0_0x0)._s_0.Y;
          dVar24 = (pTVar7->field0_0x0)._s_0.X - (pTVar8->field0_0x0)._s_0.X;
          dVar21 = (pTVar7->field0_0x0)._s_0.Z - (pTVar8->field0_0x0)._s_0.Z;
          auVar22._0_8_ = dVar21 * dVar21;
          auVar22._8_8_ = 0;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = dVar25 * dVar25 + dVar24 * dVar24 + auVar22._0_8_;
          auVar23 = sqrtpd(auVar22,auVar23);
          if ((float)auVar23._0_8_ < fVar26) {
            fVar26 = (float)auVar23._0_8_;
            local_b8 = uVar2;
          }
          pFVar18 = pFVar18 + 8;
        }
      }
      uVar13 = (ulonglong)(int)(uint)local_d8;
      local_res20 = (uint)local_d8;
      pFVar16 = local_e0.Data + uVar13 * 8;
      FVar19.Data = local_e0.Data;
      local_b0 = pFVar16;
      while( true ) {
        local_c0 = FVar19.Data;
        if ((uint)local_d8 != (int)uVar13) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (FVar19.Data == pFVar16) break;
        pFVar18 = (this->BossEntityIDList).AllocatorInstance.Data;
        local_e8 = *(longlong *)FVar19.Data;
        pFVar9 = pFVar18;
        if (pFVar18 == pFVar18 + (longlong)(this->BossEntityIDList).ArrayNum * 8) {
LAB_14bfd45b4:
          uVar13 = (ulonglong)local_res20;
          FVar19.Data = FVar19.Data + 8;
        }
        else {
          do {
            if (*(longlong *)pFVar9 == local_e8) {
              if (((pFVar18 <= (FScriptContainerElement *)&local_e8) &&
                  ((FScriptContainerElement *)&local_e8 <
                   pFVar18 + (longlong)(this->BossEntityIDList).ArrayMax * 8)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar1 = (this->BossEntityIDList).ArrayNum;
              if (iVar1 != 0) {
                pFVar16 = (this->BossEntityIDList).AllocatorInstance.Data;
                iVar20 = 0;
                lVar15 = 0;
                bVar4 = *(longlong *)pFVar16 != local_e8;
                lVar14 = local_e8;
                iVar5 = 0;
                do {
                  iVar17 = iVar5;
                  do {
                    lVar15 = lVar15 + 1;
                    iVar17 = iVar17 + 1;
                    if (iVar1 <= lVar15) break;
                  } while (bVar4 == (*(longlong *)(pFVar16 + lVar15 * 8) != lVar14));
                  if (bVar4 != false) {
                    if (iVar20 != iVar5) {
                      memmove(pFVar16 + (longlong)iVar20 * 8,pFVar16 + (longlong)iVar5 * 8,
                              (longlong)(iVar17 - iVar5) << 3);
                      lVar14 = local_e8;
                    }
                    iVar20 = iVar20 + (iVar17 - iVar5);
                  }
                  bVar4 = (bool)(bVar4 ^ 1);
                  iVar5 = iVar17;
                } while (lVar15 < iVar1);
                (this->BossEntityIDList).ArrayNum = iVar20;
                pFVar16 = local_b0;
                FVar19.Data = local_c0;
              }
              goto LAB_14bfd45b4;
            }
            pFVar9 = pFVar9 + 8;
          } while (pFVar9 != pFVar18 + (longlong)(this->BossEntityIDList).ArrayNum * 8);
          uVar13 = (ulonglong)local_res20;
          FVar19.Data = FVar19.Data + 8;
        }
      }
      if (this->CurrentBossEntityID != local_b8) {
        this->CurrentBossEntityID = local_b8;
        if (local_b8 == 0) {
          (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
          (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
          (this->CharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
          HideTargetInfo(this);
        }
        else {
          TVar10 = UDS_CharInfoData::GetData((ulong64)local_a8);
                    /* WARNING: Load size is inaccurate */
          (this->CharInfoData).WeakPtr = *TVar10.WeakPtr;
          TVar11 = UDS_CharStatusData::GetData((ulong64)local_a0);
                    /* WARNING: Load size is inaccurate */
          (this->CharStatusData).WeakPtr = *TVar11.WeakPtr;
          TVar12 = UDS_CharBuffData::GetData((ulong64)local_98);
                    /* WARNING: Load size is inaccurate */
          (this->CharBuffData).WeakPtr = *TVar12.WeakPtr;
          BindNameTagData(this);
          UpdateCharStatusInfo(this);
          UpdateCharInfoData(this);
          UpdateCharBuffData(this);
        }
      }
    }
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
  }
  return;
}

// SetTargetIconID @ 14bfddad0

void __thiscall UDS_VM_W_BossTargetInfo::SetTargetIconID(UDS_VM_W_BossTargetInfo *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::TargetIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TargetIconID.FieldName;
  if (this->TargetIconID != param_1) {
    this->TargetIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTargetInfo_Visibility @ 14bfddb20

void __thiscall
UDS_VM_W_BossTargetInfo::SetTargetInfo_Visibility
          (UDS_VM_W_BossTargetInfo *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::TargetInfoVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TargetInfoVisibility.FieldName;
  if (this->TargetInfoVisibility != param_1) {
    this->TargetInfoVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTargetNameColor @ 14bfddb70

void __thiscall
UDS_VM_W_BossTargetInfo::SetTargetNameColor(UDS_VM_W_BossTargetInfo *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->TargetNameColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->TargetNameColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->TargetNameColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->TargetNameColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::TargetNameColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::TargetNameColor.FieldName;
    (this->TargetNameColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->TargetNameColor).field0_0x0._s_0.G = fVar1;
    (this->TargetNameColor).field0_0x0._s_0.B = fVar2;
    (this->TargetNameColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// ShowTargetInfo @ 14bfde750

void __thiscall UDS_VM_W_BossTargetInfo::ShowTargetInfo(UDS_VM_W_BossTargetInfo *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::TargetInfoVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TargetInfoVisibility.FieldName;
  if (this->TargetInfoVisibility != SelfHitTestInvisible) {
    this->TargetInfoVisibility = SelfHitTestInvisible;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    BindNameTagData(this);
    UpdateCharStatusInfo(this);
    UpdateCharInfoData(this);
    UpdateCharBuffData(this);
    return;
  }
  return;
}

// UpdateCharBuffData @ 14bfe1810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_BossTargetInfo::UpdateCharBuffData(UDS_VM_W_BossTargetInfo *this)

{
  UDS_VM_CharBuffData *this_00;
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  undefined1 auStackY_1b8 [32];
  undefined8 local_188 [2];
  FName local_178;
  int local_170;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar2 = FWeakObjectPtr::IsValid(&(this->CharBuffData).WeakPtr);
  if (bVar2) {
    if ((this->VM_CharBuffData).field0_0x0.DebugPtr != (UDS_VM_CharBuffData *)0x0) {
      pFVar4 = ::operator_new(0x30);
      pFVar7 = (FDS_ViewModelContext *)0x0;
      pFVar6 = pFVar7;
      if (pFVar4 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar4->field_0x1c = 0;
        *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
        (pFVar4->ViewModelName).ComparisonIndex = 0;
        (pFVar4->ViewModelName).Number = 0;
        pFVar4->ViewModelTemplateKey = None;
        pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_CharBuffData__6B_;
        *(undefined4 *)((longlong)&pFVar4[1]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar4[1].DerivedStaticStruct = 0;
        local_188[0] = 0;
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)&pFVar4[1].DerivedStaticStruct,(FObjectPtr)local_188);
        pFVar6 = pFVar4;
      }
      pFVar4 = ::operator_new(0x20);
      if (pFVar4 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar4->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharBuffData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar6;
        pFVar7 = pFVar4;
      }
      if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar5 = FDS_ViewModelContext_CharBuffData::StaticStruct();
      *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar5;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar7->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_168.Object = pFVar6;
        local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_168);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
      }
      pFVar6->ViewModelTemplateKey = Data_CharBuff;
      *(undefined4 *)&pFVar6[1]._padding_ = 0;
      *(FWeakObjectPtr *)&pFVar6[1].DerivedStaticStruct = (this->CharBuffData).WeakPtr;
      *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0xf;
      this_00 = (this->VM_CharBuffData).field0_0x0.DebugPtr;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_158.Object = pFVar6;
      local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_158);
      local_170 = FFieldNotificationClassDescriptor::VM_CharBuffData.BitNumber;
      local_178 = FFieldNotificationClassDescriptor::VM_CharBuffData.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar7);
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_BossTargetInfo::UpdateCharBuffData",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x12e,L"CharBuffData is Invalid");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// UpdateCharInfoData @ 14bfe1a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_BossTargetInfo::UpdateCharInfoData(UDS_VM_W_BossTargetInfo *this)

{
  UDS_VM_CharInfoData *this_00;
  code *pcVar1;
  FDS_ViewModelContext_CharInfoData *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_198 [32];
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext_CharInfoData,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar3 = FWeakObjectPtr::IsValid(&(this->CharInfoData).WeakPtr);
  if (bVar3) {
    if ((this->VM_CharInfoData).field0_0x0.DebugPtr != (UDS_VM_CharInfoData *)0x0) {
      MakeContext<FDS_ViewModelContext_CharInfoData>(&local_158);
      pFVar2 = local_158.Object;
      if (local_158.Object == (FDS_ViewModelContext_CharInfoData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(undefined4 *)&pFVar2->_padding_ = 0xe;
      pFVar2->CharEntityID = this->CurrentBossEntityID;
      this_00 = (this->VM_CharInfoData).field0_0x0.DebugPtr;
      local_148.Object = (FDS_ViewModelContext *)local_158.Object;
      local_148.SharedReferenceCount.ReferenceController =
           local_158.SharedReferenceCount.ReferenceController;
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_148);
      local_160 = FFieldNotificationClassDescriptor::VM_CharInfoData.BitNumber;
      local_168 = FFieldNotificationClassDescriptor::VM_CharInfoData.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_BossTargetInfo::UpdateCharInfoData",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x119,L"CharInfoData is Invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// UpdateCharStatusInfo @ 14bfe1c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_BossTargetInfo::UpdateCharStatusInfo(UDS_VM_W_BossTargetInfo *this)

{
  UDS_VM_StatusInfo *pUVar1;
  code *pcVar2;
  FDS_ViewModelContext_StatusInfo *pFVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_1c8 [32];
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  TSharedPtr<FDS_ViewModelContext_StatusInfo,1> local_178;
  TSharedPtr<FDS_ViewModelContext_StatusInfo,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar4 = FWeakObjectPtr::IsValid(&(this->CharStatusData).WeakPtr);
  if (bVar4) {
    if ((this->VM_StatusInfo_HP).field0_0x0.DebugPtr != (UDS_VM_StatusInfo *)0x0) {
      MakeContext<FDS_ViewModelContext_StatusInfo>(&local_178);
      pFVar3 = local_178.Object;
      if (local_178.Object == (FDS_ViewModelContext_StatusInfo *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x12;
      pFVar3->EntityID = this->CurrentBossEntityID;
      pFVar3->StatusID = Hp;
      pFVar3->bIsUse_VM_Progress = false;
      pFVar3->bIsUseDamageProgress = true;
      UDS_ViewModelBase::SetVisibility
                ((UDS_ViewModelBase *)(this->VM_StatusInfo_HP).field0_0x0.DebugPtr,
                 SelfHitTestInvisible);
      pUVar1 = (this->VM_StatusInfo_HP).field0_0x0.DebugPtr;
      local_158.Object = (FDS_ViewModelContext *)local_178.Object;
      local_158.SharedReferenceCount.ReferenceController =
           local_178.SharedReferenceCount.ReferenceController;
      if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_158);
      local_190 = FFieldNotificationClassDescriptor::VM_StatusInfo_HP.BitNumber;
      local_198 = FFieldNotificationClassDescriptor::VM_StatusInfo_HP.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
    }
    if ((this->VM_StatusInfo_Shield).field0_0x0.DebugPtr != (UDS_VM_StatusInfo *)0x0) {
      MakeContext<FDS_ViewModelContext_StatusInfo>(&local_168);
      pFVar3 = local_168.Object;
      if (local_168.Object == (FDS_ViewModelContext_StatusInfo *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x12;
      pFVar3->EntityID = this->CurrentBossEntityID;
      pFVar3->StatusID = Hp;
      pFVar3->bIsUse_VM_Progress = false;
      UDS_ViewModelBase::SetVisibility
                ((UDS_ViewModelBase *)(this->VM_StatusInfo_Shield).field0_0x0.DebugPtr,
                 SelfHitTestInvisible);
      pUVar1 = (this->VM_StatusInfo_Shield).field0_0x0.DebugPtr;
      local_148.Object = (FDS_ViewModelContext *)local_168.Object;
      local_148.SharedReferenceCount.ReferenceController =
           local_168.SharedReferenceCount.ReferenceController;
      if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_148);
      local_180 = FFieldNotificationClassDescriptor::VM_StatusInfo_Shield.BitNumber;
      local_188 = FFieldNotificationClassDescriptor::VM_StatusInfo_Shield.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
    }
    UpdateGroggyPoint(this);
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_BossTargetInfo::UpdateCharStatusInfo",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0xb8,L"CharStatusData is Invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// UpdateGroggyPoint @ 14bfe32d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_BossTargetInfo::UpdateGroggyPoint(UDS_VM_W_BossTargetInfo *this)

{
  longlong *plVar1;
  UDS_VM_StatusInfo *this_00;
  code *pcVar2;
  FDS_ViewModelContext_StatusInfo *pFVar3;
  bool bVar4;
  EDS_GroggyPointReductionType EVar5;
  UDS_LogManager *pUVar6;
  UDS_CharStatusData *this_01;
  ESlateVisibility EVar7;
  undefined1 auStackY_1e8 [32];
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  TSharedPtr<FDS_ViewModelContext_StatusInfo,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  bVar4 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                    (&this->CharStatusData,(void *)0x0);
  if (bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_BossTargetInfo::UpdateGroggyPoint",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0xe1,L"CharStatusData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this_01 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&(this->CharStatusData).WeakPtr);
    EVar5 = UDS_CharStatusData::GetGroggyPointReductionType(this_01);
    plVar1 = &this->_padding_;
    EVar7 = Collapsed;
    if (EVar5 != None) {
      EVar7 = SelfHitTestInvisible;
    }
    this->Visibility_GroggyPoint = EVar7;
    local_1b0 = FFieldNotificationClassDescriptor::Visibility_GroggyPoint.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::Visibility_GroggyPoint.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_1b8);
    this->Visibility_GroggyPoint_SkillUse = Collapsed;
    this->Visibility_GroggyPoint_Abnormal = Collapsed;
    this->Visibility_GroggyPoint_HitDamage = Collapsed;
    if (EVar5 == SkillUse) {
      this->Visibility_GroggyPoint_SkillUse = SelfHitTestInvisible;
    }
    else if (EVar5 == Abnormal) {
      this->Visibility_GroggyPoint_Abnormal = SelfHitTestInvisible;
    }
    else if (EVar5 == HitDamage) {
      this->Visibility_GroggyPoint_HitDamage = SelfHitTestInvisible;
    }
    local_1a0 = FFieldNotificationClassDescriptor::Visibility_GroggyPoint_SkillUse.BitNumber;
    local_1a8 = FFieldNotificationClassDescriptor::Visibility_GroggyPoint_SkillUse.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_1a8);
    local_190 = FFieldNotificationClassDescriptor::Visibility_GroggyPoint_Abnormal.BitNumber;
    local_198 = FFieldNotificationClassDescriptor::Visibility_GroggyPoint_Abnormal.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_198);
    local_180 = FFieldNotificationClassDescriptor::Visibility_GroggyPoint_HitDamage.BitNumber;
    local_188 = FFieldNotificationClassDescriptor::Visibility_GroggyPoint_HitDamage.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_188);
    if ((EVar5 != None) &&
       ((this->VM_StatusInfo_GroggyPoint).field0_0x0.DebugPtr != (UDS_VM_StatusInfo *)0x0)) {
      MakeContext<FDS_ViewModelContext_StatusInfo>(&local_168);
      pFVar3 = local_168.Object;
      if ((local_168.Object == (FDS_ViewModelContext_StatusInfo *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x12;
      pFVar3->EntityID = this->CurrentBossEntityID;
      pFVar3->StatusID = GroggyPoint;
      pFVar3->bIsUse_VM_Progress = false;
      pFVar3->bIsUseDamageProgress = false;
      UDS_ViewModelBase::SetVisibility
                ((UDS_ViewModelBase *)(this->VM_StatusInfo_GroggyPoint).field0_0x0.DebugPtr,
                 SelfHitTestInvisible);
      this_00 = (this->VM_StatusInfo_GroggyPoint).field0_0x0.DebugPtr;
      local_158.Object = (FDS_ViewModelContext *)local_168.Object;
      local_158.SharedReferenceCount.ReferenceController =
           local_168.SharedReferenceCount.ReferenceController;
      if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_158);
      local_170 = FFieldNotificationClassDescriptor::VM_StatusInfo_GroggyPoint.BitNumber;
      local_178 = FFieldNotificationClassDescriptor::VM_StatusInfo_GroggyPoint.FieldName;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

