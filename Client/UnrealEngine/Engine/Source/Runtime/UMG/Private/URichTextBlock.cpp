// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 82

// GetText_WrapperImpl @ 1469626b0

void __cdecl URichTextBlock::GetText_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  FText local_18;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x7f0);
  if (lVar1 == 0) {
    local_18.TextData.Reference = *(ITextData **)((longlong)param_1 + 0x1d0);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)((longlong)param_1 + 0x1d8);
  }
  else {
    pFVar2 = FText::GetEmpty();
    if (*(char *)(lVar1 + 0x228) != '\0') {
      pFVar2 = TAttribute<FText>::Get((TAttribute<FText> *)(lVar1 + 0x218));
    }
    local_18.TextData.Reference = (pFVar2->TextData).Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = pFVar2->Flags;
  }
  FText::operator=(param_2,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetText_WrapperImpl @ 146962770

void __cdecl URichTextBlock::SetText_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146962773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x358))();
  return;
}

// GetTextStyleSet_WrapperImpl @ 146962780

void __cdecl URichTextBlock::GetTextStyleSet_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1e0);
  return;
}

// SetTextStyleSet_WrapperImpl @ 1469627e0

void __cdecl URichTextBlock::SetTextStyleSet_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  pUVar1 = *(UObject **)param_2;
  if (*(UObject **)((longlong)param_1 + 0x1e0) == (UObject *)0x0) {
    bVar3 = pUVar1 == (UObject *)0x0;
  }
  else {
    bVar3 = *(UObject **)((longlong)param_1 + 0x1e0) == pUVar1;
  }
  if (!bVar3) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(UObject **)((longlong)param_1 + 0x1e0) = pUVar1;
    RebuildStyleInstance(param_1);
    if (*(SRichTextBlock **)((longlong)param_1 + 0x7f0) != (SRichTextBlock *)0x0) {
      SRichTextBlock::SetDecoratorStyleSet
                (*(SRichTextBlock **)((longlong)param_1 + 0x7f0),
                 *(ISlateStyle **)((longlong)param_1 + 0x7e0));
      if (*(longlong *)((longlong)param_1 + 0x7f0) == 0) {
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
      SRichTextBlock::SetTextStyle
                (*(SRichTextBlock **)((longlong)param_1 + 0x7f0),
                 (FTextBlockStyle *)((longlong)param_1 + 0x4f0));
    }
  }
  return;
}

// GetDefaultTextStyleOverride_WrapperImpl @ 1469628a0

void __cdecl URichTextBlock::GetDefaultTextStyleOverride_WrapperImpl(void *param_1,void *param_2)

{
  FTextBlockStyle *pFVar1;
  FTextBlockStyle local_2e8;
  
  pFVar1 = FTextBlockStyle::FTextBlockStyle
                     (&local_2e8,(FTextBlockStyle *)((longlong)param_1 + 0x200));
  FTextBlockStyle::operator=(param_2,pFVar1);
  FTextBlockStyle::~FTextBlockStyle(&local_2e8);
  return;
}

// SetDefaultTextStyleOverride_WrapperImpl @ 1469628f0

void __cdecl URichTextBlock::SetDefaultTextStyleOverride_WrapperImpl(void *param_1,void *param_2)

{
  if (*(char *)((longlong)param_1 + 0x4e4) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x4e4) = 1;
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)((longlong)param_1 + 0x200),
               (FTextBlockStyle *)((longlong)param_1 + 0x4f0));
  }
  FTextBlockStyle::operator=((FTextBlockStyle *)((longlong)param_1 + 0x200),param_2);
                    /* WARNING: Could not recover jumptable at 0x00014696294c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x380))(param_1);
  return;
}

// GetMinDesiredWidth_WrapperImpl @ 1469629a0

void __cdecl URichTextBlock::GetMinDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x4e0);
  return;
}

// SetMinDesiredWidth_WrapperImpl @ 146962a70

void __cdecl URichTextBlock::SetMinDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  SetMinDesiredWidth(param_1,*(float *)param_2);
  return;
}

// GetTextTransformPolicy_WrapperImpl @ 146962a80

void __cdecl URichTextBlock::GetTextTransformPolicy_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x4e5);
  return;
}

// SetTextTransformPolicy_WrapperImpl @ 146962a90

void __cdecl URichTextBlock::SetTextTransformPolicy_WrapperImpl(void *param_1,void *param_2)

{
  SetTextTransformPolicy(param_1,*(ETextTransformPolicy *)param_2);
  return;
}

// GetTextOverflowPolicy_WrapperImpl @ 146962aa0

void __cdecl URichTextBlock::GetTextOverflowPolicy_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x4e6);
  return;
}

// SetTextOverflowPolicy_WrapperImpl @ 146962ab0

void __cdecl URichTextBlock::SetTextOverflowPolicy_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8;
  undefined1 local_res9;
  
  local_res8 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x4e6) = local_res8;
  if (*(SRichTextBlock **)((longlong)param_1 + 0x7f0) != (SRichTextBlock *)0x0) {
    local_res9 = 1;
    SRichTextBlock::SetOverflowPolicy
              (*(SRichTextBlock **)((longlong)param_1 + 0x7f0),SUB82(&local_res8,0));
  }
  return;
}

// StaticClass @ 146962af0

UClass * __cdecl URichTextBlock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URichTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"RichTextBlock",
               &Z_Registration_Info_UClass_URichTextBlock.InnerSingleton,
               StaticRegisterNativesURichTextBlock,0x800,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URichTextBlock>,
               InternalVTableHelperCtorCaller<URichTextBlock>,local_res8,
               UTextLayoutWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URichTextBlock.InnerSingleton;
}

// URichTextBlock @ 14698cab0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

URichTextBlock * __thiscall
URichTextBlock::URichTextBlock(URichTextBlock *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfc;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  FText::FText(&this->Text);
  (this->TextStyleSet).field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->DecoratorClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DecoratorClasses).ArrayNum = 0;
  (this->DecoratorClasses).ArrayMax = 0;
  FTextBlockStyle::FTextBlockStyle(&this->DefaultTextStyleOverride);
  this->bOverrideDefaultStyle = false;
  FTextBlockStyle::FTextBlockStyle(&this->DefaultTextStyle);
  (this->InstanceDecorators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceDecorators).ArrayNum = 0;
  (this->InstanceDecorators).ArrayMax = 0;
  (this->StyleInstance).Object = (FSlateStyleSet *)0x0;
  (this->StyleInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MyRichTextBlock).Object = (SRichTextBlock *)0x0;
  (this->MyRichTextBlock).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// URichTextBlock @ 14698cb80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

URichTextBlock * __thiscall
URichTextBlock::URichTextBlock(URichTextBlock *this,FObjectInitializer *param_1)

{
  UTextLayoutWidget::UTextLayoutWidget((UTextLayoutWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->Text);
  (this->TextStyleSet).field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->DecoratorClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DecoratorClasses).ArrayNum = 0;
  (this->DecoratorClasses).ArrayMax = 0;
  FTextBlockStyle::FTextBlockStyle(&this->DefaultTextStyleOverride);
  this->bOverrideDefaultStyle = false;
  FTextBlockStyle::FTextBlockStyle(&this->DefaultTextStyle);
  (this->InstanceDecorators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceDecorators).ArrayNum = 0;
  (this->InstanceDecorators).ArrayMax = 0;
  (this->StyleInstance).Object = (FSlateStyleSet *)0x0;
  (this->StyleInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MyRichTextBlock).Object = (SRichTextBlock *)0x0;
  (this->MyRichTextBlock).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  this->TextTransformPolicy = None;
  this->TextOverflowPolicy = Clip;
  return this;
}

// ~URichTextBlock @ 146993d60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall URichTextBlock::~URichTextBlock(URichTextBlock *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyRichTextBlock).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StyleInstance).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->InstanceDecorators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTextBlockStyle::~FTextBlockStyle(&this->DefaultTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&this->DefaultTextStyleOverride);
  pFVar1 = (this->DecoratorClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Text).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&UTextLayoutWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UTextLayoutWidget::_vftable__for__INotifyFieldValueChanged__;
  UWidget::~UWidget((UWidget *)this);
  return;
}

// ApplyUpdatedDefaultTextStyle @ 1469a2840

void __thiscall URichTextBlock::ApplyUpdatedDefaultTextStyle(URichTextBlock *this)

{
  SRichTextBlock *this_00;
  longlong lVar1;
  
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    lVar1 = 0x200;
    if (this->bOverrideDefaultStyle == false) {
      lVar1 = 0x4f0;
    }
    SRichTextBlock::SetTextStyle(this_00,(FTextBlockStyle *)((longlong)&this->_padding_ + lVar1));
    return;
  }
  return;
}

// BeginDefaultStyleOverride @ 1469a30a0

void __thiscall URichTextBlock::BeginDefaultStyleOverride(URichTextBlock *this)

{
  if (this->bOverrideDefaultStyle == false) {
    this->bOverrideDefaultStyle = true;
    FTextBlockStyle::operator=(&this->DefaultTextStyleOverride,&this->DefaultTextStyle);
    return;
  }
  return;
}

// ClearAllDefaultStyleOverrides @ 1469a6270

void __thiscall URichTextBlock::ClearAllDefaultStyleOverrides(URichTextBlock *this)

{
  if (this->bOverrideDefaultStyle != false) {
    this->bOverrideDefaultStyle = false;
                    /* WARNING: Could not recover jumptable at 0x0001469a6283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x380))();
    return;
  }
  return;
}

// CreateDecorators @ 1469bd150

void __thiscall
URichTextBlock::CreateDecorators
          (URichTextBlock *this,
          TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  longlong local_38;
  TReferenceControllerBase<1> *pTStack_30;
  longlong local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  pFVar8 = (this->InstanceDecorators).AllocatorInstance.Data;
  iVar2 = (this->InstanceDecorators).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->InstanceDecorators).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<URichTextBlockDecorator>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    plVar3 = *(longlong **)pFVar8;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2b0))(plVar3,&local_28,this);
      if (local_28 != 0) {
        if (local_28 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        local_38 = local_28;
        pTStack_30 = pTStack_20;
        if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_20->SharedReferenceCount =
               (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (local_28 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar7 = (param_1->AllocatorInstance).Data;
        if ((pFVar7 <= (FScriptContainerElement *)&local_38) &&
           ((FScriptContainerElement *)&local_38 < pFVar7 + (longlong)param_1->ArrayMax * 0x10)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        *(longlong *)pFVar7 = local_38;
        *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTStack_30;
        if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_30->SharedReferenceCount =
               (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_20);
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// CreateMarkupParser @ 1469bda10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedPtr<IRichTextMarkupParser,1> * __thiscall
URichTextBlock::CreateMarkupParser
          (URichTextBlock *this,TSharedPtr<IRichTextMarkupParser,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FDefaultRichTextMarkupParser,1> *pTVar2;
  TSharedRef<FDefaultRichTextMarkupParser,1> local_18;
  
  pTVar2 = FDefaultRichTextMarkupParser::GetStaticInstance(&local_18);
  __return_storage_ptr__->Object = (IRichTextMarkupParser *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateMarkupWriter @ 1469bda60

TSharedPtr<IRichTextMarkupWriter,1> * __thiscall
URichTextBlock::CreateMarkupWriter
          (URichTextBlock *this,TSharedPtr<IRichTextMarkupWriter,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FDefaultRichTextMarkupWriter,1> *pTVar2;
  TSharedRef<FDefaultRichTextMarkupWriter,1> local_18;
  
  pTVar2 = FDefaultRichTextMarkupWriter::Create(&local_18);
  __return_storage_ptr__->Object = (IRichTextMarkupWriter *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetCurrentDefaultTextStyle @ 1469ceba0

FTextBlockStyle * __thiscall URichTextBlock::GetCurrentDefaultTextStyle(URichTextBlock *this)

{
  code *pcVar1;
  bool bVar2;
  FTextBlockStyle *pFVar3;
  
  if (this->bOverrideDefaultStyle != false) {
    return &this->DefaultTextStyleOverride;
  }
  if ((this->StyleInstance).Object == (FSlateStyleSet *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8671678771809485003>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlock.cpp"
                       ,0xcb,"StyleInstance.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTextBlockStyle *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->DefaultTextStyle;
}

// GetDecoratorByClass @ 1469cec40

URichTextBlockDecorator * __thiscall
URichTextBlock::GetDecoratorByClass
          (URichTextBlock *this,TSubclassOf<URichTextBlockDecorator> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  URichTextBlockDecorator *pUVar4;
  longlong lVar5;
  bool bVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar9 = (this->InstanceDecorators).AllocatorInstance.Data;
  iVar2 = (this->InstanceDecorators).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  do {
    if ((this->InstanceDecorators).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<URichTextBlockDecorator>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) {
      return (URichTextBlockDecorator *)0x0;
    }
    pUVar4 = *(URichTextBlockDecorator **)pFVar9;
    pUVar8 = *(UObject **)param_1.Class.field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar8 != (UObject *)0x0) goto LAB_1469cecac;
LAB_1469cecda:
      pUVar8 = (UObject *)0x0;
    }
    else {
      if (pUVar8 == (UObject *)0x0) goto LAB_1469cecda;
      UE::GC::MarkAsReachable(pUVar8);
LAB_1469cecac:
      pUVar7 = URichTextBlockDecorator::StaticClass();
      if (pUVar7 == (UClass *)0x0) goto LAB_1469cecda;
      iVar3 = (int)pUVar7->_padding_;
      if ((*(int *)&pUVar8[1].field_0x10 < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar3 * 8) !=
          &pUVar7->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_1469cecda;
    }
    lVar5 = *(longlong *)&pUVar4->field_0x10;
    if ((*(int *)&pUVar8[1].field_0x10 <= *(int *)(lVar5 + 0x38)) &&
       (*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)&pUVar8[1].field_0x10 * 8)
        == &pUVar8[1].field_0x8)) {
      return pUVar4;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// GetDefaultDynamicMaterial @ 1469cf0e0

UMaterialInstanceDynamic * __thiscall
URichTextBlock::GetDefaultDynamicMaterial(URichTextBlock *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  
  lVar2 = 0x210;
  if (this->bOverrideDefaultStyle == false) {
    lVar2 = 0x500;
  }
  pUVar4 = *(UMaterialInstanceDynamic **)((longlong)&this->_padding_ + lVar2);
  if (pUVar4 != (UMaterialInstanceDynamic *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        if (this->bOverrideDefaultStyle == false) {
          this->bOverrideDefaultStyle = true;
          FTextBlockStyle::operator=(&this->DefaultTextStyleOverride,&this->DefaultTextStyle);
        }
        pUVar4 = UMaterialInstanceDynamic::Create
                           ((UMaterialInterface *)pUVar4,(UObject *)this,(FName)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        (this->DefaultTextStyleOverride).Font.FontMaterial.field0_0x0.DebugPtr = (UObject *)pUVar4;
        (**(code **)(this->_padding_ + 0x380))(this);
      }
      return pUVar4;
    }
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetDefaultTextStyle @ 1469cf280

FTextBlockStyle * __thiscall URichTextBlock::GetDefaultTextStyle(URichTextBlock *this)

{
  code *pcVar1;
  bool bVar2;
  FTextBlockStyle *pFVar3;
  
  if ((this->StyleInstance).Object != (FSlateStyleSet *)0x0) {
    return &this->DefaultTextStyle;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8671678771809484991>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlock.cpp"
                     ,0xbf,"StyleInstance.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTextBlockStyle *)(*pcVar1)();
    return pFVar3;
  }
  return &this->DefaultTextStyle;
}

// GetDefaultTextStyleOverride @ 1469cf2e0

FTextBlockStyle * __thiscall URichTextBlock::GetDefaultTextStyleOverride(URichTextBlock *this)

{
  return &this->DefaultTextStyleOverride;
}

// GetMinDesiredWidth @ 1469d1e00

float __thiscall URichTextBlock::GetMinDesiredWidth(URichTextBlock *this)

{
  return this->MinDesiredWidth;
}

// GetOverflowPolicy @ 1469d2eb0

ETextOverflowPolicy __thiscall URichTextBlock::GetOverflowPolicy(URichTextBlock *this)

{
  return this->TextOverflowPolicy;
}

// GetPrivateStaticClass @ 1469d52f0

UClass * __cdecl URichTextBlock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URichTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"RichTextBlock",
               &Z_Registration_Info_UClass_URichTextBlock.InnerSingleton,
               StaticRegisterNativesURichTextBlock,0x800,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URichTextBlock>,
               InternalVTableHelperCtorCaller<URichTextBlock>,local_res8,
               UTextLayoutWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URichTextBlock.InnerSingleton;
}

// GetText @ 1469d8d10

FText * __thiscall URichTextBlock::GetText(URichTextBlock *this,FText *__return_storage_ptr__)

{
  SRichTextBlock *pSVar1;
  ITextData *pIVar2;
  uint uVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  
  pSVar1 = (this->MyRichTextBlock).Object;
  if (pSVar1 == (SRichTextBlock *)0x0) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (this->Text).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    uVar3 = (this->Text).Flags;
  }
  else {
    pFVar4 = FText::GetEmpty();
    if ((pSVar1->BoundText).bIsSet != false) {
      pFVar4 = TAttribute<FText>::Get(&pSVar1->BoundText);
    }
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    uVar3 = pFVar4->Flags;
  }
  __return_storage_ptr__->Flags = uVar3;
  return __return_storage_ptr__;
}

// GetTextStyleSet @ 1469d8eb0

UDataTable * __thiscall URichTextBlock::GetTextStyleSet(URichTextBlock *this)

{
  return (this->TextStyleSet).field0_0x0.DebugPtr;
}

// GetTransformPolicy @ 1469d90d0

ETextTransformPolicy __thiscall URichTextBlock::GetTransformPolicy(URichTextBlock *this)

{
  return this->TextTransformPolicy;
}

// OnApplyLineHeightToBottomLineChanged @ 1469e5270

void __thiscall
URichTextBlock::OnApplyLineHeightToBottomLineChanged(URichTextBlock *this,bool param_1)

{
  SRichTextBlock *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SRichTextBlock::SetApplyLineHeightToBottomLine(this_00,(TAttribute<bool> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// OnAutoWrapTextChanged @ 1469e5510

void __thiscall URichTextBlock::OnAutoWrapTextChanged(URichTextBlock *this,bool param_1)

{
  SRichTextBlock *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SRichTextBlock::SetAutoWrapText(this_00,(TAttribute<bool> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// OnJustificationChanged @ 1469e95d0

void __thiscall URichTextBlock::OnJustificationChanged(URichTextBlock *this,Type param_1)

{
  SRichTextBlock *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30._0_4_ = param_1;
    SRichTextBlock::SetJustification(this_00,(TAttribute<ETextJustify::Type> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// OnLineHeightPercentageChanged @ 1469eb780

void __thiscall URichTextBlock::OnLineHeightPercentageChanged(URichTextBlock *this,float param_1)

{
  SRichTextBlock *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30._0_4_ = param_1;
    SRichTextBlock::SetLineHeightPercentage(this_00,(TAttribute<float> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// OnMarginChanged @ 1469ebbb0

void __thiscall URichTextBlock::OnMarginChanged(URichTextBlock *this,FMargin *param_1)

{
  SRichTextBlock *this_00;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    local_40._0_4_ = param_1->Left;
    local_40._4_4_ = param_1->Top;
    local_40._8_4_ = param_1->Right;
    local_40._12_4_ = param_1->Bottom;
    local_40[0x10] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SRichTextBlock::SetMargin(this_00,(TAttribute<FMargin> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// OnShapedTextOptionsChanged @ 1469f04d0

void __thiscall
URichTextBlock::OnShapedTextOptionsChanged(URichTextBlock *this,FShapedTextOptions param_1)

{
  SRichTextBlock *pSVar1;
  undefined5 in_register_00000013;
  
  pSVar1 = (this->MyRichTextBlock).Object;
  if (pSVar1 != (SRichTextBlock *)0x0) {
    FShapedTextOptions::SynchronizeShapedTextProperties<SRichTextBlock>
              ((FShapedTextOptions *)CONCAT53(in_register_00000013,param_1),pSVar1);
  }
  return;
}

// OnWrapTextAtChanged @ 1469f29e0

void __thiscall URichTextBlock::OnWrapTextAtChanged(URichTextBlock *this,float param_1)

{
  SRichTextBlock *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30._0_4_ = param_1;
    SRichTextBlock::SetWrapTextAt(this_00,(TAttribute<float> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// OnWrappingPolicyChanged @ 1469f2c80

void __thiscall
URichTextBlock::OnWrappingPolicyChanged(URichTextBlock *this,ETextWrappingPolicy param_1)

{
  SRichTextBlock *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SRichTextBlock::SetWrappingPolicy(this_00,(TAttribute<ETextWrappingPolicy> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// RebuildStyleInstance @ 1469f8eb0

void __thiscall URichTextBlock::RebuildStyleInstance(URichTextBlock *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  TSharedPtr<FSlateStyleSet,1> *pTVar3;
  int iVar4;
  UDataTable *pUVar5;
  UScriptStruct *pUVar6;
  FName FVar7;
  code *pcVar8;
  longlong *plVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FSlateStyleSet *pFVar13;
  FSlateStyleSet *pFVar14;
  UPackage *pUVar15;
  longlong *plVar16;
  FName *pFVar17;
  longlong lVar18;
  int iVar19;
  FSlateStyleSet *pFVar20;
  uint uVar21;
  uint uVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FName local_res20;
  FSlateStyleSet *local_c8;
  FSharedReferencer<1> local_c0;
  longlong *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  uint local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  longlong *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FName local_50 [2];
  
  pFVar13 = ::operator_new(0x400);
  pFVar20 = (FSlateStyleSet *)0x0;
  uVar22 = 0;
  pFVar14 = pFVar20;
  if (pFVar13 != (FSlateStyleSet *)0x0) {
    ::FName::FName(&local_res20,L"RichTextStyle");
    pFVar14 = FSlateStyleSet::FSlateStyleSet(pFVar13,&local_res20);
  }
  local_c8 = pFVar14;
  pFVar13 = ::operator_new(0x18);
  uVar11 = 1;
  local_c0.ReferenceController = (TReferenceControllerBase<1> *)pFVar20;
  if (pFVar13 != (FSlateStyleSet *)0x0) {
    (pFVar13->StyleSetName).ComparisonIndex.Value = 1;
    pFVar13->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateStyleSet__V<lambda_1>__1____MakeShareableDeferredCleanup_VFSlateStyleSet____YA_AV__TSharedPtr_VFSlateStyleSet___00__PEAV1__Z__00_SharedPointerInternals__6B_
    ;
    (pFVar13->StyleSetName).Number = 1;
    (pFVar13->ContentRootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar14;
    local_c0.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
  }
  pTVar3 = &this->StyleInstance;
  if (pTVar3 != (TSharedPtr<FSlateStyleSet,1> *)&local_c8) {
    pTVar3->Object = pFVar14;
    local_c8 = (FSlateStyleSet *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StyleInstance).SharedReferenceCount,&local_c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.ReferenceController);
  pUVar5 = (this->TextStyleSet).field0_0x0.DebugPtr;
  if (pUVar5 != (UDataTable *)0x0) {
    pUVar6 = (pUVar5->RowStruct).field0_0x0.DebugPtr;
    if (Z_Registration_Info_UScriptStruct_FRichTextStyleRow.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar15 = Z_Construct_UPackage__Script_UMG();
      Z_Registration_Info_UScriptStruct_FRichTextStyleRow.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRichTextStyleRow,(UObject *)pUVar15,
                           L"RichTextStyleRow");
      if (Z_Registration_Info_UScriptStruct_FRichTextStyleRow.OuterSingleton == (UScriptStruct *)0x0
         ) {
        return;
      }
    }
    iVar4 = (int)(Z_Registration_Info_UScriptStruct_FRichTextStyleRow.OuterSingleton)->_padding_;
    if (((int)pUVar6->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar4 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FRichTextStyleRow.OuterSingleton)->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      plVar16 = (longlong *)
                (**(code **)(((this->TextStyleSet).field0_0x0.DebugPtr)->_padding_ + 0x2c8))();
      iVar4 = (int)plVar16[5];
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar16 + 2);
      iStack_9c = 0;
      uStack_b0 = uVar22;
      if (iVar4 != 0) {
        pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar23 = pTVar1;
        }
        uVar12 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
        pFVar14 = pFVar20;
        uVar22 = 0;
        uStack_b0 = 0;
        while (uVar12 == 0) {
          iVar19 = (int)pFVar20;
          uVar22 = (int)pFVar14 + 0x20;
          pFVar14 = (FSlateStyleSet *)(ulonglong)uVar22;
          uStack_b0 = iVar19 + 1;
          pFVar20 = (FSlateStyleSet *)(ulonglong)uStack_b0;
          iStack_9c = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_b0)
          goto LAB_1469f907d;
          uVar12 = *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar19 * 4 + 4);
        }
        uVar11 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uVar11 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_res10 = (int)lVar18;
        iStack_9c = (uVar22 - 1) + local_res10;
        if (iVar4 < iStack_9c) {
          iStack_9c = iVar4;
        }
      }
LAB_1469f907d:
      iStack_90 = (int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34);
      uVar12 = *(uint *)(plVar16 + 5);
      TStack_78._padding_ = CONCAT44(uVar11,uStack_b0);
      uStack_a0 = 0xffffffff;
      uVar21 = uVar12 & 0xffffffe0;
      TStack_78.CurrentBitIndex = iStack_9c;
      TStack_78.UnvisitedBitMask = 0xffffffff;
      iVar19 = (int)uVar12 >> 5;
      TStack_78._28_4_ = iStack_9c;
      TStack_78.BaseBitIndex = uVar22;
      uStack_58 = CONCAT44(uStack_8c,iStack_90);
      local_b8 = plVar16;
      uStack_ac = uVar11;
      local_a8 = pTVar1;
      local_98 = uVar22;
      iStack_94 = iStack_9c;
      local_88 = plVar16;
      local_80 = plVar16;
      TStack_78.Array = pTVar1;
      if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar9 = local_88;
      uVar22 = *(uint *)(plVar16 + 5);
      if (uVar12 != uVar22) {
        pTVar23 = pTVar1;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
        }
        uVar11 = -1 << ((byte)uVar12 & 0x1f) &
                 *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
        while (uVar11 == 0) {
          lVar18 = (longlong)iVar19;
          uVar21 = uVar21 + 0x20;
          iVar19 = iVar19 + 1;
          uVar12 = uVar22;
          if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
          goto LAB_1469f9181;
          uVar11 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar18 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_res18 = (int)lVar18;
        uVar12 = local_res18 + -1 + uVar21;
        if ((int)uVar22 < (int)uVar12) {
          uVar12 = uVar22;
        }
      }
LAB_1469f9181:
      while( true ) {
        plVar16 = local_80;
        if ((int)local_80[1] - *(int *)((longlong)local_80 + 0x34) != (int)uStack_58) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_78.CurrentBitIndex == uVar12) && (TStack_78.Array == pTVar1)) &&
           (plVar16 == plVar9)) break;
        lVar18 = *plVar16;
        FVar7 = *(FName *)(lVar18 + (longlong)TStack_78.CurrentBitIndex * 0x18);
        lVar18 = *(longlong *)(lVar18 + 8 + (longlong)TStack_78.CurrentBitIndex * 0x18);
        pFVar17 = ::FName::FName(local_50,L"Default");
        if (FVar7 == *pFVar17) {
          FTextBlockStyle::operator=(&this->DefaultTextStyle,(FTextBlockStyle *)(lVar18 + 0x10));
        }
        if ((pTVar3->Object == (FSlateStyleSet *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FSlateStyleSet::Set<FTextBlockStyle>
                  (pTVar3->Object,FVar7,(FTextBlockStyle *)(lVar18 + 0x10));
        TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
      }
    }
  }
  return;
}

// RebuildWidget @ 146a03ba0

TSharedRef<SWidget,1> * __thiscall
URichTextBlock::RebuildWidget(URichTextBlock *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  FSlateStyleSet *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SRichTextBlock *pSVar3;
  code *pcVar4;
  TSharedRef<ITextDecorator,1> *pTVar5;
  int iVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  TSharedPtr<IRichTextMarkupWriter,1> *pTVar11;
  TSharedPtr<IRichTextMarkupParser,1> *pTVar12;
  FArguments *pFVar13;
  TSharedRef<SWidget,1> *pTVar14;
  longlong lVar15;
  TSharedPtr<SRichTextBlock,1> *pTVar16;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSharedRef<ITextDecorator,1> *local_4c8;
  undefined8 local_4c0;
  TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> local_4b8;
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> local_4a8;
  SRichTextBlock *local_490;
  FSharedReferencer<1> local_488;
  TSharedRef<FRichTextLayoutMarshaller,1> local_480;
  FRichTextLayoutMarshaller *local_470;
  TReferenceControllerBase<1> *pTStack_468;
  undefined1 local_460 [16];
  undefined1 local_450 [16];
  FArguments local_440;
  
  (**(code **)(this->_padding_ + 0x360))();
  local_4c8 = (TSharedRef<ITextDecorator,1> *)0x0;
  local_4c0 = 0;
  (**(code **)(this->_padding_ + 0x368))(this,&local_4c8);
  pTVar5 = local_4c8;
  iVar6 = (int)local_4c0;
  pFVar1 = (this->StyleInstance).Object;
  local_4b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4b8.ArrayNum = (int)local_4c0;
  if ((int)local_4c0 == 0) {
    local_4b8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_4c0,0,&local_4b8.AllocatorInstance,(int)local_4c0,
               &local_4b8.ArrayMax);
    ConstructItems<TSharedRef<ITextDecorator,1>,TSharedRef<ITextDecorator,1>,int>
              (local_4b8.AllocatorInstance.Data,pTVar5,iVar6);
  }
  pTVar11 = (TSharedPtr<IRichTextMarkupWriter,1> *)
            (**(code **)(this->_padding_ + 0x378))(this,local_460);
  pTVar12 = (TSharedPtr<IRichTextMarkupParser,1> *)
            (**(code **)(this->_padding_ + 0x370))(this,local_450);
  FRichTextLayoutMarshaller::Create(&local_480,pTVar12,pTVar11,&local_4b8,(ISlateStyle *)pFVar1);
  pFVar13 = SRichTextBlock::FArguments::FArguments(&local_440);
  FVar7.ReferenceController = local_480.SharedReferenceCount.ReferenceController;
  lVar15 = 0x200;
  if (this->bOverrideDefaultStyle == false) {
    lVar15 = 0x4f0;
  }
  pFVar13->_TextStyle = (FTextBlockStyle *)((longlong)&this->_padding_ + lVar15);
  if (local_480.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_480.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_480.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_480.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_480.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_470 = (pFVar13->_Marshaller).Object;
  pTStack_468 = (pFVar13->_Marshaller).SharedReferenceCount.ReferenceController;
  (pFVar13->_Marshaller).Object = local_480.Object;
  (pFVar13->_Marshaller).SharedReferenceCount.ReferenceController =
       local_480.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_468);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>
            (&local_4a8,"SRichTextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlock.cpp"
             ,0x4e,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_4a8._Widget.Object;
  if (local_4a8._Widget.Object == (SRichTextBlock *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_4a8._Widget.Object,(FSlateBaseNamedArgs *)pFVar13);
  SRichTextBlock::Construct(local_4a8._Widget.Object,pFVar13);
  if (local_4a8._Widget.Object == (SRichTextBlock *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  if (((local_4a8._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar9 = (**(code **)(*(longlong *)local_4a8._Widget.Object + 0x228))(local_4a8._Widget.Object);
    bVar10 = 0;
    if (cVar9 == '\0') goto LAB_146a03e10;
  }
  bVar10 = 0x20;
LAB_146a03e10:
  (local_4a8._Widget.Object)->field_0x30 = (local_4a8._Widget.Object)->field_0x30 & 0xdf;
  (local_4a8._Widget.Object)->field_0x30 = (local_4a8._Widget.Object)->field_0x30 | bVar10;
  if (local_4a8._Widget.Object == (SRichTextBlock *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  (local_4a8._Widget.Object)->field_0x31 = (local_4a8._Widget.Object)->field_0x31 | 4;
  if (local_4a8._Widget.Object == (SRichTextBlock *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  FVar7.ReferenceController = local_4a8._Widget.SharedReferenceCount.ReferenceController;
  local_4a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4a8._Widget.Object = (SRichTextBlock *)0x0;
  if (pSVar3 == (SRichTextBlock *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  local_490 = pSVar3;
  local_488.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar16 = &this->MyRichTextBlock;
  if (pTVar16 != (TSharedPtr<SRichTextBlock,1> *)&local_490) {
    pTVar16->Object = pSVar3;
    local_490 = (SRichTextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyRichTextBlock).SharedReferenceCount,&local_488);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_488.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SRichTextBlock::FArguments::~FArguments(&local_440);
  if (pTVar16->Object == (SRichTextBlock *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  pTVar2 = (this->MyRichTextBlock).SharedReferenceCount.ReferenceController;
  pSVar3 = pTVar16->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SRichTextBlock *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar14;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_480.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<ITextDecorator,1>,int>(local_4c8,(int)local_4c0);
  if (local_4c8 != (TSharedRef<ITextDecorator,1> *)0x0) {
    FMemory::Free(local_4c8);
  }
  return __return_storage_ptr__;
}

// RefreshTextLayout @ 146a09210

void __thiscall URichTextBlock::RefreshTextLayout(URichTextBlock *this)

{
  FSlateTextBlockLayout *pFVar1;
  SRichTextBlock *this_00;
  code *pcVar2;
  bool bVar3;
  
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 == (SRichTextBlock *)0x0) {
    return;
  }
  pFVar1 = (this_00->TextLayoutCache).Ptr;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  FTextLayout::DirtyLayout((FTextLayout *)(pFVar1->TextLayout).Object);
  if ((pFVar1->Marshaller).Object == (ITextLayoutMarshaller *)0x0) {
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
  (**(code **)((longlong)*(pFVar1->Marshaller).Object + 0x20))();
  SWidget::Invalidate((SWidget *)this_00,Layout);
  return;
}

// ReleaseSlateResources @ 146a0af20

void __thiscall URichTextBlock::ReleaseSlateResources(URichTextBlock *this,bool param_1)

{
  int *piVar1;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyRichTextBlock != (TSharedPtr<SRichTextBlock,1> *)&local_28) {
    (this->MyRichTextBlock).Object = (SRichTextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyRichTextBlock).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->StyleInstance != (TSharedPtr<FSlateStyleSet,1> *)&local_18) {
    (this->StyleInstance).Object = (FSlateStyleSet *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StyleInstance).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  piVar1 = &(this->InstanceDecorators).ArrayMax;
  (this->InstanceDecorators).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->InstanceDecorators).AllocatorInstance,0,piVar1);
  }
  return;
}

// SetAutoWrapText @ 146a11060

void __thiscall URichTextBlock::SetAutoWrapText(URichTextBlock *this,bool param_1)

{
  byte *pbVar1;
  SRichTextBlock *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | param_1;
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SRichTextBlock::SetAutoWrapText(this_00,(TAttribute<bool> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetDecorators @ 146a12d10

void __thiscall
URichTextBlock::SetDecorators
          (URichTextBlock *this,
          TArray<TSubclassOf<URichTextBlockDecorator>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TSubclassOf<URichTextBlockDecorator>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<FSlateStyleSet,1> *pTVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  SRichTextBlock *this_00;
  code *pcVar7;
  bool bVar8;
  TSharedRef<ITextDecorator,1> *local_48;
  undefined8 local_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  TSharedRef<ITextDecorator,1> *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<TSharedRef<ITextDecorator,1>,int> local_18;
  
  pTVar2 = &this->DecoratorClasses;
  if (pTVar2 != param_1) {
    iVar4 = (this->DecoratorClasses).ArrayMax;
    pFVar6 = (param_1->AllocatorInstance).Data;
    piVar1 = &(this->DecoratorClasses).ArrayMax;
    iVar5 = param_1->ArrayNum;
    (this->DecoratorClasses).ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,iVar4,&pTVar2->AllocatorInstance,iVar5,piVar1);
      ConstructItems<TSubclassOf<URichTextBlockDecorator>,TSubclassOf<URichTextBlockDecorator>,int>
                ((pTVar2->AllocatorInstance).Data,(TSubclassOf<URichTextBlockDecorator> *)pFVar6,
                 iVar5);
    }
  }
  pTVar3 = &this->StyleInstance;
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 != (TSharedPtr<FSlateStyleSet,1> *)&local_38) {
    pTVar3->Object = (FSlateStyleSet *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StyleInstance).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  (**(code **)(this->_padding_ + 0x360))(this);
  if ((this->MyRichTextBlock).Object != (SRichTextBlock *)0x0) {
    local_48 = (TSharedRef<ITextDecorator,1> *)0x0;
    local_40 = 0;
    (**(code **)(this->_padding_ + 0x368))(this,&local_48);
    if (((this->MyRichTextBlock).Object == (SRichTextBlock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    SRichTextBlock::SetDecoratorStyleSet
              ((this->MyRichTextBlock).Object,(ISlateStyle *)pTVar3->Object);
    if (((this->MyRichTextBlock).Object == (SRichTextBlock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = (this->MyRichTextBlock).Object;
    iVar4 = (int)local_40;
    local_28 = local_48;
    if (((int)local_40 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iStack_20 = iVar4;
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar4;
    local_18.DataPtr = local_28;
    SRichTextBlock::SetDecorators(this_00,&local_18);
    DestructItems<TSharedRef<ITextDecorator,1>,int>(local_48,(int)local_40);
    if (local_48 != (TSharedRef<ITextDecorator,1> *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}

// SetDefaultColorAndOpacity @ 146a12f10

void __thiscall URichTextBlock::SetDefaultColorAndOpacity(URichTextBlock *this,FSlateColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ESlateColorStylingMode EVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  
  if (this->bOverrideDefaultStyle == false) {
    this->bOverrideDefaultStyle = true;
    FTextBlockStyle::operator=(&this->DefaultTextStyleOverride,&this->DefaultTextStyle);
  }
  fVar1 = (param_1->SpecifiedColor).field0_0x0._s_0.G;
  fVar2 = (param_1->SpecifiedColor).field0_0x0._s_0.B;
  fVar3 = (param_1->SpecifiedColor).field0_0x0._s_0.A;
  EVar4 = param_1->ColorUseRule;
  EVar5 = param_1->ColorTableId;
  uVar6 = *(undefined2 *)&param_1->field_0x12;
  (this->DefaultTextStyleOverride).ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.R =
       (param_1->SpecifiedColor).field0_0x0._s_0.R;
  (this->DefaultTextStyleOverride).ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.G = fVar1;
  (this->DefaultTextStyleOverride).ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.B = fVar2;
  (this->DefaultTextStyleOverride).ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.A = fVar3;
  (this->DefaultTextStyleOverride).ColorAndOpacity.ColorUseRule = EVar4;
  (this->DefaultTextStyleOverride).ColorAndOpacity.ColorTableId = EVar5;
  *(undefined2 *)&(this->DefaultTextStyleOverride).ColorAndOpacity.field_0x12 = uVar6;
                    /* WARNING: Could not recover jumptable at 0x000146a12f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x380))(this);
  return;
}

// SetDefaultFont @ 146a12f80

void __thiscall URichTextBlock::SetDefaultFont(URichTextBlock *this,FSlateFontInfo *param_1)

{
  if (this->bOverrideDefaultStyle == false) {
    this->bOverrideDefaultStyle = true;
    FTextBlockStyle::operator=(&this->DefaultTextStyleOverride,&this->DefaultTextStyle);
  }
  FSlateFontInfo::operator=(&(this->DefaultTextStyleOverride).Font,param_1);
  (**(code **)(this->_padding_ + 0x380))(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CompositeFont).SharedReferenceCount.ReferenceController);
  return;
}

// SetDefaultMaterial @ 146a13000

void __thiscall URichTextBlock::SetDefaultMaterial(URichTextBlock *this,UMaterialInterface *param_1)

{
  if (this->bOverrideDefaultStyle == false) {
    this->bOverrideDefaultStyle = true;
    FTextBlockStyle::operator=(&this->DefaultTextStyleOverride,&this->DefaultTextStyle);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->DefaultTextStyleOverride).Font.FontMaterial.field0_0x0.DebugPtr = (UObject *)param_1;
                    /* WARNING: Could not recover jumptable at 0x000146a13060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x380))(this);
  return;
}

// SetDefaultShadowColorAndOpacity @ 146a13070

void __thiscall
URichTextBlock::SetDefaultShadowColorAndOpacity(URichTextBlock *this,FLinearColor *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (this->bOverrideDefaultStyle == false) {
    this->bOverrideDefaultStyle = true;
    FTextBlockStyle::operator=(&this->DefaultTextStyleOverride,&this->DefaultTextStyle);
  }
  fVar2 = (param_1->field0_0x0)._s_0.G;
  fVar3 = (param_1->field0_0x0)._s_0.B;
  fVar4 = (param_1->field0_0x0)._s_0.A;
  lVar1 = this->_padding_;
  (this->DefaultTextStyleOverride).ShadowColorAndOpacity.field0_0x0._s_0.R =
       (param_1->field0_0x0)._s_0.R;
  (this->DefaultTextStyleOverride).ShadowColorAndOpacity.field0_0x0._s_0.G = fVar2;
  (this->DefaultTextStyleOverride).ShadowColorAndOpacity.field0_0x0._s_0.B = fVar3;
  (this->DefaultTextStyleOverride).ShadowColorAndOpacity.field0_0x0._s_0.A = fVar4;
                    /* WARNING: Could not recover jumptable at 0x000146a130bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x380))(this);
  return;
}

// SetDefaultShadowOffset @ 146a130d0

void __thiscall
URichTextBlock::SetDefaultShadowOffset(URichTextBlock *this,TVector2<double> *param_1)

{
  double dVar1;
  longlong lVar2;
  
  if (this->bOverrideDefaultStyle == false) {
    this->bOverrideDefaultStyle = true;
    FTextBlockStyle::operator=(&this->DefaultTextStyleOverride,&this->DefaultTextStyle);
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  lVar2 = this->_padding_;
  *(float *)&(this->DefaultTextStyleOverride).ShadowOffset = (float)(param_1->field0_0x0)._s_0.X;
  *(float *)&(this->DefaultTextStyleOverride).ShadowOffset.field_0x4 = (float)dVar1;
                    /* WARNING: Could not recover jumptable at 0x000146a13134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x380))(this);
  return;
}

// SetDefaultStrikeBrush @ 146a13150

void __thiscall URichTextBlock::SetDefaultStrikeBrush(URichTextBlock *this,FSlateBrush *param_1)

{
  if (this->bOverrideDefaultStyle == false) {
    this->bOverrideDefaultStyle = true;
    FTextBlockStyle::operator=(&this->DefaultTextStyleOverride,&this->DefaultTextStyle);
  }
  FSlateBrush::operator=(&(this->DefaultTextStyleOverride).StrikeBrush,param_1);
                    /* WARNING: Could not recover jumptable at 0x000146a131ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x380))(this);
  return;
}

// SetDefaultTextStyle @ 146a131c0

void __thiscall URichTextBlock::SetDefaultTextStyle(URichTextBlock *this,FTextBlockStyle *param_1)

{
  if (this->bOverrideDefaultStyle == false) {
    this->bOverrideDefaultStyle = true;
    FTextBlockStyle::operator=(&this->DefaultTextStyleOverride,&this->DefaultTextStyle);
  }
  FTextBlockStyle::operator=(&this->DefaultTextStyleOverride,param_1);
                    /* WARNING: Could not recover jumptable at 0x000146a1321c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x380))(this);
  return;
}

// SetMinDesiredWidth @ 146a17570

void __thiscall URichTextBlock::SetMinDesiredWidth(URichTextBlock *this,float param_1)

{
  SRichTextBlock *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->MinDesiredWidth = param_1;
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30._0_4_ = param_1;
    SRichTextBlock::SetMinDesiredWidth(this_00,(TAttribute<float> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetText @ 146a1c160

void __thiscall URichTextBlock::SetText(URichTextBlock *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  SRichTextBlock *this_00;
  undefined1 local_res8 [8];
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->Text).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Text).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Text).Flags = param_1->Flags;
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    local_40._0_8_ = (param_1->TextData).Reference;
    if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 8))(local_40._0_8_,local_res8);
    }
    local_40._8_4_ = param_1->Flags;
    local_40[0x10] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SRichTextBlock::SetText(this_00,(TAttribute<FText> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
    if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 0x10))();
    }
  }
  return;
}

// SetTextOverflowPolicy @ 146a1c690

void __thiscall
URichTextBlock::SetTextOverflowPolicy(URichTextBlock *this,ETextOverflowPolicy param_1)

{
  SRichTextBlock *this_00;
  ETextOverflowPolicy local_res10 [24];
  
  this->TextOverflowPolicy = param_1;
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    local_res10[1] = 1;
    local_res10[0] = param_1;
    SRichTextBlock::SetOverflowPolicy(this_00,SUB82(local_res10,0));
  }
  return;
}

// SetTextStyleSet @ 146a1c780

void __thiscall URichTextBlock::SetTextStyleSet(URichTextBlock *this,UDataTable *param_1)

{
  UDataTable *pUVar1;
  SRichTextBlock *this_00;
  code *pcVar2;
  bool bVar3;
  
  pUVar1 = (this->TextStyleSet).field0_0x0.DebugPtr;
  if (pUVar1 == (UDataTable *)0x0) {
    bVar3 = param_1 == (UDataTable *)0x0;
  }
  else {
    bVar3 = pUVar1 == param_1;
  }
  if (!bVar3) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UDataTable *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->TextStyleSet).field0_0x0.DebugPtr = param_1;
    RebuildStyleInstance(this);
    this_00 = (this->MyRichTextBlock).Object;
    if (this_00 != (SRichTextBlock *)0x0) {
      SRichTextBlock::SetDecoratorStyleSet(this_00,(ISlateStyle *)(this->StyleInstance).Object);
      if ((this->MyRichTextBlock).Object == (SRichTextBlock *)0x0) {
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
      SRichTextBlock::SetTextStyle((this->MyRichTextBlock).Object,&this->DefaultTextStyle);
    }
  }
  return;
}

// SetTextTransformPolicy @ 146a1c840

void __thiscall
URichTextBlock::SetTextTransformPolicy(URichTextBlock *this,ETextTransformPolicy param_1)

{
  SRichTextBlock *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->TextTransformPolicy = param_1;
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SRichTextBlock::SetTransformPolicy(this_00,(TAttribute<ETextTransformPolicy> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// StaticRegisterNativesURichTextBlock @ 146a1ed40

void __cdecl URichTextBlock::StaticRegisterNativesURichTextBlock(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_URichTextBlock_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a24660

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall URichTextBlock::SynchronizeProperties(URichTextBlock *this)

{
  SRichTextBlock *this_00;
  code *pcVar1;
  bool bVar2;
  ETextOverflowPolicy local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  ForAnyElementType FStack_c8;
  ulonglong local_c0;
  undefined1 local_b8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  ForAnyElementType FStack_a8;
  ulonglong local_a0;
  undefined1 local_98 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  ulonglong local_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->MyRichTextBlock).Object;
  if (this_00 != (SRichTextBlock *)0x0) {
    local_98._0_8_ = (this->Text).TextData.Reference;
    if ((ITextData *)local_98._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_98._0_8_ + 8))(local_98._0_8_,local_res10);
    }
    local_98._8_4_ = (this->Text).Flags;
    local_98[0x10] = true;
    local_70 = 0;
    local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_78.Data = (FScriptContainerElement *)0x0;
    SRichTextBlock::SetText(this_00,(TAttribute<FText> *)local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_80,(FWriteAccessScope *)&local_68);
    if (((int)local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_78.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
      local_70 = local_70 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
    if ((ITextData *)local_98._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_98._0_8_ + 0x10))();
    }
    if ((this->MyRichTextBlock).Object == (SRichTextBlock *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_d8[0] = this->TextTransformPolicy;
    local_c0 = 0;
    local_d8[1] = true;
    local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_c8.Data = (FScriptContainerElement *)0x0;
    SRichTextBlock::SetTransformPolicy
              ((this->MyRichTextBlock).Object,(TAttribute<ETextTransformPolicy> *)local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d0,(FWriteAccessScope *)&local_50);
    if (((int)local_c0 != 0) && (FStack_c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c8,0,0,0x10);
      local_c0 = local_c0 & 0xffffffff00000000;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (FStack_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_c8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
    if ((this->MyRichTextBlock).Object == (SRichTextBlock *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_b8._0_4_ = this->MinDesiredWidth;
    local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_a8.Data = (FScriptContainerElement *)0x0;
    local_b8[4] = true;
    local_a0 = 0;
    SRichTextBlock::SetMinDesiredWidth((this->MyRichTextBlock).Object,(TAttribute<float> *)local_b8)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b0,(FWriteAccessScope *)&local_38);
    if (((int)local_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_a8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
      local_a0 = local_a0 & 0xffffffff00000000;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
    if ((this->MyRichTextBlock).Object == (SRichTextBlock *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_res8[0] = this->TextOverflowPolicy;
    local_res8[1] = 1;
    SRichTextBlock::SetOverflowPolicy((this->MyRichTextBlock).Object,SUB82(local_res8,0));
    if ((this->MyRichTextBlock).Object == (SRichTextBlock *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UTextLayoutWidget::SynchronizeTextLayoutProperties<SRichTextBlock>
              ((UTextLayoutWidget *)this,(this->MyRichTextBlock).Object);
  }
  return;
}

// UpdateStyleData @ 146a2c5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall URichTextBlock::UpdateStyleData(URichTextBlock *this)

{
  int *piVar1;
  TArray<TObjectPtr<URichTextBlockDecorator>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStack_128 [32];
  UObject **local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [8];
  UObject *local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((this->StyleInstance).Object == (FSlateStyleSet *)0x0) {
    RebuildStyleInstance(this);
    pFVar14 = (this->DecoratorClasses).AllocatorInstance.Data;
    iVar4 = (this->DecoratorClasses).ArrayNum;
    pFVar3 = pFVar14 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->DecoratorClasses).ArrayNum != iVar4) {
        local_d8[0] = 0;
        `TCheckedPointerIterator<TSubclassOf<URichTextBlockDecorator>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_d8);
      }
      if (pFVar14 == pFVar3) break;
      pUVar5 = *(UClass **)pFVar14;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar5 != (UClass *)0x0) goto LAB_146a2c690;
      }
      else if (pUVar5 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_146a2c690:
        pUVar10 = URichTextBlockDecorator::StaticClass();
        if (pUVar10 != (UClass *)0x0) {
          iVar9 = (int)pUVar10->_padding_;
          if (((int)pUVar5->_padding_ < iVar9) ||
             ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar9 * 8) !=
              &pUVar10->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if ((bVar8) && ((pUVar5->ClassFlags & CLASS_Abstract) == CLASS_None)) {
            local_c8 = 0;
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)this,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar10 = URichTextBlockDecorator::StaticClass();
            CheckIsClassChildOf_Internal(pUVar10,pUVar5);
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_b8,pUVar5);
            local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
            local_b8._56_8_ = (UPackage *)0x0;
            local_b8._16_4_ = 0;
            local_b8._20_4_ = 0;
            local_b8._24_4_ = RF_NoFlags;
            local_b8._40_8_ = (UObject *)0x0;
            local_b8[0x20] = false;
            local_b8._8_8_ = this;
            pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
            if (local_b8._64_8_ != 0) {
              plVar12 = (longlong *)(local_b8 + 0x50);
              if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
                plVar12 = (longlong *)local_b8._104_8_;
              }
              (**(code **)(*plVar12 + 0x10))();
            }
            pTVar2 = &this->InstanceDecorators;
            local_d0 = pUVar11;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar11);
            }
            pFVar6 = (pTVar2->AllocatorInstance).Data;
            if ((pFVar6 <= (FScriptContainerElement *)&local_d0) &&
               (lVar13 = (longlong)(this->InstanceDecorators).ArrayMax,
               (FScriptContainerElement *)&local_d0 < pFVar6 + lVar13 * 8)) {
              local_f0 = (longlong)(this->InstanceDecorators).ArrayNum;
              local_e8 = 8;
              local_108 = &local_d0;
              local_100 = pFVar6;
              local_f8 = lVar13;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            iVar9 = (this->InstanceDecorators).ArrayNum;
            piVar1 = &(this->InstanceDecorators).ArrayMax;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->InstanceDecorators).ArrayNum = iVar9 + 1;
            *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_d0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_d0);
            }
          }
        }
      }
      pFVar14 = pFVar14 + 8;
    }
  }
  return;
}

// execClearAllDefaultStyleOverrides @ 146a32d90

void __cdecl
URichTextBlock::execClearAllDefaultStyleOverrides(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x1f].field_0xc != '\0') {
    lVar1 = *(longlong *)param_1;
    param_1[0x1f].field_0xc = 0;
                    /* WARNING: Could not recover jumptable at 0x000146a32db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x380))();
    return;
  }
  return;
}

// execGetDecoratorByClass @ 146a34a40

void __cdecl URichTextBlock::execGetDecoratorByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  FProperty *pFVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar8 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  plVar11 = *(longlong **)(param_1 + 0x32);
  iVar2 = *(int *)&param_1[0x32].field_0x8;
  plVar1 = plVar11 + iVar2;
  do {
    if (*(int *)&param_1[0x32].field_0x8 != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<URichTextBlockDecorator>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar11 == plVar1) {
      *(undefined8 *)param_3 = 0;
      return;
    }
    lVar5 = *plVar11;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar8 != (UObject *)0x0) goto LAB_146a34b1f;
LAB_146a34b52:
      pUVar10 = (UObject *)0x0;
    }
    else {
      if (pUVar8 == (UObject *)0x0) goto LAB_146a34b52;
      UE::GC::MarkAsReachable(pUVar8);
LAB_146a34b1f:
      pUVar9 = URichTextBlockDecorator::StaticClass();
      if (pUVar9 == (UClass *)0x0) goto LAB_146a34b52;
      iVar3 = (int)pUVar9->_padding_;
      if ((*(int *)&pUVar8[1].field_0x10 < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar3 * 8) !=
          &pUVar9->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pUVar10 = pUVar8;
      if (!bVar7) goto LAB_146a34b52;
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)&pUVar10[1].field_0x10 <= *(int *)(lVar6 + 0x38)) &&
       (*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)&pUVar10[1].field_0x10 * 8)
        == &pUVar10[1].field_0x8)) {
      *(longlong *)param_3 = lVar5;
      return;
    }
    plVar11 = plVar11 + 1;
  } while( true );
}

// execGetDefaultDynamicMaterial @ 146a34bb0

void __cdecl
URichTextBlock::execGetDefaultDynamicMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = 0x210;
  if (param_1[0x1f].field_0xc == '\0') {
    lVar2 = 0x500;
  }
  pUVar4 = *(UMaterialInstanceDynamic **)(&param_1->field_0x0 + lVar2);
  if (pUVar4 != (UMaterialInstanceDynamic *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        if (param_1[0x1f].field_0xc == '\0') {
          param_1[0x1f].field_0xc = 1;
          FTextBlockStyle::operator=
                    ((FTextBlockStyle *)&param_1[0xc].field_0x20,
                     (FTextBlockStyle *)&param_1[0x1f].field_0x18);
        }
        pUVar4 = UMaterialInstanceDynamic::Create((UMaterialInterface *)pUVar4,param_1,(FName)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        *(UMaterialInstanceDynamic **)&param_1[0xd].field_0x8 = pUVar4;
        (**(code **)(*(longlong *)param_1 + 0x380))(param_1);
      }
      *(UMaterialInstanceDynamic **)param_3 = pUVar4;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetText @ 146a36450

void __cdecl URichTextBlock::execGetText(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[0x32].field_0x20;
  if (lVar1 == 0) {
    local_18.TextData.Reference = *(ITextData **)&param_1[0xb].field_0x18;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)&param_1[0xb].field_0x20;
  }
  else {
    pFVar2 = FText::GetEmpty();
    if (*(char *)(lVar1 + 0x228) != '\0') {
      pFVar2 = TAttribute<FText>::Get((TAttribute<FText> *)(lVar1 + 0x218));
    }
    local_18.TextData.Reference = (pFVar2->TextData).Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = pFVar2->Flags;
  }
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetTextStyleSet @ 146a365e0

void __cdecl URichTextBlock::execGetTextStyleSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0xc);
  return;
}

// execRefreshTextLayout @ 146a38220

void __cdecl URichTextBlock::execRefreshTextLayout(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  SWidget *this;
  code *pcVar2;
  bool bVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SWidget **)&param_1[0x32].field_0x20;
  if (this == (SWidget *)0x0) {
    return;
  }
  plVar1 = *(longlong **)&this[1].field_0x30;
  if (*plVar1 == 0) {
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
  FTextLayout::DirtyLayout((FTextLayout *)*plVar1);
  if (plVar1[2] == 0) {
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
  (**(code **)(*(longlong *)plVar1[2] + 0x20))();
  SWidget::Invalidate(this,Layout);
  return;
}

// execSetAutoWrapText @ 146a3a1a0

void __cdecl URichTextBlock::execSetAutoWrapText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SRichTextBlock *this;
  int local_res8 [2];
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
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
  local_30[0] = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SRichTextBlock **)&param_1[0x32].field_0x20;
  param_1[10].field_0x25 = param_1[10].field_0x25 & 0xfe;
  param_1[10].field_0x25 = param_1[10].field_0x25 | local_30[0];
  if (this != (SRichTextBlock *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SRichTextBlock::SetAutoWrapText(this,(TAttribute<bool> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// execSetDecorators @ 146a3b7f0

void __cdecl URichTextBlock::execSetDecorators(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<TSubclassOf<URichTextBlockDecorator>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TSubclassOf<URichTextBlockDecorator>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<TSubclassOf<URichTextBlockDecorator>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<TSubclassOf<URichTextBlockDecorator>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<TSubclassOf<URichTextBlockDecorator>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDecorators((URichTextBlock *)param_1,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetDefaultColorAndOpacity @ 146a3b8a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
URichTextBlock::execSetDefaultColorAndOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  
  local_38 = ___xmm_3f8000003f800000000000003f800000;
  uStack_30 = _UNK_15090c6d8;
  local_28 = local_28 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  uVar5 = local_28;
  uVar4 = uStack_30;
  uVar3 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x1f].field_0xc == '\0') {
    param_1[0x1f].field_0xc = 1;
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)&param_1[0xc].field_0x20,
               (FTextBlockStyle *)&param_1[0x1f].field_0x18);
  }
  lVar2 = *(longlong *)param_1;
  *(undefined8 *)&param_1[0xf].field_0x10 = uVar3;
  *(undefined8 *)&param_1[0xf].field_0x18 = uVar4;
  *(uint *)&param_1[0xf].field_0x20 = uVar5;
  (**(code **)(lVar2 + 0x380))(param_1);
  return;
}

// execSetDefaultFont @ 146a3b970

void __cdecl URichTextBlock::execSetDefaultFont(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateFontInfo *pFVar2;
  FSlateFontInfo local_c8;
  FSlateFontInfo local_68;
  
  FSlateFontInfo::FSlateFontInfo(&local_c8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FSlateFontInfo::FSlateFontInfo(&local_68,&local_c8);
  if (param_1[0x1f].field_0xc == '\0') {
    param_1[0x1f].field_0xc = 1;
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)&param_1[0xc].field_0x20,
               (FTextBlockStyle *)&param_1[0x1f].field_0x18);
  }
  FSlateFontInfo::operator=((FSlateFontInfo *)(param_1 + 0xd),pFVar2);
  (**(code **)(*(longlong *)param_1 + 0x380))(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar2->CompositeFont).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// execSetDefaultMaterial @ 146a3ba70

void __cdecl URichTextBlock::execSetDefaultMaterial(UObject *param_1,FFrame *param_2,void *param_3)

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
  if (param_1[0x1f].field_0xc == '\0') {
    param_1[0x1f].field_0xc = 1;
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)&param_1[0xc].field_0x20,
               (FTextBlockStyle *)&param_1[0x1f].field_0x18);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(UObject **)&param_1[0xd].field_0x8 = pUVar2;
  (**(code **)(*(longlong *)param_1 + 0x380))(param_1);
  return;
}

// execSetDefaultShadowColorAndOpacity @ 146a3bb40

void __cdecl
URichTextBlock::execSetDefaultShadowColorAndOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x1f].field_0xc == '\0') {
    param_1[0x1f].field_0xc = 1;
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)&param_1[0xc].field_0x20,
               (FTextBlockStyle *)&param_1[0x1f].field_0x18);
  }
  lVar2 = *(longlong *)param_1;
  *(undefined8 *)&param_1[0x10].field_0x4 = local_28;
  *(undefined8 *)&param_1[0x10].field_0xc = uStack_20;
  (**(code **)(lVar2 + 0x380))(param_1);
  return;
}

// execSetDefaultShadowOffset @ 146a3bc00

void __cdecl
URichTextBlock::execSetDefaultShadowOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  double local_28;
  double dStack_20;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x1f].field_0xc == '\0') {
    param_1[0x1f].field_0xc = 1;
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)&param_1[0xc].field_0x20,
               (FTextBlockStyle *)&param_1[0x1f].field_0x18);
  }
  lVar2 = *(longlong *)param_1;
  *(float *)&param_1[0xf].field_0x24 = (float)local_28;
  *(float *)(param_1 + 0x10) = (float)dStack_20;
  (**(code **)(lVar2 + 0x380))(param_1);
  return;
}

// execSetDefaultStrikeBrush @ 146a3bcd0

void __cdecl
URichTextBlock::execSetDefaultStrikeBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *pFVar2;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pFVar2 = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    pFVar2 = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x1f].field_0xc == '\0') {
    param_1[0x1f].field_0xc = 1;
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)&param_1[0xc].field_0x20,
               (FTextBlockStyle *)&param_1[0x1f].field_0x18);
  }
  FSlateBrush::operator=((FSlateBrush *)(param_1 + 0x16),pFVar2);
  (**(code **)(*(longlong *)param_1 + 0x380))(param_1);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execSetDefaultTextStyle @ 146a3bdd0

void __cdecl URichTextBlock::execSetDefaultTextStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTextBlockStyle *pFVar2;
  FTextBlockStyle local_2e8;
  
  FTextBlockStyle::FTextBlockStyle(&local_2e8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2e8);
  }
  pFVar2 = &local_2e8;
  if ((FTextBlockStyle *)param_2->MostRecentPropertyAddress != (FTextBlockStyle *)0x0) {
    pFVar2 = (FTextBlockStyle *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x1f].field_0xc == '\0') {
    param_1[0x1f].field_0xc = 1;
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)&param_1[0xc].field_0x20,
               (FTextBlockStyle *)&param_1[0x1f].field_0x18);
  }
  FTextBlockStyle::operator=((FTextBlockStyle *)&param_1[0xc].field_0x20,pFVar2);
  (**(code **)(*(longlong *)param_1 + 0x380))(param_1);
  FTextBlockStyle::~FTextBlockStyle(&local_2e8);
  return;
}

// execSetMinDesiredWidth @ 146a3f560

void __cdecl URichTextBlock::execSetMinDesiredWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMinDesiredWidth((URichTextBlock *)param_1,local_res10[0]);
  return;
}

// execSetText @ 146a434a0

void __cdecl URichTextBlock::execSetText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x358))(param_1,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execSetTextOverflowPolicy @ 146a43830

void __cdecl
URichTextBlock::execSetTextOverflowPolicy(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SRichTextBlock *this;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  undefined1 local_res11;
  
  local_res8[0] = 0;
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
  this = *(SRichTextBlock **)&param_1[0x32].field_0x20;
  param_1[0x1f].field_0xe = local_res8[0];
  if (this != (SRichTextBlock *)0x0) {
    local_res10 = local_res8[0];
    local_res11 = 1;
    SRichTextBlock::SetOverflowPolicy(this,SUB82(&local_res10,0));
  }
  return;
}

// execSetTextStyleSet @ 146a43a40

void __cdecl URichTextBlock::execSetTextStyleSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *pUVar3;
  bool bVar4;
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
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UObject **)(param_1 + 0xc) == (UObject *)0x0) {
    bVar4 = local_res8 == (UObject *)0x0;
  }
  else {
    bVar4 = *(UObject **)(param_1 + 0xc) == local_res8;
  }
  if (!bVar4) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    *(UObject **)(param_1 + 0xc) = pUVar3;
    RebuildStyleInstance((URichTextBlock *)param_1);
    if (*(SRichTextBlock **)&param_1[0x32].field_0x20 != (SRichTextBlock *)0x0) {
      SRichTextBlock::SetDecoratorStyleSet
                (*(SRichTextBlock **)&param_1[0x32].field_0x20,
                 *(ISlateStyle **)&param_1[0x32].field_0x10);
      if (*(longlong *)&param_1[0x32].field_0x20 == 0) {
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
      SRichTextBlock::SetTextStyle
                (*(SRichTextBlock **)&param_1[0x32].field_0x20,
                 (FTextBlockStyle *)&param_1[0x1f].field_0x18);
    }
  }
  return;
}

// execSetTextTransformPolicy @ 146a43b60

void __cdecl
URichTextBlock::execSetTextTransformPolicy(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ETextTransformPolicy local_res10 [24];
  
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTextTransformPolicy((URichTextBlock *)param_1,local_res10[0]);
  return;
}

