// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 35

// GetWidgetStyle_WrapperImpl @ 146969740

void __cdecl UScrollBar::GetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FScrollBarStyle *pFVar1;
  FScrollBarStyle local_658;
  
  pFVar1 = FScrollBarStyle::FScrollBarStyle
                     (&local_658,(FScrollBarStyle *)((longlong)param_1 + 0x1b0));
  FScrollBarStyle::operator=(param_2,pFVar1);
  FScrollBarStyle::~FScrollBarStyle(&local_658);
  return;
}

// SetWidgetStyle_WrapperImpl @ 1469697d0

void __cdecl UScrollBar::SetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FScrollBarStyle::operator=((FScrollBarStyle *)((longlong)param_1 + 0x1b0),param_2);
  if (*(SScrollBar **)((longlong)param_1 + 0x828) != (SScrollBar *)0x0) {
    SScrollBar::SetStyle(*(SScrollBar **)((longlong)param_1 + 0x828),param_2);
  }
  return;
}

// GetbAlwaysShowScrollbar_WrapperImpl @ 146969820

void __cdecl UScrollBar::GetbAlwaysShowScrollbar_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x800);
  return;
}

// SetbAlwaysShowScrollbar_WrapperImpl @ 146969830

void __cdecl UScrollBar::SetbAlwaysShowScrollbar_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  SWidget *pSVar2;
  SCompoundWidget *this;
  code *pcVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  SWidget *pSVar8;
  atomic<int> *paVar9;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  TSharedRef<SWidget,1> TStack_88;
  undefined1 auStack_78 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_70;
  FDelegateAllocation FStack_68;
  FDestructionSentinel FStack_58;
  FDelegateAllocation *pFStack_40;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x800) = cVar1;
  this = *(SCompoundWidget **)((longlong)param_1 + 0x828);
  if (this == (SCompoundWidget *)0x0) {
    return;
  }
  bVar4 = false;
  *(char *)&this[1]._padding_ = cVar1;
  if (cVar1 == '\0') {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&TStack_88);
    pSVar2 = (SWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    pSVar8 = pTVar5->Object;
    if (pSVar2 == (SWidget *)0x0) {
      paVar9 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar9 = (atomic<int> *)&pSVar2->_padding_;
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(TStack_88.SharedReferenceCount.ReferenceController._4_4_,
                        TStack_88.SharedReferenceCount.ReferenceController._0_4_));
    auStack_78[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    auStack_78[1] = true;
    FStack_68.DelegateSize = 0;
    TStack_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_70,(FWriteAccessScope *)&FStack_58);
    pFStack_40 = &FStack_68;
    puVar6 = UE::Core::Private::DelegateAllocate(0x38,&FStack_68);
    if (puVar6 != (undefined8 *)0x0) {
      uStack_a8 = SScrollBar::ShouldBeVisible;
      lStack_a0 = (ulonglong)TStack_88.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      if (pSVar2 != (SWidget *)0x0) {
        LOCK();
        *paVar9 = (atomic<int>)((int)*paVar9 + 1);
        UNLOCK();
      }
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseSPMethodDelegateInstance__00__CBVSScrollBar___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = pSVar8;
      puVar6[4] = pSVar2;
      if (pSVar2 != (SWidget *)0x0) {
        LOCK();
        ((atomic<int> *)&pSVar2->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pSVar2->_padding_)[1] + 1);
        UNLOCK();
      }
      bVar4 = true;
      puVar6[5] = uStack_a8;
      puVar6[6] = lStack_a0;
      pSVar8 = pSVar2;
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar8);
    }
    if (FStack_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_58.Accessor,&FStack_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar2);
    SCompoundWidget::SetVisibility(this,(TAttribute<EVisibility> *)auStack_78);
  }
  else {
    uStack_a8._0_2_ = CONCAT11(true,EVisibility::Visible.Value.Value);
    uStack_90 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    SCompoundWidget::SetVisibility(this,(TAttribute<EVisibility> *)&uStack_a8);
  }
  if ((this[1]._padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar2 = (SWidget *)this[1]._padding_;
  if (*(char *)&pSVar2[1].PrepassLayoutScaleMultiplierValue != cVar1) {
    *(char *)&pSVar2[1].PrepassLayoutScaleMultiplierValue = cVar1;
    SWidget::Invalidate(pSVar2,Layout);
  }
  return;
}

// GetbAlwaysShowScrollbarTrack_WrapperImpl @ 146969850

void __cdecl UScrollBar::GetbAlwaysShowScrollbarTrack_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x801);
  return;
}

// SetbAlwaysShowScrollbarTrack_WrapperImpl @ 146969860

void __cdecl UScrollBar::SetbAlwaysShowScrollbarTrack_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x801) = uVar1;
  if (*(longlong *)((longlong)param_1 + 0x828) == 0) {
    return;
  }
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x828) + 0x391) = uVar1;
  return;
}

// GetOrientation_WrapperImpl @ 1469698c0

void __cdecl UScrollBar::GetOrientation_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x802);
  return;
}

// GetThickness_WrapperImpl @ 1469698d0

void __cdecl UScrollBar::GetThickness_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x810);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x808);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetThickness_WrapperImpl @ 1469698f0

void __cdecl UScrollBar::SetThickness_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x808) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x810) = uVar1;
  if (*(SScrollBar **)((longlong)param_1 + 0x828) != (SScrollBar *)0x0) {
    local_38._s_0.X = (double)*(undefined8 *)param_2;
    local_38._s_0.Y = *(double *)((longlong)param_2 + 8);
    local_28 = 1;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    SScrollBar::SetThickness
              (*(SScrollBar **)((longlong)param_1 + 0x828),
               (TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0);
  }
  return;
}

// GetPadding_WrapperImpl @ 146969940

void __cdecl UScrollBar::GetPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x820);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x818);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetPadding_WrapperImpl @ 1469699a0

void __cdecl UScrollBar::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  TAttribute<FMargin> local_38;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x818) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x820) = uVar1;
  if (*(SBorder **)((longlong)param_1 + 0x828) != (SBorder *)0x0) {
    local_38.Value._0_8_ = *(undefined8 *)param_2;
    local_38.Value._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SBorder::SetPadding(*(SBorder **)((longlong)param_1 + 0x828),&local_38);
  }
  return;
}

// StaticClass @ 146969af0

UClass * __cdecl UScrollBar::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrollBar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScrollBar",&Z_Registration_Info_UClass_UScrollBar.InnerSingleton,
               StaticRegisterNativesUScrollBar,0x840,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UScrollBar>,InternalVTableHelperCtorCaller<UScrollBar>,local_res8
               ,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrollBar.InnerSingleton;
}

// UScrollBar @ 14698d080

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UScrollBar * __thiscall UScrollBar::UScrollBar(UScrollBar *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FScrollBarStyle::FScrollBarStyle(&this->WidgetStyle);
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  (this->MyScrollBar).Object = (SScrollBar *)0x0;
  (this->MyScrollBar).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UScrollBar @ 14698d0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UScrollBar * __thiscall UScrollBar::UScrollBar(UScrollBar *this,FObjectInitializer *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FDefaultStyleCache *pFVar4;
  
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FScrollBarStyle::FScrollBarStyle(&this->WidgetStyle);
  this->field_0xf9 = this->field_0xf9 & 0xfe;
  (this->MyScrollBar).Object = (SScrollBar *)0x0;
  (this->MyScrollBar).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bAlwaysShowScrollbar = true;
  this->bAlwaysShowScrollbarTrack = true;
  (this->Orientation).Value = '\x01';
  (this->Thickness).field0_0x0._s_0.X = 16.0;
  (this->Thickness).field0_0x0._s_0.Y = 16.0;
  uVar2 = _UNK_15076ba38;
  uVar1 = _UNK_15076ba34;
  (this->Padding).Left = (float)___xmm_40000000400000004000000040000000;
  uVar3 = _UNK_15076ba38;
  (this->Padding).Top = (float)uVar1;
  _UNK_15076ba38 = (undefined4)uVar2;
  _UNK_15076ba3c = SUB84(uVar2,4);
  uVar1 = _UNK_15076ba3c;
  (this->Padding).Right = (float)_UNK_15076ba38;
  _UNK_15076ba38 = uVar3;
  (this->Padding).Bottom = (float)uVar1;
  pFVar4 = UE::Slate::Private::FDefaultStyleCache::Get();
  FScrollBarStyle::operator=(&this->WidgetStyle,&(pFVar4->Runtime).ScrollBarStyle);
  return this;
}

// ~UScrollBar @ 146994050

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScrollBar::~UScrollBar(UScrollBar *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyScrollBar).SharedReferenceCount.ReferenceController);
  FScrollBarStyle::~FScrollBarStyle(&this->WidgetStyle);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetOrientation @ 1469d2e20

EOrientation __thiscall UScrollBar::GetOrientation(UScrollBar *this)

{
  return (EOrientation)(this->Orientation).Value;
}

// GetPadding @ 1469d3630

FMargin * __thiscall UScrollBar::GetPadding(UScrollBar *this,FMargin *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 1469d58e0

UClass * __cdecl UScrollBar::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrollBar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScrollBar",&Z_Registration_Info_UClass_UScrollBar.InnerSingleton,
               StaticRegisterNativesUScrollBar,0x840,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UScrollBar>,InternalVTableHelperCtorCaller<UScrollBar>,local_res8
               ,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrollBar.InnerSingleton;
}

// GetThickness @ 1469d8f20

TVector2<double> * __thiscall
UScrollBar::GetThickness(UScrollBar *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->Thickness).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Thickness).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetWidgetStyle @ 1469da3a0

FScrollBarStyle * __thiscall UScrollBar::GetWidgetStyle(UScrollBar *this)

{
  return &this->WidgetStyle;
}

// InitOrientation @ 1469dff10

void __thiscall UScrollBar::InitOrientation(UScrollBar *this,EOrientation param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyScrollBar).Object != (SScrollBar *)0x0) {
    `UScrollBar::InitOrientation'::__l2::<lambda_1>::operator()(local_res10);
    (this->Orientation).Value = (uchar)param_1;
    return;
  }
  (this->Orientation).Value = (uchar)param_1;
  return;
}

// IsAlwaysShowScrollbar @ 1469e09d0

bool __thiscall UScrollBar::IsAlwaysShowScrollbar(UScrollBar *this)

{
  return this->bAlwaysShowScrollbar;
}

// IsAlwaysShowScrollbarTrack @ 1469e09f0

bool __thiscall UScrollBar::IsAlwaysShowScrollbarTrack(UScrollBar *this)

{
  return this->bAlwaysShowScrollbarTrack;
}

// RebuildWidget @ 146a047e0

TSharedRef<SWidget,1> * __thiscall
UScrollBar::RebuildWidget(UScrollBar *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SScrollBar *pSVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  TSharedRef<SWidget,1> *pTVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> local_3a8;
  SScrollBar *local_390;
  FSharedReferencer<1> local_388;
  double local_380;
  double dStack_378;
  undefined1 local_370;
  undefined1 local_368 [8];
  ForAnyElementType FStack_360;
  ulonglong local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined1 local_340;
  undefined1 local_338 [8];
  ForAnyElementType FStack_330;
  ulonglong local_328;
  FDestructionSentinel local_320;
  FDestructionSentinel local_308;
  undefined1 local_2f0 [512];
  undefined1 local_f0 [24];
  undefined1 local_d8 [64];
  undefined1 local_98 [48];
  undefined1 local_68 [40];
  
  pFVar9 = SScrollBar::FArguments::FArguments((FArguments *)local_2f0);
  pFVar9->_Style = &this->WidgetStyle;
  pFVar9->_AlwaysShowScrollbar = this->bAlwaysShowScrollbar;
  pFVar9->_AlwaysShowScrollbarTrack = this->bAlwaysShowScrollbarTrack;
  pFVar9->_Orientation = (uint)(this->Orientation).Value;
  local_380 = (this->Thickness).field0_0x0._s_0.X;
  dStack_378 = (this->Thickness).field0_0x0._s_0.Y;
  local_370 = 1;
  local_358 = 0;
  local_368 = (undefined1  [8])0x0;
  FStack_360.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_Thickness).Value.field0_0x0._s_0.X = local_380;
  (pFVar9->_Thickness).Value.field0_0x0._s_0.Y = dStack_378;
  (pFVar9->_Thickness).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Thickness).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_368);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_368,
             (FWriteAccessScope *)&local_320);
  if (((int)local_358 != 0) && (FStack_360.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_360.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_360,0,0,0x10);
    local_358 = local_358 & 0xffffffff00000000;
  }
  if (local_320.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_320.Accessor,&local_320);
  }
  if (FStack_360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_360.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_368);
  local_350._0_4_ = (this->Padding).Left;
  local_350._4_4_ = (this->Padding).Top;
  uStack_348._0_4_ = (this->Padding).Right;
  uStack_348._4_4_ = (this->Padding).Bottom;
  local_340 = 1;
  local_328 = 0;
  local_338 = (undefined1  [8])0x0;
  FStack_330.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_Padding).Value.Left = (float)(undefined4)local_350;
  (pFVar9->_Padding).Value.Top = (float)local_350._4_4_;
  (pFVar9->_Padding).Value.Right = (float)(undefined4)uStack_348;
  (pFVar9->_Padding).Value.Bottom = (float)uStack_348._4_4_;
  (pFVar9->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_338);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_338,
             (FWriteAccessScope *)&local_308);
  if (((int)local_328 != 0) && (FStack_330.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_330.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_330,0,0,0x10);
    local_328 = local_328 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_330.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_330.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_338);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
            (&local_3a8,"SScrollBar",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ScrollBar.cpp"
             ,0x30,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_3a8._Widget.Object;
  if (local_3a8._Widget.Object == (SScrollBar *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_3a8._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SScrollBar::Construct(local_3a8._Widget.Object,pFVar9);
  if (local_3a8._Widget.Object == (SScrollBar *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  if (((local_3a8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_3a8._Widget.Object)->_padding_ + 0x228))(local_3a8._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_146a04acb;
  }
  bVar8 = 0x20;
LAB_146a04acb:
  *(byte *)&(local_3a8._Widget.Object)->_padding_ =
       (byte)(local_3a8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_3a8._Widget.Object)->_padding_ =
       (byte)(local_3a8._Widget.Object)->_padding_ | bVar8;
  if (local_3a8._Widget.Object == (SScrollBar *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_3a8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_3a8._Widget.Object == (SScrollBar *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  FVar5.ReferenceController = local_3a8._Widget.SharedReferenceCount.ReferenceController;
  local_3a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3a8._Widget.Object = (SScrollBar *)0x0;
  if (pSVar3 == (SScrollBar *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  local_390 = pSVar3;
  local_388.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyScrollBar != (TSharedPtr<SScrollBar,1> *)&local_390) {
    (this->MyScrollBar).Object = pSVar3;
    local_390 = (SScrollBar *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyScrollBar).SharedReferenceCount,&local_388);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
  if ((void *)local_98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d8);
  if ((void *)local_d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f0);
  if ((void *)local_f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2f0);
  if ((this->MyScrollBar).Object == (SScrollBar *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  pTVar2 = (this->MyScrollBar).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MyScrollBar).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SScrollBar *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0b200

void __thiscall UScrollBar::ReleaseSlateResources(UScrollBar *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyScrollBar != (TSharedPtr<SScrollBar,1> *)&local_18) {
    (this->MyScrollBar).Object = (SScrollBar *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyScrollBar).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetAlwaysShowScrollbar @ 146a10da0

/* WARNING: Type propagation algorithm not settling */

void __thiscall UScrollBar::SetAlwaysShowScrollbar(UScrollBar *this,bool param_1)

{
  SWidget *pSVar1;
  SScrollBarTrack *this_00;
  SScrollBar *this_01;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  SWidget *pSVar7;
  atomic<int> *paVar8;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  TSharedRef<SWidget,1> TStack_88;
  undefined1 auStack_78 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_70;
  FDelegateAllocation FStack_68;
  FDestructionSentinel FStack_58;
  FDelegateAllocation *pFStack_40;
  
  this->bAlwaysShowScrollbar = param_1;
  this_01 = (this->MyScrollBar).Object;
  if (this_01 == (SScrollBar *)0x0) {
    return;
  }
  bVar3 = false;
  this_01->bAlwaysShowScrollbar = param_1;
  if (param_1) {
    uStack_a8._0_2_ = CONCAT11(true,EVisibility::Visible.Value.Value);
    uStack_90 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)this_01,(TAttribute<EVisibility> *)&uStack_a8)
    ;
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this_01->_padding_,&TStack_88);
    pSVar1 = (SWidget *)(pTVar4->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar4->Object;
    if (pSVar1 == (SWidget *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = (atomic<int> *)&pSVar1->_padding_;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(TStack_88.SharedReferenceCount.ReferenceController._4_4_,
                        TStack_88.SharedReferenceCount.ReferenceController._0_4_));
    auStack_78[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    auStack_78[1] = true;
    FStack_68.DelegateSize = 0;
    TStack_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_70,(FWriteAccessScope *)&FStack_58);
    pFStack_40 = &FStack_68;
    puVar5 = UE::Core::Private::DelegateAllocate(0x38,&FStack_68);
    if (puVar5 != (undefined8 *)0x0) {
      uStack_a8 = SScrollBar::ShouldBeVisible;
      lStack_a0 = (ulonglong)TStack_88.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      if (pSVar1 != (SWidget *)0x0) {
        LOCK();
        *paVar8 = (atomic<int>)((int)*paVar8 + 1);
        UNLOCK();
      }
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseSPMethodDelegateInstance__00__CBVSScrollBar___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[3] = pSVar7;
      puVar5[4] = pSVar1;
      if (pSVar1 != (SWidget *)0x0) {
        LOCK();
        ((atomic<int> *)&pSVar1->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pSVar1->_padding_)[1] + 1);
        UNLOCK();
      }
      bVar3 = true;
      puVar5[5] = uStack_a8;
      puVar5[6] = lStack_a0;
      pSVar7 = pSVar1;
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar7);
    }
    if (FStack_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_58.Accessor,&FStack_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SCompoundWidget::SetVisibility((SCompoundWidget *)this_01,(TAttribute<EVisibility> *)auStack_78)
    ;
  }
  if (((this_01->Track).Object == (SScrollBarTrack *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (this_01->Track).Object;
  if (this_00->bIsAlwaysVisible != param_1) {
    this_00->bIsAlwaysVisible = param_1;
    SWidget::Invalidate((SWidget *)this_00,Layout);
  }
  return;
}

// SetAlwaysShowScrollbarTrack @ 146a10de0

void __thiscall UScrollBar::SetAlwaysShowScrollbarTrack(UScrollBar *this,bool param_1)

{
  SScrollBar *pSVar1;
  
  this->bAlwaysShowScrollbarTrack = param_1;
  pSVar1 = (this->MyScrollBar).Object;
  if (pSVar1 == (SScrollBar *)0x0) {
    return;
  }
  pSVar1->bAlwaysShowScrollbarTrack = param_1;
  return;
}

// SetPadding @ 146a18a80

void __thiscall UScrollBar::SetPadding(UScrollBar *this,FMargin *param_1)

{
  SScrollBar *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  TAttribute<FMargin> local_38;
  
  fVar1 = param_1->Top;
  fVar2 = param_1->Right;
  fVar3 = param_1->Bottom;
  (this->Padding).Left = param_1->Left;
  (this->Padding).Top = fVar1;
  (this->Padding).Right = fVar2;
  (this->Padding).Bottom = fVar3;
  this_00 = (this->MyScrollBar).Object;
  if (this_00 != (SScrollBar *)0x0) {
    local_38.Value.Left = param_1->Left;
    local_38.Value.Top = param_1->Top;
    local_38.Value.Right = param_1->Right;
    local_38.Value.Bottom = param_1->Bottom;
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SBorder::SetPadding((SBorder *)this_00,&local_38);
  }
  return;
}

// SetState @ 146a1b970

void __thiscall UScrollBar::SetState(UScrollBar *this,float param_1,float param_2)

{
  SScrollBar *pSVar1;
  
  pSVar1 = (this->MyScrollBar).Object;
  if (pSVar1 != (SScrollBar *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a1b982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pSVar1->_padding_ + 0x250))();
    return;
  }
  return;
}

// SetThickness @ 146a1c980

void __thiscall UScrollBar::SetThickness(UScrollBar *this,TVector2<double> *param_1)

{
  SScrollBar *this_00;
  double dVar1;
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Thickness).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Thickness).field0_0x0._s_0.Y = dVar1;
  this_00 = (this->MyScrollBar).Object;
  if (this_00 != (SScrollBar *)0x0) {
    local_38._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_38._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_28 = 1;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    SScrollBar::SetThickness(this_00,(TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0);
  }
  return;
}

// SetWidgetStyle @ 146a1ded0

void __thiscall UScrollBar::SetWidgetStyle(UScrollBar *this,FScrollBarStyle *param_1)

{
  SScrollBar *this_00;
  
  FScrollBarStyle::operator=(&this->WidgetStyle,param_1);
  this_00 = (this->MyScrollBar).Object;
  if (this_00 != (SScrollBar *)0x0) {
    SScrollBar::SetStyle(this_00,param_1);
  }
  return;
}

// StaticRegisterNativesUScrollBar @ 146a1ee80

void __cdecl UScrollBar::StaticRegisterNativesUScrollBar(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UScrollBar_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a24c10

/* WARNING: Removing unreachable block (ram,0x000146a28528) */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScrollBar::SynchronizeProperties(UScrollBar *this)

{
  byte bVar1;
  FName FVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  EVisibility EVar11;
  UObject *pUVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  UFunction *pUVar15;
  undefined7 extraout_var;
  FDelegateToolTip *pFVar16;
  FDelegateToolTip *pFVar17;
  FArguments *pFVar18;
  TSharedRef<SWidget,1> *pTVar19;
  TAttribute<FText> *pTVar20;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar21;
  undefined1 auStackX_8 [16];
  FLLMScope aFStackX_18 [5];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_878;
  FDelegateAllocation FStack_870;
  TSharedPtr<SWidget,1> TStack_860;
  SWidget *pSStack_850;
  TReferenceControllerBase<1> *pTStack_848;
  undefined1 uStack_840;
  undefined1 uStack_83f;
  undefined1 auStack_838 [8];
  ForAnyElementType FStack_830;
  ulonglong uStack_828;
  byte bStack_820;
  undefined1 uStack_81f;
  undefined1 auStack_818 [8];
  ForAnyElementType FStack_810;
  ulonglong uStack_808;
  undefined2 uStack_800;
  undefined1 auStack_7f8 [8];
  FDelegateAllocation FStack_7f0;
  undefined2 uStack_7e0;
  undefined1 auStack_7d8 [8];
  FDelegateAllocation FStack_7d0;
  undefined2 uStack_7c0;
  undefined1 auStack_7b8 [8];
  void *pvStack_7b0;
  int iStack_7a8;
  undefined1 auStack_7a0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_788;
  ForAnyElementType FStack_780;
  ulonglong uStack_778;
  undefined1 auStack_770 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_758;
  ForAnyElementType FStack_750;
  ulonglong uStack_748;
  code *pcStack_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  bool bStack_728;
  undefined1 auStack_718 [16];
  undefined1 auStack_708 [8];
  void *pvStack_700;
  undefined8 uStack_6f8;
  UObject *pUStack_6f0;
  UScrollBar *pUStack_6e8;
  code *pcStack_6e0;
  TRawPtrProxy<FDelegateToolTip> TStack_6d8;
  UObject *pUStack_6d0;
  FMemScope FStack_6c8;
  FName FStack_6c0;
  FName FStack_6b8;
  undefined1 auStack_6b0 [8];
  undefined1 auStack_6a8 [24];
  undefined1 uStack_690;
  undefined1 uStack_68f;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  TVector2<double>_u_0 TStack_670;
  undefined1 uStack_660;
  undefined1 auStack_658 [8];
  void *pvStack_650;
  undefined8 uStack_648;
  TSharedRef<FDelegateToolTip,1> TStack_640;
  TSharedRef<SToolTip,1> TStack_630;
  TSharedRef<SWidget,1> TStack_620;
  TAttribute<FSlateBrush_const_*> TStack_610;
  FDestructionSentinel FStack_5e8;
  FDestructionSentinel FStack_5d0;
  FDestructionSentinel FStack_5b8;
  FDestructionSentinel FStack_5a0;
  FDestructionSentinel FStack_588;
  FDestructionSentinel FStack_570;
  FDelegateAllocation *pFStack_558;
  FDestructionSentinel FStack_550;
  FDelegateAllocation *pFStack_538;
  FDestructionSentinel FStack_530;
  FDelegateAllocation *pFStack_518;
  TAttribute<FMargin> TStack_510;
  undefined1 uStack_4e0;
  undefined1 uStack_4df;
  TDelegateBase<FNotThreadSafeDelegateMode> TStack_4d8;
  SWidget *pSStack_4c0;
  TReferenceControllerBase<1> *pTStack_4b8;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> TStack_4b0;
  undefined1 auStack_498 [24];
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
  undefined1 auStack_450 [24];
  FReadAccessScope FStack_438;
  FReadAccessScope FStack_420;
  FReadAccessScope FStack_408;
  TAttribute<FText> TStack_3f0;
  TAttribute<FText> TStack_3c0;
  FArguments FStack_390;
  
  auStackX_8[0] = Visible;
  auStackX_8[1] = false;
  auStackX_8._2_2_ = 0;
  this->field_0x1a8 = 1;
  UWidget::GetCachedWidget((UWidget *)this,&TStack_860);
  pSVar5 = TStack_860.Object;
  if (TStack_860.Object != (SWidget *)0x0) {
    if ((this->field_0xf9 & 8) != 0) {
      if ((TStack_860.Object == (SWidget *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      auStack_718._0_4_ = ZEXT14((byte)this->field_0xfb);
      auStack_718[4] = true;
      uStack_6f8 = 0;
      auStack_718[8] = true;
      auStack_708 = (undefined1  [8])0x0;
      pvStack_700 = (void *)0x0;
      SWidget::SetCursor(pSVar5,(TAttribute<TOptional<EMouseCursor::Type>_> *)auStack_718);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_708);
      if (pvStack_700 != (void *)0x0) {
        FMemory::Free(pvStack_700);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_708);
    }
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x38);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x38,
                 &FStack_408);
      FVar2.ComparisonIndex.Value = *(uint *)&this->field_0x48;
      FVar2.Number = *(uint *)&this->field_0x4c;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_408);
      pUVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x38);
      uStack_800 = 0x100;
      FStack_7f0.DelegateSize = 0;
      FStack_7f0._12_4_ = 0;
      auStack_7f8 = (undefined1  [8])0x0;
      FStack_7f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_7f8,
                 (FWriteAccessScope *)&FStack_570);
      pFStack_558 = &FStack_7f0;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,&FStack_7f0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar13 + 4) = FVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        puVar13[5] = 0;
        pUStack_6d0 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 5),(FObjectPtr)&pUStack_6d0);
        if ((FVar2 == (FName)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFunctionName != NAME_None",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x56,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pUVar12 != (UObject *)0x0) {
          pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar13 + 5));
          pUVar15 = UObject::FindFunctionChecked(pUVar12,FVar2);
          puVar13[3] = pUVar15;
        }
      }
      if (FStack_570.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_570.Accessor,&FStack_570);
      }
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7f8;
      bVar7 = false;
      bVar10 = true;
      auStack_6b0[0] = (byte)uStack_800;
      auStack_6b0[1] = uStack_800._1_1_;
    }
    else {
      auStack_6b0[1] = 1;
      auStack_6b0[0] = (byte)this->field_0xf9 >> 2 & 1;
      uStack_81f = 1;
      bVar7 = true;
      bVar10 = false;
      uStack_808 = 0;
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_818;
      auStack_818 = (undefined1  [8])0x0;
      FStack_810.Data = (FScriptContainerElement *)0x0;
      bStack_820 = auStack_6b0[0];
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_6a8,pTVar21);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar5->EnabledStateAttribute,pSVar5,(TAttribute<bool> *)auStack_6b0,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_6a8);
    if ((void *)auStack_6a8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_6a8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_6a8);
    if (bVar7) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_818,
                 (FWriteAccessScope *)&FStack_5b8);
      if (((int)uStack_808 != 0) && (FStack_810.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_810.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_810,0,0,0x10);
        uStack_808 = uStack_808 & 0xffffffff00000000;
      }
      if (FStack_5b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5b8.Accessor,&FStack_5b8);
      }
      if (FStack_810.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_810.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_818);
    }
    if (bVar10) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7f8);
      if (FStack_7f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_7f0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7f8);
    }
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcStack_6e0 = *(code **)(pSVar5->_padding_ + 0x1c8);
    bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x98);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x98,
                 &FStack_438);
      FVar3.ComparisonIndex.Value = *(uint *)&this->field_0xa8;
      FVar3.Number = *(uint *)&this->field_0xac;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_438);
      pUVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x98);
      uStack_7e0 = 0x100;
      FStack_7d0.DelegateSize = 0;
      FStack_7d0._12_4_ = 0;
      auStack_7d8 = (undefined1  [8])0x0;
      FStack_7d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_7d8,
                 (FWriteAccessScope *)&FStack_550);
      pFStack_538 = &FStack_7d0;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,&FStack_7d0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar13 + 4) = FVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        puVar13[5] = 0;
        pUStack_6f0 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 5),(FObjectPtr)&pUStack_6f0);
        if ((FVar3 == (FName)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFunctionName != NAME_None",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x56,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pUVar12 != (UObject *)0x0) {
          pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar13 + 5));
          pUVar15 = UObject::FindFunctionChecked(pUVar12,FVar3);
          puVar13[3] = pUVar15;
        }
      }
      if (FStack_550.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_550.Accessor,&FStack_550);
      }
      pcStack_738 = UWidget::ConvertVisibility;
      uStack_72c = TStack_620.SharedReferenceCount.ReferenceController._4_4_;
      uStack_730 = 0;
      TStack_878.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_870.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_870.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&FStack_530);
      pFStack_518 = &FStack_870;
      puVar13 = UE::Core::Private::DelegateAllocate(0x48,&FStack_870);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TAttribute_W4ESlateVisibility______6B_
        ;
        *(undefined1 *)(puVar13 + 1) = (undefined1)uStack_7e0;
        *(undefined1 *)((longlong)puVar13 + 9) = uStack_7e0._1_1_;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar13 + 2),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7d8);
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[5] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__00__CBVUWidget____A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TAttribute_W4ESlateVisibility______6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[6] = 0;
        pUStack_6e8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 6),(FObjectPtr)&pUStack_6e8);
        puVar13[7] = pcStack_738;
        puVar13[8] = CONCAT44(uStack_72c,uStack_730);
      }
      if (FStack_530.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_530.Accessor,&FStack_530);
      }
      uStack_7c0 = 0x119;
      auStack_7b8 = (undefined1  [8])0x0;
      pvStack_7b0 = (void *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&pcStack_738);
      if (pvStack_7b0 != (void *)0x0) {
        FMemory::Free(pvStack_7b0);
      }
      pvStack_7b0 = (void *)FStack_870.DelegateAllocator;
      iStack_7a8 = FStack_870.DelegateSize;
      FStack_870.DelegateSize = 0;
      FStack_870.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (bStack_728 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_72c,uStack_730),
                   (FDestructionSentinel *)&pcStack_738);
      }
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7b8;
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      bVar10 = false;
      uStack_4e0 = (undefined1)uStack_7c0;
      uStack_4df = uStack_7c0._1_1_;
    }
    else {
      uStack_690 = this->field_0xfd;
      uStack_68f = 1;
      uStack_678 = 0;
      uStack_688 = 0;
      uStack_680 = 0;
      EVar11 = UWidget::ConvertVisibility
                         ((UWidget *)this,(TAttribute<ESlateVisibility> *)auStackX_8);
      uStack_4df = 1;
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
      bVar10 = true;
      uStack_4e0 = *(undefined1 *)CONCAT71(extraout_var,EVar11.Value.Value);
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_838;
      uStack_828 = 0;
      uStack_83f = 1;
      auStack_838 = (undefined1  [8])0x0;
      FStack_830.Data = (FScriptContainerElement *)0x0;
      uStack_840 = uStack_4e0;
    }
    pFVar17 = (FDelegateToolTip *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&TStack_4d8,pTVar21);
    (*pcStack_6e0)(pSVar5,&uStack_4e0);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_838,
                 (FWriteAccessScope *)&FStack_5a0);
      if (((int)uStack_828 != 0) && (FStack_830.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_830.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_830,0,0,0x10);
        uStack_828 = uStack_828 & 0xffffffff00000000;
      }
      if (FStack_5a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5a0.Accessor,&FStack_5a0);
      }
      if (FStack_830.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_830.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_838);
    }
    if (bVar7) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7b8);
      if ((ForElementType<TAlignedBytes<16,16>_>)pvStack_7b0 !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free(pvStack_7b0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7b8);
    }
    if (bVar8) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&FStack_5d0);
      if ((FStack_870.DelegateSize != 0) &&
         (FStack_870.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_870.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_870,0,0,0x10);
        FStack_870.DelegateSize = 0;
      }
      if (FStack_5d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5d0.Accessor,&FStack_5d0);
      }
      if (FStack_870.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_870.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_878.AccessDetector);
    }
    if (bVar9) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7d8);
      if (FStack_7d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_7d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7d8);
    }
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SWidget::SetClipping(pSVar5,this->field_0xfc);
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SWidget::SetPixelSnapping(pSVar5,this->field_0xfe);
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pSVar5->FlowDirectionPreference != this->field_0xf8) {
      pSVar5->FlowDirectionPreference = this->field_0xf8;
      SWidget::Invalidate(pSVar5,Paint);
    }
    bVar1 = pSVar5->field_0x30;
    if (((bVar1 ^ this->field_0xf9) >> 4 & 1) != 0) {
      pSVar5->field_0x30 = (this->field_0xf9 & 0xf0 ^ bVar1) & 0x10 ^ bVar1;
      SWidget::Invalidate(pSVar5,PaintAndVolatility);
    }
    if (*(float *)&this->field_0x100 != pSVar5->RenderOpacity) {
      pSVar5->RenderOpacity = *(float *)&this->field_0x100;
      SWidget::Invalidate(pSVar5,Paint);
    }
    UWidget::UpdateRenderTransform((UWidget *)this);
    TStack_670._s_0.X = (double)*(undefined8 *)&this->field_0xe8;
    TStack_670._s_0.Y = (double)*(undefined8 *)&this->field_0xf0;
    uStack_660 = 1;
    uStack_648 = 0;
    auStack_658 = (undefined1  [8])0x0;
    pvStack_650 = (void *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar5->RenderTransformPivotAttribute,pSVar5,
             (TAttribute<UE::Math::TVector2<double>_> *)&TStack_670._s_0,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_658);
    if (pvStack_650 != (void *)0x0) {
      FMemory::Free(pvStack_650);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_658);
    bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x80);
    if (bVar10) {
      pFVar16 = ::operator_new(0x30);
      if (pFVar16 != (FDelegateToolTip *)0x0) {
        *(undefined8 *)&pFVar16->ToolTipWidgetDelegate = 0;
        pFVar16->_padding_ = (longlong)&___7FDelegateToolTip__6B_;
        *(undefined8 *)&(pFVar16->ToolTipWidgetDelegate).field_0x8 = 0;
        *(undefined8 *)&(pFVar16->ToolTipWidgetDelegate).field_0x10 = 0;
        (pFVar16->CachedToolTip).Object = (SWidget *)0x0;
        (pFVar16->CachedToolTip).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar17 = pFVar16;
      }
      TStack_6d8.Object = pFVar17;
      TSharedRef<FDelegateToolTip,1>::TSharedRef<FDelegateToolTip,1><FDelegateToolTip>
                (&TStack_640,&TStack_6d8);
      TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &(TStack_640.Object)->ToolTipWidgetDelegate,
                 (TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x80);
      auStack_7a0._0_8_ = TStack_640.Object;
      auStack_7a0._8_8_ = TStack_640.SharedReferenceCount.ReferenceController;
      if (TStack_640.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_640.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_640.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      auStack_7a0[0x10] = true;
      uStack_778 = 0;
      TStack_788.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_780.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(pSVar5,(TAttribute<TSharedPtr<IToolTip,1>_> *)auStack_7a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_788,(FWriteAccessScope *)&FStack_588);
      if (((int)uStack_778 != 0) && (FStack_780.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_780.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_780,0,0,0x10);
        uStack_778 = uStack_778 & 0xffffffff00000000;
      }
      if (FStack_588.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_588.Accessor,&FStack_588);
      }
      if (FStack_780.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_780.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_788.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_7a0._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_640.SharedReferenceCount.ReferenceController);
    }
    else if (*(longlong *)&this->field_0x78 == 0) {
      bVar10 = FText::IsEmpty((FText *)&this->field_0x68);
      if ((!bVar10) ||
         (bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x50),
         bVar10)) {
        bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x50);
        if (!bVar10) {
          pTVar20 = TAttribute<FText>::TAttribute<FText><FText>
                              (&TStack_3f0,(FText *)&this->field_0x68);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x50,
                     &FStack_420);
          FStack_6c0.ComparisonIndex.Value = *(uint *)&this->field_0x60;
          FStack_6c0.Number = *(uint *)&this->field_0x64;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&FStack_420);
          pUVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x50);
          pTVar20 = TAttribute<FText>::Create<UObject>(&TStack_3c0,pUVar12,&FStack_6c0);
        }
        SWidget::SetToolTipText(pSVar5,pTVar20);
        if (bVar10) {
          TAttribute<FText>::~TAttribute<FText>(&TStack_3c0);
        }
      }
    }
    else {
      pFVar18 = SToolTip::FArguments::FArguments(&FStack_390);
      TStack_510.bIsSet = true;
      TStack_510.Getter._16_8_ = 0;
      TStack_510.Value.Left = 0.0;
      TStack_510.Value.Top = 0.0;
      TStack_510.Value.Right = 0.0;
      TStack_510.Value.Bottom = 0.0;
      TStack_510.Getter._0_8_ = 0;
      TStack_510.Getter._8_8_ = 0;
      pFVar18 = SToolTip::FArguments::TextMargin(pFVar18,&TStack_510);
      TStack_610.Value = (FSlateBrush *)0x0;
      TStack_610.bIsSet = true;
      TStack_610.Getter._16_8_ = 0;
      TStack_610.Getter._0_8_ = 0;
      TStack_610.Getter._8_8_ = 0;
      pFVar18 = SToolTip::FArguments::BorderImage(pFVar18,&TStack_610);
      pTVar19 = UWidget::TakeWidget(*(UWidget **)&this->field_0x78,&TStack_620);
      pTVar4 = (pTVar19->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar19->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSStack_4c0 = (pFVar18->_Content).Widget.Object;
      pTStack_4b8 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar18->_Content).Widget.Object = pSVar5;
      (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_4b8);
      FLLMScope::FLLMScope
                (aFStackX_18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      FStack_6b8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&FStack_6c8,&FStack_6b8,true);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
                (&TStack_4b0,"SToolTip",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                 ,0x5f8,(T0RequiredArgs *)(auStackX_8 + 8));
      FMemScope::~FMemScope(&FStack_6c8);
      FLLMScope::~FLLMScope(aFStackX_18);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::operator<<=
                (&TStack_4b0,&TStack_630,pFVar18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_4b0._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(TStack_620.SharedReferenceCount.ReferenceController._4_4_,
                          TStack_620.SharedReferenceCount.ReferenceController._0_4_));
      SToolTip::FArguments::~FArguments(&FStack_390);
      if ((TStack_860.Object == (SWidget *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      auStack_770._8_8_ = TStack_630.SharedReferenceCount.ReferenceController;
      auStack_770._0_8_ = &(TStack_630.Object)->_padding_;
      if (TStack_630.Object == (SToolTip *)0x0) {
        auStack_770._0_8_ = pFVar17;
      }
      if (TStack_630.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      auStack_770[0x10] = true;
      uStack_748 = 0;
      TStack_758.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_750.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(TStack_860.Object,(TAttribute<TSharedPtr<IToolTip,1>_> *)auStack_770);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_758,(FWriteAccessScope *)&FStack_5e8);
      if (((int)uStack_748 != 0) && (FStack_750.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_750.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_750,0,0,0x10);
        uStack_748 = uStack_748 & 0xffffffff00000000;
      }
      if (FStack_5e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5e8.Accessor,&FStack_5e8);
      }
      if (FStack_750.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_750.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_758.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_770._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_630.SharedReferenceCount.ReferenceController);
    }
    if (*(longlong *)&this->field_0x108 != 0) {
      (**(code **)(*(longlong *)this + 0x308))(this,&pSStack_850);
      if (pSStack_850 != (SWidget *)0x0) {
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pSVar5 = pSStack_850;
        pTVar20 = USlateAccessibleWidgetData::CreateAccessibleTextAttribute
                            (*(USlateAccessibleWidgetData **)&this->field_0x108,
                             (TAttribute<FText> *)auStack_498);
        SWidget::SetAccessibleBehavior
                  (pSVar5,*(EAccessibleBehavior *)(*(longlong *)&this->field_0x108 + 0x29),pTVar20,
                   Main);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_480);
        if ((void *)auStack_480._8_8_ != (void *)0x0) {
          FMemory::Free((void *)auStack_480._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)auStack_480);
        if ((ITextData *)auStack_498._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)auStack_498._0_8_ + 0x10))();
        }
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pSVar5 = pSStack_850;
        pTVar20 = USlateAccessibleWidgetData::CreateAccessibleSummaryTextAttribute
                            (*(USlateAccessibleWidgetData **)&this->field_0x108,
                             (TAttribute<FText> *)auStack_468);
        SWidget::SetAccessibleBehavior
                  (pSVar5,*(EAccessibleBehavior *)(*(longlong *)&this->field_0x108 + 0x2a),pTVar20,
                   Summary);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_450);
        if ((void *)auStack_450._8_8_ != (void *)0x0) {
          FMemory::Free((void *)auStack_450._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)auStack_450);
        if ((ITextData *)auStack_468._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)auStack_468._0_8_ + 0x10))();
        }
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        SWidget::SetCanChildrenBeAccessible
                  (pSStack_850,*(bool *)(*(longlong *)&this->field_0x108 + 0x28));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_848);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_860.SharedReferenceCount.ReferenceController);
  return;
}

// execSetState @ 146a42e20

void __cdecl UScrollBar::execSetState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x34].field_0x8;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x250))(plVar2,local_res10[0],local_res8[0],0);
  }
  return;
}

// operator() @ 1504f6a10

bool __thiscall `UScrollBar::InitOrientation'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2425059567500001462>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2425059567500001462>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

