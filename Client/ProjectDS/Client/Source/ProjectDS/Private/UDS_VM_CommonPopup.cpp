// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 49

// StaticClass @ 14b61c520

UClass * __cdecl UDS_VM_CommonPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonPopup",
               &Z_Registration_Info_UClass_UDS_VM_CommonPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonPopup,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CommonPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonPopup>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonPopup.InnerSingleton;
}

// UDS_VM_CommonPopup @ 14b620d30

UDS_VM_CommonPopup * __thiscall
UDS_VM_CommonPopup::UDS_VM_CommonPopup(UDS_VM_CommonPopup *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonPopup__6B_;
  (this->ItemList).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemList).UserObjectList.ArrayNum = 0;
  (this->ItemList).UserObjectList.ArrayMax = 0;
  (this->AssetList).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetList).UserObjectList.ArrayNum = 0;
  (this->AssetList).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_CommonPopup @ 14b620d90

UDS_VM_CommonPopup * __thiscall
UDS_VM_CommonPopup::UDS_VM_CommonPopup(UDS_VM_CommonPopup *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonPopup__6B_;
  (this->ItemList).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemList).UserObjectList.ArrayNum = 0;
  (this->ItemList).UserObjectList.ArrayMax = 0;
  (this->AssetList).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetList).UserObjectList.ArrayNum = 0;
  (this->AssetList).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_CommonPopup @ 14b621bf0

void __thiscall UDS_VM_CommonPopup::~UDS_VM_CommonPopup(UDS_VM_CommonPopup *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonPopup__6B_;
  pFVar1 = (this->AssetList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b623b90

IClassDescriptor * __thiscall
UDS_VM_CommonPopup::GetFieldNotificationDescriptor(UDS_VM_CommonPopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CommonPopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6245b0

UClass * __cdecl UDS_VM_CommonPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonPopup",
               &Z_Registration_Info_UClass_UDS_VM_CommonPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonPopup,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CommonPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonPopup>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CommonPopup @ 14b624b90

void __cdecl UDS_VM_CommonPopup::StaticRegisterNativesUDS_VM_CommonPopup(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_CommonPopup_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execTextMainContent @ 14b625a80

void __cdecl UDS_VM_CommonPopup::execTextMainContent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TextMainContent((UDS_VM_CommonPopup *)param_1,&local_58);
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

// execTextSubContent01 @ 14b625b60

void __cdecl
UDS_VM_CommonPopup::execTextSubContent01(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TextSubContent01((UDS_VM_CommonPopup *)param_1,&local_58);
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

// execTextSubContent02 @ 14b625bd0

void __cdecl
UDS_VM_CommonPopup::execTextSubContent02(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TextSubContent02((UDS_VM_CommonPopup *)param_1,&local_58);
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

// execTextTitle @ 14b625c40

void __cdecl UDS_VM_CommonPopup::execTextTitle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TextTitle((UDS_VM_CommonPopup *)param_1,&local_58);
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

// execVisibleAsset1 @ 14b625cb0

void __cdecl UDS_VM_CommonPopup::execVisibleAsset1(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleAsset1((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleAsset2 @ 14b625cf0

void __cdecl UDS_VM_CommonPopup::execVisibleAsset2(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleAsset2((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleAsset @ 14b625d30

void __cdecl UDS_VM_CommonPopup::execVisibleAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleAsset((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleButtonCancel @ 14b625df0

void __cdecl
UDS_VM_CommonPopup::execVisibleButtonCancel(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleButtonCancel((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleButtonConfirm @ 14b625e30

void __cdecl
UDS_VM_CommonPopup::execVisibleButtonConfirm(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleButtonConfirm((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleButtonFunction @ 14b625e70

void __cdecl
UDS_VM_CommonPopup::execVisibleButtonFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleButtonFunction((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleCheckText @ 14b625eb0

void __cdecl
UDS_VM_CommonPopup::execVisibleCheckText(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleCheckText((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleItemSlot01 @ 14b625ef0

void __cdecl
UDS_VM_CommonPopup::execVisibleItemSlot01(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleItemSlot01((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleItemSlot02 @ 14b625f30

void __cdecl
UDS_VM_CommonPopup::execVisibleItemSlot02(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleItemSlot02((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleItemSlot @ 14b625f70

void __cdecl UDS_VM_CommonPopup::execVisibleItemSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleItemSlot((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleMainContent @ 14b625fb0

void __cdecl
UDS_VM_CommonPopup::execVisibleMainContent(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleMainContent((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleProgress @ 14b625ff0

void __cdecl UDS_VM_CommonPopup::execVisibleProgress(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleProgress((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleSlider @ 14b626070

void __cdecl UDS_VM_CommonPopup::execVisibleSlider(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleSlider((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleSubContent01 @ 14b6260b0

void __cdecl
UDS_VM_CommonPopup::execVisibleSubContent01(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleSubContent01((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleSubContent02 @ 14b6260f0

void __cdecl
UDS_VM_CommonPopup::execVisibleSubContent02(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleSubContent02((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleTitle @ 14b626130

void __cdecl UDS_VM_CommonPopup::execVisibleTitle(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleTitle((UDS_VM_CommonPopup *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// TextMainContent @ 14bdeabe0

FDS_Text * __thiscall
UDS_VM_CommonPopup::TextMainContent(UDS_VM_CommonPopup *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  UDS_M_CommonPopup *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FDS_Text *pFVar5;
  
  this_00 = (UDS_M_CommonPopup *)this->_padding_;
  if (this_00 != (UDS_M_CommonPopup *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      UDS_M_CommonPopup::GetMainContent(this_00,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5593080608134791112>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                     ,0x38,"false");
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

// TextSubContent01 @ 14bdeadb0

FDS_Text * __thiscall
UDS_VM_CommonPopup::TextSubContent01(UDS_VM_CommonPopup *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  UDS_M_CommonPopup *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FDS_Text *pFVar5;
  
  this_00 = (UDS_M_CommonPopup *)this->_padding_;
  if (this_00 != (UDS_M_CommonPopup *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      UDS_M_CommonPopup::GetSubContent01(this_00,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5593080608134791104>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                     ,0x40,"false");
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

// TextSubContent02 @ 14bdeae80

FDS_Text * __thiscall
UDS_VM_CommonPopup::TextSubContent02(UDS_VM_CommonPopup *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  UDS_M_CommonPopup *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FDS_Text *pFVar5;
  
  this_00 = (UDS_M_CommonPopup *)this->_padding_;
  if (this_00 != (UDS_M_CommonPopup *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      UDS_M_CommonPopup::GetSubContent02(this_00,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5593080608134791096>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                     ,0x48,"false");
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

// TextTitle @ 14bdeaf50

FDS_Text * __thiscall
UDS_VM_CommonPopup::TextTitle(UDS_VM_CommonPopup *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  UDS_M_CommonPopup *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FDS_Text *pFVar5;
  
  this_00 = (UDS_M_CommonPopup *)this->_padding_;
  if (this_00 != (UDS_M_CommonPopup *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      UDS_M_CommonPopup::GetTitle(this_00,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5593080608134791120>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                     ,0x30,"false");
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

// UnbindModel @ 14bdec650

void __thiscall UDS_VM_CommonPopup::UnbindModel(UDS_VM_CommonPopup *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_CommonPopupManager *this_00;
  UClass *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UDS_GameInstance *local_38;
  UDS_CommonPopupManager *local_30;
  UObject *local_28 [2];
  
  local_38 = UDS_GameInstance::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UDS_GameInstance *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UDS_GameInstance *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_38);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791152>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,0x10,"false");
    if (!bVar3) {
      return;
    }
code_r0x00014bdec78b:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_30 = UDS_CommonPopupManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_30 != (UDS_CommonPopupManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_30);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_30 != (UDS_CommonPopupManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_30);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_30);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791149>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,0x13,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bdec78b;
  }
  this_00 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_res10);
  pUVar5 = (UObject *)this->_padding_;
  if (pUVar5 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bdec7d5;
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdec7d5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_28[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_28);
  UDS_CommonPopupManager::ReleaseCommonPopup
            (this_00,(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)local_res20);
  UDS_VM_ModelBase::UnbindModel((UDS_VM_ModelBase *)this);
  return;
}

// UpdateView @ 14bdf9d90

void __thiscall
UDS_VM_CommonPopup::UpdateView
          (UDS_VM_CommonPopup *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::TextTitle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextTitle.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::TextMainContent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextMainContent.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::TextSubContent01.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextSubContent01.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::TextSubContent02.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextSubContent02.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleTitle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleTitle.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleMainContent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleMainContent.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleSubContent01.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleSubContent01.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleSubContent02.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleSubContent02.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleItemSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleItemSlot.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleSlider.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleSlider.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleProgress.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleProgress.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleAsset.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleAsset.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleItemSlot01.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleItemSlot01.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleItemSlot02.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleItemSlot02.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// VisibleAsset1 @ 14bdfb1d0

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleAsset1(UDS_VM_CommonPopup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UClass *pUVar4;
  UDS_M_CommonPopup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdfb1fe;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdfb1fe:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791033>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,0x87,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Collapsed;
  }
  this_01 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_CommonPopup::IsModel(this_01,Asset01);
  EVar3 = Collapsed;
  if (bVar2) {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// VisibleAsset2 @ 14bdfb2c0

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleAsset2(UDS_VM_CommonPopup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UClass *pUVar4;
  UDS_M_CommonPopup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdfb2ee;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdfb2ee:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791027>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,0x8d,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Collapsed;
  }
  this_01 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_CommonPopup::IsModel(this_01,Asset02);
  EVar3 = Collapsed;
  if (bVar2) {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// VisibleAsset @ 14bdfb3b0

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleAsset(UDS_VM_CommonPopup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UClass *pUVar4;
  UDS_M_CommonPopup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdfb3de;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdfb3de:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791051>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,0x75,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Collapsed;
  }
  this_01 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_CommonPopup::IsVisibleAsset(this_01);
  EVar3 = Collapsed;
  if (bVar2) {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// VisibleButtonCancel @ 14bdfb5c0

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleButtonCancel(UDS_VM_CommonPopup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UClass *pUVar4;
  UDS_M_CommonPopup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdfb5ee;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdfb5ee:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791015>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,0x99,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Collapsed;
  }
  this_01 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_CommonPopup::IsModel(this_01,ButtonCancel);
  EVar3 = Collapsed;
  if (bVar2) {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// VisibleButtonConfirm @ 14bdfb6b0

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleButtonConfirm(UDS_VM_CommonPopup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UClass *pUVar4;
  UDS_M_CommonPopup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdfb6de;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdfb6de:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791009>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,0x9f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Collapsed;
  }
  this_01 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_CommonPopup::IsModel(this_01,ButtonConfirm);
  EVar3 = Collapsed;
  if (bVar2) {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// VisibleButtonFunction @ 14bdfb7a0

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleButtonFunction(UDS_VM_CommonPopup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UClass *pUVar4;
  UDS_M_CommonPopup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdfb7ce;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdfb7ce:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791003>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,0xa5,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Collapsed;
  }
  this_01 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_CommonPopup::IsModel(this_01,ButtonFunction);
  EVar3 = Collapsed;
  if (bVar2) {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// VisibleCheckText @ 14bdfb890

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleCheckText(UDS_VM_CommonPopup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UClass *pUVar4;
  UDS_M_CommonPopup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdfb8be;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdfb8be:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791021>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,0x93,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Collapsed;
  }
  this_01 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_CommonPopup::IsModel(this_01,CheckText);
  EVar3 = Collapsed;
  if (bVar2) {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// VisibleItemSlot01 @ 14bdfb980

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleItemSlot01(UDS_VM_CommonPopup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UClass *pUVar4;
  UDS_M_CommonPopup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdfb9ae;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdfb9ae:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791045>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,0x7b,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Collapsed;
  }
  this_01 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_CommonPopup::IsModel(this_01,ItemSlot01);
  return !bVar2;
}

// VisibleItemSlot02 @ 14bdfba60

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleItemSlot02(UDS_VM_CommonPopup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UClass *pUVar4;
  UDS_M_CommonPopup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdfba8e;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdfba8e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791039>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,0x81,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Collapsed;
  }
  this_01 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_CommonPopup::IsModel(this_01,ItemSlot02);
  return !bVar2;
}

// VisibleItemSlot @ 14bdfbb40

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleItemSlot(UDS_VM_CommonPopup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UClass *pUVar4;
  UDS_M_CommonPopup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdfbb6e;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdfbb6e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791069>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,99,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Collapsed;
  }
  this_01 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_CommonPopup::IsVisibleItemSlot(this_01);
  EVar3 = Collapsed;
  if (bVar2) {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// VisibleMainContent @ 14bdfbc30

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleMainContent(UDS_VM_CommonPopup *this)

{
  int iVar1;
  UDS_M_CommonPopup *this_00;
  code *pcVar2;
  ESlateVisibility EVar3;
  bool bVar4;
  UClass *pUVar5;
  FDS_Text local_58;
  
  this_00 = (UDS_M_CommonPopup *)this->_padding_;
  if (this_00 != (UDS_M_CommonPopup *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      UDS_M_CommonPopup::GetMainContent(this_00,&local_58);
      goto LAB_14bdfbcda;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5593080608134791112>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                     ,0x38,"false");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    EVar3 = (*pcVar2)();
    return EVar3;
  }
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.TimeExpressionType = None;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
LAB_14bdfbcda:
  bVar4 = FDS_Text::IsEmpty(&local_58);
  EVar3 = SelfHitTestInvisible;
  if (bVar4) {
    EVar3 = Collapsed;
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return EVar3;
}

// VisibleProgress @ 14bdfbd40

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleProgress(UDS_VM_CommonPopup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UClass *pUVar4;
  UDS_M_CommonPopup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdfbd6e;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdfbd6e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791063>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,0x69,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Collapsed;
  }
  this_01 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_CommonPopup::IsVisibleProgress(this_01);
  EVar3 = Collapsed;
  if (bVar2) {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// VisibleSlider @ 14bdfbea0

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleSlider(UDS_VM_CommonPopup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UClass *pUVar4;
  UDS_M_CommonPopup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdfbece;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdfbece:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5593080608134791057>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                       ,0x6f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Collapsed;
  }
  this_01 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_CommonPopup::IsVisibleSlider(this_01);
  EVar3 = Collapsed;
  if (bVar2) {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// VisibleSubContent01 @ 14bdfbf90

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleSubContent01(UDS_VM_CommonPopup *this)

{
  int iVar1;
  UDS_M_CommonPopup *this_00;
  code *pcVar2;
  ESlateVisibility EVar3;
  bool bVar4;
  UClass *pUVar5;
  FDS_Text local_58;
  
  this_00 = (UDS_M_CommonPopup *)this->_padding_;
  if (this_00 != (UDS_M_CommonPopup *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      UDS_M_CommonPopup::GetSubContent01(this_00,&local_58);
      goto LAB_14bdfc03a;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5593080608134791104>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                     ,0x40,"false");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    EVar3 = (*pcVar2)();
    return EVar3;
  }
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.TimeExpressionType = None;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
LAB_14bdfc03a:
  bVar4 = FDS_Text::IsEmpty(&local_58);
  EVar3 = SelfHitTestInvisible;
  if (bVar4) {
    EVar3 = Collapsed;
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return EVar3;
}

// VisibleSubContent02 @ 14bdfc0a0

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleSubContent02(UDS_VM_CommonPopup *this)

{
  int iVar1;
  UDS_M_CommonPopup *this_00;
  code *pcVar2;
  ESlateVisibility EVar3;
  bool bVar4;
  UClass *pUVar5;
  FDS_Text local_58;
  
  this_00 = (UDS_M_CommonPopup *)this->_padding_;
  if (this_00 != (UDS_M_CommonPopup *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      UDS_M_CommonPopup::GetSubContent02(this_00,&local_58);
      goto LAB_14bdfc14a;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5593080608134791096>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                     ,0x48,"false");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    EVar3 = (*pcVar2)();
    return EVar3;
  }
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.TimeExpressionType = None;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
LAB_14bdfc14a:
  bVar4 = FDS_Text::IsEmpty(&local_58);
  EVar3 = SelfHitTestInvisible;
  if (bVar4) {
    EVar3 = Collapsed;
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return EVar3;
}

// VisibleTitle @ 14bdfc1b0

ESlateVisibility __thiscall UDS_VM_CommonPopup::VisibleTitle(UDS_VM_CommonPopup *this)

{
  int iVar1;
  UDS_M_CommonPopup *this_00;
  code *pcVar2;
  ESlateVisibility EVar3;
  bool bVar4;
  UClass *pUVar5;
  FDS_Text local_58;
  
  this_00 = (UDS_M_CommonPopup *)this->_padding_;
  if (this_00 != (UDS_M_CommonPopup *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      UDS_M_CommonPopup::GetTitle(this_00,&local_58);
      goto LAB_14bdfc25a;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5593080608134791120>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonPopup.cpp"
                     ,0x30,"false");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    EVar3 = (*pcVar2)();
    return EVar3;
  }
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.TimeExpressionType = None;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
LAB_14bdfc25a:
  bVar4 = FDS_Text::IsEmpty(&local_58);
  EVar3 = SelfHitTestInvisible;
  if (bVar4) {
    EVar3 = Collapsed;
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return EVar3;
}

