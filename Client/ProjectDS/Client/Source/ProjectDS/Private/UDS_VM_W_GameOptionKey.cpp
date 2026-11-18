// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b72f430

UClass * __cdecl UDS_VM_W_GameOptionKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionKey",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionKey.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionKey,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GameOptionKey>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionKey>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionKey.InnerSingleton;
}

// UDS_VM_W_GameOptionKey @ 14b735790

UDS_VM_W_GameOptionKey * __thiscall
UDS_VM_W_GameOptionKey::UDS_VM_W_GameOptionKey(UDS_VM_W_GameOptionKey *this,FVTableHelper *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionKey__6B_;
  (this->VMButtonKey).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  return this;
}

// UDS_VM_W_GameOptionKey @ 14b7357e0

UDS_VM_W_GameOptionKey * __thiscall
UDS_VM_W_GameOptionKey::UDS_VM_W_GameOptionKey
          (UDS_VM_W_GameOptionKey *this,FObjectInitializer *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionKey__6B_;
  (this->VMButtonKey).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  return this;
}

// ~UDS_VM_W_GameOptionKey @ 14b736940

void __thiscall UDS_VM_W_GameOptionKey::~UDS_VM_W_GameOptionKey(UDS_VM_W_GameOptionKey *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionKey__6B_;
  UDS_VM_GameOptionData::~UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7398a0

IClassDescriptor * __thiscall
UDS_VM_W_GameOptionKey::GetFieldNotificationDescriptor(UDS_VM_W_GameOptionKey *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_GameOptionKey::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73a980

UClass * __cdecl UDS_VM_W_GameOptionKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionKey",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionKey.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionKey,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GameOptionKey>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionKey>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionKey.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_GameOptionKey @ 14b73b060

void __cdecl UDS_VM_W_GameOptionKey::StaticRegisterNativesUDS_VM_W_GameOptionKey(void)

{
  return;
}

// GetOptionValueText @ 14bfabdd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDS_Text * __thiscall
UDS_VM_W_GameOptionKey::GetOptionValueText
          (UDS_VM_W_GameOptionKey *this,FDS_Text *__return_storage_ptr__)

{
  int *piVar1;
  FDS_TextFormatArg *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  ERoundingMode EVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FDS_Text *pFVar11;
  UWorld *this_00;
  APlayerController *pAVar12;
  UClass *pUVar13;
  UDS_M_GameOptionDataBase *pUVar14;
  UEnum *pUVar15;
  FNumberFormattingOptions *pFVar16;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> local_e8;
  FDS_Text local_d8;
  FDS_Text local_88;
  
  piVar1 = &(__return_storage_ptr__->FormatArgs).ArrayMax;
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  *piVar1 = 0;
  bVar8 = TWeakObjectPtr<UDS_M_GameOptionDataBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_GameOptionDataBase,FWeakObjectPtr> *)
                     ((longlong)&this->_padding_ + 4),(void *)0x0);
  if (bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1391288173740425253>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionKey.cpp"
                       ,0x25,"false");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FDS_Text *)(*pcVar3)();
      return pFVar11;
    }
  }
  else {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pAVar12 = UWorld::GetFirstPlayerController(this_00);
    if (pAVar12 != (APlayerController *)0x0) {
      pUVar13 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
      iVar10 = (int)pUVar13->_padding_;
      if ((iVar10 <= *(int *)(pAVar12->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar12->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
          &pUVar13->_padding_)) {
        pUVar14 = (UDS_M_GameOptionDataBase *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
        iVar10 = *(int *)((longlong)&pAVar12[1]._padding_ + 4);
        iVar9 = UDS_M_GameOptionDataBase::GetGameOptionID(pUVar14);
        if (iVar10 == iVar9) {
          pUVar14 = (UDS_M_GameOptionDataBase *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
          lVar4 = pAVar12[1]._padding_;
          iVar10 = UDS_M_GameOptionDataBase::GetGameOptionValueIndex(pUVar14);
          if ((int)lVar4 == iVar10) {
            FDS_Text::SetTextFromStringTable(__return_storage_ptr__,StringUi,0x31ce5);
            return __return_storage_ptr__;
          }
        }
      }
    }
    UDS_VM_GameOptionData::GetGameOptionKeyValues((UDS_VM_GameOptionData *)this,&local_e8);
    if (1 < local_e8.ArrayNum) {
      if ((local_e8.ArrayNum < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FDS_Text *)(*pcVar3)();
        return pFVar11;
      }
      if (*(int *)(local_e8.AllocatorInstance.Data + 4) == 0) {
        if ((local_e8.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FDS_Text *)(*pcVar3)();
          return pFVar11;
        }
        pUVar15 = StaticEnum<enum_EDS_KeyType>();
        DS_Util::GetStringEnumTableKey((UEnum *)&local_res18,(int)pUVar15);
        FDS_Text::SetTextFromStringEnumTable(__return_storage_ptr__,&local_res18);
      }
      else {
        local_88.StringTableType = None;
        local_88.StringTableID = 0;
        local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_88.StringEnumTableNameID.Number = 0;
        local_88.DateTime.Ticks = 0;
        local_88.TimeSpan.Ticks = 0;
        local_88.TimeExpressionType = None;
        local_88.IsExpression = false;
        local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.UniqueString.Data.ArrayNum = 0;
        local_88.UniqueString.Data.ArrayMax = 0;
        local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.FormatArgs.ArrayNum = 0;
        local_88.FormatArgs.ArrayMax = 0;
        if ((local_e8.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FDS_Text *)(*pcVar3)();
          return pFVar11;
        }
        pUVar15 = StaticEnum<enum_EDS_KeyType>();
        DS_Util::GetStringEnumTableKey((UEnum *)&local_res8,(int)pUVar15);
        FDS_Text::SetTextFromStringEnumTable(&local_88,&local_res8);
        local_d8.StringTableType = None;
        local_d8.StringTableID = 0;
        local_d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_d8.StringEnumTableNameID.Number = 0;
        local_d8.DateTime.Ticks = 0;
        local_d8.TimeSpan.Ticks = 0;
        local_d8.TimeExpressionType = None;
        local_d8.IsExpression = false;
        local_d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.UniqueString.Data.ArrayNum = 0;
        local_d8.UniqueString.Data.ArrayMax = 0;
        local_d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.FormatArgs.ArrayNum = 0;
        local_d8.FormatArgs.ArrayMax = 0;
        if ((local_e8.ArrayNum < 2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FDS_Text *)(*pcVar3)();
          return pFVar11;
        }
        pUVar15 = StaticEnum<enum_EDS_KeyType>();
        DS_Util::GetStringEnumTableKey((UEnum *)&local_res10,(int)pUVar15);
        FDS_Text::SetTextFromStringEnumTable(&local_d8,&local_res10);
        __return_storage_ptr__->StringTableType = StringUi;
        __return_storage_ptr__->StringTableID = 0x31ce6;
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)(__return_storage_ptr__->FormatArgs).AllocatorInstance.Data,
                   (__return_storage_ptr__->FormatArgs).ArrayNum);
        (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,&(__return_storage_ptr__->FormatArgs).AllocatorInstance,0,piVar1);
        }
        iVar10 = (__return_storage_ptr__->FormatArgs).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&(__return_storage_ptr__->FormatArgs).AllocatorInstance,piVar1);
        }
        (__return_storage_ptr__->FormatArgs).ArrayNum = iVar10 + 1;
        pFVar2 = (FDS_TextFormatArg *)
                 ((__return_storage_ptr__->FormatArgs).AllocatorInstance.Data +
                 (longlong)iVar10 * 0x28);
        FInstancedStruct::FInstancedStruct((FInstancedStruct *)pFVar2);
        pFVar16 = FNumberFormattingOptions::DefaultWithGrouping();
        bVar8 = pFVar16->UseGrouping;
        bVar5 = pFVar16->IndicateNearlyInteger;
        uVar6 = pFVar16->field_0x3;
        EVar7 = pFVar16->RoundingMode;
        iVar10 = pFVar16->MinimumIntegralDigits;
        iVar9 = pFVar16->MaximumIntegralDigits;
        (pFVar2->NumberFormatOption).AlwaysSign = pFVar16->AlwaysSign;
        (pFVar2->NumberFormatOption).UseGrouping = bVar8;
        (pFVar2->NumberFormatOption).IndicateNearlyInteger = bVar5;
        (pFVar2->NumberFormatOption).field_0x3 = uVar6;
        (pFVar2->NumberFormatOption).RoundingMode = EVar7;
        (pFVar2->NumberFormatOption).MinimumIntegralDigits = iVar10;
        (pFVar2->NumberFormatOption).MaximumIntegralDigits = iVar9;
        iVar10 = pFVar16->MaximumFractionalDigits;
        (pFVar2->NumberFormatOption).MinimumFractionalDigits = pFVar16->MinimumFractionalDigits;
        (pFVar2->NumberFormatOption).MaximumFractionalDigits = iVar10;
        FDS_TextFormatArg::SetArg<FDS_Text_&>(pFVar2,&local_88);
        iVar10 = (__return_storage_ptr__->FormatArgs).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&(__return_storage_ptr__->FormatArgs).AllocatorInstance,piVar1);
        }
        (__return_storage_ptr__->FormatArgs).ArrayNum = iVar10 + 1;
        pFVar2 = (FDS_TextFormatArg *)
                 ((__return_storage_ptr__->FormatArgs).AllocatorInstance.Data +
                 (longlong)iVar10 * 0x28);
        FInstancedStruct::FInstancedStruct((FInstancedStruct *)pFVar2);
        pFVar16 = FNumberFormattingOptions::DefaultWithGrouping();
        bVar8 = pFVar16->UseGrouping;
        bVar5 = pFVar16->IndicateNearlyInteger;
        uVar6 = pFVar16->field_0x3;
        EVar7 = pFVar16->RoundingMode;
        iVar10 = pFVar16->MinimumIntegralDigits;
        iVar9 = pFVar16->MaximumIntegralDigits;
        (pFVar2->NumberFormatOption).AlwaysSign = pFVar16->AlwaysSign;
        (pFVar2->NumberFormatOption).UseGrouping = bVar8;
        (pFVar2->NumberFormatOption).IndicateNearlyInteger = bVar5;
        (pFVar2->NumberFormatOption).field_0x3 = uVar6;
        (pFVar2->NumberFormatOption).RoundingMode = EVar7;
        (pFVar2->NumberFormatOption).MinimumIntegralDigits = iVar10;
        (pFVar2->NumberFormatOption).MaximumIntegralDigits = iVar9;
        iVar10 = pFVar16->MaximumFractionalDigits;
        (pFVar2->NumberFormatOption).MinimumFractionalDigits = pFVar16->MinimumFractionalDigits;
        (pFVar2->NumberFormatOption).MaximumFractionalDigits = iVar10;
        FDS_TextFormatArg::SetArg<FDS_Text_&>(pFVar2,&local_d8);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data,
                   local_d8.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_d8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.UniqueString.Data.AllocatorInstance.Data);
        }
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
                   local_88.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_88.FormatArgs.AllocatorInstance.Data);
        }
        if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// OnClickedKey @ 14bfbb930

void __thiscall
UDS_VM_W_GameOptionKey::OnClickedKey(UDS_VM_W_GameOptionKey *this,FDS_ButtonEventField *param_1)

{
  FWeakObjectPtr *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_M_GameOptionDataKey *this_01;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = (FWeakObjectPtr *)((longlong)&this->_padding_ + 4);
  bVar3 = FWeakObjectPtr::IsValid(this_00);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1391288173740425291>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionKey.cpp"
                       ,0x4b,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bfbba3a;
  }
  pUVar4 = FWeakObjectPtr::Get(this_00);
  if (pUVar4 == (UObject *)0x0) {
LAB_14bfbb9b1:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_M_GameOptionDataKey_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14bfbb9b1;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  bVar3 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar3) {
    this_01 = (UDS_M_GameOptionDataKey *)FWeakObjectPtr::Get(local_res8);
    UDS_M_GameOptionDataKey::ClickedKeySetting(this_01);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1391288173740425294>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionKey.cpp"
                       ,0x4e,"false");
    if (bVar3) {
code_r0x00014bfbba3a:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bfcdfa0

void __thiscall
UDS_VM_W_GameOptionKey::OnSetViewModel
          (UDS_VM_W_GameOptionKey *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_CommonIconTextButton *pFVar2;
  bool bVar3;
  UDS_VM_CommonIconTextButton *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UDS_VM_W_GameOptionKey *local_res8;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_GameOptionData::OnSetViewModel((UDS_VM_GameOptionData *)this,&local_58);
  if ((this->VMButtonKey).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VMButtonKey).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_CommonIconTextButton *)0x0) goto LAB_14bfce16e;
  }
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_48);
  pFVar2 = local_48.Object;
  if (local_48.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
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
  *(undefined4 *)&pFVar2->_padding_ = 0x15b;
  local_58.Object = (FDS_ViewModelContext *)OnClickedKey;
  local_58.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_38.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->OnClickDelegate,
             (FWriteAccessScope *)&local_28);
  local_10 = &(pFVar2->OnClickDelegate).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_GameOptionKey____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    puVar5[4] = local_58.Object;
    puVar5[5] = local_58.SharedReferenceCount.ReferenceController;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pUVar4 = (this->VMButtonKey).field0_0x0.DebugPtr;
  local_38.Object = (FDS_ViewModelContext *)local_48.Object;
  local_38.SharedReferenceCount.ReferenceController =
       local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
LAB_14bfce16e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateView @ 14bfe6af0

void __thiscall
UDS_VM_W_GameOptionKey::UpdateView
          (UDS_VM_W_GameOptionKey *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.BitNumber;
  local_18 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

