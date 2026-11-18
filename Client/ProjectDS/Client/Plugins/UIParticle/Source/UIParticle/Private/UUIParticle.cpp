// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 17

// StaticClass @ 14ac8c230

UClass * __cdecl UUIParticle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticle.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticle",
               &Z_Registration_Info_UClass_UUIParticle.InnerSingleton,
               StaticRegisterNativesUUIParticle,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UUIParticle>,InternalVTableHelperCtorCaller<UUIParticle>,
               aFStackX_8,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticle.InnerSingleton;
}

// UUIParticle @ 14ac900d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UUIParticle * __thiscall UUIParticle::UUIParticle(UUIParticle *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->EventOnEnd = 0;
  *(undefined8 *)&(this->EventOnEnd).field_0x8 = 0;
  *(undefined8 *)&(this->EventOnEnd).field_0x10 = 0;
  (this->ParticleCanvas).Object = (SUIParticle *)0x0;
  (this->ParticleCanvas).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UUIParticle @ 14ac90130

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UUIParticle * __thiscall UUIParticle::UUIParticle(UUIParticle *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->EventOnEnd = 0;
  *(undefined8 *)&(this->EventOnEnd).field_0x8 = 0;
  *(undefined8 *)&(this->EventOnEnd).field_0x10 = 0;
  (this->ParticleCanvas).Object = (SUIParticle *)0x0;
  (this->ParticleCanvas).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UUIParticle @ 14ac90f90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUIParticle::~UUIParticle(UUIParticle *this)

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

// GetPrivateStaticClass @ 14ac98920

UClass * __cdecl UUIParticle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticle",
               &Z_Registration_Info_UClass_UUIParticle.InnerSingleton,
               StaticRegisterNativesUUIParticle,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UUIParticle>,InternalVTableHelperCtorCaller<UUIParticle>,
               local_res8,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticle.InnerSingleton;
}

// HandleOnParticleEnd @ 14ac999c0

void __thiscall UUIParticle::HandleOnParticleEnd(UUIParticle *this)

{
  this->bPlayParticle = '\0';
  this->IsPlaying = false;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->EventOnEnd,(void *)0x0);
  return;
}

// Play @ 14ac9da70

/* WARNING: Type propagation algorithm not settling */

void __thiscall UUIParticle::Play(UUIParticle *this)

{
  TSharedPtr<FEasyParticleGroupState,1> *this_00;
  EWidgetUpdateFlags EVar1;
  int iVar2;
  SUIParticle *pSVar3;
  UUIParticleAsset *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  FEasyParticleRootState *this_01;
  code *pcVar6;
  bool bVar7;
  FEasyParticleGroupState *pFVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  EWidgetUpdateFlags EVar11;
  undefined1 local_res8 [8];
  TRawPtrProxy<FEasyParticleGroupState> local_res10;
  
  this->bPlayParticle = '\x01';
  pSVar3 = (this->ParticleCanvas).Object;
  this->IsPlaying = true;
  if ((pSVar3 != (SUIParticle *)0x0) && (pUVar4 = this->Asset, pUVar4 != (UUIParticleAsset *)0x0)) {
    this_00 = &pSVar3->EmitterGroup;
    pFVar8 = this_00->Object;
    pSVar3->isActivity = false;
    if (pFVar8 == (FEasyParticleGroupState *)0x0) {
      pFVar8 = ::operator_new(0x18);
      local_res10.Object = (FEasyParticleGroupState *)0x0;
      if (pFVar8 != (FEasyParticleGroupState *)0x0) {
        (pFVar8->Emitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar8->Emitters).ArrayNum = 0;
        (pFVar8->Emitters).ArrayMax = 0;
        local_res10.Object = pFVar8;
      }
      TSharedPtr<FEasyParticleGroupState,1>::operator=<FEasyParticleGroupState>
                (this_00,&local_res10);
      if ((this_00->Object == (FEasyParticleGroupState *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar8 = this_00->Object;
    }
    FEasyParticleGroupState::InitWithAsset(pFVar8,pUVar4);
    if (((this->ParticleCanvas).Object == (SUIParticle *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pSVar3 = (this->ParticleCanvas).Object;
    pFVar8 = (pSVar3->EmitterGroup).Object;
    if (pFVar8 != (FEasyParticleGroupState *)0x0) {
      pFVar8->FirstRootTick = true;
      iVar2 = (pFVar8->Emitters).ArrayNum;
      FVar9.Data = (pFVar8->Emitters).AllocatorInstance.Data;
      bVar7 = false;
      pFVar10 = FVar9.Data + (longlong)iVar2 * 0x10;
      while( true ) {
        if ((pFVar8->Emitters).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (FVar9.Data == pFVar10) break;
        pTVar5 = *(TReferenceControllerBase<1> **)(FVar9.Data + 8);
        this_01 = *(FEasyParticleRootState **)FVar9.Data;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (this_01 != (FEasyParticleRootState *)0x0) {
          FEasyParticleRootState::ResetRoot(this_01);
          bVar7 = true;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        FVar9.Data = FVar9.Data + 0x10;
      }
      if (bVar7) {
        EVar1 = *(EWidgetUpdateFlags *)&pSVar3->_padding_;
        EVar11 = EVar1 | NeedsTick;
        *(EWidgetUpdateFlags *)&pSVar3->_padding_ = EVar11;
        FWidgetProxyHandle::UpdateWidgetFlags
                  ((FWidgetProxyHandle *)&pSVar3->_padding_,(SWidget *)pSVar3,EVar1,EVar11);
        pSVar3->isActivity = true;
      }
    }
  }
  return;
}

// RebuildWidget @ 14ac9e240

TSharedRef<SWidget,1> * __thiscall
UUIParticle::RebuildWidget(UUIParticle *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TSharedPtr<SUIParticle,1> *pTVar2;
  SUIParticle *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FSlateBaseNamedArgs *pFVar10;
  TSharedRef<SWidget,1> *pTVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_2d8 [8];
  FDelegateAllocation local_2d0;
  SUIParticle *local_2c0;
  FSharedReferencer<1> local_2b8 [2];
  code *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  bool local_298;
  TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs> local_288;
  UUIParticle *local_270;
  FDestructionSentinel local_268;
  FDelegateAllocation *local_250;
  FSlateBaseNamedArgs local_248;
  
  pFVar10 = (FSlateBaseNamedArgs *)SUIParticle::FArguments::FArguments((FArguments *)&local_248);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs>
            (&local_288,"SUIParticle",
             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\UIParticle\\Source\\UIParticle\\Private\\Widget\\UIParticle.cpp"
             ,0x16,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_288._Widget.Object;
  if (local_288._Widget.Object == (SUIParticle *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_288._Widget.Object,pFVar10);
  (local_288._Widget.Object)->FirstTick = true;
  if (((local_288._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)((local_288._Widget.Object)->_padding_ + 0x228))(local_288._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_14ac9e353;
  }
  bVar9 = 0x20;
LAB_14ac9e353:
  FVar6.ReferenceController = local_288._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ | bVar9;
  pbVar1 = (byte *)((longlong)&(local_288._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_288._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_288._Widget.Object = (SUIParticle *)0x0;
  if (pSVar3 == (SUIParticle *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  local_2c0 = pSVar3;
  local_2b8[0].ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->ParticleCanvas;
  if (pTVar2 != (TSharedPtr<SUIParticle,1> *)&local_2c0) {
    pTVar2->Object = pSVar3;
    local_2c0 = (SUIParticle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ParticleCanvas).SharedReferenceCount,local_2b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b8[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_248);
  if (pTVar2->Object == (SUIParticle *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  pSVar3 = pTVar2->Object;
  local_2a8 = HandleOnParticleEnd;
  uStack_2a0 = 0;
  local_2d8 = (undefined1  [8])0x0;
  local_2d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2d8,
             (FWriteAccessScope *)&local_268);
  local_250 = &local_2d0;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_2d0);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUUIParticle____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UUIParticle *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_270 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UUIParticle *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_270);
    puVar12[4] = local_2a8;
    puVar12[5] = CONCAT44(uStack_29c,uStack_2a0);
  }
  if (local_268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_268.Accessor,&local_268);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pSVar3->ParticleEnd,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2d8,
             (FWriteAccessScope *)&local_2a8);
  if ((local_2d0.DelegateSize != 0) &&
     (local_2d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2d0,0,0,0x10);
    local_2d0.DelegateSize = 0;
  }
  if (local_298 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_29c,uStack_2a0),
               (FDestructionSentinel *)&local_2a8);
  }
  if (local_2d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2d8);
  if ((this->bPlayParticle != 0) ||
     ((this->Asset != (UUIParticleAsset *)0x0 && (this->Asset->AutoPlay != false)))) {
    Play(this);
  }
  if ((this->ParticleCanvas).Object == (SUIParticle *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  pTVar4 = (this->ParticleCanvas).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->ParticleCanvas).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SUIParticle *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
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

// ReleaseSlateResources @ 14ac9ec50

void __thiscall UUIParticle::ReleaseSlateResources(UUIParticle *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ParticleCanvas != (TSharedPtr<SUIParticle,1> *)&local_18) {
    (this->ParticleCanvas).Object = (SUIParticle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ParticleCanvas).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetPlayParticle @ 14aca0130

/* WARNING: Type propagation algorithm not settling */

void __thiscall UUIParticle::SetPlayParticle(UUIParticle *this,bool param_1)

{
  TSharedPtr<FEasyParticleGroupState,1> *this_00;
  EWidgetUpdateFlags EVar1;
  int iVar2;
  SUIParticle *pSVar3;
  UUIParticleAsset *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  FEasyParticleRootState *this_01;
  code *pcVar6;
  bool bVar7;
  FEasyParticleGroupState *pFVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  EWidgetUpdateFlags EVar11;
  undefined1 auStackX_8 [8];
  TRawPtrProxy<FEasyParticleGroupState> TStackX_10;
  
  if (this->bPlayParticle == param_1) {
    return;
  }
  this->field_0x1d0 = this->field_0x1d0 & 0xfe | param_1;
  if (param_1) {
    this->bPlayParticle = '\x01';
    pSVar3 = (this->ParticleCanvas).Object;
    this->IsPlaying = true;
    if ((pSVar3 != (SUIParticle *)0x0) && (pUVar4 = this->Asset, pUVar4 != (UUIParticleAsset *)0x0))
    {
      this_00 = &pSVar3->EmitterGroup;
      pFVar8 = this_00->Object;
      pSVar3->isActivity = false;
      if (pFVar8 == (FEasyParticleGroupState *)0x0) {
        pFVar8 = ::operator_new(0x18);
        TStackX_10.Object = (FEasyParticleGroupState *)0x0;
        if (pFVar8 != (FEasyParticleGroupState *)0x0) {
          (pFVar8->Emitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar8->Emitters).ArrayNum = 0;
          (pFVar8->Emitters).ArrayMax = 0;
          TStackX_10.Object = pFVar8;
        }
        TSharedPtr<FEasyParticleGroupState,1>::operator=<FEasyParticleGroupState>
                  (this_00,&TStackX_10);
        if ((this_00->Object == (FEasyParticleGroupState *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar8 = this_00->Object;
      }
      FEasyParticleGroupState::InitWithAsset(pFVar8,pUVar4);
      if (((this->ParticleCanvas).Object == (SUIParticle *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar3 = (this->ParticleCanvas).Object;
      pFVar8 = (pSVar3->EmitterGroup).Object;
      if (pFVar8 != (FEasyParticleGroupState *)0x0) {
        pFVar8->FirstRootTick = true;
        iVar2 = (pFVar8->Emitters).ArrayNum;
        FVar9.Data = (pFVar8->Emitters).AllocatorInstance.Data;
        bVar7 = false;
        pFVar10 = FVar9.Data + (longlong)iVar2 * 0x10;
        while( true ) {
          if ((pFVar8->Emitters).ArrayNum != iVar2) {
            `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(auStackX_8);
          }
          if (FVar9.Data == pFVar10) break;
          pTVar5 = *(TReferenceControllerBase<1> **)(FVar9.Data + 8);
          this_01 = *(FEasyParticleRootState **)FVar9.Data;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (this_01 != (FEasyParticleRootState *)0x0) {
            FEasyParticleRootState::ResetRoot(this_01);
            bVar7 = true;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          FVar9.Data = FVar9.Data + 0x10;
        }
        if (bVar7) {
          EVar1 = *(EWidgetUpdateFlags *)&pSVar3->_padding_;
          EVar11 = EVar1 | NeedsTick;
          *(EWidgetUpdateFlags *)&pSVar3->_padding_ = EVar11;
          FWidgetProxyHandle::UpdateWidgetFlags
                    ((FWidgetProxyHandle *)&pSVar3->_padding_,(SWidget *)pSVar3,EVar1,EVar11);
          pSVar3->isActivity = true;
        }
      }
    }
    return;
  }
  StopEmit(this);
  return;
}

// StaticRegisterNativesUUIParticle @ 14aca0390

void __cdecl UUIParticle::StaticRegisterNativesUUIParticle(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UUIParticle_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Stop @ 14aca0610

/* WARNING: Type propagation algorithm not settling */

void __thiscall UUIParticle::Stop(UUIParticle *this)

{
  EWidgetUpdateFlags EVar1;
  int iVar2;
  SUIParticle *pSVar3;
  FEasyParticleGroupState *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FEasyParticleRootState *this_00;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  EWidgetUpdateFlags EVar8;
  undefined1 local_res8 [8];
  
  this->bPlayParticle = '\0';
  pSVar3 = (this->ParticleCanvas).Object;
  this->IsPlaying = false;
  if (pSVar3 != (SUIParticle *)0x0) {
    pFVar4 = (pSVar3->EmitterGroup).Object;
    if (pFVar4 != (FEasyParticleGroupState *)0x0) {
      FVar6.Data = (pFVar4->Emitters).AllocatorInstance.Data;
      iVar2 = (pFVar4->Emitters).ArrayNum;
      pFVar7 = FVar6.Data + (longlong)iVar2 * 0x10;
      while( true ) {
        if ((pFVar4->Emitters).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (FVar6.Data == pFVar7) break;
        pTVar5 = *(TReferenceControllerBase<1> **)(FVar6.Data + 8);
        this_00 = *(FEasyParticleRootState **)FVar6.Data;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (this_00 != (FEasyParticleRootState *)0x0) {
          FEasyParticleRootState::ResetRoot(this_00);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        FVar6.Data = FVar6.Data + 0x10;
      }
    }
    EVar1 = *(EWidgetUpdateFlags *)&pSVar3->_padding_;
    EVar8 = EVar1 & ~NeedsTick;
    *(EWidgetUpdateFlags *)&pSVar3->_padding_ = EVar8;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&pSVar3->_padding_,(SWidget *)pSVar3,EVar1,EVar8);
    pSVar3->isActivity = false;
  }
  return;
}

// StopEmit @ 14aca08b0

void __thiscall UUIParticle::StopEmit(UUIParticle *this)

{
  int iVar1;
  SUIParticle *pSVar2;
  FEasyParticleGroupState *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pSVar2 = (this->ParticleCanvas).Object;
  if ((pSVar2 != (SUIParticle *)0x0) &&
     (pFVar3 = (pSVar2->EmitterGroup).Object, pFVar3 != (FEasyParticleGroupState *)0x0)) {
    pFVar6 = (pFVar3->Emitters).AllocatorInstance.Data;
    iVar1 = (pFVar3->Emitters).ArrayNum;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar3->Emitters).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar7) break;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
      lVar5 = *(longlong *)pFVar6;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x3d9) = 1;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar6 = pFVar6 + 0x10;
    }
  }
  return;
}

// execPlay @ 14aca3570

void __cdecl UUIParticle::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Play((UUIParticle *)param_1);
  return;
}

// execSetPlayParticle @ 14aca36b0

void __cdecl UUIParticle::execSetPlayParticle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
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
  bVar2 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bool)(param_1[0xb].field_0x18 & 1) != bVar2) {
    param_1[0xb].field_0x18 = param_1[0xb].field_0x18 & 0xfe | bVar2;
    if (bVar2) {
      Play((UUIParticle *)param_1);
      return;
    }
    StopEmit((UUIParticle *)param_1);
  }
  return;
}

// execStop @ 14aca3850

void __cdecl UUIParticle::execStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  EWidgetUpdateFlags EVar1;
  SWidget *pSVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  FEasyParticleRootState *this;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  EWidgetUpdateFlags EVar8;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xb].field_0x18 = param_1[0xb].field_0x18 & 0xfe;
  pSVar2 = *(SWidget **)&param_1[0xb].field_0x20;
  param_1[0xb].field_0x19 = 0;
  if (pSVar2 != (SWidget *)0x0) {
    plVar3 = (longlong *)pSVar2[1]._padding_;
    if (plVar3 != (longlong *)0x0) {
      puVar6 = (undefined8 *)*plVar3;
      lVar5 = plVar3[1];
      puVar7 = puVar6 + (longlong)(int)lVar5 * 2;
      while( true ) {
        if ((int)plVar3[1] != (int)lVar5) {
          `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (puVar6 == puVar7) break;
        pTVar4 = (TReferenceControllerBase<1> *)puVar6[1];
        this = (FEasyParticleRootState *)*puVar6;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (this != (FEasyParticleRootState *)0x0) {
          FEasyParticleRootState::ResetRoot(this);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        puVar6 = puVar6 + 2;
      }
    }
    EVar1 = pSVar2->UpdateFlags;
    EVar8 = EVar1 & ~NeedsTick;
    pSVar2->UpdateFlags = EVar8;
    FWidgetProxyHandle::UpdateWidgetFlags(&pSVar2->FastPathProxyHandle,pSVar2,EVar1,EVar8);
    *(undefined1 *)&pSVar2[1]._padding_ = 0;
  }
  return;
}

// execStopEmit @ 14aca39d0

void __cdecl UUIParticle::execStopEmit(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StopEmit((UUIParticle *)param_1);
  return;
}

