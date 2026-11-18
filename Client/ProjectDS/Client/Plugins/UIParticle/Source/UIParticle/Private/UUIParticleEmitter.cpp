// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 17

// StaticClass @ 14ac8b610

UClass * __cdecl UUIParticleEmitter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticleEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticleEmitter",
               &Z_Registration_Info_UClass_UUIParticleEmitter.InnerSingleton,
               StaticRegisterNativesUUIParticleEmitter,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUIParticleEmitter>,
               InternalVTableHelperCtorCaller<UUIParticleEmitter>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticleEmitter.InnerSingleton;
}

// UUIParticleEmitter @ 14ac90210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UUIParticleEmitter * __thiscall
UUIParticleEmitter::UUIParticleEmitter(UUIParticleEmitter *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->EventOnEnd = 0;
  *(undefined8 *)&(this->EventOnEnd).field_0x8 = 0;
  *(undefined8 *)&(this->EventOnEnd).field_0x10 = 0;
  (this->ParticleCanvas).Object = (SUIParticleEmitter *)0x0;
  (this->ParticleCanvas).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UUIParticleEmitter @ 14ac90270

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UUIParticleEmitter * __thiscall
UUIParticleEmitter::UUIParticleEmitter(UUIParticleEmitter *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->EventOnEnd = 0;
  *(undefined8 *)&(this->EventOnEnd).field_0x8 = 0;
  *(undefined8 *)&(this->EventOnEnd).field_0x10 = 0;
  (this->ParticleCanvas).Object = (SUIParticleEmitter *)0x0;
  (this->ParticleCanvas).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UUIParticleEmitter @ 14ac91040

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUIParticleEmitter::~UUIParticleEmitter(UUIParticleEmitter *this)

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

// GetPrivateStaticClass @ 14ac98a90

UClass * __cdecl UUIParticleEmitter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticleEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticleEmitter",
               &Z_Registration_Info_UClass_UUIParticleEmitter.InnerSingleton,
               StaticRegisterNativesUUIParticleEmitter,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUIParticleEmitter>,
               InternalVTableHelperCtorCaller<UUIParticleEmitter>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticleEmitter.InnerSingleton;
}

// HandleOnParticleEnd @ 14ac999f0

void __thiscall UUIParticleEmitter::HandleOnParticleEnd(UUIParticleEmitter *this)

{
  this->bPlayParticle = '\0';
  this->IsPlaying = false;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->EventOnEnd,(void *)0x0);
  return;
}

// Play @ 14ac9dc40

void __thiscall UUIParticleEmitter::Play(UUIParticleEmitter *this)

{
  TSharedPtr<FEasyParticleRootState,1> *this_00;
  EWidgetUpdateFlags EVar1;
  SUIParticleEmitter *pSVar2;
  UUIParticleEmitterAsset *pUVar3;
  code *pcVar4;
  bool bVar5;
  FEasyParticleRootState *pFVar6;
  FUIParticleFactory *pFVar7;
  EWidgetUpdateFlags EVar8;
  TRawPtrProxy<FEasyParticleRootState> local_res8;
  TSharedPtr<FEasyParticleRootState,1> local_28;
  
  this->bPlayParticle = '\x01';
  pSVar2 = (this->ParticleCanvas).Object;
  this->IsPlaying = true;
  if ((pSVar2 != (SUIParticleEmitter *)0x0) &&
     (pUVar3 = this->Asset, pUVar3 != (UUIParticleEmitterAsset *)0x0)) {
    this_00 = &pSVar2->RootEmitter;
    pFVar6 = this_00->Object;
    pSVar2->isActivity = false;
    if (pFVar6 == (FEasyParticleRootState *)0x0) {
      pFVar6 = ::operator_new(0x420);
      local_res8.Object = (FEasyParticleRootState *)0x0;
      if (pFVar6 != (FEasyParticleRootState *)0x0) {
        FEasyParticleState::FEasyParticleState((FEasyParticleState *)pFVar6);
        pFVar6->FirstRootTick = false;
        *(undefined ***)pFVar6 = &___7FEasyParticleRootState__6B_;
        pFVar6->field_0x3d8 = true;
        local_res8.Object = pFVar6;
      }
      TSharedPtr<FEasyParticleRootState,1>::operator=<FEasyParticleRootState>(this_00,&local_res8);
      pFVar6 = (FEasyParticleRootState *)FUIParticleFactory::m_Instance;
      if ((FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) &&
         (pFVar7 = ::operator_new(0x30), pFVar6 = (FEasyParticleRootState *)0x0,
         pFVar7 != (FUIParticleFactory *)0x0)) {
        pFVar6 = (FEasyParticleRootState *)FUIParticleFactory::FUIParticleFactory(pFVar7);
      }
      FUIParticleFactory::m_Instance = (FUIParticleFactory *)pFVar6;
      pFVar7 = FUIParticleFactory::m_Instance;
      local_28.SharedReferenceCount.ReferenceController =
           (pSVar2->RootEmitter).SharedReferenceCount.ReferenceController;
      local_28.Object = this_00->Object;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_28.Object != (FEasyParticleRootState *)0x0) {
        TArray<TSharedPtr<FEasyParticleRootState,1>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TSharedPtr<FEasyParticleRootState,1>_const_&>
                  (&pFVar7->ParticleRefArray,&local_28);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      if ((this_00->Object == (FEasyParticleRootState *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar6 = this_00->Object;
    }
    FEasyParticleRootState::InitRoot(pFVar6,pUVar3,0.0,0);
    if (((this->ParticleCanvas).Object == (SUIParticleEmitter *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar2 = (this->ParticleCanvas).Object;
    pFVar6 = (pSVar2->RootEmitter).Object;
    if (pFVar6 != (FEasyParticleRootState *)0x0) {
      FEasyParticleRootState::ResetRoot(pFVar6);
      EVar1 = *(EWidgetUpdateFlags *)&pSVar2->_padding_;
      EVar8 = EVar1 | NeedsTick;
      *(EWidgetUpdateFlags *)&pSVar2->_padding_ = EVar8;
      FWidgetProxyHandle::UpdateWidgetFlags
                ((FWidgetProxyHandle *)&pSVar2->_padding_,(SWidget *)pSVar2,EVar1,EVar8);
      pSVar2->isActivity = true;
    }
  }
  return;
}

// RebuildWidget @ 14ac9e650

TSharedRef<SWidget,1> * __thiscall
UUIParticleEmitter::RebuildWidget
          (UUIParticleEmitter *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TSharedPtr<SUIParticleEmitter,1> *pTVar2;
  SUIParticleEmitter *pSVar3;
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
  SUIParticleEmitter *local_2c0;
  FSharedReferencer<1> local_2b8 [2];
  code *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  bool local_298;
  TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs> local_288;
  UUIParticleEmitter *local_270;
  FDestructionSentinel local_268;
  FDelegateAllocation *local_250;
  FSlateBaseNamedArgs local_248;
  
  pFVar10 = (FSlateBaseNamedArgs *)
            SUIParticleEmitter::FArguments::FArguments((FArguments *)&local_248);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs>
            (&local_288,"SUIParticleEmitter",
             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\UIParticle\\Source\\UIParticle\\Private\\Widget\\UIParticleEmitter.cpp"
             ,0x16,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_288._Widget.Object;
  if (local_288._Widget.Object == (SUIParticleEmitter *)0x0) {
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
    if (cVar8 == '\0') goto LAB_14ac9e763;
  }
  bVar9 = 0x20;
LAB_14ac9e763:
  FVar6.ReferenceController = local_288._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ | bVar9;
  pbVar1 = (byte *)((longlong)&(local_288._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_288._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_288._Widget.Object = (SUIParticleEmitter *)0x0;
  if (pSVar3 == (SUIParticleEmitter *)0x0) {
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
  if (pTVar2 != (TSharedPtr<SUIParticleEmitter,1> *)&local_2c0) {
    pTVar2->Object = pSVar3;
    local_2c0 = (SUIParticleEmitter *)0x0;
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
  if (pTVar2->Object == (SUIParticleEmitter *)0x0) {
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
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUUIParticleEmitter____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UUIParticleEmitter *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_270 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UUIParticleEmitter *)0x0))
    {
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
     ((this->Asset != (UUIParticleEmitterAsset *)0x0 && (this->Asset->AutoPlay != false)))) {
    Play(this);
  }
  if ((this->ParticleCanvas).Object == (SUIParticleEmitter *)0x0) {
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
  if (pSVar3 == (SUIParticleEmitter *)0x0) {
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

// ReleaseSlateResources @ 14ac9ecb0

void __thiscall UUIParticleEmitter::ReleaseSlateResources(UUIParticleEmitter *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ParticleCanvas != (TSharedPtr<SUIParticleEmitter,1> *)&local_18) {
    (this->ParticleCanvas).Object = (SUIParticleEmitter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ParticleCanvas).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetPlayParticle @ 14aca0170

void __thiscall UUIParticleEmitter::SetPlayParticle(UUIParticleEmitter *this,bool param_1)

{
  TSharedPtr<FEasyParticleRootState,1> *this_00;
  EWidgetUpdateFlags EVar1;
  UUIParticleEmitterAsset *pUVar2;
  SUIParticleEmitter *pSVar3;
  code *pcVar4;
  bool bVar5;
  FEasyParticleRootState *pFVar6;
  FUIParticleFactory *pFVar7;
  EWidgetUpdateFlags EVar8;
  TRawPtrProxy<FEasyParticleRootState> TStackX_8;
  TSharedPtr<FEasyParticleRootState,1> TStack_28;
  
  if (this->bPlayParticle != param_1) {
    this->field_0x1d0 = this->field_0x1d0 & 0xfe | param_1;
    if (param_1) {
      this->bPlayParticle = '\x01';
      pSVar3 = (this->ParticleCanvas).Object;
      this->IsPlaying = true;
      if ((pSVar3 != (SUIParticleEmitter *)0x0) &&
         (pUVar2 = this->Asset, pUVar2 != (UUIParticleEmitterAsset *)0x0)) {
        this_00 = &pSVar3->RootEmitter;
        pFVar6 = this_00->Object;
        pSVar3->isActivity = false;
        if (pFVar6 == (FEasyParticleRootState *)0x0) {
          pFVar6 = ::operator_new(0x420);
          TStackX_8.Object = (FEasyParticleRootState *)0x0;
          if (pFVar6 != (FEasyParticleRootState *)0x0) {
            FEasyParticleState::FEasyParticleState((FEasyParticleState *)pFVar6);
            pFVar6->FirstRootTick = false;
            *(undefined ***)pFVar6 = &___7FEasyParticleRootState__6B_;
            pFVar6->field_0x3d8 = true;
            TStackX_8.Object = pFVar6;
          }
          TSharedPtr<FEasyParticleRootState,1>::operator=<FEasyParticleRootState>
                    (this_00,&TStackX_8);
          pFVar6 = (FEasyParticleRootState *)FUIParticleFactory::m_Instance;
          if ((FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) &&
             (pFVar7 = ::operator_new(0x30), pFVar6 = (FEasyParticleRootState *)0x0,
             pFVar7 != (FUIParticleFactory *)0x0)) {
            pFVar6 = (FEasyParticleRootState *)FUIParticleFactory::FUIParticleFactory(pFVar7);
          }
          FUIParticleFactory::m_Instance = (FUIParticleFactory *)pFVar6;
          pFVar7 = FUIParticleFactory::m_Instance;
          TStack_28.SharedReferenceCount.ReferenceController =
               (pSVar3->RootEmitter).SharedReferenceCount.ReferenceController;
          TStack_28.Object = this_00->Object;
          if (TStack_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (TStack_28.Object != (FEasyParticleRootState *)0x0) {
            TArray<TSharedPtr<FEasyParticleRootState,1>,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TSharedPtr<FEasyParticleRootState,1>_const_&>
                      (&pFVar7->ParticleRefArray,&TStack_28);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_28.SharedReferenceCount.ReferenceController);
          if ((this_00->Object == (FEasyParticleRootState *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar6 = this_00->Object;
        }
        FEasyParticleRootState::InitRoot(pFVar6,pUVar2,0.0,0);
        if (((this->ParticleCanvas).Object == (SUIParticleEmitter *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pSVar3 = (this->ParticleCanvas).Object;
        pFVar6 = (pSVar3->RootEmitter).Object;
        if (pFVar6 != (FEasyParticleRootState *)0x0) {
          FEasyParticleRootState::ResetRoot(pFVar6);
          EVar1 = *(EWidgetUpdateFlags *)&pSVar3->_padding_;
          EVar8 = EVar1 | NeedsTick;
          *(EWidgetUpdateFlags *)&pSVar3->_padding_ = EVar8;
          FWidgetProxyHandle::UpdateWidgetFlags
                    ((FWidgetProxyHandle *)&pSVar3->_padding_,(SWidget *)pSVar3,EVar1,EVar8);
          pSVar3->isActivity = true;
        }
      }
      return;
    }
    pSVar3 = (this->ParticleCanvas).Object;
    if ((pSVar3 != (SUIParticleEmitter *)0x0) &&
       (pFVar6 = (pSVar3->RootEmitter).Object, pFVar6 != (FEasyParticleRootState *)0x0)) {
      pFVar6->field_0x3d9 = 1;
    }
  }
  return;
}

// StaticRegisterNativesUUIParticleEmitter @ 14aca03e0

void __cdecl UUIParticleEmitter::StaticRegisterNativesUUIParticleEmitter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UUIParticleEmitter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Stop @ 14aca0700

void __thiscall UUIParticleEmitter::Stop(UUIParticleEmitter *this)

{
  EWidgetUpdateFlags EVar1;
  SUIParticleEmitter *pSVar2;
  FEasyParticleRootState *this_00;
  EWidgetUpdateFlags EVar3;
  
  this->bPlayParticle = '\0';
  pSVar2 = (this->ParticleCanvas).Object;
  this->IsPlaying = false;
  if (pSVar2 != (SUIParticleEmitter *)0x0) {
    this_00 = (pSVar2->RootEmitter).Object;
    if (this_00 != (FEasyParticleRootState *)0x0) {
      FEasyParticleRootState::ResetRoot(this_00);
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

// StopEmit @ 14aca0950

void __thiscall UUIParticleEmitter::StopEmit(UUIParticleEmitter *this)

{
  SUIParticleEmitter *pSVar1;
  FEasyParticleRootState *pFVar2;
  
  pSVar1 = (this->ParticleCanvas).Object;
  if ((pSVar1 != (SUIParticleEmitter *)0x0) &&
     (pFVar2 = (pSVar1->RootEmitter).Object, pFVar2 != (FEasyParticleRootState *)0x0)) {
    pFVar2->field_0x3d9 = 1;
  }
  return;
}

// execPlay @ 14aca3590

void __cdecl UUIParticleEmitter::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Play((UUIParticleEmitter *)param_1);
  return;
}

// execSetPlayParticle @ 14aca3770

void __cdecl UUIParticleEmitter::execSetPlayParticle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
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
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bool)(param_1[0xb].field_0x18 & 1) != bVar3) {
    param_1[0xb].field_0x18 = param_1[0xb].field_0x18 & 0xfe | bVar3;
    if (bVar3) {
      Play((UUIParticleEmitter *)param_1);
      return;
    }
    if ((*(longlong *)&param_1[0xb].field_0x20 != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)&param_1[0xb].field_0x20 + 0x220), lVar2 != 0)) {
      *(undefined1 *)(lVar2 + 0x3d9) = 1;
    }
  }
  return;
}

// execStop @ 14aca3950

void __cdecl UUIParticleEmitter::execStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  EWidgetUpdateFlags EVar1;
  SWidget *pSVar2;
  EWidgetUpdateFlags EVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xb].field_0x18 = param_1[0xb].field_0x18 & 0xfe;
  pSVar2 = *(SWidget **)&param_1[0xb].field_0x20;
  param_1[0xb].field_0x19 = 0;
  if (pSVar2 != (SWidget *)0x0) {
    if ((FEasyParticleRootState *)pSVar2[1]._padding_ != (FEasyParticleRootState *)0x0) {
      FEasyParticleRootState::ResetRoot((FEasyParticleRootState *)pSVar2[1]._padding_);
    }
    EVar1 = pSVar2->UpdateFlags;
    EVar3 = EVar1 & ~NeedsTick;
    pSVar2->UpdateFlags = EVar3;
    FWidgetProxyHandle::UpdateWidgetFlags(&pSVar2->FastPathProxyHandle,pSVar2,EVar1,EVar3);
    *(undefined1 *)&pSVar2[1]._padding_ = 0;
  }
  return;
}

// execStopEmit @ 14aca39f0

void __cdecl UUIParticleEmitter::execStopEmit(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0xb].field_0x20 != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)&param_1[0xb].field_0x20 + 0x220), lVar1 != 0)) {
    *(undefined1 *)(lVar1 + 0x3d9) = 1;
  }
  return;
}

