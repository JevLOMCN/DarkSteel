// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b607ba0

UClass * __cdecl UDS_VM_CharEvolveLevelList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharEvolveLevelList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharEvolveLevelList",
               &Z_Registration_Info_UClass_UDS_VM_CharEvolveLevelList.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharEvolveLevelList,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_CharEvolveLevelList>,
               InternalVTableHelperCtorCaller<UDS_VM_CharEvolveLevelList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharEvolveLevelList.InnerSingleton;
}

// UDS_VM_CharEvolveLevelList @ 14b60a1e0

UDS_VM_CharEvolveLevelList * __thiscall
UDS_VM_CharEvolveLevelList::UDS_VM_CharEvolveLevelList
          (UDS_VM_CharEvolveLevelList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharEvolveLevelList__6B_;
  (this->EntryBindingEventField_EvolveLevel).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_EvolveLevel).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_EvolveLevel).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_EvolveLevel_Left).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_EvolveLevel_Left).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_EvolveLevel_Left).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_EvolveLevel_Right).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_EvolveLevel_Right).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_EvolveLevel_Right).UserObjectList.ArrayMax = 0;
  this->CharEntityID = 0;
  return this;
}

// UDS_VM_CharEvolveLevelList @ 14b60a250

UDS_VM_CharEvolveLevelList * __thiscall
UDS_VM_CharEvolveLevelList::UDS_VM_CharEvolveLevelList
          (UDS_VM_CharEvolveLevelList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharEvolveLevelList__6B_;
  (this->EntryBindingEventField_EvolveLevel).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_EvolveLevel).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_EvolveLevel).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_EvolveLevel_Left).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_EvolveLevel_Left).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_EvolveLevel_Left).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_EvolveLevel_Right).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_EvolveLevel_Right).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_EvolveLevel_Right).UserObjectList.ArrayMax = 0;
  this->CharEntityID = 0;
  return this;
}

// ~UDS_VM_CharEvolveLevelList @ 14b60bd60

void __thiscall
UDS_VM_CharEvolveLevelList::~UDS_VM_CharEvolveLevelList(UDS_VM_CharEvolveLevelList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharEvolveLevelList__6B_;
  pFVar1 = (this->EntryBindingEventField_EvolveLevel_Right).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_EvolveLevel_Left).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_EvolveLevel).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b60d900

IClassDescriptor * __thiscall
UDS_VM_CharEvolveLevelList::GetFieldNotificationDescriptor(UDS_VM_CharEvolveLevelList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CharEvolveLevelList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b60df00

UClass * __cdecl UDS_VM_CharEvolveLevelList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharEvolveLevelList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharEvolveLevelList",
               &Z_Registration_Info_UClass_UDS_VM_CharEvolveLevelList.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharEvolveLevelList,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_CharEvolveLevelList>,
               InternalVTableHelperCtorCaller<UDS_VM_CharEvolveLevelList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharEvolveLevelList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CharEvolveLevelList @ 14b60e840

void __cdecl UDS_VM_CharEvolveLevelList::StaticRegisterNativesUDS_VM_CharEvolveLevelList(void)

{
  return;
}

// OnSetViewModel @ 14bdd4180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevelList::OnSetViewModel
          (UDS_VM_CharEvolveLevelList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_CharEvolveLevelList,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharEvolveLevelList>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_CharEvolveLevelList *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CharEvolveLevelList::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x17,L"context is Invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_CharEvolveLevelList *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->CharEntityID = (local_158.Object)->CharEntityID;
    UpdateCharEvolveLevelList(this,true,(local_158.Object)->SelectedCharEvolveLevel);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateCharEvolveLevelList @ 14bded8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevelList::UpdateCharEvolveLevelList
          (UDS_VM_CharEvolveLevelList *this,bool param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  FDS_ViewModelContext *pFVar10;
  FDS_ViewModelContext *pFVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_00;
  UDS_UserObjectListItem *pUVar13;
  UDS_CharacterUIEvent *pUVar14;
  ulonglong uVar15;
  FDS_EntryBindingEventField *this_01;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  FDS_ViewModelContext *pFVar19;
  longlong *plVar20;
  atomic<int> *paVar21;
  undefined1 auStackY_248 [32];
  undefined1 local_218;
  undefined1 local_217;
  char local_216;
  int local_214;
  ForAnyElementType local_210;
  undefined8 local_208;
  int local_200;
  uint local_1fc;
  FWeakObjectPtr local_1f8;
  UDS_VM_CharEvolveLevelList *local_1f0;
  TArray<FDS_CharacterEvolvingTableRow_const_*,TSizedDefaultAllocator<32>_> local_1e8;
  UDS_UserObjectListItem *local_1d8;
  FDS_EntryBindingEventField *local_1d0;
  UDS_UserObjectListItem *local_1c8;
  FDS_EntryBindingEventField *local_1c0;
  UDS_UserObjectListItem *local_1b8;
  FDS_EntryBindingEventField *local_1b0;
  FScriptContainerElement *local_1a8;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_216 = param_1;
  local_214 = param_2;
  local_1f0 = this;
  UDS_CharInfoData::GetData((ulong64)&local_1f8);
  bVar5 = FWeakObjectPtr::IsValid(&local_1f8);
  if (bVar5) {
    if (param_2 == 0) {
      pUVar9 = FWeakObjectPtr::Get(&local_1f8);
      local_214 = *(int *)&pUVar9[0xd].field_0x14;
    }
    local_1d0 = &this->EntryBindingEventField_EvolveLevel;
    FDS_EntryBindingEventField::Reset(local_1d0);
    local_1c0 = &this->EntryBindingEventField_EvolveLevel_Left;
    FDS_EntryBindingEventField::Reset(local_1c0);
    local_1b0 = &this->EntryBindingEventField_EvolveLevel_Right;
    FDS_EntryBindingEventField::Reset(local_1b0);
    local_200 = 0;
    pUVar9 = FWeakObjectPtr::Get(&local_1f8);
    iVar7 = *(int *)&pUVar9[8].field_0x8;
    local_210.Data = (FScriptContainerElement *)0x0;
    local_208 = 0;
    FDS_CharacterEvolvingTableRow::GetAll(&local_1e8);
    iVar4 = local_1e8.ArrayNum;
    pFVar18 = local_1e8.AllocatorInstance.Data + (longlong)local_1e8.ArrayNum * 8;
    FVar17.Data = local_1e8.AllocatorInstance.Data;
    while( true ) {
      if (local_1e8.ArrayNum != iVar4) {
        local_218 = 0;
        `TCheckedPointerIterator<FDS_CharacterEvolvingTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_218);
      }
      if (FVar17.Data == pFVar18) break;
      lVar2 = *(longlong *)FVar17.Data;
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == iVar7)) {
        iVar6 = (uint)local_208;
        if ((uint)local_208 == local_208._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_210,(int *)((longlong)&local_208 + 4));
        }
        local_208 = CONCAT44(local_208._4_4_,iVar6 + 1);
        *(longlong *)(local_210.Data + (longlong)iVar6 * 8) = lVar2;
      }
      FVar17.Data = FVar17.Data + 8;
    }
    if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
    }
    uVar15 = (ulonglong)(int)(uint)local_208;
    local_1fc = (uint)local_208;
    pFVar18 = local_210.Data + uVar15 * 8;
    FVar17.Data = local_210.Data;
    local_1a8 = pFVar18;
    while( true ) {
      if ((uint)local_208 != (int)uVar15) {
        local_217 = 0;
        `TCheckedPointerIterator<FDS_CharacterEvolvingTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_217);
      }
      if (FVar17.Data == pFVar18) break;
      lVar2 = *(longlong *)FVar17.Data;
      if (lVar2 != 0) {
        pFVar10 = ::operator_new(0x30);
        pFVar19 = (FDS_ViewModelContext *)0x0;
        if (pFVar10 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar10->ViewModelTemplateKey = 0;
          *(undefined2 *)&((atomic<int> *)&pFVar10[1].DerivedStaticStruct)[1].field_0x1 = 0;
          ((atomic<int> *)&pFVar10[1].DerivedStaticStruct)[1].field_0x3 = 0;
          *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
          (pFVar10->ViewModelName).ComparisonIndex = 0;
          (pFVar10->ViewModelName).Number = 0;
          pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_CharEvolveLevel__6B_;
          pFVar10[1]._padding_ = 0;
          *(atomic<int> *)&pFVar10[1].DerivedStaticStruct = (atomic<int>)0x0;
          *(undefined1 *)((atomic<int> *)&pFVar10[1].DerivedStaticStruct + 1) = 0;
          pFVar19 = pFVar10;
        }
        pFVar11 = ::operator_new(0x20);
        pFVar10 = (FDS_ViewModelContext *)0x0;
        if (pFVar11 != (FDS_ViewModelContext *)0x0) {
          *(code **)&(pFVar11->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          *(atomic<int> *)&pFVar11->DerivedStaticStruct = (atomic<int>)0x1;
          ((atomic<int> *)&pFVar11->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          pFVar11->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharEvolveLevel__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pFVar11->ViewModelTemplateKey = pFVar19;
          pFVar10 = pFVar11;
        }
        if ((pFVar19 == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar12 = FDS_ViewModelContext_CharEvolveLevel::StaticStruct();
        *(UScriptStruct **)&pFVar19->DerivedStaticStruct = pUVar12;
        this_00 = UDS_ViewModelContextManager::GetInst();
        if (this_00 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar10 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar10->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_168.Object = pFVar19;
          local_168.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar10;
          UDS_ViewModelContextManager::RegisterContext(this_00,&local_168);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_168.SharedReferenceCount.ReferenceController);
        }
        pFVar19->ViewModelTemplateKey = CharEvolveLevel;
        pFVar19[1]._padding_ = local_1f0->CharEntityID;
        *(atomic<int> *)&pFVar19[1].DerivedStaticStruct = *(atomic<int> *)(lVar2 + 0x14);
        if (local_216 != '\0') {
          *(bool *)((atomic<int> *)&pFVar19[1].DerivedStaticStruct + 1) =
               local_214 == *(int *)(lVar2 + 0x14);
        }
        pUVar13 = NewObject<UDS_UserObjectListItem>((UObject *)local_1f0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar13 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        if (pFVar10 == (FDS_ViewModelContext *)0x0) {
          paVar21 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar21 = (atomic<int> *)&pFVar10->DerivedStaticStruct;
          LOCK();
          *paVar21 = (atomic<int>)((int)*paVar21 + 1);
          UNLOCK();
        }
        iVar7 = (pUVar13->ViewModelContextArray).ArrayNum;
        piVar1 = &(pUVar13->ViewModelContextArray).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pUVar13->ViewModelContextArray).AllocatorInstance,piVar1);
        }
        (pUVar13->ViewModelContextArray).ArrayNum = iVar7 + 1;
        pFVar18 = (pUVar13->ViewModelContextArray).AllocatorInstance.Data;
        *(FDS_ViewModelContext **)(pFVar18 + (longlong)iVar7 * 0x10) = pFVar19;
        *(FDS_ViewModelContext **)(pFVar18 + (longlong)iVar7 * 0x10 + 8) = pFVar10;
        if (pFVar10 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *paVar21 = (atomic<int>)((int)*paVar21 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar10);
        local_1d8 = pUVar13;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar13 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        FDS_EntryBindingEventField::Add(local_1d0,(TObjectPtr<UDS_UserObjectListItem>)&local_1d8);
        iVar7 = local_200;
        if (local_200 < 5) {
          local_1c8 = pUVar13;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar13 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar13);
          }
          TVar16.DebugPtr = (UDS_UserObjectListItem *)&local_1c8;
          this_01 = local_1c0;
        }
        else {
          local_1b8 = pUVar13;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar13 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar13);
          }
          TVar16.DebugPtr = (UDS_UserObjectListItem *)&local_1b8;
          this_01 = local_1b0;
        }
        FDS_EntryBindingEventField::Add(this_01,(TObjectPtr<UDS_UserObjectListItem>)TVar16);
        local_200 = iVar7 + 1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar10);
        pFVar18 = local_1a8;
      }
      uVar15 = (ulonglong)local_1fc;
      FVar17.Data = FVar17.Data + 8;
    }
    plVar20 = &local_1f0->_padding_;
    local_190 = FFieldNotificationClassDescriptor::EntryBindingEventField_EvolveLevel.BitNumber;
    local_198 = FFieldNotificationClassDescriptor::EntryBindingEventField_EvolveLevel.FieldName;
    (**(code **)(*plVar20 + 0x38))(plVar20,&local_198);
    local_180 = FFieldNotificationClassDescriptor::EntryBindingEventField_EvolveLevel_Left.BitNumber
    ;
    local_188 = FFieldNotificationClassDescriptor::EntryBindingEventField_EvolveLevel_Left.FieldName
    ;
    (**(code **)(*plVar20 + 0x38))(plVar20,&local_188);
    local_170 = FFieldNotificationClassDescriptor::EntryBindingEventField_EvolveLevel_Right.
                BitNumber;
    local_178 = FFieldNotificationClassDescriptor::EntryBindingEventField_EvolveLevel_Right.
                FieldName;
    (**(code **)(*plVar20 + 0x38))(plVar20);
    FVar17.Data = local_210.Data;
    if ((local_214 == 0) &&
       (pUVar14 = UDS_CharacterUIEvent::GetEvent(), FVar17.Data = local_210.Data,
       pUVar14 != (UDS_CharacterUIEvent *)0x0)) {
      FDS_EventDelegate<int_const_>::Broadcast(&pUVar14->OnSelectCharEvolve,0);
      FVar17.Data = local_210.Data;
    }
  }
  else {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_CharEvolveLevelList::UpdateCharEvolveLevelList",0x35,Yes);
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x27,L"charInfoData is Invalid.");
    FVar17.Data = (FScriptContainerElement *)local_158._padding_;
  }
  if (FVar17.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar17.Data);
  }
  return;
}

