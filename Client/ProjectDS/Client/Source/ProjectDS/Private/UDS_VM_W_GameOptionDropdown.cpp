// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b72ede0

UClass * __cdecl UDS_VM_W_GameOptionDropdown::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionDropdown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionDropdown",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionDropdown.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionDropdown,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_GameOptionDropdown>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionDropdown>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionDropdown.InnerSingleton;
}

// UDS_VM_W_GameOptionDropdown @ 14b735670

UDS_VM_W_GameOptionDropdown * __thiscall
UDS_VM_W_GameOptionDropdown::UDS_VM_W_GameOptionDropdown
          (UDS_VM_W_GameOptionDropdown *this,FVTableHelper *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionDropdown__6B_;
  (this->VMDropdown).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  *(undefined8 *)&this->EnumValueMap = 0;
  *(undefined8 *)&(this->EnumValueMap).field_0x8 = 0;
  *(undefined8 *)&(this->EnumValueMap).field_0x20 = 0;
  *(undefined4 *)&(this->EnumValueMap).field_0x28 = 0;
  *(undefined4 *)&(this->EnumValueMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EnumValueMap).field_0x34 = 0;
  *(undefined4 *)&(this->EnumValueMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EnumValueMap).field_0x40 = 0;
  *(undefined4 *)&(this->EnumValueMap).field_0x48 = 0;
  return this;
}

// UDS_VM_W_GameOptionDropdown @ 14b735700

UDS_VM_W_GameOptionDropdown * __thiscall
UDS_VM_W_GameOptionDropdown::UDS_VM_W_GameOptionDropdown
          (UDS_VM_W_GameOptionDropdown *this,FObjectInitializer *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionDropdown__6B_;
  (this->VMDropdown).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  *(undefined8 *)&this->EnumValueMap = 0;
  *(undefined8 *)&(this->EnumValueMap).field_0x8 = 0;
  *(undefined8 *)&(this->EnumValueMap).field_0x20 = 0;
  *(undefined4 *)&(this->EnumValueMap).field_0x28 = 0;
  *(undefined4 *)&(this->EnumValueMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EnumValueMap).field_0x34 = 0;
  *(undefined4 *)&(this->EnumValueMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EnumValueMap).field_0x40 = 0;
  *(undefined4 *)&(this->EnumValueMap).field_0x48 = 0;
  return this;
}

// ~UDS_VM_W_GameOptionDropdown @ 14b7368d0

void __thiscall
UDS_VM_W_GameOptionDropdown::~UDS_VM_W_GameOptionDropdown(UDS_VM_W_GameOptionDropdown *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionDropdown__6B_;
  *(undefined4 *)&(this->EnumValueMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EnumValueMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EnumValueMap);
  UDS_VM_GameOptionData::~UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739830

IClassDescriptor * __thiscall
UDS_VM_W_GameOptionDropdown::GetFieldNotificationDescriptor(UDS_VM_W_GameOptionDropdown *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_GameOptionDropdown::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73a8c0

UClass * __cdecl UDS_VM_W_GameOptionDropdown::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionDropdown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionDropdown",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionDropdown.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionDropdown,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_GameOptionDropdown>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionDropdown>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionDropdown.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_GameOptionDropdown @ 14b73b050

void __cdecl UDS_VM_W_GameOptionDropdown::StaticRegisterNativesUDS_VM_W_GameOptionDropdown(void)

{
  return;
}

// GetOptionValueText @ 14bfabd90

FDS_Text * __thiscall
UDS_VM_W_GameOptionDropdown::GetOptionValueText
          (UDS_VM_W_GameOptionDropdown *this,FDS_Text *__return_storage_ptr__)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// OnClickedList @ 14bfbba60

void __thiscall
UDS_VM_W_GameOptionDropdown::OnClickedList(UDS_VM_W_GameOptionDropdown *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->EnumValueMap).field_0x8 != *(int *)&(this->EnumValueMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->EnumValueMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->EnumValueMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->EnumValueMap).field_0x48 - 1U & param_1) *
                              4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->EnumValueMap;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          piVar3 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                   FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                *)&this->EnumValueMap,param_1);
          UDS_VM_GameOptionData::SetGameOptionValue((UDS_VM_GameOptionData *)this,*piVar3);
          return;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bfcdf40

void __thiscall
UDS_VM_W_GameOptionDropdown::OnSetViewModel
          (UDS_VM_W_GameOptionDropdown *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
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
  UDS_VM_GameOptionData::OnSetViewModel((UDS_VM_GameOptionData *)this,&local_18);
  UpdateVMDropdown(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateVMDropdown @ 14bfe5e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_GameOptionDropdown::UpdateVMDropdown(UDS_VM_W_GameOptionDropdown *this)

{
  TArray<FDS_Text,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  FDS_ViewModelContext_Dropdown *pFVar5;
  bool bVar6;
  int iVar7;
  UDS_VM_Dropdown *pUVar8;
  UDS_LogManager *pUVar9;
  UDS_M_GameOptionDataBase *pUVar10;
  FDS_GameOptionBaseTableRow *pFVar11;
  size_t sVar12;
  UClass *pUVar13;
  UEnum *this_00;
  FName *pFVar14;
  TTuple<FName,__int64> *pTVar15;
  FName FVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  undefined1 auStackY_338 [32];
  ForAnyElementType local_2f8;
  undefined8 local_2f0;
  int local_2e8 [4];
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> local_2d8;
  undefined4 local_2c8;
  int local_2c4;
  FString local_2b8;
  FDS_Text local_2a8;
  FName local_258;
  TPairInitializer<int_&&,int_&> local_250;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_240;
  UDS_VM_W_GameOptionDropdown *local_238;
  UDS_VM_W_GameOptionDropdown *local_230;
  FName local_228;
  int local_220;
  FScriptContainerElement *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  undefined4 *local_1d8;
  int *local_1d0;
  FDestructionSentinel local_1c8;
  undefined1 *local_1b0;
  FName local_1a8;
  FName local_1a0;
  undefined1 local_198 [24];
  longlong lStack_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TTuple<FName,__int64> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_238 = this;
  bVar6 = TWeakObjectPtr<UDS_M_GameOptionDataBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_GameOptionDataBase,FWeakObjectPtr> *)
                     ((longlong)&this->_padding_ + 4),(void *)0x0);
  if (bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1056881212620013603>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionDropdown.cpp"
                       ,0x23,"false");
    if (!bVar6) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->VMDropdown).field0_0x0.DebugPtr == (UDS_VM_Dropdown *)0x0) {
    pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Dropdown>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_VM_Dropdown *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->VMDropdown).field0_0x0.DebugPtr = pUVar8;
    if (pUVar8 == (UDS_VM_Dropdown *)0x0) {
      return;
    }
  }
  local_240 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              &this->EnumValueMap;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            (local_240);
  MakeContext<FDS_ViewModelContext_Dropdown>(&local_2d8);
  pFVar5 = local_2d8.Object;
  if (local_2d8.Object == (FDS_ViewModelContext_Dropdown *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_GameOptionDropdown::UpdateVMDropdown",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_158.Ptr,0x31,L"dropDownContext is invalid.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    goto LAB_14bfe65d3;
  }
  if ((local_2d8.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)&pFVar5->_padding_ = 0x117;
  pUVar10 = (UDS_M_GameOptionDataBase *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_2c4 = UDS_M_GameOptionDataBase::GetGameOptionValue(pUVar10);
  pUVar10 = (UDS_M_GameOptionDataBase *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  pFVar11 = UDS_M_GameOptionDataBase::GetGameOptionBaseTable(pUVar10);
  ::FString::FString(&local_1e8,"/Script/ProjectDS.EDS_");
  ::FString::ConcatFF(&local_1f8,&local_1e8,&pFVar11->GameOptionData);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  iVar20 = 0;
  uStack_210 = 0;
  if (local_1f8.Data.ArrayNum == 0) {
    local_218 = (FScriptContainerElement *)0x15060d16c;
LAB_14bfe608d:
    sVar12 = wcslen((wchar_t *)local_218);
    uStack_210 = (undefined4)sVar12;
  }
  else {
    local_218 = local_1f8.Data.AllocatorInstance.Data;
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14bfe608d;
  }
  pUVar13 = Z_Construct_UClass_UEnum_NoRegister();
  lStack_180 = CONCAT44(uStack_20c,uStack_210);
  local_198._16_8_ = local_218;
  this_00 = (UEnum *)StaticFindObject(pUVar13,(UObject *)0x0,
                                      (TStringView<wchar_t> *)(local_198 + 0x10),None);
  if (this_00 != (UEnum *)0x0) {
    local_2f8.Data = (FScriptContainerElement *)0x0;
    local_2f0 = 0;
    if (-1 < (this_00->Names).NumValues) {
      do {
        UEnum::GetNameByIndex(this_00,(int)&local_258);
        ::FString::PrintfImpl(&local_208,L"EDS_%s::Max");
        iVar7 = local_208.Data.ArrayNum + -1;
        if (local_208.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        pFVar14 = ::FName::FName(&local_1a8,iVar7,(wchar_t *)local_208.Data.AllocatorInstance.Data,
                                 FNAME_Add);
        bVar6 = *pFVar14 == local_258;
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        this = local_238;
        if (bVar6) break;
        ::FString::PrintfImpl(&local_2b8,L"EDS_%s::None");
        iVar7 = local_2b8.Data.ArrayNum + -1;
        if (local_2b8.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        pFVar14 = ::FName::FName(&local_1a0,iVar7,(wchar_t *)local_2b8.Data.AllocatorInstance.Data,
                                 FNAME_Add);
        bVar6 = *pFVar14 != local_258;
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          if (((iVar20 < 0) || ((this_00->Names).NumValues <= iVar20)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Names.IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0xb2d,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar15 = UEnum::FNameData::operator[](&this_00->Names,&local_168,iVar20);
          local_2e8[0] = *(int *)&pTVar15->field_0x8;
          local_2c8 = (int)local_2f0;
          local_1d8 = &local_2c8;
          local_1d0 = local_2e8;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_&&,int_&>_>(local_240,&local_250,(bool *)&local_1d8);
          if (local_2c4 == local_2e8[0]) {
            iVar7 = (int)local_2f0;
            if ((pFVar5 == (FDS_ViewModelContext_Dropdown *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar5->DropdownIndex = iVar7;
          }
          FVar16 = DS_Util::GetStringEnumTableKey((UEnum *)local_198,(int)this_00);
          local_2a8.StringTableType = None;
          local_2a8.StringTableID = 0;
          local_2a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_2a8.StringEnumTableNameID.Number = 0;
          local_2a8.DateTime.Ticks = 0;
          local_2a8.TimeSpan.Ticks = 0;
          local_2a8.TimeExpressionType = None;
          local_2a8.IsExpression = false;
          local_2a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2a8.UniqueString.Data.ArrayNum = 0;
          local_2a8.UniqueString.Data.ArrayMax = 0;
          local_2a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2a8.FormatArgs.ArrayNum = 0;
          local_2a8.FormatArgs.ArrayMax = 0;
          FDS_Text::SetTextFromStringEnumTable(&local_2a8,(FName *)FVar16);
          iVar7 = (int)local_2f0;
          if ((int)local_2f0 == local_2f0._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,&local_2f8,(int *)((longlong)&local_2f0 + 4));
          }
          local_2f0 = CONCAT44(local_2f0._4_4_,iVar7 + 1);
          pFVar19 = local_2f8.Data + (longlong)iVar7 * 0x50;
          pFVar19->field_0x0 = local_2a8.StringTableType;
          *(long64 *)(pFVar19 + 8) = local_2a8.StringTableID;
          *(FName *)(pFVar19 + 0x10) = local_2a8.StringEnumTableNameID;
          *(long64 *)(pFVar19 + 0x18) = local_2a8.DateTime.Ticks;
          *(long64 *)(pFVar19 + 0x20) = local_2a8.TimeSpan.Ticks;
          *(EDS_TimeExpression *)(pFVar19 + 0x28) = local_2a8.TimeExpressionType;
          *(undefined8 *)(pFVar19 + 0x30) = 0;
          pFVar19[0x2c] = (FScriptContainerElement)local_2a8.IsExpression;
          *(FScriptContainerElement **)(pFVar19 + 0x30) =
               local_2a8.UniqueString.Data.AllocatorInstance.Data;
          local_2a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar19 + 0x38) = local_2a8.UniqueString.Data.ArrayNum;
          *(int *)(pFVar19 + 0x3c) = local_2a8.UniqueString.Data.ArrayMax;
          local_2a8.UniqueString.Data.ArrayNum = 0;
          local_2a8.UniqueString.Data.ArrayMax = 0;
          *(undefined8 *)(pFVar19 + 0x40) = 0;
          *(FScriptContainerElement **)(pFVar19 + 0x40) =
               local_2a8.FormatArgs.AllocatorInstance.Data;
          local_2a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar19 + 0x48) = local_2a8.FormatArgs.ArrayNum;
          *(int *)(pFVar19 + 0x4c) = local_2a8.FormatArgs.ArrayMax;
          local_2a8.FormatArgs.ArrayNum = 0;
          local_2a8.FormatArgs.ArrayMax = 0;
          DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
          if (local_2a8.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.FormatArgs.AllocatorInstance.Data);
          }
          if (local_2a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_2a8.UniqueString.Data.AllocatorInstance.Data);
          }
        }
        iVar20 = iVar20 + 1;
        this = local_238;
      } while (iVar20 <= (this_00->Names).NumValues);
    }
    if ((pFVar5 == (FDS_ViewModelContext_Dropdown *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar1 = &pFVar5->DropdownList;
    if (pTVar1 != (TArray<FDS_Text,TSizedDefaultAllocator<32>_> *)&local_2f8) {
      DestructItems<FDS_Text,int>
                ((FDS_Text *)(pTVar1->AllocatorInstance).Data,(pFVar5->DropdownList).ArrayNum);
      FVar4.Data = local_2f8.Data;
      iVar20 = (int)local_2f0;
      piVar2 = &(pFVar5->DropdownList).ArrayMax;
      (pFVar5->DropdownList).ArrayNum = (int)local_2f0;
      if (((int)local_2f0 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,(int)local_2f0,*piVar2,&pTVar1->AllocatorInstance,(int)local_2f0,piVar2);
        ConstructItems<FDS_Text,FDS_Text,int>
                  ((pTVar1->AllocatorInstance).Data,(FDS_Text *)FVar4.Data,iVar20);
      }
    }
    DestructItems<FDS_Text,int>((FDS_Text *)local_2f8.Data,(int)local_2f0);
    if ((FDS_Text *)local_2f8.Data != (FDS_Text *)0x0) {
      FMemory::Free(local_2f8.Data);
    }
  }
  if ((pFVar5 == (FDS_ViewModelContext_Dropdown *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_2b8.Data.ArrayNum = 0;
  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnClickedList;
  local_2b8.Data.ArrayMax = local_168._12_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->OnClickList,
             (FWriteAccessScope *)&local_1c8);
  local_1b0 = &(pFVar5->OnClickList).field_0x8;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_1b0);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_GameOptionDropdown____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_230 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_230);
    puVar17[4] = local_2b8.Data.AllocatorInstance.Data;
    puVar17[5] = CONCAT44(local_2b8.Data.ArrayMax,local_2b8.Data.ArrayNum);
  }
  if (local_1c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
  }
  pUVar8 = (this->VMDropdown).field0_0x0.DebugPtr;
  local_178.Object = (FDS_ViewModelContext *)local_2d8.Object;
  local_178.SharedReferenceCount.ReferenceController =
       local_2d8.SharedReferenceCount.ReferenceController;
  if (local_2d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_178);
  local_220 = FFieldNotificationClassDescriptor::VMDropdown.BitNumber;
  local_228 = FFieldNotificationClassDescriptor::VMDropdown.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_228);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
LAB_14bfe65d3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d8.SharedReferenceCount.ReferenceController);
  return;
}

// UpdateView @ 14bfe6aa0

void __thiscall
UDS_VM_W_GameOptionDropdown::UpdateView
          (UDS_VM_W_GameOptionDropdown *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  FName local_18;
  int local_10;
  
  UpdateVMDropdown(this);
  local_10 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.BitNumber;
  local_18 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

