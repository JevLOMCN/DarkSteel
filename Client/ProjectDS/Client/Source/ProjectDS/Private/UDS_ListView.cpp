// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4dd520

UClass * __cdecl UDS_ListView::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ListView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ListView",
               &Z_Registration_Info_UClass_UDS_ListView.InnerSingleton,
               StaticRegisterNativesUDS_ListView,0x1100,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ListView>,
               InternalVTableHelperCtorCaller<UDS_ListView>,local_res8,UListView::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ListView.InnerSingleton;
}

// UDS_ListView @ 14b4dfdd0

UDS_ListView * __thiscall UDS_ListView::UDS_ListView(UDS_ListView *this,FVTableHelper *param_1)

{
  UListView::UListView((UListView *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UDS_ListView__6B_;
  return this;
}

// ~UDS_ListView @ 14b4e0410

void __thiscall UDS_ListView::~UDS_ListView(UDS_ListView *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UDS_ListView__6B_;
  UListView::~UListView((UListView *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e2200

UClass * __cdecl UDS_ListView::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ListView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ListView",
               &Z_Registration_Info_UClass_UDS_ListView.InnerSingleton,
               StaticRegisterNativesUDS_ListView,0x1100,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ListView>,
               InternalVTableHelperCtorCaller<UDS_ListView>,local_res8,UListView::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ListView.InnerSingleton;
}

// StaticRegisterNativesUDS_ListView @ 14b4e28b0

void __cdecl UDS_ListView::StaticRegisterNativesUDS_ListView(void)

{
  return;
}

// UDS_ListView @ 14bc83f10

UDS_ListView * __thiscall UDS_ListView::UDS_ListView(UDS_ListView *this,FObjectInitializer *param_1)

{
  UListView::UListView((UListView *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UDS_ListView__6B_;
  return this;
}

// BeginDestroy @ 14bc87d90

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

void __thiscall UDS_ListView::BeginDestroy(UDS_ListView *this)

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

// ReleaseSlateResources @ 14bcc3bc0

void __thiscall UDS_ListView::ReleaseSlateResources(UDS_ListView *this,bool param_1)

{
  undefined8 uStack_28;
  FSharedReferencer<1> FStack_20;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  uStack_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x338 != &uStack_28) {
    *(undefined8 *)&this->field_0x338 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x340,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  FUserWidgetPool::ResetPool((FUserWidgetPool *)&this->field_0x260);
  *(undefined4 *)&this->field_0x1e8 = 0;
  if (*(int *)&this->field_0x1ec < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->field_0x1e0,0,(int *)&this->field_0x1ec);
  }
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0xf68 != &uStack_18) {
    *(undefined8 *)&this->field_0xf68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0xf70,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SynchronizeProperties @ 14bccb580

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ListView::SynchronizeProperties(UDS_ListView *this)

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

