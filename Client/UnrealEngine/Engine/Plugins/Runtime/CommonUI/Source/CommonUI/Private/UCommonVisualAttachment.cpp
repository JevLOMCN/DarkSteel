// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 13

// GetContentAnchor_WrapperImpl @ 14a786870

void __cdecl UCommonVisualAttachment::GetContentAnchor_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x208);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x200);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetContentAnchor_WrapperImpl @ 14a786890

void __cdecl UCommonVisualAttachment::SetContentAnchor_WrapperImpl(void *param_1,void *param_2)

{
  SWidget *this;
  undefined8 uVar1;
  undefined8 uVar2;
  SWidget *pSVar3;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x200) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x208) = uVar1;
  this = *(SWidget **)((longlong)param_1 + 0x210);
  if ((this != (SWidget *)0x0) &&
     ((*(double *)param_2 != *(double *)&this[1].PersistentState.InitialClipState.TypedValue.Flags
      || (*(double *)((longlong)param_2 + 8) !=
          *(double *)
           &this[1].PersistentState.InitialClipState.TypedValue.Debugging_StateIndexFromFrame)))) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 8);
    pSVar3 = this + 1;
    (pSVar3->PersistentState).InitialClipState.TypedValue.Flags = (char)uVar1;
    *(int3 *)&(pSVar3->PersistentState).InitialClipState.TypedValue.field_0x39 =
         (int3)((ulonglong)uVar1 >> 8);
    (pSVar3->PersistentState).InitialClipState.TypedValue.Debugging_StateIndex =
         (int)((ulonglong)uVar1 >> 0x20);
    *(undefined8 *)
     &this[1].PersistentState.InitialClipState.TypedValue.Debugging_StateIndexFromFrame = uVar2;
    SWidget::Invalidate(this,Layout);
    return;
  }
  return;
}

// StaticClass @ 14a786920

UClass * __cdecl UCommonVisualAttachment::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonVisualAttachment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonVisualAttachment",
               &Z_Registration_Info_UClass_UCommonVisualAttachment.InnerSingleton,
               StaticRegisterNativesUCommonVisualAttachment,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonVisualAttachment>,
               InternalVTableHelperCtorCaller<UCommonVisualAttachment>,local_res8,
               USizeBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonVisualAttachment.InnerSingleton;
}

// UCommonVisualAttachment @ 14a7b0090

UCommonVisualAttachment * __thiscall
UCommonVisualAttachment::UCommonVisualAttachment
          (UCommonVisualAttachment *this,FVTableHelper *param_1)

{
  USizeBox::USizeBox((USizeBox *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->MyAttachmentBox).Object = (SVisualAttachmentBox *)0x0;
  (this->MyAttachmentBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UCommonVisualAttachment @ 14a7b00e0

UCommonVisualAttachment * __thiscall
UCommonVisualAttachment::UCommonVisualAttachment
          (UCommonVisualAttachment *this,FObjectInitializer *param_1)

{
  USizeBox::USizeBox((USizeBox *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->MyAttachmentBox).Object = (SVisualAttachmentBox *)0x0;
  (this->MyAttachmentBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UCommonVisualAttachment @ 14a7b3c40

void __thiscall UCommonVisualAttachment::~UCommonVisualAttachment(UCommonVisualAttachment *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyAttachmentBox).SharedReferenceCount.ReferenceController);
  USizeBox::~USizeBox((USizeBox *)this);
  return;
}

// GetContentAnchor @ 14a7e15f0

TVector2<double> * __thiscall
UCommonVisualAttachment::GetContentAnchor
          (UCommonVisualAttachment *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->ContentAnchor).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ContentAnchor).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a7e6e20

UClass * __cdecl UCommonVisualAttachment::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonVisualAttachment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonVisualAttachment",
               &Z_Registration_Info_UClass_UCommonVisualAttachment.InnerSingleton,
               StaticRegisterNativesUCommonVisualAttachment,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonVisualAttachment>,
               InternalVTableHelperCtorCaller<UCommonVisualAttachment>,local_res8,
               USizeBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonVisualAttachment.InnerSingleton;
}

// RebuildWidget @ 14a80bc90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UCommonVisualAttachment::RebuildWidget
          (UCommonVisualAttachment *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TSharedPtr<SVisualAttachmentBox,1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  SVisualAttachmentBox *pSVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  FArguments *pFVar12;
  TSharedRef<SWidget,1> *pTVar13;
  USizeBoxSlot *this_00;
  UClass *pUVar14;
  TSharedRef<SBox,1> *pTVar15;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SVisualAttachmentBox *local_3d8;
  FSharedReferencer<1> local_3d0;
  SVisualAttachmentBox *local_3c8;
  FSharedReferencer<1> local_3c0;
  TSlateDecl<SVisualAttachmentBox,RequiredArgs::T0RequiredArgs> local_3b8;
  TSharedRef<SBox,1> local_3a0;
  FArguments local_390;
  
  pFVar12 = SBox::FArguments::FArguments(&local_390);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SVisualAttachmentBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVisualAttachmentBox,RequiredArgs::T0RequiredArgs>
            (&local_3b8,"SVisualAttachmentBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonVisualAttachment.cpp"
             ,0x2a,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar6 = local_3b8._Widget.Object;
  if ((local_3b8._Widget.Object == (SVisualAttachmentBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar13;
  }
  SWidget::SWidgetConstruct((SWidget *)local_3b8._Widget.Object,(FSlateBaseNamedArgs *)pFVar12);
  SBox::Construct((SBox *)local_3b8._Widget.Object,pFVar12);
  if ((local_3b8._Widget.Object == (SVisualAttachmentBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar13;
  }
  if (((local_3b8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)((local_3b8._Widget.Object)->_padding_ + 0x228))(local_3b8._Widget.Object);
    bVar10 = 0;
    if (cVar9 != '\0') goto LAB_14a80bdd9;
  }
  else {
LAB_14a80bdd9:
    bVar10 = 0x20;
  }
  FVar7.ReferenceController = local_3b8._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_3b8._Widget.Object)->_padding_ =
       (byte)(local_3b8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_3b8._Widget.Object)->_padding_ =
       (byte)(local_3b8._Widget.Object)->_padding_ | bVar10;
  pbVar1 = (byte *)((longlong)&(local_3b8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_3b8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3b8._Widget.Object = (SVisualAttachmentBox *)0x0;
  if ((pSVar6 == (SVisualAttachmentBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar13;
  }
  local_3d8 = pSVar6;
  local_3d0.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->MyAttachmentBox;
  if (pTVar2 != (TSharedPtr<SVisualAttachmentBox,1> *)&local_3d8) {
    pTVar2->Object = pSVar6;
    local_3d8 = (SVisualAttachmentBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyAttachmentBox).SharedReferenceCount,&local_3d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SBox::FArguments::~FArguments(&local_390);
  local_3c0.ReferenceController = (this->MyAttachmentBox).SharedReferenceCount.ReferenceController;
  local_3c8 = pTVar2->Object;
  if (local_3c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SVisualAttachmentBox **)&this->_padding_ != &local_3c8) {
    this->_padding_ = (longlong)local_3c8;
    local_3c8 = (SVisualAttachmentBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_3c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c0.ReferenceController);
  iVar11 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if (iVar11 < 1) goto LAB_14a80bf45;
  this_00 = (USizeBoxSlot *)UContentWidget::GetContentSlot((UContentWidget *)this);
  if (this_00 == (USizeBoxSlot *)0x0) {
LAB_14a80bf2b:
    this_00 = (USizeBoxSlot *)0x0;
  }
  else {
    pUVar14 = Z_Construct_UClass_USizeBoxSlot_NoRegister();
    iVar11 = (int)pUVar14->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar14->_padding_)) goto LAB_14a80bf2b;
  }
  pTVar15 = TSharedPtr<SBox,1>::ToSharedRef((TSharedPtr<SBox,1> *)&this->_padding_,&local_3a0);
  USizeBoxSlot::BuildSlot(this_00,pTVar15);
LAB_14a80bf45:
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar13;
  }
  pSVar3 = (SWidget *)this->_padding_;
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar13;
  }
  __return_storage_ptr__->Object = pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14a812100

void __thiscall
UCommonVisualAttachment::ReleaseSlateResources(UCommonVisualAttachment *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  USizeBox::ReleaseSlateResources((USizeBox *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyAttachmentBox != (TSharedPtr<SVisualAttachmentBox,1> *)&local_18) {
    (this->MyAttachmentBox).Object = (SVisualAttachmentBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyAttachmentBox).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetContentAnchor @ 14a817c90

void __thiscall
UCommonVisualAttachment::SetContentAnchor(UCommonVisualAttachment *this,TVector2<double> *param_1)

{
  SVisualAttachmentBox *this_00;
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->ContentAnchor).field0_0x0._s_0.X = dVar1;
  (this->ContentAnchor).field0_0x0._s_0.Y = dVar2;
  this_00 = (this->MyAttachmentBox).Object;
  if ((this_00 != (SVisualAttachmentBox *)0x0) &&
     ((dVar1 != (this_00->ContentAnchor).field0_0x0._s_0.X ||
      (dVar2 != (this_00->ContentAnchor).field0_0x0._s_0.Y)))) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (this_00->ContentAnchor).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this_00->ContentAnchor).field0_0x0._s_0.Y = dVar1;
    SWidget::Invalidate((SWidget *)this_00,Layout);
    return;
  }
  return;
}

// StaticRegisterNativesUCommonVisualAttachment @ 14a81eaa0

void __cdecl UCommonVisualAttachment::StaticRegisterNativesUCommonVisualAttachment(void)

{
  return;
}

// SynchronizeProperties @ 14a820b60

void __thiscall UCommonVisualAttachment::SynchronizeProperties(UCommonVisualAttachment *this)

{
  SVisualAttachmentBox *this_00;
  double dVar1;
  
  USizeBox::SynchronizeProperties((USizeBox *)this);
  this_00 = (this->MyAttachmentBox).Object;
  if ((this_00 != (SVisualAttachmentBox *)0x0) &&
     (((this->ContentAnchor).field0_0x0._s_0.X != (this_00->ContentAnchor).field0_0x0._s_0.X ||
      ((this->ContentAnchor).field0_0x0._s_0.Y != (this_00->ContentAnchor).field0_0x0._s_0.Y)))) {
    dVar1 = (this->ContentAnchor).field0_0x0._s_0.Y;
    (this_00->ContentAnchor).field0_0x0._s_0.X = (this->ContentAnchor).field0_0x0._s_0.X;
    (this_00->ContentAnchor).field0_0x0._s_0.Y = dVar1;
    SWidget::Invalidate((SWidget *)this_00,Layout);
    return;
  }
  return;
}

