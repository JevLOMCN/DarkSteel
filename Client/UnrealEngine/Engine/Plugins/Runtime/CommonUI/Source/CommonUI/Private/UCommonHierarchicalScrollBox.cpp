// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 7

// StaticClass @ 14a783600

UClass * __cdecl UCommonHierarchicalScrollBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonHierarchicalScrollBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonHierarchicalScrollBox",
               &Z_Registration_Info_UClass_UCommonHierarchicalScrollBox.InnerSingleton,
               StaticRegisterNativesUCommonHierarchicalScrollBox,0xbf0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonHierarchicalScrollBox>,
               InternalVTableHelperCtorCaller<UCommonHierarchicalScrollBox>,local_res8,
               UScrollBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonHierarchicalScrollBox.InnerSingleton;
}

// UCommonHierarchicalScrollBox @ 14a7adad0

UCommonHierarchicalScrollBox * __thiscall
UCommonHierarchicalScrollBox::UCommonHierarchicalScrollBox
          (UCommonHierarchicalScrollBox *this,FVTableHelper *param_1)

{
  UScrollBox::UScrollBox((UScrollBox *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UCommonHierarchicalScrollBox @ 14a7adb10

UCommonHierarchicalScrollBox * __thiscall
UCommonHierarchicalScrollBox::UCommonHierarchicalScrollBox
          (UCommonHierarchicalScrollBox *this,FObjectInitializer *param_1)

{
  UScrollBox::UScrollBox((UScrollBox *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UScrollBox::SetAnimateWheelScrolling((UScrollBox *)this,true);
  return this;
}

// ~UCommonHierarchicalScrollBox @ 14a7b2d80

void __thiscall
UCommonHierarchicalScrollBox::~UCommonHierarchicalScrollBox(UCommonHierarchicalScrollBox *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UScrollBox::~UScrollBox((UScrollBox *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e5760

UClass * __cdecl UCommonHierarchicalScrollBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonHierarchicalScrollBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonHierarchicalScrollBox",
               &Z_Registration_Info_UClass_UCommonHierarchicalScrollBox.InnerSingleton,
               StaticRegisterNativesUCommonHierarchicalScrollBox,0xbf0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonHierarchicalScrollBox>,
               InternalVTableHelperCtorCaller<UCommonHierarchicalScrollBox>,local_res8,
               UScrollBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonHierarchicalScrollBox.InnerSingleton;
}

// RebuildWidget @ 14a8098f0

TSharedRef<SWidget,1> * __thiscall
UCommonHierarchicalScrollBox::RebuildWidget
          (UCommonHierarchicalScrollBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  UScrollBoxSlot *this_00;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  SCommonHierarchicalScrollBox *pSVar6;
  FSharedReferencer<1> FVar7;
  EConsumeMouseWheel EVar8;
  EDescendantScrollDestination EVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  EOrientation EVar13;
  FArguments *pFVar14;
  FScrollBoxStyle *pFVar15;
  FScrollBarStyle *pFVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  TSharedRef<SWidget,1> *pTVar19;
  UClass *pUVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined1 local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  UCommonHierarchicalScrollBox *local_res20;
  undefined1 local_3a8 [8];
  FDelegateAllocation local_3a0;
  FMemScope local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  SScrollBox *local_378;
  FSharedReferencer<1> local_370;
  TSlateDecl<SCommonHierarchicalScrollBox,RequiredArgs::T0RequiredArgs> local_368;
  TSharedRef<SScrollBox,1> local_350;
  FName local_340;
  FDestructionSentinel local_338;
  FDestructionSentinel local_320;
  FDelegateAllocation *local_308;
  undefined1 local_300 [608];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [32];
  
  pFVar14 = SScrollBox::FArguments::FArguments((FArguments *)local_300);
  pFVar15 = UScrollBox::GetWidgetStyle((UScrollBox *)this);
  pFVar14->_Style = pFVar15;
  pFVar16 = UScrollBox::GetWidgetBarStyle((UScrollBox *)this);
  pFVar14->_ScrollBarStyle = pFVar16;
  EVar13 = UScrollBox::GetOrientation((UScrollBox *)this);
  pFVar14->_Orientation = EVar13;
  EVar8 = UScrollBox::GetConsumeMouseWheel((UScrollBox *)this);
  pFVar14->_ConsumeMouseWheel = EVar8;
  EVar9 = UScrollBox::GetNavigationDestination((UScrollBox *)this);
  pFVar14->_NavigationDestination = EVar9;
  fVar22 = UScrollBox::GetNavigationScrollPadding((UScrollBox *)this);
  pFVar14->_NavigationScrollPadding = fVar22;
  uStack_380 = 0;
  local_388 = (FMemScope)UScrollBox::SlateHandleUserScrolled;
  uStack_37c = local_350.SharedReferenceCount.ReferenceController._4_4_;
  local_3a8 = (undefined1  [8])0x0;
  local_3a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a8,
             (FWriteAccessScope *)&local_320);
  local_308 = &local_3a0;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_3a0);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonHierarchicalScrollBox____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonHierarchicalScrollBox *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonHierarchicalScrollBox *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar17 + 4) = local_388;
    puVar17[5] = CONCAT44(uStack_37c,uStack_380);
  }
  if (local_320.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_320.Accessor,&local_320);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar14->_OnUserScrolled,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a8);
  bVar10 = UScrollBox::IsAnimateWheelScrolling((UScrollBox *)this);
  pFVar14->_AnimateWheelScrolling = bVar10;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_340 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_388,&local_340,true);
  TSlateDecl<SCommonHierarchicalScrollBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCommonHierarchicalScrollBox,RequiredArgs::T0RequiredArgs>
            (&local_368,"SCommonHierarchicalScrollBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonHierarchicalScrollBox.cpp"
             ,0x14,local_res10);
  FMemScope::~FMemScope(&local_388);
  FLLMScope::~FLLMScope(local_res18);
  pSVar6 = local_368._Widget.Object;
  if ((SScrollBox *)local_368._Widget.Object == (SScrollBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar19;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_368._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  SScrollBox::Construct((SScrollBox *)local_368._Widget.Object,pFVar14);
  if ((SScrollBox *)local_368._Widget.Object == (SScrollBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar19;
    }
  }
  if (((local_368._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar11 = (**(code **)(*(longlong *)local_368._Widget.Object + 0x228))(local_368._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_14a809b82;
  }
  bVar12 = 0x20;
LAB_14a809b82:
  FVar7.ReferenceController = local_368._Widget.SharedReferenceCount.ReferenceController;
  (local_368._Widget.Object)->field_0x30 = (local_368._Widget.Object)->field_0x30 & 0xdf;
  (local_368._Widget.Object)->field_0x30 = (local_368._Widget.Object)->field_0x30 | bVar12;
  (local_368._Widget.Object)->field_0x31 = (local_368._Widget.Object)->field_0x31 | 4;
  local_368._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_368._Widget.Object = (SCommonHierarchicalScrollBox *)0x0;
  if ((SScrollBox *)pSVar6 == (SScrollBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar19;
    }
  }
  local_378 = (SScrollBox *)pSVar6;
  local_370.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SScrollBox **)&this->field_0xbd8 != &local_378) {
    *(SCommonHierarchicalScrollBox **)&this->field_0xbd8 = pSVar6;
    local_378 = (SScrollBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0xbe0,&local_370);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_370.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a8,
             (FWriteAccessScope *)&local_338);
  if ((local_3a0.DelegateSize != 0) &&
     (local_3a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3a0,0,0,0x10);
    local_3a0.DelegateSize = 0;
  }
  if (local_338.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
  }
  if (local_3a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_3a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_70);
  if ((void *)local_70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
  if ((void *)local_88._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a0);
  if ((void *)local_a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_300._544_8_);
  DestructItems<SScrollBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_300._504_8_,local_300._512_4_);
  if ((FSlotArguments *)local_300._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_300._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_300);
  puVar21 = *(undefined8 **)&this->field_0x1b0;
  iVar1 = *(int *)&this->field_0x1b8;
  puVar17 = puVar21 + iVar1;
  while( true ) {
    if (*(int *)&this->field_0x1b8 != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPanelSlot>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar21 == puVar17) break;
    this_00 = (UScrollBoxSlot *)*puVar21;
    if (this_00 != (UScrollBoxSlot *)0x0) {
      pUVar20 = Z_Construct_UClass_UScrollBoxSlot_NoRegister();
      iVar2 = (int)pUVar20->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar20->_padding_)) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UCommonHierarchicalScrollBox *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        this_00->_padding_ = (longlong)this;
        if (*(longlong *)&this->field_0xbd8 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L"");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
            return pTVar19;
          }
        }
        local_350.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)&this->field_0xbe0;
        local_350.Object = *(SScrollBox **)&this->field_0xbd8;
        if (local_350.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_350.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_350.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (local_350.Object == (SScrollBox *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L"");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
            return pTVar19;
          }
        }
        UScrollBoxSlot::BuildSlot(this_00,&local_350);
      }
    }
    puVar21 = puVar21 + 1;
  }
  if (*(longlong *)&this->field_0xbd8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar19;
    }
  }
  pSVar3 = *(SWidget **)&this->field_0xbd8;
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0xbe0;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SWidget *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar19;
    }
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

// StaticRegisterNativesUCommonHierarchicalScrollBox @ 14a81e5b0

void __cdecl UCommonHierarchicalScrollBox::StaticRegisterNativesUCommonHierarchicalScrollBox(void)

{
  return;
}

