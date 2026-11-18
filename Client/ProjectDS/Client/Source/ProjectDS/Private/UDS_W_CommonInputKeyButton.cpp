// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// SetInputKeyIconID_WrapperImpl @ 14b77c5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonInputKeyButton::SetInputKeyIconID_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  UDS_Image *this;
  FDS_ResourceIconTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  FString *pFVar4;
  int iVar5;
  undefined1 auStackY_188 [32];
  FString FStack_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  lVar1 = *(longlong *)param_2;
  *(longlong *)((longlong)param_1 + 0x1398) = lVar1;
  this = *(UDS_Image **)((longlong)param_1 + 0x1390);
  if ((this != (UDS_Image *)0x0) && (0 < lVar1)) {
    iVar5 = (int)lVar1;
    if (0 < iVar5) {
      uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
      this->IconID = iVar5;
      pFVar2 = FDS_ResourceIconTableRow::Get((longlong)iVar5,true);
      if (pFVar2 == (FDS_ResourceIconTableRow *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_Image::SetIconID",0x14,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,TStack_138.Ptr,0x4f,
                   L"Couldn\'t find FDS_ResourceIconTableRow. (%d)");
        FStack_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)TStack_138._padding_;
      }
      else {
        pFVar4 = FSoftObjectPath::ToString(&pFVar2->IconPath,&FStack_148);
        UDS_Image::SetIconByPath(this,pFVar4);
      }
      if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
  return;
}

// StaticClass @ 14b77c5d0

UClass * __cdecl UDS_W_CommonInputKeyButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonInputKeyButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonInputKeyButton",
               &Z_Registration_Info_UClass_UDS_W_CommonInputKeyButton.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonInputKeyButton,0x13a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_CommonInputKeyButton>,
               InternalVTableHelperCtorCaller<UDS_W_CommonInputKeyButton>,local_res8,
               UDS_W_CommonIconTextButton::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonInputKeyButton.InnerSingleton;
}

// UDS_W_CommonInputKeyButton @ 14b781080

UDS_W_CommonInputKeyButton * __thiscall
UDS_W_CommonInputKeyButton::UDS_W_CommonInputKeyButton
          (UDS_W_CommonInputKeyButton *this,FVTableHelper *param_1)

{
  UDS_W_CommonIconTextButton::UDS_W_CommonIconTextButton((UDS_W_CommonIconTextButton *)this,param_1)
  ;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->InputKeyImage).field0_0x0.DebugPtr = (UDS_Image *)0x0;
  return this;
}

// UDS_W_CommonInputKeyButton @ 14b7810e0

UDS_W_CommonInputKeyButton * __thiscall
UDS_W_CommonInputKeyButton::UDS_W_CommonInputKeyButton
          (UDS_W_CommonInputKeyButton *this,FObjectInitializer *param_1)

{
  UDS_W_CommonIconTextButton::UDS_W_CommonIconTextButton((UDS_W_CommonIconTextButton *)this,param_1)
  ;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->InputKeyImage).field0_0x0.DebugPtr = (UDS_Image *)0x0;
  return this;
}

// ~UDS_W_CommonInputKeyButton @ 14b782cd0

void __thiscall
UDS_W_CommonInputKeyButton::~UDS_W_CommonInputKeyButton(UDS_W_CommonInputKeyButton *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_W_CommonIconTextButton::~UDS_W_CommonIconTextButton((UDS_W_CommonIconTextButton *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b785050

IClassDescriptor * __thiscall
UDS_W_CommonInputKeyButton::GetFieldNotificationDescriptor(UDS_W_CommonInputKeyButton *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_CommonInputKeyButton::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b785720

UClass * __cdecl UDS_W_CommonInputKeyButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonInputKeyButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonInputKeyButton",
               &Z_Registration_Info_UClass_UDS_W_CommonInputKeyButton.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonInputKeyButton,0x13a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_CommonInputKeyButton>,
               InternalVTableHelperCtorCaller<UDS_W_CommonInputKeyButton>,local_res8,
               UDS_W_CommonIconTextButton::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonInputKeyButton.InnerSingleton;
}

// StaticRegisterNativesUDS_W_CommonInputKeyButton @ 14b786490

void __cdecl UDS_W_CommonInputKeyButton::StaticRegisterNativesUDS_W_CommonInputKeyButton(void)

{
  return;
}

// InitWidgetBinding @ 14bd04c70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CommonInputKeyButton::InitWidgetBinding(UDS_W_CommonInputKeyButton *this,UWidget *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  UDS_W_CommonIconTextButton::InitWidgetBinding((UDS_W_CommonIconTextButton *)this,param_1);
  if (param_1 != (UWidget *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_Image_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->InputKeyImage).field0_0x0.DebugPtr = (UDS_Image *)param_1;
    }
  }
  return;
}

// PostWidgetBinding @ 14bd14f50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonInputKeyButton::PostWidgetBinding(UDS_W_CommonInputKeyButton *this)

{
  UDS_Image *this_00;
  
  UDS_W_CommonButton::PostWidgetBinding((UDS_W_CommonButton *)this);
  this_00 = (this->InputKeyImage).field0_0x0.DebugPtr;
  if ((this_00 != (UDS_Image *)0x0) && (0 < this->InputKeyIconID)) {
    UDS_Image::SetIconID(this_00,(int)this->InputKeyIconID);
    return;
  }
  return;
}

// SetInputKeyIconID @ 14bd1fd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CommonInputKeyButton::SetInputKeyIconID(UDS_W_CommonInputKeyButton *this,long64 *param_1)

{
  longlong lVar1;
  UDS_Image *this_00;
  FDS_ResourceIconTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  FString *pFVar4;
  int iVar5;
  undefined1 auStackY_188 [32];
  FString FStack_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  lVar1 = *param_1;
  this->InputKeyIconID = lVar1;
  this_00 = (this->InputKeyImage).field0_0x0.DebugPtr;
  if ((this_00 != (UDS_Image *)0x0) && (0 < lVar1)) {
    iVar5 = (int)lVar1;
    if (0 < iVar5) {
      uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
      this_00->IconID = iVar5;
      pFVar2 = FDS_ResourceIconTableRow::Get((longlong)iVar5,true);
      if (pFVar2 == (FDS_ResourceIconTableRow *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_Image::SetIconID",0x14,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,TStack_138.Ptr,0x4f,
                   L"Couldn\'t find FDS_ResourceIconTableRow. (%d)");
        FStack_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)TStack_138._padding_;
      }
      else {
        pFVar4 = FSoftObjectPath::ToString(&pFVar2->IconPath,&FStack_148);
        UDS_Image::SetIconByPath(this_00,pFVar4);
      }
      if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
  return;
}

