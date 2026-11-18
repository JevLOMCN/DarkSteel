// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b606070

UClass * __cdecl UDS_VM_CharSkillList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharSkillList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharSkillList",
               &Z_Registration_Info_UClass_UDS_VM_CharSkillList.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharSkillList,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharSkillList>,
               InternalVTableHelperCtorCaller<UDS_VM_CharSkillList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharSkillList.InnerSingleton;
}

// UDS_VM_CharSkillList @ 14b60a720

UDS_VM_CharSkillList * __thiscall
UDS_VM_CharSkillList::UDS_VM_CharSkillList(UDS_VM_CharSkillList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharSkillList__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_CharSkillList @ 14b60a770

UDS_VM_CharSkillList * __thiscall
UDS_VM_CharSkillList::UDS_VM_CharSkillList(UDS_VM_CharSkillList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharSkillList__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_CharSkillList @ 14b60bf30

void __thiscall UDS_VM_CharSkillList::~UDS_VM_CharSkillList(UDS_VM_CharSkillList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharSkillList__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b60d9e0

IClassDescriptor * __thiscall
UDS_VM_CharSkillList::GetFieldNotificationDescriptor(UDS_VM_CharSkillList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CharSkillList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b60e080

UClass * __cdecl UDS_VM_CharSkillList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharSkillList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharSkillList",
               &Z_Registration_Info_UClass_UDS_VM_CharSkillList.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharSkillList,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharSkillList>,
               InternalVTableHelperCtorCaller<UDS_VM_CharSkillList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharSkillList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CharSkillList @ 14b60e890

void __cdecl UDS_VM_CharSkillList::StaticRegisterNativesUDS_VM_CharSkillList(void)

{
  return;
}

// OnSetViewModel @ 14bdd47e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharSkillList::OnSetViewModel
          (UDS_VM_CharSkillList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  FDS_CharacterBaseTableRow *pFVar9;
  UDS_UserObjectListItem *pUVar10;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  UScriptStruct *pUVar13;
  UDS_ViewModelContextManager *this_00;
  ulonglong uVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  FDS_ViewModelContext *pFVar17;
  atomic<int> *paVar18;
  FDS_ViewModelContext_CharSkillList *pFVar19;
  bool bVar20;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_1f0;
  uint local_1e0;
  TSharedPtr<FDS_ViewModelContext_CharSkillList,1> local_1d8;
  atomic<int> *local_1c8;
  TSharedPtr<FDS_ViewModelContext,1> *local_1c0;
  UDS_UserObjectListItem *local_1b8;
  FDS_EntryBindingEventField *local_1b0;
  UDS_VM_CharSkillList *local_1a8;
  atomic<int> *local_1a0;
  FName local_198;
  int local_190;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c0 = param_1;
  local_1a8 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
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
  SafeCast<FDS_ViewModelContext_CharSkillList>(&local_1d8,&local_178);
  pFVar19 = local_1d8.Object;
  bVar20 = local_1d8.Object == (FDS_ViewModelContext_CharSkillList *)0x0;
  if (local_1d8.Object == (FDS_ViewModelContext_CharSkillList *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_CharSkillList::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_168.Ptr,0x13,L"context is Invalid.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    local_1b0 = &this->EntryBindingEventField;
    FDS_EntryBindingEventField::Reset(local_1b0);
    if ((bVar20) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar9 = FDS_CharacterBaseTableRow::Get((longlong)pFVar19->CharID,true);
    if (pFVar9 != (FDS_CharacterBaseTableRow *)0x0) {
      local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0.ArrayNum = 0;
      local_1f0.ArrayMax = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                (&local_1f0,&pFVar9->ID_DefaultSkill);
      iVar6 = local_1f0.ArrayNum;
      if (local_1f0.ArrayNum == local_1f0.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
      }
      iVar7 = iVar6 + 1;
      *(int *)(local_1f0.AllocatorInstance.Data + (longlong)iVar6 * 4) = pFVar9->ID_TraitSkill;
      if (iVar7 == local_1f0.ArrayMax) {
        local_1f0.ArrayNum = iVar7;
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
      }
      local_1e0 = iVar7 + 1;
      local_1f0.ArrayNum = local_1e0;
      *(int *)(local_1f0.AllocatorInstance.Data + (longlong)iVar7 * 4) = pFVar9->ID_SpecialSkill;
      uVar14 = (ulonglong)(int)local_1e0;
      local_1a0 = (atomic<int> *)(local_1f0.AllocatorInstance.Data + uVar14 * 4);
      uVar15 = uVar14;
      FVar16.Data = local_1f0.AllocatorInstance.Data;
      while( true ) {
        paVar18 = local_1a0;
        local_1c8 = (atomic<int> *)FVar16.Data;
        if ((int)uVar14 != (int)uVar15) {
          local_1f8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1f8);
        }
        if ((atomic<int> *)FVar16.Data == paVar18) break;
        aVar2 = *(atomic<int> *)FVar16.Data;
        pUVar10 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        pFVar11 = ::operator_new(0x30);
        pFVar17 = (FDS_ViewModelContext *)0x0;
        if (pFVar11 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar11->DerivedStaticStruct = 0;
          (pFVar11->ViewModelName).ComparisonIndex = 0;
          (pFVar11->ViewModelName).Number = 0;
          pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_CharSkillInfo__6B_;
          pFVar11[1]._padding_ = 0;
          *(undefined8 *)&pFVar11[1].DerivedStaticStruct = 0;
          pFVar17 = pFVar11;
          pFVar19 = local_1d8.Object;
        }
        pFVar12 = ::operator_new(0x20);
        pFVar11 = (FDS_ViewModelContext *)0x0;
        if (pFVar12 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar12->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar12->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar12->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharSkillInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar12->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar12->ViewModelTemplateKey = pFVar17;
          pFVar11 = pFVar12;
        }
        if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar13 = FDS_ViewModelContext_CharSkillInfo::StaticStruct();
        *(UScriptStruct **)&pFVar17->DerivedStaticStruct = pUVar13;
        this_00 = UDS_ViewModelContextManager::GetInst();
        if (this_00 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar11 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar11->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_188.Object = pFVar17;
          local_188.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar11;
          UDS_ViewModelContextManager::RegisterContext(this_00,&local_188);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_188.SharedReferenceCount.ReferenceController);
        }
        pFVar17->ViewModelTemplateKey = SkillInfo;
        if ((pFVar19 == (FDS_ViewModelContext_CharSkillList *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar17[1]._padding_ = pFVar19->PlayerEntityID;
        *(int *)&pFVar17[1].DerivedStaticStruct = pFVar19->CharID;
        ((atomic<int> *)&pFVar17[1].DerivedStaticStruct)[1] = aVar2;
        if (pFVar11 == (FDS_ViewModelContext *)0x0) {
          paVar18 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar18 = (atomic<int> *)&pFVar11->DerivedStaticStruct;
          LOCK();
          *paVar18 = (atomic<int>)((int)*paVar18 + 1);
          UNLOCK();
        }
        iVar6 = (pUVar10->ViewModelContextArray).ArrayNum;
        piVar1 = &(pUVar10->ViewModelContextArray).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pUVar10->ViewModelContextArray).AllocatorInstance,piVar1);
        }
        (pUVar10->ViewModelContextArray).ArrayNum = iVar6 + 1;
        pFVar4 = (pUVar10->ViewModelContextArray).AllocatorInstance.Data;
        *(FDS_ViewModelContext **)(pFVar4 + (longlong)iVar6 * 0x10) = pFVar17;
        *(FDS_ViewModelContext **)(pFVar4 + (longlong)iVar6 * 0x10 + 8) = pFVar11;
        if (pFVar11 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *paVar18 = (atomic<int>)((int)*paVar18 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar11);
        local_1b8 = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FDS_EntryBindingEventField::Add(local_1b0,(TObjectPtr<UDS_UserObjectListItem>)&local_1b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar11);
        uVar14 = local_1f0._8_8_ & 0xffffffff;
        FVar16.Data = (FScriptContainerElement *)(local_1c8 + 1);
        uVar15 = (ulonglong)local_1e0;
        this = local_1a8;
      }
      param_1 = local_1c0;
      if ((atomic<int> *)local_1f0.AllocatorInstance.Data != (atomic<int> *)0x0) {
        FMemory::Free(local_1f0.AllocatorInstance.Data);
        param_1 = local_1c0;
      }
    }
    local_190 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
    local_198 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

