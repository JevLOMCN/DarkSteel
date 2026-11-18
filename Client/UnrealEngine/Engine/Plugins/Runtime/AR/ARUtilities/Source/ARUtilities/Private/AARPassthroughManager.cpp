// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ARUtilities
// Functions: 12

// StaticClass @ 14cfc6a90

UClass * __cdecl AARPassthroughManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARPassthroughManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ARUtilities",L"ARPassthroughManager",
               &Z_Registration_Info_UClass_AARPassthroughManager.InnerSingleton,
               StaticRegisterNativesAARPassthroughManager,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AARPassthroughManager>,
               InternalVTableHelperCtorCaller<AARPassthroughManager>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARPassthroughManager.InnerSingleton;
}

// AARPassthroughManager @ 14cfc7ae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AARPassthroughManager * __thiscall
AARPassthroughManager::AARPassthroughManager(AARPassthroughManager *this,FVTableHelper *param_1)

{
  TArray<TSubclassOf<UARComponent>,TSizedDefaultAllocator<32>_> *pTVar1;
  TObjectPtr<UClass>_u_0 local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AARPassthroughManager__6B_;
  pTVar1 = &this->ARComponentClasses;
  local_res8.DebugPtr = Z_Construct_UClass_UARMeshComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ARComponentClasses).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&pTVar1->AllocatorInstance,1,&(this->ARComponentClasses).ArrayMax);
  ConstructItems<TSubclassOf<UARComponent>,TSubclassOf<UARComponent>,int>
            ((pTVar1->AllocatorInstance).Data,(TSubclassOf<UARComponent> *)&local_res8.ObjectPtr,1);
  (this->PassthroughUpdateComponent).field0_0x0.DebugPtr =
       (UPassthroughMaterialUpdateComponent *)0x0;
  return this;
}

// AARPassthroughManager @ 14cfc7b90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AARPassthroughManager * __thiscall
AARPassthroughManager::AARPassthroughManager
          (AARPassthroughManager *this,FObjectInitializer *param_1)

{
  TArray<TSubclassOf<UARComponent>,TSizedDefaultAllocator<32>_> *pTVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UPassthroughMaterialUpdateComponent *pUVar6;
  TObjectPtr<UClass>_u_0 local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AARPassthroughManager__6B_;
  pTVar1 = &this->ARComponentClasses;
  local_res8.DebugPtr = Z_Construct_UClass_UARMeshComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ARComponentClasses).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&pTVar1->AllocatorInstance,1,&(this->ARComponentClasses).ArrayMax);
  ConstructItems<TSubclassOf<UARComponent>,TSubclassOf<UARComponent>,int>
            ((pTVar1->AllocatorInstance).Data,(TSubclassOf<UARComponent> *)&local_res8.ObjectPtr,1);
  (this->PassthroughUpdateComponent).field0_0x0.DebugPtr =
       (UPassthroughMaterialUpdateComponent *)0x0;
  pFVar3 = ::FName::FName((FName *)&local_res8.ObjectPtr,L"RootComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  pFVar3 = ::FName::FName((FName *)&local_res8.ObjectPtr,L"PassthroughUpdateComponent");
  FVar2 = *pFVar3;
  pUVar4 = UPassthroughMaterialUpdateComponent::StaticClass();
  pUVar6 = (UPassthroughMaterialUpdateComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UPassthroughMaterialUpdateComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->PassthroughUpdateComponent).field0_0x0.DebugPtr = pUVar6;
  *(undefined1 *)((longlong)&pUVar6->_padding_ + 1) = 3;
  return this;
}

// ~AARPassthroughManager @ 14cfc80c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AARPassthroughManager::~AARPassthroughManager(AARPassthroughManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AARPassthroughManager__6B_;
  pFVar1 = (this->ARComponentClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// BeginPlay @ 14cfc8600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AARPassthroughManager::BeginPlay(AARPassthroughManager *this)

{
  AActor::BeginPlay((AActor *)this);
  TMulticastDelegateRegistration<void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
  ::AddUObject<AARPassthroughManager>
            ((TMulticastDelegateRegistration<void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
              *)&UARLifeCycleComponent::OnSpawnARActorDelegate,
             (AARPassthroughManager *)&stack0x00000010,(pmf_c132bd02)this);
  return;
}

// GetPassthroughMaterialUpdateComponent @ 14cfc90f0

UPassthroughMaterialUpdateComponent * __thiscall
AARPassthroughManager::GetPassthroughMaterialUpdateComponent(AARPassthroughManager *this)

{
  return (this->PassthroughUpdateComponent).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14cfc9100

UClass * __cdecl AARPassthroughManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARPassthroughManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ARUtilities",L"ARPassthroughManager",
               &Z_Registration_Info_UClass_AARPassthroughManager.InnerSingleton,
               StaticRegisterNativesAARPassthroughManager,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AARPassthroughManager>,
               InternalVTableHelperCtorCaller<AARPassthroughManager>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARPassthroughManager.InnerSingleton;
}

// OnMRMeshCreated @ 14cfc95e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AARPassthroughManager::OnMRMeshCreated(AARPassthroughManager *this,UMRMeshComponent *param_1)

{
  UPassthroughMaterialUpdateComponent::AddAffectedComponent
            ((this->PassthroughUpdateComponent).field0_0x0.DebugPtr,(UPrimitiveComponent *)param_1);
  return;
}

// OnMRMeshDestroyed @ 14cfc9600

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AARPassthroughManager::OnMRMeshDestroyed(AARPassthroughManager *this,UMRMeshComponent *param_1)

{
  UPassthroughMaterialUpdateComponent *pUVar1;
  TObjectPtr<UPrimitiveComponent>_u_0 local_res8;
  
  if (param_1 != (UMRMeshComponent *)0x0) {
    pUVar1 = (this->PassthroughUpdateComponent).field0_0x0.DebugPtr;
    local_res8 = (TObjectPtr<UPrimitiveComponent>_u_0)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              (&pUVar1->AffectedComponents,(TObjectPtr<UPrimitiveComponent> *)&local_res8.ObjectPtr,
               Default);
    local_res8 = (TObjectPtr<UPrimitiveComponent>_u_0)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              (&pUVar1->PendingComponents,(TObjectPtr<UPrimitiveComponent> *)&local_res8.ObjectPtr,
               Default);
  }
  return;
}

// OnSpawnARActor @ 14cfc9680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AARPassthroughManager::OnSpawnARActor
          (AARPassthroughManager *this,AARActor *param_1,UARComponent *param_2,FGuid *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  UMRMeshComponent *pUVar7;
  bool bVar8;
  UClass *pUVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [16];
  
  if (param_2 == (UARComponent *)0x0) {
    return;
  }
  pFVar10 = (this->ARComponentClasses).AllocatorInstance.Data;
  iVar2 = (this->ARComponentClasses).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  do {
    if ((this->ARComponentClasses).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSubclassOf<UARComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar10 == pFVar1) {
      return;
    }
    pUVar5 = *(UObject **)pFVar10;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar5 != (UObject *)0x0) goto LAB_14cfc9705;
    }
    else if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
LAB_14cfc9705:
      pUVar9 = Z_Construct_UClass_UARComponent_NoRegister();
      if (pUVar9 != (UClass *)0x0) {
        iVar3 = (int)pUVar9->_padding_;
        if ((*(int *)&pUVar5[1].field_0x10 < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar3 * 8) !=
            &pUVar9->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          lVar6 = param_2->_padding_;
          pUVar9 = Z_Construct_UClass_UARComponent_NoRegister();
          if (pUVar9 != (UClass *)0x0) {
            iVar3 = *(int *)&pUVar5[1].field_0x10;
            iVar4 = (int)pUVar9->_padding_;
            if ((iVar3 < iVar4) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar4 * 8) !=
                &pUVar9->_padding_)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              if ((*(int *)(lVar6 + 0x38) < iVar3) ||
                 (*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) !=
                  &pUVar5[1].field_0x8)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (bVar8) {
                TMulticastDelegateRegistration<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
                ::AddUObject<AARPassthroughManager>
                          ((TMulticastDelegateRegistration<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
                            *)&param_2->OnMRMeshCreated,(AARPassthroughManager *)local_res18,
                           (pmf_d871ac47)this);
                TMulticastDelegateRegistration<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
                ::AddUObject<AARPassthroughManager>
                          ((TMulticastDelegateRegistration<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
                            *)&param_2->OnMRMeshDestroyed,(AARPassthroughManager *)local_res18,
                           (pmf_d871ac47)this);
                pUVar7 = (param_2->MRMeshComponent).field0_0x0.DebugPtr;
                if (pUVar7 == (UMRMeshComponent *)0x0) {
                  return;
                }
                UPassthroughMaterialUpdateComponent::AddAffectedComponent
                          ((this->PassthroughUpdateComponent).field0_0x0.DebugPtr,
                           (UPrimitiveComponent *)pUVar7);
                return;
              }
            }
          }
        }
      }
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// StaticRegisterNativesAARPassthroughManager @ 14cfc99f0

void __cdecl AARPassthroughManager::StaticRegisterNativesAARPassthroughManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AARPassthroughManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetPassthroughMaterialUpdateComponent @ 14cfca550

void __cdecl
AARPassthroughManager::execGetPassthroughMaterialUpdateComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x12);
  return;
}

