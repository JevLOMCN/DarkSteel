// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 13

// StaticClass @ 146961710

UClass * __cdecl UNamedSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamedSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"NamedSlot",&Z_Registration_Info_UClass_UNamedSlot.InnerSingleton,
               StaticRegisterNativesUNamedSlot,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNamedSlot>,InternalVTableHelperCtorCaller<UNamedSlot>,local_res8
               ,UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamedSlot.InnerSingleton;
}

// UNamedSlot @ 14698c200

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UNamedSlot * __thiscall UNamedSlot::UNamedSlot(UNamedSlot *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MyBox).Object = (SBox *)0x0;
  (this->MyBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UNamedSlot @ 14698c250

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UNamedSlot * __thiscall UNamedSlot::UNamedSlot(UNamedSlot *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->MyBox).Object = (SBox *)0x0;
  (this->MyBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~UNamedSlot @ 146993a40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNamedSlot::~UNamedSlot(UNamedSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyBox).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetPrivateStaticClass @ 1469d4ab0

UClass * __cdecl UNamedSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamedSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"NamedSlot",&Z_Registration_Info_UClass_UNamedSlot.InnerSingleton,
               StaticRegisterNativesUNamedSlot,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNamedSlot>,InternalVTableHelperCtorCaller<UNamedSlot>,local_res8
               ,UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamedSlot.InnerSingleton;
}

// OnSlotAdded @ 1469f0910

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNamedSlot::OnSlotAdded(UNamedSlot *this,UPanelSlot *param_1)

{
  SBox *this_00;
  UWidget *this_01;
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_18;
  
  this_00 = (this->MyBox).Object;
  if ((this_00 != (SBox *)0x0) &&
     (this_01 = (param_1->Content).field0_0x0.DebugPtr, this_01 != (UWidget *)0x0)) {
    pTVar1 = UWidget::TakeWidget(this_01,&local_18);
    SBox::SetContent(this_00,pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnSlotRemoved @ 1469f1500

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNamedSlot::OnSlotRemoved(UNamedSlot *this,UPanelSlot *param_1)

{
  SBox *this_00;
  
  this_00 = (this->MyBox).Object;
  if (this_00 != (SBox *)0x0) {
    SBox::SetContent(this_00,&SNullWidget::NullWidget);
    return;
  }
  return;
}

// PostLoad @ 1469f3fc0

void __thiscall UNamedSlot::PostLoad(UNamedSlot *this)

{
  longlong *plVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  UObject::PostLoad((UObject *)this);
  uVar5 = 0;
  if (0 < (int)this->_padding_) {
    plVar1 = &this->_padding_;
    lVar8 = 0;
    do {
      uVar6 = ~uVar5 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar5 < (int)this->_padding_) {
        uVar4 = uVar6;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)(*plVar1 + lVar8) == 0) {
LAB_1469f40bd:
        uVar4 = 0;
        if ((int)uVar5 < (int)this->_padding_) {
          uVar4 = uVar6;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        _Dst = (void *)(*plVar1 + (longlong)(int)uVar5 * 8);
        iVar7 = ~uVar5 + (int)this->_padding_;
        if (iVar7 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar7 << 3);
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)plVar1,(int)this->_padding_,
                   (int *)((longlong)&this->_padding_ + 4));
        uVar5 = uVar5 - 1;
        lVar8 = lVar8 + -8;
      }
      else {
        uVar4 = 0;
        if ((int)uVar5 < (int)this->_padding_) {
          uVar4 = uVar6;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(longlong *)(*(longlong *)(*plVar1 + lVar8) + 0x30) == 0) goto LAB_1469f40bd;
      }
      uVar5 = uVar5 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar5 < (int)this->_padding_);
  }
  return;
}

// RebuildWidget @ 146a02590

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UNamedSlot::RebuildWidget(UNamedSlot *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SBox,1> *pTVar1;
  UObject *pUVar2;
  SBox *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FArguments *pFVar7;
  TSharedRef<SBox,1> *pTVar8;
  TSharedRef<SWidget,1> *pTVar9;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SBox *local_3b8;
  FSharedReferencer<1> local_3b0;
  TSharedRef<SBox,1> local_3a8;
  TSharedRef<SWidget,1> local_398;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_388;
  FArguments local_370;
  
  pFVar7 = SBox::FArguments::FArguments(&local_370);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_388,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\NamedSlot.cpp"
             ,0x21,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar8 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_388,&local_3a8,pFVar7);
  local_3b0.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_3b8 = pTVar8->Object;
  if (local_3b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyBox;
  if (pTVar1 != (TSharedPtr<SBox,1> *)&local_3b8) {
    pTVar1->Object = local_3b8;
    local_3b8 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyBox).SharedReferenceCount,&local_3b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_370);
  if (0 < (int)this->_padding_) {
    pUVar2 = *(UObject **)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if (*(longlong *)&pUVar2[1].field_0x8 != 0) {
      if (pTVar1->Object == (SBox *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar5)();
          return pTVar9;
        }
      }
      pSVar3 = pTVar1->Object;
      pTVar9 = UWidget::TakeWidget(*(UWidget **)&pUVar2[1].field_0x8,&local_398);
      SBox::SetContent(pSVar3,pTVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_398.SharedReferenceCount.ReferenceController);
    }
  }
  if (pTVar1->Object == (SBox *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  pTVar4 = (this->MyBox).SharedReferenceCount.ReferenceController;
  pSVar3 = pTVar1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SBox *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar9;
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

// ReleaseSlateResources @ 146a0aa70

void __thiscall UNamedSlot::ReleaseSlateResources(UNamedSlot *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyBox != (TSharedPtr<SBox,1> *)&local_18) {
    (this->MyBox).Object = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyBox).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// Serialize @ 146a10a70

void __thiscall UNamedSlot::Serialize(UNamedSlot *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000146a10a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  return;
}

// Serialize @ 146a10aa0

void __thiscall UNamedSlot::Serialize(UNamedSlot *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  return;
}

// StaticRegisterNativesUNamedSlot @ 146a1eb70

void __cdecl UNamedSlot::StaticRegisterNativesUNamedSlot(void)

{
  return;
}

