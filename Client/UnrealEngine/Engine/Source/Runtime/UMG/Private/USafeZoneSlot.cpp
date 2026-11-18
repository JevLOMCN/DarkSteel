// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 29

// GetbIsTitleSafe_WrapperImpl @ 146960e70

void __cdecl USafeZoneSlot::GetbIsTitleSafe_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x38);
  return;
}

// SetbIsTitleSafe_WrapperImpl @ 146960e80

void __cdecl USafeZoneSlot::SetbIsTitleSafe_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SSafeZone *pSVar5;
  SSafeZone *pSVar6;
  SSafeZone *this;
  bool bVar7;
  
  bVar1 = *(bool *)param_2;
  *(bool *)((longlong)param_1 + 0x38) = bVar1;
  if (*(longlong *)((longlong)param_1 + 0x60) == 0) {
    return;
  }
  if (*(longlong *)((longlong)param_1 + 0x68) == 0) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)param_1 + 0x68) + 8) < 1) {
    return;
  }
  pSVar6 = *(SSafeZone **)((longlong)param_1 + 0x68);
  this = (SSafeZone *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SSafeZone *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = this;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146960ee1;
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
    this = *(SSafeZone **)((longlong)param_1 + 0x60);
    pSVar5 = pSVar6;
    if (this != (SSafeZone *)0x0) goto LAB_146960f07;
  }
LAB_146960ee1:
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
LAB_146960f07:
  SSafeZone::SetTitleSafe(this,bVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// GetSafeAreaScale_WrapperImpl @ 146960f40

void __cdecl USafeZoneSlot::GetSafeAreaScale_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x44);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x3c);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetSafeAreaScale_WrapperImpl @ 146960f50

void __cdecl USafeZoneSlot::SetSafeAreaScale_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SSafeZone *pSVar5;
  SSafeZone *pSVar6;
  SSafeZone *this;
  bool bVar7;
  FMargin local_18;
  
  uVar2 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x44) = uVar2;
  if (*(longlong *)((longlong)param_1 + 0x60) == 0) {
    return;
  }
  if (*(longlong *)((longlong)param_1 + 0x68) == 0) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)param_1 + 0x68) + 8) < 1) {
    return;
  }
  pSVar6 = *(SSafeZone **)((longlong)param_1 + 0x68);
  this = (SSafeZone *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SSafeZone *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = this;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146960fb1;
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
    this = *(SSafeZone **)((longlong)param_1 + 0x60);
    pSVar5 = pSVar6;
    if (this != (SSafeZone *)0x0) goto LAB_146960fd7;
  }
LAB_146960fb1:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar6 = pSVar5;
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_146960fd7:
  local_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x3c);
  local_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x44);
  SSafeZone::SetSafeAreaScale(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// GetHAlign_WrapperImpl @ 146961020

void __cdecl USafeZoneSlot::GetHAlign_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x4c);
  return;
}

// SetHAlign_WrapperImpl @ 146961030

void __cdecl USafeZoneSlot::SetHAlign_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBox *pSVar4;
  SBox *pSVar5;
  SBox *this;
  bool bVar6;
  
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)param_2;
  if (*(longlong *)((longlong)param_1 + 0x60) == 0) {
    return;
  }
  if (*(longlong *)((longlong)param_1 + 0x68) == 0) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)param_1 + 0x68) + 8) < 1) {
    return;
  }
  pSVar5 = *(SBox **)((longlong)param_1 + 0x68);
  this = (SBox *)0x0;
  pSVar4 = pSVar5;
  if (pSVar5 != (SBox *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar4 = this;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146961087;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar5->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this = *(SBox **)((longlong)param_1 + 0x60);
    pSVar4 = pSVar5;
    if (this != (SBox *)0x0) goto LAB_1469610ad;
  }
LAB_146961087:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar5 = pSVar4;
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1469610ad:
  SBox::SetHAlign(this,(uint)*(byte *)((longlong)param_1 + 0x4c));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return;
}

// GetVAlign_WrapperImpl @ 1469610f0

void __cdecl USafeZoneSlot::GetVAlign_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x4d);
  return;
}

// SetVAlign_WrapperImpl @ 146961140

void __cdecl USafeZoneSlot::SetVAlign_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBox *pSVar4;
  SBox *pSVar5;
  SBox *this;
  bool bVar6;
  
  *(undefined1 *)((longlong)param_1 + 0x4d) = *(undefined1 *)param_2;
  if (*(longlong *)((longlong)param_1 + 0x60) == 0) {
    return;
  }
  if (*(longlong *)((longlong)param_1 + 0x68) == 0) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)param_1 + 0x68) + 8) < 1) {
    return;
  }
  pSVar5 = *(SBox **)((longlong)param_1 + 0x68);
  this = (SBox *)0x0;
  pSVar4 = pSVar5;
  if (pSVar5 != (SBox *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar4 = this;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146961197;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar5->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this = *(SBox **)((longlong)param_1 + 0x60);
    pSVar4 = pSVar5;
    if (this != (SBox *)0x0) goto LAB_1469611bd;
  }
LAB_146961197:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar5 = pSVar4;
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1469611bd:
  SBox::SetVAlign(this,(uint)*(byte *)((longlong)param_1 + 0x4d));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return;
}

// GetPadding_WrapperImpl @ 146961200

void __cdecl USafeZoneSlot::GetPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x58);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x50);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetPadding_WrapperImpl @ 146961210

void __cdecl USafeZoneSlot::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  SBox *this;
  bool bVar6;
  TAttribute<FMargin> local_38;
  
  uVar2 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar2;
  if (*(longlong *)((longlong)param_1 + 0x60) == 0) {
    return;
  }
  if (*(longlong *)((longlong)param_1 + 0x68) == 0) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)param_1 + 0x68) + 8) < 1) {
    return;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x68);
  this = (SBox *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146961272;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    this = *(SBox **)((longlong)param_1 + 0x60);
    if (this != (SBox *)0x0) goto LAB_146961298;
  }
LAB_146961272:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_146961298:
  local_38.Value._0_8_ = *(undefined8 *)param_2;
  local_38.Value._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  local_38.bIsSet = true;
  local_38.Getter._16_8_ = 0;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  SBox::SetPadding(this,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// StaticClass @ 1469612f0

UClass * __cdecl USafeZoneSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USafeZoneSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SafeZoneSlot",
               &Z_Registration_Info_UClass_USafeZoneSlot.InnerSingleton,
               StaticRegisterNativesUSafeZoneSlot,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USafeZoneSlot>,InternalVTableHelperCtorCaller<USafeZoneSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USafeZoneSlot.InnerSingleton;
}

// USafeZoneSlot @ 14698cdd0

USafeZoneSlot * __thiscall USafeZoneSlot::USafeZoneSlot(USafeZoneSlot *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USafeZoneSlot__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SafeAreaScale).Left = 0.0;
  (this->SafeAreaScale).Top = 0.0;
  (this->SafeAreaScale).Right = 0.0;
  (this->SafeAreaScale).Bottom = 0.0;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  (this->SafeZone).Object = (SSafeZone *)0x0;
  (this->SafeZone).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USafeZoneSlot @ 14698ce20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

USafeZoneSlot * __thiscall USafeZoneSlot::USafeZoneSlot(USafeZoneSlot *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FObjectInitializer *pFVar5;
  
  pFVar5 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar5);
  uVar2 = _UNK_15076b1f8;
  uVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  this->_padding_ = (longlong)&___7USafeZoneSlot__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  (this->SafeZone).Object = (SSafeZone *)0x0;
  (this->SafeZone).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  uVar3 = ___xmm_3f8000003f8000003f8000003f800000;
  ___xmm_3f8000003f8000003f8000003f800000 = (undefined4)uVar4;
  _UNK_15076b1f4 = SUB84(uVar4,4);
  uVar1 = _UNK_15076b1f4;
  (this->SafeAreaScale).Left = (float)___xmm_3f8000003f8000003f8000003f800000;
  ___xmm_3f8000003f8000003f8000003f800000 = uVar3;
  uVar4 = _UNK_15076b1f8;
  (this->SafeAreaScale).Top = (float)uVar1;
  _UNK_15076b1f8 = (undefined4)uVar2;
  _UNK_15076b1fc = SUB84(uVar2,4);
  uVar1 = _UNK_15076b1fc;
  (this->SafeAreaScale).Right = (float)_UNK_15076b1f8;
  _UNK_15076b1f8 = uVar4;
  (this->SafeAreaScale).Bottom = (float)uVar1;
  this->bIsTitleSafe = true;
  return this;
}

// ~USafeZoneSlot @ 146993ec0

void __thiscall USafeZoneSlot::~USafeZoneSlot(USafeZoneSlot *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7USafeZoneSlot__6B_;
  pTVar3 = (this->SafeZone).WeakReferenceCount.ReferenceController;
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

// BuildSlot @ 1469a4330

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USafeZoneSlot::BuildSlot(USafeZoneSlot *this,TSharedRef<SSafeZone,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SSafeZone *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  SWidget *local_58;
  FSharedReferencer<1> FStack_50;
  TSharedRef<SWidget,1> local_48;
  TAttribute<FMargin> local_38;
  
  (this->SafeZone).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->SafeZone).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->SafeZone).WeakReferenceCount.ReferenceController;
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
    (this->SafeZone).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SSafeZone::SetTitleSafe(param_1->Object,this->bIsTitleSafe);
  local_58 = *(SWidget **)&this->SafeAreaScale;
  FStack_50.ReferenceController = *(TReferenceControllerBase<1> **)&(this->SafeAreaScale).Right;
  SSafeZone::SetSafeAreaScale(param_1->Object,(FMargin *)&local_58);
  SBox::SetHAlign((SBox *)param_1->Object,(uint)(this->HAlign).Value);
  SBox::SetVAlign((SBox *)param_1->Object,(uint)(this->VAlign).Value);
  local_38.Value.Left = (this->Padding).Left;
  local_38.Value.Top = (this->Padding).Top;
  local_38.Value.Right = (this->Padding).Right;
  local_38.Value.Bottom = (this->Padding).Bottom;
  local_38.bIsSet = true;
  local_38.Getter._16_8_ = 0;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  SBox::SetPadding((SBox *)param_1->Object,&local_38);
  this_00 = param_1->Object;
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_58 = SNullWidget::NullWidget.Object;
    FStack_50.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController
    ;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SBox::SetContent((SBox *)this_00,(TSharedRef<SWidget,1> *)&local_58);
    local_48.SharedReferenceCount.ReferenceController = FStack_50.ReferenceController;
  }
  else {
    pTVar5 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_48);
    SBox::SetContent((SBox *)this_00,pTVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetHorizontalAlignment @ 1469d12a0

EHorizontalAlignment __thiscall USafeZoneSlot::GetHorizontalAlignment(USafeZoneSlot *this)

{
  return (EHorizontalAlignment)(this->HAlign).Value;
}

// GetPadding @ 1469d3620

FMargin * __thiscall USafeZoneSlot::GetPadding(USafeZoneSlot *this)

{
  return &this->Padding;
}

// GetPrivateStaticClass @ 1469d55e0

UClass * __cdecl USafeZoneSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USafeZoneSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SafeZoneSlot",
               &Z_Registration_Info_UClass_USafeZoneSlot.InnerSingleton,
               StaticRegisterNativesUSafeZoneSlot,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USafeZoneSlot>,InternalVTableHelperCtorCaller<USafeZoneSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USafeZoneSlot.InnerSingleton;
}

// GetSafeAreaScale @ 1469d7040

FMargin * __thiscall USafeZoneSlot::GetSafeAreaScale(USafeZoneSlot *this)

{
  return &this->SafeAreaScale;
}

// GetVerticalAlignment @ 1469d9c60

EVerticalAlignment __thiscall USafeZoneSlot::GetVerticalAlignment(USafeZoneSlot *this)

{
  return (EVerticalAlignment)(this->VAlign).Value;
}

// IsTitleSafe @ 1469e3830

bool __thiscall USafeZoneSlot::IsTitleSafe(USafeZoneSlot *this)

{
  return this->bIsTitleSafe;
}

// ReleaseSlateResources @ 146a0b040

void __thiscall USafeZoneSlot::ReleaseSlateResources(USafeZoneSlot *this,bool param_1)

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
  if (&this->SafeZone != (TWeakPtr<SSafeZone,1> *)local_18) {
    pTVar5 = (this->SafeZone).WeakReferenceCount.ReferenceController;
    (this->SafeZone).Object = (SSafeZone *)0x0;
    (this->SafeZone).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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

// SetHorizontalAlignment @ 146a15170

void __thiscall
USafeZoneSlot::SetHorizontalAlignment(USafeZoneSlot *this,EHorizontalAlignment param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SSafeZone *pSVar5;
  SSafeZone *pSVar6;
  SSafeZone *this_00;
  bool bVar7;
  
  (this->HAlign).Value = (uchar)param_1;
  if ((this->SafeZone).Object == (SSafeZone *)0x0) {
    return;
  }
  pTVar1 = (this->SafeZone).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pSVar6 = (SSafeZone *)(this->SafeZone).WeakReferenceCount.ReferenceController;
  this_00 = (SSafeZone *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SSafeZone *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146a151c4;
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
    this_00 = (this->SafeZone).Object;
    pSVar5 = pSVar6;
    if (this_00 != (SSafeZone *)0x0) goto LAB_146a151ea;
  }
LAB_146a151c4:
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
LAB_146a151ea:
  SBox::SetHAlign((SBox *)this_00,(uint)(this->HAlign).Value);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// SetIsTitleSafe @ 146a161c0

void __thiscall USafeZoneSlot::SetIsTitleSafe(USafeZoneSlot *this,bool param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SSafeZone *pSVar5;
  SSafeZone *pSVar6;
  SSafeZone *this_00;
  bool bVar7;
  
  this->bIsTitleSafe = param_1;
  if ((this->SafeZone).Object == (SSafeZone *)0x0) {
    return;
  }
  pTVar1 = (this->SafeZone).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pSVar6 = (SSafeZone *)(this->SafeZone).WeakReferenceCount.ReferenceController;
  this_00 = (SSafeZone *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SSafeZone *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146a16217;
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
    this_00 = (this->SafeZone).Object;
    pSVar5 = pSVar6;
    if (this_00 != (SSafeZone *)0x0) goto LAB_146a1623d;
  }
LAB_146a16217:
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
LAB_146a1623d:
  SSafeZone::SetTitleSafe(this_00,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// SetPadding @ 146a18990

void __thiscall USafeZoneSlot::SetPadding(USafeZoneSlot *this,FMargin *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  SSafeZone *this_00;
  bool bVar8;
  TAttribute<FMargin> local_38;
  
  fVar3 = param_1->Top;
  fVar4 = param_1->Right;
  fVar5 = param_1->Bottom;
  (this->Padding).Left = param_1->Left;
  (this->Padding).Top = fVar3;
  (this->Padding).Right = fVar4;
  (this->Padding).Bottom = fVar5;
  if ((this->SafeZone).Object == (SSafeZone *)0x0) {
    return;
  }
  pTVar7 = (this->SafeZone).WeakReferenceCount.ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar7->SharedReferenceCount < 1) {
    return;
  }
  pTVar7 = (this->SafeZone).WeakReferenceCount.ReferenceController;
  this_00 = (SSafeZone *)0x0;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a189f2;
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
    this_00 = (this->SafeZone).Object;
    if (this_00 != (SSafeZone *)0x0) goto LAB_146a18a18;
  }
LAB_146a189f2:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_146a18a18:
  local_38.Value.Left = param_1->Left;
  local_38.Value.Top = param_1->Top;
  local_38.Value.Right = param_1->Right;
  local_38.Value.Bottom = param_1->Bottom;
  local_38.bIsSet = true;
  local_38.Getter._16_8_ = 0;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  SBox::SetPadding((SBox *)this_00,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// SetSafeAreaScale @ 146a19d20

void __thiscall USafeZoneSlot::SetSafeAreaScale(USafeZoneSlot *this,FMargin *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  atomic<int> aVar7;
  SSafeZone *pSVar8;
  SSafeZone *pSVar9;
  SSafeZone *this_00;
  bool bVar10;
  FMargin local_18;
  
  fVar4 = param_1->Top;
  fVar5 = param_1->Right;
  fVar6 = param_1->Bottom;
  (this->SafeAreaScale).Left = param_1->Left;
  (this->SafeAreaScale).Top = fVar4;
  (this->SafeAreaScale).Right = fVar5;
  (this->SafeAreaScale).Bottom = fVar6;
  if ((this->SafeZone).Object == (SSafeZone *)0x0) {
    return;
  }
  pTVar1 = (this->SafeZone).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pSVar9 = (SSafeZone *)(this->SafeZone).WeakReferenceCount.ReferenceController;
  this_00 = (SSafeZone *)0x0;
  pSVar8 = pSVar9;
  if (pSVar9 != (SSafeZone *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar9->_padding_;
    do {
      pSVar8 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146a19d81;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar9->_padding_;
      bVar10 = aVar3 == aVar7;
      if (bVar10) {
        *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar10);
    this_00 = (this->SafeZone).Object;
    pSVar8 = pSVar9;
    if (this_00 != (SSafeZone *)0x0) goto LAB_146a19da7;
  }
LAB_146a19d81:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar9 = pSVar8;
  if (bVar10) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146a19da7:
  local_18.Left = (this->SafeAreaScale).Left;
  local_18.Top = (this->SafeAreaScale).Top;
  local_18.Right = (this->SafeAreaScale).Right;
  local_18.Bottom = (this->SafeAreaScale).Bottom;
  SSafeZone::SetSafeAreaScale(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  return;
}

// SetVerticalAlignment @ 146a1d570

void __thiscall USafeZoneSlot::SetVerticalAlignment(USafeZoneSlot *this,EVerticalAlignment param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SSafeZone *pSVar5;
  SSafeZone *pSVar6;
  SSafeZone *this_00;
  bool bVar7;
  
  (this->VAlign).Value = (uchar)param_1;
  if ((this->SafeZone).Object == (SSafeZone *)0x0) {
    return;
  }
  pTVar1 = (this->SafeZone).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pSVar6 = (SSafeZone *)(this->SafeZone).WeakReferenceCount.ReferenceController;
  this_00 = (SSafeZone *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SSafeZone *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146a1d5c4;
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
    this_00 = (this->SafeZone).Object;
    pSVar5 = pSVar6;
    if (this_00 != (SSafeZone *)0x0) goto LAB_146a1d5ea;
  }
LAB_146a1d5c4:
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
LAB_146a1d5ea:
  SBox::SetVAlign((SBox *)this_00,(uint)(this->VAlign).Value);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// StaticRegisterNativesUSafeZoneSlot @ 146a1ede0

void __cdecl USafeZoneSlot::StaticRegisterNativesUSafeZoneSlot(void)

{
  return;
}

// SynchronizeProperties @ 146a24980

void __thiscall USafeZoneSlot::SynchronizeProperties(USafeZoneSlot *this)

{
  longlong *this_00;
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  this_00 = &this->_padding_;
  if ((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)) {
    if (*this_00 == 0) {
      pFVar3 = GetTypeName<USafeZone>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar4);
    }
    pUVar2 = USafeZone::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if ((!bVar1) || ((USafeZone *)*this_00 == (USafeZone *)0x0)) {
      pFVar3 = GetTypeName<USafeZone>(&local_28);
      pwVar4 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UPanelWidget>(&local_18,(UPanelWidget *)*this_00);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar4,pwVar5);
    }
    USafeZone::UpdateWidgetProperties((USafeZone *)*this_00);
  }
  return;
}

