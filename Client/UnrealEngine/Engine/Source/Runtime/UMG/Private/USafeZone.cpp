// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 30

// GetPadLeft_WrapperImpl @ 146960700

void __cdecl USafeZone::GetPadLeft_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1c8);
  return;
}

// SetPadLeft_WrapperImpl @ 146960710

void __cdecl USafeZone::SetPadLeft_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar1 = *(bool *)param_2;
  if ((bool)*(char *)((longlong)param_1 + 0x1c8) != bVar1) {
    bVar2 = *(bool *)((longlong)param_1 + 0x1c9);
    bVar3 = *(bool *)((longlong)param_1 + 0x1ca);
    bVar4 = *(bool *)((longlong)param_1 + 0x1cb);
    *(bool *)((longlong)param_1 + 0x1c8) = bVar1;
    *(bool *)((longlong)param_1 + 0x1c9) = bVar2;
    *(bool *)((longlong)param_1 + 0x1ca) = bVar3;
    *(bool *)((longlong)param_1 + 0x1cb) = bVar4;
    if ((*(SSafeZone **)((longlong)param_1 + 0x1d0) != (SSafeZone *)0x0) &&
       (0 < *(int *)((longlong)param_1 + 0x1b8))) {
      SSafeZone::SetSidesToPad(*(SSafeZone **)((longlong)param_1 + 0x1d0),bVar1,bVar2,bVar3,bVar4);
    }
  }
  return;
}

// GetPadRight_WrapperImpl @ 146960780

void __cdecl USafeZone::GetPadRight_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1c9);
  return;
}

// SetPadRight_WrapperImpl @ 146960790

void __cdecl USafeZone::SetPadRight_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar1 = *(bool *)param_2;
  if ((bool)*(char *)((longlong)param_1 + 0x1c9) != bVar1) {
    bVar2 = *(bool *)((longlong)param_1 + 0x1c8);
    bVar3 = *(bool *)((longlong)param_1 + 0x1ca);
    bVar4 = *(bool *)((longlong)param_1 + 0x1cb);
    *(bool *)((longlong)param_1 + 0x1c8) = bVar2;
    *(bool *)((longlong)param_1 + 0x1c9) = bVar1;
    *(bool *)((longlong)param_1 + 0x1ca) = bVar3;
    *(bool *)((longlong)param_1 + 0x1cb) = bVar4;
    if ((*(SSafeZone **)((longlong)param_1 + 0x1d0) != (SSafeZone *)0x0) &&
       (0 < *(int *)((longlong)param_1 + 0x1b8))) {
      SSafeZone::SetSidesToPad(*(SSafeZone **)((longlong)param_1 + 0x1d0),bVar2,bVar1,bVar3,bVar4);
    }
  }
  return;
}

// GetPadTop_WrapperImpl @ 146960840

void __cdecl USafeZone::GetPadTop_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1ca);
  return;
}

// SetPadTop_WrapperImpl @ 146960850

void __cdecl USafeZone::SetPadTop_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar1 = *(bool *)param_2;
  if ((bool)*(char *)((longlong)param_1 + 0x1ca) != bVar1) {
    bVar2 = *(bool *)((longlong)param_1 + 0x1c8);
    bVar3 = *(bool *)((longlong)param_1 + 0x1c9);
    bVar4 = *(bool *)((longlong)param_1 + 0x1cb);
    *(bool *)((longlong)param_1 + 0x1c8) = bVar2;
    *(bool *)((longlong)param_1 + 0x1c9) = bVar3;
    *(bool *)((longlong)param_1 + 0x1ca) = bVar1;
    *(bool *)((longlong)param_1 + 0x1cb) = bVar4;
    if ((*(SSafeZone **)((longlong)param_1 + 0x1d0) != (SSafeZone *)0x0) &&
       (0 < *(int *)((longlong)param_1 + 0x1b8))) {
      SSafeZone::SetSidesToPad(*(SSafeZone **)((longlong)param_1 + 0x1d0),bVar2,bVar3,bVar1,bVar4);
    }
  }
  return;
}

// GetPadBottom_WrapperImpl @ 1469608c0

void __cdecl USafeZone::GetPadBottom_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1cb);
  return;
}

// SetPadBottom_WrapperImpl @ 1469608d0

void __cdecl USafeZone::SetPadBottom_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar1 = *(bool *)param_2;
  if ((bool)*(char *)((longlong)param_1 + 0x1cb) != bVar1) {
    bVar2 = *(bool *)((longlong)param_1 + 0x1c8);
    bVar3 = *(bool *)((longlong)param_1 + 0x1c9);
    bVar4 = *(bool *)((longlong)param_1 + 0x1ca);
    *(bool *)((longlong)param_1 + 0x1c8) = bVar2;
    *(bool *)((longlong)param_1 + 0x1c9) = bVar3;
    *(bool *)((longlong)param_1 + 0x1ca) = bVar4;
    *(bool *)((longlong)param_1 + 0x1cb) = bVar1;
    if ((*(SSafeZone **)((longlong)param_1 + 0x1d0) != (SSafeZone *)0x0) &&
       (0 < *(int *)((longlong)param_1 + 0x1b8))) {
      SSafeZone::SetSidesToPad(*(SSafeZone **)((longlong)param_1 + 0x1d0),bVar2,bVar3,bVar4,bVar1);
    }
  }
  return;
}

// StaticClass @ 146960980

UClass * __cdecl USafeZone::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USafeZone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SafeZone",&Z_Registration_Info_UClass_USafeZone.InnerSingleton,
               StaticRegisterNativesUSafeZone,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USafeZone>,InternalVTableHelperCtorCaller<USafeZone>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USafeZone.InnerSingleton;
}

// USafeZone @ 14698cd00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USafeZone * __thiscall USafeZone::USafeZone(USafeZone *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MySafeZone).Object = (SSafeZone *)0x0;
  (this->MySafeZone).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USafeZone @ 14698cd50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USafeZone * __thiscall USafeZone::USafeZone(USafeZone *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UWidget::UWidget((UWidget *)this,pFVar1);
  this->PadLeft = true;
  this->PadRight = true;
  this->PadTop = true;
  this->PadBottom = true;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  (this->MySafeZone).Object = (SSafeZone *)0x0;
  (this->MySafeZone).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~USafeZone @ 146993e50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USafeZone::~USafeZone(USafeZone *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MySafeZone).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetPadBottom @ 1469d3550

bool __thiscall USafeZone::GetPadBottom(USafeZone *this)

{
  return this->PadBottom;
}

// GetPadLeft @ 1469d3560

bool __thiscall USafeZone::GetPadLeft(USafeZone *this)

{
  return this->PadLeft;
}

// GetPadRight @ 1469d3570

bool __thiscall USafeZone::GetPadRight(USafeZone *this)

{
  return this->PadRight;
}

// GetPadTop @ 1469d3580

bool __thiscall USafeZone::GetPadTop(USafeZone *this)

{
  return this->PadTop;
}

// GetPrivateStaticClass @ 1469d5520

UClass * __cdecl USafeZone::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USafeZone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SafeZone",&Z_Registration_Info_UClass_USafeZone.InnerSingleton,
               StaticRegisterNativesUSafeZone,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USafeZone>,InternalVTableHelperCtorCaller<USafeZone>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USafeZone.InnerSingleton;
}

// GetSlotClass @ 1469d8760

UClass * __thiscall USafeZone::GetSlotClass(USafeZone *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USafeZoneSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SafeZoneSlot",
               &Z_Registration_Info_UClass_USafeZoneSlot.InnerSingleton,
               USafeZoneSlot::StaticRegisterNativesUSafeZoneSlot,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USafeZoneSlot>,
               InternalVTableHelperCtorCaller<USafeZoneSlot>,aFStackX_8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USafeZoneSlot.InnerSingleton;
}

// OnSlotAdded @ 1469f0af0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USafeZone::OnSlotAdded(USafeZone *this,UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TSharedRef<SSafeZone,1> *pTVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_38;
  TSharedRef<SSafeZone,1> local_28;
  FString local_18;
  
  if ((this->MySafeZone).Object != (SSafeZone *)0x0) {
    if (param_1 == (UPanelSlot *)0x0) {
      pFVar4 = GetTypeName<USafeZoneSlot>(&local_38);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = USafeZoneSlot::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<USafeZoneSlot>(&local_38);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    pTVar3 = TSharedPtr<SSafeZone,1>::ToSharedRef(&this->MySafeZone,&local_28);
    USafeZoneSlot::BuildSlot((USafeZoneSlot *)param_1,pTVar3);
  }
  return;
}

// OnSlotRemoved @ 1469f1670

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USafeZone::OnSlotRemoved(USafeZone *this,UPanelSlot *param_1)

{
  SSafeZone *this_00;
  
  this_00 = (this->MySafeZone).Object;
  if (this_00 != (SSafeZone *)0x0) {
    SBox::SetContent((SBox *)this_00,&SNullWidget::NullWidget);
    return;
  }
  return;
}

// RebuildWidget @ 146a03fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
USafeZone::RebuildWidget(USafeZone *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  SSafeZone *pSVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  FSharedReferencer<1> FVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  byte bVar17;
  TSharedRef<SWidget,1> *pTVar18;
  UClass *pUVar19;
  FArguments *pFVar20;
  undefined8 *puVar21;
  TSharedRef<SSafeZone,1> *pTVar22;
  UWidget *this_00;
  SWidget *pSVar23;
  TSharedPtr<SSafeZone,1> *this_01;
  UWidget *this_02;
  undefined4 local_res8 [2];
  TSharedRef<SWidget,1> *local_res10;
  FLLMScope local_res18 [2];
  FName local_res20;
  SSafeZone *local_368;
  FSharedReferencer<1> local_360;
  TSlateDecl<SSafeZone,RequiredArgs::T0RequiredArgs> local_358;
  FMemScope local_340;
  SWidget *local_338;
  TReferenceControllerBase<1> *pTStack_330;
  TSharedRef<SWidget,1> local_328;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308;
  undefined1 local_300 [8];
  void *pvStack_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  TSharedRef<SWidget,1> local_2c8;
  TSharedRef<SSafeZone,1> local_2b8;
  undefined1 local_2a8 [536];
  undefined1 local_90 [32];
  FSharedReferencer<1> local_70;
  
  this_00 = (UWidget *)0x0;
  local_res8[0] = 0;
  this_02 = this_00;
  local_res10 = __return_storage_ptr__;
  if (0 < (int)this->_padding_) {
    if (((int)this->_padding_ < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar5 = (code *)swi(3);
      pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar18;
    }
    this_02 = *(UWidget **)this->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_146a04078:
      if (this_02 != (UWidget *)0x0) {
        pUVar19 = USafeZoneSlot::StaticClass();
        iVar2 = (int)pUVar19->_padding_;
        if ((iVar2 <= *(int *)(this_02->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar19->_padding_)) goto LAB_146a040a3;
      }
    }
    else if (this_02 != (UWidget *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_02);
      goto LAB_146a04078;
    }
    this_02 = (UWidget *)0x0;
  }
LAB_146a040a3:
  pFVar20 = SSafeZone::FArguments::FArguments((FArguments *)local_2a8);
  uVar10 = _UNK_15076b1f8;
  uVar13 = ___xmm_3f8000003f8000003f8000003f800000;
  if (this_02 == (UWidget *)0x0) {
    pFVar20->_IsTitleSafe = false;
    uVar12 = ___xmm_3f8000003f8000003f8000003f800000;
    ___xmm_3f8000003f8000003f8000003f800000 = (undefined4)uVar13;
    _UNK_15076b1f4 = SUB84(uVar13,4);
    uVar7 = _UNK_15076b1f4;
    (pFVar20->_SafeAreaScale).Left = (float)___xmm_3f8000003f8000003f8000003f800000;
    ___xmm_3f8000003f8000003f8000003f800000 = uVar12;
    uVar13 = _UNK_15076b1f8;
    (pFVar20->_SafeAreaScale).Top = (float)uVar7;
    _UNK_15076b1f8 = (undefined4)uVar10;
    _UNK_15076b1fc = SUB84(uVar10,4);
    uVar7 = _UNK_15076b1fc;
    (pFVar20->_SafeAreaScale).Right = (float)_UNK_15076b1f8;
    _UNK_15076b1f8 = uVar13;
    (pFVar20->_SafeAreaScale).Bottom = (float)uVar7;
    pFVar20->_HAlign = HAlign_Fill;
    pFVar20->_VAlign = VAlign_Fill;
    puVar21 = &local_2d8;
    local_2d8 = 0;
    uStack_2d0 = 0;
  }
  else {
    pFVar20->_IsTitleSafe = *(bool *)&this_02->bIsEnabledDelegate;
    uVar7 = *(undefined4 *)&(this_02->bIsEnabledDelegate).field_0x8;
    uVar8 = *(undefined4 *)&(this_02->bIsEnabledDelegate).field_0xc;
    uVar9 = *(undefined4 *)&(this_02->bIsEnabledDelegate).field_0x10;
    (pFVar20->_SafeAreaScale).Left = (float)*(undefined4 *)&(this_02->bIsEnabledDelegate).field_0x4;
    (pFVar20->_SafeAreaScale).Top = (float)uVar7;
    (pFVar20->_SafeAreaScale).Right = (float)uVar8;
    (pFVar20->_SafeAreaScale).Bottom = (float)uVar9;
    pFVar20->_HAlign = (uint)(byte)(this_02->bIsEnabledDelegate).field_0x14;
    pFVar20->_VAlign = (uint)(byte)(this_02->bIsEnabledDelegate).field_0x15;
    puVar21 = &local_2e8;
    local_2e8 = *(undefined8 *)&this_02->ToolTipTextDelegate;
    uStack_2e0 = *(undefined8 *)&(this_02->ToolTipTextDelegate).field_0x8;
  }
  local_318 = *puVar21;
  uStack_310 = puVar21[1];
  local_308 = 1;
  local_2f0 = 0;
  local_300 = (undefined1  [8])0x0;
  pvStack_2f8 = (void *)0x0;
  (pFVar20->_Padding).Value.Left = (float)(int)local_318;
  (pFVar20->_Padding).Value.Top = (float)(int)((ulonglong)local_318 >> 0x20);
  (pFVar20->_Padding).Value.Right = (float)(int)uStack_310;
  (pFVar20->_Padding).Value.Bottom = (float)(int)((ulonglong)uStack_310 >> 0x20);
  (pFVar20->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_300);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_300);
  if (pvStack_2f8 != (void *)0x0) {
    FMemory::Free(pvStack_2f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_300);
  pFVar20->_PadLeft = this->PadLeft;
  pFVar20->_PadRight = this->PadRight;
  pFVar20->_PadTop = this->PadTop;
  pFVar20->_PadBottom = this->PadBottom;
  if ((int)this->_padding_ < 1) {
LAB_146a0427e:
    pSVar23 = SNullWidget::NullWidget.Object;
    bVar6 = false;
    bVar14 = true;
    local_328.Object = SNullWidget::NullWidget.Object;
    local_328.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar18 = &local_328;
  }
  else {
    if (((int)this->_padding_ < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar5 = (code *)swi(3);
      pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar18;
    }
    if ((*(longlong *)this->_padding_ == 0) ||
       (*(longlong *)(*(longlong *)this->_padding_ + 0x30) == 0)) goto LAB_146a0427e;
    if (0 < (int)this->_padding_) {
      if (((int)this->_padding_ < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar5)();
        return pTVar18;
      }
      if (*(longlong *)this->_padding_ != 0) {
        this_00 = *(UWidget **)(*(longlong *)this->_padding_ + 0x30);
      }
    }
    bVar6 = true;
    bVar14 = false;
    pTVar18 = UWidget::TakeWidget(this_00,&local_2c8);
    pSVar23 = pTVar18->Object;
  }
  pTVar3 = (pTVar18->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_338 = (pFVar20->_Content).Widget.Object;
  pTStack_330 = (pFVar20->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar20->_Content).Widget.Object = pSVar23;
  (pFVar20->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_330);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_340,&local_res20,true);
  TSlateDecl<SSafeZone,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSafeZone,RequiredArgs::T0RequiredArgs>
            (&local_358,"SSafeZone",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\SafeZone.cpp"
             ,0x70,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope(&local_340);
  FLLMScope::~FLLMScope(local_res18);
  pSVar4 = local_358._Widget.Object;
  if ((local_358._Widget.Object == (SSafeZone *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar18;
  }
  SWidget::SWidgetConstruct((SWidget *)local_358._Widget.Object,(FSlateBaseNamedArgs *)pFVar20);
  SSafeZone::Construct(local_358._Widget.Object,pFVar20);
  if ((local_358._Widget.Object == (SSafeZone *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar18;
  }
  if (((local_358._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)((local_358._Widget.Object)->_padding_ + 0x228))(local_358._Widget.Object);
    bVar17 = 0;
    if (cVar16 == '\0') goto LAB_146a04400;
  }
  bVar17 = 0x20;
LAB_146a04400:
  FVar11.ReferenceController = local_358._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_358._Widget.Object)->_padding_ =
       (byte)(local_358._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_358._Widget.Object)->_padding_ =
       (byte)(local_358._Widget.Object)->_padding_ | bVar17;
  pbVar1 = (byte *)((longlong)&(local_358._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_358._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_358._Widget.Object = (SSafeZone *)0x0;
  if ((pSVar4 == (SSafeZone *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar18;
  }
  local_368 = pSVar4;
  local_360.ReferenceController = FVar11.ReferenceController;
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MySafeZone != (TSharedPtr<SSafeZone,1> *)&local_368) {
    (this->MySafeZone).Object = pSVar4;
    local_368 = (SSafeZone *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySafeZone).SharedReferenceCount,&local_360);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_360.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_328.SharedReferenceCount.ReferenceController);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  if ((void *)local_90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_90._8_8_);
  }
  this_01 = &this->MySafeZone;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2a8);
  if (this_02 != (UWidget *)0x0) {
    pTVar22 = TSharedPtr<SSafeZone,1>::ToSharedRef(this_01,&local_2b8);
    USafeZoneSlot::BuildSlot((USafeZoneSlot *)this_02,pTVar22);
  }
  if ((this_01->Object == (SSafeZone *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar18;
  }
  pTVar3 = (this->MySafeZone).SharedReferenceCount.ReferenceController;
  pSVar4 = this_01->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar4 == (SSafeZone *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar18;
  }
  pTVar18 = local_res10;
  local_res10->Object = (SWidget *)pSVar4;
  (local_res10->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return pTVar18;
}

// ReleaseSlateResources @ 146a0afe0

void __thiscall USafeZone::ReleaseSlateResources(USafeZone *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MySafeZone != (TSharedPtr<SSafeZone,1> *)&local_18) {
    (this->MySafeZone).Object = (SSafeZone *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySafeZone).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetPadBottom @ 146a18510

void __thiscall USafeZone::SetPadBottom(USafeZone *this,bool param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  SSafeZone *this_00;
  
  if (this->PadBottom != param_1) {
    this_00 = (this->MySafeZone).Object;
    bVar1 = this->PadLeft;
    bVar2 = this->PadRight;
    bVar3 = this->PadTop;
    this->PadLeft = bVar1;
    this->PadRight = bVar2;
    this->PadTop = bVar3;
    this->PadBottom = param_1;
    if ((this_00 != (SSafeZone *)0x0) && (0 < (int)this->_padding_)) {
      SSafeZone::SetSidesToPad(this_00,bVar1,bVar2,bVar3,param_1);
    }
  }
  return;
}

// SetPadLeft @ 146a18580

void __thiscall USafeZone::SetPadLeft(USafeZone *this,bool param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  SSafeZone *this_00;
  
  if (this->PadLeft != param_1) {
    this_00 = (this->MySafeZone).Object;
    bVar1 = this->PadRight;
    bVar2 = this->PadTop;
    bVar3 = this->PadBottom;
    this->PadLeft = param_1;
    this->PadRight = bVar1;
    this->PadTop = bVar2;
    this->PadBottom = bVar3;
    if ((this_00 != (SSafeZone *)0x0) && (0 < (int)this->_padding_)) {
      SSafeZone::SetSidesToPad(this_00,param_1,bVar1,bVar2,bVar3);
    }
  }
  return;
}

// SetPadRight @ 146a185f0

void __thiscall USafeZone::SetPadRight(USafeZone *this,bool param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  SSafeZone *this_00;
  
  if (this->PadRight != param_1) {
    this_00 = (this->MySafeZone).Object;
    bVar1 = this->PadLeft;
    bVar2 = this->PadTop;
    bVar3 = this->PadBottom;
    this->PadLeft = bVar1;
    this->PadRight = param_1;
    this->PadTop = bVar2;
    this->PadBottom = bVar3;
    if ((this_00 != (SSafeZone *)0x0) && (0 < (int)this->_padding_)) {
      SSafeZone::SetSidesToPad(this_00,bVar1,param_1,bVar2,bVar3);
    }
  }
  return;
}

// SetPadTop @ 146a18670

void __thiscall USafeZone::SetPadTop(USafeZone *this,bool param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  SSafeZone *this_00;
  
  if (this->PadTop != param_1) {
    this_00 = (this->MySafeZone).Object;
    bVar1 = this->PadLeft;
    bVar2 = this->PadRight;
    bVar3 = this->PadBottom;
    this->PadLeft = bVar1;
    this->PadRight = bVar2;
    this->PadTop = param_1;
    this->PadBottom = bVar3;
    if ((this_00 != (SSafeZone *)0x0) && (0 < (int)this->_padding_)) {
      SSafeZone::SetSidesToPad(this_00,bVar1,bVar2,param_1,bVar3);
    }
  }
  return;
}

// SetSidesToPad @ 146a1afe0

void __thiscall
USafeZone::SetSidesToPad(USafeZone *this,bool param_1,bool param_2,bool param_3,bool param_4)

{
  SSafeZone *this_00;
  
  this_00 = (this->MySafeZone).Object;
  this->PadLeft = param_1;
  this->PadRight = param_2;
  this->PadTop = param_3;
  this->PadBottom = param_4;
  if ((this_00 != (SSafeZone *)0x0) && (0 < (int)this->_padding_)) {
    SSafeZone::SetSidesToPad(this_00,param_1,param_2,param_3,param_4);
    return;
  }
  return;
}

// StaticRegisterNativesUSafeZone @ 146a1eda0

void __cdecl USafeZone::StaticRegisterNativesUSafeZone(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USafeZone_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateWidgetProperties @ 146a2c9c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USafeZone::UpdateWidgetProperties(USafeZone *this)

{
  FObjectPtr_u_0 *this_00;
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FMargin local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  TAttribute<FMargin> local_38;
  
  if (((this->MySafeZone).Object != (SSafeZone *)0x0) && (0 < (int)this->_padding_)) {
    this_00 = (FObjectPtr_u_0 *)this->_padding_;
    if (this_00->Handle == (UObject *)0x0) {
      pFVar5 = GetTypeName<USafeZoneSlot>(&local_48);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar7);
    }
    pUVar4 = USafeZoneSlot::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if ((!bVar3) || (pUVar1 = this_00->Handle, pUVar1 == (UObject *)0x0)) {
      pFVar5 = GetTypeName<USafeZoneSlot>(&local_68);
      pwVar7 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UPanelSlot>(&local_58,(UPanelSlot *)this_00->Handle);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar6);
    }
    if ((this->MySafeZone).Object == (SSafeZone *)0x0) {
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
    local_78.Left = *(float *)&pUVar1[1].field_0x14;
    local_78.Top = *(float *)&pUVar1[1].field_0x18;
    local_78.Right = *(float *)&pUVar1[1].field_0x1c;
    local_78.Bottom = *(float *)&pUVar1[1].field_0x20;
    SSafeZone::SetSafeAreaScale((this->MySafeZone).Object,&local_78);
    if ((this->MySafeZone).Object == (SSafeZone *)0x0) {
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
    SSafeZone::SetTitleSafe((this->MySafeZone).Object,(bool)pUVar1[1].field_0x10);
    if ((this->MySafeZone).Object == (SSafeZone *)0x0) {
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
    SBox::SetHAlign((SBox *)(this->MySafeZone).Object,(uint)(byte)pUVar1[1].field_0x24);
    if ((this->MySafeZone).Object == (SSafeZone *)0x0) {
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
    SBox::SetVAlign((SBox *)(this->MySafeZone).Object,(uint)(byte)pUVar1[1].field_0x25);
    if ((this->MySafeZone).Object == (SSafeZone *)0x0) {
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
    local_38.Value.Left = *(float *)&pUVar1[2].field_0x0;
    local_38.Value.Top = *(float *)&pUVar1[2].field_0x4;
    local_38.Value.Right = *(float *)&pUVar1[2].field_0x8;
    local_38.Value.Bottom = *(float *)&pUVar1[2].field_0xc;
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SBox::SetPadding((SBox *)(this->MySafeZone).Object,&local_38);
    if ((this->MySafeZone).Object == (SSafeZone *)0x0) {
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
    SSafeZone::SetSidesToPad
              ((this->MySafeZone).Object,this->PadLeft,this->PadRight,this->PadTop,this->PadBottom);
  }
  return;
}

// execSetSidesToPad @ 146a427b0

void __cdecl USafeZone::execSetSidesToPad(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  int local_res20 [2];
  int local_38 [4];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar4 = local_res20[0] != 0;
  local_38[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xb].field_0x13 = local_38[0] != 0;
  param_1[0xb].field_0x10 = bVar2;
  param_1[0xb].field_0x11 = bVar3;
  param_1[0xb].field_0x12 = bVar4;
  if ((*(SSafeZone **)&param_1[0xb].field_0x18 != (SSafeZone *)0x0) && (0 < *(int *)(param_1 + 0xb))
     ) {
    SSafeZone::SetSidesToPad
              (*(SSafeZone **)&param_1[0xb].field_0x18,bVar2,bVar3,bVar4,local_38[0] != 0);
  }
  return;
}

