// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 14

// GetSize_WrapperImpl @ 146961570

void __cdecl USpacer::GetSize_WrapperImpl(void *param_1,void *param_2)

{
  SWidget *pSVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  pSVar1 = *(SWidget **)((longlong)param_1 + 0x1c0);
  if (pSVar1 != (SWidget *)0x0) {
    if ((char)pSVar1[1]._padding_ != '\0') {
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
                ((FSlateAttributeImpl *)(pSVar1 + 1),pSVar1,Member);
    }
    lVar2 = pSVar1[1]._padding_;
    *(longlong *)param_2 = pSVar1[1]._padding_;
    *(longlong *)((longlong)param_2 + 8) = lVar2;
    return;
  }
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x1b8);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1b0);
  *(undefined8 *)((longlong)param_2 + 8) = uVar3;
  return;
}

// SetSize_WrapperImpl @ 1469615d0

void __cdecl USpacer::SetSize_WrapperImpl(void *param_1,void *param_2)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (double)*(undefined8 *)param_2;
  local_18._s_0.Y = *(double *)((longlong)param_2 + 8);
  SetSize(param_1,(TVector2<double> *)&local_18._s_0);
  return;
}

// StaticClass @ 146961600

UClass * __cdecl USpacer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpacer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Spacer",&Z_Registration_Info_UClass_USpacer.InnerSingleton,
               StaticRegisterNativesUSpacer,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USpacer>,InternalVTableHelperCtorCaller<USpacer>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpacer.InnerSingleton;
}

// USpacer @ 14698da10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USpacer * __thiscall USpacer::USpacer(USpacer *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->MySpacer).Object = (SSpacer *)0x0;
  (this->MySpacer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USpacer @ 14698da60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USpacer * __thiscall USpacer::USpacer(USpacer *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Size).field0_0x0._s_0.X = 1.0;
  (this->Size).field0_0x0._s_0.Y = 1.0;
  (this->MySpacer).Object = (SSpacer *)0x0;
  (this->MySpacer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~USpacer @ 146994410

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpacer::~USpacer(USpacer *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MySpacer).SharedReferenceCount.ReferenceController);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetPrivateStaticClass @ 1469d5ed0

UClass * __cdecl USpacer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpacer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Spacer",&Z_Registration_Info_UClass_USpacer.InnerSingleton,
               StaticRegisterNativesUSpacer,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USpacer>,InternalVTableHelperCtorCaller<USpacer>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpacer.InnerSingleton;
}

// GetSize @ 1469d8610

TVector2<double> * __thiscall
USpacer::GetSize(USpacer *this,TVector2<double> *__return_storage_ptr__)

{
  SSpacer *pSVar1;
  double dVar2;
  
  pSVar1 = (this->MySpacer).Object;
  if (pSVar1 != (SSpacer *)0x0) {
    if (pSVar1->bIsSpacerSizeBound != false) {
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
                ((FSlateAttributeImpl *)&pSVar1->SpacerSize,(SWidget *)pSVar1,Member);
    }
    dVar2 = *(double *)&(pSVar1->SpacerSize).field_0x8;
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&(pSVar1->SpacerSize).field_0x0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    return __return_storage_ptr__;
  }
  dVar2 = (this->Size).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Size).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  return __return_storage_ptr__;
}

// RebuildWidget @ 146a06390

TSharedRef<SWidget,1> * __thiscall
USpacer::RebuildWidget(USpacer *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SSpacer,1> *pTVar1;
  SSpacer *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FArguments *pFVar6;
  TSharedRef<SSpacer,1> *pTVar7;
  TSharedRef<SWidget,1> *pTVar8;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SSpacer *local_2d8;
  FSharedReferencer<1> local_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8;
  undefined1 local_2b0 [8];
  ForAnyElementType FStack_2a8;
  ulonglong local_2a0;
  FDestructionSentinel local_298;
  TSharedRef<SSpacer,1> local_280;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_270;
  undefined1 local_258 [528];
  undefined1 local_48 [40];
  
  pFVar6 = SSpacer::FArguments::FArguments((FArguments *)local_258);
  local_2c8 = (this->Size).field0_0x0._s_0.X;
  dStack_2c0 = (this->Size).field0_0x0._s_0.Y;
  local_2b8 = 1;
  local_2a0 = 0;
  local_2b0 = (undefined1  [8])0x0;
  FStack_2a8.Data = (FScriptContainerElement *)0x0;
  (pFVar6->_Size).Value.field0_0x0._s_0.X = local_2c8;
  (pFVar6->_Size).Value.field0_0x0._s_0.Y = dStack_2c0;
  (pFVar6->_Size).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Size).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b0,
             (FWriteAccessScope *)&local_298);
  if (((int)local_2a0 != 0) && (FStack_2a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a8,0,0,0x10);
    local_2a0 = local_2a0 & 0xffffffff00000000;
  }
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  if (FStack_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b0);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (&local_270,"SSpacer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Spacer.cpp"
             ,0x36,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar7 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_270,&local_280,pFVar6);
  local_2d0.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_2d8 = pTVar7->Object;
  if (local_2d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2d0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2d0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MySpacer;
  if (pTVar1 != (TSharedPtr<SSpacer,1> *)&local_2d8) {
    pTVar1->Object = local_2d8;
    local_2d8 = (SSpacer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySpacer).SharedReferenceCount,&local_2d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  if ((void *)local_48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_258);
  if (pTVar1->Object == (SSpacer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = pTVar1->Object;
  pTVar3 = (this->MySpacer).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SSpacer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0b4a0

void __thiscall USpacer::ReleaseSlateResources(USpacer *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MySpacer != (TSharedPtr<SSpacer,1> *)&local_18) {
    (this->MySpacer).Object = (SSpacer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySpacer).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetSize @ 146a1b310

void __thiscall USpacer::SetSize(USpacer *this,TVector2<double> *param_1)

{
  SSpacer *pSVar1;
  char cVar2;
  bool bVar3;
  FDestructionSentinel local_58;
  TVector2<double>_u_0 local_40;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_40._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  pSVar1 = (this->MySpacer).Object;
  (this->Size).field0_0x0._s_0.X = local_40._s_0.X;
  (this->Size).field0_0x0._s_0.Y = local_40._s_0.Y;
  if (pSVar1 != (SSpacer *)0x0) {
    local_18 = 0;
    local_30 = 1;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_28,(FReadAccessScope *)&local_58);
    if ((((int)local_18 == 0) || (FStack_20.Data == (FScriptContainerElement *)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)FStack_20.Data + 0x38))(), cVar2 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_58);
    pSVar1->bIsSpacerSizeBound = bVar3;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar1->SpacerSize,(SWidget *)pSVar1,
             (TAttribute<UE::Math::TVector2<double>_> *)&local_40._s_0,None);
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
    return;
  }
  return;
}

// StaticRegisterNativesUSpacer @ 146a1f050

void __cdecl USpacer::StaticRegisterNativesUSpacer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USpacer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a25e30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpacer::SynchronizeProperties(USpacer *this)

{
  SSpacer *pSVar1;
  char cVar2;
  bool bVar3;
  FDestructionSentinel local_58;
  TVector2<double>_u_0 local_40;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar1 = (this->MySpacer).Object;
  if (pSVar1 != (SSpacer *)0x0) {
    local_40._s_0.X = (this->Size).field0_0x0._s_0.X;
    local_40._s_0.Y = (this->Size).field0_0x0._s_0.Y;
    local_30 = 1;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_28,(FReadAccessScope *)&local_58);
    if ((((int)local_18 == 0) || (FStack_20.Data == (FScriptContainerElement *)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)FStack_20.Data + 0x38))(), cVar2 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_58);
    pSVar1->bIsSpacerSizeBound = bVar3;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar1->SpacerSize,(SWidget *)pSVar1,
             (TAttribute<UE::Math::TVector2<double>_> *)&local_40._s_0,None);
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
    return;
  }
  return;
}

// execSetSize @ 146a429f0

void __cdecl USpacer::execSetSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_28;
  double dStack_20;
  TVector2<double>_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSize((USpacer *)param_1,(TVector2<double> *)&local_18._s_0);
  return;
}

