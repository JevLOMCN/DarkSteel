// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 18

// StaticClass @ 1468dcad0

UClass * __cdecl UWidgetAnimationPlayCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetAnimationPlayCallbackProxy",
               &Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.InnerSingleton,
               StaticRegisterNativesUWidgetAnimationPlayCallbackProxy,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetAnimationPlayCallbackProxy>,
               InternalVTableHelperCtorCaller<UWidgetAnimationPlayCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.InnerSingleton;
}

// UWidgetAnimationPlayCallbackProxy @ 146902890

/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetAnimationPlayCallbackProxy * __thiscall
UWidgetAnimationPlayCallbackProxy::UWidgetAnimationPlayCallbackProxy
          (UWidgetAnimationPlayCallbackProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWidgetAnimationPlayCallbackProxy__6B_;
  *(undefined8 *)&this->Finished = 0;
  *(undefined8 *)&(this->Finished).field_0x8 = 0;
  *(undefined8 *)&(this->Finished).field_0x10 = 0;
  (this->WidgetAnimationHandle).WeakState.Object = (FWidgetAnimationState *)0x0;
  (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OnFinishedHandle).ID = 0;
  return this;
}

// UWidgetAnimationPlayCallbackProxy @ 1469028e0

/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetAnimationPlayCallbackProxy * __thiscall
UWidgetAnimationPlayCallbackProxy::UWidgetAnimationPlayCallbackProxy
          (UWidgetAnimationPlayCallbackProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWidgetAnimationPlayCallbackProxy__6B_;
  *(undefined8 *)&this->Finished = 0;
  *(undefined8 *)&(this->Finished).field_0x8 = 0;
  *(undefined8 *)&(this->Finished).field_0x10 = 0;
  (this->WidgetAnimationHandle).WeakState.Object = (FWidgetAnimationState *)0x0;
  (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OnFinishedHandle).ID = 0;
  return this;
}

// ~UWidgetAnimationPlayCallbackProxy @ 146905010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetAnimationPlayCallbackProxy::~UWidgetAnimationPlayCallbackProxy
          (UWidgetAnimationPlayCallbackProxy *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7UWidgetAnimationPlayCallbackProxy__6B_;
  pTVar3 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pvVar4 = *(void **)&(this->Finished).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Finished);
  UObject::~UObject((UObject *)this);
  return;
}

// CreatePlayAnimationProxyObject @ 146913200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidgetAnimationPlayCallbackProxy * __cdecl
UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject
          (UUMGSequencePlayer **param_1,UUserWidget *param_2,UWidgetAnimation *param_3,float param_4
          ,int param_5,Type param_6,float param_7)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  UWidgetAnimationPlayCallbackProxy *pUVar5;
  UUMGSequencePlayer *pUVar6;
  UUMGSequencePlayer *this;
  bool bVar7;
  FWidgetAnimationHandle local_18;
  
  local_18.WeakState.Object = (FWidgetAnimationState *)0x0;
  local_18.WeakState.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar5 = NewPlayAnimationProxyObject(&local_18,param_2,param_3,param_4,param_5,param_6,param_7);
  pUVar6 = (UUMGSequencePlayer *)0x0;
  pTVar3 = (pUVar5->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  this = pUVar6;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_1469132a3;
      }
      LOCK();
      aVar4 = pTVar3->SharedReferenceCount;
      bVar7 = aVar2 == aVar4;
      if (bVar7) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar7);
    this = (UUMGSequencePlayer *)(pUVar5->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (this != (UUMGSequencePlayer *)0x0) {
    pUVar6 = FWidgetAnimationState::GetOrCreateLegacyPlayer((FWidgetAnimationState *)this);
  }
LAB_1469132a3:
  *param_1 = pUVar6;
  if (local_18.WeakState.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_18.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakState.WeakReferenceCount.ReferenceController,1);
    }
  }
  return pUVar5;
}

// CreatePlayAnimationTimeRangeProxyObject @ 1469132f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidgetAnimationPlayCallbackProxy * __cdecl
UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject
          (UUMGSequencePlayer **param_1,UUserWidget *param_2,UWidgetAnimation *param_3,float param_4
          ,float param_5,int param_6,Type param_7,float param_8)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  UWidgetAnimationPlayCallbackProxy *pUVar5;
  UUMGSequencePlayer *pUVar6;
  UUMGSequencePlayer *this;
  bool bVar7;
  FWidgetAnimationHandle local_18;
  
  local_18.WeakState.Object = (FWidgetAnimationState *)0x0;
  local_18.WeakState.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar5 = NewPlayAnimationTimeRangeProxyObject
                     (&local_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  pUVar6 = (UUMGSequencePlayer *)0x0;
  pTVar3 = (pUVar5->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  this = pUVar6;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_146913399;
      }
      LOCK();
      aVar4 = pTVar3->SharedReferenceCount;
      bVar7 = aVar2 == aVar4;
      if (bVar7) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar7);
    this = (UUMGSequencePlayer *)(pUVar5->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (this != (UUMGSequencePlayer *)0x0) {
    pUVar6 = FWidgetAnimationState::GetOrCreateLegacyPlayer((FWidgetAnimationState *)this);
  }
LAB_146913399:
  *param_1 = pUVar6;
  if (local_18.WeakState.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_18.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakState.WeakReferenceCount.ReferenceController,1);
    }
  }
  return pUVar5;
}

// ExecutePlayAnimation @ 146918190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UWidgetAnimationPlayCallbackProxy::ExecutePlayAnimation
          (UWidgetAnimationPlayCallbackProxy *this,UUserWidget *param_1,UWidgetAnimation *param_2,
          float param_3,int param_4,Type param_5,float param_6)

{
  FWidgetAnimationHandle *pFVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  FWidgetAnimationHandle *pFVar6;
  FDelegateHandle FVar7;
  FWidgetAnimationState *pFVar8;
  bool bVar9;
  FWidgetAnimationHandle local_18;
  
  if (param_1 != (UUserWidget *)0x0) {
    pFVar6 = UUserWidget::PlayAnimation
                       (param_1,&local_18,param_2,param_3,param_4,param_5,param_6,false);
    pFVar1 = &this->WidgetAnimationHandle;
    pFVar8 = (FWidgetAnimationState *)0x0;
    if (pFVar1 != pFVar6) {
      (pFVar1->WeakState).Object = (pFVar6->WeakState).Object;
      (pFVar6->WeakState).Object = (FWidgetAnimationState *)0x0;
      pTVar4 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
      (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController =
           (pFVar6->WeakState).WeakReferenceCount.ReferenceController;
      (pFVar6->WeakState).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
    if (local_18.WeakState.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_18.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_18.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.WeakState.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar4 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar4->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return;
        }
        LOCK();
        aVar5 = pTVar4->SharedReferenceCount;
        bVar9 = aVar3 == aVar5;
        if (bVar9) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar9);
      pFVar8 = (pFVar1->WeakState).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pFVar8 != (FWidgetAnimationState *)0x0) {
      FVar7 = TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
              ::AddUObject<UWidgetAnimationPlayCallbackProxy>
                        ((TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
                          *)&pFVar8->OnWidgetAnimationFinishedEvent,
                         (UWidgetAnimationPlayCallbackProxy *)&stack0x00000010,(pmf_eac43018)this);
                    /* WARNING: Load size is inaccurate */
      (this->OnFinishedHandle).ID = *FVar7.ID;
    }
  }
  return;
}

// ExecutePlayAnimationTimeRange @ 1469182d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UWidgetAnimationPlayCallbackProxy::ExecutePlayAnimationTimeRange
          (UWidgetAnimationPlayCallbackProxy *this,UUserWidget *param_1,UWidgetAnimation *param_2,
          float param_3,float param_4,int param_5,Type param_6,float param_7)

{
  FWidgetAnimationHandle *pFVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  FWidgetAnimationHandle *pFVar6;
  FDelegateHandle FVar7;
  FWidgetAnimationState *pFVar8;
  bool bVar9;
  FWidgetAnimationHandle local_18;
  
  if (param_1 != (UUserWidget *)0x0) {
    pFVar6 = UUserWidget::PlayAnimationTimeRange
                       (param_1,&local_18,param_2,param_3,param_4,param_5,param_6,param_7,false);
    pFVar1 = &this->WidgetAnimationHandle;
    pFVar8 = (FWidgetAnimationState *)0x0;
    if (pFVar1 != pFVar6) {
      (pFVar1->WeakState).Object = (pFVar6->WeakState).Object;
      (pFVar6->WeakState).Object = (FWidgetAnimationState *)0x0;
      pTVar4 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
      (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController =
           (pFVar6->WeakState).WeakReferenceCount.ReferenceController;
      (pFVar6->WeakState).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
    if (local_18.WeakState.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_18.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_18.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.WeakState.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar4 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar4->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return;
        }
        LOCK();
        aVar5 = pTVar4->SharedReferenceCount;
        bVar9 = aVar3 == aVar5;
        if (bVar9) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar9);
      pFVar8 = (pFVar1->WeakState).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pFVar8 != (FWidgetAnimationState *)0x0) {
      FVar7 = TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
              ::AddUObject<UWidgetAnimationPlayCallbackProxy>
                        ((TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
                          *)&pFVar8->OnWidgetAnimationFinishedEvent,
                         (UWidgetAnimationPlayCallbackProxy *)&stack0x00000010,(pmf_eac43018)this);
                    /* WARNING: Load size is inaccurate */
      (this->OnFinishedHandle).ID = *FVar7.ID;
    }
  }
  return;
}

// GetPrivateStaticClass @ 1469234b0

UClass * __cdecl UWidgetAnimationPlayCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetAnimationPlayCallbackProxy",
               &Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.InnerSingleton,
               StaticRegisterNativesUWidgetAnimationPlayCallbackProxy,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetAnimationPlayCallbackProxy>,
               InternalVTableHelperCtorCaller<UWidgetAnimationPlayCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.InnerSingleton;
}

// NewPlayAnimationProxyObject @ 14692df60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidgetAnimationPlayCallbackProxy * __cdecl
UWidgetAnimationPlayCallbackProxy::NewPlayAnimationProxyObject
          (FWidgetAnimationHandle *param_1,UUserWidget *param_2,UWidgetAnimation *param_3,
          float param_4,int param_5,Type param_6,float param_7)

{
  FWidgetAnimationHandle *pFVar1;
  int *piVar2;
  atomic<int> *paVar3;
  int iVar4;
  atomic<int> aVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  FWeakReferencer<1> *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  atomic<int> aVar10;
  UObject *pUVar11;
  pmf_eac43018 this;
  FWidgetAnimationHandle *pFVar12;
  FDelegateHandle FVar13;
  FWidgetAnimationState *pFVar14;
  bool bVar15;
  FWidgetAnimationHandle local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pUVar11 = GetTransientPackageAsObject();
  this = (pmf_eac43018)NewObject<UWidgetAnimationPlayCallbackProxy>(pUVar11);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  if (param_2 != (UUserWidget *)0x0) {
    pFVar12 = UUserWidget::PlayAnimation
                        (param_2,&local_48,param_3,param_4,param_5,param_6,param_7,false);
    pFVar1 = (FWidgetAnimationHandle *)((longlong)this + 0x40);
    pFVar14 = (FWidgetAnimationState *)0x0;
    if (pFVar1 != pFVar12) {
      (pFVar1->WeakState).Object = (pFVar12->WeakState).Object;
      (pFVar12->WeakState).Object = (FWidgetAnimationState *)0x0;
      plVar6 = *(longlong **)((longlong)this + 0x48);
      *(TReferenceControllerBase<1> **)((longlong)this + 0x48) =
           (pFVar12->WeakState).WeakReferenceCount.ReferenceController;
      (pFVar12->WeakState).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (local_48.WeakState.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &(local_48.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)((local_48.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_48.WeakState.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 0x48);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar7->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14692e0c4;
        }
        LOCK();
        aVar10 = pTVar7->SharedReferenceCount;
        bVar15 = aVar5 == aVar10;
        if (bVar15) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar10 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar10;
      } while (!bVar15);
      pFVar14 = (pFVar1->WeakState).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if (pFVar14 != (FWidgetAnimationState *)0x0) {
      FVar13 = TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
               ::AddUObject<UWidgetAnimationPlayCallbackProxy>
                         ((TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
                           *)&pFVar14->OnWidgetAnimationFinishedEvent,
                          (UWidgetAnimationPlayCallbackProxy *)&stack0x00000008,this);
      *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)FVar13.ID;
    }
  }
LAB_14692e0c4:
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 0x48);
  pFVar14 = *(FWidgetAnimationState **)((longlong)this + 0x40);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_38 = *(undefined4 *)&(param_1->WeakState).Object;
  uStack_34 = *(undefined4 *)((longlong)&(param_1->WeakState).Object + 4);
  pFVar8 = &(param_1->WeakState).WeakReferenceCount;
  uStack_30 = *(undefined4 *)&pFVar8->ReferenceController;
  uStack_2c = *(undefined4 *)
               ((longlong)&(param_1->WeakState).WeakReferenceCount.ReferenceController + 4);
  pTVar9 = pFVar8->ReferenceController;
  (param_1->WeakState).Object = pFVar14;
  (param_1->WeakState).WeakReferenceCount.ReferenceController = pTVar7;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &pTVar9->WeakReferenceCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  return (UWidgetAnimationPlayCallbackProxy *)this;
}

// NewPlayAnimationTimeRangeProxyObject @ 14692e130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidgetAnimationPlayCallbackProxy * __cdecl
UWidgetAnimationPlayCallbackProxy::NewPlayAnimationTimeRangeProxyObject
          (FWidgetAnimationHandle *param_1,UUserWidget *param_2,UWidgetAnimation *param_3,
          float param_4,float param_5,int param_6,Type param_7,float param_8)

{
  FWidgetAnimationHandle *pFVar1;
  int *piVar2;
  atomic<int> *paVar3;
  int iVar4;
  atomic<int> aVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  FWeakReferencer<1> *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  atomic<int> aVar10;
  UObject *pUVar11;
  pmf_eac43018 this;
  FWidgetAnimationHandle *pFVar12;
  FDelegateHandle FVar13;
  FWidgetAnimationState *pFVar14;
  bool bVar15;
  FWidgetAnimationHandle local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pUVar11 = GetTransientPackageAsObject();
  this = (pmf_eac43018)NewObject<UWidgetAnimationPlayCallbackProxy>(pUVar11);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  if (param_2 != (UUserWidget *)0x0) {
    pFVar12 = UUserWidget::PlayAnimationTimeRange
                        (param_2,&local_48,param_3,param_4,param_5,param_6,param_7,param_8,false);
    pFVar1 = (FWidgetAnimationHandle *)((longlong)this + 0x40);
    pFVar14 = (FWidgetAnimationState *)0x0;
    if (pFVar1 != pFVar12) {
      (pFVar1->WeakState).Object = (pFVar12->WeakState).Object;
      (pFVar12->WeakState).Object = (FWidgetAnimationState *)0x0;
      plVar6 = *(longlong **)((longlong)this + 0x48);
      *(TReferenceControllerBase<1> **)((longlong)this + 0x48) =
           (pFVar12->WeakState).WeakReferenceCount.ReferenceController;
      (pFVar12->WeakState).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (local_48.WeakState.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &(local_48.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)((local_48.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_48.WeakState.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 0x48);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar7->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14692e2a4;
        }
        LOCK();
        aVar10 = pTVar7->SharedReferenceCount;
        bVar15 = aVar5 == aVar10;
        if (bVar15) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar10 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar10;
      } while (!bVar15);
      pFVar14 = (pFVar1->WeakState).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if (pFVar14 != (FWidgetAnimationState *)0x0) {
      FVar13 = TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
               ::AddUObject<UWidgetAnimationPlayCallbackProxy>
                         ((TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
                           *)&pFVar14->OnWidgetAnimationFinishedEvent,
                          (UWidgetAnimationPlayCallbackProxy *)&stack0x00000008,this);
      *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)FVar13.ID;
    }
  }
LAB_14692e2a4:
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 0x48);
  pFVar14 = *(FWidgetAnimationState **)((longlong)this + 0x40);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_38 = *(undefined4 *)&(param_1->WeakState).Object;
  uStack_34 = *(undefined4 *)((longlong)&(param_1->WeakState).Object + 4);
  pFVar8 = &(param_1->WeakState).WeakReferenceCount;
  uStack_30 = *(undefined4 *)&pFVar8->ReferenceController;
  uStack_2c = *(undefined4 *)
               ((longlong)&(param_1->WeakState).WeakReferenceCount.ReferenceController + 4);
  pTVar9 = pFVar8->ReferenceController;
  (param_1->WeakState).Object = pFVar14;
  (param_1->WeakState).WeakReferenceCount.ReferenceController = pTVar7;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &pTVar9->WeakReferenceCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  return (UWidgetAnimationPlayCallbackProxy *)this;
}

// OnAnimationFinished @ 14692e4a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWidgetAnimationPlayCallbackProxy::OnAnimationFinished
          (UWidgetAnimationPlayCallbackProxy *this,float param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->Finished,(void *)0x0);
  return false;
}

// OnSequenceFinished @ 14692fce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetAnimationPlayCallbackProxy::OnSequenceFinished
          (UWidgetAnimationPlayCallbackProxy *this,FWidgetAnimationState *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  FTSTicker *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  UWidgetAnimationPlayCallbackProxy *local_res8;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  FVar3.ID = (this->OnFinishedHandle).ID;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->OnWidgetAnimationFinishedEvent,FVar3);
  }
  this_00 = FTSTicker::GetCoreTicker();
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUWidgetAnimationPlayCallbackProxy____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = OnAnimationFinished;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  FTSTicker::AddTicker
            (this_00,&local_68,(TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_58
             ,0.0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_68.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// StaticRegisterNativesUWidgetAnimationPlayCallbackProxy @ 146945c40

void __cdecl
UWidgetAnimationPlayCallbackProxy::StaticRegisterNativesUWidgetAnimationPlayCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreatePlayAnimationProxyObject @ 146950d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetAnimationPlayCallbackProxy::execCreatePlayAnimationProxyObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FWidgetAnimationHandle *pFVar1;
  int *piVar2;
  atomic<int> *paVar3;
  FField **ppFVar4;
  int iVar5;
  atomic<int> aVar6;
  FProperty *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong *plVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  UWidgetAnimation *pUVar13;
  UUserWidget *this;
  uchar *puVar14;
  atomic<int> aVar15;
  UObject *pUVar16;
  pmf_eac43018 this_00;
  FWidgetAnimationHandle *pFVar17;
  FDelegateHandle FVar18;
  UUMGSequencePlayer *pUVar19;
  UUMGSequencePlayer *pUVar20;
  bool bVar21;
  byte local_res10 [8];
  pmf_eac43018 *local_res18;
  float local_res20 [2];
  int local_98;
  float local_94;
  uchar local_90 [8];
  UWidgetAnimation *local_88;
  UUserWidget *local_80;
  uchar *local_78;
  FWidgetAnimationHandle local_70 [3];
  
  pUVar19 = (UUMGSequencePlayer *)0x0;
  ppFVar4 = &param_2->PropertyChainForCompiledIn;
  local_90[0] = '\0';
  local_90[1] = '\0';
  local_90[2] = '\0';
  local_90[3] = '\0';
  local_90[4] = '\0';
  local_90[5] = '\0';
  local_90[6] = '\0';
  local_90[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_res18 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_90,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_90);
  }
  local_80 = (UUserWidget *)0x0;
  local_78 = local_90;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_78 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_88 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_94 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_94,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_94);
  }
  local_98 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  this = local_80;
  pUVar13 = local_88;
  fVar12 = local_94;
  iVar5 = local_98;
  fVar11 = local_res20[0];
  bVar10 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar16 = GetTransientPackageAsObject();
  this_00 = (pmf_eac43018)NewObject<UWidgetAnimationPlayCallbackProxy>(pUVar16);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_StrongRefOnFrame);
  if (this != (UUserWidget *)0x0) {
    pFVar17 = UUserWidget::PlayAnimation
                        (this,local_70,pUVar13,fVar12,iVar5,(uint)bVar10,fVar11,false);
    pFVar1 = (FWidgetAnimationHandle *)((longlong)this_00 + 0x40);
    if (pFVar1 != pFVar17) {
      (pFVar1->WeakState).Object = (pFVar17->WeakState).Object;
      pTVar8 = (pFVar17->WeakState).WeakReferenceCount.ReferenceController;
      (pFVar17->WeakState).Object = (FWidgetAnimationState *)0x0;
      plVar9 = *(longlong **)((longlong)this_00 + 0x48);
      *(TReferenceControllerBase<1> **)((longlong)this_00 + 0x48) = pTVar8;
      (pFVar17->WeakState).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (local_70[0].WeakState.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &(local_70[0].WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar6 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        (**(code **)((local_70[0].WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_70[0].WeakState.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this_00 + 0x48);
    pUVar20 = pUVar19;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = pTVar8->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_146951088;
        }
        LOCK();
        aVar15 = pTVar8->SharedReferenceCount;
        bVar21 = aVar6 == aVar15;
        if (bVar21) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar15 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar15;
      } while (!bVar21);
      pUVar20 = (UUMGSequencePlayer *)(pFVar1->WeakState).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if (pUVar20 != (UUMGSequencePlayer *)0x0) {
      FVar18 = TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
               ::AddUObject<UWidgetAnimationPlayCallbackProxy>
                         ((TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
                           *)&pUVar20->_padding_,(UWidgetAnimationPlayCallbackProxy *)local_70,
                          this_00);
      *(undefined8 *)((longlong)this_00 + 0x50) = *(undefined8 *)FVar18.ID;
    }
  }
LAB_146951088:
  plVar9 = *(longlong **)((longlong)this_00 + 0x48);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
    UNLOCK();
  }
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this_00 + 0x48);
  pUVar20 = pUVar19;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar8->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_1469510e3;
      }
      LOCK();
      aVar15 = pTVar8->SharedReferenceCount;
      bVar21 = aVar6 == aVar15;
      if (bVar21) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar15 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar15;
    } while (!bVar21);
    pUVar20 = *(UUMGSequencePlayer **)((longlong)this_00 + 0x40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (pUVar20 != (UUMGSequencePlayer *)0x0) {
    pUVar19 = FWidgetAnimationState::GetOrCreateLegacyPlayer((FWidgetAnimationState *)pUVar20);
  }
LAB_1469510e3:
  puVar14 = local_78;
  *(UUMGSequencePlayer **)local_78 = pUVar19;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  *local_res18 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar14);
  }
  return;
}

// execCreatePlayAnimationTimeRangeProxyObject @ 146951150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetAnimationPlayCallbackProxy::execCreatePlayAnimationTimeRangeProxyObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FWidgetAnimationHandle *pFVar1;
  int *piVar2;
  atomic<int> *paVar3;
  FField **ppFVar4;
  int iVar5;
  atomic<int> aVar6;
  FProperty *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong *plVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UWidgetAnimation *pUVar14;
  UUserWidget *this;
  uchar *puVar15;
  atomic<int> aVar16;
  UObject *pUVar17;
  pmf_eac43018 this_00;
  FWidgetAnimationHandle *pFVar18;
  FDelegateHandle FVar19;
  UUMGSequencePlayer *pUVar20;
  UUMGSequencePlayer *pUVar21;
  bool bVar22;
  byte local_res10 [8];
  pmf_eac43018 *local_res18;
  float local_res20 [2];
  int local_a8;
  float local_a4;
  float local_a0 [2];
  uchar local_98 [8];
  UWidgetAnimation *local_90;
  UUserWidget *local_88;
  uchar *local_80;
  FWidgetAnimationHandle local_78 [4];
  
  pUVar20 = (UUMGSequencePlayer *)0x0;
  ppFVar4 = &param_2->PropertyChainForCompiledIn;
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_res18 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_88 = (UUserWidget *)0x0;
  local_80 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_80 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_90 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_a0[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  local_a4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  local_a8 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  this = local_88;
  pUVar14 = local_90;
  fVar13 = local_a0[0];
  fVar12 = local_a4;
  iVar5 = local_a8;
  fVar11 = local_res20[0];
  bVar10 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar17 = GetTransientPackageAsObject();
  this_00 = (pmf_eac43018)NewObject<UWidgetAnimationPlayCallbackProxy>(pUVar17);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_StrongRefOnFrame);
  if (this != (UUserWidget *)0x0) {
    pFVar18 = UUserWidget::PlayAnimationTimeRange
                        (this,local_78,pUVar14,fVar13,fVar12,iVar5,(uint)bVar10,fVar11,false);
    pFVar1 = (FWidgetAnimationHandle *)((longlong)this_00 + 0x40);
    if (pFVar1 != pFVar18) {
      (pFVar1->WeakState).Object = (pFVar18->WeakState).Object;
      pTVar8 = (pFVar18->WeakState).WeakReferenceCount.ReferenceController;
      (pFVar18->WeakState).Object = (FWidgetAnimationState *)0x0;
      plVar9 = *(longlong **)((longlong)this_00 + 0x48);
      *(TReferenceControllerBase<1> **)((longlong)this_00 + 0x48) = pTVar8;
      (pFVar18->WeakState).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (local_78[0].WeakState.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &(local_78[0].WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar6 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        (**(code **)((local_78[0].WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_78[0].WeakState.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this_00 + 0x48);
    pUVar21 = pUVar20;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = pTVar8->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14695148d;
        }
        LOCK();
        aVar16 = pTVar8->SharedReferenceCount;
        bVar22 = aVar6 == aVar16;
        if (bVar22) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar16 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar16;
      } while (!bVar22);
      pUVar21 = (UUMGSequencePlayer *)(pFVar1->WeakState).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if (pUVar21 != (UUMGSequencePlayer *)0x0) {
      FVar19 = TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
               ::AddUObject<UWidgetAnimationPlayCallbackProxy>
                         ((TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
                           *)&pUVar21->_padding_,(UWidgetAnimationPlayCallbackProxy *)local_78,
                          this_00);
      *(undefined8 *)((longlong)this_00 + 0x50) = *(undefined8 *)FVar19.ID;
    }
  }
LAB_14695148d:
  plVar9 = *(longlong **)((longlong)this_00 + 0x48);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
    UNLOCK();
  }
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this_00 + 0x48);
  pUVar21 = pUVar20;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar8->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_1469514e3;
      }
      LOCK();
      aVar16 = pTVar8->SharedReferenceCount;
      bVar22 = aVar6 == aVar16;
      if (bVar22) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar16 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar16;
    } while (!bVar22);
    pUVar21 = *(UUMGSequencePlayer **)((longlong)this_00 + 0x40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (pUVar21 != (UUMGSequencePlayer *)0x0) {
    pUVar20 = FWidgetAnimationState::GetOrCreateLegacyPlayer((FWidgetAnimationState *)pUVar21);
  }
LAB_1469514e3:
  puVar15 = local_80;
  *(UUMGSequencePlayer **)local_80 = pUVar20;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  *local_res18 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar15 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar15);
  }
  return;
}

// execNewPlayAnimationProxyObject @ 146953b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetAnimationPlayCallbackProxy::execNewPlayAnimationProxyObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FWidgetAnimationHandle *pFVar1;
  int *piVar2;
  atomic<int> *paVar3;
  FField **ppFVar4;
  int iVar5;
  atomic<int> aVar6;
  FProperty *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  UWidgetAnimation *pUVar15;
  UUserWidget *this;
  uchar *puVar16;
  uchar *puVar17;
  atomic<int> aVar18;
  UObject *pUVar19;
  pmf_eac43018 this_00;
  FWidgetAnimationHandle *pFVar20;
  FDelegateHandle FVar21;
  FWidgetAnimationState *pFVar22;
  bool bVar23;
  byte local_res10 [8];
  pmf_eac43018 *local_res18;
  float local_res20 [2];
  int local_a8;
  float local_a4;
  UWidgetAnimation *local_a0;
  UUserWidget *local_98;
  uchar local_90 [8];
  longlong *plStack_88;
  uchar *local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  FWidgetAnimationHandle local_68 [3];
  
  pFVar22 = (FWidgetAnimationState *)0x0;
  ppFVar4 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_90[0] = '\0';
  local_90[1] = '\0';
  local_90[2] = '\0';
  local_90[3] = '\0';
  local_90[4] = '\0';
  local_90[5] = '\0';
  local_90[6] = '\0';
  local_90[7] = '\0';
  plStack_88 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_res18 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_90,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_90);
  }
  local_98 = (UUserWidget *)0x0;
  local_80 = local_90;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_80 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a0 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_a4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  local_a8 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  this = local_98;
  pUVar15 = local_a0;
  fVar14 = local_a4;
  iVar5 = local_a8;
  fVar13 = local_res20[0];
  bVar12 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar19 = GetTransientPackageAsObject();
  this_00 = (pmf_eac43018)NewObject<UWidgetAnimationPlayCallbackProxy>(pUVar19);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_StrongRefOnFrame);
  if (this != (UUserWidget *)0x0) {
    pFVar20 = UUserWidget::PlayAnimation
                        (this,local_68,pUVar15,fVar14,iVar5,(uint)bVar12,fVar13,false);
    pFVar1 = (FWidgetAnimationHandle *)((longlong)this_00 + 0x40);
    if (pFVar1 != pFVar20) {
      (pFVar1->WeakState).Object = (pFVar20->WeakState).Object;
      pTVar8 = (pFVar20->WeakState).WeakReferenceCount.ReferenceController;
      (pFVar20->WeakState).Object = (FWidgetAnimationState *)0x0;
      plVar9 = *(longlong **)((longlong)this_00 + 0x48);
      *(TReferenceControllerBase<1> **)((longlong)this_00 + 0x48) = pTVar8;
      (pFVar20->WeakState).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (local_68[0].WeakState.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &(local_68[0].WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar6 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        (**(code **)((local_68[0].WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_68[0].WeakState.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this_00 + 0x48);
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = pTVar8->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_146953e88;
        }
        LOCK();
        aVar18 = pTVar8->SharedReferenceCount;
        bVar23 = aVar6 == aVar18;
        if (bVar23) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar18 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar18;
      } while (!bVar23);
      pFVar22 = (pFVar1->WeakState).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if (pFVar22 != (FWidgetAnimationState *)0x0) {
      FVar21 = TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
               ::AddUObject<UWidgetAnimationPlayCallbackProxy>
                         ((TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
                           *)&pFVar22->OnWidgetAnimationFinishedEvent,
                          (UWidgetAnimationPlayCallbackProxy *)&stack0xffffffffffffff90,this_00);
      *(undefined8 *)((longlong)this_00 + 0x50) = *(undefined8 *)FVar21.ID;
    }
  }
LAB_146953e88:
  puVar16 = local_80;
  lVar10 = *(longlong *)((longlong)this_00 + 0x48);
  uVar11 = *(undefined8 *)((longlong)this_00 + 0x40);
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
    UNLOCK();
  }
  uStack_78 = *(undefined4 *)(local_80 + 8);
  uStack_74 = *(undefined4 *)(local_80 + 0xc);
  puVar17 = (uchar *)*(undefined8 *)local_80;
  *(undefined8 *)local_80 = uVar11;
  local_80 = puVar17;
  *(longlong *)(puVar16 + 8) = lVar10;
  plVar9 = (longlong *)CONCAT44(uStack_74,uStack_78);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  *local_res18 = this_00;
  if (plStack_88 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_88 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plStack_88 + 8))(plStack_88,1);
    }
  }
  return;
}

// execNewPlayAnimationTimeRangeProxyObject @ 146953f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetAnimationPlayCallbackProxy::execNewPlayAnimationTimeRangeProxyObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FWidgetAnimationHandle *pFVar1;
  int *piVar2;
  atomic<int> *paVar3;
  FField **ppFVar4;
  int iVar5;
  atomic<int> aVar6;
  FProperty *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UWidgetAnimation *pUVar16;
  UUserWidget *this;
  uchar *puVar17;
  uchar *puVar18;
  atomic<int> aVar19;
  UObject *pUVar20;
  pmf_eac43018 this_00;
  FWidgetAnimationHandle *pFVar21;
  FDelegateHandle FVar22;
  FWidgetAnimationState *pFVar23;
  bool bVar24;
  byte local_res10 [8];
  pmf_eac43018 *local_res18;
  float local_res20 [2];
  int local_c8;
  float local_c4;
  float local_c0 [2];
  UWidgetAnimation *local_b8;
  UUserWidget *local_b0;
  uchar local_a8 [8];
  longlong *plStack_a0;
  uchar *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FWidgetAnimationHandle local_80 [4];
  
  pFVar23 = (FWidgetAnimationState *)0x0;
  ppFVar4 = &param_2->PropertyChainForCompiledIn;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  plStack_a0 = (longlong *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_res18 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_b0 = (UUserWidget *)0x0;
  local_98 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_98 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_c0[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c0,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c0);
  }
  local_c4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c4,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c4);
  }
  local_c8 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar4;
    *ppFVar4 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  this = local_b0;
  pUVar16 = local_b8;
  fVar15 = local_c0[0];
  fVar14 = local_c4;
  iVar5 = local_c8;
  fVar13 = local_res20[0];
  bVar12 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar20 = GetTransientPackageAsObject();
  this_00 = (pmf_eac43018)NewObject<UWidgetAnimationPlayCallbackProxy>(pUVar20);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_StrongRefOnFrame);
  if (this != (UUserWidget *)0x0) {
    pFVar21 = UUserWidget::PlayAnimationTimeRange
                        (this,local_80,pUVar16,fVar15,fVar14,iVar5,(uint)bVar12,fVar13,false);
    pFVar1 = (FWidgetAnimationHandle *)((longlong)this_00 + 0x40);
    if (pFVar1 != pFVar21) {
      (pFVar1->WeakState).Object = (pFVar21->WeakState).Object;
      pTVar8 = (pFVar21->WeakState).WeakReferenceCount.ReferenceController;
      (pFVar21->WeakState).Object = (FWidgetAnimationState *)0x0;
      plVar9 = *(longlong **)((longlong)this_00 + 0x48);
      *(TReferenceControllerBase<1> **)((longlong)this_00 + 0x48) = pTVar8;
      (pFVar21->WeakState).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (local_80[0].WeakState.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &(local_80[0].WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar6 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        (**(code **)((local_80[0].WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_80[0].WeakState.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this_00 + 0x48);
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = pTVar8->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14695425d;
        }
        LOCK();
        aVar19 = pTVar8->SharedReferenceCount;
        bVar24 = aVar6 == aVar19;
        if (bVar24) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar19 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar19;
      } while (!bVar24);
      pFVar23 = (pFVar1->WeakState).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if (pFVar23 != (FWidgetAnimationState *)0x0) {
      FVar22 = TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
               ::AddUObject<UWidgetAnimationPlayCallbackProxy>
                         ((TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
                           *)&pFVar23->OnWidgetAnimationFinishedEvent,
                          (UWidgetAnimationPlayCallbackProxy *)&stack0xffffffffffffff78,this_00);
      *(undefined8 *)((longlong)this_00 + 0x50) = *(undefined8 *)FVar22.ID;
    }
  }
LAB_14695425d:
  puVar17 = local_98;
  lVar10 = *(longlong *)((longlong)this_00 + 0x48);
  uVar11 = *(undefined8 *)((longlong)this_00 + 0x40);
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
    UNLOCK();
  }
  uStack_90 = *(undefined4 *)(local_98 + 8);
  uStack_8c = *(undefined4 *)(local_98 + 0xc);
  puVar18 = (uchar *)*(undefined8 *)local_98;
  *(undefined8 *)local_98 = uVar11;
  local_98 = puVar18;
  *(longlong *)(puVar17 + 8) = lVar10;
  plVar9 = (longlong *)CONCAT44(uStack_8c,uStack_90);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  *local_res18 = this_00;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_a0 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
    }
  }
  return;
}

