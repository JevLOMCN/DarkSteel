// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b6dfab0

UClass * __cdecl UDS_VM_SkillInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillInfo",
               &Z_Registration_Info_UClass_UDS_VM_SkillInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillInfo,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SkillInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillInfo.InnerSingleton;
}

// UDS_VM_SkillInfo @ 14b6e5750

UDS_VM_SkillInfo * __thiscall
UDS_VM_SkillInfo::UDS_VM_SkillInfo(UDS_VM_SkillInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SkillLevel = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillInfo__6B_;
  this->IconID = 0;
  (this->SkillName).StringTableType = None;
  (this->SkillName).StringTableID = 0;
  (this->SkillName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SkillName).StringEnumTableNameID.Number = 0;
  (this->SkillName).DateTime.Ticks = 0;
  (this->SkillName).TimeSpan.Ticks = 0;
  (this->SkillName).TimeExpressionType = None;
  (this->SkillName).IsExpression = false;
  (this->SkillName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillName).UniqueString.Data.ArrayNum = 0;
  (this->SkillName).UniqueString.Data.ArrayMax = 0;
  (this->SkillName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillName).FormatArgs.ArrayNum = 0;
  (this->SkillName).FormatArgs.ArrayMax = 0;
  (this->SkillLevelText).StringTableType = None;
  (this->SkillLevelText).StringTableID = 0;
  (this->SkillLevelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SkillLevelText).StringEnumTableNameID.Number = 0;
  (this->SkillLevelText).DateTime.Ticks = 0;
  (this->SkillLevelText).TimeSpan.Ticks = 0;
  (this->SkillLevelText).TimeExpressionType = None;
  (this->SkillLevelText).IsExpression = false;
  (this->SkillLevelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillLevelText).UniqueString.Data.ArrayNum = 0;
  (this->SkillLevelText).UniqueString.Data.ArrayMax = 0;
  (this->SkillLevelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillLevelText).FormatArgs.ArrayNum = 0;
  (this->SkillLevelText).FormatArgs.ArrayMax = 0;
  this->PlayerEntityID = 0;
  this->CharID = 0;
  this->SkillID = 0;
  return this;
}

// UDS_VM_SkillInfo @ 14b6e5850

UDS_VM_SkillInfo * __thiscall
UDS_VM_SkillInfo::UDS_VM_SkillInfo(UDS_VM_SkillInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SkillLevel = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillInfo__6B_;
  this->IconID = 0;
  (this->SkillName).StringTableType = None;
  (this->SkillName).StringTableID = 0;
  (this->SkillName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SkillName).StringEnumTableNameID.Number = 0;
  (this->SkillName).DateTime.Ticks = 0;
  (this->SkillName).TimeSpan.Ticks = 0;
  (this->SkillName).TimeExpressionType = None;
  (this->SkillName).IsExpression = false;
  (this->SkillName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillName).UniqueString.Data.ArrayNum = 0;
  (this->SkillName).UniqueString.Data.ArrayMax = 0;
  (this->SkillName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillName).FormatArgs.ArrayNum = 0;
  (this->SkillName).FormatArgs.ArrayMax = 0;
  (this->SkillLevelText).StringTableType = None;
  (this->SkillLevelText).StringTableID = 0;
  (this->SkillLevelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SkillLevelText).StringEnumTableNameID.Number = 0;
  (this->SkillLevelText).DateTime.Ticks = 0;
  (this->SkillLevelText).TimeSpan.Ticks = 0;
  (this->SkillLevelText).TimeExpressionType = None;
  (this->SkillLevelText).IsExpression = false;
  (this->SkillLevelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillLevelText).UniqueString.Data.ArrayNum = 0;
  (this->SkillLevelText).UniqueString.Data.ArrayMax = 0;
  (this->SkillLevelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillLevelText).FormatArgs.ArrayNum = 0;
  (this->SkillLevelText).FormatArgs.ArrayMax = 0;
  this->PlayerEntityID = 0;
  this->CharID = 0;
  this->SkillID = 0;
  return this;
}

// ~UDS_VM_SkillInfo @ 14b6e7060

void __thiscall UDS_VM_SkillInfo::~UDS_VM_SkillInfo(UDS_VM_SkillInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillInfo__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SkillLevelText).FormatArgs.AllocatorInstance.Data,
             (this->SkillLevelText).FormatArgs.ArrayNum);
  pFVar1 = (this->SkillLevelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillLevelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SkillName).FormatArgs.AllocatorInstance.Data,
             (this->SkillName).FormatArgs.ArrayNum);
  pFVar1 = (this->SkillName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e9670

IClassDescriptor * __thiscall
UDS_VM_SkillInfo::GetFieldNotificationDescriptor(UDS_VM_SkillInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_SkillInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea000

UClass * __cdecl UDS_VM_SkillInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillInfo",
               &Z_Registration_Info_UClass_UDS_VM_SkillInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillInfo,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SkillInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_SkillInfo @ 14b6eabd0

void __cdecl UDS_VM_SkillInfo::StaticRegisterNativesUDS_VM_SkillInfo(void)

{
  return;
}

// OnSetViewModel @ 14be3f170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_SkillInfo::OnSetViewModel(UDS_VM_SkillInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *this_00;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FObjectPtr_u_0 FVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  UDS_LogManager *pUVar9;
  FDS_SkillTableRow *pFVar10;
  UDS_PlayerData *this_01;
  UObject *pUVar11;
  FObjectPtr_u_0 *pFVar12;
  FDS_Int32StringFormatArg *pFVar13;
  undefined1 auStackY_438 [32];
  FWeakObjectPtr local_408;
  TSharedPtr<FDS_ViewModelContext_CharSkillInfo,1> local_400;
  FWeakObjectPtr local_3f0;
  FName local_3e8;
  FName local_3d8;
  int local_3d0;
  FName local_3c8;
  int local_3c0;
  FName local_3b8;
  int local_3b0;
  FName local_3a8;
  int local_3a0;
  TSharedPtr<FDS_ViewModelContext,1> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_438;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_398.Object = param_1->Object;
  local_398.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_398.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharSkillInfo>(&local_400,&local_398);
  if (local_400.Object == (FDS_ViewModelContext_CharSkillInfo *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_388._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_388,"UDS_VM_SkillInfo::OnSetViewModel",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_388.Ptr,0x16,L"context is Invalid.");
      if ((void *)local_388._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_388._padding_);
      }
    }
  }
  else {
    if (local_400.Object == (FDS_ViewModelContext_CharSkillInfo *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this->PlayerEntityID = (local_400.Object)->PlayerEntityID;
    this->CharID = (local_400.Object)->CharID;
    iVar8 = (local_400.Object)->SkillID;
    this->SkillID = iVar8;
    if (iVar8 < 1) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,"UDS_VM_SkillInfo::OnSetViewModel",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_268.Ptr,0x20,L"SkillID is Invalid.");
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
      }
    }
    else {
      pFVar10 = FDS_SkillTableRow::Get((longlong)iVar8,true);
      FVar6 = FFieldNotificationClassDescriptor::IconID.FieldName;
      if (pFVar10 != (FDS_SkillTableRow *)0x0) {
        if (this->IconID != pFVar10->ID_Icon) {
          local_3d0 = FFieldNotificationClassDescriptor::IconID.BitNumber;
          this->IconID = pFVar10->ID_Icon;
          local_3d8 = FVar6;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3d8);
        }
        FDS_Text::SetTextFromStringID(&this->SkillName,&pFVar10->ID_Name);
        local_3c0 = FFieldNotificationClassDescriptor::SkillName.BitNumber;
        local_3c8 = FFieldNotificationClassDescriptor::SkillName.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3c8);
      }
      UDS_PlayerData::GetData((ulong64)&local_408,this->PlayerEntityID,false);
      bVar7 = FWeakObjectPtr::IsValid(&local_408);
      if (bVar7) {
        this_01 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_408);
        bVar7 = UDS_PlayerData::IsHaveChar(this_01,this->CharID);
        if (bVar7) {
          iVar8 = this->SkillID;
          pUVar11 = FWeakObjectPtr::Get(&local_408);
          UDS_SkillData::GetData
                    ((ulong64)&local_3f0,*(ulong64 *)&pUVar11[8].field_0x10,SUB41(iVar8,0));
          bVar7 = FWeakObjectPtr::IsValid(&local_3f0);
          iVar8 = FFieldNotificationClassDescriptor::SkillLevel.BitNumber;
          if (bVar7) {
            local_3e8 = FFieldNotificationClassDescriptor::SkillLevel.FieldName;
            pUVar11 = FWeakObjectPtr::Get(&local_3f0);
            if (this->SkillLevel != *(int *)&pUVar11[4].field_0x8) {
              this->SkillLevel = *(int *)&pUVar11[4].field_0x8;
              local_3b8 = local_3e8;
              local_3b0 = iVar8;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3b8);
            }
          }
        }
        (this->SkillLevelText).StringTableType = StringUi;
        pTVar2 = &(this->SkillLevelText).FormatArgs;
        (this->SkillLevelText).StringTableID = 0x11177;
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
                   (this->SkillLevelText).FormatArgs.ArrayNum);
        piVar1 = &(this->SkillLevelText).FormatArgs.ArrayMax;
        (this->SkillLevelText).FormatArgs.ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
        iVar8 = (this->SkillLevelText).FormatArgs.ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->SkillLevelText).FormatArgs.ArrayNum = iVar8 + 1;
        this_00 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x28);
        FInstancedStruct::FInstancedStruct(this_00);
        pFVar12 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
        FVar5 = pFVar12[1];
        this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar12;
        this_00[1].StructMemory = (uchar *)FVar5;
        this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar12[2];
        FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
        pFVar13 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
        if (pFVar13 != (FDS_Int32StringFormatArg *)0x0) {
          pFVar13->Value = this->SkillLevel;
        }
        local_3a0 = FFieldNotificationClassDescriptor::SkillLevelText.BitNumber;
        local_3a8 = FFieldNotificationClassDescriptor::SkillLevelText.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3a8);
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8801157531679326161>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_SkillInfo.cpp"
                           ,0x2f,"false");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_SkillInfo::OnSetViewModel",0x20,Yes);
          UDS_LogManager::PrintLog(pUVar9,1,Warning,local_148.Ptr,0x30,L"playerData is Invalid.");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_400.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

