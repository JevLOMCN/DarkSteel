// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// SetColor_WrapperImpl @ 14b459240

void __cdecl UDS_ColorBlock::SetColor_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetColor(param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// StaticClass @ 14b459270

UClass * __cdecl UDS_ColorBlock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ColorBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ColorBlock",
               &Z_Registration_Info_UClass_UDS_ColorBlock.InnerSingleton,
               StaticRegisterNativesUDS_ColorBlock,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ColorBlock>,InternalVTableHelperCtorCaller<UDS_ColorBlock>,
               local_res8,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ColorBlock.InnerSingleton;
}

// UDS_ColorBlock @ 14b45c590

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ColorBlock * __thiscall
UDS_ColorBlock::UDS_ColorBlock(UDS_ColorBlock *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->MyColorBlock).Object = (SColorBlock *)0x0;
  (this->MyColorBlock).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// UDS_ColorBlock @ 14b45c5e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ColorBlock * __thiscall
UDS_ColorBlock::UDS_ColorBlock(UDS_ColorBlock *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->MyColorBlock).Object = (SColorBlock *)0x0;
  (this->MyColorBlock).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// ~UDS_ColorBlock @ 14b45cfd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ColorBlock::~UDS_ColorBlock(UDS_ColorBlock *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyColorBlock).SharedReferenceCount.ReferenceController);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b45e740

UClass * __cdecl UDS_ColorBlock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ColorBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ColorBlock",
               &Z_Registration_Info_UClass_UDS_ColorBlock.InnerSingleton,
               StaticRegisterNativesUDS_ColorBlock,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ColorBlock>,InternalVTableHelperCtorCaller<UDS_ColorBlock>,
               local_res8,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ColorBlock.InnerSingleton;
}

// StaticRegisterNativesUDS_ColorBlock @ 14b45f210

void __cdecl UDS_ColorBlock::StaticRegisterNativesUDS_ColorBlock(void)

{
  return;
}

// GetColor @ 14bc9f450

FLinearColor * __thiscall
UDS_ColorBlock::GetColor(UDS_ColorBlock *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(this->Color).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// RebuildWidget @ 14bcbe180

TSharedRef<SWidget,1> * __thiscall
UDS_ColorBlock::RebuildWidget(UDS_ColorBlock *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SColorBlock *pSVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TSharedRef<SWidget,1> *pTVar12;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  UDS_ColorBlock *local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_488;
  FDelegateAllocation local_480;
  FMemScope local_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> local_458;
  SColorBlock *local_440;
  FSharedReferencer<1> local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  bool local_420;
  undefined1 local_418 [8];
  ForAnyElementType FStack_410;
  int local_408;
  FDestructionSentinel local_400;
  FDestructionSentinel local_3e8;
  FDestructionSentinel local_3d0;
  FDestructionSentinel local_3b8;
  FDelegateAllocation *local_3a0;
  FArguments local_398;
  
  pFVar9 = SColorBlock::FArguments::FArguments(&local_398);
  uStack_460 = 0;
  local_488.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_468 = (FMemScope)GetColor;
  local_480.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_480.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_488,(FWriteAccessScope *)&local_3b8);
  local_3a0 = &local_480;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_480);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUDS_ColorBlock____A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorBlock *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorBlock *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar10 + 4) = local_468;
    puVar10[5] = CONCAT44(uStack_45c,uStack_460);
  }
  if (local_3b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b8.Accessor,&local_3b8);
  }
  local_420 = true;
  local_430 = 0;
  uStack_428 = 0;
  local_418 = (undefined1  [8])0x0;
  FStack_410.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_488,(FWriteAccessScope *)&local_400);
  if (FStack_410.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_410.Data);
  }
  FStack_410.Data = (FScriptContainerElement *)local_480.DelegateAllocator;
  local_408 = local_480.DelegateSize;
  local_480.DelegateSize = 0;
  local_480.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_400.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
  }
  *(undefined8 *)&(pFVar9->_Color).Value.field0_0x0 = local_430;
  *(undefined8 *)((longlong)&(pFVar9->_Color).Value.field0_0x0 + 8) = uStack_428;
  (pFVar9->_Color).bIsSet = local_420;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Color).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_418);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_418,
             (FWriteAccessScope *)&local_3e8);
  if ((local_408 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_410.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_410.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_410,0,0,0x10);
    local_408 = 0;
  }
  if (local_3e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_410.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_410.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_418);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_468,&local_res20,true);
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
            (&local_458,"SColorBlock",
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\BaseWidget\\DS_ColorBlock.cpp"
             ,8,local_res8);
  FMemScope::~FMemScope(&local_468);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_458._Widget.Object;
  if (local_458._Widget.Object == (SColorBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_458._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SColorBlock::Construct(local_458._Widget.Object,pFVar9);
  if (local_458._Widget.Object == (SColorBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  if (((local_458._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_458._Widget.Object)->_padding_ + 0x228))(local_458._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14bcbe48b;
  }
  bVar8 = 0x20;
LAB_14bcbe48b:
  *(byte *)&(local_458._Widget.Object)->_padding_ =
       (byte)(local_458._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_458._Widget.Object)->_padding_ =
       (byte)(local_458._Widget.Object)->_padding_ | bVar8;
  if (local_458._Widget.Object == (SColorBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_458._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_458._Widget.Object == (SColorBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  FVar5.ReferenceController = local_458._Widget.SharedReferenceCount.ReferenceController;
  local_458._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_458._Widget.Object = (SColorBlock *)0x0;
  if (pSVar3 == (SColorBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  local_440 = pSVar3;
  local_438.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyColorBlock != (TSharedPtr<SColorBlock,1> *)&local_440) {
    (this->MyColorBlock).Object = pSVar3;
    local_440 = (SColorBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyColorBlock).SharedReferenceCount,&local_438);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_438.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_488,(FWriteAccessScope *)&local_3d0);
  if ((local_480.DelegateSize != 0) &&
     (local_480.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_480.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_480,0,0,0x10);
    local_480.DelegateSize = 0;
  }
  if (local_3d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d0.Accessor,&local_3d0);
  }
  if (local_480.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_480.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_488.AccessDetector);
  SColorBlock::FArguments::~FArguments(&local_398);
  if ((this->MyColorBlock).Object == (SColorBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  pTVar2 = (this->MyColorBlock).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MyColorBlock).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SColorBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
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
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14bcc3970

void __thiscall UDS_ColorBlock::ReleaseSlateResources(UDS_ColorBlock *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyColorBlock != (TSharedPtr<SColorBlock,1> *)&local_18) {
    (this->MyColorBlock).Object = (SColorBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyColorBlock).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  return;
}

// SetColor @ 14bcc56c0

void __thiscall UDS_ColorBlock::SetColor(UDS_ColorBlock *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar1;
  return;
}

// SynchronizeProperties @ 14bcca560

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ColorBlock::SynchronizeProperties(UDS_ColorBlock *this)

{
  SColorBlock *this_00;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->MyColorBlock).Object;
  if (this_00 != (SColorBlock *)0x0) {
    SWidget::Invalidate((SWidget *)this_00,Paint);
    return;
  }
  return;
}

