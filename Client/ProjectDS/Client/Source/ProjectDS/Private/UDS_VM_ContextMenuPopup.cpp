// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b629790

UClass * __cdecl UDS_VM_ContextMenuPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ContextMenuPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ContextMenuPopup",
               &Z_Registration_Info_UClass_UDS_VM_ContextMenuPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_ContextMenuPopup,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ContextMenuPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_ContextMenuPopup>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ContextMenuPopup.InnerSingleton;
}

// UDS_VM_ContextMenuPopup @ 14b62d830

UDS_VM_ContextMenuPopup * __thiscall
UDS_VM_ContextMenuPopup::UDS_VM_ContextMenuPopup
          (UDS_VM_ContextMenuPopup *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_ContextMenuPopup__6B_;
  return this;
}

// UDS_VM_ContextMenuPopup @ 14b62d870

UDS_VM_ContextMenuPopup * __thiscall
UDS_VM_ContextMenuPopup::UDS_VM_ContextMenuPopup
          (UDS_VM_ContextMenuPopup *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_ContextMenuPopup__6B_;
  return this;
}

// ~UDS_VM_ContextMenuPopup @ 14b62f390

void __thiscall UDS_VM_ContextMenuPopup::~UDS_VM_ContextMenuPopup(UDS_VM_ContextMenuPopup *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_ContextMenuPopup__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631d00

IClassDescriptor * __thiscall
UDS_VM_ContextMenuPopup::GetFieldNotificationDescriptor(UDS_VM_ContextMenuPopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ContextMenuPopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632ae0

UClass * __cdecl UDS_VM_ContextMenuPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ContextMenuPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ContextMenuPopup",
               &Z_Registration_Info_UClass_UDS_VM_ContextMenuPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_ContextMenuPopup,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ContextMenuPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_ContextMenuPopup>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ContextMenuPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ContextMenuPopup @ 14b6330e0

void __cdecl UDS_VM_ContextMenuPopup::StaticRegisterNativesUDS_VM_ContextMenuPopup(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ContextMenuPopup_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execContextMenuList @ 14b634160

void __cdecl
UDS_VM_ContextMenuPopup::execContextMenuList(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = ContextMenuList((UDS_VM_ContextMenuPopup *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// ContextMenuList @ 14bf446c0

FDS_EntryBindingEventField * __thiscall
UDS_VM_ContextMenuPopup::ContextMenuList
          (UDS_VM_ContextMenuPopup *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  uint *puVar2;
  undefined1 *this_00;
  uint uVar3;
  FDS_TextFormatArg *pFVar4;
  code *pcVar5;
  int iVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  FDS_Text *pFVar9;
  undefined4 uVar10;
  bool bVar11;
  UClass *pUVar12;
  FDS_EntryBindingEventField *pFVar13;
  UDS_M_ContextMenuPopup *this_01;
  UObject *pUVar14;
  UDS_UserObjectListItem *this_02;
  FDS_ViewModelContext *pFVar15;
  UScriptStruct *pUVar16;
  UDS_ViewModelContextManager *this_03;
  undefined8 *puVar17;
  ulong64 uVar18;
  ulonglong uVar19;
  FDS_ViewModelContext *pFVar20;
  FDS_ViewModelContext *pFVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res18 [8];
  int local_res20;
  FWeakObjectPtr local_138;
  TArray<FDS_Text,TSizedDefaultAllocator<32>_> local_130;
  uint local_120;
  FScriptContainerElement *local_118;
  EDS_StringTableType local_108;
  long64 local_100;
  FName local_f8;
  longlong local_f0;
  long64 local_e8;
  EDS_TimeExpression local_e0;
  FScriptContainerElement local_dc;
  FString local_d8;
  ForAnyElementType local_c8;
  uint local_c0;
  int local_bc;
  UObject *local_b8;
  UDS_VM_ContextMenuPopup *local_b0;
  UDS_UserObjectListItem *local_a8;
  FDS_Text *local_a0;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FDestructionSentinel local_68;
  atomic<int> *local_50;
  
  pUVar14 = (UObject *)0x0;
  this_00 = &this->field_0xa0;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  if (*(longlong *)this_00 != 0) {
    pUVar12 = Z_Construct_UClass_UDS_M_ContextMenuPopup_NoRegister();
    bVar11 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar12);
    if (bVar11) {
      pUVar14 = *(UObject **)this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  local_138.ObjectIndex = 0;
  local_138.ObjectSerialNumber = 0;
  local_b8 = pUVar14;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_b8);
  bVar11 = FWeakObjectPtr::IsValid(&local_138);
  if (bVar11) {
    local_res20 = 0;
    this_01 = (UDS_M_ContextMenuPopup *)FWeakObjectPtr::Get(&local_138);
    UDS_M_ContextMenuPopup::GetDropdownList(this_01,&local_130);
    uVar19 = (ulonglong)local_130.ArrayNum;
    uVar10 = local_78.SharedReferenceCount.ReferenceController._4_4_;
    local_120 = local_130.ArrayNum;
    pFVar22 = local_130.AllocatorInstance.Data + 8;
    local_a0 = (FDS_Text *)(local_130.AllocatorInstance.Data + uVar19 * 0x50);
    while( true ) {
      pFVar9 = local_a0;
      pFVar21 = (FDS_ViewModelContext *)0x0;
      local_118 = pFVar22;
      if (local_130.ArrayNum != (uint)uVar19) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FDS_Text,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if ((FDS_Text *)(pFVar22 + -8) == pFVar9) break;
      local_108 = ((FDS_Text *)(pFVar22 + -8))->StringTableType;
      local_100 = *(long64 *)pFVar22;
      local_f8 = *(FName *)(pFVar22 + 8);
      local_f0 = *(longlong *)(pFVar22 + 0x10);
      local_e8 = *(long64 *)(pFVar22 + 0x18);
      local_e0 = *(EDS_TimeExpression *)(pFVar22 + 0x20);
      local_dc = pFVar22[0x24];
      ::FString::FString(&local_d8,(FString *)(pFVar22 + 0x28));
      uVar3 = *(uint *)(pFVar22 + 0x40);
      pFVar4 = *(FDS_TextFormatArg **)(pFVar22 + 0x38);
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = uVar3;
      if (uVar3 == 0) {
        local_bc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar3,0,&local_c8,uVar3,&local_bc);
        ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>(local_c8.Data,pFVar4,uVar3);
      }
      pUVar14 = GetTransientPackageAsObject();
      this_02 = NewObject<UDS_UserObjectListItem>(pUVar14);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_02 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf44cc4;
      }
      else {
        if (this_02 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf44cc4:
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1753050528893370331>,false,
                              "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_ContextMenuPopup.cpp"
                              ,0x25,"false");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FDS_EntryBindingEventField *)(*pcVar5)();
            return pFVar13;
          }
          DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_c8.Data,local_c0);
          if ((FDS_TextFormatArg *)local_c8.Data != (FDS_TextFormatArg *)0x0) {
            FMemory::Free(local_c8.Data);
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          break;
        }
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      pFVar15 = ::operator_new(0xf8);
      pFVar20 = pFVar21;
      if (pFVar15 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar15->ViewModelTemplateKey = 0;
        *(undefined4 *)&((atomic<int> *)&pFVar15[1].DerivedStaticStruct)->field_0x1 = 0;
        *(undefined2 *)&((atomic<int> *)&pFVar15[1].DerivedStaticStruct)[1].field_0x1 = 0;
        ((atomic<int> *)&pFVar15[1].DerivedStaticStruct)[1].field_0x3 = 0;
        *(undefined2 *)((longlong)&pFVar15[2].ViewModelName.Number + 1) = 0;
        *(undefined1 *)((longlong)&pFVar15[2].ViewModelName.Number + 3) = 0;
        *(undefined4 *)((longlong)&pFVar15[3].ViewModelTemplateKey + 1) = 0;
        *(undefined2 *)&pFVar15[3].field_0x1d = 0;
        pFVar15[3].field_0x1f = 0;
        *(undefined2 *)((longlong)&pFVar15[5]._padding_ + 5) = 0;
        *(undefined1 *)((longlong)&pFVar15[5]._padding_ + 7) = 0;
        pFVar15[6].ViewModelName.ComparisonIndex = 0;
        pFVar15[6].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar15[6].ViewModelTemplateKey = 0;
        pFVar15[7].ViewModelName.ComparisonIndex = 0;
        pFVar15[7].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar15->DerivedStaticStruct = 0;
        (pFVar15->ViewModelName).ComparisonIndex = 0;
        (pFVar15->ViewModelName).Number = 0;
        pFVar15[1]._padding_ = 0;
        pFVar15->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonIconTextButton__6B_;
        *(undefined1 *)&pFVar15[1].DerivedStaticStruct = 0;
        pFVar15[1].ViewModelName.ComparisonIndex = 0;
        pFVar15[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar15[1].ViewModelTemplateKey = 0;
        pFVar15[2]._padding_ = 0;
        *(undefined8 *)&pFVar15[2].DerivedStaticStruct = 0;
        pFVar15[2].ViewModelName.ComparisonIndex.Value = 0;
        *(undefined1 *)&pFVar15[2].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar15[2].ViewModelTemplateKey = 0;
        pFVar15[3]._padding_ = 0;
        *(undefined8 *)&pFVar15[3].DerivedStaticStruct = 0;
        pFVar15[3].ViewModelName.ComparisonIndex = 0;
        pFVar15[3].ViewModelName.Number = 0;
        *(undefined1 *)&pFVar15[3].ViewModelTemplateKey = None;
        pFVar15[4]._padding_ = 0;
        *(undefined8 *)&pFVar15[4].DerivedStaticStruct = 0;
        pFVar15[4].ViewModelName.ComparisonIndex = 0;
        pFVar15[4].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar15[4].ViewModelTemplateKey = 0;
        *(undefined4 *)&pFVar15[5]._padding_ = 0;
        *(undefined1 *)((longlong)&pFVar15[5]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar15[5].DerivedStaticStruct = 0;
        pFVar15[5].ViewModelName.ComparisonIndex = 0;
        pFVar15[5].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar15[5].ViewModelTemplateKey = 0;
        pFVar15[6]._padding_ = 0;
        *(undefined8 *)&pFVar15[6].DerivedStaticStruct = 0;
        pFVar15[7]._padding_ = 0;
        *(undefined8 *)&pFVar15[7].DerivedStaticStruct = 0;
        pFVar20 = pFVar15;
      }
      pFVar15 = ::operator_new(0x20);
      if (pFVar15 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar15->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar15->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar15->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonIconTextButton__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar15->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar15->ViewModelTemplateKey = pFVar20;
        pFVar21 = pFVar15;
      }
      if ((pFVar20 == (FDS_ViewModelContext *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FDS_EntryBindingEventField *)(*pcVar5)();
        return pFVar13;
      }
      pUVar16 = FDS_ViewModelContext_CommonIconTextButton::StaticStruct();
      *(UScriptStruct **)&pFVar20->DerivedStaticStruct = pUVar16;
      this_03 = UDS_ViewModelContextManager::GetInst();
      if (this_03 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar21 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar21->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar21->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_98.Object = pFVar20;
        local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar21;
        UDS_ViewModelContextManager::RegisterContext(this_03,&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
      }
      pFVar20->ViewModelTemplateKey = CommonIconTextButton;
      *(EDS_StringTableType *)&pFVar20[1].DerivedStaticStruct = local_108;
      pFVar20[1].ViewModelName.ComparisonIndex = (FNameEntryId)(undefined4)local_100;
      pFVar20[1].ViewModelName.Number = local_100._4_4_;
      pFVar20[1].ViewModelTemplateKey = local_f8.ComparisonIndex.Value;
      *(uint *)&pFVar20[1].field_0x1c = local_f8.Number;
      pFVar20[2]._padding_ = local_f0;
      *(long64 *)&pFVar20[2].DerivedStaticStruct = local_e8;
      pFVar20[2].ViewModelName.ComparisonIndex.Value = local_e0;
      *(FScriptContainerElement *)&pFVar20[2].ViewModelName.Number = local_dc;
      ::FString::operator=((FString *)&pFVar20[2].ViewModelTemplateKey,&local_d8);
      paVar1 = (atomic<int> *)&pFVar20[3].DerivedStaticStruct;
      if (paVar1 != (atomic<int> *)&local_c8) {
        DestructItems<FDS_TextFormatArg,int>
                  (*(FDS_TextFormatArg **)paVar1,pFVar20[3].ViewModelName.ComparisonIndex.Value);
        uVar8 = local_c0;
        FVar7.Data = local_c8.Data;
        puVar2 = &pFVar20[3].ViewModelName.Number;
        uVar3 = *puVar2;
        pFVar20[3].ViewModelName.ComparisonIndex.Value = local_c0;
        if ((local_c0 == 0) && (uVar3 == 0)) {
          *puVar2 = 0;
          pFVar22 = local_118;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,local_c0,uVar3,(ForAnyElementType *)paVar1,local_c0,(int *)puVar2);
          ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                    (*(void **)paVar1,(FDS_TextFormatArg *)FVar7.Data,uVar8);
          pFVar22 = local_118;
        }
      }
      iVar6 = local_res20;
      uStack_80 = 0;
      local_res20 = local_res20 + 1;
      uStack_7c = uVar10;
      local_88 = OnClickedContextMenu;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar20 + 7),
                 (FWriteAccessScope *)&local_68);
      local_50 = (atomic<int> *)&pFVar20[7].DerivedStaticStruct;
      puVar17 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_50);
      if (puVar17 != (undefined8 *)0x0) {
        *puVar17 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
        ;
        *(int *)(puVar17 + 1) = iVar6;
        uVar18 = FDelegateHandle::GenerateNewID();
        puVar17[2] = uVar18;
        *puVar17 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_ContextMenuPopup____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_ContextMenuPopup *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar17[3] = 0;
        local_b0 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_ContextMenuPopup *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_b0);
        puVar17[4] = local_88;
        puVar17[5] = CONCAT44(uStack_7c,uStack_80);
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      if (pFVar21 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar21->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar21->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_78.Object = pFVar20;
      local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar21;
      UDS_UserObjectListItem::AddContext(this_02,&local_78);
      local_a8 = this_02;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      FDS_EntryBindingEventField::Add
                (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar21);
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_c8.Data,local_c0);
      if ((FDS_TextFormatArg *)local_c8.Data != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      pFVar22 = pFVar22 + 0x50;
      uVar19 = (ulonglong)local_120;
    }
    DestructItems<FDS_Text,int>((FDS_Text *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
    if ((FDS_Text *)local_130.AllocatorInstance.Data != (FDS_Text *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
  }
  else {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_1753050528893370337>,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_ContextMenuPopup.cpp"
                        ,0x1f,"false");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pFVar13 = (FDS_EntryBindingEventField *)(*pcVar5)();
      return pFVar13;
    }
  }
  return __return_storage_ptr__;
}

// OnClickedContextMenu @ 14bf62f00

void __thiscall
UDS_VM_ContextMenuPopup::OnClickedContextMenu
          (UDS_VM_ContextMenuPopup *this,FDS_ButtonEventField *param_1,int param_2)

{
  undefined1 *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UDS_M_ContextMenuPopup *this_01;
  TArray<FDS_Text,TSizedDefaultAllocator<32>_> *pTVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res20;
  TArray<FDS_Text,TSizedDefaultAllocator<32>_> local_38;
  FReadAccessScope local_28;
  
  this_00 = &this->field_0xa0;
  if (*(longlong *)this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ContextMenuPopup_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar3) {
      pUVar6 = *(UObject **)this_00;
      goto LAB_14bf62f35;
    }
  }
  pUVar6 = (UObject *)0x0;
LAB_14bf62f35:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    this_01 = (UDS_M_ContextMenuPopup *)FWeakObjectPtr::Get(&local_res8);
    pTVar5 = UDS_M_ContextMenuPopup::GetDropdownList(this_01,&local_38);
    if ((param_2 < 0) || (pTVar5->ArrayNum <= param_2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    DestructItems<FDS_Text,int>((FDS_Text *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if ((FDS_Text *)local_38.AllocatorInstance.Data != (FDS_Text *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    if (!bVar3) {
      pUVar6 = FWeakObjectPtr::Get(&local_res8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar6 + 0xb),&local_28)
      ;
      if ((*(int *)&pUVar6[0xb].field_0x10 != 0) &&
         (plVar1 = *(longlong **)&pUVar6[0xb].field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1753050528893370350>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_ContextMenuPopup.cpp"
                       ,0x12,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

