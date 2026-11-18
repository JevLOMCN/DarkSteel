// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b6ad190

UClass * __cdecl UDS_VM_NpcFunction_MenuSlotQuest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotQuest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunction_MenuSlotQuest",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotQuest.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotQuest,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_NpcFunction_MenuSlotQuest>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunction_MenuSlotQuest>,local_res8,
               UDS_VM_NpcFunction_MenuSlotBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotQuest.InnerSingleton;
}

// UDS_VM_NpcFunction_MenuSlotQuest @ 14b6b2220

UDS_VM_NpcFunction_MenuSlotQuest * __thiscall
UDS_VM_NpcFunction_MenuSlotQuest::UDS_VM_NpcFunction_MenuSlotQuest
          (UDS_VM_NpcFunction_MenuSlotQuest *this,FVTableHelper *param_1)

{
  UDS_VM_NpcFunction_MenuSlotBase::UDS_VM_NpcFunction_MenuSlotBase
            ((UDS_VM_NpcFunction_MenuSlotBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_MenuSlotQuest__6B_;
  this->QuestID = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  return this;
}

// UDS_VM_NpcFunction_MenuSlotQuest @ 14b6b2270

UDS_VM_NpcFunction_MenuSlotQuest * __thiscall
UDS_VM_NpcFunction_MenuSlotQuest::UDS_VM_NpcFunction_MenuSlotQuest
          (UDS_VM_NpcFunction_MenuSlotQuest *this,FObjectInitializer *param_1)

{
  UDS_VM_NpcFunction_MenuSlotBase::UDS_VM_NpcFunction_MenuSlotBase
            ((UDS_VM_NpcFunction_MenuSlotBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_MenuSlotQuest__6B_;
  this->QuestID = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  return this;
}

// ~UDS_VM_NpcFunction_MenuSlotQuest @ 14b6b3f80

void __thiscall
UDS_VM_NpcFunction_MenuSlotQuest::~UDS_VM_NpcFunction_MenuSlotQuest
          (UDS_VM_NpcFunction_MenuSlotQuest *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_MenuSlotQuest__6B_;
  UDS_VM_NpcFunction_MenuSlotBase::~UDS_VM_NpcFunction_MenuSlotBase
            ((UDS_VM_NpcFunction_MenuSlotBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b69b0

IClassDescriptor * __thiscall
UDS_VM_NpcFunction_MenuSlotQuest::GetFieldNotificationDescriptor
          (UDS_VM_NpcFunction_MenuSlotQuest *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NpcFunction_MenuSlotQuest::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b7520

UClass * __cdecl UDS_VM_NpcFunction_MenuSlotQuest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotQuest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunction_MenuSlotQuest",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotQuest.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotQuest,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_NpcFunction_MenuSlotQuest>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunction_MenuSlotQuest>,local_res8,
               UDS_VM_NpcFunction_MenuSlotBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotQuest.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotQuest @ 14b6b7de0

void __cdecl
UDS_VM_NpcFunction_MenuSlotQuest::StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotQuest(void)

{
  return;
}

// OnClickButton @ 14bef8b90

void __thiscall
UDS_VM_NpcFunction_MenuSlotQuest::OnClickButton
          (UDS_VM_NpcFunction_MenuSlotQuest *this,FDS_ButtonEventField *param_1)

{
  UDS_NpcFunctionEvent *this_00;
  EDS_InteractionFunctionType local_res18 [16];
  
  this_00 = UDS_NpcFunctionEvent::GetEvent();
  if (this_00 != (UDS_NpcFunctionEvent *)0x0) {
    local_res18[0] = Quest;
    UDS_NpcFunctionEvent::OnChangedNpcFunction(this_00,local_res18);
    FDS_EventDelegate<int_const_&>::Broadcast(&this_00->OnSelectedQuestDelegate,&this->QuestID);
  }
  return;
}

// OnSetViewModel @ 14bf090f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_NpcFunction_MenuSlotQuest::OnSetViewModel
          (UDS_VM_NpcFunction_MenuSlotQuest *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FName FVar1;
  code *pcVar2;
  FDS_ViewModelContext_Quest *pFVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UDS_VM_QuestData *pUVar8;
  UDS_QuestManager *this_00;
  UDS_DataSetBase *this_01;
  longlong *plVar9;
  undefined1 auStack_158 [32];
  FName local_138;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_128;
  TSharedPtr<FDS_ViewModelContext_NpcFunctionMenuSlot,1> local_118;
  FName local_108;
  int local_100;
  FName local_f8;
  int local_f0;
  TSharedPtr<FDS_ViewModelContext,1> local_e8;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_e8.Object = param_1->Object;
  local_e8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_NpcFunction_MenuSlotBase::OnSetViewModel((UDS_VM_NpcFunction_MenuSlotBase *)this,&local_e8)
  ;
  local_d8.Object = param_1->Object;
  local_d8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NpcFunctionMenuSlot>(&local_118,&local_d8);
  if (local_118.Object == (FDS_ViewModelContext_NpcFunctionMenuSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    goto LAB_14bf093cb;
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar4) {
    FVar1 = (FName)(this->VM_QuestData).field0_0x0.DebugPtr;
    this->QuestID = (local_118.Object)->Value;
    if (FVar1 == (FName)0x0) {
      local_138 = FVar1;
      pUVar6 = Z_Construct_UClass_UDS_VM_QuestData_NoRegister();
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = Z_Construct_UClass_UDS_VM_QuestData_NoRegister();
      CheckIsClassChildOf_Internal(pUVar7,pUVar6);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar6);
      local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_b8._56_8_ = (UPackage *)0x0;
      local_b8._24_4_ = RF_Transient;
      local_b8._40_8_ = (UObject *)0x0;
      local_b8[0x20] = false;
      local_b8._8_8_ = this;
      local_b8._16_8_ = FVar1;
      pUVar8 = (UDS_VM_QuestData *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar9 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (pUVar8 != (UDS_VM_QuestData *)0x0) {
        *(undefined1 *)((longlong)&pUVar8->_padding_ + 4) = 0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UDS_VM_QuestData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (this->VM_QuestData).field0_0x0.DebugPtr = pUVar8;
      if (pUVar8 != (UDS_VM_QuestData *)0x0) goto LAB_14bf09277;
    }
    else {
LAB_14bf09277:
      MakeContext<FDS_ViewModelContext_Quest>(&local_128);
      pFVar3 = local_128.Object;
      if (local_128.Object != (FDS_ViewModelContext_Quest *)0x0) {
        if ((local_128.Object == (FDS_ViewModelContext_Quest *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)&pFVar3->_padding_ = 0x97;
        pFVar3->QuestID = this->QuestID;
        pUVar8 = (this->VM_QuestData).field0_0x0.DebugPtr;
        local_c8.Object = (FDS_ViewModelContext *)local_128.Object;
        local_c8.SharedReferenceCount.ReferenceController =
             local_128.SharedReferenceCount.ReferenceController;
        if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_c8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_128.SharedReferenceCount.ReferenceController);
    }
    pUVar8 = (this->VM_QuestData).field0_0x0.DebugPtr;
    if (pUVar8 != (UDS_VM_QuestData *)0x0) {
      FDS_Text::operator=((FDS_Text *)&this->_padding_,&pUVar8->QuestName);
      local_100 = UDS_VM_NpcFunction_MenuSlotBase::FFieldNotificationClassDescriptor::Name.BitNumber
      ;
      local_108 = UDS_VM_NpcFunction_MenuSlotBase::FFieldNotificationClassDescriptor::Name.FieldName
      ;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
    }
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      iVar5 = UDS_DataSetBase::GetEntityTableID(this_01);
      iVar5 = UDS_QuestManager::GetQuestConditionIconIdByNpc(this_00,this->QuestID,iVar5);
      FVar1 = UDS_VM_NpcFunction_MenuSlotBase::FFieldNotificationClassDescriptor::IconID.FieldName;
      if ((int)this->_padding_ != iVar5) {
        local_f0 = UDS_VM_NpcFunction_MenuSlotBase::FFieldNotificationClassDescriptor::IconID.
                   BitNumber;
        *(int *)&this->_padding_ = iVar5;
        local_f8 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_f8);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
LAB_14bf093cb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetVM_QuestData @ 14bf1b910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_NpcFunction_MenuSlotQuest::SetVM_QuestData(UDS_VM_NpcFunction_MenuSlotQuest *this)

{
  FName FVar1;
  code *pcVar2;
  FDS_ViewModelContext_Quest *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_VM_QuestData *pUVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  FName local_c8;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FVar1 = (FName)(this->VM_QuestData).field0_0x0.DebugPtr;
  if (FVar1 == (FName)0x0) {
    local_c8 = FVar1;
    pUVar5 = Z_Construct_UClass_UDS_VM_QuestData_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_VM_QuestData_NoRegister();
    CheckIsClassChildOf_Internal(pUVar6,pUVar5);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar7 = (UDS_VM_QuestData *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar7 != (UDS_VM_QuestData *)0x0) {
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_QuestData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_QuestData).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 == (UDS_VM_QuestData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_Quest>(&local_b8);
  pFVar3 = local_b8.Object;
  if (local_b8.Object != (FDS_ViewModelContext_Quest *)0x0) {
    if ((local_b8.Object == (FDS_ViewModelContext_Quest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x97;
    pFVar3->QuestID = this->QuestID;
    pUVar7 = (this->VM_QuestData).field0_0x0.DebugPtr;
    local_a8.Object = (FDS_ViewModelContext *)local_b8.Object;
    local_a8.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

