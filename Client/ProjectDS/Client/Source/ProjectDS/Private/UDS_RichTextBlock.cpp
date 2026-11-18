// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// SetTextField_WrapperImpl @ 14b582830

void __cdecl UDS_RichTextBlock::SetTextField_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014bcc92b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x358))();
  return;
}

// StaticClass @ 14b582840

UClass * __cdecl UDS_RichTextBlock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RichTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RichTextBlock",
               &Z_Registration_Info_UClass_UDS_RichTextBlock.InnerSingleton,
               StaticRegisterNativesUDS_RichTextBlock,0x810,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RichTextBlock>,
               InternalVTableHelperCtorCaller<UDS_RichTextBlock>,local_res8,
               URichTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RichTextBlock.InnerSingleton;
}

// UDS_RichTextBlock @ 14b586f40

UDS_RichTextBlock * __thiscall
UDS_RichTextBlock::UDS_RichTextBlock(UDS_RichTextBlock *this,FVTableHelper *param_1)

{
  URichTextBlock::URichTextBlock((URichTextBlock *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->TextField);
  return this;
}

// ~UDS_RichTextBlock @ 14b587920

void __thiscall UDS_RichTextBlock::~UDS_RichTextBlock(UDS_RichTextBlock *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pIVar1 = (this->TextField).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  URichTextBlock::~URichTextBlock((URichTextBlock *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b588bd0

IClassDescriptor * __thiscall
UDS_RichTextBlock::GetFieldNotificationDescriptor(UDS_RichTextBlock *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_RichTextBlock::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b588ef0

UClass * __cdecl UDS_RichTextBlock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RichTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RichTextBlock",
               &Z_Registration_Info_UClass_UDS_RichTextBlock.InnerSingleton,
               StaticRegisterNativesUDS_RichTextBlock,0x810,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RichTextBlock>,
               InternalVTableHelperCtorCaller<UDS_RichTextBlock>,local_res8,
               URichTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RichTextBlock.InnerSingleton;
}

// StaticRegisterNativesUDS_RichTextBlock @ 14b589b80

void __cdecl UDS_RichTextBlock::StaticRegisterNativesUDS_RichTextBlock(void)

{
  return;
}

// UDS_RichTextBlock @ 14bc840f0

UDS_RichTextBlock * __thiscall
UDS_RichTextBlock::UDS_RichTextBlock(UDS_RichTextBlock *this,FObjectInitializer *param_1)

{
  URichTextBlock::URichTextBlock((URichTextBlock *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->TextField);
  return this;
}

// BeginDestroy @ 14bc87dd0

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

void __thiscall UDS_RichTextBlock::BeginDestroy(UDS_RichTextBlock *this)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  
  if ((this->_padding_ & 0x2000) != 0) {
    pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      UGameViewportSubsystem::RemoveWidget(this_00,(UWidget *)this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x0001469a3148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this,0);
  return;
}

// ReleaseSlateResources @ 14bcc3c00

void __thiscall UDS_RichTextBlock::ReleaseSlateResources(UDS_RichTextBlock *this,bool param_1)

{
  int *piVar1;
  undefined8 uStack_28;
  FSharedReferencer<1> FStack_20;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  uStack_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &uStack_28) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &uStack_18) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  return;
}

// SetTextField @ 14bcc92b0

void __thiscall UDS_RichTextBlock::SetTextField(UDS_RichTextBlock *this,FText *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bcc92b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x358))();
  return;
}

// SynchronizeProperties @ 14bccbb40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_RichTextBlock::SynchronizeProperties(UDS_RichTextBlock *this)

{
  SRichTextBlock *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uStackX_8;
  undefined1 uStackX_9;
  undefined1 auStackX_10 [8];
  undefined1 auStack_d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_d0;
  ForAnyElementType FStack_c8;
  ulonglong uStack_c0;
  undefined1 auStack_b8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_b0;
  ForAnyElementType FStack_a8;
  ulonglong uStack_a0;
  undefined1 auStack_98 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_80;
  ForAnyElementType FStack_78;
  ulonglong uStack_70;
  FDestructionSentinel FStack_68;
  FDestructionSentinel FStack_50;
  FDestructionSentinel FStack_38;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (SRichTextBlock *)this->_padding_;
  if (this_00 != (SRichTextBlock *)0x0) {
    auStack_98._0_8_ = this->_padding_;
    if ((ITextData *)auStack_98._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)auStack_98._0_8_ + 8))(auStack_98._0_8_,auStackX_10);
    }
    auStack_98._8_4_ = (undefined4)this->_padding_;
    auStack_98[0x10] = true;
    uStack_70 = 0;
    TStack_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_78.Data = (FScriptContainerElement *)0x0;
    SRichTextBlock::SetText(this_00,(TAttribute<FText> *)auStack_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_80,(FWriteAccessScope *)&FStack_68);
    if (((int)uStack_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_78.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
      uStack_70 = uStack_70 & 0xffffffff00000000;
    }
    if (FStack_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_68.Accessor,&FStack_68);
    }
    if (FStack_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_80.AccessDetector);
    if ((ITextData *)auStack_98._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)auStack_98._0_8_ + 0x10))();
    }
    if (this->_padding_ == 0) {
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
    auStack_d8[0] = *(ETextTransformPolicy *)((longlong)&this->_padding_ + 5);
    uStack_c0 = 0;
    auStack_d8[1] = true;
    TStack_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_c8.Data = (FScriptContainerElement *)0x0;
    SRichTextBlock::SetTransformPolicy
              ((SRichTextBlock *)this->_padding_,(TAttribute<ETextTransformPolicy> *)auStack_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_d0,(FWriteAccessScope *)&FStack_50);
    if (((int)uStack_c0 != 0) && (FStack_c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c8,0,0,0x10);
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
    }
    if (FStack_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
    }
    if (FStack_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_c8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_d0.AccessDetector);
    if (this->_padding_ == 0) {
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
    auStack_b8._0_4_ = *(undefined4 *)&this->_padding_;
    TStack_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_a8.Data = (FScriptContainerElement *)0x0;
    auStack_b8[4] = true;
    uStack_a0 = 0;
    SRichTextBlock::SetMinDesiredWidth
              ((SRichTextBlock *)this->_padding_,(TAttribute<float> *)auStack_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_b0,(FWriteAccessScope *)&FStack_38);
    if (((int)uStack_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_a8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
    }
    if (FStack_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_38.Accessor,&FStack_38);
    }
    if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_b0.AccessDetector);
    if (this->_padding_ == 0) {
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
    uStackX_8 = *(undefined1 *)((longlong)&this->_padding_ + 6);
    uStackX_9 = 1;
    SRichTextBlock::SetOverflowPolicy((SRichTextBlock *)this->_padding_,SUB82(&uStackX_8,0));
    if (this->_padding_ == 0) {
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
              ((UTextLayoutWidget *)this,(SRichTextBlock *)this->_padding_);
  }
  return;
}

