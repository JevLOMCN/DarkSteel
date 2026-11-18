// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// StaticClass @ 14b688270

UClass * __cdecl UDS_VM_ItemDetail_StatusSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemDetail_StatusSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemDetail_StatusSlot",
               &Z_Registration_Info_UClass_UDS_VM_ItemDetail_StatusSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemDetail_StatusSlot,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemDetail_StatusSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemDetail_StatusSlot>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemDetail_StatusSlot.InnerSingleton;
}

// UDS_VM_ItemDetail_StatusSlot @ 14b68d3c0

UDS_VM_ItemDetail_StatusSlot * __thiscall
UDS_VM_ItemDetail_StatusSlot::UDS_VM_ItemDetail_StatusSlot
          (UDS_VM_ItemDetail_StatusSlot *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemDetail_StatusSlot__6B_;
  (this->FixedText_GemDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_GemDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_GemDesc).DateTime.Ticks = 0;
  (this->FixedText_GemDesc).TimeSpan.Ticks = 0;
  (this->FixedText_GemDesc).TimeExpressionType = None;
  (this->FixedText_GemDesc).IsExpression = false;
  (this->FixedText_GemDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_GemDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_GemDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_GemDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_GemDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_GemDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_GemDesc).StringTableType = StringUi;
  (this->FixedText_GemDesc).StringTableID = 0x9ec5;
  return this;
}

// UDS_VM_ItemDetail_StatusSlot @ 14b68d450

UDS_VM_ItemDetail_StatusSlot * __thiscall
UDS_VM_ItemDetail_StatusSlot::UDS_VM_ItemDetail_StatusSlot
          (UDS_VM_ItemDetail_StatusSlot *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemDetail_StatusSlot__6B_;
  (this->FixedText_GemDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_GemDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_GemDesc).DateTime.Ticks = 0;
  (this->FixedText_GemDesc).TimeSpan.Ticks = 0;
  (this->FixedText_GemDesc).TimeExpressionType = None;
  (this->FixedText_GemDesc).IsExpression = false;
  (this->FixedText_GemDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_GemDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_GemDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_GemDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_GemDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_GemDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_GemDesc).StringTableType = StringUi;
  (this->FixedText_GemDesc).StringTableID = 0x9ec5;
  return this;
}

// ~UDS_VM_ItemDetail_StatusSlot @ 14b68e160

void __thiscall
UDS_VM_ItemDetail_StatusSlot::~UDS_VM_ItemDetail_StatusSlot(UDS_VM_ItemDetail_StatusSlot *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemDetail_StatusSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_GemDesc).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_GemDesc).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_GemDesc).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_GemDesc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6900b0

IClassDescriptor * __thiscall
UDS_VM_ItemDetail_StatusSlot::GetFieldNotificationDescriptor(UDS_VM_ItemDetail_StatusSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemDetail_StatusSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b690be0

UClass * __cdecl UDS_VM_ItemDetail_StatusSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemDetail_StatusSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemDetail_StatusSlot",
               &Z_Registration_Info_UClass_UDS_VM_ItemDetail_StatusSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemDetail_StatusSlot,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemDetail_StatusSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemDetail_StatusSlot>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemDetail_StatusSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemDetail_StatusSlot @ 14b6911b0

void __cdecl UDS_VM_ItemDetail_StatusSlot::StaticRegisterNativesUDS_VM_ItemDetail_StatusSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemDetail_StatusSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIconIDStatus @ 14b691bf0

void __cdecl
UDS_VM_ItemDetail_StatusSlot::execIconIDStatus(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = IconIDStatus((UDS_VM_ItemDetail_StatusSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execIncreasedComparisonValue @ 14b691c30

void __cdecl
UDS_VM_ItemDetail_StatusSlot::execIncreasedComparisonValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IncreasedComparisonValue((UDS_VM_ItemDetail_StatusSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execStyleIDStatusComparisonValue @ 14b6923d0

void __cdecl
UDS_VM_ItemDetail_StatusSlot::execStyleIDStatusComparisonValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  long64 lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = StyleIDStatusComparisonValue((UDS_VM_ItemDetail_StatusSlot *)param_1);
  *(long64 *)param_3 = lVar1;
  return;
}

// execStyleIDStatusName @ 14b692410

void __cdecl
UDS_VM_ItemDetail_StatusSlot::execStyleIDStatusName(UObject *param_1,FFrame *param_2,void *param_3)

{
  long64 lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = StyleIDStatusName((UDS_VM_ItemDetail_StatusSlot *)param_1);
  *(long64 *)param_3 = lVar1;
  return;
}

// execTextStatusComparisonValue @ 14b692580

void __cdecl
UDS_VM_ItemDetail_StatusSlot::execTextStatusComparisonValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TextStatusComparisonValue((UDS_VM_ItemDetail_StatusSlot *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execTextStatusEnhanceValue @ 14b6925d0

void __cdecl
UDS_VM_ItemDetail_StatusSlot::execTextStatusEnhanceValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TextStatusEnhanceValue((UDS_VM_ItemDetail_StatusSlot *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execTextStatusName @ 14b692620

void __cdecl
UDS_VM_ItemDetail_StatusSlot::execTextStatusName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TextStatusName((UDS_VM_ItemDetail_StatusSlot *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execTextStatusValue @ 14b692690

void __cdecl
UDS_VM_ItemDetail_StatusSlot::execTextStatusValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TextStatusValue((UDS_VM_ItemDetail_StatusSlot *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execVisibleComparisonValue @ 14b6926e0

void __cdecl
UDS_VM_ItemDetail_StatusSlot::execVisibleComparisonValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleComparisonValue((UDS_VM_ItemDetail_StatusSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleEnhanceValue @ 14b692720

void __cdecl
UDS_VM_ItemDetail_StatusSlot::execVisibleEnhanceValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleEnhanceValue((UDS_VM_ItemDetail_StatusSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// GetStatusTable @ 14bef0520

FDS_StatusTableRow * __thiscall
UDS_VM_ItemDetail_StatusSlot::GetStatusTable(UDS_VM_ItemDetail_StatusSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  UEnum *this_00;
  FName *pFVar6;
  long64 lVar7;
  FDS_StatusTableRow *pFVar8;
  int iVar9;
  wchar_t *pwVar10;
  int local_res8 [2];
  FName local_res10;
  FString local_18;
  
  lVar1 = this->_padding_;
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                    ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_StatusSlotData)local_res8);
  uVar2 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)(lVar1 + 0x40),uVar3 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar10);
  this_00 = StaticEnum<enum_EDS_StatusType>();
  iVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar9 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    pFVar6 = ::FName::FName(&local_res10,iVar9,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar7 = UEnum::GetValueByName(this_00,*pFVar6,None);
    iVar9 = (int)lVar7;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar8 = FDS_StatusTableRow::Get((longlong)iVar9,true);
  return pFVar8;
}

// IconIDStatus @ 14bef24d0

int __thiscall UDS_VM_ItemDetail_StatusSlot::IconIDStatus(UDS_VM_ItemDetail_StatusSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_StatusSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar7;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum != 0) {
      iVar5 = _wtoi((wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      return iVar5;
    }
    iVar5 = _wtoi(L"");
    return iVar5;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<914984997922799643>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemDetail_StatusSlot.cpp"
                     ,0x1b,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  return 0;
}

// IncreasedComparisonValue @ 14bef2590

bool __thiscall
UDS_VM_ItemDetail_StatusSlot::IncreasedComparisonValue(UDS_VM_ItemDetail_StatusSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_StatusSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar8;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum != 0) {
      iVar7 = _wtoi((wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
      return 0 < iVar7;
    }
    iVar7 = _wtoi(L"");
    return 0 < iVar7;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<914984997922799699>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemDetail_StatusSlot.cpp"
                     ,0x53,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// StyleIDStatusComparisonValue @ 14bf1cab0

long64 __thiscall
UDS_VM_ItemDetail_StatusSlot::StyleIDStatusComparisonValue(UDS_VM_ItemDetail_StatusSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long64 lVar7;
  FName FVar8;
  FString *pFVar9;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_StatusSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar8;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    iVar6 = _wtoi(_Str);
    lVar7 = FDS_DataContainer::GetData<__int64,enum_EDS_StatusSlotData>
                      ((FDS_DataContainer *)(this->_padding_ + 0x40),
                       (iVar6 < 1) + StyleIDIncreasedStatusComparisonValue);
    return lVar7;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<914984997922799681>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemDetail_StatusSlot.cpp"
                     ,0x41,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    lVar7 = (*pcVar3)();
    return lVar7;
  }
  return 0;
}

// StyleIDStatusName @ 14bf1cb90

long64 __thiscall
UDS_VM_ItemDetail_StatusSlot::StyleIDStatusName(UDS_VM_ItemDetail_StatusSlot *this)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long64 lVar5;
  FName FVar6;
  FString *pFVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  lVar8 = this->_padding_;
  if (lVar8 != 0) {
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                      ((FDS_DataContainer *)(lVar8 + 0x40),(EDS_StatusSlotData)local_res8);
    uVar1 = *(undefined8 *)FVar6;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar8 + 0x40),uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar6);
    if ((pFVar7->Data).ArrayNum != 0) {
      lVar8 = _wtoi64((wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
      return lVar8;
    }
    lVar8 = _wtoi64(L"");
    return lVar8;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<914984997922799675>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemDetail_StatusSlot.cpp"
                     ,0x3b,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    lVar5 = (*pcVar2)();
    return lVar5;
  }
  return 0;
}

// TextStatusComparisonValue @ 14bf1cf20

FText * __thiscall
UDS_VM_ItemDetail_StatusSlot::TextStatusComparisonValue
          (UDS_VM_ItemDetail_StatusSlot *this,FText *__return_storage_ptr__)

{
  longlong lVar1;
  ITextData *pIVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FText *pFVar9;
  FName FVar10;
  FString *pFVar11;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FString local_28;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                       ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_StatusSlotData)local_res18);
    uVar3 = *(undefined8 *)FVar10;
    uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)(lVar1 + 0x40),uVar7 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar10);
    if ((pFVar11->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    iVar8 = _wtoi(_Str);
    iVar5 = -iVar8;
    if (-iVar8 < 0) {
      iVar5 = iVar8;
    }
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_28,iVar5);
    FText::FromString(__return_storage_ptr__,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<914984997922799669>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemDetail_StatusSlot.cpp"
                     ,0x35,"false");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FText *)(*pcVar4)();
    return pFVar9;
  }
  pFVar9 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar9->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar9->Flags;
  return __return_storage_ptr__;
}

// TextStatusEnhanceValue @ 14bf1d040

FText * __thiscall
UDS_VM_ItemDetail_StatusSlot::TextStatusEnhanceValue
          (UDS_VM_ItemDetail_StatusSlot *this,FText *__return_storage_ptr__)

{
  longlong lVar1;
  ITextData *pIVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FText *pFVar8;
  FName FVar9;
  FString *pFVar10;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FString local_28;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_StatusSlotData)local_res18);
    uVar3 = *(undefined8 *)FVar9;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar9);
    if ((pFVar10->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    iVar7 = _wtoi(_Str);
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_28,iVar7);
    FText::FromString(__return_storage_ptr__,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<914984997922799663>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemDetail_StatusSlot.cpp"
                     ,0x2f,"false");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FText *)(*pcVar4)();
    return pFVar8;
  }
  pFVar8 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar8->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar8->Flags;
  return __return_storage_ptr__;
}

// TextStatusName @ 14bf1d160

FDS_Text * __thiscall
UDS_VM_ItemDetail_StatusSlot::TextStatusName
          (UDS_VM_ItemDetail_StatusSlot *this,FDS_Text *__return_storage_ptr__)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDS_Text *pFVar5;
  FName FVar6;
  FString *pFVar7;
  longlong lVar8;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  lVar8 = this->_padding_;
  if (lVar8 != 0) {
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                      ((FDS_DataContainer *)(lVar8 + 0x40),(EDS_StatusSlotData)local_res8);
    uVar1 = *(undefined8 *)FVar6;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar8 + 0x40),uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar6);
    if ((pFVar7->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    lVar8 = _wtoi64(_Str);
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
    FDS_Text::SetTextFromStringTable(__return_storage_ptr__,StringBase,lVar8);
    return __return_storage_ptr__;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<914984997922799649>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemDetail_StatusSlot.cpp"
                     ,0x21,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FDS_Text *)(*pcVar2)();
    return pFVar5;
  }
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

// TextStatusValue @ 14bf1d2a0

FText * __thiscall
UDS_VM_ItemDetail_StatusSlot::TextStatusValue
          (UDS_VM_ItemDetail_StatusSlot *this,FText *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  UEnum *this_00;
  FName *pFVar10;
  long64 lVar11;
  FDS_StatusTableRow *pFVar12;
  FText *pFVar13;
  wchar_t *pwVar14;
  wchar_t *_Str;
  int local_res8 [4];
  undefined1 local_res18 [8];
  FName local_res20;
  undefined1 local_68 [8];
  FString local_60;
  FString local_50;
  
  lVar1 = this->_padding_;
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                    ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_StatusSlotData)local_res18);
  uVar2 = *(undefined8 *)FVar8;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
  _Str = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_60,pwVar14);
  this_00 = StaticEnum<enum_EDS_StatusType>();
  iVar7 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_60.Data.ArrayNum + -1;
    if (local_60.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar10 = ::FName::FName(&local_res20,iVar7,(wchar_t *)local_60.Data.AllocatorInstance.Data,
                             FNAME_Add);
    lVar11 = UEnum::GetValueByName(this_00,*pFVar10,None);
    iVar7 = (int)lVar11;
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  pFVar12 = FDS_StatusTableRow::Get((longlong)iVar7,true);
  if (pFVar12 == (FDS_StatusTableRow *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<914984997922799656>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemDetail_StatusSlot.cpp"
                       ,0x28,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FText *)(*pcVar4)();
      return pFVar13;
    }
    pFVar13 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar3 = (pFVar13->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar13->Flags;
  }
  else {
    lVar1 = this->_padding_;
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_StatusSlotData)local_68);
    uVar2 = *(undefined8 *)FVar8;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum != 0) {
      _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    iVar7 = _wtoi(_Str);
    pFVar9 = DS_Util::GetInfoViewValueFormattedString
                       (&local_50,pFVar12->InfoViewValueFormat,(float)iVar7);
    FText::FromString(__return_storage_ptr__,pFVar9);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// UpdateView @ 14bf25e50

void __thiscall
UDS_VM_ItemDetail_StatusSlot::UpdateView
          (UDS_VM_ItemDetail_StatusSlot *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::IconIDStatus.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconIDStatus.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::TextStatusName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextStatusName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::TextStatusValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextStatusValue.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::TextStatusEnhanceValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextStatusEnhanceValue.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::TextStatusComparisonValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextStatusComparisonValue.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::StyleIDStatusName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StyleIDStatusName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::StyleIDStatusComparisonValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StyleIDStatusComparisonValue.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleEnhanceValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleEnhanceValue.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleComparisonValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleComparisonValue.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IncreasedComparisonValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IncreasedComparisonValue.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// VisibleComparisonValue @ 14bf260b0

ESlateVisibility __thiscall
UDS_VM_ItemDetail_StatusSlot::VisibleComparisonValue(UDS_VM_ItemDetail_StatusSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  ESlateVisibility EVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_StatusSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar8;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    iVar7 = _wtoi(_Str);
    EVar5 = Collapsed;
    if (iVar7 != 0) {
      EVar5 = SelfHitTestInvisible;
    }
    return EVar5;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<914984997922799693>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemDetail_StatusSlot.cpp"
                     ,0x4d,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  return Collapsed;
}

// VisibleEnhanceValue @ 14bf26180

ESlateVisibility __thiscall
UDS_VM_ItemDetail_StatusSlot::VisibleEnhanceValue(UDS_VM_ItemDetail_StatusSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  ESlateVisibility EVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_StatusSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar8;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    iVar7 = _wtoi(_Str);
    EVar5 = Collapsed;
    if (iVar7 != 0) {
      EVar5 = SelfHitTestInvisible;
    }
    return EVar5;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<914984997922799687>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemDetail_StatusSlot.cpp"
                     ,0x47,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  return Collapsed;
}

