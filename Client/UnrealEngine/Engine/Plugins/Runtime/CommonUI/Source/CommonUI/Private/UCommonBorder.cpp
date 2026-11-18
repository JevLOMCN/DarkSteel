// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 14

// StaticClass @ 14a78c180

UClass * __cdecl UCommonBorder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonBorder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonBorder",
               &Z_Registration_Info_UClass_UCommonBorder.InnerSingleton,
               StaticRegisterNativesUCommonBorder,0x3b0,0x10,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"CommonUI",InternalConstructor<UCommonBorder>,
               InternalVTableHelperCtorCaller<UCommonBorder>,local_res8,UBorder::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonBorder.InnerSingleton;
}

// UCommonBorder @ 14a7ac080

UCommonBorder * __thiscall UCommonBorder::UCommonBorder(UCommonBorder *this,FVTableHelper *param_1)

{
  UBorder::UBorder((UBorder *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  (this->Style).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->MinimumPadding).Left = 0.0;
  (this->MinimumPadding).Top = 0.0;
  (this->MinimumPadding).Right = 0.0;
  (this->MinimumPadding).Bottom = 0.0;
  return this;
}

// UCommonBorder @ 14a7ac0d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonBorder * __thiscall
UCommonBorder::UCommonBorder(UCommonBorder *this,FObjectInitializer *param_1)

{
  UBorder::UBorder((UBorder *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  (this->Style).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->MinimumPadding).Left = 0.0;
  (this->MinimumPadding).Top = 0.0;
  (this->MinimumPadding).Right = 0.0;
  (this->MinimumPadding).Bottom = 0.0;
  this->field_0x22c = 0;
  this->bReducePaddingBySafezone = false;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~UCommonBorder @ 14a7b2030

void __thiscall UCommonBorder::~UCommonBorder(UCommonBorder *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UBorder::~UBorder((UBorder *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e4d00

UClass * __cdecl UCommonBorder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonBorder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonBorder",
               &Z_Registration_Info_UClass_UCommonBorder.InnerSingleton,
               StaticRegisterNativesUCommonBorder,0x3b0,0x10,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"CommonUI",InternalConstructor<UCommonBorder>,
               InternalVTableHelperCtorCaller<UCommonBorder>,local_res8,UBorder::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonBorder.InnerSingleton;
}

// GetStyleCDO @ 14a7e88b0

UCommonBorderStyle * __thiscall UCommonBorder::GetStyleCDO(UCommonBorder *this)

{
  int iVar1;
  UCommonBorderStyle *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonBorderStyle *)0x0;
  }
  pUVar4 = UCommonBorderStyle::StaticClass();
  if (pUVar4 == (UClass *)0x0) {
    return (UCommonBorderStyle *)0x0;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return (UCommonBorderStyle *)0x0;
  }
  pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonBorderStyle *)0x0;
  }
  pUVar4 = UCommonBorderStyle::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
      goto LAB_14a7e8944;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14a7e8944:
  pUVar2 = (UCommonBorderStyle *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UCommonBorderStyle *)0x0) {
    pUVar5 = UCommonBorderStyle::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return pUVar2;
    }
  }
  return (UCommonBorderStyle *)0x0;
}

// PostLoad @ 14a8025f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCommonBorder::PostLoad(UCommonBorder *this)

{
  UWidget *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPanelSlot *pUVar6;
  UClass *pUVar7;
  UPanelSlot *pUVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UPanelWidget::PostLoad((UPanelWidget *)this);
  iVar5 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if ((0 < iVar5) &&
     (pUVar6 = UContentWidget::GetContentSlot((UContentWidget *)this), pUVar6 != (UPanelSlot *)0x0))
  {
    pUVar7 = UBorderSlot::StaticClass();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar7->_padding_)) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = UBorderSlot::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)auStack_98,pUVar7);
      auStack_98._8_8_ = this;
      pUVar6 = (UPanelSlot *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
      if (auStack_98._64_8_ != 0) {
        plVar9 = (longlong *)(auStack_98 + 0x50);
        if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)auStack_98._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      pUVar8 = UContentWidget::GetContentSlot((UContentWidget *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = (pUVar8->Content).field0_0x0.DebugPtr, pUVar1 != (UWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      pUVar1 = (pUVar8->Content).field0_0x0.DebugPtr;
      (pUVar6->Content).field0_0x0.DebugPtr = pUVar1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      (pUVar1->Slot).field0_0x0.DebugPtr = pUVar6;
      if (*(int *)&this->field_0x1b8 < 1) {
        uStack_a8 = 0;
        lStack_a0 = (longlong)*(int *)&this->field_0x1b8;
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
      puVar2 = *(undefined8 **)&this->field_0x1b0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      *puVar2 = pUVar6;
    }
  }
  return;
}

// RebuildWidget @ 14a807c00

TSharedRef<SWidget,1> * __thiscall
UCommonBorder::RebuildWidget(UCommonBorder *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  if (this->bReducePaddingBySafezone != false) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UCommonBorder>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnSafeFrameChangedEvent,(UCommonBorder *)&stack0x00000008,
               (pmf_6fcd33f8 *)this);
  }
  UBorder::RebuildWidget((UBorder *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14a811c90

void __thiscall UCommonBorder::ReleaseSlateResources(UCommonBorder *this,bool param_1)

{
  if (this->bReducePaddingBySafezone != false) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnSafeFrameChangedEvent,this);
  }
  UBorder::ReleaseSlateResources((UBorder *)this,param_1);
  return;
}

// SafeAreaUpdated @ 14a815000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall UCommonBorder::SafeAreaUpdated(UCommonBorder *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  atomic<int> aVar6;
  FSlateApplication *pFVar7;
  FMargin *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  int local_res8;
  int local_resc;
  float local_res10;
  float local_res14;
  FMargin local_e8;
  TSharedPtr<SViewport,1> local_d8;
  TAttribute<FMargin> local_c8;
  FMargin local_98;
  FMargin local_88;
  FMargin local_78;
  FMargin local_68 [5];
  
  local_e8.Left = 0.0;
  local_e8.Top = 0.0;
  local_e8.Right = 0.0;
  local_e8.Bottom = 0.0;
  if ((this->bReducePaddingBySafezone != false) && (*(longlong *)&this->field_0x378 != 0)) {
    pFVar7 = FSlateApplication::Get();
    FSlateApplication::GetGameViewport(pFVar7,&local_d8);
    if (local_d8.Object != (SViewport *)0x0) {
      if ((local_d8.Object == (SViewport *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar9 = (TReferenceControllerBase<1> *)((local_d8.Object)->ViewportInterface).Object;
      pTVar11 = ((local_d8.Object)->ViewportInterface).WeakReferenceCount.ReferenceController;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
        aVar2 = pTVar11->SharedReferenceCount;
        do {
          pTVar10 = (TReferenceControllerBase<1> *)0x0;
          if (aVar2 == (atomic<int>)0x0) break;
          LOCK();
          aVar6 = pTVar11->SharedReferenceCount;
          bVar5 = aVar2 == aVar6;
          if (bVar5) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar6 = aVar2;
          }
          UNLOCK();
          pTVar10 = pTVar11;
          aVar2 = aVar6;
        } while (!bVar5);
        LOCK();
        paVar1 = &pTVar11->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar11->_padding_ + 8))(pTVar11,1);
        }
        if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
        }
        pTVar11 = pTVar10;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          (**(code **)(pTVar9->_padding_ + 0x10))(pTVar9,&local_res8);
          pFVar7 = FSlateApplication::Get();
          dVar4 = __real_3ff0000000000000;
          uVar14 = SUB84((double)local_resc - (double)local_resc,0) &
                   (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar15 = (uint)((ulonglong)((double)local_resc - (double)local_resc) >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          if ((__real_3ff0000000000000 <= (double)CONCAT44(uVar15,uVar14) &&
               (double)CONCAT44(uVar15,uVar14) != __real_3ff0000000000000) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("FloatFitsIn<OutType>(In, Precision)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xc0,L"Loss of data caused by narrowing conversion"), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar14 = SUB84((double)local_res8 - (double)local_res8,0) &
                   (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar15 = (uint)((ulonglong)((double)local_res8 - (double)local_res8) >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          if ((dVar4 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar4)
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("FloatFitsIn<OutType>(In, Precision)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                    ,0xc0,L"Loss of data caused by narrowing conversion"), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_res10 = (float)local_res8;
          local_res14 = (float)local_resc;
          FSlateApplicationBase::GetSafeZoneSize
                    ((FSlateApplicationBase *)pFVar7,&local_e8,
                     (FDeprecateVector2DParameter *)&local_res10);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    pFVar8 = UBorder::GetPadding((UBorder *)this,&local_98);
    fVar16 = pFVar8->Left - local_e8.Left;
    fVar17 = (this->MinimumPadding).Left;
    if (fVar16 <= fVar17) {
      fVar16 = fVar17;
    }
    pFVar8 = UBorder::GetPadding((UBorder *)this,&local_88);
    fVar17 = (this->MinimumPadding).Right;
    fVar12 = pFVar8->Right - local_e8.Right;
    if (fVar17 <= fVar12) {
      fVar17 = fVar12;
    }
    pFVar8 = UBorder::GetPadding((UBorder *)this,&local_78);
    fVar12 = (this->MinimumPadding).Top;
    fVar13 = pFVar8->Top - local_e8.Top;
    if (fVar12 <= fVar13) {
      fVar12 = fVar13;
    }
    pFVar8 = UBorder::GetPadding((UBorder *)this,local_68);
    local_c8.Value.Bottom = (this->MinimumPadding).Bottom;
    fVar13 = pFVar8->Bottom - local_e8.Bottom;
    if (local_c8.Value.Bottom <= fVar13) {
      local_c8.Value.Bottom = fVar13;
    }
    if ((*(longlong *)&this->field_0x378 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_c8.Getter._16_8_ = 0;
    local_c8.bIsSet = true;
    local_c8.Getter._0_8_ = 0;
    local_c8.Getter._8_8_ = 0;
    local_c8.Value.Left = fVar16;
    local_c8.Value.Top = fVar12;
    local_c8.Value.Right = fVar17;
    SBorder::SetPadding(*(SBorder **)&this->field_0x378,&local_c8);
  }
  return;
}

// SetStyle @ 14a81baa0

void __thiscall UCommonBorder::SetStyle(UCommonBorder *this,TSubclassOf<UCommonBorderStyle> param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (this->Style).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  if (*(longlong *)&this->field_0x378 != 0) {
    (**(code **)(*(longlong *)this + 0x2e8))(this);
  }
  return;
}

// StaticRegisterNativesUCommonBorder @ 14a81e380

void __cdecl UCommonBorder::StaticRegisterNativesUCommonBorder(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCommonBorder_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a81fe30

void __thiscall UCommonBorder::SynchronizeProperties(UCommonBorder *this)

{
  int iVar1;
  UObject *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) goto LAB_14a81ff07;
  pUVar4 = UCommonBorderStyle::StaticClass();
  if (pUVar4 == (UClass *)0x0) goto LAB_14a81ff07;
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((!bVar3) || (pUVar5 = (this->Style).Class.field0_0x0.DebugPtr, pUVar5 == (UClass *)0x0))
  goto LAB_14a81ff07;
  pUVar4 = UCommonBorderStyle::StaticClass();
  if (pUVar4 == (UClass *)0x0) {
LAB_14a81fec6:
    pUVar5 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14a81fec6;
    pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
  }
  pUVar2 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    pUVar5 = UCommonBorderStyle::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      FSlateBrush::operator=((FSlateBrush *)&this->field_0x210,(FSlateBrush *)&pUVar2[1].field_0x8);
    }
  }
LAB_14a81ff07:
  UBorder::SynchronizeProperties((UBorder *)this);
  SafeAreaUpdated(this);
  return;
}

// execSetStyle @ 14a835af0

void __cdecl UCommonBorder::execSetStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_res8 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  *(UObject **)&param_1[0x16].field_0x18 = pUVar2;
  if (*(longlong *)&param_1[0x16].field_0x8 != 0) {
    (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1);
  }
  return;
}

