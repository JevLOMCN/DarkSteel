// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b755fd0

UClass * __cdecl UDS_VM_W_SmiteEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_SmiteEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_SmiteEffect",
               &Z_Registration_Info_UClass_UDS_VM_W_SmiteEffect.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_SmiteEffect,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_SmiteEffect>,
               InternalVTableHelperCtorCaller<UDS_VM_W_SmiteEffect>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_SmiteEffect.InnerSingleton;
}

// UDS_VM_W_SmiteEffect @ 14b759bd0

UDS_VM_W_SmiteEffect * __thiscall
UDS_VM_W_SmiteEffect::UDS_VM_W_SmiteEffect(UDS_VM_W_SmiteEffect *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_SmiteEffect = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_SmiteEffect__6B_;
  this->SkillID = 0;
  this->SkillAttackID = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->Vis_FireElement = Collapsed;
  this->Vis_ElectroElement = Collapsed;
  this->Vis_WindElement = Collapsed;
  this->Vis_NormalElement = Collapsed;
  return this;
}

// UDS_VM_W_SmiteEffect @ 14b759c70

UDS_VM_W_SmiteEffect * __thiscall
UDS_VM_W_SmiteEffect::UDS_VM_W_SmiteEffect(UDS_VM_W_SmiteEffect *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_SmiteEffect = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_SmiteEffect__6B_;
  this->SkillID = 0;
  this->SkillAttackID = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->Vis_FireElement = Collapsed;
  this->Vis_ElectroElement = Collapsed;
  this->Vis_WindElement = Collapsed;
  this->Vis_NormalElement = Collapsed;
  return this;
}

// ~UDS_VM_W_SmiteEffect @ 14b75ba50

void __thiscall UDS_VM_W_SmiteEffect::~UDS_VM_W_SmiteEffect(UDS_VM_W_SmiteEffect *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_SmiteEffect__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75dd60

IClassDescriptor * __thiscall
UDS_VM_W_SmiteEffect::GetFieldNotificationDescriptor(UDS_VM_W_SmiteEffect *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_SmiteEffect::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75e670

UClass * __cdecl UDS_VM_W_SmiteEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_SmiteEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_SmiteEffect",
               &Z_Registration_Info_UClass_UDS_VM_W_SmiteEffect.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_SmiteEffect,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_SmiteEffect>,
               InternalVTableHelperCtorCaller<UDS_VM_W_SmiteEffect>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_SmiteEffect.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_SmiteEffect @ 14b75efa0

void __cdecl UDS_VM_W_SmiteEffect::StaticRegisterNativesUDS_VM_W_SmiteEffect(void)

{
  return;
}

// OnActivateSmite @ 14c024d20

void __thiscall
UDS_VM_W_SmiteEffect::OnActivateSmite
          (UDS_VM_W_SmiteEffect *this,bool param_1,ulong64 param_2,int param_3)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  FDS_SkillAttackTableRow *this_00;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Vis_SmiteEffect.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Vis_SmiteEffect.FieldName;
  if (param_1) {
    this_00 = FDS_SkillAttackTableRow::GetRef((longlong)param_3,param_1);
    if (((this->TargetEntityID != 0) && (param_2 == this->TargetEntityID)) ||
       ((this->SkillID != 0 &&
        ((bVar3 = FDS_SkillAttackTableRow::IsValid(this_00), bVar3 &&
         (this_00->ID_Skill == this->SkillID)))))) {
      this->SkillAttackID = param_3;
      FVar1 = FFieldNotificationClassDescriptor::Vis_SmiteEffect.FieldName;
      if (this->Vis_SmiteEffect != SelfHitTestInvisible) {
        local_10 = FFieldNotificationClassDescriptor::Vis_SmiteEffect.BitNumber;
        this->Vis_SmiteEffect = SelfHitTestInvisible;
        local_18 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      SetAttackElement(this);
    }
  }
  else if (((this->SkillID != 0) ||
           ((this->TargetEntityID != 0 && (param_2 == this->TargetEntityID)))) &&
          (this->Vis_SmiteEffect != Collapsed)) {
    this->Vis_SmiteEffect = Collapsed;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    return;
  }
  return;
}

// OnCloseInit @ 14c028790

void __thiscall UDS_VM_W_SmiteEffect::OnCloseInit(UDS_VM_W_SmiteEffect *this)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  UDS_SkillDataSet *this_00;
  FDS_SkillDeckInfo *this_01;
  UObject *pUVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_28;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  if (this->CurrentCharEntityID != 0) {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res10);
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar2) {
      this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res10);
      this_01 = UDS_SkillDataSet::GetSkillDeckInfo(this_00);
      FDS_SkillDeckInfo::GetSkillList(this_01,&local_28);
      iVar4 = local_28.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)(local_28.AllocatorInstance.Data + (longlong)iVar4 * 8);
      FVar5.Data = local_28.AllocatorInstance.Data;
      while( true ) {
        if (local_28.ArrayNum != iVar4) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_res8);
        }
        if ((FWeakObjectPtr *)FVar5.Data == pFVar1) break;
        local_res8 = *(FWeakObjectPtr *)FVar5.Data;
        bVar2 = FWeakObjectPtr::IsValid(&local_res8);
        if (bVar2) {
          pUVar3 = FWeakObjectPtr::Get(&local_res8);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar3 + 0xc),this);
        }
        FVar5.Data = FVar5.Data + 8;
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnMainCharChanged @ 14c02c470

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
UDS_VM_W_SmiteEffect::OnMainCharChanged
          (UDS_VM_W_SmiteEffect *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  UDS_SkillDataSet *pUVar5;
  FDS_SkillDeckInfo *pFVar6;
  UObject *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  int iVar10;
  ForAnyElementType FVar11;
  ForElementType<TAlignedBytes<16,16>_> *pFVar12;
  FWeakObjectPtr *pFVar13;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_c0;
  FDelegateAllocation *local_a8;
  FWeakObjectPtr local_a0;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_98;
  FDestructionSentinel local_88;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_70;
  code *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  UDS_VM_W_SmiteEffect *local_48;
  FWeakObjectPtr *local_40;
  
  if (param_2 != (FDS_EntityBase *)0x0) {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res20);
    bVar2 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar2) {
      pUVar5 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res20);
      pFVar6 = UDS_SkillDataSet::GetSkillDeckInfo(pUVar5);
      FDS_SkillDeckInfo::GetSkillList(pFVar6,&local_98);
      iVar10 = local_98.ArrayNum;
      pFVar13 = (FWeakObjectPtr *)(local_98.AllocatorInstance.Data + (longlong)iVar10 * 8);
      FVar11.Data = local_98.AllocatorInstance.Data;
      while( true ) {
        if (local_98.ArrayNum != iVar10) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_res18);
        }
        if ((FWeakObjectPtr *)FVar11.Data == pFVar13) break;
        local_res18 = *(FWeakObjectPtr *)FVar11.Data;
        bVar2 = FWeakObjectPtr::IsValid(&local_res18);
        if (bVar2) {
          pUVar7 = FWeakObjectPtr::Get(&local_res18);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar7 + 0xc),this);
        }
        FVar11.Data = FVar11.Data + 8;
      }
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
    }
    this->CurrentCharEntityID = param_2->EntityID;
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_a0);
    bVar2 = FWeakObjectPtr::IsValid(&local_a0);
    if (bVar2) {
      pUVar5 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_a0);
      pFVar6 = UDS_SkillDataSet::GetSkillDeckInfo(pUVar5);
      FDS_SkillDeckInfo::GetSkillList(pFVar6,&local_70);
      uVar1 = uStack_4c;
      iVar10 = local_70.ArrayNum;
      pFVar13 = (FWeakObjectPtr *)(local_70.AllocatorInstance.Data + (longlong)iVar10 * 8);
      FVar11.Data = local_70.AllocatorInstance.Data;
      local_40 = pFVar13;
      while( true ) {
        if (local_70.ArrayNum != iVar10) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_res18);
        }
        if ((FWeakObjectPtr *)FVar11.Data == pFVar13) break;
        local_res18 = *(FWeakObjectPtr *)FVar11.Data;
        bVar2 = FWeakObjectPtr::IsValid(&local_res18);
        if (bVar2) {
          pUVar7 = FWeakObjectPtr::Get(&local_res18);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar7 + 0xc),this);
          pUVar7 = FWeakObjectPtr::Get(&local_res18);
          uStack_50 = 0;
          local_d8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_d0.DelegateSize = 0;
          local_58 = OnActivateSmite;
          uStack_4c = uVar1;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_d8,(FWriteAccessScope *)&local_c0);
          local_a8 = &local_d0;
          puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = &
                      ___7__TCommonDelegateInstanceState___A6AX_N_KH_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar9 = FDelegateHandle::GenerateNewID();
            puVar8[2] = uVar9;
            *puVar8 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_SmiteEffect____A6AX_N_KH_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar8[3] = 0;
            local_48 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_48);
            puVar8[4] = local_58;
            puVar8[5] = CONCAT44(uStack_4c,uStack_50);
          }
          if (local_c0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar7 + 0xc),
                     (FWriteAccessScope *)&local_c0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    (&local_d8,(FReadAccessScope *)&local_88);
          if (((local_d0.DelegateSize == 0) ||
              (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
             (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0'
             )) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope((FReadAccessScope *)&local_88);
          }
          else {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope((FReadAccessScope *)&local_88);
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar7 + 0xc),true);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      (&local_d8,(FReadAccessScope *)&local_88);
            if ((local_d0.DelegateSize != 0) &&
               (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                        (local_d0.DelegateAllocator,&local_98);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope((FReadAccessScope *)&local_88);
            iVar4 = *(int *)&pUVar7[0xc].field_0x10;
            if (iVar4 == *(int *)&pUVar7[0xc].field_0x14) {
              iVar4 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,(ForAnyElementType *)&pUVar7[0xc].field_0x8,
                                 (int *)&pUVar7[0xc].field_0x14);
              *(int *)&pUVar7[0xc].field_0x10 = iVar4;
            }
            *(int *)&pUVar7[0xc].field_0x10 = iVar4 + 1;
            pFVar12 = (ForElementType<TAlignedBytes<16,16>_> *)
                      ((longlong)iVar4 * 0x10 + *(longlong *)&pUVar7[0xc].field_0x8);
            *pFVar12 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            *(undefined4 *)(pFVar12 + 1) = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_d8,(FWriteAccessScope *)&local_88);
            if (*pFVar12 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)*pFVar12);
            }
            *pFVar12 = local_d0.DelegateAllocator;
            local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            *(int *)(pFVar12 + 1) = local_d0.DelegateSize;
            local_d0.DelegateSize = 0;
            if (local_88.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
            }
          }
          if (local_c0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_d8,(FWriteAccessScope *)&local_c0);
          if ((local_d0.DelegateSize != 0) &&
             (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_d0,0,0,0x10);
            local_d0.DelegateSize = 0;
          }
          if (local_c0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
          }
          if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_d0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
          pFVar13 = local_40;
        }
        FVar11.Data = FVar11.Data + 8;
      }
      if ((FWeakObjectPtr *)local_70.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14c035820

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
UDS_VM_W_SmiteEffect::OnSetViewModel
          (UDS_VM_W_SmiteEffect *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FWeakObjectPtr *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  FDS_EntityBase *pFVar6;
  UDS_SkillDataSet *this_00;
  FDS_SkillDeckInfo *this_01;
  UObject *pUVar7;
  int iVar8;
  ForAnyElementType FVar9;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined1 local_a8 [16];
  FName local_98;
  int local_90;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_88;
  TSharedPtr<FDS_ViewModelContext_Smite,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  code *local_58;
  ulonglong uStack_50;
  code *local_48;
  ulonglong uStack_40;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Smite>(&local_78,&local_68);
  if (local_78.Object != (FDS_ViewModelContext_Smite *)0x0) {
    if (local_78.Object == (FDS_ViewModelContext_Smite *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->TargetEntityID = (local_78.Object)->TargetEntityID;
    this->SkillID = (local_78.Object)->SkillID;
    pFVar6 = FDS_EntityBase::GetMainPlayerEntityBase(true);
    if (pFVar6 != (FDS_EntityBase *)0x0) {
      this->CurrentCharEntityID = pFVar6->EntityID;
      TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res20);
      bVar5 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar5) {
        this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res20);
        this_01 = UDS_SkillDataSet::GetSkillDeckInfo(this_00);
        FDS_SkillDeckInfo::GetSkillList(this_01,&local_88);
        iVar8 = local_88.ArrayNum;
        pFVar1 = (FWeakObjectPtr *)(local_88.AllocatorInstance.Data + (longlong)iVar8 * 8);
        FVar9.Data = local_88.AllocatorInstance.Data;
        while( true ) {
          if (local_88.ArrayNum != iVar8) {
            `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if ((FWeakObjectPtr *)FVar9.Data == pFVar1) break;
          local_res18 = *(FWeakObjectPtr *)FVar9.Data;
          bVar5 = FWeakObjectPtr::IsValid(&local_res18);
          if (bVar5) {
            pUVar7 = FWeakObjectPtr::Get(&local_res18);
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar7 + 0xc),this);
            local_58 = OnActivateSmite;
            uStack_50 = uStack_50 & 0xffffffff00000000;
            local_48 = OnActivateSmite;
            uStack_40 = uStack_50;
            pUVar7 = FWeakObjectPtr::Get(&local_res18);
            TMulticastDelegateRegistration<void___cdecl(bool,unsigned___int64,int),FDefaultDelegateUserPolicy>
            ::AddUObject<UDS_VM_W_SmiteEffect>
                      ((TMulticastDelegateRegistration<void___cdecl(bool,unsigned___int64,int),FDefaultDelegateUserPolicy>
                        *)(pUVar7 + 0xc),(UDS_VM_W_SmiteEffect *)local_a8,(pmf_824691c8 *)this);
          }
          FVar9.Data = FVar9.Data + 8;
        }
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
      }
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
    uStack_50 = uStack_50 & 0xffffffff00000000;
    local_58 = OnMainCharChanged;
    TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_SmiteEffect>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
                *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
               (UDS_VM_W_SmiteEffect *)(local_a8 + 8),(pmf_4a2f9f16 *)this);
    FVar4 = FFieldNotificationClassDescriptor::Vis_SmiteEffect.FieldName;
    if (this->Vis_SmiteEffect != Collapsed) {
      local_90 = FFieldNotificationClassDescriptor::Vis_SmiteEffect.BitNumber;
      this->Vis_SmiteEffect = Collapsed;
      local_98 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PlayAnimation @ 14c03d380

void __thiscall UDS_VM_W_SmiteEffect::PlayAnimation(UDS_VM_W_SmiteEffect *this,FName param_1)

{
  FName local_18;
  int local_10;
  
  (this->AnimationEvent).AnimationName = param_1;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).NumberOfLoops = 0;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetAttackElement @ 14c03fea0

void __thiscall UDS_VM_W_SmiteEffect::SetAttackElement(UDS_VM_W_SmiteEffect *this)

{
  longlong *plVar1;
  EDS_ElementType EVar2;
  FDS_SkillAttackTableRow *pFVar3;
  FName *pFVar4;
  FName FVar5;
  FName local_res8;
  FName local_38;
  int local_30;
  
  if (this->SkillAttackID == 0) {
    return;
  }
  pFVar3 = FDS_SkillAttackTableRow::Get((longlong)this->SkillAttackID,true);
  FVar5 = FFieldNotificationClassDescriptor::Vis_FireElement.FieldName;
  if (pFVar3 == (FDS_SkillAttackTableRow *)0x0) {
    return;
  }
  plVar1 = &this->_padding_;
  if (this->Vis_FireElement != Collapsed) {
    local_30 = FFieldNotificationClassDescriptor::Vis_FireElement.BitNumber;
    this->Vis_FireElement = Collapsed;
    local_38 = FVar5;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
  }
  FVar5 = FFieldNotificationClassDescriptor::Vis_ElectroElement.FieldName;
  if (this->Vis_ElectroElement != Collapsed) {
    local_30 = FFieldNotificationClassDescriptor::Vis_ElectroElement.BitNumber;
    this->Vis_ElectroElement = Collapsed;
    local_38 = FVar5;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
  }
  FVar5 = FFieldNotificationClassDescriptor::Vis_WindElement.FieldName;
  if (this->Vis_WindElement != Collapsed) {
    local_30 = FFieldNotificationClassDescriptor::Vis_WindElement.BitNumber;
    this->Vis_WindElement = Collapsed;
    local_38 = FVar5;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
  }
  FVar5 = FFieldNotificationClassDescriptor::Vis_NormalElement.FieldName;
  if (this->Vis_NormalElement != Collapsed) {
    local_30 = FFieldNotificationClassDescriptor::Vis_NormalElement.BitNumber;
    this->Vis_NormalElement = Collapsed;
    local_38 = FVar5;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
  }
  EVar2 = pFVar3->ElementType;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  if (EVar2 == FireType) {
    pFVar4 = ::FName::FName(&local_res8,L"Fire_Loop");
    local_30 = FFieldNotificationClassDescriptor::Vis_FireElement.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::Vis_FireElement.FieldName;
    FVar5 = *pFVar4;
    if (this->Vis_FireElement == SelfHitTestInvisible) goto LAB_14c0400ef;
    this->Vis_FireElement = SelfHitTestInvisible;
  }
  else if (EVar2 == ElectroType) {
    pFVar4 = ::FName::FName(&local_res8,L"Electric_Loop");
    local_30 = FFieldNotificationClassDescriptor::Vis_ElectroElement.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::Vis_ElectroElement.FieldName;
    FVar5 = *pFVar4;
    if (this->Vis_ElectroElement == SelfHitTestInvisible) goto LAB_14c0400ef;
    this->Vis_ElectroElement = SelfHitTestInvisible;
  }
  else {
    if (EVar2 != WindType) {
      if (EVar2 == NormalType) {
        pFVar4 = ::FName::FName(&local_res8,L"Unaspected_Loop");
        local_38 = FFieldNotificationClassDescriptor::Vis_NormalElement.FieldName;
        FVar5 = *pFVar4;
        if (this->Vis_NormalElement != SelfHitTestInvisible) {
          local_30 = FFieldNotificationClassDescriptor::Vis_NormalElement.BitNumber;
          this->Vis_NormalElement = SelfHitTestInvisible;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
        }
      }
      else {
        FVar5.ComparisonIndex.Value = 0;
        FVar5.Number = 0;
      }
      goto LAB_14c0400ef;
    }
    pFVar4 = ::FName::FName(&local_res8,L"Wind_Loop");
    local_30 = FFieldNotificationClassDescriptor::Vis_WindElement.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::Vis_WindElement.FieldName;
    FVar5 = *pFVar4;
    if (this->Vis_WindElement == SelfHitTestInvisible) goto LAB_14c0400ef;
    this->Vis_WindElement = SelfHitTestInvisible;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
LAB_14c0400ef:
  (this->AnimationEvent).AnimationName = FVar5;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).NumberOfLoops = 0;
  local_30 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  return;
}

// SetVisibility_ElectroElement @ 14c045bf0

void __thiscall
UDS_VM_W_SmiteEffect::SetVisibility_ElectroElement
          (UDS_VM_W_SmiteEffect *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_ElectroElement.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_ElectroElement.FieldName;
  if (this->Vis_ElectroElement != param_1) {
    this->Vis_ElectroElement = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_FireElement @ 14c045c40

void __thiscall
UDS_VM_W_SmiteEffect::SetVisibility_FireElement(UDS_VM_W_SmiteEffect *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_FireElement.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_FireElement.FieldName;
  if (this->Vis_FireElement != param_1) {
    this->Vis_FireElement = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_NormalElement @ 14c045dd0

void __thiscall
UDS_VM_W_SmiteEffect::SetVisibility_NormalElement
          (UDS_VM_W_SmiteEffect *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_NormalElement.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_NormalElement.FieldName;
  if (this->Vis_NormalElement != param_1) {
    this->Vis_NormalElement = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_SmiteEffect @ 14c045eb0

void __thiscall
UDS_VM_W_SmiteEffect::SetVisibility_SmiteEffect(UDS_VM_W_SmiteEffect *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_SmiteEffect.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_SmiteEffect.FieldName;
  if (this->Vis_SmiteEffect != param_1) {
    this->Vis_SmiteEffect = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_WindElement @ 14c045f00

void __thiscall
UDS_VM_W_SmiteEffect::SetVisibility_WindElement(UDS_VM_W_SmiteEffect *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_WindElement.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_WindElement.FieldName;
  if (this->Vis_WindElement != param_1) {
    this->Vis_WindElement = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

