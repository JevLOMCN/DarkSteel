// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146f86100

UClass * __cdecl UPathFollowingManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPathFollowingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"PathFollowingManager",
               &Z_Registration_Info_UClass_UPathFollowingManager.InnerSingleton,
               StaticRegisterNativesUPathFollowingManager,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPathFollowingManager>,
               InternalVTableHelperCtorCaller<UPathFollowingManager>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPathFollowingManager.InnerSingleton;
}

// UPathFollowingManager @ 146f95f00

UPathFollowingManager * __thiscall
UPathFollowingManager::UPathFollowingManager(UPathFollowingManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPathFollowingManager__6B_;
  return this;
}

// UPathFollowingManager @ 146f95f30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPathFollowingManager * __thiscall
UPathFollowingManager::UPathFollowingManager
          (UPathFollowingManager *this,FObjectInitializer *param_1)

{
  TDelegate<void___cdecl(AController_const_&),FDefaultDelegateUserPolicy> *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<bool___cdecl(AController_const_&),FDefaultDelegateUserPolicy> *this_01;
  ulonglong uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  UObject::UObject((UObject *)this,param_1);
  uVar3 = (ulonglong)_tls_index;
  *(undefined ***)this = &___7UPathFollowingManager__6B_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this_00 = IPathFollowingManagerInterface::StopMovementDelegate();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_28);
      local_10 = &this_00->field_0x8;
      puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBVAController___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar2 = FDelegateHandle::GenerateNewID();
        puVar1[2] = uVar2;
        *puVar1 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEBVAController___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar1[3] = StopMovement;
      }
      if (local_28.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
      }
      this_01 = IPathFollowingManagerInterface::IsFollowingAPathDelegate();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
                 (FWriteAccessScope *)&local_28);
      local_10 = &this_01->field_0x8;
      puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &
                  ___7__TCommonDelegateInstanceState___A6A_NAEBVAController___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar2 = FDelegateHandle::GenerateNewID();
        puVar1[2] = uVar2;
        *puVar1 = &
                  ___7__TBaseStaticDelegateInstance___A6A_NAEBVAController___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar1[3] = IsFollowingAPath;
      }
      if (local_28.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
      }
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UPathFollowingManager @ 146f97130

void __thiscall UPathFollowingManager::~UPathFollowingManager(UPathFollowingManager *this)

{
  *(undefined ***)this = &___7UPathFollowingManager__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146fb4420

UClass * __cdecl UPathFollowingManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPathFollowingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"PathFollowingManager",
               &Z_Registration_Info_UClass_UPathFollowingManager.InnerSingleton,
               StaticRegisterNativesUPathFollowingManager,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPathFollowingManager>,
               InternalVTableHelperCtorCaller<UPathFollowingManager>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPathFollowingManager.InnerSingleton;
}

// IsFollowingAPath @ 146fb9870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl UPathFollowingManager::IsFollowingAPath(AController *param_1)

{
  code *pcVar1;
  longlong lVar2;
  UClass *local_res8;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x738);
  local_res8 = UPathFollowingComponent::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  lVar2 = (*pcVar1)(param_1,&local_res8);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x264) != '\0')) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUPathFollowingManager @ 146fd3780

void __cdecl UPathFollowingManager::StaticRegisterNativesUPathFollowingManager(void)

{
  return;
}

// StopMovement @ 146fd3790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl UPathFollowingManager::StopMovement(AController *param_1)

{
  APawn *pAVar1;
  code *pcVar2;
  longlong *plVar3;
  FName local_res8;
  ForAnyElementType in_stack_ffffffffffffffd8;
  FString local_18;
  
  if (FVisualLogger::bIsRecording == 0) goto LAB_146fd3825;
  pAVar1 = (param_1->Pawn).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pAVar1 != (APawn *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
      goto LAB_146fd37cb;
    }
LAB_146fd3897:
    ::FString::FString(&local_18,L"None");
  }
  else {
    if (pAVar1 == (APawn *)0x0) goto LAB_146fd3897;
LAB_146fd37cb:
    local_res8 = (FName)pAVar1->_padding_;
    ::FName::ToString(&local_res8,&local_18);
  }
  in_stack_ffffffffffffffd8.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    in_stack_ffffffffffffffd8.Data = local_18.Data.AllocatorInstance.Data;
  }
  FVisualLogger::CategorizedLogfImpl
            ((UObject *)param_1,(FName *)&LogNavigation.field_0x4,Log,
             L"AController::StopMovement: %s STOP MOVEMENT");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_146fd3825:
  pcVar2 = *(code **)(param_1->_padding_ + 0x738);
  local_res8 = (FName)UPathFollowingComponent::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  plVar3 = (longlong *)(*pcVar2)(param_1,&local_res8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x518))
              (plVar3,param_1,0x40,FAIRequestID::CurrentRequest.RequestID,
               (ulonglong)in_stack_ffffffffffffffd8.Data & 0xffffffffffffff00);
  }
  return;
}

