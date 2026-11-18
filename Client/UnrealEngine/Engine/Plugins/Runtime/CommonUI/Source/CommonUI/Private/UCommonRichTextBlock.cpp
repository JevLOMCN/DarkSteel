// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 21

// StaticClass @ 14a7815c0

UClass * __cdecl UCommonRichTextBlock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonRichTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonRichTextBlock",
               &Z_Registration_Info_UClass_UCommonRichTextBlock.InnerSingleton,
               StaticRegisterNativesUCommonRichTextBlock,0x830,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonRichTextBlock>,
               InternalVTableHelperCtorCaller<UCommonRichTextBlock>,local_res8,
               URichTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonRichTextBlock.InnerSingleton;
}

// UCommonRichTextBlock @ 14a7ae5a0

UCommonRichTextBlock * __thiscall
UCommonRichTextBlock::UCommonRichTextBlock(UCommonRichTextBlock *this,FVTableHelper *param_1)

{
  URichTextBlock::URichTextBlock((URichTextBlock *)this,param_1);
  this->bTintInlineIcon = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ScrollStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->MyTextScroller).Object = (STextScroller *)0x0;
  (this->MyTextScroller).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->MobileTextBlockScale = 1.0;
  this->ScrollOrientation = '\0';
  this->bIsScrollingEnabled = true;
  this->bDisplayAllCaps_DEPRECATED = false;
  this->bAutoCollapseWithEmptyText = false;
  return this;
}

// UCommonRichTextBlock @ 14a7ae610

UCommonRichTextBlock * __thiscall
UCommonRichTextBlock::UCommonRichTextBlock(UCommonRichTextBlock *this,FObjectInitializer *param_1)

{
  URichTextBlock::URichTextBlock((URichTextBlock *)this,param_1);
  this->bTintInlineIcon = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ScrollStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->MyTextScroller).Object = (STextScroller *)0x0;
  (this->MyTextScroller).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->MobileTextBlockScale = 1.0;
  this->ScrollOrientation = '\0';
  this->bIsScrollingEnabled = true;
  this->bDisplayAllCaps_DEPRECATED = false;
  this->bAutoCollapseWithEmptyText = false;
  return this;
}

// ~UCommonRichTextBlock @ 14a7b3230

void __thiscall UCommonRichTextBlock::~UCommonRichTextBlock(UCommonRichTextBlock *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyTextScroller).SharedReferenceCount.ReferenceController);
  URichTextBlock::~URichTextBlock((URichTextBlock *)this);
  return;
}

// ApplyTextBlockScale @ 14a7bf450

void __thiscall UCommonRichTextBlock::ApplyTextBlockScale(UCommonRichTextBlock *this)

{
  if ((SRichTextBlock *)this->_padding_ != (SRichTextBlock *)0x0) {
    SRichTextBlock::SetTextBlockScale((SRichTextBlock *)this->_padding_,this->MobileTextBlockScale);
    return;
  }
  return;
}

// ApplyUpdatedDefaultTextStyle @ 14a7c03f0

void __thiscall UCommonRichTextBlock::ApplyUpdatedDefaultTextStyle(UCommonRichTextBlock *this)

{
  int iVar1;
  
  URichTextBlock::ApplyUpdatedDefaultTextStyle((URichTextBlock *)this);
  iVar1 = (**(code **)(*(longlong *)CommonUIUtils::EnableMobileUITextScaling._padding_ + 200))();
  if ((iVar1 == 1) && ((SRichTextBlock *)this->_padding_ != (SRichTextBlock *)0x0)) {
    SRichTextBlock::SetTextBlockScale((SRichTextBlock *)this->_padding_,this->MobileTextBlockScale);
    return;
  }
  return;
}

// CreateDecorators @ 14a7d1310

void __thiscall
UCommonRichTextBlock::CreateDecorators
          (UCommonRichTextBlock *this,
          TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FCommonRichTextDecorator *pFVar4;
  FCommonDecorator_InlineIcon *this_00;
  FCommonDecorator_InlineIcon *pFVar5;
  FScriptContainerElement *pFVar6;
  UCommonRichTextBlock *local_res10;
  TRawPtrProxy<FCommonRichTextDecorator> local_res18;
  TRawPtrProxy<FCommonDecorator_InlineIcon> local_res20;
  FCommonRichTextDecorator *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FCommonDecorator_InlineIcon *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TSharedRef<FCommonRichTextDecorator,1> local_48;
  TSharedRef<FCommonDecorator_InlineIcon,1> local_38;
  
  URichTextBlock::CreateDecorators((URichTextBlock *)this,param_1);
  pFVar4 = ::operator_new(0x10);
  if (pFVar4 == (FCommonRichTextDecorator *)0x0) {
    pFVar4 = (FCommonRichTextDecorator *)0x0;
  }
  else {
    pFVar4->_padding_ = (longlong)&___7FCommonRichTextDecorator__6B_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonRichTextBlock *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (pFVar4->Owner).WeakPtr = (FWeakObjectPtr)0x0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonRichTextBlock *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(pFVar4->Owner).WeakPtr,(FObjectPtr)&local_res10);
  }
  pFVar5 = (FCommonDecorator_InlineIcon *)0x0;
  local_res18.Object = pFVar4;
  TSharedRef<FCommonRichTextDecorator,1>::
  TSharedRef<FCommonRichTextDecorator,1><FCommonRichTextDecorator>(&local_48,&local_res18);
  local_68 = local_48.Object;
  pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar6 = (param_1->AllocatorInstance).Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 < pFVar6 + (longlong)param_1->ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  param_1->ArrayNum = iVar3 + 1;
  *(FCommonRichTextDecorator **)pFVar6 = local_68;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) = pTStack_60;
  if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  this_00 = ::operator_new(0x10);
  if (this_00 != (FCommonDecorator_InlineIcon *)0x0) {
    pFVar5 = FCommonDecorator_InlineIcon::FCommonDecorator_InlineIcon(this_00,this);
  }
  local_res20.Object = pFVar5;
  TSharedRef<FCommonDecorator_InlineIcon,1>::
  TSharedRef<FCommonDecorator_InlineIcon,1><FCommonDecorator_InlineIcon>(&local_38,&local_res20);
  local_58 = local_38.Object;
  pTStack_50 = local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar6 = (param_1->AllocatorInstance).Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar6 + (longlong)param_1->ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  param_1->ArrayNum = iVar3 + 1;
  *(FCommonDecorator_InlineIcon **)pFVar6 = local_58;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) = pTStack_50;
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// EscapeStringForRichText @ 14a7d4cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UCommonRichTextBlock::EscapeStringForRichText(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_188 [32];
  ForAnyElementType local_138;
  undefined8 local_130;
  ForAnyElementType local_128;
  undefined8 local_120;
  TSharedRef<FDefaultRichTextMarkupWriter,1> local_118;
  void *local_108;
  undefined8 local_100;
  undefined1 local_f8 [24];
  undefined8 uStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ForElementType<FSetElementId> FStack_c0;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_98;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FDefaultRichTextMarkupWriter::GetStaticInstance(&local_118);
  local_98.Elements._44_4_ = 0x80;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar7 = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Data).ArrayNum;
  iVar1 = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  FStack_c0.InlineData[0] = '\0';
  FStack_c0.InlineData[1] = '\0';
  FStack_c0.InlineData[2] = '\0';
  FStack_c0.InlineData[3] = '\0';
  FStack_c0._padding_ = 0;
  local_130 = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8._16_8_ = 0;
  uStack_e0 = 0;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  uStack_d0 = 0x8000000000;
  local_c8 = 0xffffffff;
  FStack_c0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_b0 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_4_ = 0;
  local_a8._12_4_ = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)(local_a8 + 0x10),
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)local_f8);
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120._0_4_ = 1;
  local_48.Data = pFVar7;
  local_40 = iVar5;
  local_3c = iVar1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x70,8,1,0,&local_128,1,(int *)((longlong)&local_120 + 4));
  ConstructItems<IRichTextMarkupWriter::FRichTextRun,IRichTextMarkupWriter::FRichTextRun,int>
            (local_128.Data,(FRichTextRun *)local_a8,1);
  if (((local_138.Data <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 < local_138.Data + (longlong)local_130._4_4_ * 0x10))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  iVar5 = (int)local_130;
  if ((int)local_130 == local_130._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_138,(int *)((longlong)&local_130 + 4));
  }
  local_130 = CONCAT44(local_130._4_4_,iVar5 + 1);
  pFVar7 = local_138.Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_128.Data;
  local_128.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = (int)local_120;
  *(int *)(pFVar7 + 0xc) = local_120._4_4_;
  local_120._0_4_ = 0;
  local_120._4_4_ = 0;
  DestructItems<IRichTextMarkupWriter::FRichTextRun,int>((FRichTextRun *)0x0,0);
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a8 + 0x10));
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if (FStack_c0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_c0.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_f8,0,local_f8._8_4_);
  iVar5 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  uVar3 = uStack_d0._4_4_;
  local_c8 = 0xffffffff;
  uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
  if (0x80 < uVar3) {
    uStack_d0 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  (**(code **)((longlong)*local_118.Object + 8))(local_118.Object,&local_138,__return_storage_ptr__)
  ;
  DestructItems<IRichTextMarkupWriter::FRichTextLine,int>
            ((FRichTextLine *)local_138.Data,(int)local_130);
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  pFVar7 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a7e5f80

UClass * __cdecl UCommonRichTextBlock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonRichTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonRichTextBlock",
               &Z_Registration_Info_UClass_UCommonRichTextBlock.InnerSingleton,
               StaticRegisterNativesUCommonRichTextBlock,0x830,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonRichTextBlock>,
               InternalVTableHelperCtorCaller<UCommonRichTextBlock>,local_res8,
               URichTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonRichTextBlock.InnerSingleton;
}

// RebuildWidget @ 14a80af70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UCommonRichTextBlock::RebuildWidget
          (UCommonRichTextBlock *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<STextScroller,1> *pTVar1;
  float fVar2;
  int iVar3;
  UObject *pUVar4;
  SWidget *pSVar5;
  STextScroller *pSVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  EWidgetClipping EVar11;
  UClass *pUVar12;
  TSharedRef<SWidget,1> *pTVar13;
  FArguments *pFVar14;
  TSharedRef<STextScroller,1> *pTVar15;
  UObject *pUVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  T0RequiredArgs local_res8 [8];
  TSharedRef<SWidget,1> *local_res10;
  FLLMScope local_res18 [2];
  FName local_res20;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  STextScroller *local_2f8;
  FSharedReferencer<1> local_2f0;
  TSharedRef<ISlateMetaData,1> local_2e8;
  FMemScope local_2d8;
  UObject *local_2d0;
  UCommonRichTextBlock *local_2c8;
  UObject *local_2c0;
  SWidget *local_2b8;
  SWidget *local_2b0;
  TReferenceControllerBase<1> *pTStack_2a8;
  TSharedRef<STextScroller,1> local_2a0;
  TSharedRef<SWidget,1> local_290;
  TSlateDecl<STextScroller,RequiredArgs::T0RequiredArgs> local_280;
  FArguments local_268;
  
  pUVar12 = (this->ScrollStyle).Class.field0_0x0.DebugPtr;
  local_res10 = __return_storage_ptr__;
  if (pUVar12 != (UClass *)0x0) {
    if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar12);
    }
    pUVar4 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar4 != (UObject *)0x0) {
      pUVar12 = UCommonTextScrollStyle::StaticClass();
      iVar3 = (int)pUVar12->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar12->_padding_)) goto LAB_14a80b00e;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Result && Result->IsA(T::StaticClass())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                        ,0x93,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
    if (pUVar4 != (UObject *)0x0) {
LAB_14a80b00e:
      EVar11 = UWidget::GetClipping((UWidget *)this);
      if (EVar11 == Inherit) {
        UWidget::SetClipping((UWidget *)this,OnDemand);
      }
      pFVar14 = STextScroller::FArguments::FArguments(&local_268);
      local_318 = *(undefined8 *)(pUVar4 + 1);
      uStack_310 = *(undefined8 *)&pUVar4[1].field_0x8;
      fVar2 = *(float *)&pUVar4[1].field_0x10;
      (pFVar14->_ScrollOptions).Speed = (float)(int)local_318;
      (pFVar14->_ScrollOptions).StartDelay = (float)(int)((ulonglong)local_318 >> 0x20);
      (pFVar14->_ScrollOptions).EndDelay = (float)(int)uStack_310;
      (pFVar14->_ScrollOptions).FadeInDelay = (float)(int)((ulonglong)uStack_310 >> 0x20);
      (pFVar14->_ScrollOptions).FadeOutDelay = fVar2;
      pFVar14->_ScrollOrientation = (uint)(this->ScrollOrientation).Value;
      pTVar13 = URichTextBlock::RebuildWidget((URichTextBlock *)this,&local_290);
      pSVar5 = pTVar13->Object;
      pTVar18 = (pTVar13->SharedReferenceCount).ReferenceController;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2b0 = (pFVar14->_Content).Widget.Object;
      pTStack_2a8 = (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar14->_Content).Widget.Object = pSVar5;
      (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar18;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_2a8);
      FLLMScope::FLLMScope
                (local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_2d8,&local_res20,true);
      TSlateDecl<STextScroller,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<STextScroller,RequiredArgs::T0RequiredArgs>
                (&local_280,"STextScroller",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonRichTextBlock.cpp"
                 ,499,local_res8);
      FMemScope::~FMemScope(&local_2d8);
      FLLMScope::~FLLMScope(local_res18);
      pTVar15 = TSlateDecl<STextScroller,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_280,&local_2a0,pFVar14);
      local_2f0.ReferenceController = (pTVar15->SharedReferenceCount).ReferenceController;
      local_2f8 = pTVar15->Object;
      if (local_2f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_2f0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_2f0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar1 = &this->MyTextScroller;
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<STextScroller,1> *)&local_2f8) {
        pTVar1->Object = local_2f8;
        local_2f8 = (STextScroller *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->MyTextScroller).SharedReferenceCount,&local_2f0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_280._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_290.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_268._Content.Widget.SharedReferenceCount.ReferenceController);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_268);
      if (this->_padding_ == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
          return pTVar13;
        }
      }
      local_318 = CONCAT62(local_318._2_6_,0x100);
      uStack_310 = 0;
      local_318 = CONCAT71(local_318._1_7_,EVisibility::SelfHitTestInvisible.Value.Value);
      local_300 = 0;
      local_308 = 0;
      (**(code **)(*(longlong *)this->_padding_ + 0x1c8))((longlong *)this->_padding_,&local_318);
      if (this->_padding_ == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
          return pTVar13;
        }
      }
      local_2b8 = (SWidget *)this->_padding_;
      pUVar16 = UWidget::GetSourceAssetOrClass((UWidget *)this);
      pUVar4 = (UObject *)this->_padding_;
      uVar8 = *(undefined4 *)&this->_padding_;
      uVar9 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      pTVar17 = ::operator_new(0x38);
      if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
        local_2e8.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
        local_2e8.SharedReferenceCount.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar17->SharedReferenceCount = (atomic<int>)0x1;
        pTVar17->WeakReferenceCount = (atomic<int>)0x1;
        pTVar17->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFReflectionMetaData___00_SharedPointerInternals__6B_
        ;
        pTVar17[1]._padding_ = (longlong)&___7FReflectionMetaData__6B_;
        pTVar17[1].SharedReferenceCount = (atomic<int>)uVar8;
        pTVar17[1].WeakReferenceCount = (atomic<int>)uVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pTVar17[2]._padding_ = 0;
        local_2d0 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar17 + 2),(FObjectPtr)&local_2d0);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        pTVar17[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar17[2].WeakReferenceCount = (atomic<int>)0x0;
        local_2c8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)&pTVar17[2].SharedReferenceCount,(FObjectPtr)&local_2c8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar16);
        }
        pTVar17[3]._padding_ = 0;
        local_2c0 = pUVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar16);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar17 + 3),(FObjectPtr)&local_2c0);
        local_2e8.Object = (ISlateMetaData *)(pTVar17 + 1);
        if ((TReferenceControllerBase<1> *)local_2e8.Object == (TReferenceControllerBase<1> *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L"");
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
            return pTVar13;
          }
        }
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
        pTVar18 = pTVar17;
        local_2e8.SharedReferenceCount.ReferenceController = pTVar17;
      }
      SWidget::AddMetadataInternal(local_2b8,&local_2e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
      if (pTVar1->Object == (STextScroller *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
          return pTVar13;
        }
      }
      pTVar18 = (this->MyTextScroller).SharedReferenceCount.ReferenceController;
      pSVar6 = pTVar1->Object;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pSVar6 == (STextScroller *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
          return pTVar13;
        }
      }
      pTVar13 = local_res10;
      local_res10->Object = (SWidget *)pSVar6;
      (local_res10->SharedReferenceCount).ReferenceController = pTVar18;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
      return pTVar13;
    }
  }
  URichTextBlock::RebuildWidget((URichTextBlock *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// RefreshOverrideStyle @ 14a80d550

void __thiscall UCommonRichTextBlock::RefreshOverrideStyle(UCommonRichTextBlock *this)

{
  UCommonTextStyle *pUVar1;
  undefined1 local_2e8 [128];
  float local_268;
  FLinearColor_u_0 local_264 [14];
  FSlateBrush local_178 [2];
  
  pUVar1 = TSubclassOf<UCommonTextStyle>::GetDefaultObject(&this->DefaultTextStyleOverrideClass);
  if (pUVar1 != (UCommonTextStyle *)0x0) {
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_2e8);
    FSlateFontInfo::operator=((FSlateFontInfo *)(local_2e8 + 8),&pUVar1->Font);
    local_2e8._104_8_ = *(undefined8 *)&(pUVar1->Color).field0_0x0;
    local_2e8._112_8_ = *(undefined8 *)((longlong)&(pUVar1->Color).field0_0x0 + 8);
    local_2e8[0x78] = UseColor_Specified;
    FSlateBrush::operator=(local_178,&pUVar1->StrikeBrush);
    if (pUVar1->bUsesDropShadow != false) {
      local_2e8._124_4_ = (undefined4)(pUVar1->ShadowOffset).field0_0x0._s_0.X;
      local_268 = (float)(pUVar1->ShadowOffset).field0_0x0._s_0.Y;
      local_264[0]._0_8_ = *(undefined8 *)&(pUVar1->ShadowColor).field0_0x0;
      local_264[0]._8_8_ = *(undefined8 *)((longlong)&(pUVar1->ShadowColor).field0_0x0 + 8);
    }
    URichTextBlock::SetDefaultTextStyle((URichTextBlock *)this,(FTextBlockStyle *)local_2e8);
    FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)local_2e8);
  }
  return;
}

// ReleaseSlateResources @ 14a811f60

void __thiscall UCommonRichTextBlock::ReleaseSlateResources(UCommonRichTextBlock *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  URichTextBlock::ReleaseSlateResources((URichTextBlock *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyTextScroller != (TSharedPtr<STextScroller,1> *)&local_18) {
    (this->MyTextScroller).Object = (STextScroller *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyTextScroller).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// Serialize @ 14a815a10

void __thiscall UCommonRichTextBlock::Serialize(UCommonRichTextBlock *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && (this->bDisplayAllCaps_DEPRECATED != false)) {
    URichTextBlock::SetTextTransformPolicy((URichTextBlock *)this,ToUpper);
    this->bDisplayAllCaps_DEPRECATED = false;
  }
  return;
}

// Serialize @ 14a815a60

void __thiscall
UCommonRichTextBlock::Serialize(UCommonRichTextBlock *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  if (((pFVar1->field_0x28 & 1) != 0) && (this->bDisplayAllCaps_DEPRECATED != false)) {
    URichTextBlock::SetTextTransformPolicy((URichTextBlock *)this,ToUpper);
    this->bDisplayAllCaps_DEPRECATED = false;
  }
  return;
}

// SetScrollingEnabled @ 14a81aed0

void __thiscall UCommonRichTextBlock::SetScrollingEnabled(UCommonRichTextBlock *this,bool param_1)

{
  this->bIsScrollingEnabled = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014a81aed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))();
  return;
}

// SetStyle @ 14a81bc40

void __thiscall
UCommonRichTextBlock::SetStyle(UCommonRichTextBlock *this,TSubclassOf<UCommonTextStyle> *param_1)

{
  UClass *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Class).field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DefaultTextStyleOverrideClass).Class.field0_0x0 = (param_1->Class).field0_0x0;
                    /* WARNING: Could not recover jumptable at 0x00014a81bc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))(this);
  return;
}

// SetText @ 14a81c590

void __thiscall UCommonRichTextBlock::SetText(UCommonRichTextBlock *this,FText *param_1)

{
  SRichTextBlock *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  URichTextBlock::SetText((URichTextBlock *)this,param_1);
  if (this->_padding_ != 0) {
    iVar3 = (**(code **)(*(longlong *)CommonUIUtils::EnableMobileUITextScaling._padding_ + 200))();
    if ((iVar3 == 1) && ((SRichTextBlock *)this->_padding_ != (SRichTextBlock *)0x0)) {
      SRichTextBlock::SetTextBlockScale
                ((SRichTextBlock *)this->_padding_,this->MobileTextBlockScale);
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
    local_40._0_8_ = (param_1->TextData).Reference;
    this_00 = (SRichTextBlock *)this->_padding_;
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
  if (this->bAutoCollapseWithEmptyText != false) {
    pcVar1 = *(code **)(this->_padding_ + 0x2c0);
    bVar2 = FText::IsEmpty(param_1);
    uVar4 = 4;
    if (bVar2) {
      uVar4 = 1;
    }
    (*pcVar1)(this,uVar4);
  }
  return;
}

// StaticRegisterNativesUCommonRichTextBlock @ 14a81e780

void __cdecl UCommonRichTextBlock::StaticRegisterNativesUCommonRichTextBlock(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UCommonRichTextBlock_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a820830

void __thiscall UCommonRichTextBlock::SynchronizeProperties(UCommonRichTextBlock *this)

{
  code *pcVar1;
  STextScroller *this_00;
  bool bVar2;
  int iVar3;
  FText *this_01;
  UCommonTextStyle *pUVar4;
  SRichTextBlock *this_02;
  undefined8 uVar5;
  ushort local_res8 [4];
  FText local_308 [2];
  undefined1 local_2e8 [128];
  float local_268;
  FLinearColor_u_0 local_264 [14];
  FSlateBrush local_178 [2];
  
  URichTextBlock::SynchronizeProperties((URichTextBlock *)this);
  if (this->bAutoCollapseWithEmptyText != false) {
    pcVar1 = *(code **)(this->_padding_ + 0x2c0);
    this_01 = URichTextBlock::GetText((URichTextBlock *)this,local_308);
    bVar2 = FText::IsEmpty(this_01);
    uVar5 = 4;
    if (bVar2) {
      uVar5 = 1;
    }
    (*pcVar1)(this,uVar5);
    if (local_308[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_308[0].TextData.Reference + 0x10))();
    }
  }
  pUVar4 = TSubclassOf<UCommonTextStyle>::GetDefaultObject(&this->DefaultTextStyleOverrideClass);
  if (pUVar4 != (UCommonTextStyle *)0x0) {
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_2e8);
    FSlateFontInfo::operator=((FSlateFontInfo *)(local_2e8 + 8),&pUVar4->Font);
    local_308[0].TextData.Reference = *(ITextData **)&(pUVar4->Color).field0_0x0;
    local_308[0]._8_8_ = *(undefined8 *)((longlong)&(pUVar4->Color).field0_0x0 + 8);
    local_2e8[0x78] = UseColor_Specified;
    local_2e8._121_2_ = local_308[1].TextData.Reference._1_2_;
    local_2e8[0x7b] = local_308[1].TextData.Reference._3_1_;
    local_2e8._104_8_ = local_308[0].TextData.Reference;
    local_2e8._112_8_ = local_308[0]._8_8_;
    FSlateBrush::operator=(local_178,&pUVar4->StrikeBrush);
    if (pUVar4->bUsesDropShadow != false) {
      local_2e8._124_4_ = (undefined4)(pUVar4->ShadowOffset).field0_0x0._s_0.X;
      local_268 = (float)(pUVar4->ShadowOffset).field0_0x0._s_0.Y;
      local_264[0]._0_8_ = *(undefined8 *)&(pUVar4->ShadowColor).field0_0x0;
      local_264[0]._8_8_ = *(undefined8 *)((longlong)&(pUVar4->ShadowColor).field0_0x0 + 8);
    }
    URichTextBlock::SetDefaultTextStyle((URichTextBlock *)this,(FTextBlockStyle *)local_2e8);
    FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)local_2e8);
  }
  if ((((this->_padding_ != 0) &&
       (iVar3 = (**(code **)(*(longlong *)CommonUIUtils::EnableMobileUITextScaling._padding_ + 200))
                          (), iVar3 == 1)) &&
      (pUVar4 = TSubclassOf<UCommonTextStyle>::GetDefaultObject
                          (&this->DefaultTextStyleOverrideClass), pUVar4 == (UCommonTextStyle *)0x0)
      ) && ((SRichTextBlock *)this->_padding_ != (SRichTextBlock *)0x0)) {
    SRichTextBlock::SetTextBlockScale((SRichTextBlock *)this->_padding_,this->MobileTextBlockScale);
  }
  this_00 = (this->MyTextScroller).Object;
  if (this_00 != (STextScroller *)0x0) {
    if (this->bIsScrollingEnabled == false) {
      STextScroller::SuspendScrolling(this_00);
      if (this->_padding_ == 0) {
        return;
      }
      this_02 = TSharedPtr<SRichTextBlock,1>::operator->
                          ((TSharedPtr<SRichTextBlock,1> *)&this->_padding_);
      local_res8[0] = (ushort)(byte)local_res8[0];
    }
    else {
      STextScroller::StartScrolling(this_00);
      this_02 = (SRichTextBlock *)this->_padding_;
      if (this_02 == (SRichTextBlock *)0x0) {
        return;
      }
      local_res8[0] = 0x100;
    }
    SRichTextBlock::SetOverflowPolicy(this_02,SUB82(local_res8,0));
  }
  return;
}

// execSetScrollingEnabled @ 14a835290

void __cdecl
UCommonRichTextBlock::execSetScrollingEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_1[0x33].field_0x21 = local_res8[0] != 0;
  (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1);
  return;
}

// execSetStyle @ 14a835d50

void __cdecl UCommonRichTextBlock::execSetStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar *puVar9;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar9 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar9);
  }
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  uVar5 = puVar9[4];
  uVar6 = puVar9[5];
  uVar7 = puVar9[6];
  uVar8 = puVar9[7];
  param_1[0x33].field_0x10 = puVar9[0];
  param_1[0x33].field_0x11 = uVar2;
  param_1[0x33].field_0x12 = uVar3;
  param_1[0x33].field_0x13 = uVar4;
  param_1[0x33].field_0x14 = uVar5;
  param_1[0x33].field_0x15 = uVar6;
  param_1[0x33].field_0x16 = uVar7;
  param_1[0x33].field_0x17 = uVar8;
  (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1);
  return;
}

