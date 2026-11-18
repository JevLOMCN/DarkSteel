// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 21

// SetPadding_WrapperImpl @ 146964410

void __cdecl USizeBoxSlot::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetPadding(param_1,&local_18);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 146964470

void __cdecl USizeBoxSlot::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  SetHorizontalAlignment(param_1,(uint)*(byte *)param_2);
  return;
}

// SetVerticalAlignment_WrapperImpl @ 146964480

void __cdecl USizeBoxSlot::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  SetVerticalAlignment(param_1,(uint)*(byte *)param_2);
  return;
}

// StaticClass @ 146964550

UClass * __cdecl USizeBoxSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USizeBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SizeBoxSlot",&Z_Registration_Info_UClass_USizeBoxSlot.InnerSingleton
               ,StaticRegisterNativesUSizeBoxSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USizeBoxSlot>,InternalVTableHelperCtorCaller<USizeBoxSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USizeBoxSlot.InnerSingleton;
}

// USizeBoxSlot @ 14698d6e0

USizeBoxSlot * __thiscall USizeBoxSlot::USizeBoxSlot(USizeBoxSlot *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USizeBoxSlot__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  (this->SizeBox).Object = (SBox *)0x0;
  (this->SizeBox).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USizeBoxSlot @ 14698d730

USizeBoxSlot * __thiscall USizeBoxSlot::USizeBoxSlot(USizeBoxSlot *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SizeBox).Object = (SBox *)0x0;
  (this->SizeBox).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7USizeBoxSlot__6B_;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  return this;
}

// ~USizeBoxSlot @ 1469942a0

void __thiscall USizeBoxSlot::~USizeBoxSlot(USizeBoxSlot *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7USizeBoxSlot__6B_;
  pTVar3 = (this->SizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7UVisual__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildSlot @ 1469a48f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USizeBoxSlot::BuildSlot(USizeBoxSlot *this,TSharedRef<SBox,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  TSharedRef<SWidget,1> *pTVar7;
  SBox *pSVar8;
  SBox *pSVar9;
  SBox *this_00;
  bool bVar10;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  this_00 = (SBox *)0x0;
  (this->SizeBox).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->SizeBox).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->SizeBox).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->SizeBox).WeakReferenceCount.ReferenceController = pTVar3;
  }
  (**(code **)(this->_padding_ + 0x2b8))(this);
  pSVar9 = (SBox *)(this->SizeBox).WeakReferenceCount.ReferenceController;
  pSVar8 = pSVar9;
  if (pSVar9 != (SBox *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar9->_padding_;
    do {
      pSVar8 = this_00;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469a4981;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar9->_padding_;
      bVar10 = aVar2 == aVar6;
      if (bVar10) {
        *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar10);
    this_00 = (this->SizeBox).Object;
    pSVar8 = pSVar9;
    if (this_00 != (SBox *)0x0) goto LAB_1469a49a7;
  }
LAB_1469a4981:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar9 = pSVar8;
  if (bVar10) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1469a49a7:
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_28.Object = SNullWidget::NullWidget.Object;
    local_28.SharedReferenceCount.ReferenceController =
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
    SBox::SetContent(this_00,&local_28);
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
  }
  else {
    pTVar7 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_18);
    SBox::SetContent(this_00,pTVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetHorizontalAlignment @ 1469d1300

EHorizontalAlignment __thiscall USizeBoxSlot::GetHorizontalAlignment(USizeBoxSlot *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPadding @ 1469d36c0

FMargin * __thiscall USizeBoxSlot::GetPadding(USizeBoxSlot *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->Padding).Top;
  fVar2 = (this->Padding).Right;
  fVar3 = (this->Padding).Bottom;
  __return_storage_ptr__->Left = (this->Padding).Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1469d5ca0

UClass * __cdecl USizeBoxSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USizeBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SizeBoxSlot",&Z_Registration_Info_UClass_USizeBoxSlot.InnerSingleton
               ,StaticRegisterNativesUSizeBoxSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USizeBoxSlot>,InternalVTableHelperCtorCaller<USizeBoxSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USizeBoxSlot.InnerSingleton;
}

// GetVerticalAlignment @ 1469d9cc0

EVerticalAlignment __thiscall USizeBoxSlot::GetVerticalAlignment(USizeBoxSlot *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 146a0b3a0

void __thiscall USizeBoxSlot::ReleaseSlateResources(USizeBoxSlot *this,bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  UClass *pUVar6;
  undefined8 local_18 [2];
  
  lVar4 = this->_padding_;
  if (lVar4 != 0) {
    pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    iVar3 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar6->_padding_)) {
      (**(code **)(*(longlong *)this->_padding_ + 0x2b0))();
    }
  }
  if (&this->SizeBox != (TWeakPtr<SBox,1> *)local_18) {
    pTVar5 = (this->SizeBox).WeakReferenceCount.ReferenceController;
    (this->SizeBox).Object = (SBox *)0x0;
    (this->SizeBox).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  return;
}

// SetHorizontalAlignment @ 146a153d0

void __thiscall
USizeBoxSlot::SetHorizontalAlignment(USizeBoxSlot *this,EHorizontalAlignment param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SBox *pSVar5;
  SBox *pSVar6;
  SBox *this_00;
  bool bVar7;
  
  (this->HorizontalAlignment).Value = (uchar)param_1;
  if ((this->SizeBox).Object == (SBox *)0x0) {
    return;
  }
  pTVar1 = (this->SizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pSVar6 = (SBox *)(this->SizeBox).WeakReferenceCount.ReferenceController;
  this_00 = (SBox *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SBox *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146a15423;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar6->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    this_00 = (this->SizeBox).Object;
    pSVar5 = pSVar6;
    if (this_00 != (SBox *)0x0) goto LAB_146a15449;
  }
LAB_146a15423:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar6 = pSVar5;
  if (bVar7) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146a15449:
  SBox::SetHAlign(this_00,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// SetPadding @ 146a18c40

void __thiscall USizeBoxSlot::SetPadding(USizeBoxSlot *this,FMargin *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  SBox *this_00;
  bool bVar8;
  TAttribute<FMargin> local_38;
  
  fVar3 = param_1->Top;
  fVar4 = param_1->Right;
  fVar5 = param_1->Bottom;
  (this->Padding).Left = param_1->Left;
  (this->Padding).Top = fVar3;
  (this->Padding).Right = fVar4;
  (this->Padding).Bottom = fVar5;
  if ((this->SizeBox).Object == (SBox *)0x0) {
    return;
  }
  pTVar7 = (this->SizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar7->SharedReferenceCount < 1) {
    return;
  }
  pTVar7 = (this->SizeBox).WeakReferenceCount.ReferenceController;
  this_00 = (SBox *)0x0;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a18ca2;
      }
      LOCK();
      aVar6 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar6;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar8);
    this_00 = (this->SizeBox).Object;
    if (this_00 != (SBox *)0x0) goto LAB_146a18cc8;
  }
LAB_146a18ca2:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_146a18cc8:
  local_38.Value.Left = param_1->Left;
  local_38.Value.Top = param_1->Top;
  local_38.Value.Right = param_1->Right;
  local_38.Value.Bottom = param_1->Bottom;
  local_38.bIsSet = true;
  local_38.Getter._16_8_ = 0;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  SBox::SetPadding(this_00,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// SetVerticalAlignment @ 146a1d7d0

void __thiscall USizeBoxSlot::SetVerticalAlignment(USizeBoxSlot *this,EVerticalAlignment param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SBox *pSVar5;
  SBox *pSVar6;
  SBox *this_00;
  bool bVar7;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  if ((this->SizeBox).Object == (SBox *)0x0) {
    return;
  }
  pTVar1 = (this->SizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pSVar6 = (SBox *)(this->SizeBox).WeakReferenceCount.ReferenceController;
  this_00 = (SBox *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SBox *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146a1d823;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar6->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    this_00 = (this->SizeBox).Object;
    pSVar5 = pSVar6;
    if (this_00 != (SBox *)0x0) goto LAB_146a1d849;
  }
LAB_146a1d823:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar6 = pSVar5;
  if (bVar7) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146a1d849:
  SBox::SetVAlign(this_00,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// StaticRegisterNativesUSizeBoxSlot @ 146a1efc0

void __cdecl USizeBoxSlot::StaticRegisterNativesUSizeBoxSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_USizeBoxSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a258b0

void __thiscall USizeBoxSlot::SynchronizeProperties(USizeBoxSlot *this)

{
  FMargin local_18;
  
  local_18.Left = (this->Padding).Left;
  local_18.Top = (this->Padding).Top;
  local_18.Right = (this->Padding).Right;
  local_18.Bottom = (this->Padding).Bottom;
  SetPadding(this,&local_18);
  SetHorizontalAlignment(this,(uint)(this->HorizontalAlignment).Value);
  SetVerticalAlignment(this,(uint)(this->VerticalAlignment).Value);
  return;
}

// execSetHorizontalAlignment @ 146a3da00

void __cdecl
USizeBoxSlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [24];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetHorizontalAlignment((USizeBoxSlot *)param_1,(uint)local_res10[0]);
  return;
}

// execSetPadding @ 146a40a20

void __cdecl USizeBoxSlot::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMargin local_28;
  FMargin local_18;
  
  local_28.Left = 0.0;
  local_28.Top = 0.0;
  local_28.Right = 0.0;
  local_28.Bottom = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Left = local_28.Left;
  local_18.Top = local_28.Top;
  local_18.Right = local_28.Right;
  local_18.Bottom = local_28.Bottom;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPadding((USizeBoxSlot *)param_1,&local_18);
  return;
}

// execSetVerticalAlignment @ 146a44490

void __cdecl USizeBoxSlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [24];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVerticalAlignment((USizeBoxSlot *)param_1,(uint)local_res10[0]);
  return;
}

