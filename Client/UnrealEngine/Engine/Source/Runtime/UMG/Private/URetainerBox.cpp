// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 49

// GetbRetainRender_WrapperImpl @ 14695b250

void __cdecl URetainerBox::GetbRetainRender_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1c8);
  return;
}

// SetbRetainRender_WrapperImpl @ 14695b260

void __cdecl URetainerBox::SetbRetainRender_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  SRetainerWidget *this;
  
  bVar1 = *(bool *)param_2;
  *(bool *)((longlong)param_1 + 0x1c8) = bVar1;
  this = *(SRetainerWidget **)((longlong)param_1 + 0x1e8);
  if (this == (SRetainerWidget *)0x0) {
    return;
  }
  if (this->bEnableRetainedRenderingDesire != bVar1) {
    this->bEnableRetainedRenderingDesire = bVar1;
    SRetainerWidget::OnRetainerModeChanged(this);
    return;
  }
  return;
}

// GetRenderOnInvalidation_WrapperImpl @ 14695b280

void __cdecl URetainerBox::GetRenderOnInvalidation_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1c9);
  return;
}

// GetRenderOnPhase_WrapperImpl @ 14695b290

void __cdecl URetainerBox::GetRenderOnPhase_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1ca);
  return;
}

// GetPhase_WrapperImpl @ 14695b2a0

void __cdecl URetainerBox::GetPhase_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1cc);
  return;
}

// GetPhaseCount_WrapperImpl @ 14695b2b0

void __cdecl URetainerBox::GetPhaseCount_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1d0);
  return;
}

// GetEffectMaterial_WrapperImpl @ 14695b2c0

void __cdecl URetainerBox::GetEffectMaterial_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1d8);
  return;
}

// SetEffectMaterial_WrapperImpl @ 14695b2e0

void __cdecl URetainerBox::SetEffectMaterial_WrapperImpl(void *param_1,void *param_2)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = *(UMaterialInterface **)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UMaterialInterface **)((longlong)param_1 + 0x1d8) = pUVar1;
  if (*(SRetainerWidget **)((longlong)param_1 + 0x1e8) != (SRetainerWidget *)0x0) {
    SRetainerWidget::SetEffectMaterial(*(SRetainerWidget **)((longlong)param_1 + 0x1e8),pUVar1);
  }
  return;
}

// GetTextureParameter_WrapperImpl @ 14695b340

void __cdecl URetainerBox::GetTextureParameter_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1e0);
  return;
}

// SetTextureParameter_WrapperImpl @ 14695b3a0

void __cdecl URetainerBox::SetTextureParameter_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = uVar1;
  if (*(longlong *)((longlong)param_1 + 0x1e8) == 0) {
    return;
  }
  *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x1e8) + 0x5d0) = uVar1;
  return;
}

// StaticClass @ 14695b410

UClass * __cdecl URetainerBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetainerBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"RetainerBox",&Z_Registration_Info_UClass_URetainerBox.InnerSingleton
               ,StaticRegisterNativesURetainerBox,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URetainerBox>,InternalVTableHelperCtorCaller<URetainerBox>,
               local_res8,UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetainerBox.InnerSingleton;
}

// URetainerBox @ 14698c990

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

URetainerBox * __thiscall URetainerBox::URetainerBox(URetainerBox *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->bRetainRender = true;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  (this->EffectMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->TextureParameter).ComparisonIndex = 0;
  (this->TextureParameter).Number = 0;
  (this->MyRetainerWidget).Object = (SRetainerWidget *)0x0;
  (this->MyRetainerWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// URetainerBox @ 14698ca00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

URetainerBox * __thiscall URetainerBox::URetainerBox(URetainerBox *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->bRetainRender = true;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined1 *)&this->_padding_ = 0;
  (this->EffectMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->TextureParameter).ComparisonIndex = 0;
  (this->TextureParameter).Number = 0;
  (this->MyRetainerWidget).Object = (SRetainerWidget *)0x0;
  (this->MyRetainerWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  UWidget::SetVisibilityInternal((UWidget *)this,Visible);
  this->Phase = 0;
  this->PhaseCount = 1;
  this->RenderOnInvalidation = false;
  this->RenderOnPhase = true;
  this->TextureParameter = DefaultTextureParameterName;
  return this;
}

// ~URetainerBox @ 146993cf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall URetainerBox::~URetainerBox(URetainerBox *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyRetainerWidget).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetCachedAllottedGeometry @ 1469ce010

FGeometry * __thiscall
URetainerBox::GetCachedAllottedGeometry(URetainerBox *this,FGeometry *__return_storage_ptr__)

{
  undefined8 uVar1;
  SRetainerWidget *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FGeometry *pFVar6;
  
  this_00 = (this->MyRetainerWidget).Object;
  if (this_00 != (SRetainerWidget *)0x0) {
    pFVar6 = SWidget::GetTickSpaceGeometry((SWidget *)this_00);
    uVar1 = *(undefined8 *)&pFVar6->Scale;
    uVar2 = *(undefined8 *)((longlong)&(pFVar6->AbsolutePosition).field0_0x0 + 4);
    uVar3 = *(undefined8 *)((longlong)&(pFVar6->Position).field0_0x0 + 4);
    __return_storage_ptr__->Size = pFVar6->Size;
    *(undefined8 *)&__return_storage_ptr__->Scale = uVar1;
    uVar4 = *(undefined8 *)((pFVar6->AccumulatedRenderTransform).M.M[0] + 1);
    uVar5 = *(undefined8 *)((pFVar6->AccumulatedRenderTransform).M.M[1] + 1);
    *(undefined8 *)((longlong)&(__return_storage_ptr__->AbsolutePosition).field0_0x0 + 4) = uVar2;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 4) = uVar3;
    uVar1 = *(undefined8 *)((longlong)&(pFVar6->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[0] + 1) = uVar4;
    *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[1] + 1) = uVar5;
    *(undefined8 *)
     ((longlong)&(__return_storage_ptr__->AccumulatedRenderTransform).Trans.field0_0x0 + 4) = uVar1;
    return __return_storage_ptr__;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGeometry::FGeometry(&TempGeo);
      _Init_thread_footer(&::_TSS0);
    }
  }
  uVar3 = TempGeo._24_8_;
  uVar2 = TempGeo._16_8_;
  uVar1 = TempGeo._8_8_;
  __return_storage_ptr__->Size = TempGeo.Size;
  *(undefined8 *)&__return_storage_ptr__->Scale = uVar1;
  uVar4 = TempGeo.AccumulatedRenderTransform._12_8_;
  uVar1 = TempGeo.AccumulatedRenderTransform.M.M._4_8_;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->AbsolutePosition).field0_0x0 + 4) = uVar2;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 4) = uVar3;
  uVar2 = TempGeo._48_8_;
  *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[0] + 1) = uVar1;
  *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[1] + 1) = uVar4;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->AccumulatedRenderTransform).Trans.field0_0x0 + 4) = uVar2;
  return __return_storage_ptr__;
}

// GetEffectMaterial @ 1469d0200

UMaterialInstanceDynamic * __thiscall URetainerBox::GetEffectMaterial(URetainerBox *this)

{
  SRetainerWidget *pSVar1;
  
  pSVar1 = (this->MyRetainerWidget).Object;
  if (pSVar1 == (SRetainerWidget *)0x0) {
    return (UMaterialInstanceDynamic *)0x0;
  }
  return (pSVar1->RenderingResources->DynamicEffect).field0_0x0.DebugPtr;
}

// GetEffectMaterialInterface @ 1469d0220

UMaterialInterface * __thiscall URetainerBox::GetEffectMaterialInterface(URetainerBox *this)

{
  return (this->EffectMaterial).field0_0x0.DebugPtr;
}

// GetPhase @ 1469d37e0

int __thiscall URetainerBox::GetPhase(URetainerBox *this)

{
  return this->Phase;
}

// GetPhaseCount @ 1469d37f0

int __thiscall URetainerBox::GetPhaseCount(URetainerBox *this)

{
  return this->PhaseCount;
}

// GetPrivateStaticClass @ 1469d5230

UClass * __cdecl URetainerBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetainerBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"RetainerBox",&Z_Registration_Info_UClass_URetainerBox.InnerSingleton
               ,StaticRegisterNativesURetainerBox,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URetainerBox>,InternalVTableHelperCtorCaller<URetainerBox>,
               local_res8,UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetainerBox.InnerSingleton;
}

// GetTextureParameter @ 1469d8f10

FName * __thiscall URetainerBox::GetTextureParameter(URetainerBox *this)

{
  return &this->TextureParameter;
}

// InitPhase @ 1469dff60

void __thiscall URetainerBox::InitPhase(URetainerBox *this,int param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyRetainerWidget).Object != (SRetainerWidget *)0x0) {
    `URetainerBox::InitPhase'::__l2::<lambda_1>::operator()(local_res10);
    this->Phase = param_1;
    return;
  }
  this->Phase = param_1;
  return;
}

// InitPhaseCount @ 1469dffb0

void __thiscall URetainerBox::InitPhaseCount(URetainerBox *this,int param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyRetainerWidget).Object != (SRetainerWidget *)0x0) {
    `URetainerBox::InitPhaseCount'::__l2::<lambda_1>::operator()(local_res10);
    this->PhaseCount = param_1;
    return;
  }
  this->PhaseCount = param_1;
  return;
}

// InitRenderOnInvalidation @ 1469e0000

void __thiscall URetainerBox::InitRenderOnInvalidation(URetainerBox *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyRetainerWidget).Object != (SRetainerWidget *)0x0) {
    `URetainerBox::InitRenderOnInvalidation'::__l2::<lambda_1>::operator()(local_res10);
    this->RenderOnInvalidation = param_1;
    return;
  }
  this->RenderOnInvalidation = param_1;
  return;
}

// InitRenderOnPhase @ 1469e0050

void __thiscall URetainerBox::InitRenderOnPhase(URetainerBox *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyRetainerWidget).Object != (SRetainerWidget *)0x0) {
    `URetainerBox::InitRenderOnPhase'::__l2::<lambda_1>::operator()(local_res10);
    this->RenderOnPhase = param_1;
    return;
  }
  this->RenderOnPhase = param_1;
  return;
}

// IsRenderOnInvalidation @ 1469e2850

bool __thiscall URetainerBox::IsRenderOnInvalidation(URetainerBox *this)

{
  return this->RenderOnInvalidation;
}

// IsRenderOnPhase @ 1469e2860

bool __thiscall URetainerBox::IsRenderOnPhase(URetainerBox *this)

{
  return this->RenderOnPhase;
}

// IsRetainRendering @ 1469e2910

bool __thiscall URetainerBox::IsRetainRendering(URetainerBox *this)

{
  return this->bRetainRender;
}

// OnSlotAdded @ 1469f0a60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall URetainerBox::OnSlotAdded(URetainerBox *this,UPanelSlot *param_1)

{
  SRetainerWidget *this_00;
  UWidget *this_01;
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  this_00 = (this->MyRetainerWidget).Object;
  if (this_00 != (SRetainerWidget *)0x0) {
    this_01 = (param_1->Content).field0_0x0.DebugPtr;
    if (this_01 != (UWidget *)0x0) {
      pTVar1 = UWidget::TakeWidget(this_01,&local_18);
      SRetainerWidget::SetContent(this_00,pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return;
    }
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
    SRetainerWidget::SetContent(this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnSlotRemoved @ 1469f1650

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall URetainerBox::OnSlotRemoved(URetainerBox *this,UPanelSlot *param_1)

{
  SRetainerWidget *this_00;
  
  this_00 = (this->MyRetainerWidget).Object;
  if (this_00 != (SRetainerWidget *)0x0) {
    SRetainerWidget::SetContent(this_00,&SNullWidget::NullWidget);
    return;
  }
  return;
}

// RebuildWidget @ 146a03690

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
URetainerBox::RebuildWidget(URetainerBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SRetainerWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FArguments *pFVar8;
  FName *pFVar9;
  TSharedRef<SWidget,1> *pTVar10;
  ForAnyElementType FVar11;
  UObject *pUVar12;
  UObject *pUVar13;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FName local_res20;
  TSlateDecl<SRetainerWidget,RequiredArgs::T0RequiredArgs> local_2f8;
  SRetainerWidget *local_2e0;
  FSharedReferencer<1> local_2d8;
  FName local_2d0;
  FMemScope local_2c8;
  FString local_2c0;
  FString local_2b0;
  TSharedRef<SWidget,1> local_2a0;
  FName local_290;
  FString local_288;
  TSharedRef<SWidget,1> local_278;
  FArguments local_268;
  
  pUVar13 = (UObject *)0x0;
  pFVar8 = SRetainerWidget::FArguments::FArguments(&local_268);
  pFVar8->_RenderOnInvalidation = this->RenderOnInvalidation;
  pFVar8->_RenderOnPhase = this->RenderOnPhase;
  pFVar8->_Phase = this->Phase;
  pFVar8->_PhaseCount = this->PhaseCount;
  local_res18 = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(&local_res18,&local_2b0);
  local_res20 = (FName)this->_padding_;
  ::FName::ToString(&local_res20,&local_288);
  ::FString::PrintfImpl(&local_2c0,L"%s [%s]");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_2c0.Data.ArrayNum != 0) {
    FVar11.Data = local_2c0.Data.AllocatorInstance.Data;
  }
  pFVar9 = ::FName::FName(&local_290,(wchar_t *)FVar11.Data);
  pFVar8->_StatId = *pFVar9;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2c8,&local_2d0,true);
  TSlateDecl<SRetainerWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SRetainerWidget,RequiredArgs::T0RequiredArgs>
            (&local_2f8,"SRetainerWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RetainerBox.cpp"
             ,0x94,local_res8);
  FMemScope::~FMemScope(&local_2c8);
  FLLMScope::~FLLMScope(local_res10);
  pSVar1 = local_2f8._Widget.Object;
  if ((local_2f8._Widget.Object == (SRetainerWidget *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar10;
  }
  SWidget::SWidgetConstruct((SWidget *)local_2f8._Widget.Object,(FSlateBaseNamedArgs *)pFVar8);
  SRetainerWidget::Construct(local_2f8._Widget.Object,pFVar8);
  if ((local_2f8._Widget.Object == (SRetainerWidget *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar10;
  }
  if (((local_2f8._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar6 = (**(code **)(*(longlong *)local_2f8._Widget.Object + 0x228))(local_2f8._Widget.Object);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_146a038a2;
  }
  bVar7 = 0x20;
LAB_146a038a2:
  (local_2f8._Widget.Object)->field_0x30 = (local_2f8._Widget.Object)->field_0x30 & 0xdf;
  (local_2f8._Widget.Object)->field_0x30 = (local_2f8._Widget.Object)->field_0x30 | bVar7;
  if ((local_2f8._Widget.Object == (SRetainerWidget *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar10;
  }
  (local_2f8._Widget.Object)->field_0x31 = (local_2f8._Widget.Object)->field_0x31 | 4;
  if ((local_2f8._Widget.Object == (SRetainerWidget *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar10;
  }
  FVar4.ReferenceController = local_2f8._Widget.SharedReferenceCount.ReferenceController;
  local_2f8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2f8._Widget.Object = (SRetainerWidget *)0x0;
  if ((pSVar1 == (SRetainerWidget *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar10;
  }
  local_2e0 = pSVar1;
  local_2d8.ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyRetainerWidget != (TSharedPtr<SRetainerWidget,1> *)&local_2e0) {
    (this->MyRetainerWidget).Object = pSVar1;
    local_2e0 = (SRetainerWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyRetainerWidget).SharedReferenceCount,&local_2d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_268);
  if (0 < (int)this->_padding_) {
    if (((this->MyRetainerWidget).Object == (SRetainerWidget *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar10;
    }
    pSVar1 = (this->MyRetainerWidget).Object;
    pUVar12 = pUVar13;
    if (((0 < (int)this->_padding_) &&
        (pUVar12 = *(UObject **)this->_padding_, UE::GC::GIsIncrementalReachabilityPending != false)
        ) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    if (*(longlong *)&pUVar12[1].field_0x8 == 0) {
      local_2a0.Object = SNullWidget::NullWidget.Object;
      local_2a0.SharedReferenceCount.ReferenceController =
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
      SRetainerWidget::SetContent(pSVar1,&local_2a0);
      local_278.SharedReferenceCount.ReferenceController =
           local_2a0.SharedReferenceCount.ReferenceController;
    }
    else {
      if (((0 < (int)this->_padding_) &&
          (pUVar13 = *(UObject **)this->_padding_,
          UE::GC::GIsIncrementalReachabilityPending != false)) && (pUVar13 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      pTVar10 = UWidget::TakeWidget(*(UWidget **)&pUVar13[1].field_0x8,&local_278);
      SRetainerWidget::SetContent(pSVar1,pTVar10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
  }
  if (((this->MyRetainerWidget).Object == (SRetainerWidget *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar10;
  }
  pTVar2 = (this->MyRetainerWidget).SharedReferenceCount.ReferenceController;
  pSVar1 = (this->MyRetainerWidget).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar1 == (SRetainerWidget *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar10;
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0aec0

void __thiscall URetainerBox::ReleaseSlateResources(URetainerBox *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyRetainerWidget != (TSharedPtr<SRetainerWidget,1> *)&local_18) {
    (this->MyRetainerWidget).Object = (SRetainerWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyRetainerWidget).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// RequestRender @ 146a0d970

void __thiscall URetainerBox::RequestRender(URetainerBox *this)

{
  SRetainerWidget *pSVar1;
  
  pSVar1 = (this->MyRetainerWidget).Object;
  if (pSVar1 == (SRetainerWidget *)0x0) {
    return;
  }
  pSVar1->bRenderRequested = true;
  FSlateInvalidationRoot::InvalidateRootChildOrder
            ((FSlateInvalidationRoot *)&pSVar1->field_0x2a8,(SWidget *)0x0);
  return;
}

// SetEffectMaterial @ 146a132a0

void __thiscall URetainerBox::SetEffectMaterial(URetainerBox *this,UMaterialInterface *param_1)

{
  SRetainerWidget *this_00;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->EffectMaterial).field0_0x0.DebugPtr = param_1;
  this_00 = (this->MyRetainerWidget).Object;
  if (this_00 != (SRetainerWidget *)0x0) {
    SRetainerWidget::SetEffectMaterial(this_00,param_1);
  }
  return;
}

// SetRenderingPhase @ 146a19680

void __thiscall URetainerBox::SetRenderingPhase(URetainerBox *this,int param_1,int param_2)

{
  SRetainerWidget *pSVar1;
  
  this->Phase = param_1;
  this->PhaseCount = param_2;
  if (param_2 < 1) {
    param_2 = 1;
    this->PhaseCount = 1;
  }
  pSVar1 = (this->MyRetainerWidget).Object;
  if (pSVar1 == (SRetainerWidget *)0x0) {
    return;
  }
  pSVar1->Phase = param_1;
  pSVar1->PhaseCount = param_2;
  return;
}

// SetRetainRendering @ 146a196c0

void __thiscall URetainerBox::SetRetainRendering(URetainerBox *this,bool param_1)

{
  SRetainerWidget *this_00;
  
  this->bRetainRender = param_1;
  this_00 = (this->MyRetainerWidget).Object;
  if (this_00 == (SRetainerWidget *)0x0) {
    return;
  }
  if (this_00->bEnableRetainedRenderingDesire != param_1) {
    this_00->bEnableRetainedRenderingDesire = param_1;
    SRetainerWidget::OnRetainerModeChanged(this_00);
    return;
  }
  return;
}

// SetTextureParameter @ 146a1c960

void __thiscall URetainerBox::SetTextureParameter(URetainerBox *this,FName param_1)

{
  SRetainerWidget *pSVar1;
  
  this->TextureParameter = param_1;
  pSVar1 = (this->MyRetainerWidget).Object;
  if (pSVar1 == (SRetainerWidget *)0x0) {
    return;
  }
  pSVar1->DynamicEffectTextureParameter = param_1;
  return;
}

// StaticRegisterNativesURetainerBox @ 146a1ed00

void __cdecl URetainerBox::StaticRegisterNativesURetainerBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_URetainerBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a24540

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

void __thiscall URetainerBox::SynchronizeProperties(URetainerBox *this)

{
  SRetainerWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar1 = (this->MyRetainerWidget).Object;
  if (pSVar1 != (SRetainerWidget *)0x0) {
    SRetainerWidget::SetRetainedRendering(pSVar1,this->bRetainRender);
    if ((this->MyRetainerWidget).Object == (SRetainerWidget *)0x0) {
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
    SRetainerWidget::SetEffectMaterial
              ((this->MyRetainerWidget).Object,(this->EffectMaterial).field0_0x0.DebugPtr);
    if ((this->MyRetainerWidget).Object == (SRetainerWidget *)0x0) {
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
    SRetainerWidget::SetTextureParameter((this->MyRetainerWidget).Object,this->TextureParameter);
    if ((this->MyRetainerWidget).Object == (SRetainerWidget *)0x0) {
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
    pSVar1 = (this->MyRetainerWidget).Object;
    pUVar4 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    SRetainerWidget::SetWorld(pSVar1,pUVar4);
  }
  return;
}

// execGetEffectMaterial @ 146a35190

void __cdecl URetainerBox::execGetEffectMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMaterialInstanceDynamic *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SRetainerWidget **)&param_1[0xc].field_0x8 != (SRetainerWidget *)0x0) {
    pUVar1 = SRetainerWidget::GetEffectMaterial(*(SRetainerWidget **)&param_1[0xc].field_0x8);
    *(UMaterialInstanceDynamic **)param_3 = pUVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execRequestRender @ 146a39310

void __cdecl URetainerBox::execRequestRender(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[0xc].field_0x8;
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x4ec) = 1;
  FSlateInvalidationRoot::InvalidateRootChildOrder
            ((FSlateInvalidationRoot *)(lVar1 + 0x2a8),(SWidget *)0x0);
  return;
}

// execSetEffectMaterial @ 146a3c010

void __cdecl URetainerBox::execSetEffectMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMaterialInterface *pUVar2;
  UMaterialInterface *local_res8;
  
  local_res8 = (UMaterialInterface *)0x0;
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
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  *(UMaterialInterface **)&param_1[0xb].field_0x20 = pUVar2;
  if (*(SRetainerWidget **)&param_1[0xc].field_0x8 != (SRetainerWidget *)0x0) {
    SRetainerWidget::SetEffectMaterial(*(SRetainerWidget **)&param_1[0xc].field_0x8,pUVar2);
  }
  return;
}

// execSetRenderingPhase @ 146a413d0

void __cdecl URetainerBox::execSetRenderingPhase(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)&param_1[0xb].field_0x14 = local_res8[0];
  *(int *)&param_1[0xb].field_0x18 = local_res10[0];
  iVar2 = local_res10[0];
  if (local_res10[0] < 1) {
    iVar2 = 1;
    *(undefined4 *)&param_1[0xb].field_0x18 = 1;
  }
  if (*(SRetainerWidget **)&param_1[0xc].field_0x8 != (SRetainerWidget *)0x0) {
    SRetainerWidget::SetRenderingPhase
              (*(SRetainerWidget **)&param_1[0xc].field_0x8,local_res8[0],iVar2);
  }
  return;
}

// execSetRetainRendering @ 146a414d0

void __cdecl URetainerBox::execSetRetainRendering(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SRetainerWidget *this;
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
  this = *(SRetainerWidget **)&param_1[0xc].field_0x8;
  param_1[0xb].field_0x10 = local_res8[0] != 0;
  if (this != (SRetainerWidget *)0x0) {
    SRetainerWidget::SetRetainedRendering(this,local_res8[0] != 0);
  }
  return;
}

// execSetTextureParameter @ 146a43cb0

void __cdecl URetainerBox::execSetTextureParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)&param_1[0xc].field_0x0 = local_res8.ComparisonIndex.Value;
  *(uint *)&param_1[0xc].field_0x4 = local_res8.Number;
  if (*(SRetainerWidget **)&param_1[0xc].field_0x8 != (SRetainerWidget *)0x0) {
    SRetainerWidget::SetTextureParameter(*(SRetainerWidget **)&param_1[0xc].field_0x8,local_res8);
  }
  return;
}

// operator() @ 1504f6a50

bool __thiscall `URetainerBox::InitPhase'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3299655779597943030>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3299655779597943030>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6a90

bool __thiscall `URetainerBox::InitPhaseCount'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3299655779597943036>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3299655779597943036>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6ad0

bool __thiscall `URetainerBox::InitRenderOnInvalidation'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3299655779597943018>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3299655779597943018>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6b10

bool __thiscall `URetainerBox::InitRenderOnPhase'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3299655779597943024>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3299655779597943024>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

