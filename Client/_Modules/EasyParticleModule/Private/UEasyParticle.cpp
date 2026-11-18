// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 17

// StaticClass @ 14aca5750

UClass * __cdecl UEasyParticle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticle",
               &Z_Registration_Info_UClass_UEasyParticle.InnerSingleton,
               StaticRegisterNativesUEasyParticle,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticle>,InternalVTableHelperCtorCaller<UEasyParticle>,
               local_res8,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticle.InnerSingleton;
}

// UEasyParticle @ 14aca94a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UEasyParticle * __thiscall UEasyParticle::UEasyParticle(UEasyParticle *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->EventOnEnd = 0;
  *(undefined8 *)&(this->EventOnEnd).field_0x8 = 0;
  *(undefined8 *)&(this->EventOnEnd).field_0x10 = 0;
  (this->ParticleCanvas).Object = (SEasyParticle *)0x0;
  (this->ParticleCanvas).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UEasyParticle @ 14acaa3b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEasyParticle::~UEasyParticle(UEasyParticle *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ParticleCanvas).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->EventOnEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EventOnEnd);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14acac170

UClass * __cdecl UEasyParticle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticle",
               &Z_Registration_Info_UClass_UEasyParticle.InnerSingleton,
               StaticRegisterNativesUEasyParticle,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticle>,InternalVTableHelperCtorCaller<UEasyParticle>,
               local_res8,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticle.InnerSingleton;
}

// StaticRegisterNativesUEasyParticle @ 14acae140

void __cdecl UEasyParticle::StaticRegisterNativesUEasyParticle(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UEasyParticle_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execPlay @ 14acb0100

void __cdecl UEasyParticle::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Play((UEasyParticle *)param_1);
  return;
}

// execSetPlayParticle @ 14acb0260

void __cdecl UEasyParticle::execSetPlayParticle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPlayParticle((UEasyParticle *)param_1,local_res10[0] != 0);
  return;
}

// execStop @ 14acb02f0

void __cdecl UEasyParticle::execStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Stop((UEasyParticle *)param_1);
  return;
}

// execStopEmit @ 14acb0310

void __cdecl UEasyParticle::execStopEmit(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StopEmit((UEasyParticle *)param_1);
  return;
}

// UEasyParticle @ 14acc0620

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UEasyParticle * __thiscall
UEasyParticle::UEasyParticle(UEasyParticle *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->EventOnEnd = 0;
  *(undefined8 *)&(this->EventOnEnd).field_0x8 = 0;
  *(undefined8 *)&(this->EventOnEnd).field_0x10 = 0;
  (this->ParticleCanvas).Object = (SEasyParticle *)0x0;
  (this->ParticleCanvas).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// HandleOnParticleEnd @ 14acc4b00

void __thiscall UEasyParticle::HandleOnParticleEnd(UEasyParticle *this)

{
  this->bPlayParticle = '\0';
  this->IsPlaying = false;
  FOnParticleProEndEvent_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->EventOnEnd);
  return;
}

// Play @ 14acc7460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UEasyParticle::Play(UEasyParticle *this)

{
  EWidgetUpdateFlags EVar1;
  SEasyParticle *pSVar2;
  UEasyParticleAsset *pUVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UEasyParticleRootState *pUVar8;
  FGeometry *pFVar9;
  longlong *plVar10;
  EWidgetUpdateFlags EVar11;
  undefined1 auStack_128 [32];
  undefined1 local_108 [128];
  FGeometry local_88;
  FGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  this->bPlayParticle = '\x01';
  pSVar2 = (this->ParticleCanvas).Object;
  this->IsPlaying = true;
  if (pSVar2 == (SEasyParticle *)0x0) {
    return;
  }
  pUVar3 = this->Asset;
  if (pUVar3 == (UEasyParticleAsset *)0x0) {
    return;
  }
  pUVar8 = (pSVar2->RootEmitter).field0_0x0.DebugPtr;
  pSVar2->isActivity = false;
  if (pUVar8 == (UEasyParticleRootState *)0x0) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UEasyParticleRootState_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_108,pUVar7);
    local_108._8_8_ = pUVar6;
    pUVar8 = (UEasyParticleRootState *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_108);
    if (local_108._64_8_ != 0) {
      plVar10 = (longlong *)(local_108 + 0x50);
      if ((longlong *)local_108._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_108._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UEasyParticleRootState *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (pSVar2->RootEmitter).field0_0x0.DebugPtr = pUVar8;
    if (pUVar8 == (UEasyParticleRootState *)0x0) goto LAB_14acc759c;
  }
  pFVar9 = SWidget::GetCachedGeometry((SWidget *)pSVar2);
  local_88.Size = pFVar9->Size;
  local_88._8_8_ = *(undefined8 *)&pFVar9->Scale;
  local_88._16_8_ = *(undefined8 *)((longlong)&(pFVar9->AbsolutePosition).field0_0x0 + 4);
  local_88._24_8_ = *(undefined8 *)((longlong)&(pFVar9->Position).field0_0x0 + 4);
  local_88.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((pFVar9->AccumulatedRenderTransform).M.M[0] + 1);
  local_88.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((pFVar9->AccumulatedRenderTransform).M.M[1] + 1);
  local_88._48_8_ =
       *(undefined8 *)((longlong)&(pFVar9->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  UEasyParticleRootState::Init((pSVar2->RootEmitter).field0_0x0.DebugPtr,pUVar3,&local_88);
LAB_14acc759c:
  if (((this->ParticleCanvas).Object == (SEasyParticle *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar2 = (this->ParticleCanvas).Object;
  if ((pSVar2->RootEmitter).field0_0x0.DebugPtr != (UEasyParticleRootState *)0x0) {
    pFVar9 = SWidget::GetCachedGeometry((SWidget *)pSVar2);
    local_50.Size = pFVar9->Size;
    local_50._8_8_ = *(undefined8 *)&pFVar9->Scale;
    local_50._16_8_ = *(undefined8 *)((longlong)&(pFVar9->AbsolutePosition).field0_0x0 + 4);
    local_50._24_8_ = *(undefined8 *)((longlong)&(pFVar9->Position).field0_0x0 + 4);
    local_50.AccumulatedRenderTransform.M.M._4_8_ =
         *(undefined8 *)((pFVar9->AccumulatedRenderTransform).M.M[0] + 1);
    local_50.AccumulatedRenderTransform._12_8_ =
         *(undefined8 *)((pFVar9->AccumulatedRenderTransform).M.M[1] + 1);
    local_50._48_8_ =
         *(undefined8 *)((longlong)&(pFVar9->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    UEasyParticleRootState::Play((pSVar2->RootEmitter).field0_0x0.DebugPtr,&local_50);
    EVar1 = *(EWidgetUpdateFlags *)&pSVar2->_padding_;
    EVar11 = EVar1 | NeedsTick;
    *(EWidgetUpdateFlags *)&pSVar2->_padding_ = EVar11;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&pSVar2->_padding_,(SWidget *)pSVar2,EVar1,EVar11);
    pSVar2->isActivity = true;
  }
  return;
}

// RebuildWidget @ 14acc7940

TSharedRef<SWidget,1> * __thiscall
UEasyParticle::RebuildWidget(UEasyParticle *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  atomic<int> *paVar2;
  TSharedPtr<SEasyParticle,1> *pTVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  SEasyParticle *pSVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  FSlateBaseNamedArgs *pFVar12;
  TSharedRef<SWidget,1> *pTVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  TReferenceControllerBase<1> *pTVar16;
  FSharedReferencer<1> FVar17;
  T0RequiredArgs local_res8 [8];
  TSharedRef<SWidget,1> *local_res10;
  FLLMScope local_res18 [2];
  FName local_res20;
  undefined1 local_318 [8];
  ForAnyElementType FStack_310;
  int local_308;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f8;
  FDelegateAllocation local_2f0;
  TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs> local_2e0;
  FMemScope local_2c8;
  UEasyParticle *local_2c0;
  FDestructionSentinel local_2b8;
  FDestructionSentinel local_2a0;
  FDestructionSentinel local_288;
  FDelegateAllocation *local_270;
  FReadAccessScope local_268;
  longlong local_250 [2];
  FSlateBaseNamedArgs local_240;
  
  local_res10 = __return_storage_ptr__;
  pFVar12 = (FSlateBaseNamedArgs *)SEasyParticle::FArguments::FArguments((FArguments *)&local_240);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2c8,&local_res20,true);
  TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs>
            (&local_2e0,"SEasyParticle",
             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\UIParticle\\Source\\EasyParticle\\Private\\Widget\\EasyParticle.cpp"
             ,0x16,local_res8);
  FMemScope::~FMemScope(&local_2c8);
  FLLMScope::~FLLMScope(local_res18);
  pSVar6 = local_2e0._Widget.Object;
  if ((local_2e0._Widget.Object == (SEasyParticle *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  SWidget::SWidgetConstruct((SWidget *)local_2e0._Widget.Object,pFVar12);
  (local_2e0._Widget.Object)->FirstTick = true;
  ((local_2e0._Widget.Object)->RootEmitter).field0_0x0.DebugPtr = (UEasyParticleRootState *)0x0;
  if ((local_2e0._Widget.Object == (SEasyParticle *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  if (((local_2e0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_2e0._Widget.Object)->_padding_ + 0x228))(local_2e0._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_14acc7a8e;
  }
  bVar11 = 0x20;
LAB_14acc7a8e:
  *(byte *)&(local_2e0._Widget.Object)->_padding_ =
       (byte)(local_2e0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2e0._Widget.Object)->_padding_ =
       (byte)(local_2e0._Widget.Object)->_padding_ | bVar11;
  if ((local_2e0._Widget.Object == (SEasyParticle *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  pbVar1 = (byte *)((longlong)&(local_2e0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2e0._Widget.Object == (SEasyParticle *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  FVar8.ReferenceController = local_2e0._Widget.SharedReferenceCount.ReferenceController;
  local_2e0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2e0._Widget.Object = (SEasyParticle *)0x0;
  if ((pSVar6 == (SEasyParticle *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = &this->ParticleCanvas;
  FVar17.ReferenceController = FVar8.ReferenceController;
  if (pTVar3 != (TSharedPtr<SEasyParticle,1> *)local_250) {
    pTVar3->Object = pSVar6;
    pTVar5 = (this->ParticleCanvas).SharedReferenceCount.ReferenceController;
    if (FVar8.ReferenceController != pTVar5) {
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      (this->ParticleCanvas).SharedReferenceCount.ReferenceController = FVar8.ReferenceController;
      FVar17.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar5->SharedReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        FVar17.ReferenceController = pTVar16;
        __return_storage_ptr__ = local_res10;
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)pTVar5->_padding_)(pTVar5);
          LOCK();
          paVar2 = &pTVar5->WeakReferenceCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          __return_storage_ptr__ = local_res10;
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
            __return_storage_ptr__ = local_res10;
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_240);
  if ((pTVar3->Object == (SEasyParticle *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  pSVar6 = pTVar3->Object;
  local_318 = (undefined1  [8])HandleOnParticleEnd;
  FStack_310.Data = (FScriptContainerElement *)((ulonglong)FStack_310.Data._4_4_ << 0x20);
  local_2f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_2f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f8,(FWriteAccessScope *)&local_288);
  local_270 = &local_2f0;
  puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_2f0);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar15;
    *puVar14 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUEasyParticle____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UEasyParticle *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar14[3] = 0;
    local_2c0 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UEasyParticle *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_2c0);
    *(undefined1 (*) [8])(puVar14 + 4) = local_318;
    puVar14[5] = FStack_310.Data;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  this_00 = &pSVar6->ParticleEnd;
  if ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_2f8 != this_00) {
    local_318 = (undefined1  [8])0x0;
    FStack_310.Data = (FScriptContainerElement *)0x0;
    local_308 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_2f8,&local_268);
    if ((local_2f0.DelegateSize != 0) &&
       (local_2f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (**(code **)(*(longlong *)local_2f0.DelegateAllocator + 0x50))
                (local_2f0.DelegateAllocator,local_318);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_268);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_318);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_318,
               (FWriteAccessScope *)&local_2b8);
    if ((local_308 != 0) && (FStack_310.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_310.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_310,0,0,0x10);
      local_308 = 0;
    }
    if (local_2b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
    }
    if (FStack_310.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_310.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_318);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f8,(FWriteAccessScope *)&local_2a0);
  if ((local_2f0.DelegateSize != 0) &&
     (local_2f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2f0,0,0,0x10);
    local_2f0.DelegateSize = 0;
  }
  if (local_2a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a0.Accessor,&local_2a0);
  }
  if (local_2f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f8.AccessDetector);
  if (this->bPlayParticle != 0) {
    Play(this);
  }
  if (((this->ParticleCanvas).Object == (SEasyParticle *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  pTVar5 = (this->ParticleCanvas).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->ParticleCanvas).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar6 == (SEasyParticle *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14acc7ed0

void __thiscall UEasyParticle::ReleaseSlateResources(UEasyParticle *this,bool param_1)

{
  TSharedPtr<SEasyParticle,1> local_18;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18.Object = (SEasyParticle *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TSharedPtr<SEasyParticle,1>::operator=(&this->ParticleCanvas,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetPlayParticle @ 14acc8ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UEasyParticle::SetPlayParticle(UEasyParticle *this,bool param_1)

{
  EWidgetUpdateFlags EVar1;
  UEasyParticleAsset *pUVar2;
  SEasyParticle *pSVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UEasyParticleRootState *pUVar8;
  FGeometry *pFVar9;
  longlong *plVar10;
  EWidgetUpdateFlags EVar11;
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [128];
  FGeometry FStack_88;
  FGeometry FStack_50;
  ulonglong uStack_18;
  
  if (this->bPlayParticle == param_1) {
    return;
  }
  this->field_0x1d0 = this->field_0x1d0 & 0xfe | param_1;
  if (!param_1) {
    pSVar3 = (this->ParticleCanvas).Object;
    if (pSVar3 == (SEasyParticle *)0x0) {
      return;
    }
    pUVar8 = (pSVar3->RootEmitter).field0_0x0.DebugPtr;
    if (pUVar8 == (UEasyParticleRootState *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014acc8ee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar8->_padding_ + 0x2d0))();
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  this->bPlayParticle = '\x01';
  pSVar3 = (this->ParticleCanvas).Object;
  this->IsPlaying = true;
  if (pSVar3 == (SEasyParticle *)0x0) {
    return;
  }
  pUVar2 = this->Asset;
  if (pUVar2 == (UEasyParticleAsset *)0x0) {
    return;
  }
  pUVar8 = (pSVar3->RootEmitter).field0_0x0.DebugPtr;
  pSVar3->isActivity = false;
  if (pUVar8 == (UEasyParticleRootState *)0x0) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UEasyParticleRootState_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_108,pUVar7);
    auStack_108._8_8_ = pUVar6;
    pUVar8 = (UEasyParticleRootState *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_108);
    if (auStack_108._64_8_ != 0) {
      plVar10 = (longlong *)(auStack_108 + 0x50);
      if ((longlong *)auStack_108._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)auStack_108._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UEasyParticleRootState *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (pSVar3->RootEmitter).field0_0x0.DebugPtr = pUVar8;
    if (pUVar8 == (UEasyParticleRootState *)0x0) goto LAB_14acc759c;
  }
  pFVar9 = SWidget::GetCachedGeometry((SWidget *)pSVar3);
  FStack_88.Size = pFVar9->Size;
  FStack_88._8_8_ = *(undefined8 *)&pFVar9->Scale;
  FStack_88._16_8_ = *(undefined8 *)((longlong)&(pFVar9->AbsolutePosition).field0_0x0 + 4);
  FStack_88._24_8_ = *(undefined8 *)((longlong)&(pFVar9->Position).field0_0x0 + 4);
  FStack_88.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((pFVar9->AccumulatedRenderTransform).M.M[0] + 1);
  FStack_88.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((pFVar9->AccumulatedRenderTransform).M.M[1] + 1);
  FStack_88._48_8_ =
       *(undefined8 *)((longlong)&(pFVar9->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  UEasyParticleRootState::Init((pSVar3->RootEmitter).field0_0x0.DebugPtr,pUVar2,&FStack_88);
LAB_14acc759c:
  if (((this->ParticleCanvas).Object == (SEasyParticle *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar3 = (this->ParticleCanvas).Object;
  if ((pSVar3->RootEmitter).field0_0x0.DebugPtr != (UEasyParticleRootState *)0x0) {
    pFVar9 = SWidget::GetCachedGeometry((SWidget *)pSVar3);
    FStack_50.Size = pFVar9->Size;
    FStack_50._8_8_ = *(undefined8 *)&pFVar9->Scale;
    FStack_50._16_8_ = *(undefined8 *)((longlong)&(pFVar9->AbsolutePosition).field0_0x0 + 4);
    FStack_50._24_8_ = *(undefined8 *)((longlong)&(pFVar9->Position).field0_0x0 + 4);
    FStack_50.AccumulatedRenderTransform.M.M._4_8_ =
         *(undefined8 *)((pFVar9->AccumulatedRenderTransform).M.M[0] + 1);
    FStack_50.AccumulatedRenderTransform._12_8_ =
         *(undefined8 *)((pFVar9->AccumulatedRenderTransform).M.M[1] + 1);
    FStack_50._48_8_ =
         *(undefined8 *)((longlong)&(pFVar9->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    UEasyParticleRootState::Play((pSVar3->RootEmitter).field0_0x0.DebugPtr,&FStack_50);
    EVar1 = *(EWidgetUpdateFlags *)&pSVar3->_padding_;
    EVar11 = EVar1 | NeedsTick;
    *(EWidgetUpdateFlags *)&pSVar3->_padding_ = EVar11;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&pSVar3->_padding_,(SWidget *)pSVar3,EVar1,EVar11);
    pSVar3->isActivity = true;
  }
  return;
}

// Stop @ 14acc8f50

void __thiscall UEasyParticle::Stop(UEasyParticle *this)

{
  EWidgetUpdateFlags EVar1;
  SEasyParticle *pSVar2;
  UEasyParticleRootState *this_00;
  EWidgetUpdateFlags EVar3;
  
  this->bPlayParticle = '\0';
  pSVar2 = (this->ParticleCanvas).Object;
  this->IsPlaying = false;
  if (pSVar2 != (SEasyParticle *)0x0) {
    this_00 = (pSVar2->RootEmitter).field0_0x0.DebugPtr;
    if (this_00 != (UEasyParticleRootState *)0x0) {
      UEasyParticleRootState::Stop(this_00);
    }
    EVar1 = *(EWidgetUpdateFlags *)&pSVar2->_padding_;
    EVar3 = EVar1 & ~NeedsTick;
    *(EWidgetUpdateFlags *)&pSVar2->_padding_ = EVar3;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&pSVar2->_padding_,(SWidget *)pSVar2,EVar1,EVar3);
    pSVar2->isActivity = false;
  }
  return;
}

// StopEmit @ 14acc9010

void __thiscall UEasyParticle::StopEmit(UEasyParticle *this)

{
  SEasyParticle *pSVar1;
  UEasyParticleRootState *pUVar2;
  
  pSVar1 = (this->ParticleCanvas).Object;
  if ((pSVar1 != (SEasyParticle *)0x0) &&
     (pUVar2 = (pSVar1->RootEmitter).field0_0x0.DebugPtr, pUVar2 != (UEasyParticleRootState *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x00014acc902b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar2->_padding_ + 0x2d0))();
    return;
  }
  return;
}

