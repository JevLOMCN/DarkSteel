// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FQuartzSubscriptionToken @ 14733fb10

FQuartzSubscriptionToken * __thiscall
FQuartzSubscriptionToken::FQuartzSubscriptionToken(FQuartzSubscriptionToken *this)

{
  this->SubscribingObject = (FQuartzTickableObject *)0x0;
  (this->TickableObjectManagerPtr).Object = (FQuartzTickableObjectsManager *)0x0;
  (this->TickableObjectManagerPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FQuartzSubscriptionToken @ 147341c40

void __thiscall FQuartzSubscriptionToken::~FQuartzSubscriptionToken(FQuartzSubscriptionToken *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  Unsubscribe(this);
  pTVar3 = (this->TickableObjectManagerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000147341c73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// GetTickableObjectManager @ 147350ca0

TSharedPtr<FQuartzTickableObjectsManager,1> * __thiscall
FQuartzSubscriptionToken::GetTickableObjectManager
          (FQuartzSubscriptionToken *this,
          TSharedPtr<FQuartzTickableObjectsManager,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (FQuartzTickableObjectsManager *)0x0;
  pTVar1 = (this->TickableObjectManagerPtr).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->TickableObjectManagerPtr).Object;
  }
  return __return_storage_ptr__;
}

// IsSubscribed @ 1473519c0

bool __thiscall FQuartzSubscriptionToken::IsSubscribed(FQuartzSubscriptionToken *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->TickableObjectManagerPtr).Object != (FQuartzTickableObjectsManager *)0x0) &&
      (pTVar1 = (this->TickableObjectManagerPtr).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// Subscribe @ 147358dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FQuartzSubscriptionToken::Subscribe
          (FQuartzSubscriptionToken *this,FQuartzTickableObject *param_1,UQuartzSubsystem *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FQuartzTickableObjectsManager *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<int> aVar5;
  TWeakPtr<FQuartzTickableObjectsManager,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TWeakPtr<FQuartzTickableObjectsManager,1> local_18;
  
  if ((((this->TickableObjectManagerPtr).Object != (FQuartzTickableObjectsManager *)0x0) &&
      (pTVar7 = (this->TickableObjectManagerPtr).WeakReferenceCount.ReferenceController,
      pTVar7 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar7->SharedReferenceCount)) {
    return;
  }
  if (param_1 == (FQuartzTickableObject *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3977825811351732248>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzSubscriptionToken.cpp"
                       ,0x18,"Subscriber");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((byte)LogAudioQuartz._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    return;
  }
  this->SubscribingObject = param_1;
  if (param_2 == (UQuartzSubsystem *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3977825811351732258>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzSubscriptionToken.cpp"
                       ,0x22,"QuartzSubsystem");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((byte)LogAudioQuartz._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    return;
  }
  pTVar6 = UQuartzSubsystem::GetTickableObjectManager(param_2,&local_18);
  TWeakPtr<FQuartzTickableObjectsManager,1>::operator=(&this->TickableObjectManagerPtr,pTVar6);
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakReferenceCount.ReferenceController,1);
    }
  }
  pTVar7 = (this->TickableObjectManagerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147358f20;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar4 = aVar2 == aVar5;
      if (bVar4) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar4);
    this_00 = (this->TickableObjectManagerPtr).Object;
    if (this_00 != (FQuartzTickableObjectsManager *)0x0) {
      FQuartzTickableObjectsManager::SubscribeToQuartzTick(this_00,this->SubscribingObject);
      goto LAB_147358f3c;
    }
  }
LAB_147358f20:
  if (2 < (byte)LogAudioQuartz._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
  }
LAB_147358f3c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Unsubscribe @ 14735b100

void __thiscall FQuartzSubscriptionToken::Unsubscribe(FQuartzSubscriptionToken *this)

{
  TWeakPtr<FQuartzTickableObjectsManager,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined8 local_18 [2];
  
  pTVar6 = (this->TickableObjectManagerPtr).WeakReferenceCount.ReferenceController;
  pTVar1 = &this->TickableObjectManagerPtr;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14735b136;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar7);
    if (pTVar1->Object != (FQuartzTickableObjectsManager *)0x0) {
      FQuartzTickableObjectsManager::UnsubscribeFromQuartzTick
                (pTVar1->Object,this->SubscribingObject);
    }
  }
LAB_14735b136:
  this->SubscribingObject = (FQuartzTickableObject *)0x0;
  if (pTVar1 != (TWeakPtr<FQuartzTickableObjectsManager,1> *)local_18) {
    pTVar4 = (this->TickableObjectManagerPtr).WeakReferenceCount.ReferenceController;
    pTVar1->Object = (FQuartzTickableObjectsManager *)0x0;
    (this->TickableObjectManagerPtr).WeakReferenceCount.ReferenceController =
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

