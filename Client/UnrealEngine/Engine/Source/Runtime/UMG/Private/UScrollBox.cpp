// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 151

// GetScrollAnimationInterpolationSpeed_WrapperImpl @ 14696c770

void __cdecl
UScrollBox::GetScrollAnimationInterpolationSpeed_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1c8);
  return;
}

// SetScrollAnimationInterpolationSpeed_WrapperImpl @ 14696c780

void __cdecl
UScrollBox::SetScrollAnimationInterpolationSpeed_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 0x1c8) = uVar1;
  if (*(longlong *)((longlong)param_1 + 0xbd8) == 0) {
    return;
  }
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 0xbd8) + 0x460) = uVar1;
  return;
}

// GetbEnableTouchScrolling_WrapperImpl @ 14696c7b0

void __cdecl UScrollBox::GetbEnableTouchScrolling_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1cc);
  return;
}

// SetbEnableTouchScrolling_WrapperImpl @ 14696c7c0

void __cdecl UScrollBox::SetbEnableTouchScrolling_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStackX_10 [24];
  
  uVar1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x1cc) = uVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0xbd8);
  if (lVar2 == 0) {
    return;
  }
  *(undefined1 *)(lVar2 + 0x45c) = uVar1;
  if (*(char *)(lVar2 + 0x2f0) != '\0') {
    `SScrollBox::SetIsTouchScrollingEnabled'::__l2::<lambda_1>::operator()(auStackX_10);
    return;
  }
  return;
}

// GetbConsumePointerInput_WrapperImpl @ 14696c7e0

void __cdecl UScrollBox::GetbConsumePointerInput_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1cd);
  return;
}

// SetbConsumePointerInput_WrapperImpl @ 14696c7f0

void __cdecl UScrollBox::SetbConsumePointerInput_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x1cd) = uVar1;
  if (*(longlong *)((longlong)param_1 + 0xbd8) != 0) {
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0xbd8) + 0x45d) = uVar1;
  }
  return;
}

// GetAnalogMouseWheelKey_WrapperImpl @ 14696c820

void __cdecl UScrollBox::GetAnalogMouseWheelKey_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 local_20;
  FSharedReferencer<1> local_18 [3];
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x1d0);
  local_20 = *(undefined8 *)((longlong)param_1 + 0x1d8);
  local_18[0].ReferenceController = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x1e0);
  if (local_18[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_18[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)param_2 = uVar1;
  if ((undefined8 *)((longlong)param_2 + 8) != &local_20) {
    *(undefined8 *)((longlong)param_2 + 8) = local_20;
    local_20 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_2 + 0x10),local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18[0].ReferenceController);
  return;
}

// SetAnalogMouseWheelKey_WrapperImpl @ 14696c890

void __cdecl UScrollBox::SetAnalogMouseWheelKey_WrapperImpl(void *param_1,void *param_2)

{
  FKey local_28;
  
  local_28.KeyName = *(FName *)param_2;
  local_28.KeyDetails.Object = *(FKeyDetails **)((longlong)param_2 + 8);
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_2 + 0x10);
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  SetAnalogMouseWheelKey(param_1,&local_28);
  return;
}

// GetbIsFocusable_WrapperImpl @ 14696c910

void __cdecl UScrollBox::GetbIsFocusable_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1e8);
  return;
}

// SetbIsFocusable_WrapperImpl @ 14696c920

void __cdecl UScrollBox::SetbIsFocusable_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x1e8) = cVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0xbd8);
  if (lVar2 == 0) {
    return;
  }
  *(byte *)(lVar2 + 0x465) = *(byte *)(lVar2 + 0x465) & 0xfd;
  *(byte *)(lVar2 + 0x465) = *(byte *)(lVar2 + 0x465) | cVar1 * '\x02';
  return;
}

// GetWidgetStyle_WrapperImpl @ 14696c940

void __cdecl UScrollBox::GetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FScrollBoxStyle local_2f8;
  
  local_2f8.BarThickness = *(float *)((longlong)param_1 + 0x1f8);
  local_2f8._padding_ = (longlong)&___7FScrollBoxStyle__6B_;
  FSlateBrush::FSlateBrush(&local_2f8.TopShadowBrush,(FSlateBrush *)((longlong)param_1 + 0x200));
  FSlateBrush::FSlateBrush(&local_2f8.BottomShadowBrush,(FSlateBrush *)((longlong)param_1 + 0x2b0));
  FSlateBrush::FSlateBrush(&local_2f8.LeftShadowBrush,(FSlateBrush *)((longlong)param_1 + 0x360));
  FSlateBrush::FSlateBrush(&local_2f8.RightShadowBrush,(FSlateBrush *)((longlong)param_1 + 0x410));
  local_2f8.HorizontalScrolledContentPadding._0_8_ = *(undefined8 *)((longlong)param_1 + 0x4c0);
  local_2f8.HorizontalScrolledContentPadding._8_8_ = *(undefined8 *)((longlong)param_1 + 0x4c8);
  local_2f8.VerticalScrolledContentPadding._0_8_ = *(undefined8 *)((longlong)param_1 + 0x4d0);
  local_2f8.VerticalScrolledContentPadding._8_8_ = *(undefined8 *)((longlong)param_1 + 0x4d8);
  FScrollBoxStyle::operator=(param_2,&local_2f8);
  FScrollBoxStyle::~FScrollBoxStyle(&local_2f8);
  return;
}

// SetWidgetStyle_WrapperImpl @ 14696ca10

void __cdecl UScrollBox::SetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FScrollBoxStyle::operator=((FScrollBoxStyle *)((longlong)param_1 + 0x1f0),param_2);
  if (*(SScrollBox **)((longlong)param_1 + 0xbd8) != (SScrollBox *)0x0) {
    SScrollBox::InvalidateStyle(*(SScrollBox **)((longlong)param_1 + 0xbd8));
    return;
  }
  return;
}

// GetWidgetBarStyle_WrapperImpl @ 14696ca50

void __cdecl UScrollBox::GetWidgetBarStyle_WrapperImpl(void *param_1,void *param_2)

{
  FScrollBarStyle *pFVar1;
  FScrollBarStyle local_658;
  
  pFVar1 = FScrollBarStyle::FScrollBarStyle
                     (&local_658,(FScrollBarStyle *)((longlong)param_1 + 0x4e0));
  FScrollBarStyle::operator=(param_2,pFVar1);
  FScrollBarStyle::~FScrollBarStyle(&local_658);
  return;
}

// SetWidgetBarStyle_WrapperImpl @ 14696cab0

void __cdecl UScrollBox::SetWidgetBarStyle_WrapperImpl(void *param_1,void *param_2)

{
  FScrollBarStyle::operator=((FScrollBarStyle *)((longlong)param_1 + 0x4e0),param_2);
  if (*(SScrollBox **)((longlong)param_1 + 0xbd8) != (SScrollBox *)0x0) {
    SScrollBox::InvalidateScrollBarStyle(*(SScrollBox **)((longlong)param_1 + 0xbd8));
    return;
  }
  return;
}

// GetOrientation_WrapperImpl @ 14696caf0

void __cdecl UScrollBox::GetOrientation_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb30);
  return;
}

// SetOrientation_WrapperImpl @ 14696cb00

void __cdecl UScrollBox::SetOrientation_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0xb30) = bVar1;
  if (*(SScrollBox **)((longlong)param_1 + 0xbd8) != (SScrollBox *)0x0) {
    SScrollBox::SetOrientation(*(SScrollBox **)((longlong)param_1 + 0xbd8),(uint)bVar1);
    return;
  }
  return;
}

// GetScrollBarVisibility_WrapperImpl @ 14696cc30

void __cdecl UScrollBox::GetScrollBarVisibility_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb31);
  return;
}

// SetScrollBarVisibility_WrapperImpl @ 14696cc80

void __cdecl UScrollBox::SetScrollBarVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetScrollBarVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// GetConsumeMouseWheel_WrapperImpl @ 14696cc90

void __cdecl UScrollBox::GetConsumeMouseWheel_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb32);
  return;
}

// SetConsumeMouseWheel_WrapperImpl @ 14696cca0

void __cdecl UScrollBox::SetConsumeMouseWheel_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0xb32) = uVar1;
  if (*(longlong *)((longlong)param_1 + 0xbd8) == 0) {
    return;
  }
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 0xbd8) + 0x3b0) = uVar1;
  return;
}

// GetScrollbarThickness_WrapperImpl @ 14696cd00

void __cdecl UScrollBox::GetScrollbarThickness_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xb40);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0xb38);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetScrollbarThickness_WrapperImpl @ 14696cd20

void __cdecl UScrollBox::SetScrollbarThickness_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  FDeprecateVector2DParameter FVar2;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0xb38) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0xb40) = uVar1;
  if (*(SScrollBox **)((longlong)param_1 + 0xbd8) != (SScrollBox *)0x0) {
    FVar2._4_4_ = (float)*(double *)((longlong)param_1 + 0xb40);
    FVar2._0_4_ = (float)*(double *)((longlong)param_1 + 0xb38);
    SScrollBox::SetScrollBarThickness(*(SScrollBox **)((longlong)param_1 + 0xbd8),FVar2);
    return;
  }
  return;
}

// GetScrollbarPadding_WrapperImpl @ 14696cd70

void __cdecl UScrollBox::GetScrollbarPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xb50);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0xb48);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetScrollbarPadding_WrapperImpl @ 14696cd90

void __cdecl UScrollBox::SetScrollbarPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin *pFVar1;
  SScrollBox *this;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)((longlong)param_2 + 8);
  pFVar1 = (FMargin *)((longlong)param_1 + 0xb48);
  this = *(SScrollBox **)((longlong)param_1 + 0xbd8);
  pFVar1->Left = (float)(int)uVar2;
  pFVar1->Top = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined8 *)((longlong)param_1 + 0xb50) = uVar3;
  if (this != (SScrollBox *)0x0) {
    SScrollBox::SetScrollBarPadding(this,pFVar1);
    return;
  }
  return;
}

// GetAlwaysShowScrollbar_WrapperImpl @ 14696cdc0

void __cdecl UScrollBox::GetAlwaysShowScrollbar_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb58);
  return;
}

// SetAlwaysShowScrollbar_WrapperImpl @ 14696cdd0

void __cdecl UScrollBox::SetAlwaysShowScrollbar_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *(bool *)param_2;
  *(bool *)((longlong)param_1 + 0xb58) = bVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0xbd8);
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x2d8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SScrollBar::SetScrollBarAlwaysVisible(*(SScrollBar **)(lVar2 + 0x2d8),bVar1);
  return;
}

// GetAlwaysShowScrollbarTrack_WrapperImpl @ 14696cdf0

void __cdecl UScrollBox::GetAlwaysShowScrollbarTrack_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb59);
  return;
}

// SetAlwaysShowScrollbarTrack_WrapperImpl @ 14696ce00

void __cdecl UScrollBox::SetAlwaysShowScrollbarTrack_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  uVar1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0xb59) = uVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0xbd8);
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x2d8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined1 *)(*(longlong *)(lVar2 + 0x2d8) + 0x391) = uVar1;
    return;
  }
  *(undefined1 *)(*(longlong *)(lVar2 + 0x2d8) + 0x391) = uVar1;
  return;
}

// GetAllowOverscroll_WrapperImpl @ 14696ce20

void __cdecl UScrollBox::GetAllowOverscroll_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb5a);
  return;
}

// SetAllowOverscroll_WrapperImpl @ 14696ce30

void __cdecl UScrollBox::SetAllowOverscroll_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0xb5a) = cVar1;
  if (*(SScrollBox **)((longlong)param_1 + 0xbd8) != (SScrollBox *)0x0) {
    SScrollBox::SetAllowOverscroll(*(SScrollBox **)((longlong)param_1 + 0xbd8),cVar1 == '\0');
    return;
  }
  return;
}

// GetBackPadScrolling_WrapperImpl @ 14696ce60

void __cdecl UScrollBox::GetBackPadScrolling_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb5b);
  return;
}

// GetFrontPadScrolling_WrapperImpl @ 14696cef0

void __cdecl UScrollBox::GetFrontPadScrolling_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb5c);
  return;
}

// GetbAnimateWheelScrolling_WrapperImpl @ 14696cf40

void __cdecl UScrollBox::GetbAnimateWheelScrolling_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb5d);
  return;
}

// SetbAnimateWheelScrolling_WrapperImpl @ 14696d090

void __cdecl UScrollBox::SetbAnimateWheelScrolling_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0xb5d) = bVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0xbd8);
  if (lVar2 == 0) {
    return;
  }
  *(byte *)(lVar2 + 0x464) = *(byte *)(lVar2 + 0x464) & 0xfe;
  *(byte *)(lVar2 + 0x464) = *(byte *)(lVar2 + 0x464) | bVar1;
  return;
}

// GetNavigationDestination_WrapperImpl @ 14696d0f0

void __cdecl UScrollBox::GetNavigationDestination_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb5e);
  return;
}

// SetNavigationDestination_WrapperImpl @ 14696d100

void __cdecl UScrollBox::SetNavigationDestination_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0xb5e) = uVar1;
  if (*(longlong *)((longlong)param_1 + 0xbd8) == 0) {
    return;
  }
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 0xbd8) + 0x32c) = uVar1;
  return;
}

// GetNavigationScrollPadding_WrapperImpl @ 14696d120

void __cdecl UScrollBox::GetNavigationScrollPadding_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0xb60);
  return;
}

// GetScrollWhenFocusChanges_WrapperImpl @ 14696d130

void __cdecl UScrollBox::GetScrollWhenFocusChanges_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb64);
  return;
}

// SetScrollWhenFocusChanges_WrapperImpl @ 14696d1b0

void __cdecl UScrollBox::SetScrollWhenFocusChanges_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0xb64) = uVar1;
  if (*(longlong *)((longlong)param_1 + 0xbd8) == 0) {
    return;
  }
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 0xbd8) + 0x32d) = uVar1;
  return;
}

// GetbAllowRightClickDragScrolling_WrapperImpl @ 14696d1e0

void __cdecl UScrollBox::GetbAllowRightClickDragScrolling_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb65);
  return;
}

// SetbAllowRightClickDragScrolling_WrapperImpl @ 14696d1f0

void __cdecl UScrollBox::SetbAllowRightClickDragScrolling_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0xb65) = cVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0xbd8);
  if (lVar2 == 0) {
    return;
  }
  *(byte *)(lVar2 + 0x464) = *(byte *)(lVar2 + 0x464) & 0x7f;
  *(byte *)(lVar2 + 0x464) = *(byte *)(lVar2 + 0x464) | cVar1 << 7;
  return;
}

// GetWheelScrollMultiplier_WrapperImpl @ 14696d210

void __cdecl UScrollBox::GetWheelScrollMultiplier_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0xb68);
  return;
}

// SetWheelScrollMultiplier_WrapperImpl @ 14696d220

void __cdecl UScrollBox::SetWheelScrollMultiplier_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 0xb68) = uVar1;
  if (*(longlong *)((longlong)param_1 + 0xbd8) == 0) {
    return;
  }
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 0xbd8) + 0x458) = uVar1;
  return;
}

// StaticClass @ 14696d250

UClass * __cdecl UScrollBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrollBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScrollBox",&Z_Registration_Info_UClass_UScrollBox.InnerSingleton,
               StaticRegisterNativesUScrollBox,0xbf0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UScrollBox>,InternalVTableHelperCtorCaller<UScrollBox>,local_res8
               ,UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrollBox.InnerSingleton;
}

// UScrollBox @ 14698d190

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UScrollBox * __thiscall UScrollBox::UScrollBox(UScrollBox *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->ScrollAnimationInterpolationSpeed = 15.0;
  *(undefined8 *)&this->field_0x1b0 = 0;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined8 *)&this->field_0x1b8 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  this->bEnableTouchScrolling = true;
  this->bConsumePointerInput = true;
  (this->AnalogMouseWheelKey).KeyName.ComparisonIndex = 0;
  (this->AnalogMouseWheelKey).KeyName.Number = 0;
  (this->AnalogMouseWheelKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->AnalogMouseWheelKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FScrollBoxStyle::FScrollBoxStyle(&this->WidgetStyle);
  FScrollBarStyle::FScrollBarStyle(&this->WidgetBarStyle);
  (this->ScrollbarPadding).Left = 0.0;
  (this->ScrollbarPadding).Top = 0.0;
  (this->ScrollbarPadding).Right = 0.0;
  (this->ScrollbarPadding).Bottom = 0.0;
  this->bAnimateWheelScrolling = false;
  this->WheelScrollMultiplier = 1.0;
  *(undefined8 *)&this->OnUserScrolled = 0;
  *(undefined8 *)&(this->OnUserScrolled).field_0x8 = 0;
  *(undefined8 *)&(this->OnUserScrolled).field_0x10 = 0;
  *(undefined8 *)&this->OnScrollBarVisibilityChanged = 0;
  *(undefined8 *)&(this->OnScrollBarVisibilityChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnScrollBarVisibilityChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnFocusReceived = 0;
  *(undefined8 *)&(this->OnFocusReceived).field_0x8 = 0;
  *(undefined8 *)&(this->OnFocusReceived).field_0x10 = 0;
  *(undefined8 *)&this->OnFocusLost = 0;
  *(undefined8 *)&(this->OnFocusLost).field_0x8 = 0;
  *(undefined8 *)&(this->OnFocusLost).field_0x10 = 0;
  (this->MyScrollBox).Object = (SScrollBox *)0x0;
  (this->MyScrollBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UScrollBox @ 14698d2a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UScrollBox * __thiscall UScrollBox::UScrollBox(UScrollBox *this,FObjectInitializer *param_1)

{
  FDefaultStyleCache *pFVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->field_0x1c0 = 1;
  *(undefined8 *)&this->field_0x1b0 = 0;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined8 *)&this->field_0x1b8 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  this->ScrollAnimationInterpolationSpeed = 15.0;
  this->bEnableTouchScrolling = true;
  this->bConsumePointerInput = true;
  (this->AnalogMouseWheelKey).KeyName.ComparisonIndex = 0;
  (this->AnalogMouseWheelKey).KeyName.Number = 0;
  (this->AnalogMouseWheelKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->AnalogMouseWheelKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FScrollBoxStyle::FScrollBoxStyle(&this->WidgetStyle);
  FScrollBarStyle::FScrollBarStyle(&this->WidgetBarStyle);
  this->field_0xf9 = this->field_0xf9 & 0xfe;
  (this->ScrollbarThickness).field0_0x0._s_0.X = 9.0;
  (this->ScrollbarThickness).field0_0x0._s_0.Y = 9.0;
  this->Orientation = '\x01';
  this->ScrollBarVisibility = Visible;
  this->ConsumeMouseWheel = WhenScrollingPossible;
  (this->ScrollbarPadding).Left = 2.0;
  (this->ScrollbarPadding).Top = 2.0;
  (this->ScrollbarPadding).Right = 2.0;
  (this->ScrollbarPadding).Bottom = 2.0;
  this->AlwaysShowScrollbar = false;
  this->AlwaysShowScrollbarTrack = false;
  this->AllowOverscroll = true;
  this->BackPadScrolling = false;
  this->FrontPadScrolling = false;
  this->bAnimateWheelScrolling = false;
  this->NavigationDestination = IntoView;
  this->NavigationScrollPadding = 0.0;
  this->ScrollWhenFocusChanges = NoScroll;
  this->WheelScrollMultiplier = 1.0;
  *(undefined8 *)&this->OnUserScrolled = 0;
  *(undefined8 *)&(this->OnUserScrolled).field_0x8 = 0;
  *(undefined8 *)&(this->OnUserScrolled).field_0x10 = 0;
  *(undefined8 *)&this->OnScrollBarVisibilityChanged = 0;
  *(undefined8 *)&(this->OnScrollBarVisibilityChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnScrollBarVisibilityChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnFocusReceived = 0;
  *(undefined8 *)&(this->OnFocusReceived).field_0x8 = 0;
  *(undefined8 *)&(this->OnFocusReceived).field_0x10 = 0;
  *(undefined8 *)&this->OnFocusLost = 0;
  *(undefined8 *)&(this->OnFocusLost).field_0x8 = 0;
  *(undefined8 *)&(this->OnFocusLost).field_0x10 = 0;
  (this->MyScrollBox).Object = (SScrollBox *)0x0;
  (this->MyScrollBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UWidget::SetVisibilityInternal((UWidget *)this,Visible);
  UWidget::SetClipping((UWidget *)this,ClipToBounds);
  pFVar1 = UE::Slate::Private::FDefaultStyleCache::Get();
  FScrollBoxStyle::operator=(&this->WidgetStyle,&(pFVar1->Runtime).ScrollBoxStyle);
  pFVar1 = UE::Slate::Private::FDefaultStyleCache::Get();
  FScrollBarStyle::operator=(&this->WidgetBarStyle,&(pFVar1->Runtime).ScrollBarStyle);
  this->bAllowRightClickDragScrolling = true;
  return this;
}

// ~UScrollBox @ 1469940a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScrollBox::~UScrollBox(UScrollBox *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyScrollBox).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnFocusLost).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFocusLost);
  pvVar1 = *(void **)&(this->OnFocusReceived).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFocusReceived);
  pvVar1 = *(void **)&(this->OnScrollBarVisibilityChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnScrollBarVisibilityChanged);
  pvVar1 = *(void **)&(this->OnUserScrolled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUserScrolled);
  FScrollBarStyle::~FScrollBarStyle(&this->WidgetBarStyle);
  FScrollBoxStyle::~FScrollBoxStyle(&this->WidgetStyle);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalogMouseWheelKey).KeyDetails.SharedReferenceCount.ReferenceController);
  *(undefined ***)this = &UPanelWidget::_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if (*(void **)&this->field_0x1b0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1b0);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// EndInertialScrolling @ 1469bf300

void __thiscall UScrollBox::EndInertialScrolling(UScrollBox *this)

{
  FActiveTimerHandle *pFVar1;
  SScrollBox *this_00;
  code *pcVar2;
  undefined1 *puVar3;
  TSharedPtr<FActiveTimerHandle,1> *pTVar4;
  bool bVar5;
  TSharedRef<FActiveTimerHandle,1> TStack_28;
  longlong lStack_18;
  FSharedReferencer<1> FStack_10;
  
  this_00 = (this->MyScrollBox).Object;
  if (this_00 == (SScrollBox *)0x0) {
    return;
  }
  this_00->bIsScrolling = false;
  this_00->bIsScrollingActiveTimerRegistered = false;
  SWidget::Invalidate((SWidget *)this_00,LayoutAndVolatility);
  pTVar4 = &this_00->UpdateInertialScrollHandle;
  pFVar1 = pTVar4->Object;
  if (pFVar1 != (FActiveTimerHandle *)0x0) {
    TStack_28.SharedReferenceCount.ReferenceController =
         (this_00->UpdateInertialScrollHandle).SharedReferenceCount.ReferenceController;
    if (TStack_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TStack_28.Object = pFVar1;
    if (pFVar1 == (FActiveTimerHandle *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SWidget::UnRegisterActiveTimer((SWidget *)this_00,&TStack_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_28.SharedReferenceCount.ReferenceController);
    lStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TSharedPtr<FActiveTimerHandle,1> *)&lStack_18) {
      pTVar4->Object = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this_00->UpdateInertialScrollHandle).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  FInertialScrollManager::ClearScrollVelocity
            ((FInertialScrollManager *)(&this_00->field_0x218 + 0xe8),false);
  if (((TSharedPtr<SScrollPanel,1> *)(&this_00->field_0x218 + 0xb0))->Object == (SScrollPanel *)0x0)
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(float *)(&this_00->field_0x218 + 0x90) =
       ((TSharedPtr<SScrollPanel,1> *)(&this_00->field_0x218 + 0xb0))->Object->PhysicalOffset;
  return;
}

// GetAnalogMouseWheelKey @ 1469cd090

FKey * __thiscall UScrollBox::GetAnalogMouseWheelKey(UScrollBox *this,FKey *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->KeyName = (this->AnalogMouseWheelKey).KeyName;
  (__return_storage_ptr__->KeyDetails).Object = (this->AnalogMouseWheelKey).KeyDetails.Object;
  pTVar1 = (this->AnalogMouseWheelKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetConsumeMouseWheel @ 1469ce670

EConsumeMouseWheel __thiscall UScrollBox::GetConsumeMouseWheel(UScrollBox *this)

{
  return this->ConsumeMouseWheel;
}

// GetConsumePointerInput @ 1469ce680

bool __thiscall UScrollBox::GetConsumePointerInput(UScrollBox *this)

{
  return this->bConsumePointerInput;
}

// GetIsFocusable @ 1469d1690

bool __thiscall UScrollBox::GetIsFocusable(UScrollBox *this)

{
  return this->bIsFocusable;
}

// GetIsScrolling @ 1469d1700

bool __thiscall UScrollBox::GetIsScrolling(UScrollBox *this)

{
  SScrollBox *pSVar1;
  
  pSVar1 = (this->MyScrollBox).Object;
  if ((pSVar1 != (SScrollBox *)0x0) && (pSVar1->bIsScrolling)) {
    return true;
  }
  return false;
}

// GetIsTouchScrollingEnabled @ 1469d1750

bool __thiscall UScrollBox::GetIsTouchScrollingEnabled(UScrollBox *this)

{
  return this->bEnableTouchScrolling;
}

// GetNavigationDestination @ 1469d1f30

EDescendantScrollDestination __thiscall UScrollBox::GetNavigationDestination(UScrollBox *this)

{
  return this->NavigationDestination;
}

// GetNavigationScrollPadding @ 1469d1f40

float __thiscall UScrollBox::GetNavigationScrollPadding(UScrollBox *this)

{
  return this->NavigationScrollPadding;
}

// GetOrientation @ 1469d2e30

EOrientation __thiscall UScrollBox::GetOrientation(UScrollBox *this)

{
  return (EOrientation)(this->Orientation).Value;
}

// GetOverscrollOffset @ 1469d2ec0

float __thiscall UScrollBox::GetOverscrollOffset(UScrollBox *this)

{
  FDeprecateSlateVector2D FVar1;
  SScrollBox *this_00;
  code *pcVar2;
  bool bVar3;
  FDeprecateSlateVector2D FVar4;
  float fVar5;
  float fVar6;
  float fStackX_8;
  float fStackX_c;
  
  this_00 = (this->MyScrollBox).Object;
  if (this_00 == (SScrollBox *)0x0) {
    return 0.0;
  }
  if (this_00->AllowOverscroll != Yes) {
    return 0.0;
  }
  if (((this_00->ScrollPanel).Object == (SScrollPanel *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar5 = (float)(*pcVar2)();
    return fVar5;
  }
  fVar5 = ((this_00->ScrollPanel).Object)->PhysicalOffset;
  if (0.0 <= fVar5) {
    FVar4 = SScrollBox::GetScrollPanelContentSize(this_00);
    FVar1 = (this_00->CachedGeometry).Size;
    if (this_00->Orientation == Orient_Vertical) {
      fStackX_c = (float)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
      fVar6 = fStackX_c;
      fStackX_c = FVar1._4_4_;
    }
    else {
      fStackX_8 = (float)*(undefined8 *)FVar4;
      fVar6 = fStackX_8;
      fStackX_8 = FVar1._0_4_;
      fStackX_c = fStackX_8;
    }
    if (fVar5 <= fVar6 - fStackX_c) {
      return 0.0;
    }
    fVar5 = fVar5 - (fVar6 - fStackX_c);
  }
  return fVar5;
}

// GetOverscrollPercentage @ 1469d2ee0

float __thiscall UScrollBox::GetOverscrollPercentage(UScrollBox *this)

{
  SScrollBox *this_00;
  code *pcVar1;
  bool bVar2;
  FDeprecateSlateVector2D FVar3;
  float fVar4;
  float fVar5;
  float fStackX_8;
  float fStackX_c;
  
  this_00 = (this->MyScrollBox).Object;
  if (this_00 == (SScrollBox *)0x0) {
    return 0.0;
  }
  if (this_00->AllowOverscroll == Yes) {
    FVar3 = (this_00->CachedGeometry).Size;
    if (this_00->Orientation == Orient_Vertical) {
      fStackX_c = FVar3._4_4_;
      fVar4 = fStackX_c;
    }
    else {
      fStackX_8 = FVar3._0_4_;
      fVar4 = fStackX_8;
    }
    if (0.0 < fVar4) {
      if (((this_00->ScrollPanel).Object == (SScrollPanel *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
      fVar5 = ((this_00->ScrollPanel).Object)->PhysicalOffset;
      if (0.0 <= fVar5) {
        FVar3 = SScrollBox::GetScrollPanelContentSize(this_00);
        if (this_00->Orientation == Orient_Vertical) {
          fStackX_c = (float)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
        }
        else {
          fStackX_8 = (float)*(undefined8 *)FVar3;
          fStackX_c = fStackX_8;
        }
        if (fVar5 <= fStackX_c - fVar4) {
          return 0.0;
        }
        fVar5 = fVar5 - (fStackX_c - fVar4);
      }
      return (fVar5 / fVar4) * __real_42c80000;
    }
  }
  return 0.0;
}

// GetPrivateStaticClass @ 1469d59a0

UClass * __cdecl UScrollBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrollBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScrollBox",&Z_Registration_Info_UClass_UScrollBox.InnerSingleton,
               StaticRegisterNativesUScrollBox,0xbf0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UScrollBox>,InternalVTableHelperCtorCaller<UScrollBox>,local_res8
               ,UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrollBox.InnerSingleton;
}

// GetScrollAnimationInterpolationSpeed @ 1469d7080

float __thiscall UScrollBox::GetScrollAnimationInterpolationSpeed(UScrollBox *this)

{
  return this->ScrollAnimationInterpolationSpeed;
}

// GetScrollBarVisibility @ 1469d70b0

ESlateVisibility __thiscall UScrollBox::GetScrollBarVisibility(UScrollBox *this)

{
  return this->ScrollBarVisibility;
}

// GetScrollOffset @ 1469d70e0

float __thiscall UScrollBox::GetScrollOffset(UScrollBox *this)

{
  SScrollBox *pSVar1;
  
  pSVar1 = (this->MyScrollBox).Object;
  if (pSVar1 == (SScrollBox *)0x0) {
    return 0.0;
  }
  return pSVar1->DesiredScrollOffset;
}

// GetScrollOffsetOfEnd @ 1469d7100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall UScrollBox::GetScrollOffsetOfEnd(UScrollBox *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SScrollPanel *pSVar2;
  SScrollBox *this_00;
  code *pcVar3;
  bool bVar4;
  FDeprecateSlateVector2D FVar5;
  float fVar6;
  undefined1 auStack_88 [32];
  float fStack_68;
  float fStack_64;
  TSharedRef<SWidget,1> TStack_60;
  FGeometry FStack_50;
  ulonglong uStack_18;
  
  this_00 = (this->MyScrollBox).Object;
  if (this_00 == (SScrollBox *)0x0) {
    return 0.0;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((this_00->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
  }
  pTVar1 = (this_00->ScrollPanel).SharedReferenceCount.ReferenceController;
  pSVar2 = (this_00->ScrollPanel).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SScrollPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_60.Object = (SWidget *)pSVar2;
  TStack_60.SharedReferenceCount.ReferenceController = pTVar1;
  SWidget::FindChildGeometry((SWidget *)this_00,&FStack_50,&this_00->CachedGeometry,&TStack_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FVar5 = SScrollBox::GetScrollPanelContentSize(this_00);
  if (this_00->Orientation == Orient_Vertical) {
    fStack_64 = (float)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
    fVar6 = fStack_64;
    fStack_64 = FStack_50.Size._4_4_;
  }
  else {
    fStack_68 = (float)*(undefined8 *)FVar5;
    fVar6 = fStack_68;
    fStack_68 = FStack_50.Size._0_4_;
    fStack_64 = fStack_68;
  }
  fVar6 = fVar6 - fStack_64;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  return fVar6;
}

// GetScrollWhenFocusChanges @ 1469d7120

EScrollWhenFocusChanges __thiscall UScrollBox::GetScrollWhenFocusChanges(UScrollBox *this)

{
  return this->ScrollWhenFocusChanges;
}

// GetScrollbarPadding @ 1469d7130

FMargin * __thiscall
UScrollBox::GetScrollbarPadding(UScrollBox *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->ScrollbarPadding).Top;
  fVar2 = (this->ScrollbarPadding).Right;
  fVar3 = (this->ScrollbarPadding).Bottom;
  __return_storage_ptr__->Left = (this->ScrollbarPadding).Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetScrollbarThickness @ 1469d7150

TVector2<double> * __thiscall
UScrollBox::GetScrollbarThickness(UScrollBox *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->ScrollbarThickness).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ScrollbarThickness).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetSlotClass @ 1469d8780

UClass * __thiscall UScrollBox::GetSlotClass(UScrollBox *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UScrollBoxSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScrollBoxSlot",
               &Z_Registration_Info_UClass_UScrollBoxSlot.InnerSingleton,
               UScrollBoxSlot::StaticRegisterNativesUScrollBoxSlot,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UScrollBoxSlot>,
               InternalVTableHelperCtorCaller<UScrollBoxSlot>,aFStackX_8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrollBoxSlot.InnerSingleton;
}

// GetViewFraction @ 1469d9d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall UScrollBox::GetViewFraction(UScrollBox *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SScrollPanel *pSVar2;
  FDeprecateSlateVector2D FVar3;
  SScrollBox *this_00;
  code *pcVar4;
  bool bVar5;
  FDeprecateSlateVector2D FVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_88 [32];
  float fStack_68;
  float fStack_64;
  TSharedRef<SWidget,1> TStack_60;
  FGeometry FStack_50;
  ulonglong uStack_18;
  
  this_00 = (this->MyScrollBox).Object;
  if (this_00 == (SScrollBox *)0x0) {
    return 0.0;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (((this_00->ScrollPanel).Object == (SScrollPanel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar7 = (float)(*pcVar4)();
    return fVar7;
  }
  pTVar1 = (this_00->ScrollPanel).SharedReferenceCount.ReferenceController;
  pSVar2 = (this_00->ScrollPanel).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar2 == (SScrollPanel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar7 = (float)(*pcVar4)();
    return fVar7;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_60.Object = (SWidget *)pSVar2;
  TStack_60.SharedReferenceCount.ReferenceController = pTVar1;
  SWidget::FindChildGeometry((SWidget *)this_00,&FStack_50,&this_00->CachedGeometry,&TStack_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FVar6 = SScrollBox::GetScrollPanelContentSize(this_00);
  FVar3 = (this_00->CachedGeometry).Size;
  if (this_00->Orientation == Orient_Vertical) {
    fStack_64 = (float)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
    fVar7 = fStack_64;
    fStack_64 = FVar3._4_4_;
  }
  else {
    fStack_68 = (float)*(undefined8 *)FVar6;
    fVar7 = fStack_68;
    fStack_68 = FVar3._0_4_;
    fStack_64 = fStack_68;
  }
  fVar8 = __real_3f800000;
  if (0.0 < fStack_64) {
    if (this_00->Orientation == Orient_Vertical) {
      fStack_64 = FStack_50.Size._4_4_;
      fVar8 = fStack_64 / fVar7;
    }
    else {
      fStack_68 = FStack_50.Size._0_4_;
      fVar8 = fStack_68 / fVar7;
    }
  }
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  return fVar8;
}

// GetViewOffsetFraction @ 1469d9dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall UScrollBox::GetViewOffsetFraction(UScrollBox *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SScrollPanel *pSVar2;
  undefined8 uVar3;
  SScrollBox *this_00;
  code *pcVar4;
  bool bVar5;
  FDeprecateSlateVector2D FVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  TSharedRef<SWidget,1> TStack_70;
  FGeometry FStack_60;
  ulonglong uStack_28;
  
  this_00 = (this->MyScrollBox).Object;
  if (this_00 == (SScrollBox *)0x0) {
    return 0.0;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((this_00->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar7 = (float)(*pcVar4)();
      return fVar7;
    }
  }
  pTVar1 = (this_00->ScrollPanel).SharedReferenceCount.ReferenceController;
  pSVar2 = (this_00->ScrollPanel).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SScrollPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar7 = (float)(*pcVar4)();
      return fVar7;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_70.Object = (SWidget *)pSVar2;
  TStack_70.SharedReferenceCount.ReferenceController = pTVar1;
  SWidget::FindChildGeometry((SWidget *)this_00,&FStack_60,&this_00->CachedGeometry,&TStack_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FVar6 = SScrollBox::GetScrollPanelContentSize(this_00);
  uVar3 = *(undefined8 *)FVar6;
  if (this_00->Orientation == Orient_Vertical) {
    uStack_78._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    fVar7 = uStack_78._4_4_;
  }
  else {
    uStack_78._0_4_ = (float)uVar3;
    fVar7 = (float)uStack_78;
  }
  uStack_78 = uVar3;
  fVar8 = SScrollBox::GetViewFraction(this_00);
  fVar7 = this_00->DesiredScrollOffset / fVar7;
  if (__real_3f800000 - fVar8 <= fVar7) {
    fVar7 = __real_3f800000 - fVar8;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  return fVar7;
}

// GetWheelScrollMultiplier @ 1469da190

float __thiscall UScrollBox::GetWheelScrollMultiplier(UScrollBox *this)

{
  return this->WheelScrollMultiplier;
}

// GetWidgetBarStyle @ 1469da1a0

FScrollBarStyle * __thiscall UScrollBox::GetWidgetBarStyle(UScrollBox *this)

{
  return &this->WidgetBarStyle;
}

// GetWidgetStyle @ 1469da3b0

FScrollBoxStyle * __thiscall UScrollBox::GetWidgetStyle(UScrollBox *this)

{
  return &this->WidgetStyle;
}

// InitBackPadScrolling @ 1469dfa40

void __thiscall UScrollBox::InitBackPadScrolling(UScrollBox *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyScrollBox).Object != (SScrollBox *)0x0) {
    `UScrollBox::InitBackPadScrolling'::__l2::<lambda_1>::operator()(local_res10);
    this->BackPadScrolling = param_1;
    return;
  }
  this->BackPadScrolling = param_1;
  return;
}

// InitFrontPadScrolling @ 1469dfd10

void __thiscall UScrollBox::InitFrontPadScrolling(UScrollBox *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyScrollBox).Object != (SScrollBox *)0x0) {
    `UScrollBox::InitFrontPadScrolling'::__l2::<lambda_1>::operator()(local_res10);
    this->FrontPadScrolling = param_1;
    return;
  }
  this->FrontPadScrolling = param_1;
  return;
}

// InitNavigationScrollPadding @ 1469dfeb0

void __thiscall UScrollBox::InitNavigationScrollPadding(UScrollBox *this,float param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyScrollBox).Object != (SScrollBox *)0x0) {
    `UScrollBox::InitNavigationScrollPadding'::__l2::<lambda_1>::operator()(local_res10);
    this->NavigationScrollPadding = param_1;
    return;
  }
  this->NavigationScrollPadding = param_1;
  return;
}

// IsAllowOverscroll @ 1469e09b0

bool __thiscall UScrollBox::IsAllowOverscroll(UScrollBox *this)

{
  return this->AllowOverscroll;
}

// IsAllowRightClickDragScrolling @ 1469e09c0

bool __thiscall UScrollBox::IsAllowRightClickDragScrolling(UScrollBox *this)

{
  return this->bAllowRightClickDragScrolling;
}

// IsAlwaysShowScrollbar @ 1469e09e0

bool __thiscall UScrollBox::IsAlwaysShowScrollbar(UScrollBox *this)

{
  return this->AlwaysShowScrollbar;
}

// IsAlwaysShowScrollbarTrack @ 1469e0a00

bool __thiscall UScrollBox::IsAlwaysShowScrollbarTrack(UScrollBox *this)

{
  return this->AlwaysShowScrollbarTrack;
}

// IsAnimateWheelScrolling @ 1469e0a40

bool __thiscall UScrollBox::IsAnimateWheelScrolling(UScrollBox *this)

{
  return this->bAnimateWheelScrolling;
}

// IsBackPadScrolling @ 1469e0a60

bool __thiscall UScrollBox::IsBackPadScrolling(UScrollBox *this)

{
  return this->BackPadScrolling;
}

// IsFrontPadScrolling @ 1469e1740

bool __thiscall UScrollBox::IsFrontPadScrolling(UScrollBox *this)

{
  return this->FrontPadScrolling;
}

// OnSlotAdded @ 1469f0cb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScrollBox::OnSlotAdded(UScrollBox *this,UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TSharedRef<SScrollBox,1> *pTVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_38;
  TSharedRef<SScrollBox,1> local_28;
  FString local_18;
  
  if ((this->MyScrollBox).Object != (SScrollBox *)0x0) {
    if (param_1 == (UPanelSlot *)0x0) {
      pFVar4 = GetTypeName<UScrollBoxSlot>(&local_38);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = UScrollBoxSlot::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<UScrollBoxSlot>(&local_38);
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
    pTVar3 = TSharedPtr<SScrollBox,1>::ToSharedRef(&this->MyScrollBox,&local_28);
    UScrollBoxSlot::BuildSlot((UScrollBoxSlot *)param_1,pTVar3);
  }
  return;
}

// OnSlotRemoved @ 1469f16e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScrollBox::OnSlotRemoved(UScrollBox *this,UPanelSlot *param_1)

{
  UWidget *this_00;
  code *pcVar1;
  SScrollBox *this_01;
  bool bVar2;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (((this->MyScrollBox).Object != (SScrollBox *)0x0) &&
     (this_00 = (param_1->Content).field0_0x0.DebugPtr, this_00 != (UWidget *)0x0)) {
    UWidget::GetCachedWidget(this_00,&local_28);
    bVar2 = local_28.Object == (SWidget *)0x0;
    if (local_28.Object != (SWidget *)0x0) {
      this_01 = TSharedPtr<SScrollBox,1>::operator->(&this->MyScrollBox);
      if (bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_18.Object = local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_28.Object == (SWidget *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      SScrollBox::RemoveSlot(this_01,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RebuildWidget @ 146a04d30

TSharedRef<SWidget,1> * __thiscall
UScrollBox::RebuildWidget(UScrollBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  UScrollBoxSlot *this_00;
  SScrollBox *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TSharedRef<SWidget,1> *pTVar13;
  UClass *pUVar14;
  undefined8 *puVar15;
  undefined1 local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  UScrollBox *local_res20;
  FMemScope local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined1 local_4a8 [8];
  FDelegateAllocation local_4a0;
  undefined1 local_490 [8];
  FDelegateAllocation local_488;
  undefined1 local_478 [8];
  FDelegateAllocation local_470;
  undefined1 local_460 [8];
  FDelegateAllocation local_458;
  TSharedRef<SScrollBox,1> local_448;
  SScrollBox *local_438;
  FSharedReferencer<1> local_430;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_428;
  UScrollBox *local_410;
  UScrollBox *local_408;
  UScrollBox *local_400;
  FName local_3f8;
  FDestructionSentinel local_3f0;
  FDestructionSentinel local_3d8;
  FDestructionSentinel local_3c0;
  FDestructionSentinel local_3a8;
  FDestructionSentinel local_390;
  FDelegateAllocation *local_378;
  FDestructionSentinel local_370;
  FDelegateAllocation *local_358;
  FDestructionSentinel local_350;
  FDelegateAllocation *local_338;
  FDestructionSentinel local_330;
  FDelegateAllocation *local_318;
  undefined1 local_310 [608];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  pFVar10 = SScrollBox::FArguments::FArguments((FArguments *)local_310);
  uStack_4b0 = 0;
  pFVar10->_Style = &this->WidgetStyle;
  pFVar10->_ScrollBarStyle = &this->WidgetBarStyle;
  pFVar10->_Orientation = (uint)(this->Orientation).Value;
  pFVar10->_ConsumeMouseWheel = this->ConsumeMouseWheel;
  pFVar10->_NavigationDestination = this->NavigationDestination;
  pFVar10->_NavigationScrollPadding = this->NavigationScrollPadding;
  pFVar10->_ScrollWhenFocusChanges = this->ScrollWhenFocusChanges;
  pFVar10->_BackPadScrolling = this->BackPadScrolling;
  pFVar10->_FrontPadScrolling = this->FrontPadScrolling;
  pFVar10->_AnimateWheelScrolling = this->bAnimateWheelScrolling;
  pFVar10->_ScrollAnimationInterpSpeed = this->ScrollAnimationInterpolationSpeed;
  pFVar10->_WheelScrollMultiplier = this->WheelScrollMultiplier;
  pFVar10->_EnableTouchScrolling = this->bEnableTouchScrolling;
  pFVar10->_ConsumePointerInput = this->bConsumePointerInput;
  local_4b8 = (FMemScope)SlateHandleUserScrolled;
  uStack_4ac = local_448.SharedReferenceCount.ReferenceController._4_4_;
  local_460 = (undefined1  [8])0x0;
  local_458.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_458.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_460,
             (FWriteAccessScope *)&local_390);
  local_378 = &local_458;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_458);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUScrollBox____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar11 + 4) = local_4b8;
    puVar11[5] = CONCAT44(uStack_4ac,uStack_4b0);
  }
  if (local_390.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_390.Accessor,&local_390);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnUserScrolled,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_460);
  uStack_4b0 = 0;
  local_4b8 = (FMemScope)SlateHandleScrollBarVisibilityChanged;
  uStack_4ac = local_448.SharedReferenceCount.ReferenceController._4_4_;
  local_478 = (undefined1  [8])0x0;
  local_470.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_470.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_478,
             (FWriteAccessScope *)&local_370);
  local_358 = &local_470;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_470);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXUEVisibility___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUScrollBox____A6AXUEVisibility___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_410 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_410);
    *(FMemScope *)(puVar11 + 4) = local_4b8;
    puVar11[5] = CONCAT44(uStack_4ac,uStack_4b0);
  }
  if (local_370.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_370.Accessor,&local_370);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnScrollBarVisibilityChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_478);
  uStack_4b0 = 0;
  local_4b8 = (FMemScope)SlateHandleFocusReceived;
  uStack_4ac = local_448.SharedReferenceCount.ReferenceController._4_4_;
  local_490 = (undefined1  [8])0x0;
  local_488.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_488.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_490,
             (FWriteAccessScope *)&local_350);
  local_338 = &local_488;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_488);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUScrollBox____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_408 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_408);
    *(FMemScope *)(puVar11 + 4) = local_4b8;
    puVar11[5] = CONCAT44(uStack_4ac,uStack_4b0);
  }
  if (local_350.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_350.Accessor,&local_350);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnFocusReceived,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_490);
  uStack_4b0 = 0;
  local_4b8 = (FMemScope)SlateHandleFocusLost;
  uStack_4ac = local_448.SharedReferenceCount.ReferenceController._4_4_;
  local_4a8 = (undefined1  [8])0x0;
  local_4a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_4a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a8,
             (FWriteAccessScope *)&local_330);
  local_318 = &local_4a0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_4a0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUScrollBox____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_400 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_400);
    *(FMemScope *)(puVar11 + 4) = local_4b8;
    puVar11[5] = CONCAT44(uStack_4ac,uStack_4b0);
  }
  if (local_330.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_330.Accessor,&local_330);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnFocusLost,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a8);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4b8,&local_3f8,true);
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
            (&local_428,"SScrollBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ScrollBox.cpp"
             ,0x5e,local_res10);
  FMemScope::~FMemScope(&local_4b8);
  FLLMScope::~FLLMScope(local_res18);
  pSVar3 = local_428._Widget.Object;
  if (local_428._Widget.Object == (SScrollBox *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_428._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SScrollBox::Construct(local_428._Widget.Object,pFVar10);
  if (local_428._Widget.Object == (SScrollBox *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  if (((local_428._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar8 = (**(code **)(*(longlong *)local_428._Widget.Object + 0x228))(local_428._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_146a052a1;
  }
  bVar9 = 0x20;
LAB_146a052a1:
  FVar6.ReferenceController = local_428._Widget.SharedReferenceCount.ReferenceController;
  (local_428._Widget.Object)->field_0x30 = (local_428._Widget.Object)->field_0x30 & 0xdf;
  (local_428._Widget.Object)->field_0x30 = (local_428._Widget.Object)->field_0x30 | bVar9;
  (local_428._Widget.Object)->field_0x31 = (local_428._Widget.Object)->field_0x31 | 4;
  local_428._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_428._Widget.Object = (SScrollBox *)0x0;
  if (pSVar3 == (SScrollBox *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  local_438 = pSVar3;
  local_430.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyScrollBox != (TSharedPtr<SScrollBox,1> *)&local_438) {
    (this->MyScrollBox).Object = pSVar3;
    local_438 = (SScrollBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyScrollBox).SharedReferenceCount,&local_430);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_430.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a8,
             (FWriteAccessScope *)&local_3f0);
  if ((local_4a0.DelegateSize != 0) &&
     (local_4a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_4a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_4a0,0,0,0x10);
    local_4a0.DelegateSize = 0;
  }
  if (local_3f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f0.Accessor,&local_3f0);
  }
  if (local_4a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_4a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_490,
             (FWriteAccessScope *)&local_3d8);
  if ((local_488.DelegateSize != 0) &&
     (local_488.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_488.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_488,0,0,0x10);
    local_488.DelegateSize = 0;
  }
  if (local_3d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
  }
  if (local_488.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_488.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_490);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_478,
             (FWriteAccessScope *)&local_3c0);
  if ((local_470.DelegateSize != 0) &&
     (local_470.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_470.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_470,0,0,0x10);
    local_470.DelegateSize = 0;
  }
  if (local_3c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c0.Accessor,&local_3c0);
  }
  if (local_470.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_470.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_478);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_460,
             (FWriteAccessScope *)&local_3a8);
  if ((local_458.DelegateSize != 0) &&
     (local_458.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_458.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_458,0,0,0x10);
    local_458.DelegateSize = 0;
  }
  if (local_3a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a8.Accessor,&local_3a8);
  }
  if (local_458.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_458.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_460);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
  if ((void *)local_80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_80);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
  if ((void *)local_98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
  if ((void *)local_b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_310._544_8_);
  DestructItems<SScrollBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_310._504_8_,local_310._512_4_);
  if ((FSlotArguments *)local_310._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_310._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_310);
  puVar15 = *(undefined8 **)&this->field_0x1b0;
  iVar1 = *(int *)&this->field_0x1b8;
  puVar11 = puVar15 + iVar1;
  while( true ) {
    if (*(int *)&this->field_0x1b8 != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPanelSlot>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar15 == puVar11) break;
    this_00 = (UScrollBoxSlot *)*puVar15;
    if (this_00 != (UScrollBoxSlot *)0x0) {
      pUVar14 = UScrollBoxSlot::StaticClass();
      iVar2 = (int)pUVar14->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar14->_padding_)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        this_00->_padding_ = (longlong)this;
        if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar5)();
            return pTVar13;
          }
        }
        local_448.SharedReferenceCount.ReferenceController =
             (this->MyScrollBox).SharedReferenceCount.ReferenceController;
        local_448.Object = (this->MyScrollBox).Object;
        if (local_448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (local_448.Object == (SScrollBox *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar5)();
            return pTVar13;
          }
        }
        UScrollBoxSlot::BuildSlot(this_00,&local_448);
      }
    }
    puVar15 = puVar15 + 1;
  }
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  pSVar3 = (this->MyScrollBox).Object;
  pTVar4 = (this->MyScrollBox).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SScrollBox *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0b250

void __thiscall UScrollBox::ReleaseSlateResources(UScrollBox *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyScrollBox != (TSharedPtr<SScrollBox,1> *)&local_18) {
    (this->MyScrollBox).Object = (SScrollBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyScrollBox).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// ScrollToEnd @ 146a10170

void __thiscall UScrollBox::ScrollToEnd(UScrollBox *this)

{
  SScrollBox *this_00;
  
  this_00 = (this->MyScrollBox).Object;
  if (this_00 == (SScrollBox *)0x0) {
    return;
  }
  this_00->bScrollToEnd = true;
  SWidget::Invalidate((SWidget *)this_00,Layout);
  return;
}

// ScrollToStart @ 146a10190

void __thiscall UScrollBox::ScrollToStart(UScrollBox *this)

{
  SScrollBox *this_00;
  
  this_00 = (this->MyScrollBox).Object;
  if (this_00 == (SScrollBox *)0x0) {
    return;
  }
  this_00->bScrollToEnd = false;
  *(float *)(&this_00->field_0x218 + 0x90) = 0.0;
  SWidget::Invalidate((SWidget *)this_00,Layout);
  return;
}

// ScrollWidgetIntoView @ 146a101d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UScrollBox::ScrollWidgetIntoView
          (UScrollBox *this,UWidget *param_1,bool param_2,EDescendantScrollDestination param_3,
          float param_4)

{
  SScrollBox *this_00;
  TSharedPtr<SWidget,1> *pTVar1;
  TSharedPtr<SWidget,1> local_28;
  TSharedPtr<SWidget,1> local_18;
  
  local_28.Object = (SWidget *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != (UWidget *)0x0) {
    pTVar1 = UWidget::GetCachedWidget(param_1,&local_18);
    if (&local_28 != pTVar1) {
      local_28.Object = pTVar1->Object;
      pTVar1->Object = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_28.SharedReferenceCount,&pTVar1->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  this_00 = (this->MyScrollBox).Object;
  if (this_00 != (SScrollBox *)0x0) {
    SScrollBox::ScrollDescendantIntoView(this_00,&local_28,param_2,param_3,param_4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// SetAllowOverscroll @ 146a10d50

void __thiscall UScrollBox::SetAllowOverscroll(UScrollBox *this,bool param_1)

{
  SScrollBox *this_00;
  
  this->AllowOverscroll = param_1;
  this_00 = (this->MyScrollBox).Object;
  if (this_00 != (SScrollBox *)0x0) {
    SScrollBox::SetAllowOverscroll(this_00,!param_1);
    return;
  }
  return;
}

// SetAllowRightClickDragScrolling @ 146a10d80

void __thiscall UScrollBox::SetAllowRightClickDragScrolling(UScrollBox *this,bool param_1)

{
  SScrollBox *pSVar1;
  
  this->bAllowRightClickDragScrolling = param_1;
  pSVar1 = (this->MyScrollBox).Object;
  if (pSVar1 == (SScrollBox *)0x0) {
    return;
  }
  pSVar1->bAllowsRightClickDragScrolling = false;
  pSVar1->field_0x464 = pSVar1->field_0x464 | param_1 << 7;
  return;
}

// SetAlwaysShowScrollbar @ 146a10dc0

void __thiscall UScrollBox::SetAlwaysShowScrollbar(UScrollBox *this,bool param_1)

{
  SScrollBox *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  this->AlwaysShowScrollbar = param_1;
  pSVar1 = (this->MyScrollBox).Object;
  if (pSVar1 == (SScrollBox *)0x0) {
    return;
  }
  if ((pSVar1->ScrollBar).Object == (SScrollBar *)0x0) {
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
  SScrollBar::SetScrollBarAlwaysVisible((pSVar1->ScrollBar).Object,param_1);
  return;
}

// SetAlwaysShowScrollbarTrack @ 146a10e00

void __thiscall UScrollBox::SetAlwaysShowScrollbarTrack(UScrollBox *this,bool param_1)

{
  SScrollBox *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  this->AlwaysShowScrollbarTrack = param_1;
  pSVar1 = (this->MyScrollBox).Object;
  if (pSVar1 == (SScrollBox *)0x0) {
    return;
  }
  if ((pSVar1->ScrollBar).Object == (SScrollBar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ((pSVar1->ScrollBar).Object)->bAlwaysShowScrollbarTrack = param_1;
    return;
  }
  ((pSVar1->ScrollBar).Object)->bAlwaysShowScrollbarTrack = param_1;
  return;
}

// SetAnalogMouseWheelKey @ 146a10e40

void __thiscall UScrollBox::SetAnalogMouseWheelKey(UScrollBox *this,FKey *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  SScrollBox *this_00;
  TReferenceControllerBase<1> *pTVar3;
  FKey local_28;
  
  (this->AnalogMouseWheelKey).KeyName = param_1->KeyName;
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->KeyDetails).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->AnalogMouseWheelKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->AnalogMouseWheelKey).KeyDetails.Object = pFVar2;
  (this->AnalogMouseWheelKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this_00 = (this->MyScrollBox).Object;
  if (this_00 != (SScrollBox *)0x0) {
    local_28.KeyName = (this->AnalogMouseWheelKey).KeyName;
    local_28.KeyDetails.Object = (this->AnalogMouseWheelKey).KeyDetails.Object;
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         (this->AnalogMouseWheelKey).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SScrollBox::SetAnalogMouseWheelKey(this_00,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// SetAnimateWheelScrolling @ 146a10fe0

void __thiscall UScrollBox::SetAnimateWheelScrolling(UScrollBox *this,bool param_1)

{
  SScrollBox *pSVar1;
  
  this->bAnimateWheelScrolling = param_1;
  pSVar1 = (this->MyScrollBox).Object;
  if (pSVar1 == (SScrollBox *)0x0) {
    return;
  }
  pSVar1->bAnimateWheelScrolling = false;
  pSVar1->field_0x464 = pSVar1->field_0x464 | param_1;
  return;
}

// SetConsumeMouseWheel @ 146a12710

void __thiscall UScrollBox::SetConsumeMouseWheel(UScrollBox *this,EConsumeMouseWheel param_1)

{
  SScrollBox *pSVar1;
  
  this->ConsumeMouseWheel = param_1;
  pSVar1 = (this->MyScrollBox).Object;
  if (pSVar1 == (SScrollBox *)0x0) {
    return;
  }
  pSVar1->ConsumeMouseWheel = param_1;
  return;
}

// SetConsumePointerInput @ 146a12730

void __thiscall UScrollBox::SetConsumePointerInput(UScrollBox *this,bool param_1)

{
  SScrollBox *pSVar1;
  
  pSVar1 = (this->MyScrollBox).Object;
  this->bConsumePointerInput = param_1;
  if (pSVar1 != (SScrollBox *)0x0) {
    pSVar1->bConsumePointerInput = param_1;
  }
  return;
}

// SetIsFocusable @ 146a15e00

void __thiscall UScrollBox::SetIsFocusable(UScrollBox *this,bool param_1)

{
  SScrollBox *pSVar1;
  
  this->bIsFocusable = param_1;
  pSVar1 = (this->MyScrollBox).Object;
  if (pSVar1 == (SScrollBox *)0x0) {
    return;
  }
  pSVar1->bIsFocusable = false;
  pSVar1->field_0x465 = pSVar1->field_0x465 | param_1 * '\x02';
  return;
}

// SetIsTouchScrollingEnabled @ 146a16280

void __thiscall UScrollBox::SetIsTouchScrollingEnabled(UScrollBox *this,bool param_1)

{
  bool bVar1;
  SScrollBox *pSVar2;
  undefined1 auStackX_10 [24];
  
  this->bEnableTouchScrolling = param_1;
  pSVar2 = (this->MyScrollBox).Object;
  if (pSVar2 == (SScrollBox *)0x0) {
    return;
  }
  bVar1 = (pSVar2->bFingerOwningTouchInteraction).bIsSet;
  pSVar2->bEnableTouchScrolling = param_1;
  if (bVar1 != false) {
    `SScrollBox::SetIsTouchScrollingEnabled'::__l2::<lambda_1>::operator()(auStackX_10);
    return;
  }
  return;
}

// SetNavigationDestination @ 146a17bf0

void __thiscall
UScrollBox::SetNavigationDestination(UScrollBox *this,EDescendantScrollDestination param_1)

{
  SScrollBox *pSVar1;
  
  this->NavigationDestination = param_1;
  pSVar1 = (this->MyScrollBox).Object;
  if (pSVar1 == (SScrollBox *)0x0) {
    return;
  }
  pSVar1->NavigationDestination = param_1;
  return;
}

// SetOrientation @ 146a18480

void __thiscall UScrollBox::SetOrientation(UScrollBox *this,EOrientation param_1)

{
  SScrollBox *this_00;
  
  (this->Orientation).Value = (uchar)param_1;
  this_00 = (this->MyScrollBox).Object;
  if (this_00 != (SScrollBox *)0x0) {
    SScrollBox::SetOrientation(this_00,param_1 & 0xff);
    return;
  }
  return;
}

// SetScrollAnimationInterpolationSpeed @ 146a19df0

void __thiscall UScrollBox::SetScrollAnimationInterpolationSpeed(UScrollBox *this,float param_1)

{
  SScrollBox *pSVar1;
  
  this->ScrollAnimationInterpolationSpeed = param_1;
  pSVar1 = (this->MyScrollBox).Object;
  if (pSVar1 == (SScrollBox *)0x0) {
    return;
  }
  pSVar1->ScrollingAnimationInterpolationSpeed = param_1;
  return;
}

// SetScrollBarVisibility @ 146a19e40

void __thiscall UScrollBox::SetScrollBarVisibility(UScrollBox *this,ESlateVisibility param_1)

{
  SScrollBox *this_00;
  
  this->ScrollBarVisibility = param_1;
  this_00 = (this->MyScrollBox).Object;
  if (this_00 != (SScrollBox *)0x0) {
    if (param_1 == Visible) {
      SScrollBox::SetScrollBarVisibility(this_00,EVisibility::Visible);
      return;
    }
    if (param_1 == Collapsed) {
      SScrollBox::SetScrollBarVisibility(this_00,EVisibility::Collapsed);
      return;
    }
    if (param_1 == Hidden) {
      SScrollBox::SetScrollBarVisibility(this_00,EVisibility::Hidden);
      return;
    }
    if (param_1 == HitTestInvisible) {
      SScrollBox::SetScrollBarVisibility(this_00,EVisibility::HitTestInvisible);
      return;
    }
    if (param_1 == SelfHitTestInvisible) {
      SScrollBox::SetScrollBarVisibility(this_00,EVisibility::SelfHitTestInvisible);
      return;
    }
  }
  return;
}

// SetScrollOffset @ 146a19ef0

void __thiscall UScrollBox::SetScrollOffset(UScrollBox *this,float param_1)

{
  SScrollBox *this_00;
  
  this->DesiredScrollOffset = param_1;
  this_00 = (this->MyScrollBox).Object;
  if (this_00 == (SScrollBox *)0x0) {
    return;
  }
  this_00->bScrollToEnd = false;
  *(float *)(&this_00->field_0x218 + 0x90) = param_1;
  SWidget::Invalidate((SWidget *)this_00,Layout);
  return;
}

// SetScrollWhenFocusChanges @ 146a19f10

void __thiscall
UScrollBox::SetScrollWhenFocusChanges(UScrollBox *this,EScrollWhenFocusChanges param_1)

{
  SScrollBox *pSVar1;
  
  this->ScrollWhenFocusChanges = param_1;
  pSVar1 = (this->MyScrollBox).Object;
  if (pSVar1 == (SScrollBox *)0x0) {
    return;
  }
  pSVar1->ScrollWhenFocusChanges = param_1;
  return;
}

// SetScrollbarPadding @ 146a19f30

void __thiscall UScrollBox::SetScrollbarPadding(UScrollBox *this,FMargin *param_1)

{
  FMargin *pFVar1;
  SScrollBox *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_1->Top;
  fVar3 = param_1->Right;
  fVar4 = param_1->Bottom;
  pFVar1 = &this->ScrollbarPadding;
  this_00 = (this->MyScrollBox).Object;
  pFVar1->Left = param_1->Left;
  pFVar1->Top = fVar2;
  (this->ScrollbarPadding).Right = fVar3;
  (this->ScrollbarPadding).Bottom = fVar4;
  if (this_00 != (SScrollBox *)0x0) {
    SScrollBox::SetScrollBarPadding(this_00,pFVar1);
    return;
  }
  return;
}

// SetScrollbarThickness @ 146a19f60

void __thiscall UScrollBox::SetScrollbarThickness(UScrollBox *this,TVector2<double> *param_1)

{
  SScrollBox *this_00;
  double dVar1;
  FDeprecateVector2DParameter FVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  this_00 = (this->MyScrollBox).Object;
  (this->ScrollbarThickness).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->ScrollbarThickness).field0_0x0._s_0.Y = dVar1;
  if (this_00 != (SScrollBox *)0x0) {
    FVar2._4_4_ = (float)(this->ScrollbarThickness).field0_0x0._s_0.Y;
    FVar2._0_4_ = (float)(this->ScrollbarThickness).field0_0x0._s_0.X;
    SScrollBox::SetScrollBarThickness(this_00,FVar2);
    return;
  }
  return;
}

// SetWheelScrollMultiplier @ 146a1dc20

void __thiscall UScrollBox::SetWheelScrollMultiplier(UScrollBox *this,float param_1)

{
  SScrollBox *pSVar1;
  
  this->WheelScrollMultiplier = param_1;
  pSVar1 = (this->MyScrollBox).Object;
  if (pSVar1 == (SScrollBox *)0x0) {
    return;
  }
  pSVar1->WheelScrollMultiplier = param_1;
  return;
}

// SetWidgetBarStyle @ 146a1dc40

void __thiscall UScrollBox::SetWidgetBarStyle(UScrollBox *this,FScrollBarStyle *param_1)

{
  SScrollBox *this_00;
  
  FScrollBarStyle::operator=(&this->WidgetBarStyle,param_1);
  this_00 = (this->MyScrollBox).Object;
  if (this_00 != (SScrollBox *)0x0) {
    SScrollBox::InvalidateScrollBarStyle(this_00);
    return;
  }
  return;
}

// SetWidgetStyle @ 146a1df20

void __thiscall UScrollBox::SetWidgetStyle(UScrollBox *this,FScrollBoxStyle *param_1)

{
  SScrollBox *this_00;
  
  FScrollBoxStyle::operator=(&this->WidgetStyle,param_1);
  this_00 = (this->MyScrollBox).Object;
  if (this_00 != (SScrollBox *)0x0) {
    SScrollBox::InvalidateStyle(this_00);
    return;
  }
  return;
}

// SlateHandleFocusLost @ 146a1e390

void __thiscall UScrollBox::SlateHandleFocusLost(UScrollBox *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFocusLost,(void *)0x0)
  ;
  return;
}

// SlateHandleFocusReceived @ 146a1e3b0

void __thiscall UScrollBox::SlateHandleFocusReceived(UScrollBox *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFocusReceived,
             (void *)0x0);
  return;
}

// SlateHandleScrollBarVisibilityChanged @ 146a1e3d0

void __thiscall
UScrollBox::SlateHandleScrollBarVisibilityChanged(UScrollBox *this,EVisibility param_1)

{
  ESlateVisibility local_res8 [8];
  EVisibility local_res10 [24];
  
  local_res10[0].Value.Value = param_1.Value.Value;
  local_res8[0] = UWidget::ConvertRuntimeToSerializedVisibility(local_res10);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnScrollBarVisibilityChanged,local_res8);
  return;
}

// SlateHandleUserScrolled @ 146a1e410

void __thiscall UScrollBox::SlateHandleUserScrolled(UScrollBox *this,float param_1)

{
  float local_res10 [6];
  
  local_res10[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnUserScrolled,
             local_res10);
  return;
}

// StaticRegisterNativesUScrollBox @ 146a1eec0

void __cdecl UScrollBox::StaticRegisterNativesUScrollBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1f;
  local_18.DataPtr = Z_Construct_UClass_UScrollBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a24c20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScrollBox::SynchronizeProperties(UScrollBox *this)

{
  SScrollBox *pSVar1;
  code *pcVar2;
  FDeprecateVector2DParameter FVar3;
  bool bVar4;
  EVisibility EVar5;
  undefined7 extraout_var;
  undefined1 local_res8 [8];
  float local_res10;
  float fStackX_14;
  FKey local_28;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar1 = (this->MyScrollBox).Object;
  if (pSVar1 == (SScrollBox *)0x0) {
    return;
  }
  SScrollBox::SetScrollOffset(pSVar1,this->DesiredScrollOffset);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetOrientation((this->MyScrollBox).Object,(uint)(this->Orientation).Value);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->MyScrollBox).Object;
  EVar5 = UWidget::ConvertSerializedVisibilityToRuntime((ESlateVisibility)local_res8);
  SScrollBox::SetScrollBarVisibility
            (pSVar1,(EVisibility)
                    ((TEnumAsByte<EVisibility::Private> *)CONCAT71(extraout_var,EVar5.Value.Value))
                    ->Value);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res10 = (float)(this->ScrollbarThickness).field0_0x0._s_0.X;
  fStackX_14 = (float)(this->ScrollbarThickness).field0_0x0._s_0.Y;
  FVar3._4_4_ = fStackX_14;
  FVar3._0_4_ = local_res10;
  SScrollBox::SetScrollBarThickness((this->MyScrollBox).Object,FVar3);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetScrollBarPadding((this->MyScrollBox).Object,&this->ScrollbarPadding);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetScrollBarAlwaysVisible((this->MyScrollBox).Object,this->AlwaysShowScrollbar);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetScrollBarTrackAlwaysVisible
            ((this->MyScrollBox).Object,this->AlwaysShowScrollbarTrack);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetAllowOverscroll((this->MyScrollBox).Object,this->AllowOverscroll == false);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetScrollBarRightClickDragAllowed
            ((this->MyScrollBox).Object,this->bAllowRightClickDragScrolling);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetConsumeMouseWheel((this->MyScrollBox).Object,this->ConsumeMouseWheel);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.KeyName = (this->AnalogMouseWheelKey).KeyName;
  pSVar1 = (this->MyScrollBox).Object;
  local_28.KeyDetails.Object = (this->AnalogMouseWheelKey).KeyDetails.Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (this->AnalogMouseWheelKey).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  SScrollBox::SetAnalogMouseWheelKey(pSVar1,&local_28);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetIsFocusable((this->MyScrollBox).Object,this->bIsFocusable);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetAnimateWheelScrolling((this->MyScrollBox).Object,this->bAnimateWheelScrolling);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetScrollingAnimationInterpolationSpeed
            ((this->MyScrollBox).Object,this->ScrollAnimationInterpolationSpeed);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetWheelScrollMultiplier((this->MyScrollBox).Object,this->WheelScrollMultiplier);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetIsTouchScrollingEnabled((this->MyScrollBox).Object,this->bEnableTouchScrolling);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ((this->MyScrollBox).Object)->bConsumePointerInput = this->bConsumePointerInput;
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetStyle((this->MyScrollBox).Object,&this->WidgetStyle);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::InvalidateStyle((this->MyScrollBox).Object);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::SetScrollBarStyle((this->MyScrollBox).Object,&this->WidgetBarStyle);
  if ((this->MyScrollBox).Object == (SScrollBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SScrollBox::InvalidateScrollBarStyle((this->MyScrollBox).Object);
  return;
}

// execEndInertialScrolling @ 146a33cd0

void __cdecl UScrollBox::execEndInertialScrolling(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  FActiveTimerHandle *pFVar2;
  SWidget *this;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FActiveTimerHandle,1> TStack_28;
  longlong lStack_18;
  FSharedReferencer<1> FStack_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SWidget **)&param_1[0x4b].field_0x20;
  if (this == (SWidget *)0x0) {
    return;
  }
  this[2].AccessibleSummaryBehavior = this[2].AccessibleSummaryBehavior & 0xb7;
  SWidget::Invalidate(this,LayoutAndVolatility);
  plVar1 = &this[2]._padding_;
  pFVar2 = (FActiveTimerHandle *)*plVar1;
  if (pFVar2 != (FActiveTimerHandle *)0x0) {
    TStack_28.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         this[2].FastPathProxyHandle.InvalidationRootHandle.InvalidationRoot;
    if ((FSlateInvalidationRoot *)TStack_28.SharedReferenceCount.ReferenceController !=
        (FSlateInvalidationRoot *)0x0) {
      LOCK();
      *(int *)&((FSlateInvalidationRoot *)TStack_28.SharedReferenceCount.ReferenceController)->
               _padding_ =
           (int)((FSlateInvalidationRoot *)TStack_28.SharedReferenceCount.ReferenceController)->
                _padding_ + 1;
      UNLOCK();
    }
    TStack_28.Object = pFVar2;
    if (pFVar2 == (FActiveTimerHandle *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SWidget::UnRegisterActiveTimer(this,&TStack_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_28.SharedReferenceCount.ReferenceController);
    lStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (plVar1 != &lStack_18) {
      *plVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this[2].FastPathProxyHandle,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  FInertialScrollManager::ClearScrollVelocity
            ((FInertialScrollManager *)
             ((longlong)&this[1].PersistentState.DesktopGeometry.AbsolutePosition.field0_0x0 + 4),
             false);
  if (*(longlong *)
       ((longlong)&this[1].PersistentState.AllottedGeometry.AbsolutePosition.field0_0x0 + 4) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this[1].PersistentState.InitialClipState.TypedValue.Debugging_StateIndexFromFrame =
       *(int *)(*(longlong *)
                 ((longlong)&this[1].PersistentState.AllottedGeometry.AbsolutePosition.field0_0x0 +
                 4) + 0x218);
  return;
}

// execGetAnalogMouseWheelKey @ 146a34540

void __cdecl UScrollBox::execGetAnalogMouseWheelKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 local_20;
  FSharedReferencer<1> local_18 [3];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0xb].field_0x18;
  local_20 = *(undefined8 *)&param_1[0xb].field_0x20;
  local_18[0].ReferenceController = *(TReferenceControllerBase<1> **)(param_1 + 0xc);
  if (local_18[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_18[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)param_3 = uVar1;
  if ((undefined8 *)((longlong)param_3 + 8) != &local_20) {
    *(undefined8 *)((longlong)param_3 + 8) = local_20;
    local_20 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18[0].ReferenceController);
  return;
}

// execGetConsumePointerInput @ 146a348f0

void __cdecl UScrollBox::execGetConsumePointerInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0xb].field_0x15;
  return;
}

// execGetIsFocusable @ 146a35630

void __cdecl UScrollBox::execGetIsFocusable(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0xc].field_0x8;
  return;
}

// execGetIsScrolling @ 146a35660

void __cdecl UScrollBox::execGetIsScrolling(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0x4b].field_0x20 != 0) &&
     ((*(byte *)(*(longlong *)&param_1[0x4b].field_0x20 + 0x464) & 8) != 0)) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetOverscrollOffset @ 146a35ca0

void __cdecl UScrollBox::execGetOverscrollOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SScrollBox **)&param_1[0x4b].field_0x20 != (SScrollBox *)0x0) {
    fVar1 = SScrollBox::GetOverscrollOffset(*(SScrollBox **)&param_1[0x4b].field_0x20);
    *(float *)param_3 = fVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetOverscrollPercentage @ 146a35cf0

void __cdecl UScrollBox::execGetOverscrollPercentage(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SScrollBox **)&param_1[0x4b].field_0x20 != (SScrollBox *)0x0) {
    fVar1 = SScrollBox::GetOverscrollPercentage(*(SScrollBox **)&param_1[0x4b].field_0x20);
    *(float *)param_3 = fVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetScrollOffset @ 146a35fa0

void __cdecl UScrollBox::execGetScrollOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SScrollBox **)&param_1[0x4b].field_0x20 != (SScrollBox *)0x0) {
    fVar1 = SScrollBox::GetScrollOffset(*(SScrollBox **)&param_1[0x4b].field_0x20);
    *(float *)param_3 = fVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetScrollOffsetOfEnd @ 146a35ff0

void __cdecl UScrollBox::execGetScrollOffsetOfEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SScrollBox **)&param_1[0x4b].field_0x20 != (SScrollBox *)0x0) {
    fVar1 = SScrollBox::GetScrollOffsetOfEnd(*(SScrollBox **)&param_1[0x4b].field_0x20);
    *(float *)param_3 = fVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetViewFraction @ 146a36710

void __cdecl UScrollBox::execGetViewFraction(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SScrollBox **)&param_1[0x4b].field_0x20 != (SScrollBox *)0x0) {
    fVar1 = SScrollBox::GetViewFraction(*(SScrollBox **)&param_1[0x4b].field_0x20);
    *(float *)param_3 = fVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetViewOffsetFraction @ 146a36810

void __cdecl UScrollBox::execGetViewOffsetFraction(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SScrollBox **)&param_1[0x4b].field_0x20 != (SScrollBox *)0x0) {
    fVar1 = SScrollBox::GetViewOffsetFraction(*(SScrollBox **)&param_1[0x4b].field_0x20);
    *(float *)param_3 = fVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execScrollToEnd @ 146a396c0

void __cdecl UScrollBox::execScrollToEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  SWidget *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SWidget **)&param_1[0x4b].field_0x20;
  if (this == (SWidget *)0x0) {
    return;
  }
  this[2].AccessibleSummaryBehavior = this[2].AccessibleSummaryBehavior | 0x20;
  SWidget::Invalidate(this,Layout);
  return;
}

// execScrollToStart @ 146a396f0

void __cdecl UScrollBox::execScrollToStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  SWidget *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SWidget **)&param_1[0x4b].field_0x20;
  if (this == (SWidget *)0x0) {
    return;
  }
  this[2].AccessibleSummaryBehavior = this[2].AccessibleSummaryBehavior & 0xdf;
  this[1].PersistentState.InitialClipState.TypedValue.Debugging_StateIndexFromFrame = 0;
  SWidget::Invalidate(this,Layout);
  return;
}

// execScrollWidgetIntoView @ 146a39750

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UScrollBox::execScrollWidgetIntoView(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDescendantScrollDestination EVar2;
  float fVar3;
  TSharedPtr<SWidget,1> *pTVar4;
  bool bVar5;
  EDescendantScrollDestination local_res8 [8];
  int local_res10 [2];
  float local_res20 [2];
  UWidget *local_58;
  TSharedPtr<SWidget,1> local_50;
  TSharedPtr<SWidget,1> local_40 [2];
  
  local_58 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
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
  bVar5 = local_res10[0] != 0;
  local_res8[0] = IntoView;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  fVar3 = local_res20[0];
  EVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50.Object = (SWidget *)0x0;
  local_50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_58 != (UWidget *)0x0) {
    pTVar4 = UWidget::GetCachedWidget(local_58,local_40);
    if (&local_50 != pTVar4) {
      local_50.Object = pTVar4->Object;
      pTVar4->Object = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_50.SharedReferenceCount,&pTVar4->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40[0].SharedReferenceCount.ReferenceController);
  }
  if (*(SScrollBox **)&param_1[0x4b].field_0x20 != (SScrollBox *)0x0) {
    SScrollBox::ScrollDescendantIntoView
              (*(SScrollBox **)&param_1[0x4b].field_0x20,&local_50,bVar5,EVar2,fVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  return;
}

// execSetAllowOverscroll @ 146a39be0

void __cdecl UScrollBox::execSetAllowOverscroll(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  int local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  param_1[0x48].field_0x1a = local_res8[0] != 0;
  if (this != (SScrollBox *)0x0) {
    SScrollBox::SetAllowOverscroll(this,local_res8[0] == 0);
  }
  return;
}

// execSetAlwaysShowScrollbar @ 146a39c80

void __cdecl UScrollBox::execSetAlwaysShowScrollbar(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  int local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  param_1[0x48].field_0x18 = local_res8[0] != 0;
  if (this != (SScrollBox *)0x0) {
    SScrollBox::SetScrollBarAlwaysVisible(this,local_res8[0] != 0);
  }
  return;
}

// execSetAnalogMouseWheelKey @ 146a39dc0

void __cdecl UScrollBox::execSetAnalogMouseWheelKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_38;
  FKeyDetails *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  FKey local_20;
  
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  local_30 = (FKeyDetails *)0x0;
  pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_20.KeyName = local_38;
  local_20.KeyDetails.Object = local_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20.KeyDetails.SharedReferenceCount.ReferenceController = pTStack_28;
  if (pTStack_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_28->SharedReferenceCount = (atomic<int>)((int)pTStack_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  SetAnalogMouseWheelKey((UScrollBox *)param_1,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  return;
}

// execSetAnimateWheelScrolling @ 146a3a100

void __cdecl
UScrollBox::execSetAnimateWheelScrolling(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  int local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  param_1[0x48].field_0x1d = local_res8[0] != 0;
  if (this != (SScrollBox *)0x0) {
    SScrollBox::SetAnimateWheelScrolling(this,local_res8[0] != 0);
  }
  return;
}

// execSetConsumeMouseWheel @ 146a3b3e0

void __cdecl UScrollBox::execSetConsumeMouseWheel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  EConsumeMouseWheel local_res8 [8];
  
  local_res8[0] = WhenScrollingPossible;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  param_1[0x47].field_0x1a = local_res8[0];
  if (this != (SScrollBox *)0x0) {
    SScrollBox::SetConsumeMouseWheel(this,local_res8[0]);
  }
  return;
}

// execSetConsumePointerInput @ 146a3b470

void __cdecl UScrollBox::execSetConsumePointerInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  int local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x4b].field_0x20;
  param_1[0xb].field_0x15 = local_res8[0] != 0;
  if (lVar2 != 0) {
    *(bool *)(lVar2 + 0x45d) = local_res8[0] != 0;
  }
  return;
}

// execSetIsFocusable @ 146a3dff0

void __cdecl UScrollBox::execSetIsFocusable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  int local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  param_1[0xc].field_0x8 = local_res8[0] != 0;
  if (this != (SScrollBox *)0x0) {
    SScrollBox::SetIsFocusable(this,local_res8[0] != 0);
  }
  return;
}

// execSetIsTouchScrollingEnabled @ 146a3e6d0

void __cdecl
UScrollBox::execSetIsTouchScrollingEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  int local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  param_1[0xb].field_0x14 = local_res8[0] != 0;
  if (this != (SScrollBox *)0x0) {
    SScrollBox::SetIsTouchScrollingEnabled(this,local_res8[0] != 0);
  }
  return;
}

// execSetNavigationDestination @ 146a3fa60

void __cdecl
UScrollBox::execSetNavigationDestination(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  EDescendantScrollDestination local_res8 [8];
  
  local_res8[0] = IntoView;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  param_1[0x48].field_0x1e = local_res8[0];
  if (this != (SScrollBox *)0x0) {
    SScrollBox::SetNavigationDestination(this,local_res8[0]);
  }
  return;
}

// execSetOrientation @ 146a406d0

void __cdecl UScrollBox::execSetOrientation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  param_1[0x47].field_0x18 = local_res8[0];
  if (this != (SScrollBox *)0x0) {
    SScrollBox::SetOrientation(this,(uint)local_res8[0]);
  }
  return;
}

// execSetScrollAnimationInterpolationSpeed @ 146a41840

void __cdecl
UScrollBox::execSetScrollAnimationInterpolationSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
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
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  *(float *)&param_1[0xb].field_0x10 = local_res8[0];
  if (this != (SScrollBox *)0x0) {
    SScrollBox::SetScrollingAnimationInterpolationSpeed(this,local_res8[0]);
  }
  return;
}

// execSetScrollBarVisibility @ 146a419a0

void __cdecl UScrollBox::execSetScrollBarVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  param_1[0x47].field_0x19 = local_res8[0];
  if (this != (SScrollBox *)0x0) {
    if (local_res8[0] == '\0') {
      SScrollBox::SetScrollBarVisibility(this,EVisibility::Visible);
    }
    else {
      if (local_res8[0] == '\x01') {
        SScrollBox::SetScrollBarVisibility(this,EVisibility::Collapsed);
        return;
      }
      if (local_res8[0] == '\x02') {
        SScrollBox::SetScrollBarVisibility(this,EVisibility::Hidden);
        return;
      }
      if (local_res8[0] == '\x03') {
        SScrollBox::SetScrollBarVisibility(this,EVisibility::HitTestInvisible);
        return;
      }
      if (local_res8[0] == '\x04') {
        SScrollBox::SetScrollBarVisibility(this,EVisibility::SelfHitTestInvisible);
        return;
      }
    }
  }
  return;
}

// execSetScrollOffset @ 146a41bf0

void __cdecl UScrollBox::execSetScrollOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
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
  *(float *)&param_1[0x4b].field_0x18 = local_res8[0];
  if (*(SScrollBox **)&param_1[0x4b].field_0x20 != (SScrollBox *)0x0) {
    SScrollBox::SetScrollOffset(*(SScrollBox **)&param_1[0x4b].field_0x20,local_res8[0]);
  }
  return;
}

// execSetScrollWhenFocusChanges @ 146a41c90

void __cdecl
UScrollBox::execSetScrollWhenFocusChanges(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  EScrollWhenFocusChanges local_res8 [8];
  
  local_res8[0] = NoScroll;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  param_1[0x48].field_0x24 = local_res8[0];
  if (this != (SScrollBox *)0x0) {
    SScrollBox::SetScrollWhenFocusChanges(this,local_res8[0]);
  }
  return;
}

// execSetScrollbarPadding @ 146a41d20

void __cdecl UScrollBox::execSetScrollbarPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0xc] = '\0';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar17 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar17[1];
  uVar3 = puVar17[2];
  uVar4 = puVar17[3];
  uVar5 = puVar17[4];
  uVar6 = puVar17[5];
  uVar7 = puVar17[6];
  uVar8 = puVar17[7];
  uVar9 = puVar17[8];
  uVar10 = puVar17[9];
  uVar11 = puVar17[10];
  uVar12 = puVar17[0xb];
  uVar13 = puVar17[0xc];
  uVar14 = puVar17[0xd];
  uVar15 = puVar17[0xe];
  uVar16 = puVar17[0xf];
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  param_1[0x48].field_0x8 = puVar17[0];
  param_1[0x48].field_0x9 = uVar2;
  param_1[0x48].field_0xa = uVar3;
  param_1[0x48].field_0xb = uVar4;
  param_1[0x48].field_0xc = uVar5;
  param_1[0x48].field_0xd = uVar6;
  param_1[0x48].field_0xe = uVar7;
  param_1[0x48].field_0xf = uVar8;
  param_1[0x48].field_0x10 = uVar9;
  param_1[0x48].field_0x11 = uVar10;
  param_1[0x48].field_0x12 = uVar11;
  param_1[0x48].field_0x13 = uVar12;
  param_1[0x48].field_0x14 = uVar13;
  param_1[0x48].field_0x15 = uVar14;
  param_1[0x48].field_0x16 = uVar15;
  param_1[0x48].field_0x17 = uVar16;
  if (this != (SScrollBox *)0x0) {
    SScrollBox::SetScrollBarPadding(this,(FMargin *)&param_1[0x48].field_0x8);
  }
  return;
}

// execSetScrollbarThickness @ 146a41de0

void __cdecl UScrollBox::execSetScrollbarThickness(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  FDeprecateVector2DParameter FVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar *puVar18;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar18 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar18 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = puVar18[1];
  uVar4 = puVar18[2];
  uVar5 = puVar18[3];
  uVar6 = puVar18[4];
  uVar7 = puVar18[5];
  uVar8 = puVar18[6];
  uVar9 = puVar18[7];
  uVar10 = puVar18[8];
  uVar11 = puVar18[9];
  uVar12 = puVar18[10];
  uVar13 = puVar18[0xb];
  uVar14 = puVar18[0xc];
  uVar15 = puVar18[0xd];
  uVar16 = puVar18[0xe];
  uVar17 = puVar18[0xf];
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  param_1[0x47].field_0x20 = puVar18[0];
  param_1[0x47].field_0x21 = uVar3;
  param_1[0x47].field_0x22 = uVar4;
  param_1[0x47].field_0x23 = uVar5;
  param_1[0x47].field_0x24 = uVar6;
  param_1[0x47].field_0x25 = uVar7;
  param_1[0x47].field_0x26 = uVar8;
  param_1[0x47].field_0x27 = uVar9;
  param_1[0x48].field_0x0 = uVar10;
  param_1[0x48].field_0x1 = uVar11;
  param_1[0x48].field_0x2 = uVar12;
  param_1[0x48].field_0x3 = uVar13;
  param_1[0x48].field_0x4 = uVar14;
  param_1[0x48].field_0x5 = uVar15;
  param_1[0x48].field_0x6 = uVar16;
  param_1[0x48].field_0x7 = uVar17;
  if (this != (SScrollBox *)0x0) {
    FVar2._4_4_ = (float)*(double *)(param_1 + 0x48);
    FVar2._0_4_ = (float)*(double *)&param_1[0x47].field_0x20;
    SScrollBox::SetScrollBarThickness(this,FVar2);
  }
  return;
}

// execSetWheelScrollMultiplier @ 146a44a00

void __cdecl
UScrollBox::execSetWheelScrollMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SScrollBox *this;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
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
  this = *(SScrollBox **)&param_1[0x4b].field_0x20;
  *(float *)(param_1 + 0x49) = local_res8[0];
  if (this != (SScrollBox *)0x0) {
    SScrollBox::SetWheelScrollMultiplier(this,local_res8[0]);
  }
  return;
}

// operator() @ 1504f6650

bool __thiscall `UScrollBox::InitBackPadScrolling'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4808813781679342188>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4808813781679342188>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6890

bool __thiscall `UScrollBox::InitFrontPadScrolling'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4808813781679342194>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4808813781679342194>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f69d0

bool __thiscall `UScrollBox::InitNavigationScrollPadding'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4808813781679342200>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4808813781679342200>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

