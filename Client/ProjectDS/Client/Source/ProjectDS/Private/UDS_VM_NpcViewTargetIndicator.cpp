// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// SetAnimationFinishEvent_WrapperImpl @ 14b6ac260

void __cdecl
UDS_VM_NpcViewTargetIndicator::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName *pFVar1;
  FName aFStackX_8 [4];
  FName FStack_18;
  int iStack_10;
  
  pFVar1 = ::FName::FName(aFStackX_8,"Open_ani_block");
  iStack_10 = FFieldNotificationClassDescriptor::bIsBlocked.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsBlocked.FieldName;
  if (*(FName *)((longlong)param_1 + 0xe8) == *pFVar1) {
    if (*(char *)((longlong)param_1 + 0xe3) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xe3) = 0;
LAB_14be29086:
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
      return;
    }
  }
  else {
    pFVar1 = ::FName::FName(aFStackX_8,"Open_ani_predicted");
    iStack_10 = FFieldNotificationClassDescriptor::bIsPredictedDamage.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::bIsPredictedDamage.FieldName;
    if (*(FName *)((longlong)param_1 + 0xe8) == *pFVar1) {
      if (*(char *)((longlong)param_1 + 0xe0) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0xe0) = 0;
        goto LAB_14be29086;
      }
    }
    else {
      pFVar1 = ::FName::FName(aFStackX_8,"Open_ani_hit");
      iStack_10 = FFieldNotificationClassDescriptor::bIsDamaged.BitNumber;
      FStack_18 = FFieldNotificationClassDescriptor::bIsDamaged.FieldName;
      if (*(FName *)((longlong)param_1 + 0xe8) == *pFVar1) {
        if (*(char *)((longlong)param_1 + 0xe1) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
          goto LAB_14be29086;
        }
      }
      else {
        pFVar1 = ::FName::FName(aFStackX_8,"Open_ani_no_hit");
        if (*(FName *)((longlong)param_1 + 0xe8) == *pFVar1) {
          ShowNoHitEffect(param_1,false);
          return;
        }
      }
    }
  }
  return;
}

// StaticClass @ 14b6ac270

UClass * __cdecl UDS_VM_NpcViewTargetIndicator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcViewTargetIndicator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcViewTargetIndicator",
               &Z_Registration_Info_UClass_UDS_VM_NpcViewTargetIndicator.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcViewTargetIndicator,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_NpcViewTargetIndicator>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcViewTargetIndicator>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcViewTargetIndicator.InnerSingleton;
}

// UDS_VM_NpcViewTargetIndicator @ 14b6b2880

UDS_VM_NpcViewTargetIndicator * __thiscall
UDS_VM_NpcViewTargetIndicator::UDS_VM_NpcViewTargetIndicator
          (UDS_VM_NpcViewTargetIndicator *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcViewTargetIndicator__6B_;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  FText::FText(&this->CharInfoText);
  FText::FText(&this->CurrentState);
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->TargetEntityID = 0;
  this->bInitedBossData = false;
  this->bIsColliderDestruction = false;
  (this->SkillAttackLinkIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillAttackLinkIDs).ArrayNum = 0;
  (this->SkillAttackLinkIDs).ArrayMax = 0;
  (this->SkillAttackLinkStartTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillAttackLinkStartTimes).ArrayNum = 0;
  (this->SkillAttackLinkStartTimes).ArrayMax = 0;
  this->PrevLinkIndex = -1;
  this->SkillElapsedTime = 0.0;
  return this;
}

// UDS_VM_NpcViewTargetIndicator @ 14b6b29d0

UDS_VM_NpcViewTargetIndicator * __thiscall
UDS_VM_NpcViewTargetIndicator::UDS_VM_NpcViewTargetIndicator
          (UDS_VM_NpcViewTargetIndicator *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcViewTargetIndicator__6B_;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  FText::FText(&this->CharInfoText);
  FText::FText(&this->CurrentState);
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->TargetEntityID = 0;
  this->bInitedBossData = false;
  this->bIsColliderDestruction = false;
  (this->SkillAttackLinkIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillAttackLinkIDs).ArrayNum = 0;
  (this->SkillAttackLinkIDs).ArrayMax = 0;
  (this->SkillAttackLinkStartTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillAttackLinkStartTimes).ArrayNum = 0;
  (this->SkillAttackLinkStartTimes).ArrayMax = 0;
  this->PrevLinkIndex = -1;
  this->SkillElapsedTime = 0.0;
  return this;
}

// ~UDS_VM_NpcViewTargetIndicator @ 14b6b41d0

void __thiscall
UDS_VM_NpcViewTargetIndicator::~UDS_VM_NpcViewTargetIndicator(UDS_VM_NpcViewTargetIndicator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcViewTargetIndicator__6B_;
  pFVar1 = (this->SkillAttackLinkStartTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillAttackLinkIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  pIVar3 = (this->CurrentState).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->CharInfoText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b6b00

IClassDescriptor * __thiscall
UDS_VM_NpcViewTargetIndicator::GetFieldNotificationDescriptor(UDS_VM_NpcViewTargetIndicator *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NpcViewTargetIndicator::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b7760

UClass * __cdecl UDS_VM_NpcViewTargetIndicator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcViewTargetIndicator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcViewTargetIndicator",
               &Z_Registration_Info_UClass_UDS_VM_NpcViewTargetIndicator.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcViewTargetIndicator,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_NpcViewTargetIndicator>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcViewTargetIndicator>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcViewTargetIndicator.InnerSingleton;
}

// GetTickableTickType @ 14b6b7cb0

ETickableTickType __thiscall
UDS_VM_NpcViewTargetIndicator::GetTickableTickType(UDS_VM_NpcViewTargetIndicator *this)

{
  return Conditional;
}

// IsUpdate @ 14b6b7ce0

bool __thiscall UDS_VM_NpcViewTargetIndicator::IsUpdate(UDS_VM_NpcViewTargetIndicator *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_NpcViewTargetIndicator @ 14b6b7e40

void __cdecl UDS_VM_NpcViewTargetIndicator::StaticRegisterNativesUDS_VM_NpcViewTargetIndicator(void)

{
  return;
}

// BindModel @ 14be127f0

void __thiscall UDS_VM_NpcViewTargetIndicator::BindModel(UDS_VM_NpcViewTargetIndicator *this)

{
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_NpcViewTargetIndicator>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
              *)&FDS_BattleService::OnColliderDestructionEventDelegate,
             (UDS_VM_NpcViewTargetIndicator *)&stack0x00000010,(pmf_d0490eab *)this);
  TMulticastDelegateRegistration<void___cdecl(unsigned___int64,unsigned___int64,bool,int),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_NpcViewTargetIndicator>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,unsigned___int64,bool,int),FDefaultDelegateUserPolicy>
              *)&FDS_BattleService::OnHpChangeEventDelegate,
             (UDS_VM_NpcViewTargetIndicator *)&stack0x00000010,(pmf_3ef50afb *)this);
  TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_NpcViewTargetIndicator>
            ((TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
              *)&FDS_BattleService::OnGroupDamageEventDelegate,
             (UDS_VM_NpcViewTargetIndicator *)&stack0x00000010,(pmf_5fbe972c *)this);
  return;
}

// InitBossData @ 14be24440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_VM_NpcViewTargetIndicator::InitBossData(UDS_VM_NpcViewTargetIndicator *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  ADS_CameraManager *pAVar4;
  UDS_SkillDataSet *this_00;
  UObject *pUVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  FWeakObjectPtr local_120;
  FWeakObjectPtr local_118 [2];
  code *local_108;
  int iStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  int local_e8;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  code *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined1 local_a0 [24];
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  pAVar4 = ADS_CameraManager::GetInst();
  if ((pAVar4 != (ADS_CameraManager *)0x0) && (pAVar4->BossEntityID != 0)) {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_120);
    bVar3 = FWeakObjectPtr::IsValid(&local_120);
    if (bVar3) {
      this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_120);
      UDS_SkillDataSet::GetAllSkillData
                (this_00,(TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                          *)local_88);
      uVar9 = local_60;
      iStack_100 = 0;
      uStack_fc = 1;
      local_e8 = 0;
      uStack_ec = 0;
      if (local_60 != 0) {
        puVar10 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar10 = local_68;
        }
        uVar11 = *puVar10;
        local_e8 = 0;
        while (uVar11 == 0) {
          lVar7 = (longlong)iStack_100;
          local_e8 = local_e8 + 0x20;
          iStack_100 = iStack_100 + 1;
          uStack_ec = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_100)
          goto LAB_14be24561;
          uVar11 = puVar10[lVar7 + 1];
        }
        uStack_fc = -uVar11 & uVar11;
        uVar1 = (ulonglong)uStack_fc * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_d8 = (int)lVar7;
        uStack_ec = local_e8 + -1 + local_d8;
        if ((int)local_60 < (int)uStack_ec) {
          uStack_ec = local_60;
        }
      }
LAB_14be24561:
      local_108 = (code *)local_88;
      local_f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uVar11 = local_60 & 0xffffffe0;
      iStack_e0 = local_88._8_4_ - local_54;
      uStack_f0 = 0xffffffff;
      TStack_c8.CurrentBitIndex = uStack_ec;
      TStack_c8.UnvisitedBitMask = 0xffffffff;
      TStack_c8._padding_ = CONCAT44(uStack_fc,iStack_100);
      iVar8 = (int)local_60 >> 5;
      TStack_c8._28_4_ = uStack_ec;
      TStack_c8.BaseBitIndex = local_e8;
      uStack_a8 = CONCAT44(uStack_dc,iStack_e0);
      bVar6 = (byte)local_60;
      uStack_e4 = uStack_ec;
      local_d0 = local_108;
      TStack_c8.Array = local_f8;
      if (((int)local_60 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar9 != local_60) {
        puVar10 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar10 = local_68;
        }
        uVar9 = -1 << (bVar6 & 0x1f) & puVar10[iVar8];
        while (uVar9 == 0) {
          lVar7 = (longlong)iVar8;
          uVar11 = uVar11 + 0x20;
          iVar8 = iVar8 + 1;
          uVar9 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
          goto LAB_14be2466c;
          uVar9 = puVar10[lVar7 + 1];
        }
        uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar9 = (int)lVar7 + -1 + uVar11;
        if ((int)local_60 < (int)uVar9) {
          uVar9 = local_60;
        }
      }
LAB_14be2466c:
      while( true ) {
        pcVar2 = local_d0;
        if (*(int *)(local_d0 + 8) - *(int *)(local_d0 + 0x34) != (int)uStack_a8) {
          `TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
        }
        if (((TStack_c8.CurrentBitIndex == uVar9) &&
            (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (pcVar2 == (code *)local_88)) break;
        local_118[0] = *(FWeakObjectPtr *)
                        (*(longlong *)pcVar2 + 4 + (longlong)TStack_c8.CurrentBitIndex * 0x14);
        bVar3 = FWeakObjectPtr::IsValid(local_118);
        if (!bVar3) break;
        local_108 = OnBossSkillStartEndEvent;
        iStack_100 = 0;
        local_a0._16_8_ = (ulonglong)uStack_fc << 0x20;
        local_a0._8_8_ = OnBossSkillStartEndEvent;
        pUVar5 = FWeakObjectPtr::Get(local_118);
        TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_VM_NpcViewTargetIndicator>
                  ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                    *)&pUVar5[10].field_0x10,(UDS_VM_NpcViewTargetIndicator *)local_a0,
                   (pmf_8e8160df *)this);
        TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
      }
      local_40 = 0;
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
    }
  }
  return;
}

// OnAnimationFinished @ 14be28fc0

void __thiscall
UDS_VM_NpcViewTargetIndicator::OnAnimationFinished
          (UDS_VM_NpcViewTargetIndicator *this,FDS_WidgetAnimationEventField *param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Open_ani_block");
  local_10 = FFieldNotificationClassDescriptor::bIsBlocked.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsBlocked.FieldName;
  if ((this->AnimationEvent).AnimationName == *pFVar1) {
    if (this->bIsBlocked != false) {
      this->bIsBlocked = false;
LAB_14be29086:
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      return;
    }
  }
  else {
    pFVar1 = ::FName::FName(local_res8,"Open_ani_predicted");
    local_10 = FFieldNotificationClassDescriptor::bIsPredictedDamage.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::bIsPredictedDamage.FieldName;
    if ((this->AnimationEvent).AnimationName == *pFVar1) {
      if (this->bIsPredictedDamage != false) {
        this->bIsPredictedDamage = false;
        goto LAB_14be29086;
      }
    }
    else {
      pFVar1 = ::FName::FName(local_res8,"Open_ani_hit");
      local_10 = FFieldNotificationClassDescriptor::bIsDamaged.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::bIsDamaged.FieldName;
      if ((this->AnimationEvent).AnimationName == *pFVar1) {
        if (this->bIsDamaged != false) {
          this->bIsDamaged = false;
          goto LAB_14be29086;
        }
      }
      else {
        pFVar1 = ::FName::FName(local_res8,"Open_ani_no_hit");
        if ((this->AnimationEvent).AnimationName == *pFVar1) {
          ShowNoHitEffect(this,false);
          return;
        }
      }
    }
  }
  return;
}

// OnBossSkillStartEndEvent @ 14be290e0

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
UDS_VM_NpcViewTargetIndicator::OnBossSkillStartEndEvent
          (UDS_VM_NpcViewTargetIndicator *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1,
          bool param_2)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  bool bVar4;
  FDS_EntityBase *pFVar5;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *pTVar6;
  ADS_CameraManager *pAVar7;
  FDS_EntityBase *pFVar8;
  FWeakObjectPtr *pFVar9;
  UObject *pUVar10;
  FDS_SkillActLevelTableRow *pFVar11;
  FWeakObjectPtr local_res10;
  undefined1 local_res20 [8];
  ulong64 local_18;
  FWeakObjectPtr local_10;
  
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (((bVar4) && (param_2)) &&
     (pFVar5 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID), pFVar5 != (FDS_EntityBase *)0x0
     )) {
    pTVar6 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
             (**(code **)(pFVar5->_padding_ + 0x150))(pFVar5);
    bVar4 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(pTVar6,(void *)0x0);
    if (((!bVar4) && (pAVar7 = ADS_CameraManager::GetInst(), pAVar7 != (ADS_CameraManager *)0x0)) &&
       ((local_18 = pAVar7->BossEntityID, local_18 != 0 &&
        (pFVar8 = FDS_EntityBase::GetEntityBase(&local_18), pFVar8 != (FDS_EntityBase *)0x0)))) {
      pTVar6 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
               (**(code **)(pFVar8->_padding_ + 0x150))(pFVar8);
      bVar4 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(pTVar6,(void *)0x0);
      if (!bVar4) {
        pFVar9 = (FWeakObjectPtr *)(**(code **)(pFVar8->_padding_ + 0x150))(pFVar8,local_res20);
        FWeakObjectPtr::Get(pFVar9);
        pFVar9 = (FWeakObjectPtr *)(**(code **)(pFVar5->_padding_ + 0x150))(pFVar5,local_res20);
        FWeakObjectPtr::Get(pFVar9);
        local_res20[0] = 0x1b;
        UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                  ((ulong64 *)&local_10,(EDS_AbilityTagType *)&local_18);
        bVar4 = FWeakObjectPtr::IsValid(&local_10);
        if (bVar4) {
          pUVar10 = FWeakObjectPtr::Get(&local_10);
          pFVar5 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar10[2].field_0x10);
          if (pFVar5 != (FDS_EntityBase *)0x0) {
            pFVar9 = (FWeakObjectPtr *)(**(code **)(pFVar5->_padding_ + 0x150))(pFVar5,local_res20);
            FWeakObjectPtr::Get(pFVar9);
          }
        }
        this->SkillElapsedTime = 0.0;
        pUVar10 = FWeakObjectPtr::Get(&local_res10);
        TArray<int,TSizedDefaultAllocator<32>_>::operator=
                  (&this->SkillAttackLinkIDs,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)&pUVar10[3].field_0x18);
        this->PrevLinkIndex = -1;
        pUVar10 = FWeakObjectPtr::Get(&local_res10);
        pFVar11 = FDS_SkillActLevelTableRow::GetRef((longlong)*(int *)&pUVar10[2].field_0x24,true);
        pTVar2 = &this->SkillAttackLinkStartTimes;
        if (pTVar2 != &pFVar11->LinkStartTime) {
          iVar3 = (pFVar11->LinkStartTime).ArrayNum;
          piVar1 = &(this->SkillAttackLinkStartTimes).ArrayMax;
          _Src = (pFVar11->LinkStartTime).AllocatorInstance.Data;
          (this->SkillAttackLinkStartTimes).ArrayNum = iVar3;
          if ((iVar3 == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
            return;
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
          }
        }
      }
    }
  }
  return;
}

// OnCloseInit @ 14be2d1c0

void __thiscall UDS_VM_NpcViewTargetIndicator::OnCloseInit(UDS_VM_NpcViewTargetIndicator *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnColliderDestructionEvent @ 14be2d410

void __thiscall
UDS_VM_NpcViewTargetIndicator::OnColliderDestructionEvent
          (UDS_VM_NpcViewTargetIndicator *this,ulong64 param_1)

{
  if (this->TargetEntityID == param_1) {
    this->bIsColliderDestruction = false;
  }
  return;
}

// OnGroupDamageEvent @ 14be306d0

void __thiscall
UDS_VM_NpcViewTargetIndicator::OnGroupDamageEvent
          (UDS_VM_NpcViewTargetIndicator *this,GroupDamageEventResponse *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  RepeatedPtrField<server_msg::DamageEvent> *pRVar4;
  bool bVar5;
  ADS_CameraManager *pAVar6;
  UDS_DataSetBase *this_00;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_01;
  UObject *pUVar7;
  UClass *pUVar8;
  FDS_SkillActLevelTableRow *pFVar9;
  UDS_CharBuffData *this_02;
  Impl_ *pIVar10;
  EDS_SpecialBuffType local_res18 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  UObject *local_30;
  undefined1 local_28 [16];
  
  pAVar6 = ADS_CameraManager::GetInst();
  if ((pAVar6 != (ADS_CameraManager *)0x0) && (pAVar6->BossEntityID != 0)) {
    pIVar10 = &param_1->_impl_;
    if ((~*(byte *)&(param_1->_impl_).damage_events_ & 1) == 0) {
      pIVar10 = (Impl_ *)(*(longlong *)&pIVar10->damage_events_ + 7);
    }
    iVar1 = *(int *)&(param_1->_impl_).damage_events_.field_0x8;
    pRVar4 = &pIVar10->damage_events_;
    for (; pIVar10 != (Impl_ *)(&pRVar4->field_0x0 + (longlong)iVar1 * 8);
        pIVar10 = (Impl_ *)&(pIVar10->damage_events_).field_0x8) {
      lVar3 = *(longlong *)&pIVar10->damage_events_;
      if ((*(ulong64 *)(lVar3 + 0x30) == this->TargetEntityID) && (*(int *)(lVar3 + 0x3c) != 0)) {
        TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_38);
        bVar5 = FWeakObjectPtr::IsValid(&local_38);
        if (bVar5) {
          FDS_SkillAttackTableRow::GetRef((longlong)*(int *)(lVar3 + 0x38),true);
          this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_38);
          this_01 = UDS_DataSetBase::GetData(this_00,(ulong64)local_28);
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
          if (pUVar7 == (UObject *)0x0) {
LAB_14be307db:
            pUVar7 = (UObject *)0x0;
          }
          else {
            pUVar8 = Z_Construct_UClass_UDS_SkillData_NoRegister();
            iVar2 = (int)pUVar8->_padding_;
            if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar8->_padding_)) goto LAB_14be307db;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_30 = pUVar7;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_30);
          pUVar7 = FWeakObjectPtr::Get(&local_res20);
          pFVar9 = FDS_SkillActLevelTableRow::GetRef((longlong)*(int *)&pUVar7[2].field_0x24,true);
          if (pFVar9->IsCollideBlockCheck == false) {
            return;
          }
        }
        bVar5 = FWeakObjectPtr::IsValid(&(this->CharBuffData).WeakPtr);
        if (bVar5) {
          this_02 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&(this->CharBuffData).WeakPtr);
          local_res18[0] = BuffCollide;
          bVar5 = UDS_CharBuffData::HasSpecialBuffInfo(this_02,local_res18);
          if ((bVar5) && (this->bIsColliderDestruction == false)) {
            ShowBlockEffect(this,true);
            return;
          }
        }
      }
    }
  }
  return;
}

// OnHpChangeEvent @ 14be308c0

void __thiscall
UDS_VM_NpcViewTargetIndicator::OnHpChangeEvent
          (UDS_VM_NpcViewTargetIndicator *this,ulong64 param_1,ulong64 param_2,bool param_3,
          int param_4)

{
  ADS_CameraManager *pAVar1;
  
  if (this->TargetEntityID == param_1) {
    pAVar1 = ADS_CameraManager::GetInst();
    if ((((pAVar1 == (ADS_CameraManager *)0x0) || (param_2 == pAVar1->BossEntityID)) && (!param_3))
       && (0 < param_4)) {
      ShowDamageEffect(this,true);
    }
  }
  return;
}

// OnSetViewModel @ 14be3b0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NpcViewTargetIndicator::OnSetViewModel
          (UDS_VM_NpcViewTargetIndicator *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar5;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar6;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar7;
  TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> TVar8;
  undefined1 auStackY_1f8 [32];
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_1c8;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_178.Object = param_1->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Entity>(&local_1c8,&local_178);
  if (local_1c8.Object == (FDS_ViewModelContext_Entity *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)local_1c8.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_NpcViewTargetIndicator::OnSetViewModel",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x2d,L"context is Invalid.");
      if ((FDS_ViewModelContext_Entity *)local_148._padding_ != (FDS_ViewModelContext_Entity *)0x0)
      {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if (local_1c8.Object == (FDS_ViewModelContext_Entity *)0x0) {
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
    this->TargetEntityID = (local_1c8.Object)->EntityID;
    TVar5 = UDS_CharInfoData::GetData((ulong64)local_168);
                    /* WARNING: Load size is inaccurate */
    (this->CharInfoData).WeakPtr = *TVar5.WeakPtr;
    TVar6 = UDS_CharStatusData::GetData((ulong64)local_160);
                    /* WARNING: Load size is inaccurate */
    (this->CharStatusData).WeakPtr = *TVar6.WeakPtr;
    TVar7 = UDS_CharStateData::GetData((ulong64)local_158);
                    /* WARNING: Load size is inaccurate */
    (this->CharStateData).WeakPtr = *TVar7.WeakPtr;
    TVar8 = UDS_CharBuffData::GetData((ulong64)local_150);
    bVar3 = this->bIsPredictedDamage;
                    /* WARNING: Load size is inaccurate */
    (this->CharBuffData).WeakPtr = *TVar8.WeakPtr;
    FVar2 = FFieldNotificationClassDescriptor::bIsPredictedDamage.FieldName;
    if (bVar3 != false) {
      local_1b0 = FFieldNotificationClassDescriptor::bIsPredictedDamage.BitNumber;
      this->bIsPredictedDamage = false;
      local_1b8 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
    FVar2 = FFieldNotificationClassDescriptor::bIsDamaged.FieldName;
    if (this->bIsDamaged != false) {
      local_1a0 = FFieldNotificationClassDescriptor::bIsDamaged.BitNumber;
      this->bIsDamaged = false;
      local_1a8 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
    }
    FVar2 = FFieldNotificationClassDescriptor::bIsNoHit.FieldName;
    if (this->bIsNoHit != false) {
      local_190 = FFieldNotificationClassDescriptor::bIsNoHit.BitNumber;
      this->bIsNoHit = false;
      local_198 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    }
    FVar2 = FFieldNotificationClassDescriptor::bIsBlocked.FieldName;
    if (this->bIsBlocked != false) {
      local_180 = FFieldNotificationClassDescriptor::bIsBlocked.BitNumber;
      this->bIsBlocked = false;
      local_188 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14be42d90

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
UDS_VM_NpcViewTargetIndicator::OnUpdate(UDS_VM_NpcViewTargetIndicator *this,float param_1)

{
  int *piVar1;
  EDS_ImpactType EVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *pTVar12;
  ADS_CameraManager *pAVar13;
  FDS_EntityBase *pFVar14;
  FDS_SkillAttackTableRow *pFVar15;
  FWeakObjectPtr *pFVar16;
  UObject *pUVar17;
  FDS_EntityBase *pFVar18;
  FPayload *pFVar19;
  TRotator<double> *pTVar20;
  TVector<double>_u_0 *pTVar21;
  int iVar22;
  FRotationConversionCache *this_00;
  uint uVar23;
  uint uVar24;
  FDS_EntityBase *pFVar25;
  uint uVar26;
  FDS_EntityBase *pFVar27;
  FDS_EntityBase *pFVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  double dVar32;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  ulong64 local_res8;
  undefined1 local_res10;
  FWeakObjectPtr local_res18;
  FDS_EntityBase *local_res20;
  double local_348;
  TQuat<double> local_338;
  TVector<double>_u_0 local_318;
  TVector<double>_u_0 local_300;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  TVector<double>_u_0 local_2d0;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  undefined1 local_270 [16];
  undefined1 local_260 [8];
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  undefined1 local_240 [16];
  TVector<double>_u_0 local_230;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  TVector<double>_u_0 local_188;
  TRotator<double> local_170;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  TRotator<double> local_110;
  TVector<double> local_f8;
  TVector<double> local_e0;
  TVector<double> local_c8;
  TVector<double> local_b0 [4];
  
  this->SkillElapsedTime = param_1 + this->SkillElapsedTime;
  if (this->TargetEntityID == 0) {
    return;
  }
  local_res20 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID);
  if (local_res20 == (FDS_EntityBase *)0x0) {
    return;
  }
  pTVar12 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
            (**(code **)(local_res20->_padding_ + 0x150))(local_res20);
  bVar10 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(pTVar12,(void *)0x0);
  if (bVar10) {
    return;
  }
  pAVar13 = ADS_CameraManager::GetInst();
  if (pAVar13 == (ADS_CameraManager *)0x0) {
    return;
  }
  local_res8 = pAVar13->BossEntityID;
  if (local_res8 == 0) {
    return;
  }
  pFVar14 = FDS_EntityBase::GetEntityBase(&local_res8);
  if (pFVar14 == (FDS_EntityBase *)0x0) {
    return;
  }
  pTVar12 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
            (**(code **)(pFVar14->_padding_ + 0x150))(pFVar14);
  bVar10 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(pTVar12,(void *)0x0);
  if (bVar10) {
    return;
  }
  if (this->bInitedBossData == false) {
    InitBossData(this);
  }
  iVar22 = (this->SkillAttackLinkIDs).ArrayNum;
  this->bInitedBossData = true;
  if (iVar22 == 0) {
    return;
  }
  pFVar27 = (FDS_EntityBase *)&DAT_ffffffff;
  pFVar18 = (FDS_EntityBase *)0x0;
  pFVar25 = pFVar18;
  pFVar28 = pFVar18;
  if (iVar22 < 1) {
    return;
  }
  do {
    uVar26 = (uint)pFVar27;
    uVar24 = (uint)pFVar25;
    uVar23 = 0;
    if ((-1 < (int)uVar24) && ((int)uVar24 < (this->SkillAttackLinkStartTimes).ArrayNum)) {
      uVar11 = 0;
      if ((int)uVar24 < (this->SkillAttackLinkIDs).ArrayNum) {
        uVar11 = ~uVar24 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar15 = FDS_SkillAttackTableRow::GetRef
                          ((longlong)
                           *(int *)((this->SkillAttackLinkIDs).AllocatorInstance.Data +
                                   (longlong)pFVar28 * 4),true);
      if (pFVar15->IsExpectedAttackLine != false) {
        uVar11 = uVar23;
        if ((int)uVar24 < (this->SkillAttackLinkStartTimes).ArrayNum) {
          uVar11 = ~uVar24 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar27 = pFVar25;
        if (this->SkillElapsedTime <
            *(float *)((this->SkillAttackLinkStartTimes).AllocatorInstance.Data +
                      (longlong)pFVar28 * 4)) break;
      }
    }
    uVar26 = (uint)pFVar27;
    pFVar25 = (FDS_EntityBase *)(ulonglong)(uVar24 + 1);
    pFVar28 = (FDS_EntityBase *)((longlong)&pFVar28->_padding_ + 1);
  } while ((int)(uVar24 + 1) < (this->SkillAttackLinkIDs).ArrayNum);
  if (uVar26 == 0xffffffff) {
    return;
  }
  if ((this->bIsDamaged == true) && (this->PrevLinkIndex == uVar26)) {
    piVar1 = &(this->SkillAttackLinkIDs).ArrayMax;
    (this->SkillAttackLinkIDs).ArrayNum = 0;
    if (*piVar1 == 0) {
      return;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SkillAttackLinkIDs).AllocatorInstance,0,piVar1);
    return;
  }
  this->PrevLinkIndex = uVar26;
  pFVar16 = (FWeakObjectPtr *)(**(code **)(pFVar14->_padding_ + 0x150))(pFVar14,local_280);
  pUVar17 = FWeakObjectPtr::Get(pFVar16);
  lVar3 = *(longlong *)(pUVar17 + 0xb);
  if (lVar3 == 0) {
    uVar29 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar35 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_2e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_2dc = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    local_118 = *(undefined8 *)(lVar3 + 0x220);
    local_128 = *(undefined4 *)(lVar3 + 0x210);
    uStack_124 = *(undefined4 *)(lVar3 + 0x214);
    uStack_120 = *(undefined4 *)(lVar3 + 0x218);
    uStack_11c = *(undefined4 *)(lVar3 + 0x21c);
    uVar29 = (undefined4)local_118;
    uVar35 = (undefined4)((ulonglong)local_118 >> 0x20);
    uVar47 = local_128;
    uVar48 = uStack_124;
    uStack_2e0 = uStack_120;
    uStack_2dc = uStack_11c;
  }
  local_2d8 = (double)CONCAT44(uVar35,uVar29);
  local_2e8 = uVar47;
  uStack_2e4 = uVar48;
  pFVar16 = (FWeakObjectPtr *)(**(code **)(local_res20->_padding_ + 0x150))(local_res20,local_278);
  pUVar17 = FWeakObjectPtr::Get(pFVar16);
  uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  lVar3 = *(longlong *)(pUVar17 + 0xb);
  uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar46 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (lVar3 != 0) {
    local_148 = *(undefined8 *)(lVar3 + 0x220);
    local_158 = *(undefined4 *)(lVar3 + 0x210);
    uStack_154 = *(undefined4 *)(lVar3 + 0x214);
    uStack_150 = *(undefined4 *)(lVar3 + 0x218);
    uStack_14c = *(undefined4 *)(lVar3 + 0x21c);
    uVar43 = local_158;
    uVar44 = uStack_154;
    uVar45 = uStack_150;
    uVar46 = uStack_14c;
  }
  local_348 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_res10 = 0x1b;
  UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
            ((ulong64 *)&local_res18,(EDS_AbilityTagType *)&local_res8);
  bVar10 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar10) {
    pUVar17 = FWeakObjectPtr::Get(&local_res18);
    pFVar18 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar17[2].field_0x10);
    if (pFVar18 != (FDS_EntityBase *)0x0) {
      pFVar16 = (FWeakObjectPtr *)(**(code **)(pFVar18->_padding_ + 0x150))(pFVar18,local_270);
      pUVar17 = FWeakObjectPtr::Get(pFVar16);
      lVar3 = *(longlong *)(pUVar17 + 0xb);
      if (lVar3 == 0) {
        uVar30 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar36 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      else {
        local_130 = *(undefined8 *)(lVar3 + 0x220);
        local_140 = *(undefined4 *)(lVar3 + 0x210);
        uStack_13c = *(undefined4 *)(lVar3 + 0x214);
        uStack_138 = *(undefined4 *)(lVar3 + 0x218);
        uStack_134 = *(undefined4 *)(lVar3 + 0x21c);
        uVar30 = (undefined4)local_130;
        uVar36 = (undefined4)((ulonglong)local_130 >> 0x20);
        uVar29 = local_140;
        uVar35 = uStack_13c;
        uVar41 = uStack_138;
        uVar42 = uStack_134;
      }
      local_348 = (double)CONCAT44(uVar36,uVar30);
    }
  }
  uVar24 = uVar26 + 1;
  if ((-1 < (int)uVar24) && ((int)uVar24 < (this->SkillAttackLinkIDs).ArrayNum)) {
    uVar11 = uVar23;
    if ((int)uVar24 < (this->SkillAttackLinkIDs).ArrayNum) {
      uVar11 = ~uVar24 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_res20 = (FDS_EntityBase *)
                  FDS_SkillAttackTableRow::GetRef
                            ((longlong)
                             *(int *)((this->SkillAttackLinkIDs).AllocatorInstance.Data +
                                     (longlong)(int)uVar24 * 4),true);
    if (((((FDS_SkillAttackTableRow *)local_res20)->ImpactTime).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_res20 = (FDS_EntityBase *)
                  (((TArray<float,TSizedDefaultAllocator<32>_> *)&local_res20->HiddenPolicy)->
                  AllocatorInstance).Data;
    uVar11 = uVar23;
    if ((int)(uVar26 + 1) < (this->SkillAttackLinkStartTimes).ArrayNum) {
      uVar11 = ~uVar24 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(float *)((this->SkillAttackLinkStartTimes).AllocatorInstance.Data +
                  (longlong)(int)uVar24 * 4) + *(float *)&local_res20->_padding_ <
        this->SkillElapsedTime) {
      if (this->bIsPredictedDamage != true) {
        return;
      }
      ShowNoHitEffect(this,true);
      return;
    }
  }
  if (pFVar18 == (FDS_EntityBase *)0x0) {
    return;
  }
  pTVar12 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
            (**(code **)(pFVar18->_padding_ + 0x150))(pFVar18);
  bVar10 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(pTVar12,(void *)0x0);
  if (bVar10) {
    return;
  }
  if ((int)uVar26 < (this->SkillAttackLinkIDs).ArrayNum) {
    uVar23 = ~uVar26 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar15 = FDS_SkillAttackTableRow::GetRef
                      ((longlong)
                       *(int *)((this->SkillAttackLinkIDs).AllocatorInstance.Data +
                               (longlong)(int)uVar26 * 4),true);
  uVar30 = SUB84(local_260,0);
  pFVar16 = (FWeakObjectPtr *)(**(code **)(pFVar14->_padding_ + 0x150))(pFVar14);
  pUVar17 = FWeakObjectPtr::Get(pFVar16);
  lVar3 = *(longlong *)(pUVar17 + 0xb);
  if (lVar3 == 0) {
    uVar30 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
    uVar36 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
    local_170.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_170.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  }
  else {
    local_338.X = *(double *)(lVar3 + 0x1f0);
    local_338.Y = *(double *)(lVar3 + 0x1f8);
    local_338.Z = *(double *)(lVar3 + 0x200);
    local_338.W = *(double *)(lVar3 + 0x208);
    this_00 = (FRotationConversionCache *)(lVar3 + 0x1e0);
    pFVar19 = FRotationConversionCache::GetOrCreatePayload(this_00);
    auVar34._8_8_ = -(ulonglong)((pFVar19->CachedQuat).W != local_338.W);
    auVar34._0_8_ = -(ulonglong)((pFVar19->CachedQuat).Z != local_338.Z);
    uVar23 = movmskpd(uVar30,auVar34);
    auVar33._8_8_ = -(ulonglong)(local_338.Y != (pFVar19->CachedQuat).Y);
    auVar33._0_8_ = -(ulonglong)(local_338.X != (pFVar19->CachedQuat).X);
    iVar22 = movmskpd((int)this_00,auVar33);
    if ((uVar23 & 0x3fffffff) != 0 || iVar22 != 0) {
      (pFVar19->CachedQuat).X = local_338.X;
      (pFVar19->CachedQuat).Y = local_338.Y;
      (pFVar19->CachedQuat).Z = local_338.Z;
      (pFVar19->CachedQuat).W = local_338.W;
      pTVar20 = UE::Math::TQuat<double>::Rotator(&local_338,&local_110);
      dVar32 = pTVar20->Yaw;
      (pFVar19->CachedRotator).Pitch = pTVar20->Pitch;
      (pFVar19->CachedRotator).Yaw = dVar32;
      (pFVar19->CachedRotator).Roll = pTVar20->Roll;
    }
    dVar32 = (pFVar19->CachedRotator).Roll;
    uVar30 = SUB84(dVar32,0);
    uVar36 = (undefined4)((ulonglong)dVar32 >> 0x20);
    local_170.Pitch = (pFVar19->CachedRotator).Pitch;
    local_170.Yaw = (pFVar19->CachedRotator).Yaw;
  }
  local_170.Roll = (double)CONCAT44(uVar36,uVar30);
  UE::Math::TRotator<double>::RotateVector
            (&local_170,(TVector<double> *)&local_2d0._s_0,&pFVar15->LocationOffset);
  EVar2 = pFVar15->ImpactType;
  dVar38 = (double)CONCAT44(uVar48,uVar47) + local_2d0._s_0.X;
  dVar32 = (double)CONCAT44(uStack_2dc,uStack_2e0) + local_2d0._s_0.Y;
  dVar37 = local_2d8 + local_2d0._s_0.Z;
  if (EVar2 == Target) {
    if (this->TargetEntityID != pFVar18->EntityID) {
      return;
    }
    goto LAB_14be439ab;
  }
  if (EVar2 == TargetCircle) {
    fVar31 = pFVar18->ScaledCapsuleRadius * __real_3f000000;
    dVar32 = (double)CONCAT44(uVar35,uVar29) - (double)CONCAT44(uVar44,uVar43);
    dVar38 = (double)CONCAT44(uVar42,uVar41) - (double)CONCAT44(uVar46,uVar45);
    dVar32 = SQRT(dVar38 * dVar38 + dVar32 * dVar32);
  }
  else {
    if (EVar2 == SelfDirect) {
      pFVar16 = (FWeakObjectPtr *)(**(code **)(pFVar14->_padding_ + 0x150))(pFVar14,local_258);
      pUVar17 = FWeakObjectPtr::Get(pFVar16);
      if (*(USceneComponent **)(pUVar17 + 0xb) == (USceneComponent *)0x0) {
        pTVar21 = &local_230;
        local_230._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
        local_230._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
        local_230._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar21 = &USceneComponent::GetForwardVector(*(USceneComponent **)(pUVar17 + 0xb),&local_f8)
                   ->field0_0x0;
      }
      dVar39 = __real_3e45798ee0000000;
      local_218._s_0.X = (((TVector<double>_u_0 *)&(pTVar21->_s_0).X)->_s_0).X;
      local_218._s_0.Y = (pTVar21->_s_0).Y;
      local_218._s_0.Z = (pTVar21->_s_0).Z;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_218._s_0,(TVector<double> *)&local_2b8._s_0,
                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      pFVar16 = (FWeakObjectPtr *)(**(code **)(pFVar14->_padding_ + 0x150))(pFVar14,local_250);
      pUVar17 = FWeakObjectPtr::Get(pFVar16);
      if (*(USceneComponent **)(pUVar17 + 0xb) == (USceneComponent *)0x0) {
        pTVar21 = &local_200;
        local_200._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        local_200._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        local_200._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar21 = &USceneComponent::GetRightVector(*(USceneComponent **)(pUVar17 + 0xb),&local_e0)->
                   field0_0x0;
      }
      local_1e8._s_0.X = (((TVector<double>_u_0 *)&(pTVar21->_s_0).X)->_s_0).X;
      local_1e8._s_0.Y = (pTVar21->_s_0).Y;
      local_1e8._s_0.Z = (pTVar21->_s_0).Z;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_1e8._s_0,(TVector<double> *)&local_2a0._s_0,dVar39,
                 &UE::Math::TVector<double>::ZeroVector);
      dVar38 = (double)CONCAT44(uVar35,uVar29) - dVar38;
      local_348 = local_348 - dVar37;
      dVar39 = (double)(pFVar18->ScaledCapsuleRadius * __real_3f000000);
      dVar32 = (double)CONCAT44(uVar42,uVar41) - dVar32;
      dVar37 = (double)(float)(dVar32 * local_2b8._s_0.Y + dVar38 * local_2b8._s_0.X +
                              local_348 * local_2b8._s_0.Z);
      if (dVar37 < pFVar15->AttackDistanceMin - dVar39) {
        return;
      }
      if (dVar39 + pFVar15->AttackDistanceMax < dVar37) {
        return;
      }
      if (pFVar15->AttackWidth * __real_3fe0000000000000 <
          (double)(float)((uint)(float)(dVar38 * local_2a0._s_0.X + dVar32 * local_2a0._s_0.Y +
                                       local_348 * local_2a0._s_0.Z) &
                         __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        return;
      }
      goto LAB_14be439ab;
    }
    if (EVar2 != SelfCircle) {
      if (EVar2 != SelfCross) {
        return;
      }
      pFVar16 = (FWeakObjectPtr *)(**(code **)(pFVar14->_padding_ + 0x150))(pFVar14,local_248);
      pUVar17 = FWeakObjectPtr::Get(pFVar16);
      if (*(USceneComponent **)(pUVar17 + 0xb) == (USceneComponent *)0x0) {
        pTVar21 = &local_1d0;
        local_1d0._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
        local_1d0._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
        local_1d0._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar21 = &USceneComponent::GetForwardVector(*(USceneComponent **)(pUVar17 + 0xb),&local_c8)
                   ->field0_0x0;
      }
      dVar39 = __real_3e45798ee0000000;
      local_1b8._s_0.X = (((TVector<double>_u_0 *)&(pTVar21->_s_0).X)->_s_0).X;
      local_1b8._s_0.Y = (pTVar21->_s_0).Y;
      local_1b8._s_0.Z = (pTVar21->_s_0).Z;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_1b8._s_0,(TVector<double> *)&local_300._s_0,
                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      pFVar16 = (FWeakObjectPtr *)(**(code **)(pFVar14->_padding_ + 0x150))(pFVar14,local_240);
      pUVar17 = FWeakObjectPtr::Get(pFVar16);
      if (*(USceneComponent **)(pUVar17 + 0xb) == (USceneComponent *)0x0) {
        pTVar21 = &local_1a0;
        local_1a0._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        local_1a0._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        local_1a0._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar21 = &USceneComponent::GetRightVector(*(USceneComponent **)(pUVar17 + 0xb),local_b0)->
                   field0_0x0;
      }
      local_188._s_0.X = (((TVector<double>_u_0 *)&(pTVar21->_s_0).X)->_s_0).X;
      local_188._s_0.Y = (pTVar21->_s_0).Y;
      local_188._s_0.Z = (pTVar21->_s_0).Z;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_188._s_0,(TVector<double> *)&local_318._s_0,dVar39,
                 &UE::Math::TVector<double>::ZeroVector);
      dVar38 = (double)CONCAT44(uVar35,uVar29) - dVar38;
      dVar32 = (double)CONCAT44(uVar42,uVar41) - dVar32;
      fVar31 = pFVar18->ScaledCapsuleRadius * __real_3f000000;
      local_348 = local_348 - dVar37;
      dVar40 = (double)fVar31;
      dVar37 = pFVar15->AttackDistanceMin - dVar40;
      dVar39 = (double)(float)(dVar32 * local_300._s_0.Y + dVar38 * local_300._s_0.X +
                              local_348 * local_300._s_0.Z);
      if ((dVar39 < dVar37) || (dVar40 + pFVar15->AttackDistanceMax < dVar39)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      dVar5 = dVar40 - pFVar15->AttackDistanceMin;
      uVar23 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      if ((dVar5 < dVar39) ||
         (dVar39 < (double)CONCAT44((uint)((ulonglong)pFVar15->AttackDistanceMax >> 0x20) ^ uVar23,
                                    SUB84(pFVar15->AttackDistanceMax,0) ^
                                    (uint)__xmm_80000000000000008000000000000000) - dVar40)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      dVar32 = (double)(float)(dVar32 * local_318._s_0.Y + dVar38 * local_318._s_0.X +
                              local_348 * local_318._s_0.Z);
      if ((dVar32 < dVar37) || (dVar40 + pFVar15->AttackDistanceMax < dVar32)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((dVar5 < dVar32) ||
         (dVar32 < (double)CONCAT44((uint)((ulonglong)pFVar15->AttackDistanceMax >> 0x20) ^ uVar23,
                                    SUB84(pFVar15->AttackDistanceMax,0) ^
                                    (uint)__xmm_80000000000000008000000000000000) - (double)fVar31))
      {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if ((((!bVar10) && (!bVar7)) && (!bVar8)) && (!bVar9)) {
        return;
      }
      goto LAB_14be439ab;
    }
    dVar38 = dVar38 - (double)CONCAT44(uVar44,uVar43);
    fVar31 = pFVar18->ScaledCapsuleRadius * __real_3f000000;
    dVar32 = dVar32 - (double)CONCAT44(uVar46,uVar45);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar32 * dVar32 + dVar38 * dVar38;
    auVar34 = sqrtpd(ZEXT416((uint)fVar31),auVar6);
    dVar32 = auVar34._0_8_;
  }
  if ((double)(float)dVar32 < pFVar15->AttackDistanceMin - (double)fVar31) {
    return;
  }
  if ((double)fVar31 + pFVar15->AttackDistanceMax < (double)(float)dVar32) {
    return;
  }
LAB_14be439ab:
  ShowPredictedDamageEffect(this,true);
  return;
}

// ShowBlockEffect @ 14be52f20

void __thiscall
UDS_VM_NpcViewTargetIndicator::ShowBlockEffect(UDS_VM_NpcViewTargetIndicator *this,bool param_1)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsBlocked.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsBlocked.FieldName;
  if (this->bIsBlocked != param_1) {
    this->bIsBlocked = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    if (param_1) {
      ShowDamageEffect(this,false);
      ShowPredictedDamageEffect(this,false);
      ShowNoHitEffect(this,false);
      pFVar2 = ::FName::FName(&local_res8,"Open_ani_block");
      FVar1 = *pFVar2;
      (this->AnimationEvent).AnimationName = FVar1;
      if (FVar1 != (FName)0x0) {
        (this->AnimationEvent).AnimationEventType = PlayForward;
        local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
    }
  }
  return;
}

// ShowDamageEffect @ 14be53000

void __thiscall
UDS_VM_NpcViewTargetIndicator::ShowDamageEffect(UDS_VM_NpcViewTargetIndicator *this,bool param_1)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsDamaged.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsDamaged.FieldName;
  if (this->bIsDamaged != param_1) {
    this->bIsDamaged = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    FVar1 = FFieldNotificationClassDescriptor::bIsNoHit.FieldName;
    if (param_1) {
      if (this->bIsNoHit != false) {
        local_10 = FFieldNotificationClassDescriptor::bIsNoHit.BitNumber;
        this->bIsNoHit = false;
        local_18 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
      }
      ShowPredictedDamageEffect(this,false);
      FVar1 = FFieldNotificationClassDescriptor::bIsBlocked.FieldName;
      if (this->bIsBlocked != false) {
        local_10 = FFieldNotificationClassDescriptor::bIsBlocked.BitNumber;
        this->bIsBlocked = false;
        local_18 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      pFVar2 = ::FName::FName(&local_res8,"Open_ani_hit");
      FVar1 = *pFVar2;
      (this->AnimationEvent).AnimationName = FVar1;
      if (FVar1 != (FName)0x0) {
        (this->AnimationEvent).AnimationEventType = PlayForward;
        local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
    }
  }
  return;
}

// ShowNoHitEffect @ 14be53140

void __thiscall
UDS_VM_NpcViewTargetIndicator::ShowNoHitEffect(UDS_VM_NpcViewTargetIndicator *this,bool param_1)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsNoHit.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsNoHit.FieldName;
  if (this->bIsNoHit != param_1) {
    this->bIsNoHit = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    if (param_1) {
      ShowDamageEffect(this,false);
      ShowPredictedDamageEffect(this,false);
      FVar1 = FFieldNotificationClassDescriptor::bIsBlocked.FieldName;
      if (this->bIsBlocked != false) {
        local_10 = FFieldNotificationClassDescriptor::bIsBlocked.BitNumber;
        this->bIsBlocked = false;
        local_18 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      pFVar2 = ::FName::FName(&local_res8,"Open_ani_no_hit");
      FVar1 = *pFVar2;
      (this->AnimationEvent).AnimationName = FVar1;
      if (FVar1 != (FName)0x0) {
        (this->AnimationEvent).AnimationEventType = PlayForward;
        local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
    }
  }
  return;
}

// ShowPredictedDamageEffect @ 14be53250

void __thiscall
UDS_VM_NpcViewTargetIndicator::ShowPredictedDamageEffect
          (UDS_VM_NpcViewTargetIndicator *this,bool param_1)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsPredictedDamage.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsPredictedDamage.FieldName;
  if (this->bIsPredictedDamage != param_1) {
    this->bIsPredictedDamage = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    FVar1 = FFieldNotificationClassDescriptor::bIsDamaged.FieldName;
    if (param_1) {
      if (this->bIsDamaged != false) {
        local_10 = FFieldNotificationClassDescriptor::bIsDamaged.BitNumber;
        this->bIsDamaged = false;
        local_18 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      FVar1 = FFieldNotificationClassDescriptor::bIsNoHit.FieldName;
      if (this->bIsNoHit != false) {
        local_10 = FFieldNotificationClassDescriptor::bIsNoHit.BitNumber;
        this->bIsNoHit = false;
        local_18 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      FVar1 = FFieldNotificationClassDescriptor::bIsBlocked.FieldName;
      if (this->bIsBlocked != false) {
        local_10 = FFieldNotificationClassDescriptor::bIsBlocked.BitNumber;
        this->bIsBlocked = false;
        local_18 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      pFVar2 = ::FName::FName(&local_res8,"Open_ani_predicted");
      FVar1 = *pFVar2;
      (this->AnimationEvent).AnimationName = FVar1;
      if (FVar1 != (FName)0x0) {
        (this->AnimationEvent).AnimationEventType = PlayForward;
        local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
    }
  }
  return;
}

// UnbindModel @ 14be557b0

void __thiscall UDS_VM_NpcViewTargetIndicator::UnbindModel(UDS_VM_NpcViewTargetIndicator *this)

{
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_BattleService::OnColliderDestructionEventDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_BattleService::OnHpChangeEventDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_BattleService::OnGroupDamageEventDelegate,this);
  return;
}

