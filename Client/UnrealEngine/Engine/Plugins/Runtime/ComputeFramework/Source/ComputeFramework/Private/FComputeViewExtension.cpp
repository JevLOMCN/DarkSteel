// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 3

// FComputeViewExtension @ 1494c4530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FComputeViewExtension * __thiscall
FComputeViewExtension::FComputeViewExtension
          (FComputeViewExtension *this,FAutoRegister *param_1,UWorld *param_2)

{
  FWorldSceneViewExtension::FWorldSceneViewExtension
            ((FWorldSceneViewExtension *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7FComputeViewExtension__6B_;
  (this->ComputeWorkers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComputeWorkers).ArrayNum = 0;
  (this->ComputeWorkers).ArrayMax = 0;
  return this;
}

// GetFlags @ 1494cf6a0

ESceneViewExtensionFlags __thiscall FComputeViewExtension::GetFlags(FComputeViewExtension *this)

{
  TArray<IComputeTaskWorker_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  UObject *pUVar9;
  FScriptContainerElement *pFVar10;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  
  local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
  bVar7 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar7) {
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    plVar6 = *(longlong **)(pUVar9 + 0xf);
    if (plVar6 != (longlong *)0x0) {
      uVar4 = (this->ComputeWorkers).ArrayNum;
      pTVar1 = &this->ComputeWorkers;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      piVar2 = &(this->ComputeWorkers).ArrayMax;
      (this->ComputeWorkers).ArrayNum = 0;
      if (*piVar2 != uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar4,&pTVar1->AllocatorInstance,0,piVar2);
      }
      (**(code **)(*plVar6 + 0x468))(plVar6,pTVar1);
      pFVar10 = (pTVar1->AllocatorInstance).Data;
      iVar5 = (this->ComputeWorkers).ArrayNum;
      pFVar3 = pFVar10 + (longlong)iVar5 * 8;
      while( true ) {
        if ((this->ComputeWorkers).ArrayNum != iVar5) {
          `TCheckedPointerIterator<IComputeTaskWorker_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (pFVar10 == pFVar3) break;
        cVar8 = (**(code **)(**(longlong **)pFVar10 + 8))
                          (*(longlong **)pFVar10,ComputeTaskExecutionGroup::PostTLASBuild);
        if (cVar8 != '\0') {
          return SubscribesToPostTLASBuild;
        }
        pFVar10 = pFVar10 + 8;
      }
    }
  }
  return None;
}

// PostTLASBuild_RenderThread @ 1494d4dd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FComputeViewExtension::PostTLASBuild_RenderThread
          (FComputeViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  TArray<IComputeTaskWorker_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  char cVar10;
  UObject *pUVar11;
  FScriptContainerElement *pFVar12;
  UObject *local_res8;
  FRDGBuilder *local_res10;
  FWeakObjectPtr local_res20;
  FRDGBuilder *local_68;
  FName local_60;
  undefined4 local_58;
  longlong *local_50;
  FSceneView *local_48;
  
  local_res10 = param_1;
  local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
  bVar9 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar9) {
    pUVar11 = FWeakObjectPtr::Get(&local_res20);
    plVar6 = *(longlong **)(pUVar11 + 0xf);
    if (plVar6 != (longlong *)0x0) {
      uVar4 = (this->ComputeWorkers).ArrayNum;
      pTVar1 = &this->ComputeWorkers;
      lVar8 = plVar6[1];
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      piVar2 = &(this->ComputeWorkers).ArrayMax;
      (this->ComputeWorkers).ArrayNum = 0;
      if (*piVar2 != uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar4,&pTVar1->AllocatorInstance,0,piVar2);
      }
      (**(code **)(*plVar6 + 0x468))(plVar6,pTVar1);
      pFVar12 = (pTVar1->AllocatorInstance).Data;
      iVar5 = (this->ComputeWorkers).ArrayNum;
      pFVar3 = pFVar12 + (longlong)iVar5 * 8;
      while( true ) {
        if ((this->ComputeWorkers).ArrayNum != iVar5) {
          `TCheckedPointerIterator<IComputeTaskWorker_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (pFVar12 == pFVar3) break;
        plVar7 = *(longlong **)pFVar12;
        cVar10 = (**(code **)(*plVar7 + 8))(plVar7,ComputeTaskExecutionGroup::PostTLASBuild);
        if (cVar10 != '\0') {
          local_68 = local_res10;
          local_60 = ComputeTaskExecutionGroup::PostTLASBuild;
          local_58 = (int)lVar8;
          local_50 = plVar6;
          local_48 = param_2;
          (**(code **)(*plVar7 + 0x18))(plVar7,&local_68);
        }
        pFVar12 = pFVar12 + 8;
      }
    }
  }
  return;
}

