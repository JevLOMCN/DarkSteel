// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 444

// CreateCopy @ 146e870b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXUFAIRequestID__AEBUFPathFollowingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAAIController____A6AXUFAIRequestID__AEBUFPathFollowingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146e87140

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXUFAIRequestID__AEBUFPathFollowingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAAIController____A6AXUFAIRequestID__AEBUFPathFollowingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146e87190

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXUFAIRequestID__AEBUFPathFollowingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAAIController____A6AXUFAIRequestID__AEBUFPathFollowingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146e87240

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISystem____A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_288b6a66 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146e872d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISystem____A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_288b6a66 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146e87320

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISystem____A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_288b6a66 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146e873d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAPawn___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISystem____A6AXPEAVAPawn___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_ca699fc1 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146e87460

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAPawn___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISystem____A6AXPEAVAPawn___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_ca699fc1 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146e874b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAPawn___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISystem____A6AXPEAVAPawn___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_ca699fc1 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146e87560

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUBrainComponent__AEBUFAIMessage___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTaskNode____A6AXPEAVUBrainComponent__AEBUFAIMessage___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146e875f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUBrainComponent__AEBUFAIMessage___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTaskNode____A6AXPEAVUBrainComponent__AEBUFAIMessage___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146e87640

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUBrainComponent__AEBUFAIMessage___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTaskNode____A6AXPEAVUBrainComponent__AEBUFAIMessage___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146e8ab40

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
TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
          *this,FAIRequestID param_1,FPathFollowingResult *param_2)

{
  AAIController *pAVar1;
  AAIController *local_res8;
  
  local_res8 = (AAIController *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<AAIController,AAIController_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             param_1.RequestID,param_2);
  return;
}

// Execute @ 146e8aba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
Execute(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
        *this,AActor *param_1)

{
  UAISystem *pUVar1;
  UAISystem *local_res8;
  
  local_res8 = (UAISystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAISystem,UAISystem_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 146e8abf0

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
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
Execute(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
        *this,APawn *param_1)

{
  UAISystem *pUVar1;
  UAISystem *local_res8;
  
  local_res8 = (UAISystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAISystem,UAISystem_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 146e8ac40

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
TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
          *this,UBrainComponent *param_1,FAIMessage *param_2)

{
  UBTTaskNode *pUVar1;
  UBTTaskNode *local_res8;
  
  local_res8 = (UBTTaskNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UBTTaskNode,UBTTaskNode_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// ExecuteIfSafe @ 146e8acd0

/* WARNING: Removing unreachable block (ram,0x000146e8ad0b) */
/* WARNING: Removing unreachable block (ram,0x000146e8ad4f) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
                *this,FAIRequestID param_1,FPathFollowingResult *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AAIController *pAVar3;
  AAIController *pAVar4;
  UObject *pUVar5;
  AAIController *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AAIController *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AAIController *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AAIController *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AAIController *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<AAIController,AAIController_*_&>(&local_res8)
    ;
    (**(code **)&this->MethodPtr)
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               param_1.RequestID,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AAIController *)0x0;
}

// ExecuteIfSafe @ 146e8add0

/* WARNING: Removing unreachable block (ram,0x000146e8ae3e) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
              *this,AActor *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAISystem *pUVar3;
  UAISystem *pUVar4;
  UObject *pUVar5;
  UAISystem *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAISystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAISystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAISystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAISystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAISystem,UAISystem_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAISystem *)0x0;
}

// ExecuteIfSafe @ 146e8aeb0

/* WARNING: Removing unreachable block (ram,0x000146e8af1e) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
              *this,APawn *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAISystem *pUVar3;
  UAISystem *pUVar4;
  UObject *pUVar5;
  UAISystem *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAISystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAISystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAISystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAISystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAISystem,UAISystem_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAISystem *)0x0;
}

// ExecuteIfSafe @ 146e8af90

/* WARNING: Removing unreachable block (ram,0x000146e8b006) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
                *this,UBrainComponent *param_1,FAIMessage *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UBTTaskNode *pUVar3;
  UBTTaskNode *pUVar4;
  UObject *pUVar5;
  UBTTaskNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UBTTaskNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UBTTaskNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UBTTaskNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UBTTaskNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UBTTaskNode,UBTTaskNode_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UBTTaskNode *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146e8d6d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146e8d6e0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146e8d6f0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146e8d700

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 146e8e6c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146e8e6d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146e8e6e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146e8e6f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146e90100

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146e90110

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146e90120

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146e90130

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 146e90af0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146e90b20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146e90b50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146e90b80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 146e92b00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146e92b20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146e92b40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146e92b60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 146e92e00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146e92e20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146e92e40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146e92e60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 146ea2e80

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146ea2e90

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146ea2ea0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146ea2eb0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146ed8290

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlackboardBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTDecorator_BlackboardBase____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146ed8320

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlackboardBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTDecorator_BlackboardBase____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146ed8370

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlackboardBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTDecorator_BlackboardBase____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146ed8420

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlueprintBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTDecorator_BlueprintBase____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146ed84b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlueprintBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTDecorator_BlueprintBase____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146ed8500

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlueprintBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTDecorator_BlueprintBase____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146ed85b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_CompareBBEntries,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTDecorator_CompareBBEntries____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146ed8640

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_CompareBBEntries,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTDecorator_CompareBBEntries____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146ed8690

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_CompareBBEntries,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTDecorator_CompareBBEntries____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146ed8740

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_DefaultFocus,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTService_DefaultFocus____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146ed87d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_DefaultFocus,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTService_DefaultFocus____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146ed8820

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_DefaultFocus,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTService_DefaultFocus____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146ed88d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTService_RunEQS____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146ed8960

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTService_RunEQS____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146ed89b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTService_RunEQS____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146ed8a60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_MoveTo,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_MoveTo____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146ed8af0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_MoveTo,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_MoveTo____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146ed8b40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_MoveTo,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_MoveTo____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146ed8bf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_PlayAnimation____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146ed8c80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_PlayAnimation____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146ed8cd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_PlayAnimation____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146ed8d80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehavior,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_RunBehavior____A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146ed8e10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehavior,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_RunBehavior____A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146ed8e60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehavior,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_RunBehavior____A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146ed8f10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehaviorDynamic,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_RunBehaviorDynamic____A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146ed8fa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehaviorDynamic,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_RunBehaviorDynamic____A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146ed8ff0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehaviorDynamic,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_RunBehaviorDynamic____A6AXAEAVUBehaviorTreeComponent__W4Type_EBTNodeResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146ed90a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_RunEQSQuery____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146ed9130

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_RunEQSQuery____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146ed9180

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_RunEQSQuery____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146edfb50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EBlackboardNotificationResult __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlackboardBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(void *this,UBlackboardComponent *param_1,FKey param_2)

{
  EBlackboardNotificationResult EVar1;
  UBTDecorator_BlackboardBase *pUVar2;
  UBTDecorator_BlackboardBase *local_res8;
  
  local_res8 = (UBTDecorator_BlackboardBase *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UBTDecorator_BlackboardBase,UBTDecorator_BlackboardBase_*_&>
                     (&local_res8);
  EVar1 = (**(code **)((longlong)this + 0x20))
                    ((longlong)&pUVar2->_padding_ + (longlong)*(int *)((longlong)this + 0x28),
                     param_1,param_2.Key);
  return EVar1;
}

// Execute @ 146edfbb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EBlackboardNotificationResult __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlueprintBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(void *this,UBlackboardComponent *param_1,FKey param_2)

{
  EBlackboardNotificationResult EVar1;
  UBTDecorator_BlueprintBase *pUVar2;
  UBTDecorator_BlueprintBase *local_res8;
  
  local_res8 = (UBTDecorator_BlueprintBase *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UBTDecorator_BlueprintBase,UBTDecorator_BlueprintBase_*_&>
                     (&local_res8);
  EVar1 = (**(code **)((longlong)this + 0x20))
                    ((longlong)&pUVar2->_padding_ + (longlong)*(int *)((longlong)this + 0x28),
                     param_1,param_2.Key);
  return EVar1;
}

// Execute @ 146edfc10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EBlackboardNotificationResult __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_CompareBBEntries,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(void *this,UBlackboardComponent *param_1,FKey param_2)

{
  EBlackboardNotificationResult EVar1;
  UBTDecorator_CompareBBEntries *pUVar2;
  UBTDecorator_CompareBBEntries *local_res8;
  
  local_res8 = (UBTDecorator_CompareBBEntries *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UBTDecorator_CompareBBEntries,UBTDecorator_CompareBBEntries_*_&>
                     (&local_res8);
  EVar1 = (**(code **)((longlong)this + 0x20))
                    ((longlong)&pUVar2->_padding_ + (longlong)*(int *)((longlong)this + 0x28),
                     param_1,param_2.Key);
  return EVar1;
}

// Execute @ 146edfc70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EBlackboardNotificationResult __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_DefaultFocus,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(void *this,UBlackboardComponent *param_1,FKey param_2)

{
  EBlackboardNotificationResult EVar1;
  UBTService_DefaultFocus *pUVar2;
  UBTService_DefaultFocus *local_res8;
  
  local_res8 = (UBTService_DefaultFocus *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UBTService_DefaultFocus,UBTService_DefaultFocus_*_&>(&local_res8);
  EVar1 = (**(code **)((longlong)this + 0x20))
                    ((longlong)&pUVar2->_padding_ + (longlong)*(int *)((longlong)this + 0x28),
                     param_1,param_2.Key);
  return EVar1;
}

// Execute @ 146edfcd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<FEnvQueryResult,1> *param_1)

{
  UBTService_RunEQS *pUVar1;
  UBTService_RunEQS *local_res8;
  FEnvQueryResult *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  local_res8 = (UBTService_RunEQS *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FEnvQueryResult *)0x0;
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UBTService_RunEQS,UBTService_RunEQS_*_&>
                     (&local_res8);
  (*local_18)((longlong)&pUVar1->_padding_ + (longlong)(int)uStack_10,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 146edfd60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EBlackboardNotificationResult __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_MoveTo,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(void *this,UBlackboardComponent *param_1,FKey param_2)

{
  EBlackboardNotificationResult EVar1;
  UBTTask_MoveTo *pUVar2;
  UBTTask_MoveTo *local_res8;
  
  local_res8 = (UBTTask_MoveTo *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar2 = UE::Core::Private::DereferenceIfNecessary<UBTTask_MoveTo,UBTTask_MoveTo_*_&>(&local_res8)
  ;
  EVar1 = (**(code **)((longlong)this + 0x20))
                    ((longlong)&pUVar2->_padding_ + (longlong)*(int *)((longlong)this + 0x28),
                     param_1,param_2.Key);
  return EVar1;
}

// Execute @ 146edfdc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UBTTask_PlayAnimation *pUVar1;
  UBTTask_PlayAnimation *local_res8 [4];
  
  local_res8[0] = (UBTTask_PlayAnimation *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UBTTask_PlayAnimation,UBTTask_PlayAnimation_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 146edfe00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehavior,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,UBehaviorTreeComponent *param_1,Type param_2)

{
  UBTTask_RunBehavior *pUVar1;
  UBTTask_RunBehavior *local_res8;
  
  local_res8 = (UBTTask_RunBehavior *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18))
  ;
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UBTTask_RunBehavior,UBTTask_RunBehavior_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
             param_2);
  return;
}

// Execute @ 146edfe60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehaviorDynamic,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,UBehaviorTreeComponent *param_1,Type param_2)

{
  UBTTask_RunBehaviorDynamic *pUVar1;
  UBTTask_RunBehaviorDynamic *local_res8;
  
  local_res8 = (UBTTask_RunBehaviorDynamic *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UBTTask_RunBehaviorDynamic,UBTTask_RunBehaviorDynamic_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
             param_2);
  return;
}

// Execute @ 146edfec0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<FEnvQueryResult,1> *param_1)

{
  UBTTask_RunEQSQuery *pUVar1;
  UBTTask_RunEQSQuery *local_res8;
  FEnvQueryResult *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  local_res8 = (UBTTask_RunEQSQuery *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FEnvQueryResult *)0x0;
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UBTTask_RunEQSQuery,UBTTask_RunEQSQuery_*_&>
                     (&local_res8);
  (*local_18)((longlong)&pUVar1->_padding_ + (longlong)(int)uStack_10,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteIfSafe @ 146edff50

/* WARNING: Removing unreachable block (ram,0x000146edff8d) */
/* WARNING: Removing unreachable block (ram,0x000146edffd1) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlackboardBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(void *this,UBlackboardComponent *param_1,FKey param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UBTDecorator_BlackboardBase *pUVar3;
  UBTDecorator_BlackboardBase *pUVar4;
  UObject *pUVar5;
  UBTDecorator_BlackboardBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UBTDecorator_BlackboardBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UBTDecorator_BlackboardBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UBTDecorator_BlackboardBase *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UBTDecorator_BlackboardBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UBTDecorator_BlackboardBase,UBTDecorator_BlackboardBase_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2.Key);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UBTDecorator_BlackboardBase *)0x0;
}

// ExecuteIfSafe @ 146ee0050

/* WARNING: Removing unreachable block (ram,0x000146ee008d) */
/* WARNING: Removing unreachable block (ram,0x000146ee00d1) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlueprintBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(void *this,UBlackboardComponent *param_1,FKey param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UBTDecorator_BlueprintBase *pUVar3;
  UBTDecorator_BlueprintBase *pUVar4;
  UObject *pUVar5;
  UBTDecorator_BlueprintBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UBTDecorator_BlueprintBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UBTDecorator_BlueprintBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UBTDecorator_BlueprintBase *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UBTDecorator_BlueprintBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UBTDecorator_BlueprintBase,UBTDecorator_BlueprintBase_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2.Key);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UBTDecorator_BlueprintBase *)0x0;
}

// ExecuteIfSafe @ 146ee0150

/* WARNING: Removing unreachable block (ram,0x000146ee018d) */
/* WARNING: Removing unreachable block (ram,0x000146ee01d1) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_CompareBBEntries,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(void *this,UBlackboardComponent *param_1,FKey param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UBTDecorator_CompareBBEntries *pUVar3;
  UBTDecorator_CompareBBEntries *pUVar4;
  UObject *pUVar5;
  UBTDecorator_CompareBBEntries *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UBTDecorator_CompareBBEntries *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UBTDecorator_CompareBBEntries *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UBTDecorator_CompareBBEntries *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UBTDecorator_CompareBBEntries *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UBTDecorator_CompareBBEntries,UBTDecorator_CompareBBEntries_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2.Key);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UBTDecorator_CompareBBEntries *)0x0;
}

// ExecuteIfSafe @ 146ee0250

/* WARNING: Removing unreachable block (ram,0x000146ee028d) */
/* WARNING: Removing unreachable block (ram,0x000146ee02d1) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_DefaultFocus,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(void *this,UBlackboardComponent *param_1,FKey param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UBTService_DefaultFocus *pUVar3;
  UBTService_DefaultFocus *pUVar4;
  UObject *pUVar5;
  UBTService_DefaultFocus *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UBTService_DefaultFocus *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UBTService_DefaultFocus *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UBTService_DefaultFocus *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18))
  ;
  if (pUVar3 != (UBTService_DefaultFocus *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UBTService_DefaultFocus,UBTService_DefaultFocus_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2.Key);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UBTService_DefaultFocus *)0x0;
}

// ExecuteIfSafe @ 146ee0350

/* WARNING: Removing unreachable block (ram,0x000146ee03b9) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FEnvQueryResult,1> *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UBTService_RunEQS *pUVar3;
  UObject *pUVar4;
  UBTService_RunEQS *local_res8;
  FEnvQueryResult *local_38;
  TReferenceControllerBase<1> *local_30;
  code *local_28;
  undefined8 uStack_20;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UBTService_RunEQS *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UBTService_RunEQS *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UBTService_RunEQS *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UBTService_RunEQS *)0x0) {
    local_28 = *(code **)&this->MethodPtr;
    uStack_20 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FEnvQueryResult *)0x0;
    local_res8 = pUVar3;
    pUVar3 = UE::Core::Private::DereferenceIfNecessary<UBTService_RunEQS,UBTService_RunEQS_*_&>
                       (&local_res8);
    (*local_28)((longlong)&pUVar3->_padding_ + (longlong)(int)uStack_20,&local_38);
    if (pUVar4 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 146ee0490

/* WARNING: Removing unreachable block (ram,0x000146ee04cd) */
/* WARNING: Removing unreachable block (ram,0x000146ee0511) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_MoveTo,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(void *this,UBlackboardComponent *param_1,FKey param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UBTTask_MoveTo *pUVar3;
  UBTTask_MoveTo *pUVar4;
  UObject *pUVar5;
  UBTTask_MoveTo *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UBTTask_MoveTo *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UBTTask_MoveTo *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UBTTask_MoveTo *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UBTTask_MoveTo *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UBTTask_MoveTo,UBTTask_MoveTo_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2.Key);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UBTTask_MoveTo *)0x0;
}

// ExecuteIfSafe @ 146ee0590

/* WARNING: Removing unreachable block (ram,0x000146ee05f6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UBTTask_PlayAnimation *pUVar3;
  UBTTask_PlayAnimation *pUVar4;
  UObject *pUVar5;
  UBTTask_PlayAnimation *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UBTTask_PlayAnimation *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UBTTask_PlayAnimation *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UBTTask_PlayAnimation *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UBTTask_PlayAnimation *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UBTTask_PlayAnimation,UBTTask_PlayAnimation_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UBTTask_PlayAnimation *)0x0;
}

// ExecuteIfSafe @ 146ee0660

/* WARNING: Removing unreachable block (ram,0x000146ee06d6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehavior,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UBehaviorTreeComponent *param_1,Type param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UBTTask_RunBehavior *pUVar3;
  UBTTask_RunBehavior *pUVar4;
  UObject *pUVar5;
  UBTTask_RunBehavior *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UBTTask_RunBehavior *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UBTTask_RunBehavior *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UBTTask_RunBehavior *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UBTTask_RunBehavior *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UBTTask_RunBehavior,UBTTask_RunBehavior_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UBTTask_RunBehavior *)0x0;
}

// ExecuteIfSafe @ 146ee0750

/* WARNING: Removing unreachable block (ram,0x000146ee07c6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehaviorDynamic,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UBehaviorTreeComponent *param_1,Type param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UBTTask_RunBehaviorDynamic *pUVar3;
  UBTTask_RunBehaviorDynamic *pUVar4;
  UObject *pUVar5;
  UBTTask_RunBehaviorDynamic *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UBTTask_RunBehaviorDynamic *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UBTTask_RunBehaviorDynamic *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UBTTask_RunBehaviorDynamic *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UBTTask_RunBehaviorDynamic *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UBTTask_RunBehaviorDynamic,UBTTask_RunBehaviorDynamic_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UBTTask_RunBehaviorDynamic *)0x0;
}

// ExecuteIfSafe @ 146ee0840

/* WARNING: Removing unreachable block (ram,0x000146ee08a9) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FEnvQueryResult,1> *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UBTTask_RunEQSQuery *pUVar3;
  UObject *pUVar4;
  UBTTask_RunEQSQuery *local_res8;
  FEnvQueryResult *local_38;
  TReferenceControllerBase<1> *local_30;
  code *local_28;
  undefined8 uStack_20;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UBTTask_RunEQSQuery *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UBTTask_RunEQSQuery *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UBTTask_RunEQSQuery *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UBTTask_RunEQSQuery *)0x0) {
    local_28 = *(code **)&this->MethodPtr;
    uStack_20 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FEnvQueryResult *)0x0;
    local_res8 = pUVar3;
    pUVar3 = UE::Core::Private::DereferenceIfNecessary<UBTTask_RunEQSQuery,UBTTask_RunEQSQuery_*_&>
                       (&local_res8);
    (*local_28)((longlong)&pUVar3->_padding_ + (longlong)(int)uStack_20,&local_38);
    if (pUVar4 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 146ee47b0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlackboardBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146ee47c0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlueprintBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146ee47d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_CompareBBEntries,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146ee47e0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_DefaultFocus,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146ee47f0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146ee4800

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_MoveTo,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146ee4810

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146ee4820

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehavior,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146ee4830

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehaviorDynamic,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146ee4840

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 146ee6ab0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlackboardBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146ee6ac0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlueprintBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146ee6ad0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_CompareBBEntries,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146ee6ae0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_DefaultFocus,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146ee6af0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146ee6b00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_MoveTo,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146ee6b10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146ee6b20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehavior,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146ee6b30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehaviorDynamic,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146ee6b40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146eeeaf0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlackboardBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146eeeb00

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlueprintBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146eeeb10

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_CompareBBEntries,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146eeeb20

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_DefaultFocus,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146eeeb30

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146eeeb40

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_MoveTo,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146eeeb50

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146eeeb60

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehavior,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146eeeb70

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehaviorDynamic,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146eeeb80

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 146ef0640

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlackboardBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146ef0670

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlueprintBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146ef06a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_CompareBBEntries,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146ef06d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_DefaultFocus,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146ef0700

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146ef0730

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_MoveTo,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146ef0760

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146ef0790

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehavior,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146ef07c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehaviorDynamic,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146ef07f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 146ef3950

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlackboardBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ef3970

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlueprintBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ef3990

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_CompareBBEntries,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ef39b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_DefaultFocus,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ef39d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ef39f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_MoveTo,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ef3a10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ef3a30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehavior,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ef3a50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehaviorDynamic,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ef3a70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 146ef3d90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlackboardBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ef3db0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlueprintBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ef3dd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_CompareBBEntries,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ef3df0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_DefaultFocus,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ef3e10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ef3e30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_MoveTo,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ef3e50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ef3e70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehavior,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ef3e90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehaviorDynamic,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ef3eb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 146f02e70

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlackboardBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f02e80

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_BlueprintBase,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f02e90

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTDecorator_CompareBBEntries,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f02ea0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_DefaultFocus,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f02eb0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UBTService_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f02ec0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_MoveTo,enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f02ed0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UBTTask_PlayAnimation,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f02ee0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehavior,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f02ef0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunBehaviorDynamic,void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f02f00

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UBTTask_RunEQSQuery,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146f3b780

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AMAEBU__TVector_N_Math_UE__0W4Type_EPathFindingMode__AEBVANavigationData__AEAVUNavigationSystemV1__V__TSharedPtr___CBUFNavigationQueryFilter___00__PEBVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUEnvQueryTest_Pathfinding____A6AMAEBU__TVector_N_Math_UE__0W4Type_EPathFindingMode__AEBVANavigationData__AEAVUNavigationSystemV1__V__TSharedPtr___CBUFNavigationQueryFilter___00__PEBVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f3b810

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AMAEBU__TVector_N_Math_UE__0W4Type_EPathFindingMode__AEBVANavigationData__AEAVUNavigationSystemV1__V__TSharedPtr___CBUFNavigationQueryFilter___00__PEBVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUEnvQueryTest_Pathfinding____A6AMAEBU__TVector_N_Math_UE__0W4Type_EPathFindingMode__AEBVANavigationData__AEAVUNavigationSystemV1__V__TSharedPtr___CBUFNavigationQueryFilter___00__PEBVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 146f3b860

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AMAEBU__TVector_N_Math_UE__0W4Type_EPathFindingMode__AEBVANavigationData__AEAVUNavigationSystemV1__V__TSharedPtr___CBUFNavigationQueryFilter___00__PEBVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUEnvQueryTest_Pathfinding____A6AMAEBU__TVector_N_Math_UE__0W4Type_EPathFindingMode__AEBVANavigationData__AEAVUNavigationSystemV1__V__TSharedPtr___CBUFNavigationQueryFilter___00__PEBVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f3b910

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIAsyncTaskBlueprintProxy____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_42e81743 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f3b9a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIAsyncTaskBlueprintProxy____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_42e81743 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146f3b9f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIAsyncTaskBlueprintProxy____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_42e81743 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f3baa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEnvQueryInstanceBlueprintWrapper____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f3bb30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEnvQueryInstanceBlueprintWrapper____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146f3bb80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEnvQueryInstanceBlueprintWrapper____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146f46220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::Execute(void *this,TVector<double> *param_1,TVector<double> *param_2,Type param_3,
         ANavigationData *param_4,UNavigationSystemV1 *param_5,
         TSharedPtr<FNavigationQueryFilter_const_,1> *param_6,UObject *param_7)

{
  code *pcVar1;
  UEnvQueryTest_Pathfinding *pUVar2;
  float fVar3;
  UEnvQueryTest_Pathfinding *local_res8;
  FNavigationQueryFilter *local_28;
  TReferenceControllerBase<1> *local_20;
  
  local_res8 = (UEnvQueryTest_Pathfinding *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UEnvQueryTest_Pathfinding,UEnvQueryTest_Pathfinding_*_&>
                     (&local_res8);
  pcVar1 = *(code **)((longlong)this + 0x20);
  local_28 = param_6->Object;
  local_20 = (param_6->SharedReferenceCount).ReferenceController;
  (param_6->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_6->Object = (FNavigationQueryFilter *)0x0;
  fVar3 = (float)(*pcVar1)(pUVar2,param_1,param_2,param_3,param_4,param_5,&local_28,param_7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return fVar3;
}

// Execute @ 146f46300

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UAIAsyncTaskBlueprintProxy *pUVar1;
  UAIAsyncTaskBlueprintProxy *local_res8 [4];
  
  local_res8[0] = (UAIAsyncTaskBlueprintProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UAIAsyncTaskBlueprintProxy,UAIAsyncTaskBlueprintProxy_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 146f46340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<FEnvQueryResult,1> *param_1)

{
  UEnvQueryInstanceBlueprintWrapper *pUVar1;
  UEnvQueryInstanceBlueprintWrapper *local_res8;
  FEnvQueryResult *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  local_res8 = (UEnvQueryInstanceBlueprintWrapper *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FEnvQueryResult *)0x0;
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UEnvQueryInstanceBlueprintWrapper,UEnvQueryInstanceBlueprintWrapper_*_&>
                     (&local_res8);
  (*local_18)((longlong)&pUVar1->_padding_ + (longlong)(int)uStack_10,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteIfSafe @ 146f46c90

/* WARNING: Removing unreachable block (ram,0x000146f46d0f) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,TVector<double> *param_1,TVector<double> *param_2,Type param_3,
               ANavigationData *param_4,UNavigationSystemV1 *param_5,
               TSharedPtr<FNavigationQueryFilter_const_,1> *param_6,UObject *param_7)

{
  code *pcVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UEnvQueryTest_Pathfinding *pUVar4;
  UObject *pUVar5;
  UEnvQueryTest_Pathfinding *local_res8;
  FNavigationQueryFilter *local_38;
  TReferenceControllerBase<1> *local_30;
  
  pUVar5 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (UEnvQueryTest_Pathfinding *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UEnvQueryTest_Pathfinding *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_38 = (FNavigationQueryFilter *)0x0;
  }
  pUVar4 = (UEnvQueryTest_Pathfinding *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar4 == (UEnvQueryTest_Pathfinding *)0x0) {
    if (pUVar5 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_6->SharedReferenceCount).ReferenceController);
    bVar2 = false;
  }
  else {
    local_res8 = pUVar4;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UEnvQueryTest_Pathfinding,UEnvQueryTest_Pathfinding_*_&>
                       (&local_res8);
    pcVar1 = *(code **)((longlong)this + 0x20);
    local_38 = param_6->Object;
    local_30 = (param_6->SharedReferenceCount).ReferenceController;
    (param_6->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_6->Object = (FNavigationQueryFilter *)0x0;
    (*pcVar1)(pUVar4,param_1,param_2,param_3,param_4,param_5,&local_38,param_7);
    if (pUVar5 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_6->SharedReferenceCount).ReferenceController);
    bVar2 = true;
  }
  return bVar2;
}

// ExecuteIfSafe @ 146f46e10

/* WARNING: Removing unreachable block (ram,0x000146f46e76) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAIAsyncTaskBlueprintProxy *pUVar3;
  UAIAsyncTaskBlueprintProxy *pUVar4;
  UObject *pUVar5;
  UAIAsyncTaskBlueprintProxy *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAIAsyncTaskBlueprintProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAIAsyncTaskBlueprintProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UAIAsyncTaskBlueprintProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAIAsyncTaskBlueprintProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UAIAsyncTaskBlueprintProxy,UAIAsyncTaskBlueprintProxy_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAIAsyncTaskBlueprintProxy *)0x0;
}

// ExecuteIfSafe @ 146f46ee0

/* WARNING: Removing unreachable block (ram,0x000146f46f49) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FEnvQueryResult,1> *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UEnvQueryInstanceBlueprintWrapper *pUVar3;
  UObject *pUVar4;
  UEnvQueryInstanceBlueprintWrapper *local_res8;
  FEnvQueryResult *local_38;
  TReferenceControllerBase<1> *local_30;
  code *local_28;
  undefined8 uStack_20;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UEnvQueryInstanceBlueprintWrapper *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UEnvQueryInstanceBlueprintWrapper *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UEnvQueryInstanceBlueprintWrapper *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UEnvQueryInstanceBlueprintWrapper *)0x0) {
    local_28 = *(code **)&this->MethodPtr;
    uStack_20 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FEnvQueryResult *)0x0;
    local_res8 = pUVar3;
    pUVar3 = UE::Core::Private::
             DereferenceIfNecessary<UEnvQueryInstanceBlueprintWrapper,UEnvQueryInstanceBlueprintWrapper_*_&>
                       (&local_res8);
    (*local_28)((longlong)&pUVar3->_padding_ + (longlong)(int)uStack_20,&local_38);
    if (pUVar4 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 146f503b0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146f503c0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146f503d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 146f57210

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146f57220

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146f57230

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146f5a970

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146f5a980

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146f5a990

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 146f5b130

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146f5b160

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146f5b190

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 146f5b8a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146f5b8c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146f5b8e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 146f5ba80

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146f5baa0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146f5bac0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 146f7c190

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f7c1a0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f7c1b0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146f9fc90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUNavLinkCustomComponent__PEAVUObject__AEBU__TVector_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VANavLinkProxy____A6AXPEAVUNavLinkCustomComponent__PEAVUObject__AEBU__TVector_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f9fd20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUNavLinkCustomComponent__PEAVUObject__AEBU__TVector_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VANavLinkProxy____A6AXPEAVUNavLinkCustomComponent__PEAVUObject__AEBU__TVector_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146f9fd70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUNavLinkCustomComponent__PEAVUObject__AEBU__TVector_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VANavLinkProxy____A6AXPEAVUNavLinkCustomComponent__PEAVUObject__AEBU__TVector_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f9fe20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIPerceptionComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f9feb0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIPerceptionComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146f9ff00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIPerceptionComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f9ffb0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__U__FAINamedID_UFAISenseCounter______6B_
    ;
    *(char *)(puVar2 + 1) = (char)this->_padding_;
    *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIPerceptionSystem____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__U__FAINamedID_UFAISenseCounter______6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 4) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[5] = *(undefined8 *)&this->MethodPtr;
    puVar2[6] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fa0050

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__U__FAINamedID_UFAISenseCounter______6B_
    ;
    *(char *)(puVar2 + 1) = (char)this->_padding_;
    *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIPerceptionSystem____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__U__FAINamedID_UFAISenseCounter______6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 4) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[5] = *(undefined8 *)&this->MethodPtr;
    puVar2[6] = uVar1;
  }
  return;
}

// CreateCopy @ 146fa00c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__U__FAINamedID_UFAISenseCounter______6B_
    ;
    *(char *)(puVar6 + 1) = (char)this->_padding_;
    *(undefined8 *)((longlong)puVar6 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    puVar6[3] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIPerceptionSystem____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__U__FAINamedID_UFAISenseCounter______6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 4) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar2;
    *(undefined4 *)(puVar6 + 6) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x34) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fa0180

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Blueprint____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_7a6ad8ca *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fa0210

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Blueprint____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_7a6ad8ca *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146fa0260

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Blueprint____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_7a6ad8ca *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fa0310

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Hearing____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a885e5e9 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fa03a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Hearing____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a885e5e9 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146fa03f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Hearing____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a885e5e9 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fa04a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAISightQueryID___NMAEBU__TVector_N_Math_UE__AEBU__TOptional_H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFAISightQueryID___NMAEBU__TVector_N_Math_UE__AEBU__TOptional_H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cbb71cd7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fa0530

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAISightQueryID___NMAEBU__TVector_N_Math_UE__AEBU__TOptional_H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFAISightQueryID___NMAEBU__TVector_N_Math_UE__AEBU__TOptional_H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cbb71cd7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146fa0580

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAISightQueryID___NMAEBU__TVector_N_Math_UE__AEBU__TOptional_H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFAISightQueryID___NMAEBU__TVector_N_Math_UE__AEBU__TOptional_H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cbb71cd7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fa0630

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_fdc0a3c0 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fa06c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_fdc0a3c0 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146fa0710

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_fdc0a3c0 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fa07c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_da0b70e7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fa0850

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_da0b70e7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146fa08a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_da0b70e7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fa0950

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCrowdFollowingComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fa09e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCrowdFollowingComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146fa0a30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCrowdFollowingComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fa0ae0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCrowdManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e992dfa7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fa0b70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCrowdManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e992dfa7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146fa0bc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCrowdManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e992dfa7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fa0c70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fa0d00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146fa0d50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fa0e00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAPawn___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXPEAVAPawn___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fa0e90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAPawn___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXPEAVAPawn___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146fa0ee0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAPawn___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXPEAVAPawn___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fa0f90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fa1020

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146fa1070

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fa1120

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fa11b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146fa1200

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146fa6e90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
          *this,UNavLinkCustomComponent *param_1,UObject *param_2,TVector<double> *param_3)

{
  ANavLinkProxy *pAVar1;
  ANavLinkProxy *local_res8;
  
  local_res8 = (ANavLinkProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<ANavLinkProxy,ANavLinkProxy_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return;
}

// Execute @ 146fa6f00

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
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UAIPerceptionComponent *pUVar1;
  UAIPerceptionComponent *local_res8 [4];
  
  local_res8[0] = (UAIPerceptionComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UAIPerceptionComponent,UAIPerceptionComponent_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 146fa6f40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
          *this)

{
  UAIPerceptionSystem *pUVar1;
  UAIPerceptionSystem *local_res8 [4];
  undefined1 local_18 [4];
  undefined8 local_14;
  
  local_res8[0] = (UAIPerceptionSystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  local_18[0] = (undefined1)this->_padding_;
  local_14 = *(undefined8 *)((longlong)&this->_padding_ + 4);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAIPerceptionSystem,UAIPerceptionSystem_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,local_18)
  ;
  return;
}

// Execute @ 146fa6fa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
          *this,FPerceptionListener *param_1)

{
  UAISense_Blueprint *pUVar1;
  UAISense_Blueprint *local_res8;
  
  local_res8 = (UAISense_Blueprint *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAISense_Blueprint,UAISense_Blueprint_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 146fa6ff0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
          *this,FPerceptionListener *param_1)

{
  UAISense_Hearing *pUVar1;
  UAISense_Hearing *local_res8;
  
  local_res8 = (UAISense_Hearing *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAISense_Hearing,UAISense_Hearing_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 146fa7040

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
          *this,FAISightQueryID *param_1,bool param_2,float param_3,TVector<double> *param_4,
         TOptional<int> *param_5)

{
  UAISense_Sight *pUVar1;
  UAISense_Sight *local_res8;
  
  local_res8 = (UAISense_Sight *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAISense_Sight,UAISense_Sight_*_&>(&local_res8)
  ;
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}

// Execute @ 146fa70d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
          *this,FPerceptionListener *param_1)

{
  UAISense_Sight *pUVar1;
  UAISense_Sight *local_res8;
  
  local_res8 = (UAISense_Sight *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAISense_Sight,UAISense_Sight_*_&>(&local_res8)
  ;
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 146fa7120

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
          *this,FTraceHandle *param_1,FTraceDatum *param_2)

{
  UAISense_Sight *pUVar1;
  UAISense_Sight *local_res8;
  
  local_res8 = (UAISense_Sight *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAISense_Sight,UAISense_Sight_*_&>(&local_res8)
  ;
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 146fa7180

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UCrowdFollowingComponent *pUVar1;
  UCrowdFollowingComponent *local_res8 [4];
  
  local_res8[0] = (UCrowdFollowingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCrowdFollowingComponent,UCrowdFollowingComponent_*_&>(local_res8)
  ;
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 146fa71c0

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
TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  UCrowdManager *pUVar1;
  UCrowdManager *local_res8 [4];
  
  local_res8[0] = (UCrowdManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCrowdManager,UCrowdManager_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 146fa7200

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
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,FNavigationPath *param_1,Type param_2)

{
  UPathFollowingComponent *pUVar1;
  UPathFollowingComponent *local_res8;
  
  local_res8 = (UPathFollowingComponent *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UPathFollowingComponent,UPathFollowingComponent_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
             param_2);
  return;
}

// Execute @ 146fa7260

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
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
          *this,APawn *param_1)

{
  UPathFollowingComponent *pUVar1;
  UPathFollowingComponent *local_res8;
  
  local_res8 = (UPathFollowingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UPathFollowingComponent,UPathFollowingComponent_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 146fa72b0

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
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UPathFollowingComponent *pUVar1;
  UPathFollowingComponent *local_res8 [4];
  
  local_res8[0] = (UPathFollowingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UPathFollowingComponent,UPathFollowingComponent_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 146fa72f0

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
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UPathFollowingComponent *pUVar1;
  UPathFollowingComponent *local_res8 [4];
  
  local_res8[0] = (UPathFollowingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UPathFollowingComponent,UPathFollowingComponent_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// ExecuteIfSafe @ 146fa7690

/* WARNING: Removing unreachable block (ram,0x000146fa770e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
                *this,UNavLinkCustomComponent *param_1,UObject *param_2,TVector<double> *param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ANavLinkProxy *pAVar3;
  ANavLinkProxy *pAVar4;
  UObject *pUVar5;
  ANavLinkProxy *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ANavLinkProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ANavLinkProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (ANavLinkProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (ANavLinkProxy *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<ANavLinkProxy,ANavLinkProxy_*_&>(&local_res8)
    ;
    (**(code **)&this->MethodPtr)
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (ANavLinkProxy *)0x0;
}

// ExecuteIfSafe @ 146fa7790

/* WARNING: Removing unreachable block (ram,0x000146fa77f6) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAIPerceptionComponent *pUVar3;
  UAIPerceptionComponent *pUVar4;
  UObject *pUVar5;
  UAIPerceptionComponent *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAIPerceptionComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAIPerceptionComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UAIPerceptionComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAIPerceptionComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UAIPerceptionComponent,UAIPerceptionComponent_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAIPerceptionComponent *)0x0;
}

// ExecuteIfSafe @ 146fa7860

/* WARNING: Removing unreachable block (ram,0x000146fa78c6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAIPerceptionSystem *pUVar3;
  UAIPerceptionSystem *pUVar4;
  UObject *pUVar5;
  UAIPerceptionSystem *local_res8;
  undefined8 local_res10;
  undefined1 local_28 [4];
  undefined8 local_24;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAIPerceptionSystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAIPerceptionSystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UAIPerceptionSystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAIPerceptionSystem *)0x0) {
    local_28[0] = (undefined1)this->_padding_;
    local_24 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAIPerceptionSystem,UAIPerceptionSystem_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               local_28);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAIPerceptionSystem *)0x0;
}

// ExecuteIfSafe @ 146fa7940

/* WARNING: Removing unreachable block (ram,0x000146fa79ae) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                *this,FPerceptionListener *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAISense_Blueprint *pUVar3;
  UAISense_Blueprint *pUVar4;
  UObject *pUVar5;
  UAISense_Blueprint *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAISense_Blueprint *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAISense_Blueprint *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAISense_Blueprint *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAISense_Blueprint *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAISense_Blueprint,UAISense_Blueprint_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAISense_Blueprint *)0x0;
}

// ExecuteIfSafe @ 146fa7a20

/* WARNING: Removing unreachable block (ram,0x000146fa7a8e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                *this,FPerceptionListener *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAISense_Hearing *pUVar3;
  UAISense_Hearing *pUVar4;
  UObject *pUVar5;
  UAISense_Hearing *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAISense_Hearing *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAISense_Hearing *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAISense_Hearing *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAISense_Hearing *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAISense_Hearing,UAISense_Hearing_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAISense_Hearing *)0x0;
}

// ExecuteIfSafe @ 146fa7b00

/* WARNING: Removing unreachable block (ram,0x000146fa7b7c) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
                *this,FAISightQueryID *param_1,bool param_2,float param_3,TVector<double> *param_4,
               TOptional<int> *param_5)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAISense_Sight *pUVar3;
  UAISense_Sight *pUVar4;
  UObject *pUVar5;
  UAISense_Sight *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAISense_Sight *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAISense_Sight *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAISense_Sight *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAISense_Sight *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAISense_Sight,UAISense_Sight_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2,param_3,param_4,param_5);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAISense_Sight *)0x0;
}

// ExecuteIfSafe @ 146fa7c20

/* WARNING: Removing unreachable block (ram,0x000146fa7c8e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                *this,FPerceptionListener *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAISense_Sight *pUVar3;
  UAISense_Sight *pUVar4;
  UObject *pUVar5;
  UAISense_Sight *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAISense_Sight *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAISense_Sight *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAISense_Sight *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAISense_Sight *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAISense_Sight,UAISense_Sight_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAISense_Sight *)0x0;
}

// ExecuteIfSafe @ 146fa7d00

/* WARNING: Removing unreachable block (ram,0x000146fa7d76) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
                *this,FTraceHandle *param_1,FTraceDatum *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAISense_Sight *pUVar3;
  UAISense_Sight *pUVar4;
  UObject *pUVar5;
  UAISense_Sight *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAISense_Sight *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAISense_Sight *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAISense_Sight *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAISense_Sight *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAISense_Sight,UAISense_Sight_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAISense_Sight *)0x0;
}

// ExecuteIfSafe @ 146fa7df0

/* WARNING: Removing unreachable block (ram,0x000146fa7e56) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCrowdFollowingComponent *pUVar3;
  UCrowdFollowingComponent *pUVar4;
  UObject *pUVar5;
  UCrowdFollowingComponent *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCrowdFollowingComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCrowdFollowingComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCrowdFollowingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCrowdFollowingComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCrowdFollowingComponent,UCrowdFollowingComponent_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCrowdFollowingComponent *)0x0;
}

// ExecuteIfSafe @ 146fa7ec0

/* WARNING: Removing unreachable block (ram,0x000146fa7f26) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCrowdManager *pUVar3;
  UCrowdManager *pUVar4;
  UObject *pUVar5;
  UCrowdManager *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCrowdManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCrowdManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCrowdManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCrowdManager *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCrowdManager,UCrowdManager_*_&>(&local_res8)
    ;
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCrowdManager *)0x0;
}

// ExecuteIfSafe @ 146fa7f90

/* WARNING: Removing unreachable block (ram,0x000146fa8006) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,FNavigationPath *param_1,Type param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UPathFollowingComponent *pUVar3;
  UPathFollowingComponent *pUVar4;
  UObject *pUVar5;
  UPathFollowingComponent *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UPathFollowingComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UPathFollowingComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UPathFollowingComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18))
  ;
  if (pUVar3 != (UPathFollowingComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UPathFollowingComponent,UPathFollowingComponent_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UPathFollowingComponent *)0x0;
}

// ExecuteIfSafe @ 146fa8080

/* WARNING: Removing unreachable block (ram,0x000146fa80ee) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
                *this,APawn *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UPathFollowingComponent *pUVar3;
  UPathFollowingComponent *pUVar4;
  UObject *pUVar5;
  UPathFollowingComponent *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UPathFollowingComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UPathFollowingComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UPathFollowingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UPathFollowingComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UPathFollowingComponent,UPathFollowingComponent_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UPathFollowingComponent *)0x0;
}

// ExecuteIfSafe @ 146fa8160

/* WARNING: Removing unreachable block (ram,0x000146fa81c6) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UPathFollowingComponent *pUVar3;
  UPathFollowingComponent *pUVar4;
  UObject *pUVar5;
  UPathFollowingComponent *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UPathFollowingComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UPathFollowingComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UPathFollowingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UPathFollowingComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UPathFollowingComponent,UPathFollowingComponent_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UPathFollowingComponent *)0x0;
}

// ExecuteIfSafe @ 146fa8230

/* WARNING: Removing unreachable block (ram,0x000146fa8296) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UPathFollowingComponent *pUVar3;
  UPathFollowingComponent *pUVar4;
  UObject *pUVar5;
  UPathFollowingComponent *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UPathFollowingComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UPathFollowingComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UPathFollowingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UPathFollowingComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UPathFollowingComponent,UPathFollowingComponent_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UPathFollowingComponent *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146fac2b0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac2c0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac2d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac2e0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac2f0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac300

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac310

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac320

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac330

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac340

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac350

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146fac360

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac370

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac380

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 146fb2f10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146fb2f20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146fb2f30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146fb2f40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146fb2f50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146fb2f60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146fb2f70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146fb2f80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146fb2f90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146fb2fa0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146fb2fb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146fb2fc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146fb2fd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146fb2fe0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146fb5bd0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146fb5be0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146fb5bf0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146fb5c00

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146fb5c10

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146fb5c20

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146fb5c30

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146fb5c40

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146fb5c50

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146fb5c60

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146fb5c70

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146fb5c80

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146fb5c90

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146fb5ca0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 146fb8110

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146fb8140

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146fb8170

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146fb81a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146fb81d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146fb8200

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146fb8230

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146fb8260

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146fb8290

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146fb82c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146fb82f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146fb8320

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146fb8350

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146fb8380

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 146fb9600

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146fb9620

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146fb9640

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146fb9660

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146fb9680

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146fb96a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146fb96c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146fb96e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146fb9700

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146fb9720

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146fb9740

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146fb9760

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146fb9780

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146fb97a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9e00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9e20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9e40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9e60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9e80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9ea0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9ec0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9ee0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9f00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9f20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9f40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9f60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9f80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146fb9fa0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 146fd9ae0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9af0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9b00

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9b10

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9b20

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9b30

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9b40

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9b50

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9b60

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9b70

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9b80

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9b90

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9ba0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9bb0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146fee340

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Touch____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_6daf1f9e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fee3d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Touch____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_6daf1f9e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146fee420

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Touch____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_6daf1f9e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fee4d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_MoveTo____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fee560

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_MoveTo____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146fee5b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_MoveTo____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fee660

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXUFAIRequestID__AEBUFPathFollowingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_MoveTo____A6AXUFAIRequestID__AEBUFPathFollowingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fee6f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXUFAIRequestID__AEBUFPathFollowingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_MoveTo____A6AXUFAIRequestID__AEBUFPathFollowingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146fee740

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXUFAIRequestID__AEBUFPathFollowingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_MoveTo____A6AXUFAIRequestID__AEBUFPathFollowingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fee7f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_MoveTo____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146fee880

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_MoveTo____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146fee8d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_MoveTo____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146fee980

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_RunEQS____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146feea10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_RunEQS____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146feea60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_RunEQS____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146feeb10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPawnSensingComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146feeba0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPawnSensingComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146feebf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPawnSensingComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146fefbc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
          *this,FPerceptionListener *param_1)

{
  UAISense_Touch *pUVar1;
  UAISense_Touch *local_res8;
  
  local_res8 = (UAISense_Touch *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAISense_Touch,UAISense_Touch_*_&>(&local_res8)
  ;
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 146fefc10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,FNavigationPath *param_1,Type param_2)

{
  UAITask_MoveTo *pUVar1;
  UAITask_MoveTo *local_res8;
  
  local_res8 = (UAITask_MoveTo *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAITask_MoveTo,UAITask_MoveTo_*_&>(&local_res8)
  ;
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
             param_2);
  return;
}

// Execute @ 146fefc70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
          *this,FAIRequestID param_1,FPathFollowingResult *param_2)

{
  UAITask_MoveTo *pUVar1;
  UAITask_MoveTo *local_res8;
  
  local_res8 = (UAITask_MoveTo *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAITask_MoveTo,UAITask_MoveTo_*_&>(&local_res8)
  ;
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             param_1.RequestID,param_2);
  return;
}

// Execute @ 146fefcd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UAITask_MoveTo *pUVar1;
  UAITask_MoveTo *local_res8 [4];
  
  local_res8[0] = (UAITask_MoveTo *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAITask_MoveTo,UAITask_MoveTo_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 146fefd10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<FEnvQueryResult,1> *param_1)

{
  UAITask_RunEQS *pUVar1;
  UAITask_RunEQS *local_res8;
  FEnvQueryResult *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  local_res8 = (UAITask_RunEQS *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FEnvQueryResult *)0x0;
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAITask_RunEQS,UAITask_RunEQS_*_&>(&local_res8)
  ;
  (*local_18)((longlong)&pUVar1->_padding_ + (longlong)(int)uStack_10,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 146fefda0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UPawnSensingComponent *pUVar1;
  UPawnSensingComponent *local_res8 [4];
  
  local_res8[0] = (UPawnSensingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UPawnSensingComponent,UPawnSensingComponent_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// ExecuteIfSafe @ 146fefde0

/* WARNING: Removing unreachable block (ram,0x000146fefe4e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                *this,FPerceptionListener *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAISense_Touch *pUVar3;
  UAISense_Touch *pUVar4;
  UObject *pUVar5;
  UAISense_Touch *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAISense_Touch *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAISense_Touch *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAISense_Touch *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAISense_Touch *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAISense_Touch,UAISense_Touch_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAISense_Touch *)0x0;
}

// ExecuteIfSafe @ 146fefec0

/* WARNING: Removing unreachable block (ram,0x000146feff36) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,FNavigationPath *param_1,Type param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAITask_MoveTo *pUVar3;
  UAITask_MoveTo *pUVar4;
  UObject *pUVar5;
  UAITask_MoveTo *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAITask_MoveTo *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAITask_MoveTo *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAITask_MoveTo *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UAITask_MoveTo *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAITask_MoveTo,UAITask_MoveTo_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAITask_MoveTo *)0x0;
}

// ExecuteIfSafe @ 146feffb0

/* WARNING: Removing unreachable block (ram,0x000146feffeb) */
/* WARNING: Removing unreachable block (ram,0x000146ff002f) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
                *this,FAIRequestID param_1,FPathFollowingResult *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAITask_MoveTo *pUVar3;
  UAITask_MoveTo *pUVar4;
  UObject *pUVar5;
  UAITask_MoveTo *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAITask_MoveTo *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAITask_MoveTo *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAITask_MoveTo *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAITask_MoveTo *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAITask_MoveTo,UAITask_MoveTo_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               param_1.RequestID,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAITask_MoveTo *)0x0;
}

// ExecuteIfSafe @ 146ff00b0

/* WARNING: Removing unreachable block (ram,0x000146ff0116) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAITask_MoveTo *pUVar3;
  UAITask_MoveTo *pUVar4;
  UObject *pUVar5;
  UAITask_MoveTo *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAITask_MoveTo *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAITask_MoveTo *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UAITask_MoveTo *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAITask_MoveTo *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAITask_MoveTo,UAITask_MoveTo_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAITask_MoveTo *)0x0;
}

// ExecuteIfSafe @ 146ff0180

/* WARNING: Removing unreachable block (ram,0x000146ff01e9) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FEnvQueryResult,1> *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAITask_RunEQS *pUVar3;
  UObject *pUVar4;
  UAITask_RunEQS *local_res8;
  FEnvQueryResult *local_38;
  TReferenceControllerBase<1> *local_30;
  code *local_28;
  undefined8 uStack_20;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAITask_RunEQS *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAITask_RunEQS *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAITask_RunEQS *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAITask_RunEQS *)0x0) {
    local_28 = *(code **)&this->MethodPtr;
    uStack_20 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FEnvQueryResult *)0x0;
    local_res8 = pUVar3;
    pUVar3 = UE::Core::Private::DereferenceIfNecessary<UAITask_RunEQS,UAITask_RunEQS_*_&>
                       (&local_res8);
    (*local_28)((longlong)&pUVar3->_padding_ + (longlong)(int)uStack_20,&local_38);
    if (pUVar4 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 146ff02c0

/* WARNING: Removing unreachable block (ram,0x000146ff0326) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UPawnSensingComponent *pUVar3;
  UPawnSensingComponent *pUVar4;
  UObject *pUVar5;
  UPawnSensingComponent *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UPawnSensingComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UPawnSensingComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UPawnSensingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UPawnSensingComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UPawnSensingComponent,UPawnSensingComponent_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UPawnSensingComponent *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146ff06f0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146ff0700

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146ff0710

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146ff0720

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146ff0730

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146ff0740

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 146ff0750

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146ff0760

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146ff0770

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146ff0780

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146ff0790

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146ff07a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146ff1240

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146ff1250

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146ff1260

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146ff1270

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146ff1280

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146ff1290

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 146ff13b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146ff13e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146ff1410

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146ff1440

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146ff1470

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146ff14a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 146ff1670

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ff1690

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ff16b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ff16d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ff16f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146ff1710

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 146ff17e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ff1800

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ff1820

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ff1840

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ff1860

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146ff1880

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 146ff3d90

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146ff3da0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146ff3db0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146ff3dc0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146ff3dd0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146ff3de0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

