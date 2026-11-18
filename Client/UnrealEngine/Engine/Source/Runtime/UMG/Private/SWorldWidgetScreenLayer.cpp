// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// AddComponent @ 146a5c730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SWorldWidgetScreenLayer::AddComponent
          (SWorldWidgetScreenLayer *this,USceneComponent *param_1,TSharedRef<SWidget,1> *param_2)

{
  byte *pbVar1;
  int iVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  SBox *pSVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  FComponentEntry *pFVar11;
  UClass *pUVar12;
  FScopedWidgetSlotArguments *pFVar13;
  FArguments *pFVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStackY_578 [32];
  T0RequiredArgs local_548 [8];
  FWeakObjectPtr local_540;
  FLLMScope local_538 [2];
  SBox *local_530;
  FSharedReferencer<1> local_528;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_520;
  SWidget *local_508;
  FSharedReferencer<1> local_500;
  SBox *local_4f8;
  FSharedReferencer<1> local_4f0;
  USceneComponent *local_4e8;
  FWeakObjectPtr local_4e0;
  USceneComponent *local_4d8;
  FName local_4d0;
  FMemScope local_4c8;
  SWidget *local_4c0;
  TReferenceControllerBase<1> *pTStack_4b8;
  FArguments local_4b0;
  FScopedWidgetSlotArguments local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_578;
  if (param_1 == (USceneComponent *)0x0) goto LAB_146a5cbbf;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_540.ObjectIndex = 0;
  local_540.ObjectSerialNumber = 0;
  local_4e8 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_540,(FObjectPtr)&local_4e8);
  local_4e0 = local_540;
  uVar17 = local_540.ObjectIndex - local_540.ObjectSerialNumber ^
           (uint)local_540.ObjectSerialNumber >> 0xd;
  uVar16 = (-0x61c88647 - uVar17) - local_540.ObjectSerialNumber ^ uVar17 << 8;
  uVar15 = (local_540.ObjectSerialNumber - uVar16) - uVar17 ^ uVar16 >> 0xd;
  uVar17 = (uVar17 - uVar15) - uVar16 ^ uVar15 >> 0xc;
  uVar16 = (uVar16 - uVar15) - uVar17 ^ uVar17 << 0x10;
  uVar15 = (uVar15 - uVar16) - uVar17 ^ uVar16 >> 5;
  uVar17 = (uVar17 - uVar15) - uVar16 ^ uVar15 >> 3;
  uVar16 = (uVar16 - uVar17) - uVar15 ^ uVar17 << 10;
  pFVar11 = TMapBase<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>_>
            ::FindOrAddImpl<FObjectKey>
                      ((TMapBase<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>_>
                        *)&this->ComponentMap,(uVar15 - uVar16) - uVar17 ^ uVar16 >> 0xf,
                       (FObjectKey *)&local_4e0);
  local_4d8 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(pFVar11->Component).WeakPtr,(FObjectPtr)&local_4d8);
  pUVar12 = UWidgetComponent::StaticClass();
  iVar2 = (int)pUVar12->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar12->_padding_)) {
    param_1 = (USceneComponent *)(UWidgetComponent *)0x0;
  }
  pFVar11->WidgetComponent = (UWidgetComponent *)param_1;
  local_500.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  local_508 = param_2->Object;
  if (local_500.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_500.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_500.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&pFVar11->Widget != (TSharedPtr<SWidget,1> *)&local_508) {
    (pFVar11->Widget).Object = local_508;
    local_508 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar11->Widget).SharedReferenceCount,&local_500);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_500.ReferenceController);
  if ((this->Canvas).Object == (SConstraintCanvas *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar13 = SConstraintCanvas::AddSlot((this->Canvas).Object,&local_168);
  pFVar11->Slot = (FSlot *)pFVar13->_padding_;
  pFVar14 = SBox::FArguments::FArguments(&local_4b0);
  pSVar3 = param_2->Object;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4c0 = (pFVar14->_Content).Widget.Object;
  pTStack_4b8 = (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar14->_Content).Widget.Object = pSVar3;
  (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4b8);
  FLLMScope::FLLMScope(local_538,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4c8,&local_4d0,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_520,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\SWorldWidgetScreenLayer.cpp"
             ,0x4d,local_548);
  FMemScope::~FMemScope(&local_4c8);
  FLLMScope::~FLLMScope(local_538);
  FVar7.ReferenceController = local_520._Widget.SharedReferenceCount.ReferenceController;
  pSVar6 = local_520._Widget.Object;
  local_4f0.ReferenceController = local_520._Widget.SharedReferenceCount.ReferenceController;
  local_4f8 = local_520._Widget.Object;
  if (local_520._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_520._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_520._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  if (&pFVar11->ContainerWidget != (TSharedPtr<SWidget,1> *)&local_4f8) {
    (pFVar11->ContainerWidget).Object = (SWidget *)local_520._Widget.Object;
    local_4f8 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar11->ContainerWidget).SharedReferenceCount,&local_4f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4f0.ReferenceController);
  if (local_520._Widget.Object == (SBox *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_520._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  SBox::Construct(local_520._Widget.Object,pFVar14);
  if (local_520._Widget.Object == (SBox *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((local_520._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)((local_520._Widget.Object)->_padding_ + 0x228))(local_520._Widget.Object);
    bVar10 = 0;
    if (cVar9 != '\0') goto LAB_146a5cae7;
  }
  else {
LAB_146a5cae7:
    bVar10 = 0x20;
  }
  *(byte *)&(local_520._Widget.Object)->_padding_ =
       (byte)(local_520._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_520._Widget.Object)->_padding_ =
       (byte)(local_520._Widget.Object)->_padding_ | bVar10;
  pbVar1 = (byte *)((longlong)&(local_520._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_520._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_520._Widget.Object = (SBox *)0x0;
  if (pSVar6 == (SBox *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_530 = pSVar6;
  local_528.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SBox **)&pFVar13->_padding_ != &local_530) {
    pFVar13->_padding_ = (longlong)pSVar6;
    local_530 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar13->_padding_,&local_528);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_528.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SBox::FArguments::~FArguments(&local_4b0);
  TPanelChildren<SConstraintCanvas::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_168);
LAB_146a5cbbf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ComputeDesiredSize @ 146a61d20

TVector2<double> * __thiscall
SWorldWidgetScreenLayer::ComputeDesiredSize
          (SWorldWidgetScreenLayer *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// Construct @ 146a62790

void __thiscall
SWorldWidgetScreenLayer::Construct
          (SWorldWidgetScreenLayer *this,FArguments *param_1,FLocalPlayerContext *param_2)

{
  byte *pbVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  FWeakObjectPtr FVar4;
  SConstraintCanvas *pSVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  longlong *this_00;
  T0RequiredArgs local_res8 [16];
  FLLMScope local_res18 [2];
  FName local_res20;
  TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs> local_278;
  FMemScope local_260;
  SConstraintCanvas *local_258;
  TReferenceControllerBase<1> *pTStack_250;
  longlong local_248;
  TReferenceControllerBase<1> *pTStack_240;
  FArguments local_238;
  
  FVar3 = (param_2->LocalPlayer).WeakPtr;
  FVar4 = (param_2->World).WeakPtr;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  (this->PlayerContext).LocalPlayer.WeakPtr = FVar3;
  (this->PlayerContext).World.WeakPtr = FVar4;
  (this->DrawSize).field0_0x0._s_0.X = 0.0;
  (this->DrawSize).field0_0x0._s_0.Y = 0.0;
  (this->Pivot).field0_0x0._s_0.X = 0.5;
  (this->Pivot).field0_0x0._s_0.Y = 0.5;
  pFVar10 = SConstraintCanvas::FArguments::FArguments(&local_238);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_260,&local_res20,true);
  TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs>
            (&local_278,"SConstraintCanvas",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\SWorldWidgetScreenLayer.cpp"
             ,0x33,local_res8);
  FMemScope::~FMemScope(&local_260);
  FLLMScope::~FLLMScope(local_res18);
  if (local_278._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_278._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_278._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_258 = (this->Canvas).Object;
  pTStack_250 = (this->Canvas).SharedReferenceCount.ReferenceController;
  (this->Canvas).Object = local_278._Widget.Object;
  (this->Canvas).SharedReferenceCount.ReferenceController =
       local_278._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_250);
  pSVar5 = local_278._Widget.Object;
  if (local_278._Widget.Object == (SConstraintCanvas *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_278._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SConstraintCanvas::Construct(local_278._Widget.Object,pFVar10);
  if (local_278._Widget.Object == (SConstraintCanvas *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((local_278._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)((local_278._Widget.Object)->_padding_ + 0x228))(local_278._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_146a6293d;
  }
  bVar9 = 0x20;
LAB_146a6293d:
  *(byte *)&(local_278._Widget.Object)->_padding_ =
       (byte)(local_278._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_278._Widget.Object)->_padding_ =
       (byte)(local_278._Widget.Object)->_padding_ | bVar9;
  if (local_278._Widget.Object == (SConstraintCanvas *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_278._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_278._Widget.Object == (SConstraintCanvas *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6.ReferenceController = local_278._Widget.SharedReferenceCount.ReferenceController;
  local_278._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_278._Widget.Object = (SConstraintCanvas *)0x0;
  if (pSVar5 == (SConstraintCanvas *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = &this->_padding_;
  if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_248 = this->_padding_;
  pTStack_240 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar5;
  this->_padding_ = (longlong)FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_240);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SConstraintCanvas::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_238._Slots.AllocatorInstance.Data,local_238._Slots.ArrayNum);
  if ((FSlotArguments *)local_238._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_238._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_238);
  return;
}

// RemoveComponent @ 146a8f5c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SWorldWidgetScreenLayer::RemoveComponent(SWorldWidgetScreenLayer *this,USceneComponent *param_1)

{
  TMap<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>_>
  *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  FComponentEntry *pFVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  USceneComponent *local_res20;
  USceneComponent *local_38 [2];
  
  if (param_1 == (USceneComponent *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6465484471356358743>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\SWorldWidgetScreenLayer.cpp"
                       ,0x57,"Component");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = &this->ComponentMap;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res20 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  uVar7 = local_res10.ObjectIndex - local_res10.ObjectSerialNumber ^
          (uint)local_res10.ObjectSerialNumber >> 0xd;
  uVar6 = (-0x61c88647 - uVar7) - local_res10.ObjectSerialNumber ^ uVar7 << 8;
  uVar10 = (local_res10.ObjectSerialNumber - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar6 = (uVar6 - uVar10) - uVar7 ^ uVar7 << 0x10;
  uVar10 = (uVar10 - uVar6) - uVar7 ^ uVar6 >> 5;
  uVar7 = (uVar7 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar10 ^ uVar7 << 10;
  if (*(int *)&(this->ComponentMap).field_0x8 == *(int *)&(this->ComponentMap).field_0x34) {
    return;
  }
  puVar9 = *(undefined1 **)&(this->ComponentMap).field_0x40;
  if (puVar9 == (undefined1 *)0x0) {
    puVar9 = &(this->ComponentMap).field_0x38;
  }
  iVar11 = *(int *)(puVar9 + (ulonglong)
                             (*(int *)&(this->ComponentMap).field_0x48 - 1U &
                             ((uVar10 - uVar6) - uVar7 ^ uVar6 >> 0xf)) * 4);
  if (iVar11 == -1) {
    return;
  }
  while ((piVar4 = (int *)((longlong)iVar11 * 0x50 + *(longlong *)&this_00->field_0x0),
         *piVar4 != local_res10.ObjectIndex || (piVar4[1] != local_res10.ObjectSerialNumber))) {
    iVar11 = piVar4[0x12];
    if (iVar11 == -1) {
      return;
    }
  }
  if (iVar11 == -1) {
    return;
  }
  pFVar8 = (FComponentEntry *)(piVar4 + 2);
  if (piVar4 == (int *)0x0) {
    pFVar8 = (FComponentEntry *)0x0;
  }
  if (pFVar8 == (FComponentEntry *)0x0) {
    return;
  }
  if (pFVar8->bRemoving != false) {
    return;
  }
  RemoveEntryFromCanvas(this,pFVar8);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_38[0] = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_38);
  if (*(int *)&(this->ComponentMap).field_0x8 == *(int *)&(this->ComponentMap).field_0x34) {
    return;
  }
  puVar9 = *(undefined1 **)&(this->ComponentMap).field_0x40;
  uVar10 = local_res18.ObjectIndex - local_res18.ObjectSerialNumber ^
           (uint)local_res18.ObjectSerialNumber >> 0xd;
  uVar7 = (-0x61c88647 - local_res18.ObjectSerialNumber) - uVar10 ^ uVar10 << 8;
  uVar6 = (local_res18.ObjectSerialNumber - uVar7) - uVar10 ^ uVar7 >> 0xd;
  uVar10 = (uVar10 - uVar6) - uVar7 ^ uVar6 >> 0xc;
  uVar7 = (uVar7 - uVar10) - uVar6 ^ uVar10 << 0x10;
  uVar6 = (uVar6 - uVar7) - uVar10 ^ uVar7 >> 5;
  uVar10 = (uVar10 - uVar6) - uVar7 ^ uVar6 >> 3;
  uVar7 = (uVar7 - uVar10) - uVar6 ^ uVar10 << 10;
  if (puVar9 == (undefined1 *)0x0) {
    puVar9 = &(this->ComponentMap).field_0x38;
  }
  iVar11 = *(int *)(puVar9 + (((longlong)(int)((uVar6 - uVar7) - uVar10) ^ (ulonglong)(uVar7 >> 0xf)
                              ) & (longlong)*(int *)&(this->ComponentMap).field_0x48 - 1U) * 4);
  if (iVar11 == -1) {
    return;
  }
  lVar1 = *(longlong *)&this_00->field_0x0;
  while ((lVar5 = (longlong)iVar11, *(int *)(lVar1 + lVar5 * 0x50) != local_res18.ObjectIndex ||
         (*(uint *)(lVar1 + 4 + lVar5 * 0x50) != local_res18.ObjectSerialNumber))) {
    iVar11 = *(int *)(lVar1 + 0x48 + lVar5 * 0x50);
    if (iVar11 == -1) {
      return;
    }
  }
  TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
  ::RemoveByIndex((TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
                   *)this_00,iVar11);
  return;
}

// RemoveEntryFromCanvas @ 146a8faf0

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

void __thiscall
SWorldWidgetScreenLayer::RemoveEntryFromCanvas
          (SWorldWidgetScreenLayer *this,FComponentEntry *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  SConstraintCanvas *this_00;
  code *pcVar3;
  bool bVar4;
  TSharedRef<SWidget,1> local_18;
  
  param_1->bRemoving = true;
  pTVar1 = (param_1->ContainerWidget).SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->ContainerWidget).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 != (SWidget *)0x0) {
    if ((this->Canvas).Object == (SConstraintCanvas *)0x0) {
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
    this_00 = (this->Canvas).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pSVar2;
    local_18.SharedReferenceCount.ReferenceController = pTVar1;
    if (pSVar2 == (SWidget *)0x0) {
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
    SConstraintCanvas::RemoveSlot(this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// SetWidgetDrawSize @ 146a95590

void __thiscall
SWorldWidgetScreenLayer::SetWidgetDrawSize(SWorldWidgetScreenLayer *this,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->DrawSize).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->DrawSize).field0_0x0._s_0.Y = dVar1;
  return;
}

// SetWidgetPivot @ 146a955b0

void __thiscall
SWorldWidgetScreenLayer::SetWidgetPivot(SWorldWidgetScreenLayer *this,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Pivot).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Pivot).field0_0x0._s_0.Y = dVar1;
  return;
}

// Tick @ 146a97d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SWorldWidgetScreenLayer::Tick
          (SWorldWidgetScreenLayer *this,FGeometry *param_1,double param_2,float param_3)

{
  TMap<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>_>
  *pTVar1;
  FSlot *this_00;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
  *this_01;
  atomic<int> aVar9;
  double dVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  char cVar18;
  atomic<int> aVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_SWorldWidgetScreenLayer::Tick(FGeometry_const_&,double,float)_::_2_::FStat_SWorldWidgetScreenLayer_Tick>
  FVar21;
  APlayerController *this_02;
  UWorld *this_03;
  UGameViewportClient *pUVar22;
  ULocalPlayer *pUVar23;
  UObject *pUVar24;
  TTransform2<float> *pTVar25;
  double *pdVar26;
  TVector2<double>_u_0 *pTVar27;
  ForAnyElementType FVar28;
  EInvalidateWidgetReason EVar29;
  TReferenceControllerBase<1> *pTVar30;
  TReferenceControllerBase<1> *pTVar31;
  ulonglong uVar32;
  longlong lVar33;
  FName FVar34;
  uint uVar35;
  int iVar36;
  TReferenceControllerBase<1> *pTVar37;
  bool bVar38;
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar44 [16];
  undefined1 auStackY_988 [32];
  char local_927;
  undefined1 local_910 [24];
  undefined1 local_8f8 [8];
  ForAnyElementType FStack_8f0;
  ulonglong local_8e8;
  FColor_u_0 local_8e0 [2];
  undefined1 local_8d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_8d0;
  ForAnyElementType FStack_8c8;
  ulonglong local_8c0;
  undefined1 local_8b8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_8b0;
  ForAnyElementType FStack_8a8;
  ulonglong local_8a0;
  double local_898;
  double dStack_890;
  undefined1 local_888 [24];
  undefined1 local_870 [8];
  ForAnyElementType FStack_868;
  ulonglong local_860;
  FName local_858;
  float local_850;
  float fStack_84c;
  float local_848;
  float fStack_844;
  FName local_840;
  FName local_838;
  TVector2<double>_u_0 local_828;
  undefined1 local_818;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_810;
  ForAnyElementType FStack_808;
  ulonglong local_800;
  TVector2<double>_u_0 local_7f8;
  undefined1 local_7e8;
  undefined1 local_7e0 [8];
  ForAnyElementType FStack_7d8;
  ulonglong local_7d0;
  TVector2<double>_u_0 local_7c8;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined1 local_7a8;
  undefined1 local_7a0 [8];
  ForAnyElementType FStack_798;
  ulonglong local_790;
  longlong *local_788;
  undefined1 auStack_780 [16];
  uint uStack_770;
  uint uStack_76c;
  longlong local_768;
  TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
  *pTStack_760;
  TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
  *local_758;
  undefined2 local_750;
  TVector2<double>_u_0 local_748;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined1 local_728;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_720;
  ForAnyElementType FStack_718;
  ulonglong local_710;
  longlong *local_708;
  undefined1 auStack_700 [16];
  uint uStack_6f0;
  uint uStack_6ec;
  longlong local_6e8;
  TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
  *pTStack_6e0;
  TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
  *local_6d8;
  undefined2 local_6d0;
  FGeometry *local_6c8;
  APlayerController *local_6c0;
  TVector<double>_u_0 local_6b8;
  TVector2<double>_u_0 local_6a0;
  uchar local_690;
  undefined1 local_68f;
  undefined1 local_688 [16];
  undefined8 local_678;
  uchar local_670;
  undefined1 local_66f;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  uchar local_650;
  undefined1 local_64f;
  undefined1 local_648 [16];
  undefined8 local_638;
  TVector2<double>_u_0 local_630;
  TVector2<double>_u_0 local_620;
  FDestructionSentinel local_610;
  FDestructionSentinel local_5f8;
  FDestructionSentinel local_5e0;
  FDestructionSentinel local_5c8;
  FDestructionSentinel local_5b0;
  FDestructionSentinel local_598;
  FDestructionSentinel local_580;
  FDestructionSentinel local_568;
  FName local_550;
  FName local_548 [2];
  TVector2<double>_u_0 local_538;
  TVector2<double>_u_0 local_528;
  TVector2<double>_u_0 local_518;
  FReadAccessScope local_508;
  undefined1 local_4f0 [32];
  longlong local_4d0;
  TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
  *pTStack_4c8;
  undefined1 local_4c0 [32];
  longlong local_4a0;
  TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
  *pTStack_498;
  undefined1 local_490 [16];
  TVector2<double> local_480;
  TTransform2<float> local_470;
  undefined1 local_458 [28];
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  float local_42c;
  float local_428;
  undefined8 local_418;
  undefined8 uStack_410;
  double local_408;
  undefined1 local_3f8 [96];
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [96];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  TIntRect<int>_u_0 local_2d0;
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  uint local_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  double local_248;
  double local_240;
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_988;
  pTVar37 = (TReferenceControllerBase<1> *)0x0;
  local_6c8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_SWorldWidgetScreenLayer_Tick ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_SWorldWidgetScreenLayer::Tick(FGeometry_const_&,double,float)_::_2_::FStat_SWorldWidgetScreenLayer_Tick>
         )0x0) {
      pFVar20 = ::FName::FName(&local_550,"SWorldWidgetScreenLayer_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_SWorldWidgetScreenLayer_Tick,*pFVar20,
                 L"SWorldWidgetScreenLayer_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_SWorldWidgetScreenLayer_Tick;
  if (StatPtr_SWorldWidgetScreenLayer_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_SWorldWidgetScreenLayer::Tick(FGeometry_const_&,double,float)_::_2_::FStat_SWorldWidgetScreenLayer_Tick>
       )0x0) {
    pFVar20 = ::FName::FName(local_548,"SWorldWidgetScreenLayer_Tick");
    FVar21 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_SWorldWidgetScreenLayer::Tick(FGeometry_const_&,double,float)_::_2_::FStat_SWorldWidgetScreenLayer_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_SWorldWidgetScreenLayer_Tick,
                          *pFVar20,L"SWorldWidgetScreenLayer_Tick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar34 = *(FName *)FVar21;
  bVar7 = false;
  bVar8 = false;
  local_838.ComparisonIndex.Value = 0;
  local_838.Number = 0;
  bVar16 = false;
  bVar38 = false;
  if ((FVar34.ComparisonIndex.Value.Value == 0) && (FVar34.Number == 0)) {
LAB_146a97e9f:
    bVar8 = bVar38;
    bVar7 = bVar16;
    bVar16 = false;
    local_840 = local_838;
    FVar34 = local_838;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_8e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_8e0[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar16 = false;
      bVar38 = true;
      if (-1 < CpuChannel->Enabled) {
        local_858.ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_858.Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_858,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\SWorldWidgetScreenLayer.cpp"
                   ,0x66);
        bVar7 = true;
        bVar8 = true;
        bVar16 = true;
        bVar38 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146a97e9f;
    local_840 = FVar34;
    FThreadStats::AddMessage(FVar34,CycleScopeStart);
    bVar16 = true;
  }
  this_02 = FLocalPlayerContext::GetPlayerController(&this->PlayerContext);
  local_6c0 = this_02;
  if (this_02 == (APlayerController *)0x0) {
LAB_146a98e42:
    if (GSlateIsOnFastUpdatePath == false) goto LAB_146a98ff6;
    pTVar1 = &this->ComponentMap;
    TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_4c0,
               (TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_6d0 = 0;
    stack0xfffffffffffff908 = local_4c0._16_16_;
    local_708 = (longlong *)local_4c0._0_8_;
    auStack_700._0_8_ = local_4c0._8_8_;
    local_6e8 = local_4a0;
    pTStack_6e0 = pTStack_498;
    uVar32 = local_4c0._24_8_ >> 0x20;
    uVar35 = local_4c0._28_4_;
    local_6d8 = (TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
                 *)pTVar1;
    if (*(int *)(local_4c0._16_8_ + 0x18) <= (int)uVar35) goto LAB_146a98ff6;
    do {
      lVar33 = *local_708;
      if ((*(longlong *)(lVar33 + 0x20 + (longlong)(int)uVar35 * 0x50) == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar38)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)(lVar33 + 0x20 + (longlong)(int)uVar32 * 0x50);
      local_66f = 1;
      local_668 = 0;
      uStack_660 = 0;
      local_670 = (uchar)EVisibility::Collapsed.Value.Value;
      local_658 = 0;
      (**(code **)(*plVar2 + 0x1c8))(plVar2,&local_670);
      uStack_6f0 = uStack_6f0 & ~auStack_700._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_700);
      uVar32 = (ulonglong)uStack_6ec;
      uVar35 = uStack_6ec;
    } while ((int)uStack_6ec < *(int *)(auStack_700._8_8_ + 0x18));
    if ((char)local_6d0 == '\0') goto LAB_146a98ff6;
    this_01 = local_6d8;
    cVar18 = local_6d0._1_1_;
  }
  else {
    this_03 = AActor::GetWorld((AActor *)this_02);
    pUVar22 = UWorld::GetGameViewport(this_03);
    if (pUVar22 == (UGameViewportClient *)0x0) goto LAB_146a98e42;
    pTVar31 = (pUVar22->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
    pTVar30 = pTVar31;
    if (pTVar31 == (TReferenceControllerBase<1> *)0x0) {
LAB_146a97f45:
      bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pTVar31 = pTVar30;
      if (bVar38) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      aVar9 = pTVar31->SharedReferenceCount;
      do {
        pTVar30 = pTVar37;
        if (aVar9 == (atomic<int>)0x0) goto LAB_146a97f45;
        LOCK();
        aVar19 = pTVar31->SharedReferenceCount;
        bVar38 = aVar9 == aVar19;
        if (bVar38) {
          pTVar31->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
          aVar19 = aVar9;
        }
        UNLOCK();
        aVar9 = aVar19;
      } while (!bVar38);
      pTVar37 = (TReferenceControllerBase<1> *)(pUVar22->GameLayerManagerPtr).Object;
      pTVar30 = pTVar31;
      if (pTVar37 == (TReferenceControllerBase<1> *)0x0) goto LAB_146a97f45;
    }
    (**(code **)(pTVar37->_padding_ + 8))(pTVar37,local_458);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
    local_2d0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_388 = UE::Math::TMatrix<double>::Identity.M[3][2];
    dStack_380 = UE::Math::TMatrix<double>::Identity.M[3][3];
    local_308 = UE::Math::TMatrix<double>::Identity.M[3][2];
    dStack_300 = UE::Math::TMatrix<double>::Identity.M[3][3];
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_418 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    uStack_410 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    local_408 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
    local_3f8._0_8_ = UE::Math::TMatrix<double>::Identity.M[0][0];
    local_3f8._8_8_ = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_3f8._16_8_ = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_3f8._24_8_ = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_3f8._32_8_ = UE::Math::TMatrix<double>::Identity.M[1][0];
    local_3f8._40_8_ = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_3f8._48_8_ = UE::Math::TMatrix<double>::Identity.M[1][2];
    local_3f8._56_8_ = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_3f8._64_8_ = UE::Math::TMatrix<double>::Identity.M[2][0];
    local_3f8._72_8_ = UE::Math::TMatrix<double>::Identity.M[2][1];
    local_3f8._80_8_ = UE::Math::TMatrix<double>::Identity.M[2][2];
    local_3f8._88_8_ = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_398 = UE::Math::TMatrix<double>::Identity.M[3][0];
    dStack_390 = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_378._0_8_ = UE::Math::TMatrix<double>::Identity.M[0][0];
    local_378._8_8_ = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_378._16_8_ = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_378._24_8_ = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_378._32_8_ = UE::Math::TMatrix<double>::Identity.M[1][0];
    local_378._40_8_ = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_378._48_8_ = UE::Math::TMatrix<double>::Identity.M[1][2];
    local_378._56_8_ = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_378._64_8_ = UE::Math::TMatrix<double>::Identity.M[2][0];
    local_378._72_8_ = UE::Math::TMatrix<double>::Identity.M[2][1];
    local_378._80_8_ = UE::Math::TMatrix<double>::Identity.M[2][2];
    local_378._88_8_ = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_318 = UE::Math::TMatrix<double>::Identity.M[3][0];
    dStack_310 = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_2e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_2e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_2d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_2d0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_927 = '\0';
    pUVar23 = APlayerController::GetLocalPlayer(this_02);
    uVar13 = _UNK_15066df7c;
    uVar12 = _UNK_15066df78;
    uVar11 = __xmm_80000000000000008000000000000000._4_4_;
    uVar35 = (uint)__xmm_80000000000000008000000000000000;
    if (((pUVar23 != (ULocalPlayer *)0x0) &&
        ((pUVar23->ViewportClient).field0_0x0.DebugPtr != (UGameViewportClient *)0x0)) &&
       (local_927 = (**(code **)(pUVar23->_padding_ + 0x368))
                              (pUVar23,pUVar22->Viewport,&local_418,0xffffffff), local_927 != '\0'))
    {
      local_298 = ___xmm_3ff00000000000000000000000000000;
      dStack_290 = _UNK_15061cbc8;
      local_2a8 = 0.0;
      dStack_2a0 = 0.0;
      local_288 = 0.0;
      dStack_280 = 0.0;
      local_258 = (uint)local_418 ^ uVar35;
      uStack_254 = local_418._4_4_ ^ uVar11;
      uStack_250 = (uint)uStack_410 ^ uVar12;
      uStack_24c = uStack_410._4_4_ ^ uVar13;
      local_2b8 = ___xmm_00000000000000003ff0000000000000;
      local_248 = (double)CONCAT44((uint)((ulonglong)local_408 >> 0x20) ^ uVar11,
                                   SUB84(local_408,0) ^ uVar35);
      local_278 = 0.0;
      dStack_270 = 0.0;
      local_240 = __real_3ff0000000000000;
      local_268 = ___xmm_00000000000000003ff0000000000000;
      VectorMatrixMultiply(&local_138,(TMatrix<double> *)local_2b8,(TMatrix<double> *)local_3f8);
      VectorMatrixMultiply(&local_238,&local_138,(TMatrix<double> *)local_378);
      local_1b8.M[0][0] = local_238.M[0][0];
      local_1b8.M[0][1] = local_238.M[0][1];
      local_1b8.M[0][2] = local_238.M[0][2];
      local_1b8.M[0][3] = local_238.M[0][3];
      local_1b8.M[1][0] = local_238.M[1][0];
      local_1b8.M[1][1] = local_238.M[1][1];
      local_1b8.M[1][2] = local_238.M[1][2];
      local_1b8.M[1][3] = local_238.M[1][3];
      local_1b8.M[2][0] = local_238.M[2][0];
      local_1b8.M[2][1] = local_238.M[2][1];
      local_1b8.M[2][2] = local_238.M[2][2];
      local_1b8.M[2][3] = local_238.M[2][3];
      local_1b8.M[3][0] = local_238.M[3][0];
      local_1b8.M[3][1] = local_238.M[3][1];
      local_1b8.M[3][2] = local_238.M[3][2];
      local_1b8.M[3][3] = local_238.M[3][3];
    }
    pTVar1 = &this->ComponentMap;
    TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_4f0,
               (TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
                *)pTVar1);
    dVar10 = __real_3fe0000000000000;
    local_750 = 0;
    stack0xfffffffffffff888 = local_4f0._16_16_;
    local_788 = (longlong *)local_4f0._0_8_;
    auStack_780._0_8_ = local_4f0._8_8_;
    local_768 = local_4d0;
    pTStack_760 = pTStack_4c8;
    uVar32 = local_4f0._24_8_ >> 0x20;
    local_758 = (TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
                 *)pTVar1;
    if (*(int *)(local_4f0._16_8_ + 0x18) <= local_4f0._28_4_) goto LAB_146a98ff6;
    do {
      lVar33 = (longlong)(int)uVar32 * 0x50 + *local_788;
      pUVar24 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar33 + 0xc));
      if (pUVar24 == (UObject *)0x0) {
        RemoveEntryFromCanvas(this,(FComponentEntry *)(lVar33 + 8));
        TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_760,(int)uVar32);
        local_750 = CONCAT11(local_750._1_1_,1);
      }
      else {
        local_6b8._s_0.X = (double)*(undefined8 *)&pUVar24[0xd].field_0x8;
        local_6b8._s_0.Y = (double)*(undefined8 *)&pUVar24[0xd].field_0x10;
        local_6b8._s_0.Z = (double)*(undefined8 *)&pUVar24[0xd].field_0x18;
        if ((local_927 == '\0') ||
           ((((GSlateWorldWidgetIgnoreNotVisibleWidgets != false &&
              (*(UWidgetComponent **)(lVar33 + 0x18) != (UWidgetComponent *)0x0)) &&
             (bVar38 = UWidgetComponent::IsWidgetVisible(*(UWidgetComponent **)(lVar33 + 0x18)),
             !bVar38)) ||
            (bVar38 = FSceneView::ProjectWorldToScreen
                                ((TVector<double> *)&local_6b8._s_0,(TIntRect<int> *)&local_2d0._s_0
                                 ,&local_1b8,(TVector2<double> *)&local_6a0._s_0,false), !bVar38))))
        {
          if ((*(longlong *)(lVar33 + 0x20) == 0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar38)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_688 = ZEXT816(0);
          local_68f = 1;
          local_690 = (uchar)EVisibility::Collapsed.Value.Value;
          local_678 = 0;
          (**(code **)(**(longlong **)(lVar33 + 0x20) + 0x1c8))
                    (*(longlong **)(lVar33 + 0x20),&local_690);
        }
        else {
          auVar42._0_8_ =
               (local_6b8._s_0.Y - uStack_410) * (local_6b8._s_0.Y - uStack_410) +
               (local_6b8._s_0.X - local_418) * (local_6b8._s_0.X - local_418) +
               (local_6b8._s_0.Z - local_408) * (local_6b8._s_0.Z - local_408);
          auVar42._8_8_ = 0;
          auVar39._0_8_ = local_6a0._s_0.X + dVar10;
          auVar39._8_8_ = 0;
          unaff_XMM10 = sqrtpd(unaff_XMM10,auVar42);
          auVar39 = roundpd(auVar39,auVar39,1);
          auVar43._0_8_ = local_6a0._s_0.Y + dVar10;
          auVar43._8_8_ = 0;
          local_630._s_0.X = auVar39._0_8_;
          auVar39 = roundpd(auVar39,auVar43,1);
          local_630._s_0.Y = auVar39._0_8_;
          if ((*(longlong *)(lVar33 + 0x30) == 0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar38)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar27 = &local_6a0;
          if (*(char *)(*(longlong *)(lVar33 + 0x30) + 0x36) != '\x01') {
            pTVar27 = &local_630;
          }
          local_538._s_0.X = (pTVar27->_s_0).X;
          local_538._s_0.Y = pTVar27->XY[1];
          USlateBlueprintLibrary::ScreenToWidgetAbsolute
                    ((UObject *)this_02,(TVector2<double> *)&local_538._s_0,
                     (TVector2<double> *)&local_528._s_0,false);
          local_518._s_0.X = local_528._s_0.X;
          local_518._s_0.Y = local_528._s_0.Y;
          USlateBlueprintLibrary::AbsoluteToViewport
                    ((UObject *)this_02,(TVector2<double> *)&local_518._s_0,&local_480,
                     (TVector2<double> *)&local_620._s_0);
          uVar15 = local_620._s_0.Y;
          uVar14 = local_620._s_0.X;
          if ((*(longlong *)(lVar33 + 0x20) == 0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar38)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_648 = ZEXT816(0);
          local_64f = 1;
          local_650 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
          local_638 = 0;
          (**(code **)(**(longlong **)(lVar33 + 0x20) + 0x1c8))
                    (*(longlong **)(lVar33 + 0x20),&local_650);
          this_00 = *(FSlot **)(lVar33 + 0x40);
          if (this_00 != (FSlot *)0x0) {
            fVar40 = local_43c * (float)(double)uVar14 + local_434 * (float)(double)uVar15 +
                     local_42c;
            fVar41 = local_438 * (float)(double)uVar14 + local_430 * (float)(double)uVar15 +
                     local_428;
            local_850 = fVar40;
            fStack_84c = fVar41;
            pTVar25 = Inverse<TTransform2<float>_>
                                (&local_470,&local_6c8->AccumulatedRenderTransform);
            plVar2 = *(longlong **)(lVar33 + 0x18);
            local_848 = fVar41 * (pTVar25->M).M[1][0] + fVar40 * (pTVar25->M).M[0][0] +
                        (pTVar25->Trans).field0_0x0._s_0.X;
            fStack_844 = fVar40 * (pTVar25->M).M[0][1] + fVar41 * (pTVar25->M).M[1][1] +
                         (pTVar25->Trans).field0_0x0._s_0.Y;
            local_898 = (double)local_848;
            dStack_890 = (double)fStack_844;
            if (plVar2 == (longlong *)0x0) {
              if (((this->DrawSize).field0_0x0._s_0.X == 0.0) &&
                 ((this->DrawSize).field0_0x0._s_0.Y == 0.0)) {
                local_8d8[0] = true;
              }
              else {
                local_8d8[0] = false;
              }
              local_8d8[1] = true;
              bVar38 = false;
              local_8c0 = 0;
              local_8d0.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              FStack_8c8.Data = (FScriptContainerElement *)0x0;
              FSlotBase::SetAttribute<bool,bool>
                        ((FSlotBase *)this_00,&this_00->AutoSizeAttr,(TAttribute<bool> *)local_8d8,
                         Layout);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_8d0,(FWriteAccessScope *)&local_598);
              if (((int)local_8c0 != 0) && (FStack_8c8.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_8c8.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_8c8,0,0,0x10);
                local_8c0 = local_8c0 & 0xffffffff00000000;
              }
              if (local_598.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_598.Accessor,&local_598);
              }
              if (FStack_8c8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_8c8.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_8d0.AccessDetector)
              ;
              local_910._4_4_ = (undefined4)dStack_890;
              local_910[0x10] = true;
              local_8e8 = 0;
              local_910._0_4_ = (undefined4)local_898;
              local_910._12_4_ = (undefined4)(this->DrawSize).field0_0x0._s_0.Y;
              local_910._8_4_ = (undefined4)(this->DrawSize).field0_0x0._s_0.X;
              local_8f8 = (undefined1  [8])0x0;
              FStack_8f0.Data = (FScriptContainerElement *)0x0;
              bVar17 = TAttribute<FMargin>::IdenticalTo
                                 (&this_00->OffsetAttr,(TAttribute<FMargin> *)local_910);
              if (!bVar17) {
                bVar17 = TAttribute<FMargin>::IsBound(&this_00->OffsetAttr);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8f8,
                           &local_508);
                if ((((int)local_8e8 != 0) && (FStack_8f0.Data != (FScriptContainerElement *)0x0))
                   && (cVar18 = (**(code **)(*(longlong *)FStack_8f0.Data + 0x38))(), cVar18 != '\0'
                      )) {
                  bVar38 = true;
                }
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_508);
                (this_00->OffsetAttr).bIsSet = (bool)local_910[0x10];
                (this_00->OffsetAttr).Value.Left = (float)local_910._0_4_;
                (this_00->OffsetAttr).Value.Top = (float)local_910._4_4_;
                (this_00->OffsetAttr).Value.Right = (float)local_910._8_4_;
                (this_00->OffsetAttr).Value.Bottom = (float)local_910._12_4_;
                TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
                CopyFrom<FDefaultDelegateUserPolicy>
                          (&(this_00->OffsetAttr).Getter,
                           (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_8f8)
                ;
                EVar29 = LayoutAndVolatility;
                if (bVar17 == bVar38) {
                  EVar29 = Layout;
                }
                FSlotBase::Invalidate((FSlotBase *)this_00,EVar29);
                this_02 = local_6c0;
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8f8,
                         (FWriteAccessScope *)&local_580);
              if (((int)local_8e8 != 0) && (FStack_8f0.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_8f0.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_8f0,0,0,0x10);
                local_8e8 = local_8e8 & 0xffffffff00000000;
              }
              if (local_580.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_580.Accessor,&local_580);
              }
              if (FStack_8f0.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_8f0.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_8f8);
              local_7c8._s_0.X = 0.0;
              _local_7a0 = ZEXT816(0);
              local_790 = 0;
              local_7b0 = 0;
              local_7a8 = 1;
              local_7c8._s_0.Y = 0.0;
              uStack_7b8 = 0;
              SConstraintCanvas::FSlot::SetAnchors(this_00,(TAttribute<FAnchors> *)&local_7c8._s_0);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7a0,
                         (FWriteAccessScope *)&local_610);
              if (((int)local_790 != 0) && (FStack_798.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_798.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)(local_7a0 + 8),0,0,0x10);
                local_790 = local_790 & 0xffffffff00000000;
              }
              FVar28.Data = FStack_798.Data;
              if (local_610.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_610.Accessor,&local_610);
                FVar28.Data = FStack_798.Data;
              }
              if (FVar28.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar28.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_7a0);
              local_828._s_0.X = (this->Pivot).field0_0x0._s_0.X;
              local_828._s_0.Y = (this->Pivot).field0_0x0._s_0.Y;
              local_818 = 1;
              local_800 = 0;
              local_810.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              FStack_808.Data = (FScriptContainerElement *)0x0;
              SConstraintCanvas::FSlot::SetAlignment
                        (this_00,(TAttribute<UE::Math::TVector2<double>_> *)&local_828._s_0);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_810,(FWriteAccessScope *)&local_5f8);
              if (((int)local_800 != 0) && (FStack_808.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_808.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_808,0,0,0x10);
                local_800 = local_800 & 0xffffffff00000000;
              }
              if (local_5f8.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f8.Accessor,&local_5f8);
              }
              if (FStack_808.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_808.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_810.AccessDetector)
              ;
            }
            else {
              pdVar26 = (double *)
                        (**(code **)(*plVar2 + 0xb78))(plVar2,local_490,local_458,&local_898);
              lVar33 = *(longlong *)(lVar33 + 0x18);
              local_898 = *pdVar26;
              dStack_890 = pdVar26[1];
              dVar5 = *(double *)(lVar33 + 0x5e8);
              dVar6 = *(double *)(lVar33 + 0x5f0);
              iVar36 = (int)*(undefined8 *)(lVar33 + 0x5c0);
              iVar4 = (int)((ulonglong)*(undefined8 *)(lVar33 + 0x5c0) >> 0x20);
              if ((((double)iVar36 == 0.0) && ((double)iVar4 == 0.0)) ||
                 (*(char *)(lVar33 + 0x5e1) != '\0')) {
                local_8b8[0] = true;
              }
              else {
                local_8b8[0] = false;
              }
              local_8b8[1] = true;
              local_8a0 = 0;
              local_8b0.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              FStack_8a8.Data = (FScriptContainerElement *)0x0;
              FSlotBase::SetAttribute<bool,bool>
                        ((FSlotBase *)this_00,&this_00->AutoSizeAttr,(TAttribute<bool> *)local_8b8,
                         Layout);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_8b0,(FWriteAccessScope *)&local_5e0);
              if (((int)local_8a0 != 0) && (FStack_8a8.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_8a8.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_8a8,0,0,0x10);
                local_8a0 = local_8a0 & 0xffffffff00000000;
              }
              if (local_5e0.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5e0.Accessor,&local_5e0);
              }
              if (FStack_8a8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_8a8.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_8b0.AccessDetector)
              ;
              local_888._4_4_ = (undefined4)dStack_890;
              local_888[0x10] = true;
              local_860 = 0;
              local_888._0_4_ = (undefined4)local_898;
              local_888._12_4_ = (undefined4)iVar4;
              local_888._8_4_ = (undefined4)iVar36;
              _local_870 = ZEXT416(0);
              SConstraintCanvas::FSlot::SetOffset(this_00,(TAttribute<FMargin> *)local_888);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_870,
                         (FWriteAccessScope *)&local_5c8);
              if (((int)local_860 != 0) && (FStack_868.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_868.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)(local_870 + 8),0,0,0x10);
                local_860 = local_860 & 0xffffffff00000000;
              }
              FVar28.Data = FStack_868.Data;
              if (local_5c8.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c8.Accessor,&local_5c8);
                FVar28.Data = FStack_868.Data;
              }
              if (FVar28.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar28.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_870);
              local_748._s_0.X = 0.0;
              local_710 = 0;
              local_730 = 0;
              local_728 = 1;
              local_748._s_0.Y = 0.0;
              uStack_738 = 0;
              local_720.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              FStack_718.Data = (FScriptContainerElement *)0x0;
              SConstraintCanvas::FSlot::SetAnchors(this_00,(TAttribute<FAnchors> *)&local_748._s_0);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_720,(FWriteAccessScope *)&local_568);
              if (((int)local_710 != 0) && (FStack_718.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_718.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_718,0,0,0x10);
                local_710 = local_710 & 0xffffffff00000000;
              }
              if (local_568.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_568.Accessor,&local_568);
              }
              if (FStack_718.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_718.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_720.AccessDetector)
              ;
              local_7e8 = 1;
              _local_7e0 = ZEXT816(0);
              local_7d0 = 0;
              local_7f8._s_0.X = dVar5;
              local_7f8._s_0.Y = dVar6;
              SConstraintCanvas::FSlot::SetAlignment
                        (this_00,(TAttribute<UE::Math::TVector2<double>_> *)&local_7f8._s_0);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7e0,
                         (FWriteAccessScope *)&local_5b0);
              if (((int)local_7d0 != 0) && (FStack_7d8.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_7d8.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)(local_7e0 + 8),0,0,0x10);
                local_7d0 = local_7d0 & 0xffffffff00000000;
              }
              FVar28.Data = FStack_7d8.Data;
              if (local_5b0.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b0.Accessor,&local_5b0);
                FVar28.Data = FStack_7d8.Data;
              }
              if (FVar28.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar28.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_7e0);
            }
            if (GSlateWorldWidgetZOrder != 0) {
              auVar44._0_8_ =
                   (double)CONCAT44(unaff_XMM10._4_4_ ^ uVar11,unaff_XMM10._0_4_ ^ uVar35);
              auVar44._8_4_ = unaff_XMM10._8_4_ ^ uVar12;
              auVar44._12_4_ = unaff_XMM10._12_4_ ^ uVar13;
              SConstraintCanvas::FSlot::SetZOrder(this_00,(float)auVar44._0_8_);
              unaff_XMM10 = auVar44;
            }
          }
        }
      }
      uStack_770 = uStack_770 & ~auStack_780._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_780);
      uVar32 = (ulonglong)uStack_76c;
    } while ((int)uStack_76c < *(int *)(auStack_780._8_8_ + 0x18));
    FVar34 = local_840;
    if ((char)local_750 == '\0') goto LAB_146a98ff6;
    this_01 = local_758;
    cVar18 = local_750._1_1_;
  }
  if (cVar18 != '\0') {
    iVar36 = 1;
    uVar35 = *(int *)&(this_01->Elements).field_0x8 - *(int *)&(this_01->Elements).field_0x34;
    if (3 < uVar35) {
      uVar32 = (ulonglong)((uVar35 >> 1) + 7) * 2 + 1;
      lVar33 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      iVar36 = 1 << ((byte)lVar33 & 0x1f);
    }
    if (((0 < (int)uVar35) && (this_01->HashSize < iVar36)) || (iVar36 < this_01->HashSize)) {
      this_01->HashSize = iVar36;
      TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
      ::Rehash(this_01);
    }
  }
LAB_146a98ff6:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  return;
}

