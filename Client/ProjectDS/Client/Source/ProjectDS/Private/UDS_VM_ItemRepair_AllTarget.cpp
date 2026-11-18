// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetClickSelectGrade_WrapperImpl @ 14b692e90

void __cdecl
UDS_VM_ItemRepair_AllTarget::SetClickSelectGrade_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UDS_ModelBase *this;
  uint uVar6;
  FWeakObjectPtr FStackX_8;
  UDS_ModelEventItemRepair *pUStackX_18;
  
  pUVar5 = GetTransientPackageAsObject();
  pUStackX_18 = NewObject<UDS_ModelEventItemRepair>(pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStackX_18 != (UDS_ModelEventItemRepair *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStackX_18);
  }
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStackX_18 != (UDS_ModelEventItemRepair *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStackX_18);
  }
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&pUStackX_18);
  pUVar5 = FWeakObjectPtr::Get(&FStackX_8);
  *(undefined4 *)&pUVar5[5].field_0x8 = 8;
  uVar2 = *(uint *)((longlong)param_1 + 0x1a0);
  uVar6 = 0;
  if ((int)uVar2 < *(int *)((longlong)param_1 + 0x130)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = *(undefined1 *)((longlong)(int)uVar2 + *(longlong *)((longlong)param_1 + 0x128));
  pUVar5 = FWeakObjectPtr::Get(&FStackX_8);
  pUVar5[5].field_0x19 = uVar1;
  this = (UDS_ModelBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x198));
  UDS_ModelBase::UpdateModel(this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)FStackX_8);
  return;
}

// StaticClass @ 14b692ea0

UClass * __cdecl UDS_VM_ItemRepair_AllTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemRepair_AllTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemRepair_AllTarget",
               &Z_Registration_Info_UClass_UDS_VM_ItemRepair_AllTarget.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemRepair_AllTarget,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemRepair_AllTarget>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemRepair_AllTarget>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemRepair_AllTarget.InnerSingleton;
}

// UDS_VM_ItemRepair_AllTarget @ 14b697ef0

UDS_VM_ItemRepair_AllTarget * __thiscall
UDS_VM_ItemRepair_AllTarget::UDS_VM_ItemRepair_AllTarget
          (UDS_VM_ItemRepair_AllTarget *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemRepair_AllTarget__6B_;
  (this->VM_ItemGradeDropdown).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->SelectButtonLabelText).StringTableType = None;
  (this->SelectButtonLabelText).StringTableID = 0;
  (this->SelectButtonLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SelectButtonLabelText).StringEnumTableNameID.Number = 0;
  (this->SelectButtonLabelText).DateTime.Ticks = 0;
  (this->SelectButtonLabelText).TimeSpan.Ticks = 0;
  (this->SelectButtonLabelText).TimeExpressionType = None;
  (this->SelectButtonLabelText).IsExpression = false;
  (this->SelectButtonLabelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SelectButtonLabelText).UniqueString.Data.ArrayNum = 0;
  (this->SelectButtonLabelText).UniqueString.Data.ArrayMax = 0;
  (this->SelectButtonLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectButtonLabelText).FormatArgs.ArrayNum = 0;
  (this->SelectButtonLabelText).FormatArgs.ArrayMax = 0;
  (this->RepairItemListEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepairItemListEventField).UserObjectList.ArrayNum = 0;
  (this->RepairItemListEventField).UserObjectList.ArrayMax = 0;
  (this->ClickSelectGrade)._padding_ = '\0';
  (this->ClickSelectGrade).bIsCustomSelected = false;
  (this->ClickSelectGrade).bIsLacked = false;
  (this->ClickSelectGrade).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSelectGrade).Delegate = 0;
  *(undefined8 *)&(this->ClickSelectGrade).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSelectGrade).Delegate.field_0x10 = 0;
  (this->GradeDropdownIndexArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GradeDropdownIndexArray).ArrayNum = 0;
  (this->GradeDropdownIndexArray).ArrayMax = 0;
  (this->RepairedItemList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepairedItemList).ArrayNum = 0;
  (this->RepairedItemList).ArrayMax = 0;
  *(undefined8 *)&this->TotalRequiredMaterialsMap = 0;
  *(undefined8 *)&(this->TotalRequiredMaterialsMap).field_0x8 = 0;
  *(undefined8 *)&(this->TotalRequiredMaterialsMap).field_0x20 = 0;
  *(undefined4 *)&(this->TotalRequiredMaterialsMap).field_0x28 = 0;
  *(undefined4 *)&(this->TotalRequiredMaterialsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TotalRequiredMaterialsMap).field_0x34 = 0;
  *(undefined4 *)&(this->TotalRequiredMaterialsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TotalRequiredMaterialsMap).field_0x40 = 0;
  *(undefined4 *)&(this->TotalRequiredMaterialsMap).field_0x48 = 0;
  (this->ItemRepairModel).WeakPtr = (FWeakObjectPtr)0x0;
  this->SelectedGradeIndex = 0;
  return this;
}

// UDS_VM_ItemRepair_AllTarget @ 14b698020

UDS_VM_ItemRepair_AllTarget * __thiscall
UDS_VM_ItemRepair_AllTarget::UDS_VM_ItemRepair_AllTarget
          (UDS_VM_ItemRepair_AllTarget *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemRepair_AllTarget__6B_;
  (this->VM_ItemGradeDropdown).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->SelectButtonLabelText).StringTableType = None;
  (this->SelectButtonLabelText).StringTableID = 0;
  (this->SelectButtonLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SelectButtonLabelText).StringEnumTableNameID.Number = 0;
  (this->SelectButtonLabelText).DateTime.Ticks = 0;
  (this->SelectButtonLabelText).TimeSpan.Ticks = 0;
  (this->SelectButtonLabelText).TimeExpressionType = None;
  (this->SelectButtonLabelText).IsExpression = false;
  (this->SelectButtonLabelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SelectButtonLabelText).UniqueString.Data.ArrayNum = 0;
  (this->SelectButtonLabelText).UniqueString.Data.ArrayMax = 0;
  (this->SelectButtonLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectButtonLabelText).FormatArgs.ArrayNum = 0;
  (this->SelectButtonLabelText).FormatArgs.ArrayMax = 0;
  (this->RepairItemListEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepairItemListEventField).UserObjectList.ArrayNum = 0;
  (this->RepairItemListEventField).UserObjectList.ArrayMax = 0;
  (this->ClickSelectGrade)._padding_ = '\0';
  (this->ClickSelectGrade).bIsCustomSelected = false;
  (this->ClickSelectGrade).bIsLacked = false;
  (this->ClickSelectGrade).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSelectGrade).Delegate = 0;
  *(undefined8 *)&(this->ClickSelectGrade).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSelectGrade).Delegate.field_0x10 = 0;
  (this->GradeDropdownIndexArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GradeDropdownIndexArray).ArrayNum = 0;
  (this->GradeDropdownIndexArray).ArrayMax = 0;
  (this->RepairedItemList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepairedItemList).ArrayNum = 0;
  (this->RepairedItemList).ArrayMax = 0;
  *(undefined8 *)&this->TotalRequiredMaterialsMap = 0;
  *(undefined8 *)&(this->TotalRequiredMaterialsMap).field_0x8 = 0;
  *(undefined8 *)&(this->TotalRequiredMaterialsMap).field_0x20 = 0;
  *(undefined4 *)&(this->TotalRequiredMaterialsMap).field_0x28 = 0;
  *(undefined4 *)&(this->TotalRequiredMaterialsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TotalRequiredMaterialsMap).field_0x34 = 0;
  *(undefined4 *)&(this->TotalRequiredMaterialsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TotalRequiredMaterialsMap).field_0x40 = 0;
  *(undefined4 *)&(this->TotalRequiredMaterialsMap).field_0x48 = 0;
  (this->ItemRepairModel).WeakPtr = (FWeakObjectPtr)0x0;
  this->SelectedGradeIndex = 0;
  return this;
}

// ~UDS_VM_ItemRepair_AllTarget @ 14b69a550

void __thiscall
UDS_VM_ItemRepair_AllTarget::~UDS_VM_ItemRepair_AllTarget(UDS_VM_ItemRepair_AllTarget *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemRepair_AllTarget__6B_;
  *(undefined4 *)&(this->TotalRequiredMaterialsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TotalRequiredMaterialsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TotalRequiredMaterialsMap);
  pFVar2 = (this->RepairedItemList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GradeDropdownIndexArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSelectGrade).Delegate);
  pvVar1 = *(void **)&(this->ClickSelectGrade).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSelectGrade).Delegate);
  pFVar2 = (this->RepairItemListEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SelectButtonLabelText).FormatArgs.AllocatorInstance.Data,
             (this->SelectButtonLabelText).FormatArgs.ArrayNum);
  pFVar2 = (this->SelectButtonLabelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SelectButtonLabelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d090

IClassDescriptor * __thiscall
UDS_VM_ItemRepair_AllTarget::GetFieldNotificationDescriptor(UDS_VM_ItemRepair_AllTarget *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemRepair_AllTarget::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69d960

UClass * __cdecl UDS_VM_ItemRepair_AllTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemRepair_AllTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemRepair_AllTarget",
               &Z_Registration_Info_UClass_UDS_VM_ItemRepair_AllTarget.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemRepair_AllTarget,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemRepair_AllTarget>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemRepair_AllTarget>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemRepair_AllTarget.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemRepair_AllTarget @ 14b69e650

void __cdecl UDS_VM_ItemRepair_AllTarget::StaticRegisterNativesUDS_VM_ItemRepair_AllTarget(void)

{
  return;
}

// InitDropBox @ 14be8b9d0

void __thiscall UDS_VM_ItemRepair_AllTarget::InitDropBox(UDS_VM_ItemRepair_AllTarget *this)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  UDS_VM_Dropdown *this_00;
  code *pcVar3;
  FDS_ViewModelContext_Dropdown *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UEnum *this_01;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  FName local_res8;
  UDS_VM_ItemRepair_AllTarget *local_res10;
  FName local_res18;
  longlong local_res20;
  FDS_Text local_128;
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> local_d8;
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  FString local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  FDestructionSentinel local_88;
  undefined1 *local_70;
  FName local_68;
  FString local_60 [2];
  
  if ((this->VM_ItemGradeDropdown).field0_0x0.DebugPtr != (UDS_VM_Dropdown *)0x0) {
    MakeContext<FDS_ViewModelContext_Dropdown>(&local_d8);
    pFVar4 = local_d8.Object;
    if ((local_d8.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x117;
    local_c8 = OnSelectGradeDropdown;
    uVar12 = 0;
    uStack_bc = local_98.SharedReferenceCount.ReferenceController._4_4_;
    pFVar4->bOpenUpward = true;
    uStack_c0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar4->OnClickList,
               (FWriteAccessScope *)&local_88);
    local_70 = &(pFVar4->OnClickList).field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_70);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_ItemRepair_AllTarget____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res10);
      puVar8[4] = local_c8;
      puVar8[5] = CONCAT44(uStack_bc,uStack_c0);
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    local_res20 = (longlong)(this->GradeDropdownIndexArray).ArrayNum;
    uVar14 = uVar12;
    if (0 < local_res20) {
      do {
        if ((pFVar4 == (FDS_ViewModelContext_Dropdown *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar13 = (uint)uVar14;
        uVar6 = 0;
        if ((int)uVar13 < (this->GradeDropdownIndexArray).ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar2 = (this->GradeDropdownIndexArray).AllocatorInstance.Data[uVar12];
        this_01 = StaticEnum<enum_EDS_GradeType>();
        if (this_01 == (UEnum *)0x0) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8627520946023956263>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_Util.h",
                             0xd9,"false");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_res8.ComparisonIndex.Value = 0;
          local_res8.Number = 0;
        }
        else {
          UEnum::GetNameStringByValue(this_01,local_60,(ulonglong)(byte)FVar2);
          local_res18 = (FName)this_01->_padding_;
          ::FName::ToString(&local_res18,&local_a8);
          ::FString::PrintfImpl(&local_b8,L"%s_%s");
          iVar7 = local_b8.Data.ArrayNum + -1;
          if (local_b8.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          pFVar10 = ::FName::FName(&local_68,iVar7,(wchar_t *)local_b8.Data.AllocatorInstance.Data,
                                   FNAME_Add);
          local_res8 = *pFVar10;
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
          }
        }
        local_128.StringTableType = None;
        local_128.StringTableID = 0;
        local_128.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_128.StringEnumTableNameID.Number = 0;
        local_128.DateTime.Ticks = 0;
        local_128.TimeSpan.Ticks = 0;
        local_128.TimeExpressionType = None;
        local_128.IsExpression = false;
        local_128.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.UniqueString.Data.ArrayNum = 0;
        local_128.UniqueString.Data.ArrayMax = 0;
        local_128.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.FormatArgs.ArrayNum = 0;
        local_128.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringEnumTable(&local_128,&local_res8);
        iVar7 = (pFVar4->DropdownList).ArrayNum;
        piVar1 = &(pFVar4->DropdownList).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&(pFVar4->DropdownList).AllocatorInstance,piVar1);
        }
        (pFVar4->DropdownList).ArrayNum = iVar7 + 1;
        pFVar11 = (pFVar4->DropdownList).AllocatorInstance.Data + (longlong)iVar7 * 0x50;
        *pFVar11 = (FScriptContainerElement)local_128.StringTableType;
        *(long64 *)(pFVar11 + 8) = local_128.StringTableID;
        *(FName *)(pFVar11 + 0x10) = local_128.StringEnumTableNameID;
        *(long64 *)(pFVar11 + 0x18) = local_128.DateTime.Ticks;
        *(long64 *)(pFVar11 + 0x20) = local_128.TimeSpan.Ticks;
        *(EDS_TimeExpression *)(pFVar11 + 0x28) = local_128.TimeExpressionType;
        *(undefined8 *)(pFVar11 + 0x30) = 0;
        pFVar11[0x2c] = (FScriptContainerElement)local_128.IsExpression;
        *(FScriptContainerElement **)(pFVar11 + 0x30) =
             local_128.UniqueString.Data.AllocatorInstance.Data;
        local_128.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar11 + 0x38) = local_128.UniqueString.Data.ArrayNum;
        *(int *)(pFVar11 + 0x3c) = local_128.UniqueString.Data.ArrayMax;
        local_128.UniqueString.Data.ArrayNum = 0;
        local_128.UniqueString.Data.ArrayMax = 0;
        *(undefined8 *)(pFVar11 + 0x40) = 0;
        *(FScriptContainerElement **)(pFVar11 + 0x40) = local_128.FormatArgs.AllocatorInstance.Data;
        local_128.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar11 + 0x48) = local_128.FormatArgs.ArrayNum;
        *(int *)(pFVar11 + 0x4c) = local_128.FormatArgs.ArrayMax;
        local_128.FormatArgs.ArrayNum = 0;
        local_128.FormatArgs.ArrayMax = 0;
        DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
        if (local_128.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.FormatArgs.AllocatorInstance.Data);
        }
        if (local_128.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.UniqueString.Data.AllocatorInstance.Data);
        }
        uVar12 = uVar12 + 1;
        uVar14 = (ulonglong)(uVar13 + 1);
      } while ((longlong)uVar12 < local_res20);
    }
    this_00 = (this->VM_ItemGradeDropdown).field0_0x0.DebugPtr;
    local_98.Object = (FDS_ViewModelContext *)local_d8.Object;
    local_98.SharedReferenceCount.ReferenceController =
         local_d8.SharedReferenceCount.ReferenceController;
    if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// InitRepair @ 14be8c000

void __thiscall UDS_VM_ItemRepair_AllTarget::InitRepair(UDS_VM_ItemRepair_AllTarget *this)

{
  FName local_18;
  int local_10;
  
  FDS_EntryBindingEventField::Reset(&this->RepairItemListEventField);
  local_10 = FFieldNotificationClassDescriptor::RepairItemListEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RepairItemListEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// InitViewModel @ 14be8dd00

void __thiscall UDS_VM_ItemRepair_AllTarget::InitViewModel(UDS_VM_ItemRepair_AllTarget *this)

{
  int iVar1;
  UDS_VM_Dropdown *pUVar2;
  TArray<EDS_GradeType,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->VM_ItemGradeDropdown).field0_0x0.DebugPtr == (UDS_VM_Dropdown *)0x0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Dropdown>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_Dropdown *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->VM_ItemGradeDropdown).field0_0x0.DebugPtr = pUVar2;
  }
  pTVar3 = &this->GradeDropdownIndexArray;
  iVar1 = (this->GradeDropdownIndexArray).ArrayNum;
  if (iVar1 == (this->GradeDropdownIndexArray).ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar3->AllocatorInstance,&(this->GradeDropdownIndexArray).ArrayMax);
  }
  (this->GradeDropdownIndexArray).ArrayNum = iVar1 + 1;
  (pTVar3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x1;
  iVar1 = (this->GradeDropdownIndexArray).ArrayNum;
  if (iVar1 == (this->GradeDropdownIndexArray).ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar3->AllocatorInstance,&(this->GradeDropdownIndexArray).ArrayMax);
  }
  (this->GradeDropdownIndexArray).ArrayNum = iVar1 + 1;
  (pTVar3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2;
  iVar1 = (this->GradeDropdownIndexArray).ArrayNum;
  if (iVar1 == (this->GradeDropdownIndexArray).ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar3->AllocatorInstance,&(this->GradeDropdownIndexArray).ArrayMax);
  }
  (this->GradeDropdownIndexArray).ArrayNum = iVar1 + 1;
  (pTVar3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x3;
  iVar1 = (this->GradeDropdownIndexArray).ArrayNum;
  if (iVar1 == (this->GradeDropdownIndexArray).ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar3->AllocatorInstance,&(this->GradeDropdownIndexArray).ArrayMax);
  }
  (this->GradeDropdownIndexArray).ArrayNum = iVar1 + 1;
  (pTVar3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x4;
  iVar1 = (this->GradeDropdownIndexArray).ArrayNum;
  if (iVar1 == (this->GradeDropdownIndexArray).ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar3->AllocatorInstance,&(this->GradeDropdownIndexArray).ArrayMax);
  }
  (this->GradeDropdownIndexArray).ArrayNum = iVar1 + 1;
  (pTVar3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x5;
  iVar1 = (this->GradeDropdownIndexArray).ArrayNum;
  if (iVar1 == (this->GradeDropdownIndexArray).ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar3->AllocatorInstance,&(this->GradeDropdownIndexArray).ArrayMax);
  }
  (this->GradeDropdownIndexArray).ArrayNum = iVar1 + 1;
  (pTVar3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x6;
  return;
}

// OnClickSelectGrade @ 14be971f0

void __thiscall
UDS_VM_ItemRepair_AllTarget::OnClickSelectGrade
          (UDS_VM_ItemRepair_AllTarget *this,FDS_ButtonEventField *param_1)

{
  FScriptContainerElement FVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UDS_ModelBase *this_00;
  uint uVar6;
  FWeakObjectPtr local_res8;
  UDS_ModelEventItemRepair *local_res18;
  
  pUVar5 = GetTransientPackageAsObject();
  local_res18 = NewObject<UDS_ModelEventItemRepair>(pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18 != (UDS_ModelEventItemRepair *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18 != (UDS_ModelEventItemRepair *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  pUVar5 = FWeakObjectPtr::Get(&local_res8);
  *(undefined4 *)&pUVar5[5].field_0x8 = 8;
  uVar2 = this->SelectedGradeIndex;
  uVar6 = 0;
  if ((int)uVar2 < (this->GradeDropdownIndexArray).ArrayNum) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar1 = (this->GradeDropdownIndexArray).AllocatorInstance.Data[(int)uVar2];
  pUVar5 = FWeakObjectPtr::Get(&local_res8);
  pUVar5[5].field_0x19 = FVar1;
  this_00 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
  UDS_ModelBase::UpdateModel(this_00,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
  return;
}

// OnEventUpdateView @ 14be987b0

void __thiscall
UDS_VM_ItemRepair_AllTarget::OnEventUpdateView
          (UDS_VM_ItemRepair_AllTarget *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  EDS_ItemRepairType EVar5;
  UObject *pUVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  FName local_38;
  int local_30;
  TArray<EDS_ModelEventItemRepair,TSizedDefaultAllocator<32>_> local_28;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->ItemRepairModel).WeakPtr);
  if (bVar4) {
    pUVar6 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    FDS_DataContainer::GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
              ((FDS_DataContainer *)&pUVar6[1].field_0x18,ItemRepairType);
    pUVar6 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    FDS_DataContainer::GetListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
              ((FDS_DataContainer *)&pUVar6[1].field_0x18,&local_28,UpdateViewEvent);
    iVar3 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 4;
    FVar7.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar3) {
        `TCheckedPointerIterator<enum_EDS_ModelEventItemRepair,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (FVar7.Data == pFVar1) break;
      iVar2 = *(int *)FVar7.Data;
      if (iVar2 == 2) {
        InitDropBox(this);
LAB_14be988b7:
        FVar7.Data = FVar7.Data + 4;
      }
      else if (iVar2 == 10) {
        pUVar6 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
        EVar5 = FDS_DataContainer::GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                          ((FDS_DataContainer *)&pUVar6[1].field_0x18,ItemRepairType);
        if (EVar5 != BulkRepair) break;
        UpdateRepairItemList(this);
        FVar7.Data = FVar7.Data + 4;
      }
      else {
        if (iVar2 != 0xb) goto LAB_14be988b7;
        FDS_EntryBindingEventField::Reset(&this->RepairItemListEventField);
        local_30 = FFieldNotificationClassDescriptor::RepairItemListEventField.BitNumber;
        local_38 = FFieldNotificationClassDescriptor::RepairItemListEventField.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
        FVar7.Data = FVar7.Data + 4;
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// OnSelectGradeDropdown @ 14be9c6c0

void __thiscall
UDS_VM_ItemRepair_AllTarget::OnSelectGradeDropdown(UDS_VM_ItemRepair_AllTarget *this,int param_1)

{
  this->SelectedGradeIndex = param_1;
  return;
}

// OnSetViewModel @ 14bea4e10

void __thiscall
UDS_VM_ItemRepair_AllTarget::OnSetViewModel
          (UDS_VM_ItemRepair_AllTarget *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_ModelBase *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_VM_ItemRepair_AllTarget *local_res10;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FName local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FName local_98;
  int local_90;
  TSharedPtr<FDS_ViewModelContext_ItemRepair,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_78.Object = param_1->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ItemRepair>(&local_88,&local_78);
  if (local_88.Object == (FDS_ViewModelContext_ItemRepair *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  else {
    (this->ItemRepairModel).WeakPtr = ((local_88.Object)->ItemRepairModel).WeakPtr;
    this_00 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    uStack_9c = local_78.SharedReferenceCount.ReferenceController._4_4_;
    iStack_a0 = 0;
    local_c8 = (undefined1  [8])0x0;
    local_a8 = (FName)OnEventUpdateView;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_c0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_ItemRepair_AllTarget____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_ItemRepair_AllTarget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_ItemRepair_AllTarget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      *(FName *)(puVar2 + 4) = local_a8;
      puVar2[5] = CONCAT44(uStack_9c,iStack_a0);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    UDS_ModelBase::AddUpdateViewDelegate
              (this_00,(TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                        *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_68);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c8);
    FDS_Text::SetTextFromStringTable(&this->SelectButtonLabelText,StringUi,0x9fd9);
    local_90 = FFieldNotificationClassDescriptor::SelectButtonLabelText.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::SelectButtonLabelText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    InitDropBox(this);
    FDS_EntryBindingEventField::Reset(&this->RepairItemListEventField);
    iStack_a0 = FFieldNotificationClassDescriptor::RepairItemListEventField.BitNumber;
    local_a8 = FFieldNotificationClassDescriptor::RepairItemListEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SubstactSelectedItem @ 14bebb010

void __thiscall
UDS_VM_ItemRepair_AllTarget::SubstactSelectedItem
          (UDS_VM_ItemRepair_AllTarget *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_ModelEventItemRepair *pUVar5;
  UObject *pUVar6;
  long64 lVar7;
  UDS_ModelBase *this_00;
  TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr> *this_01;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  UDS_ModelEventItemRepair *local_30;
  FWeakObjectPtr local_28 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar3 == (UObject *)0x0) {
LAB_14bebb072:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14bebb072;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_30 = (UDS_ModelEventItemRepair *)pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_30);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 1));
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bebb10b;
  }
  pUVar3 = (UObject *)0x0;
LAB_14bebb10b:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_30 = (UDS_ModelEventItemRepair *)pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_30);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    (**(code **)(*(longlong *)pUVar3 + 0x3a0))(pUVar3,local_28);
    bVar2 = FWeakObjectPtr::IsValid(local_28);
    if ((bVar2) && (pUVar3 = FWeakObjectPtr::Get(&local_res20), *(int *)&pUVar3[5].field_0x8 == 0xb)
       ) {
      this_01 = &this->ItemRepairModel;
      bVar2 = FWeakObjectPtr::IsValid(&this_01->WeakPtr);
      if (bVar2) {
        pUVar3 = GetTransientPackageAsObject();
        pUVar5 = NewObject<UDS_ModelEventItemRepair>(pUVar3);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_ModelEventItemRepair *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        local_38.ObjectIndex = 0;
        local_38.ObjectSerialNumber = 0;
        local_30 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_ModelEventItemRepair *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_30);
        pUVar3 = FWeakObjectPtr::Get(&local_38);
        *(undefined4 *)&pUVar3[5].field_0x8 = 7;
        pUVar3 = FWeakObjectPtr::Get(&this_01->WeakPtr);
        pUVar6 = FWeakObjectPtr::Get(&local_res18);
        lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x388))(pUVar6);
        FDS_DataContainer::SetData<__int64,enum_EDS_ItemRepairData>
                  ((FDS_DataContainer *)&pUVar3[1].field_0x18,SelectedItemUID,lVar7);
        this_00 = (UDS_ModelBase *)FWeakObjectPtr::Get(&this_01->WeakPtr);
        UDS_ModelBase::UpdateModel
                  (this_00,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_38);
      }
    }
  }
  return;
}

// UpdateRepairItemList @ 14bec1f20

void __thiscall UDS_VM_ItemRepair_AllTarget::UpdateRepairItemList(UDS_VM_ItemRepair_AllTarget *this)

{
  code *pcVar1;
  UDS_M_ItemImplBase *pUVar2;
  undefined4 uVar3;
  bool bVar4;
  UDS_M_ItemRepair *this_00;
  UDS_UserObjectListItem *this_01;
  undefined8 *puVar5;
  ulong64 uVar6;
  uint uVar7;
  ulonglong uVar8;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  uint local_res10;
  UDS_M_ItemImplBase *local_res18;
  FWeakObjectPtr local_res20;
  undefined1 local_128 [8];
  FDelegateAllocation local_120;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_110;
  UDS_VM_ItemRepair_AllTarget *local_100;
  undefined8 local_f8;
  UDS_UserObjectListItem *local_f0;
  FScriptContainerElement *local_e8;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 uStack_8c;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->ItemRepairModel).WeakPtr);
  if (bVar4) {
    FDS_EntryBindingEventField::Reset(&this->RepairItemListEventField);
    this_00 = (UDS_M_ItemRepair *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    UDS_M_ItemRepair::GetRegisteredBulkRepairItemList(this_00,&local_110);
    uVar3 = uStack_8c;
    uVar7 = local_110.ArrayNum;
    if (uVar7 == 0) {
      local_d0 = FFieldNotificationClassDescriptor::RepairItemListEventField.BitNumber;
      local_d8 = FFieldNotificationClassDescriptor::RepairItemListEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
    }
    else {
      uVar8 = (ulonglong)(int)uVar7;
      pFVar10 = local_110.AllocatorInstance.Data + uVar8 * 8;
      FVar11.Data = local_110.AllocatorInstance.Data;
      local_res10 = uVar7;
      local_e8 = pFVar10;
      while( true ) {
        if (local_110.ArrayNum != (int)uVar8) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (FVar11.Data == pFVar10) break;
        this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        TVar9.WeakPtr._1_7_ = (undefined7)(uVar8 >> 8);
        TVar9.WeakPtr.ObjectIndex._0_1_ = 0x38;
        DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_res18,TVar9);
        if (local_res18 == (UDS_M_ItemImplBase *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5374217875118620852>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\ItemRepair\\DS_VM_ItemRepair_AllTarget.cpp"
                             ,0xb4,"itemModel");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          UDS_M_ItemImplBase::SetSubtract(local_res18,true);
          pUVar2 = local_res18;
          local_b8 = SubstactSelectedItem;
          uStack_b0 = 0;
          uStack_ac = uVar3;
          local_128 = (undefined1  [8])0x0;
          local_120.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_120.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_128,
                     (FWriteAccessScope *)&local_70);
          local_58 = &local_120;
          puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_120);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &
                      ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar6 = FDelegateHandle::GenerateNewID();
            puVar5[2] = uVar6;
            *puVar5 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_ItemRepair_AllTarget____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_VM_ItemRepair_AllTarget *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar5[3] = 0;
            local_100 = this;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_VM_ItemRepair_AllTarget *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_100);
            puVar5[4] = local_b8;
            puVar5[5] = CONCAT44(uStack_ac,uStack_b0);
          }
          if (local_70.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
          }
          UDS_ModelBase::AddUpdateModelDelegate
                    ((UDS_ModelBase *)pUVar2,
                     (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      *)local_128);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_128,
                     (FWriteAccessScope *)&local_88);
          if ((local_120.DelegateSize != 0) &&
             (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_120.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_120,0,0,0x10);
            local_120.DelegateSize = 0;
          }
          if (local_88.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
          }
          if (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_120.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_128);
          pUVar2 = local_res18;
          pcVar1 = *(code **)(local_res18->_padding_ + 0x2e0);
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_f8 = 0;
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_f8);
          (*pcVar1)(pUVar2,local_res20,1);
          puVar5 = (undefined8 *)(**(code **)(local_res18->_padding_ + 0x310))(local_res18,local_98)
          ;
          local_a8.Object = (FDS_ViewModelContext *)*puVar5;
          local_a8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar5[1];
          if (local_a8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(this_01,&local_a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)CONCAT44(uStack_8c,local_90));
          local_f0 = this_01;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FDS_EntryBindingEventField::Add
                    (&this->RepairItemListEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_f0);
          pFVar10 = local_e8;
        }
        FVar11.Data = FVar11.Data + 8;
        uVar8 = (ulonglong)local_res10;
      }
      local_c0 = FFieldNotificationClassDescriptor::RepairItemListEventField.BitNumber;
      local_c8 = FFieldNotificationClassDescriptor::RepairItemListEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
    }
    if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.AllocatorInstance.Data);
    }
  }
  return;
}

