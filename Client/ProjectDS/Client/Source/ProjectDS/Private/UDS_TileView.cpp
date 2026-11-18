// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b5b8b70

UClass * __cdecl UDS_TileView::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TileView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TileView",
               &Z_Registration_Info_UClass_UDS_TileView.InnerSingleton,
               StaticRegisterNativesUDS_TileView,0x1120,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TileView>,
               InternalVTableHelperCtorCaller<UDS_TileView>,local_res8,UTileView::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TileView.InnerSingleton;
}

// UDS_TileView @ 14b5bd580

UDS_TileView * __thiscall UDS_TileView::UDS_TileView(UDS_TileView *this,FVTableHelper *param_1)

{
  UTileView::UTileView((UTileView *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UDS_TileView__6B_;
  return this;
}

// ~UDS_TileView @ 14b5be1e0

void __thiscall UDS_TileView::~UDS_TileView(UDS_TileView *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UDS_TileView__6B_;
  UTileView::~UTileView((UTileView *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bfc60

UClass * __cdecl UDS_TileView::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TileView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TileView",
               &Z_Registration_Info_UClass_UDS_TileView.InnerSingleton,
               StaticRegisterNativesUDS_TileView,0x1120,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TileView>,
               InternalVTableHelperCtorCaller<UDS_TileView>,local_res8,UTileView::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TileView.InnerSingleton;
}

// StaticRegisterNativesUDS_TileView @ 14b5c00e0

void __cdecl UDS_TileView::StaticRegisterNativesUDS_TileView(void)

{
  return;
}

// UDS_TileView @ 14bc842c0

UDS_TileView * __thiscall UDS_TileView::UDS_TileView(UDS_TileView *this,FObjectInitializer *param_1)

{
  UTileView::UTileView((UTileView *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UDS_TileView__6B_;
  return this;
}

// BeginDestroy @ 14bc87e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_TileView::BeginDestroy(UDS_TileView *this)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  
  if ((this->field_0xf9 & 0x20) != 0) {
    pUVar1 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      UGameViewportSubsystem::RemoveWidget(this_00,(UWidget *)this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x0001469a3148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))(this,0);
  return;
}

// ReleaseSlateResources @ 14bcc3c60

void __thiscall UDS_TileView::ReleaseSlateResources(UDS_TileView *this,bool param_1)

{
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  UListView::ReleaseSlateResources((UListView *)this,param_1);
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x1108 != &uStack_18) {
    *(undefined8 *)&this->field_0x1108 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x1110,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SynchronizeProperties @ 14bccbba0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_TileView::SynchronizeProperties(UDS_TileView *this)

{
  STableViewBase *this_00;
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  longlong lVar4;
  TOptional<double> TStack_18;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  if (*(STableViewBase **)&this->field_0x338 == (STableViewBase *)0x0) {
    return;
  }
  STableViewBase::SetIsScrollAnimationEnabled
            (*(STableViewBase **)&this->field_0x338,(bool)this->field_0x1fc);
  if ((*(longlong *)&this->field_0x338 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  STableViewBase::SetScrollingAnimationInterpolationSpeed
            (*(STableViewBase **)&this->field_0x338,*(float *)&this->field_0x200);
  if ((*(longlong *)&this->field_0x338 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  STableViewBase::SetEnableTouchAnimatedScrolling
            (*(STableViewBase **)&this->field_0x338,(bool)this->field_0x204);
  if ((*(longlong *)&this->field_0x338 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  STableViewBase::SetIsRightClickScrollingEnabled
            (*(STableViewBase **)&this->field_0x338,(bool)this->field_0x206);
  if ((*(longlong *)&this->field_0x338 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  STableViewBase::SetIsTouchScrollingEnabled
            (*(STableViewBase **)&this->field_0x338,(bool)this->field_0x207);
  if ((*(longlong *)&this->field_0x338 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  STableViewBase::SetIsPointerScrollingEnabled
            (*(STableViewBase **)&this->field_0x338,(bool)this->field_0x208);
  if ((*(longlong *)&this->field_0x338 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  STableViewBase::SetAllowOverscroll
            (*(STableViewBase **)&this->field_0x338,this->field_0x205 == '\0');
  if ((*(longlong *)&this->field_0x338 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TStack_18.bIsSet = this->field_0x20a != '\0';
  if (TStack_18.bIsSet) {
    TStack_18.TypedValue = (double)*(float *)&this->field_0x20c;
  }
  STableViewBase::SetFixedLineScrollOffset(*(STableViewBase **)&this->field_0x338,&TStack_18);
  if ((*(longlong *)&this->field_0x338 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = GlobalScrollAmount.Ref;
  this_00 = *(STableViewBase **)&this->field_0x338;
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  STableViewBase::SetWheelScrollMultiplier
            (this_00,*(float *)((longlong)pTVar2->ShadowedValue + lVar4) *
                     *(float *)&this->field_0x1f8);
  if ((*(longlong *)&this->field_0x338 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  STableViewBase::SetSelectItemOnNavigation
            (*(STableViewBase **)&this->field_0x338,(bool)this->field_0x241);
  return;
}

