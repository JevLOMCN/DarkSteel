// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b5af6c0

UClass * __cdecl UDS_SyncSendComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendComponent",
               &Z_Registration_Info_UClass_UDS_SyncSendComponent.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendComponent,0x360,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendComponent>,
               InternalVTableHelperCtorCaller<UDS_SyncSendComponent>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendComponent.InnerSingleton;
}

// UDS_SyncSendComponent @ 14b5b1f30

UDS_SyncSendComponent * __thiscall
UDS_SyncSendComponent::UDS_SyncSendComponent(UDS_SyncSendComponent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SyncSendComponent__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerEntityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SyncSendList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SyncSendList).ArrayNum = 0;
  (this->SyncSendList).ArrayMax = 0;
  (this->PrevSyncSend).WeakPtr = (FWeakObjectPtr)0x0;
  FDS_NetSyncData::FDS_NetSyncData(&this->SyncData);
  return this;
}

// ~UDS_SyncSendComponent @ 14b5b2930

void __thiscall UDS_SyncSendComponent::~UDS_SyncSendComponent(UDS_SyncSendComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_SyncSendComponent__6B_;
  pFVar1 = (this->SyncData).HeightMoveDataList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SyncSendList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4a30

UClass * __cdecl UDS_SyncSendComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendComponent",
               &Z_Registration_Info_UClass_UDS_SyncSendComponent.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendComponent,0x360,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendComponent>,
               InternalVTableHelperCtorCaller<UDS_SyncSendComponent>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendComponent @ 14b5b5970

void __cdecl UDS_SyncSendComponent::StaticRegisterNativesUDS_SyncSendComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_SyncSendComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedLoadingPhase @ 14b5b76a0

void __cdecl
UDS_SyncSendComponent::execOnChangedLoadingPhase(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDS_LoadingPhase local_res10 [2];
  
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedLoadingPhase((UDS_SyncSendComponent *)param_1,local_res10[0]);
  return;
}

// UDS_SyncSendComponent @ 14bba9770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_SyncSendComponent * __thiscall
UDS_SyncSendComponent::UDS_SyncSendComponent
          (UDS_SyncSendComponent *this,FObjectInitializer *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr *pFVar5;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar6;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar7;
  UDS_EventManager *this_00;
  UDS_LogManager *pUVar8;
  UDS_LoadingEvent *pUVar9;
  FWeakObjectPtr FVar10;
  FWeakObjectPtr FVar11;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_178;
  FWeakObjectPtr local_170;
  undefined1 local_168 [280];
  TVector<double>_u_0 local_50;
  undefined8 local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UObject::UObject((UObject *)this,param_1);
  FVar11.ObjectIndex = 0;
  FVar11.ObjectSerialNumber = 0;
  this->_padding_ = (longlong)&___7UDS_SyncSendComponent__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerEntityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SyncSendList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SyncSendList).ArrayNum = 0;
  (this->SyncSendList).ArrayMax = 0;
  (this->PrevSyncSend).WeakPtr = (FWeakObjectPtr)0x0;
  FDS_NetSyncData::FDS_NetSyncData(&this->SyncData);
  FVar10 = (FWeakObjectPtr)this->_padding_;
  this->bIsInitSync = false;
  this->bIsLoadingEnd = false;
  this->bSendPacketAtOnce = false;
  if (FVar10 != (FWeakObjectPtr)0x0) {
    pUVar3 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14bba9813;
  }
  FVar10 = FVar11;
LAB_14bba9813:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar10 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar10);
  }
  local_178.ObjectIndex = 0;
  local_178.ObjectSerialNumber = 0;
  local_170 = FVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar10 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar10);
  }
  FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_170);
  bVar2 = FWeakObjectPtr::IsValid(&local_178);
  if (bVar2) {
    local_170 = local_178;
    bVar2 = FWeakObjectPtr::IsValid(&local_170);
    if (bVar2) {
      (this->OwnerActor).WeakPtr = local_170;
      bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        pFVar5 = (FWeakObjectPtr *)
                 (**(code **)(*(longlong *)&pUVar4[0x29].field_0x10 + 0x78))
                           (&pUVar4[0x29].field_0x10,local_168);
        (this->OwnerMovementCore).WeakPtr = *pFVar5;
        bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerMovementCore).WeakPtr);
        if (bVar2) {
          FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
          TVar6 = UDS_CharStateData::GetData((ulong64)local_168);
                    /* WARNING: Load size is inaccurate */
          (this->OwnerCharStateData).WeakPtr = *TVar6.WeakPtr;
          bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerCharStateData).WeakPtr);
          if (bVar2) {
            pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
            TVar7 = UDS_EntityData::GetData((ulong64)local_168,*(ulong64 *)&pUVar4[0x29].field_0x18)
            ;
                    /* WARNING: Load size is inaccurate */
            (this->OwnerEntityData).WeakPtr = *TVar7.WeakPtr;
            bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerEntityData).WeakPtr);
            if (bVar2) {
              InitializeSyncSendList(this);
              this_00 = UDS_EventManager::GetInst();
              if (this_00 != (UDS_EventManager *)0x0) {
                if ((char)this_00->_padding_ == '\x01') {
                  pUVar8 = UDS_LogManager::GetInst();
                  if (pUVar8 != (UDS_LogManager *)0x0) {
                    pUVar8 = UDS_LogManager::GetInst();
                    local_168._272_8_ = (void *)0x0;
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)
                               (local_168 + 0x10),"UDS_EventManager::GetEvent",0x1a,Yes);
                    UDS_LogManager::PrintLog
                              (pUVar8,1,Warning,(wchar_t *)local_50._s_0.X,0x31,
                               L"Cannot access event during UDS_EventManager destruction.");
                    if ((void *)local_168._272_8_ != (void *)0x0) {
                      FMemory::Free((void *)local_168._272_8_);
                    }
                  }
                }
                else {
                  pUVar9 = UDS_EventManager::GetEventInternal<UDS_LoadingEvent>(this_00);
                  if (pUVar9 != (UDS_LoadingEvent *)0x0) {
                    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &pUVar9->LoadingPhaseDelegate,this);
                    TMulticastDelegateRegistration<void___cdecl(enum_EDS_LoadingPhase),FDefaultDelegateUserPolicy>
                    ::AddUObject<UDS_SyncSendComponent>
                              (&pUVar9->LoadingPhaseDelegate,(UDS_SyncSendComponent *)local_168,
                               (pmf_ec8f2430)this);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return this;
}

// FindAvailableSyncSend @ 14bbba2f0

TWeakObjectPtr<UDS_SyncSendBase,FWeakObjectPtr> __thiscall
UDS_SyncSendComponent::FindAvailableSyncSend(UDS_SyncSendComponent *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  char cVar4;
  FWeakObjectPtr in_RDX;
  FScriptContainerElement *pFVar5;
  UObject *local_res8;
  
  pFVar5 = (this->SyncSendList).AllocatorInstance.Data;
  iVar2 = (this->SyncSendList).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SyncSendList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_SyncSendBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if ((*(longlong *)pFVar5 != 0) && ((*(uint *)(*(longlong *)pFVar5 + 8) >> 0x1e & 1) == 0)) {
      cVar4 = (**(code **)(*(longlong *)(*(longlong *)pFVar5 + 0x28) + 0x18))
                        ((longlong *)(*(longlong *)pFVar5 + 0x28),&this->SyncData);
      if (cVar4 == '\x01') {
        pUVar3 = *(UObject **)pFVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar3 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
        }
        *(undefined8 *)in_RDX = 0;
        local_res8 = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
LAB_14bbba3c5:
        FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
        return (TWeakObjectPtr<UDS_SyncSendBase,FWeakObjectPtr>)in_RDX;
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = (UObject *)0x0;
  goto LAB_14bbba3c5;
}

// Initialize @ 14bbc0c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_SyncSendComponent::Initialize
          (UDS_SyncSendComponent *this,TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr *pFVar3;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar5;
  UDS_EventManager *this_00;
  UDS_LogManager *pUVar6;
  UDS_LoadingEvent *pUVar7;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [280];
  TVector<double>_u_0 local_30;
  undefined8 local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    (this->OwnerActor).WeakPtr = local_res10;
    bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
      pFVar3 = (FWeakObjectPtr *)
               (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x78))
                         (&pUVar2[0x29].field_0x10,local_148);
      (this->OwnerMovementCore).WeakPtr = *pFVar3;
      bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerMovementCore).WeakPtr);
      if (bVar1) {
        FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        TVar4 = UDS_CharStateData::GetData((ulong64)local_148);
                    /* WARNING: Load size is inaccurate */
        (this->OwnerCharStateData).WeakPtr = *TVar4.WeakPtr;
        bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerCharStateData).WeakPtr);
        if (bVar1) {
          pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
          TVar5 = UDS_EntityData::GetData((ulong64)local_148,*(ulong64 *)&pUVar2[0x29].field_0x18);
                    /* WARNING: Load size is inaccurate */
          (this->OwnerEntityData).WeakPtr = *TVar5.WeakPtr;
          bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerEntityData).WeakPtr);
          if (bVar1) {
            InitializeSyncSendList(this);
            this_00 = UDS_EventManager::GetInst();
            if (this_00 != (UDS_EventManager *)0x0) {
              if ((char)this_00->_padding_ == '\x01') {
                pUVar6 = UDS_LogManager::GetInst();
                if (pUVar6 != (UDS_LogManager *)0x0) {
                  pUVar6 = UDS_LogManager::GetInst();
                  local_148._272_8_ = (void *)0x0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            ((TStringConversion<TStringConvert<char,wchar_t>,128> *)
                             (local_148 + 0x10),"UDS_EventManager::GetEvent",0x1a,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar6,1,Warning,(wchar_t *)local_30._s_0.X,0x31,
                             L"Cannot access event during UDS_EventManager destruction.");
                  if ((void *)local_148._272_8_ != (void *)0x0) {
                    FMemory::Free((void *)local_148._272_8_);
                  }
                }
              }
              else {
                pUVar7 = UDS_EventManager::GetEventInternal<UDS_LoadingEvent>(this_00);
                if (pUVar7 != (UDS_LoadingEvent *)0x0) {
                  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &pUVar7->LoadingPhaseDelegate,this);
                  TMulticastDelegateRegistration<void___cdecl(enum_EDS_LoadingPhase),FDefaultDelegateUserPolicy>
                  ::AddUObject<UDS_SyncSendComponent>
                            (&pUVar7->LoadingPhaseDelegate,(UDS_SyncSendComponent *)local_148,
                             (pmf_ec8f2430)this);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

// InitializeOwnerComponents @ 14bbc1ca0

bool __thiscall UDS_SyncSendComponent::InitializeOwnerComponents(UDS_SyncSendComponent *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr *pFVar3;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar5;
  undefined1 local_res8 [8];
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    pFVar3 = (FWeakObjectPtr *)
             (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x78))
                       (&pUVar2[0x29].field_0x10,local_res8);
    (this->OwnerMovementCore).WeakPtr = *pFVar3;
    bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerMovementCore).WeakPtr);
    if (bVar1) {
      FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
      TVar4 = UDS_CharStateData::GetData((ulong64)local_res8);
                    /* WARNING: Load size is inaccurate */
      (this->OwnerCharStateData).WeakPtr = *TVar4.WeakPtr;
      bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerCharStateData).WeakPtr);
      if (bVar1) {
        pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        TVar5 = UDS_EntityData::GetData((ulong64)local_res8,*(ulong64 *)&pUVar2[0x29].field_0x18);
                    /* WARNING: Load size is inaccurate */
        (this->OwnerEntityData).WeakPtr = *TVar5.WeakPtr;
        bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerEntityData).WeakPtr);
        return bVar1;
      }
    }
  }
  return false;
}

// InitializeSyncSendList @ 14bbc22d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_SyncSendComponent::InitializeSyncSendList(UDS_SyncSendComponent *this)

{
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_00;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  TArray<TObjectPtr<UDS_SyncSendBase>,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this_00 = &this->OwnerActor;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pTVar8 = &this->SyncSendList;
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_SyncSendDead_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    iVar3 = (this->SyncSendList).ArrayNum;
    if (iVar3 == (this->SyncSendList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,&(this->SyncSendList).ArrayMax);
    }
    (this->SyncSendList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_SyncSendResurrect_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    iVar3 = (this->SyncSendList).ArrayNum;
    if (iVar3 == (this->SyncSendList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,&(this->SyncSendList).ArrayMax);
    }
    (this->SyncSendList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_SyncSendWarp_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    iVar3 = (this->SyncSendList).ArrayNum;
    if (iVar3 == (this->SyncSendList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,&(this->SyncSendList).ArrayMax);
    }
    (this->SyncSendList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_SyncSendInteraction_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    iVar3 = (this->SyncSendList).ArrayNum;
    if (iVar3 == (this->SyncSendList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,&(this->SyncSendList).ArrayMax);
    }
    (this->SyncSendList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_SyncSendSkill_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    iVar3 = (this->SyncSendList).ArrayNum;
    if (iVar3 == (this->SyncSendList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,&(this->SyncSendList).ArrayMax);
    }
    (this->SyncSendList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_SyncSendAbnormal_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    iVar3 = (this->SyncSendList).ArrayNum;
    if (iVar3 == (this->SyncSendList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,&(this->SyncSendList).ArrayMax);
    }
    (this->SyncSendList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_SyncSendTrace_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    iVar3 = (this->SyncSendList).ArrayNum;
    if (iVar3 == (this->SyncSendList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,&(this->SyncSendList).ArrayMax);
    }
    (this->SyncSendList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_SyncSendMountMove_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    iVar3 = (this->SyncSendList).ArrayNum;
    if (iVar3 == (this->SyncSendList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,&(this->SyncSendList).ArrayMax);
    }
    (this->SyncSendList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_SyncSendClimbing_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    iVar3 = (this->SyncSendList).ArrayNum;
    if (iVar3 == (this->SyncSendList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,&(this->SyncSendList).ArrayMax);
    }
    (this->SyncSendList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_SyncSendSwim_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    iVar3 = (this->SyncSendList).ArrayNum;
    if (iVar3 == (this->SyncSendList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,&(this->SyncSendList).ArrayMax);
    }
    (this->SyncSendList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_SyncSendFly_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    iVar3 = (this->SyncSendList).ArrayNum;
    if (iVar3 == (this->SyncSendList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,&(this->SyncSendList).ArrayMax);
    }
    (this->SyncSendList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_SyncSendMove_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    iVar3 = (this->SyncSendList).ArrayNum;
    if (iVar3 == (this->SyncSendList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,&(this->SyncSendList).ArrayMax);
    }
    (this->SyncSendList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pFVar7 = (pTVar8->AllocatorInstance).Data;
    iVar3 = (this->SyncSendList).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->SyncSendList).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UDS_SyncSendBase>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_b8);
      }
      if (pFVar7 == pFVar1) break;
      if ((*(longlong *)pFVar7 != 0) && ((*(uint *)(*(longlong *)pFVar7 + 8) >> 0x1e & 1) == 0)) {
        (**(code **)(*(longlong *)(*(longlong *)pFVar7 + 0x28) + 0x10))
                  ((longlong *)(*(longlong *)pFVar7 + 0x28),this_00->WeakPtr);
      }
      pFVar7 = pFVar7 + 8;
    }
  }
  return;
}

// OnChangedLoadingPhase @ 14bbc7cc0

void __thiscall
UDS_SyncSendComponent::OnChangedLoadingPhase(UDS_SyncSendComponent *this,EDS_LoadingPhase param_1)

{
  if (param_1 == Finish) {
    this->bIsLoadingEnd = true;
  }
  return;
}

// ProcessSyncSend @ 14bbceeb0

void __thiscall UDS_SyncSendComponent::ProcessSyncSend(UDS_SyncSendComponent *this,float param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  FWeakObjectPtr FVar3;
  char cVar4;
  bool bVar5;
  UObject *pUVar6;
  FWeakObjectPtr *pFVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18 [2];
  
  pFVar7 = (FWeakObjectPtr *)(this->SyncSendList).AllocatorInstance.Data;
  iVar2 = (this->SyncSendList).ArrayNum;
  pFVar1 = pFVar7 + iVar2;
  while( true ) {
    if ((this->SyncSendList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_SyncSendBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar7 == pFVar1) break;
    if (((*pFVar7 != (FWeakObjectPtr)0x0) && ((*(uint *)((longlong)*pFVar7 + 8) >> 0x1e & 1) == 0))
       && (cVar4 = (**(code **)(*(longlong *)((longlong)*pFVar7 + 0x28) + 0x18))
                             ((longlong *)((longlong)*pFVar7 + 0x28),&this->SyncData,param_1),
          cVar4 == '\x01')) {
      FVar3 = *pFVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (FVar3 != (FWeakObjectPtr)0x0) {
          UE::GC::MarkAsReachable((UObject *)FVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)FVar3);
        }
      }
      local_res18[0].ObjectIndex = 0;
      local_res18[0].ObjectSerialNumber = 0;
      local_res8 = FVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
LAB_14bbcef7f:
      FWeakObjectPtr::operator=(local_res18,(FObjectPtr)&local_res8);
      bVar5 = FWeakObjectPtr::IsValid(local_res18);
      if (bVar5) {
        local_res8 = local_res18[0];
        if ((((this->bSendPacketAtOnce == true) || (this->bIsInitSync == false)) ||
            (bVar5 = TWeakObjectPtr<UDS_SyncSendBase,FWeakObjectPtr>::
                     UEOpEquals<UDS_SyncSendBase,bool>
                               ((TWeakObjectPtr<UDS_SyncSendBase,FWeakObjectPtr> *)&local_res8,
                                &this->PrevSyncSend), !bVar5)) ||
           ((bVar5 = FWeakObjectPtr::IsValid(&local_res8), bVar5 &&
            (pUVar6 = FWeakObjectPtr::Get(&local_res8), pUVar6[1].field_0x24 == '\0')))) {
          SendSyncPacket(this);
        }
        (this->PrevSyncSend).WeakPtr = local_res18[0];
        return;
      }
      return;
    }
    pFVar7 = pFVar7 + 1;
  }
  local_res18[0].ObjectIndex = 0;
  local_res18[0].ObjectSerialNumber = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  goto LAB_14bbcef7f;
}

// RegisterLoadingPhaseDelegate @ 14bbd8070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_SyncSendComponent::RegisterLoadingPhaseDelegate(UDS_SyncSendComponent *this)

{
  UDS_EventManager *this_00;
  UDS_LogManager *pUVar1;
  UDS_LoadingEvent *pUVar2;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [280];
  TVector<double>_u_0 local_30;
  undefined8 local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    if ((char)this_00->_padding_ == '\x01') {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_148._272_8_ = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                   "UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar1,1,Warning,(wchar_t *)local_30._s_0.X,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_148._272_8_ != (void *)0x0) {
          FMemory::Free((void *)local_148._272_8_);
        }
      }
    }
    else {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_LoadingEvent>(this_00);
      if (pUVar2 != (UDS_LoadingEvent *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar2->LoadingPhaseDelegate,this);
        TMulticastDelegateRegistration<void___cdecl(enum_EDS_LoadingPhase),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_SyncSendComponent>
                  (&pUVar2->LoadingPhaseDelegate,(UDS_SyncSendComponent *)local_148,
                   (pmf_ec8f2430)this);
      }
    }
  }
  return;
}

// SendSyncPacket @ 14bbdf790

void __thiscall UDS_SyncSendComponent::SendSyncPacket(UDS_SyncSendComponent *this)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  UDS_SendPacketManager *this_00;
  UDS_EntityData *this_01;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar4) {
    this->bIsInitSync = true;
    this->bSendPacketAtOnce = false;
    this_00 = UDS_SendPacketManager::GetInst();
    UDS_SendPacketManager::SendSyncRequest(this_00,&this->SyncData);
    uVar1 = (this->SyncData).StateFlags.Packed;
    if ((((byte)(uVar1 >> 0xb) ^ (byte)(uVar1 >> 4)) & 0x7f) != 0) {
      bVar4 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                        (&this->OwnerEntityData,(void *)0x0);
      if (!bVar4) {
        this_01 = (UDS_EntityData *)FWeakObjectPtr::Get(&(this->OwnerEntityData).WeakPtr);
        UDS_EntityData::SetMoveMode
                  (this_01,(EDS_MoveMode)((uint)(this->SyncData).StateFlags.Packed >> 4) & 0x7f);
      }
      uVar1 = (this->SyncData).StateFlags.Packed;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &ChangedMainPlayerMoveModeDelegate,(FWriteAccessScope *)&local_38);
      bVar4 = false;
      ChangedMainPlayerMoveModeDelegate._28_4_ = ChangedMainPlayerMoveModeDelegate._28_4_ + 1;
      uVar8 = ChangedMainPlayerMoveModeDelegate._16_4_ - 1;
      if (-1 < (int)uVar8) {
        lVar9 = (longlong)(int)uVar8 << 4;
        bVar4 = false;
        do {
          uVar7 = 0;
          if ((int)uVar8 < (int)ChangedMainPlayerMoveModeDelegate._16_4_) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((*(int *)(lVar9 + 8 + ChangedMainPlayerMoveModeDelegate._8_8_) == 0) ||
              (plVar2 = *(longlong **)(lVar9 + ChangedMainPlayerMoveModeDelegate._8_8_),
              plVar2 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar2 + 0x68))
                                (plVar2,(byte)(uVar1 >> 0xb) & 0x7f,(byte)(uVar1 >> 4) & 0x7f),
             cVar6 == '\0')) {
            bVar4 = true;
          }
          lVar9 = lVar9 + -0x10;
          uVar8 = uVar8 - 1;
        } while (-1 < (int)uVar8);
      }
      ChangedMainPlayerMoveModeDelegate._28_4_ = ChangedMainPlayerMoveModeDelegate._28_4_ + -1;
      if (bVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &ChangedMainPlayerMoveModeDelegate,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
    FDS_NetSyncData::SavePrevData(&this->SyncData);
  }
  return;
}

// ShouldSendPacket @ 14bbe15d0

bool __thiscall
UDS_SyncSendComponent::ShouldSendPacket
          (UDS_SyncSendComponent *this,TWeakObjectPtr<UDS_SyncSendBase,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  if ((this->bSendPacketAtOnce != true) && (this->bIsInitSync != false)) {
    local_res10[0] = param_1.WeakPtr;
    bVar1 = TWeakObjectPtr<UDS_SyncSendBase,FWeakObjectPtr>::UEOpEquals<UDS_SyncSendBase,bool>
                      ((TWeakObjectPtr<UDS_SyncSendBase,FWeakObjectPtr> *)local_res10,
                       &this->PrevSyncSend);
    if (bVar1) {
      bVar1 = FWeakObjectPtr::IsValid(local_res10);
      if (bVar1) {
        pUVar2 = FWeakObjectPtr::Get(local_res10);
        return pUVar2[1].field_0x24 == '\0';
      }
      return false;
    }
  }
  return true;
}

// Tick @ 14bbe2680

void __thiscall UDS_SyncSendComponent::Tick(UDS_SyncSendComponent *this,float param_1)

{
  bool bVar1;
  
  if (this->bIsLoadingEnd != false) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
    if (bVar1) {
      bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerMovementCore).WeakPtr);
      if (bVar1) {
        bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerEntityData).WeakPtr);
        if (bVar1) {
          UpdateSyncData(this);
          ProcessSyncSend(this,param_1);
        }
      }
    }
  }
  return;
}

// UpdateAbsoluteSyncData @ 14bbe3940

void __thiscall UDS_SyncSendComponent::UpdateAbsoluteSyncData(UDS_SyncSendComponent *this)

{
  (this->SyncData).TransportEntityID = 0;
  return;
}

// UpdateRelativeSyncData @ 14bbe57d0

void __thiscall UDS_SyncSendComponent::UpdateRelativeSyncData(UDS_SyncSendComponent *this)

{
  double dVar1;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar2;
  UObject *pUVar3;
  ulong64 uVar4;
  TVector<double> local_28;
  
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
  pTVar2 = UDS_MovementCore::GetActorRelativeLocation(this_00,&local_28);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (this->SyncData).NowRelativePosition.field0_0x0._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (this->SyncData).NowRelativePosition.field0_0x0._s_0.Y = dVar1;
  (this->SyncData).NowRelativePosition.field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  uVar4 = (**(code **)(*(longlong *)&pUVar3[0x29].field_0x10 + 0x1d8))();
  (this->SyncData).TransportEntityID = uVar4;
  return;
}

// UpdateSyncData @ 14bbe5af0

void __thiscall UDS_SyncSendComponent::UpdateSyncData(UDS_SyncSendComponent *this)

{
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *this_00;
  FDS_CompactStateFlags *pFVar1;
  double dVar2;
  EDS_MoveMode EVar3;
  UObject *pUVar4;
  longlong lVar5;
  UDS_MovementCore *pUVar6;
  TVector<double> *pTVar7;
  ulong64 uVar8;
  double *pdVar9;
  TRotator<double> *pTVar10;
  UDS_EntityData *this_01;
  TRotator<double> local_28;
  
  FDS_NetSyncData::Clear(&this->SyncData);
  pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  lVar5 = (**(code **)(*(longlong *)&pUVar4[0x29].field_0x10 + 0x1d8))();
  this_00 = &this->OwnerMovementCore;
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    pTVar7 = UDS_MovementCore::GetActorRelativeLocation(pUVar6,(TVector<double> *)&local_28);
    dVar2 = (pTVar7->field0_0x0)._s_0.Y;
    (this->SyncData).NowRelativePosition.field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
    (this->SyncData).NowRelativePosition.field0_0x0._s_0.Y = dVar2;
    (this->SyncData).NowRelativePosition.field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
    pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    uVar8 = (**(code **)(*(longlong *)&pUVar4[0x29].field_0x10 + 0x1d8))();
  }
  (this->SyncData).TransportEntityID = uVar8;
  pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  uVar8 = (**(code **)(*(longlong *)&pUVar4[0x29].field_0x10 + 0x1d8))();
  (this->SyncData).TransportEntityID = uVar8;
  pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pdVar9 = (double *)(**(code **)(*(longlong *)pUVar4 + 0x470))(pUVar4,&local_28);
  dVar2 = pdVar9[1];
  (this->SyncData).TransformValue.field0_0x0._s_0.X = *pdVar9;
  (this->SyncData).TransformValue.field0_0x0._s_0.Y = dVar2;
  (this->SyncData).TransformValue.field0_0x0._s_0.Z = pdVar9[2];
  pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pdVar9 = (double *)(**(code **)(*(longlong *)pUVar4 + 0x458))(pUVar4,&local_28);
  dVar2 = pdVar9[1];
  (this->SyncData).InputValue.field0_0x0._s_0.X = *pdVar9;
  (this->SyncData).InputValue.field0_0x0._s_0.Y = dVar2;
  pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  pTVar7 = UDS_MovementCore::GetActorFootLocation(pUVar6,(TVector<double> *)&local_28);
  dVar2 = (pTVar7->field0_0x0)._s_0.Y;
  (this->SyncData).NowPosition.field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
  (this->SyncData).NowPosition.field0_0x0._s_0.Y = dVar2;
  (this->SyncData).NowPosition.field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
  pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  pTVar10 = UDS_MovementCore::GetActorRotation(pUVar6,&local_28);
  dVar2 = pTVar10->Yaw;
  (this->SyncData).EntityDirection.Pitch = pTVar10->Pitch;
  (this->SyncData).EntityDirection.Yaw = dVar2;
  (this->SyncData).EntityDirection.Roll = pTVar10->Roll;
  pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  pTVar7 = UDS_MovementCore::GetVelocity(pUVar6,(TVector<double> *)&local_28);
  dVar2 = (pTVar7->field0_0x0)._s_0.Y;
  (this->SyncData).VelocityVector.field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
  (this->SyncData).VelocityVector.field0_0x0._s_0.Y = dVar2;
  (this->SyncData).VelocityVector.field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
  this_01 = (UDS_EntityData *)FWeakObjectPtr::Get(&(this->OwnerEntityData).WeakPtr);
  EVar3 = UDS_EntityData::GetMoveMode(this_01);
  pFVar1 = &(this->SyncData).StateFlags;
  pFVar1->Packed = pFVar1->Packed & 0xfffffffffffff80f;
  pFVar1 = &(this->SyncData).StateFlags;
  pFVar1->Packed = pFVar1->Packed | (ulonglong)EVar3 << 4;
  return;
}

