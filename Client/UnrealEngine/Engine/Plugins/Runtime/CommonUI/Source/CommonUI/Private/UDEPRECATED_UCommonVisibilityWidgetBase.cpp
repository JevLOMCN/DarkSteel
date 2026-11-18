// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 12

// StaticClass @ 14a785570

UClass * __cdecl UDEPRECATED_UCommonVisibilityWidgetBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_UCommonVisibilityWidgetBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"UCommonVisibilityWidgetBase",
               &Z_Registration_Info_UClass_UDEPRECATED_UCommonVisibilityWidgetBase.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_UCommonVisibilityWidgetBase,0x400,0x10,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UDEPRECATED_UCommonVisibilityWidgetBase>,
               InternalVTableHelperCtorCaller<UDEPRECATED_UCommonVisibilityWidgetBase>,local_res8,
               UCommonBorder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_UCommonVisibilityWidgetBase.InnerSingleton;
}

// UDEPRECATED_UCommonVisibilityWidgetBase @ 14a7b03b0

UDEPRECATED_UCommonVisibilityWidgetBase * __thiscall
UDEPRECATED_UCommonVisibilityWidgetBase::UDEPRECATED_UCommonVisibilityWidgetBase
          (UDEPRECATED_UCommonVisibilityWidgetBase *this,FVTableHelper *param_1)

{
  UBorder::UBorder((UBorder *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  *(undefined8 *)&this->VisibilityControls = 0;
  *(undefined8 *)&(this->VisibilityControls).field_0x8 = 0;
  *(undefined8 *)&(this->VisibilityControls).field_0x20 = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&(this->VisibilityControls).field_0x28 = 0;
  *(undefined4 *)&(this->VisibilityControls).field_0x2c = 0x80;
  *(undefined4 *)&(this->VisibilityControls).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisibilityControls).field_0x34 = 0;
  *(undefined8 *)&(this->VisibilityControls).field_0x40 = 0;
  *(undefined4 *)&(this->VisibilityControls).field_0x48 = 0;
  return this;
}

// UDEPRECATED_UCommonVisibilityWidgetBase @ 14a7b0440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDEPRECATED_UCommonVisibilityWidgetBase * __thiscall
UDEPRECATED_UCommonVisibilityWidgetBase::UDEPRECATED_UCommonVisibilityWidgetBase
          (UDEPRECATED_UCommonVisibilityWidgetBase *this,FObjectInitializer *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  TPairInitializer<FName_const_&,bool_&&> local_res18;
  FScriptContainerElement *local_38;
  undefined1 *local_30;
  
  UBorder::UBorder((UBorder *)this,param_1);
  this->_padding_ = (longlong)&UCommonBorder::_vftable__for__UVisual__;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&UCommonBorder::_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined8 *)&(this->VisibilityControls).field_0x0 = 0;
  *(undefined8 *)&(this->VisibilityControls).field_0x8 = 0;
  *(undefined8 *)&(this->VisibilityControls).field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined4 *)&(this->VisibilityControls).field_0x28 = 0;
  *(undefined4 *)&(this->VisibilityControls).field_0x2c = 0x80;
  *(undefined4 *)&(this->VisibilityControls).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisibilityControls).field_0x34 = 0;
  *(undefined8 *)&(this->VisibilityControls).field_0x40 = 0;
  *(undefined4 *)&(this->VisibilityControls).field_0x48 = 0;
  this->bShowForGamepad = true;
  this->bShowForMouseAndKeyboard = true;
  this->bShowForTouch = true;
  this->VisibleType = SelfHitTestInvisible;
  this->HiddenType = Collapsed;
  pTVar3 = FCommonInputPlatformBaseData::GetRegisteredPlatforms();
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  iVar2 = pTVar3->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar3->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    local_30 = local_res8;
    local_res8[0] = 0;
    local_38 = pFVar4;
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,bool_&&>_>
              ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                *)&this->VisibilityControls,&local_res18,(bool *)&local_38);
    pFVar4 = pFVar4 + 8;
  }
  return this;
}

// ~UDEPRECATED_UCommonVisibilityWidgetBase @ 14a7b3da0

void __thiscall
UDEPRECATED_UCommonVisibilityWidgetBase::~UDEPRECATED_UCommonVisibilityWidgetBase
          (UDEPRECATED_UCommonVisibilityWidgetBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined4 *)&(this->VisibilityControls).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VisibilityControls).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VisibilityControls);
  this->_padding_ = (longlong)&UCommonBorder::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UCommonBorder::_vftable__for__INotifyFieldValueChanged__;
  UBorder::~UBorder((UBorder *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e7110

UClass * __cdecl UDEPRECATED_UCommonVisibilityWidgetBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_UCommonVisibilityWidgetBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"UCommonVisibilityWidgetBase",
               &Z_Registration_Info_UClass_UDEPRECATED_UCommonVisibilityWidgetBase.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_UCommonVisibilityWidgetBase,0x400,0x10,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UDEPRECATED_UCommonVisibilityWidgetBase>,
               InternalVTableHelperCtorCaller<UDEPRECATED_UCommonVisibilityWidgetBase>,local_res8,
               UCommonBorder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_UCommonVisibilityWidgetBase.InnerSingleton;
}

// GetRegisteredPlatforms @ 14a7e7380

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
UDEPRECATED_UCommonVisibilityWidgetBase::GetRegisteredPlatforms(void)

{
  undefined1 auStackX_8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FCommonInputPlatformBaseData::GetRegisteredPlatforms'::__l2::<lambda_1>::operator()
                (auStackX_8,&RegisteredPlatforms);
      atexit(`FCommonInputPlatformBaseData::GetRegisteredPlatforms'::__l2::
             _dynamic_atexit_destructor_for__RegisteredPlatforms__);
      _Init_thread_footer(&::_TSS0);
      return &RegisteredPlatforms;
    }
  }
  return &RegisteredPlatforms;
}

// HandleInputMethodChanged @ 14a7ed100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDEPRECATED_UCommonVisibilityWidgetBase::HandleInputMethodChanged
          (UDEPRECATED_UCommonVisibilityWidgetBase *this,ECommonInputType param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ULocalPlayer *pUVar6;
  UCommonInputSubsystem *this_00;
  FName FVar7;
  longlong lVar8;
  char *pcVar9;
  ESlateVisibility EVar10;
  undefined1 *puVar11;
  char cVar12;
  FString FStack_18;
  
  pUVar6 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
  this_00 = UCommonInputSubsystem::Get(pUVar6);
  if (this_00 == (UCommonInputSubsystem *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4271244769990017061>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonVisibilityWidgetBase.cpp"
                       ,0x25,"CommonInputSubsystem");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    cVar12 = this->bShowForMouseAndKeyboard;
    bVar3 = UCommonInputSubsystem::IsInputMethodActive(this_00,Gamepad);
    if (bVar3) {
      cVar12 = this->bShowForGamepad;
    }
    else {
      bVar3 = UCommonInputSubsystem::IsInputMethodActive(this_00,Touch);
      if (bVar3) {
        cVar12 = this->bShowForTouch;
      }
    }
    FVar7 = FCommonInputBase::GetCurrentPlatformName();
    lVar8 = *(longlong *)FVar7;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar8);
    if (*(int *)&(this->VisibilityControls).field_0x8 !=
        *(int *)&(this->VisibilityControls).field_0x34) {
      puVar11 = *(undefined1 **)&(this->VisibilityControls).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->VisibilityControls).field_0x38;
      }
      iVar5 = *(int *)(puVar11 +
                      (ulonglong)
                      (*(int *)&(this->VisibilityControls).field_0x48 - 1U &
                      (int)((ulonglong)lVar8 >> 0x20) + uVar4) * 4);
      if (iVar5 != -1) {
        do {
          lVar1 = *(longlong *)&this->VisibilityControls + (longlong)iVar5 * 0x14;
          if (*(longlong *)(*(longlong *)&this->VisibilityControls + (longlong)iVar5 * 0x14) ==
              lVar8) {
            pcVar9 = (char *)(lVar1 + 8);
            if (lVar1 == 0) {
              pcVar9 = (char *)0x0;
            }
            if (pcVar9 != (char *)0x0) {
              lVar8 = this->_padding_;
              if ((*pcVar9 == '\0') || (cVar12 == '\0')) {
                EVar10 = this->HiddenType;
              }
              else {
                EVar10 = this->VisibleType;
              }
              goto LAB_14a828e8d;
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0xc);
        } while (iVar5 != -1);
      }
    }
    if (2 < (byte)LogCommonUI._0_1_) {
      FVar7 = FCommonInputBase::GetCurrentPlatformName();
      ::FName::ToString((FName *)FVar7,&FStack_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
    }
    lVar8 = this->_padding_;
    EVar10 = *(ESlateVisibility *)((0x3fc - (ulonglong)(cVar12 != '\0')) + (longlong)this);
LAB_14a828e8d:
    (**(code **)(lVar8 + 0x2c0))(this,EVar10);
  }
  return;
}

// ListenToInputMethodChanged @ 14a7f8000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDEPRECATED_UCommonVisibilityWidgetBase::ListenToInputMethodChanged
          (UDEPRECATED_UCommonVisibilityWidgetBase *this,bool param_1)

{
  ULocalPlayer *pUVar1;
  UCommonInputSubsystem *pUVar2;
  
  pUVar1 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
  pUVar2 = UCommonInputSubsystem::Get(pUVar1);
  if (pUVar2 != (UCommonInputSubsystem *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnInputMethodChangedNative,this);
    if (param_1) {
      TMulticastDelegateRegistration<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
      ::AddUObject<UDEPRECATED_UCommonVisibilityWidgetBase>
                (&pUVar2->OnInputMethodChangedNative,
                 (UDEPRECATED_UCommonVisibilityWidgetBase *)&stack0x00000018,(pmf_80e72905 *)this);
    }
  }
  return;
}

// OnWidgetRebuilt @ 14a8014b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDEPRECATED_UCommonVisibilityWidgetBase::OnWidgetRebuilt
          (UDEPRECATED_UCommonVisibilityWidgetBase *this)

{
  ULocalPlayer *pUVar1;
  UCommonInputSubsystem *pUVar2;
  
  UWidget::OnWidgetRebuilt((UWidget *)this);
  UpdateVisibility(this);
  pUVar1 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  pUVar2 = UCommonInputSubsystem::Get(pUVar1);
  if (pUVar2 != (UCommonInputSubsystem *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnInputMethodChangedNative,this);
    TMulticastDelegateRegistration<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>::
    AddUObject<UDEPRECATED_UCommonVisibilityWidgetBase>
              (&pUVar2->OnInputMethodChangedNative,
               (UDEPRECATED_UCommonVisibilityWidgetBase *)&stack0x00000010,(pmf_80e72905 *)this);
  }
  return;
}

// StaticRegisterNativesUDEPRECATED_UCommonVisibilityWidgetBase @ 14a81eb70

void __cdecl
UDEPRECATED_UCommonVisibilityWidgetBase::
StaticRegisterNativesUDEPRECATED_UCommonVisibilityWidgetBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateVisibility @ 14a828ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDEPRECATED_UCommonVisibilityWidgetBase::UpdateVisibility
          (UDEPRECATED_UCommonVisibilityWidgetBase *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ULocalPlayer *pUVar6;
  UCommonInputSubsystem *this_00;
  FName FVar7;
  longlong lVar8;
  char *pcVar9;
  ESlateVisibility EVar10;
  undefined1 *puVar11;
  char cVar12;
  FString local_18;
  
  pUVar6 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
  this_00 = UCommonInputSubsystem::Get(pUVar6);
  if (this_00 == (UCommonInputSubsystem *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4271244769990017061>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonVisibilityWidgetBase.cpp"
                       ,0x25,"CommonInputSubsystem");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    cVar12 = this->bShowForMouseAndKeyboard;
    bVar3 = UCommonInputSubsystem::IsInputMethodActive(this_00,Gamepad);
    if (bVar3) {
      cVar12 = this->bShowForGamepad;
    }
    else {
      bVar3 = UCommonInputSubsystem::IsInputMethodActive(this_00,Touch);
      if (bVar3) {
        cVar12 = this->bShowForTouch;
      }
    }
    FVar7 = FCommonInputBase::GetCurrentPlatformName();
    lVar8 = *(longlong *)FVar7;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar8);
    if (*(int *)&(this->VisibilityControls).field_0x8 !=
        *(int *)&(this->VisibilityControls).field_0x34) {
      puVar11 = *(undefined1 **)&(this->VisibilityControls).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->VisibilityControls).field_0x38;
      }
      iVar5 = *(int *)(puVar11 +
                      (ulonglong)
                      (*(int *)&(this->VisibilityControls).field_0x48 - 1U &
                      (int)((ulonglong)lVar8 >> 0x20) + uVar4) * 4);
      if (iVar5 != -1) {
        do {
          lVar1 = *(longlong *)&this->VisibilityControls + (longlong)iVar5 * 0x14;
          if (*(longlong *)(*(longlong *)&this->VisibilityControls + (longlong)iVar5 * 0x14) ==
              lVar8) {
            pcVar9 = (char *)(lVar1 + 8);
            if (lVar1 == 0) {
              pcVar9 = (char *)0x0;
            }
            if (pcVar9 != (char *)0x0) {
              lVar8 = this->_padding_;
              if ((*pcVar9 == '\0') || (cVar12 == '\0')) {
                EVar10 = this->HiddenType;
              }
              else {
                EVar10 = this->VisibleType;
              }
              goto LAB_14a828e8d;
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0xc);
        } while (iVar5 != -1);
      }
    }
    if (2 < (byte)LogCommonUI._0_1_) {
      FVar7 = FCommonInputBase::GetCurrentPlatformName();
      ::FName::ToString((FName *)FVar7,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    lVar8 = this->_padding_;
    EVar10 = *(ESlateVisibility *)((0x3fc - (ulonglong)(cVar12 != '\0')) + (longlong)this);
LAB_14a828e8d:
    (**(code **)(lVar8 + 0x2c0))(this,EVar10);
  }
  return;
}

// execGetRegisteredPlatforms @ 14a82eca0

void __cdecl
UDEPRECATED_UCommonVisibilityWidgetBase::execGetRegisteredPlatforms
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = FCommonInputPlatformBaseData::GetRegisteredPlatforms();
  if (param_3 != pTVar2) {
    iVar1 = pTVar2->ArrayNum;
    _Src = (pTVar2->AllocatorInstance).Data;
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

