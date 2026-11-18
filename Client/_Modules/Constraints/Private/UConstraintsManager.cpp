// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 17

// StaticClass @ 14648e8d0

UClass * __cdecl UConstraintsManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstraintsManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"ConstraintsManager",
               &Z_Registration_Info_UClass_UConstraintsManager.InnerSingleton,
               StaticRegisterNativesUConstraintsManager,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UConstraintsManager>,
               InternalVTableHelperCtorCaller<UConstraintsManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstraintsManager.InnerSingleton;
}

// UConstraintsManager @ 14649e6f0

UConstraintsManager * __thiscall
UConstraintsManager::UConstraintsManager(UConstraintsManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UConstraintsManager__6B_;
  (this->OnActorDestroyedHandle).ID = 0;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  this->OnConstraintAdded_BP = (FOnConstraintAdded)0x0;
  this->OnConstraintRemoved_BP = (FOnConstraintRemoved)0x0;
  return this;
}

// UConstraintsManager @ 14649e730

UConstraintsManager * __thiscall UConstraintsManager::UConstraintsManager(UConstraintsManager *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UConstraintsManager__6B_;
  (this->OnActorDestroyedHandle).ID = 0;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  this->OnConstraintAdded_BP = (FOnConstraintAdded)0x0;
  this->OnConstraintRemoved_BP = (FOnConstraintRemoved)0x0;
  return this;
}

// ~UConstraintsManager @ 14649fa70

void __thiscall UConstraintsManager::~UConstraintsManager(UConstraintsManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UConstraintsManager__6B_;
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Clear @ 1464a96f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConstraintsManager::Clear(UConstraintsManager *this,UWorld *param_1)

{
  if ((param_1 != (UWorld *)0x0) && ((this->OnActorDestroyedHandle).ID != 0)) {
    UWorld::RemoveOnActorDestroyedHandler
              (param_1,(FDelegateHandle)(this->OnActorDestroyedHandle).ID);
    (this->OnActorDestroyedHandle).ID = 0;
    return;
  }
  (this->OnActorDestroyedHandle).ID = 0;
  return;
}

// Dump @ 1464adb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UConstraintsManager::Dump(UConstraintsManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FName local_res8;
  FString local_28;
  
  if (1 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  pFVar3 = (this->Constraints).AllocatorInstance.Data;
  iVar2 = (this->Constraints).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Constraints).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UTickableConstraint>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(longlong *)pFVar3 != 0) && ((*(uint *)(*(longlong *)pFVar3 + 8) >> 0x1e & 1) == 0)) &&
       (2 < (byte)LogTemp._0_1_)) {
      (**(code **)(**(longlong **)pFVar3 + 0x2e8))();
      local_res8 = *(FName *)(*(longlong *)pFVar3 + 0x18);
      ::FName::ToString(&local_res8,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// FOnConstraintAdded_DelegateWrapper @ 1464af850

void __cdecl
UConstraintsManager::FOnConstraintAdded_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UConstraintsManager *param_2,UTickableConstraint *param_3)

{
  UConstraintsManager *local_18;
  UTickableConstraint *local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FOnConstraintRemoved_DelegateWrapper @ 1464af8b0

void __cdecl
UConstraintsManager::FOnConstraintRemoved_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UConstraintsManager *param_2,UTickableConstraint *param_3,bool param_4)

{
  UConstraintsManager *local_28;
  UTickableConstraint *local_20;
  undefined1 local_18;
  
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// Find @ 1464afa30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UConstraintsManager * __cdecl UConstraintsManager::Find(UWorld *param_1)

{
  FObjectPtr_u_0 *this;
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ULevel *pUVar8;
  UClass *pUVar9;
  UConstraintsManager *pUVar10;
  FObjectPtr_u_0 FVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  
  if ((param_1 == (UWorld *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
    return (UConstraintsManager *)0x0;
  }
  pUVar8 = UWorld::GetCurrentLevel(param_1);
  FVar11.Handle = (UObject *)0x0;
  pFVar3 = (pUVar8->Actors).AllocatorInstance.Data;
  iVar1 = (pUVar8->Actors).ArrayNum;
  pFVar13 = pFVar3;
  do {
    if (pFVar13 == pFVar3 + (longlong)iVar1 * 8) {
      return (UConstraintsManager *)0x0;
    }
    lVar4 = *(longlong *)pFVar13;
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
      pUVar9 = AConstraintsActor::StaticClass();
      iVar2 = (int)pUVar9->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          == &pUVar9->_padding_)) {
        uVar12 = (uint)((longlong)pFVar13 - (longlong)pFVar3 >> 3);
        if (uVar12 == 0xffffffff) {
          return (UConstraintsManager *)0x0;
        }
        uVar7 = 0;
        if ((int)uVar12 < (pUVar8->Actors).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pUVar10 = (UConstraintsManager *)(*pcVar5)();
          return pUVar10;
        }
        pFVar3 = (pUVar8->Actors).AllocatorInstance.Data;
        this = (FObjectPtr_u_0 *)(pFVar3 + (longlong)(int)uVar12 * 8);
        if (*(longlong *)(pFVar3 + (longlong)(int)uVar12 * 8) != 0) {
          pUVar9 = AConstraintsActor::StaticClass();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)this,pUVar9);
          if (bVar6) {
            FVar11 = (FObjectPtr_u_0)this->Handle;
          }
        }
        if (FVar11.Handle == (UObject *)0x0) {
          return (UConstraintsManager *)0x0;
        }
        pUVar10 = *(UConstraintsManager **)&FVar11.Handle[0x11].field_0x18;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          return pUVar10;
        }
        if (pUVar10 == (UConstraintsManager *)0x0) {
          return (UConstraintsManager *)0x0;
        }
        UE::GC::MarkAsReachable((UObject *)pUVar10);
        return pUVar10;
      }
    }
    pFVar13 = pFVar13 + 8;
  } while( true );
}

// Get @ 1464b0ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UConstraintsManager * __cdecl UConstraintsManager::Get(UWorld *param_1)

{
  UConstraintsManager *pUVar1;
  FActorSpawnParameters *pFVar2;
  AConstraintsActor *pAVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((param_1 == (UWorld *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
    pUVar1 = (UConstraintsManager *)0x0;
  }
  else {
    pUVar1 = Find(param_1);
    if (pUVar1 == (UConstraintsManager *)0x0) {
      pFVar2 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
      pAVar3 = UWorld::SpawnActor<AConstraintsActor>(param_1,pFVar2);
      if (local_88._64_8_ != 0) {
        plVar4 = (longlong *)(local_88 + 0x50);
        if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
          plVar4 = (longlong *)local_88._104_8_;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      pUVar1 = (pAVar3->ConstraintsManager).field0_0x0.DebugPtr;
    }
  }
  return pUVar1;
}

// GetPrivateStaticClass @ 1464b5b30

UClass * __cdecl UConstraintsManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstraintsManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"ConstraintsManager",
               &Z_Registration_Info_UClass_UConstraintsManager.InnerSingleton,
               StaticRegisterNativesUConstraintsManager,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UConstraintsManager>,
               InternalVTableHelperCtorCaller<UConstraintsManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstraintsManager.InnerSingleton;
}

// Init @ 1464b8410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConstraintsManager::Init(UConstraintsManager *this,UWorld *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDelegateHandle FVar3;
  UConstraintsManager *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (param_1 != (UWorld *)0x0) {
    if ((this->OnActorDestroyedHandle).ID != 0) {
      UWorld::RemoveOnActorDestroyedHandler
                (param_1,(FDelegateHandle)(this->OnActorDestroyedHandle).ID);
    }
    (this->OnActorDestroyedHandle).ID = 0;
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUConstraintsManager____A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = OnActorDestroyed;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    FVar3 = UWorld::AddOnActorDestroyedHandler
                      (param_1,(TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                               &local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->OnActorDestroyedHandle).ID = *FVar3.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  }
  return;
}

// OnActorDestroyed @ 1464ba3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UConstraintsManager::OnActorDestroyed(UConstraintsManager *this,AActor *param_1)

{
  USceneComponent *pUVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  UWorld *pUVar10;
  longlong lVar11;
  uint uVar12;
  FWeakObjectPtr local_res18;
  USceneComponent *local_res20;
  uint local_58 [2];
  ForAnyElementType local_50;
  undefined8 local_48;
  
  if ((!FConstraintsManagerController::bDoNotRemoveConstraint) && (param_1 != (AActor *)0x0)) {
    pUVar1 = (param_1->RootComponent).field0_0x0.DebugPtr;
    pUVar10 = AActor::GetWorld(param_1);
    if ((pUVar10 != (UWorld *)0x0) && (pUVar1 != (USceneComponent *)0x0)) {
      local_50.Data = (FScriptContainerElement *)0x0;
      local_48 = 0;
      local_58[0] = 0;
      if (0 < (this->Constraints).ArrayNum) {
        do {
          uVar12 = local_58[0];
          uVar6 = 0;
          if ((int)local_58[0] < (this->Constraints).ArrayNum) {
            uVar6 = ~local_58[0] >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar6 = 0;
          if (*(longlong *)((this->Constraints).AllocatorInstance.Data + (longlong)(int)uVar12 * 8)
              != 0) {
            lVar11 = (longlong)(int)local_58[0];
            uVar12 = uVar6;
            if ((int)local_58[0] < (this->Constraints).ArrayNum) {
              uVar12 = ~local_58[0] >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar11 = *(longlong *)((this->Constraints).AllocatorInstance.Data + lVar11 * 8);
            if ((lVar11 != 0) && ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0)) {
              lVar11 = (longlong)(int)local_58[0];
              uVar12 = uVar6;
              if ((int)local_58[0] < (this->Constraints).ArrayNum) {
                uVar12 = ~local_58[0] >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              cVar5 = (**(code **)(**(longlong **)
                                     ((this->Constraints).AllocatorInstance.Data + lVar11 * 8) +
                                  0x2d8))();
              if (cVar5 == '\0') {
                lVar11 = (longlong)(int)local_58[0];
                uVar12 = 0;
                if ((int)local_58[0] < (this->Constraints).ArrayNum) {
                  uVar12 = ~local_58[0] >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                plVar2 = *(longlong **)((this->Constraints).AllocatorInstance.Data + lVar11 * 8);
                pcVar3 = *(code **)(*plVar2 + 0x2f0);
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar1);
                }
                local_res18.ObjectIndex = 0;
                local_res18.ObjectSerialNumber = 0;
                local_res20 = pUVar1;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar1);
                }
                FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
                cVar5 = (*pcVar3)(plVar2,local_res18);
                if (cVar5 != '\0') {
                  if (((local_50.Data <= (FScriptContainerElement *)local_58) &&
                      ((FScriptContainerElement *)local_58 <
                       local_50.Data + (longlong)local_48._4_4_ * 4)) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  iVar7 = (int)local_48;
                  if ((int)local_48 == local_48._4_4_) {
                    iVar7 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_50,(int *)((longlong)&local_48 + 4));
                  }
                  local_48 = CONCAT44(local_48._4_4_,iVar7 + 1);
                  *(uint *)(local_50.Data + (longlong)iVar7 * 4) = local_58[0];
                }
              }
            }
          }
          local_58[0] = local_58[0] + 1;
        } while ((int)local_58[0] < (this->Constraints).ArrayNum);
        if (((int)local_48 != 0) && (uVar12 = (int)local_48 - 1, -1 < (int)uVar12)) {
          lVar11 = (longlong)(int)uVar12 * 4;
          do {
            uVar8 = 0;
            if ((int)uVar12 < (int)local_48) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar8 = *(uint *)(local_50.Data + lVar11);
            if ((-1 < (int)uVar8) && ((int)uVar8 < (this->Constraints).ArrayNum)) {
              uVar9 = uVar6;
              if ((int)uVar8 < (this->Constraints).ArrayNum) {
                uVar9 = ~uVar8 >> 0x1f;
              }
              ::Singleton.World = pUVar10;
              if ((uVar9 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FConstraintsManagerController::RemoveConstraint
                        (&::Singleton,
                         *(UTickableConstraint **)
                          ((this->Constraints).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
                         true);
            }
            lVar11 = lVar11 + -4;
            uVar12 = uVar12 - 1;
          } while (-1 < (int)uVar12);
        }
      }
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
    }
  }
  return;
}

// PostLoad @ 1464bb640

void __thiscall UConstraintsManager::PostLoad(UConstraintsManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  UObject::PostLoad((UObject *)this);
  pFVar6 = (this->Constraints).AllocatorInstance.Data;
  iVar2 = (this->Constraints).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Constraints).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UTickableConstraint>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    plVar3 = *(longlong **)pFVar6;
    if (plVar3 != (longlong *)0x0) {
      pcVar4 = *(code **)(*plVar3 + 0x300);
      uVar5 = (**(code **)(this->_padding_ + 0x180))(this);
      (*pcVar4)(plVar3,uVar5);
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// RegisterDelegates @ 1464bcec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConstraintsManager::RegisterDelegates(UConstraintsManager *this,UWorld *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDelegateHandle FVar3;
  UConstraintsManager *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if ((this->OnActorDestroyedHandle).ID == 0) {
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUConstraintsManager____A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
      puVar1[4] = OnActorDestroyed;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    FVar3 = UWorld::AddOnActorDestroyedHandler
                      (param_1,(TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                               &local_res8);
                    /* WARNING: Load size is inaccurate */
    (this->OnActorDestroyedHandle).ID = *FVar3.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  }
  return;
}

// StaticRegisterNativesUConstraintsManager @ 1464c1f90

void __cdecl UConstraintsManager::StaticRegisterNativesUConstraintsManager(void)

{
  return;
}

// UnregisterDelegates @ 1464c3c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConstraintsManager::UnregisterDelegates(UConstraintsManager *this,UWorld *param_1)

{
  if ((param_1 != (UWorld *)0x0) && ((this->OnActorDestroyedHandle).ID != 0)) {
    UWorld::RemoveOnActorDestroyedHandler
              (param_1,(FDelegateHandle)(this->OnActorDestroyedHandle).ID);
    (this->OnActorDestroyedHandle).ID = 0;
    return;
  }
  (this->OnActorDestroyedHandle).ID = 0;
  return;
}

