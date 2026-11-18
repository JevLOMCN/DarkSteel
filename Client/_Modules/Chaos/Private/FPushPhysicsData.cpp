// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// FPushPhysicsData @ 14388ba30

FPushPhysicsData * __thiscall Chaos::FPushPhysicsData::FPushPhysicsData(FPushPhysicsData *this)

{
  FDirtyProxiesBucket *pFVar1;
  longlong lVar2;
  
  (this->DirtyPropertiesManager).XRPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).XRPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).XRPool.Elements.ArrayMax = 0;
  lVar2 = 0xd;
  (this->DirtyPropertiesManager).VelocitiesPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).VelocitiesPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).VelocitiesPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).DynamicsPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).DynamicsPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).DynamicsPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).DynamicMiscPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).DynamicMiscPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).DynamicMiscPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).NonFrequentDataPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).NonFrequentDataPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).NonFrequentDataPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).MassPropsPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).MassPropsPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).MassPropsPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).KinematicTargetPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).KinematicTargetPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).KinematicTargetPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).JointSettingsPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).JointSettingsPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).JointSettingsPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).JointParticleProxiesPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).JointParticleProxiesPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).JointParticleProxiesPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).JointPhysicsObjectsPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).JointPhysicsObjectsPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).JointPhysicsObjectsPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).SuspensionSettingsPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).SuspensionSettingsPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).SuspensionSettingsPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).SuspensionParticleProxyPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).SuspensionParticleProxyPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).SuspensionParticleProxyPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).SuspensionLocationPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).SuspensionLocationPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).SuspensionLocationPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).SuspensionPhysicsObjectPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).SuspensionPhysicsObjectPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).SuspensionPhysicsObjectPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).CharacterGroundConstraintSettingsPool.Elements.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).CharacterGroundConstraintSettingsPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).CharacterGroundConstraintSettingsPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).CharacterGroundConstraintDynamicDataPool.Elements.AllocatorInstance
  .Data = (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).CharacterGroundConstraintDynamicDataPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).CharacterGroundConstraintDynamicDataPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).CharacterParticleProxyPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).CharacterParticleProxyPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).CharacterParticleProxyPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).GroundParticleProxyPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).GroundParticleProxyPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).GroundParticleProxyPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).ClusterXRPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).ClusterXRPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).ClusterXRPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).ClusterVelocitiesPool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).ClusterVelocitiesPool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).ClusterVelocitiesPool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).CollisionDataShapePool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).CollisionDataShapePool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).CollisionDataShapePool.Elements.ArrayMax = 0;
  (this->DirtyPropertiesManager).MaterialsShapePool.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyPropertiesManager).MaterialsShapePool.Elements.ArrayNum = 0;
  (this->DirtyPropertiesManager).MaterialsShapePool.Elements.ArrayMax = 0;
  (this->DirtyProxiesDataBuffer).DirtyProxyBucketInfo.Num[0] = 0;
  (this->DirtyProxiesDataBuffer).DirtyProxyBucketInfo.Num[1] = 0;
  (this->DirtyProxiesDataBuffer).DirtyProxyBucketInfo.Num[2] = 0;
  (this->DirtyProxiesDataBuffer).DirtyProxyBucketInfo.Num[3] = 0;
  (this->DirtyProxiesDataBuffer).DirtyProxyBucketInfo.Num[4] = 0;
  (this->DirtyProxiesDataBuffer).DirtyProxyBucketInfo.Num[5] = 0;
  (this->DirtyProxiesDataBuffer).DirtyProxyBucketInfo.Num[6] = 0;
  (this->DirtyProxiesDataBuffer).DirtyProxyBucketInfo.Num[7] = 0;
  (this->DirtyProxiesDataBuffer).DirtyProxyBucketInfo.Num[8] = 0;
  (this->DirtyProxiesDataBuffer).DirtyProxyBucketInfo.Num[9] = 0;
  (this->DirtyProxiesDataBuffer).DirtyProxyBucketInfo.Num[10] = 0;
  (this->DirtyProxiesDataBuffer).DirtyProxyBucketInfo.Num[0xb] = 0;
  *(undefined8 *)((this->DirtyProxiesDataBuffer).DirtyProxyBucketInfo.Num + 0xc) = 0;
  pFVar1 = (this->DirtyProxiesDataBuffer).DirtyProxyBuckets;
  do {
    (pFVar1->ProxiesData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->ProxiesData).ArrayNum = 0;
    (pFVar1->ProxiesData).ArrayMax = 0;
    pFVar1 = pFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (this->DirtyProxiesDataBuffer).ShapesData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyProxiesDataBuffer).ShapesData.ArrayNum = 0;
  (this->DirtyProxiesDataBuffer).ShapesData.ArrayMax = 0;
  (this->SimCallbackObjectsToAdd).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimCallbackObjectsToAdd).ArrayNum = 0;
  (this->SimCallbackObjectsToAdd).ArrayMax = 0;
  (this->SimCallbackObjectsToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimCallbackObjectsToRemove).ArrayNum = 0;
  (this->SimCallbackObjectsToRemove).ArrayMax = 0;
  (this->SimCallbackInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimCallbackInputs).ArrayNum = 0;
  (this->SimCallbackInputs).ArrayMax = 0;
  (this->SimCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimCommands).ArrayNum = 0;
  (this->SimCommands).ArrayMax = 0;
  return this;
}

// ClearAsyncInputForCallback @ 1438a8490

void __thiscall
Chaos::FPushPhysicsData::ClearAsyncInputForCallback
          (FPushPhysicsData *this,ISimCallbackObject *param_1)

{
  int *piVar1;
  TArray<Chaos::FSimCallbackInputAndObject,TSizedDefaultAllocator<32>_> *pTVar2;
  ISimCallbackObject *pIVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  pTVar2 = &this->SimCallbackInputs;
  uVar10 = 0;
  do {
    if (((int)uVar10 < 0) || ((this->SimCallbackInputs).ArrayNum <= (int)uVar10)) {
      return;
    }
    if (((int)uVar10 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    lVar11 = (longlong)(int)uVar10 * 0x10;
    pIVar3 = *(ISimCallbackObject **)(pFVar8 + lVar11);
    if (pIVar3 == param_1) {
      lVar4 = *(longlong *)(pFVar8 + lVar11 + 8);
      if ((*(int *)(lVar4 + 8) == 0) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8052828509065708209>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                             ,0x2b1,"NumSteps"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(pIVar3->_padding_ + 0x18))(pIVar3,lVar4);
      }
      uVar7 = 0;
      if ((int)uVar10 < (this->SimCallbackInputs).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = (pTVar2->AllocatorInstance).Data + lVar11;
      iVar9 = (this->SimCallbackInputs).ArrayNum + ~uVar10;
      if (iVar9 != 0) {
        memmove(pFVar8,pFVar8 + 0x10,(longlong)iVar9 << 4);
      }
      piVar1 = &(this->SimCallbackInputs).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar2->AllocatorInstance,(this->SimCallbackInputs).ArrayNum,
                 &(this->SimCallbackInputs).ArrayMax);
      uVar10 = uVar10 - 1;
    }
    uVar10 = uVar10 + 1;
  } while( true );
}

// ClearAsyncInputs @ 1438a8640

void __thiscall Chaos::FPushPhysicsData::ClearAsyncInputs(FPushPhysicsData *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [16];
  
  pFVar7 = (this->SimCallbackInputs).AllocatorInstance.Data;
  iVar2 = (this->SimCallbackInputs).ArrayNum;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->SimCallbackInputs).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FSimCallbackInputAndObject,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    plVar3 = *(longlong **)pFVar7;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = *(longlong *)(pFVar7 + 8);
      if (*(int *)(lVar4 + 8) == 0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8052828509065708209>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                           ,0x2b1,"NumSteps");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    pFVar7 = pFVar7 + 0x10;
  }
  (this->SimCallbackInputs).ArrayNum = 0;
  if ((this->SimCallbackInputs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->SimCallbackInputs).AllocatorInstance,0,
               &(this->SimCallbackInputs).ArrayMax);
  }
  return;
}

// ClearSimCommands @ 1438a87c0

void __thiscall Chaos::FPushPhysicsData::ClearSimCommands(FPushPhysicsData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->SimCommands).AllocatorInstance.Data;
  iVar2 = (this->SimCommands).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SimCommands).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FSimCallbackCommandObject_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(undefined8 **)pFVar3 != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)pFVar3)();
    }
    pFVar3 = pFVar3 + 8;
  }
  (this->SimCommands).ArrayNum = 0;
  if ((this->SimCommands).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SimCommands).AllocatorInstance,0,&(this->SimCommands).ArrayMax);
  }
  return;
}

// CopySubstepData @ 1438ab720

void __thiscall
Chaos::FPushPhysicsData::CopySubstepData(FPushPhysicsData *this,FPushPhysicsData *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  TArray<Chaos::FSimCallbackInputAndObject,TSizedDefaultAllocator<32>_> *pTVar3;
  <lambda_1> local_18;
  
  FDirtyPropertiesManager::PrepareBuckets
            (&this->DirtyPropertiesManager,&(param_1->DirtyProxiesDataBuffer).DirtyProxyBucketInfo);
  local_18.__this = this;
  local_18.FirstManager = &param_1->DirtyPropertiesManager;
  FDirtySet::ForEachProxy<_Chaos::FPushPhysicsData::CopySubstepData_::__l2::<lambda_1>_>
            (&param_1->DirtyProxiesDataBuffer,&local_18);
  pTVar3 = &this->SimCallbackInputs;
  if (pTVar3 != &param_1->SimCallbackInputs) {
    iVar2 = (param_1->SimCallbackInputs).ArrayNum;
    piVar1 = &(this->SimCallbackInputs).ArrayMax;
    _Src = (param_1->SimCallbackInputs).AllocatorInstance.Data;
    (this->SimCallbackInputs).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&pTVar3->AllocatorInstance,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
    }
  }
  return;
}

// Reset @ 1438d02f0

void __thiscall Chaos::FPushPhysicsData::Reset(FPushPhysicsData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  ClearAsyncInputs(this);
  pFVar6 = (this->SimCallbackObjectsToRemove).AllocatorInstance.Data;
  iVar2 = (this->SimCallbackObjectsToRemove).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SimCallbackObjectsToRemove).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    puVar3 = *(undefined8 **)pFVar6;
    if (*(char *)(puVar3 + 1) == '\0') {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3823344985994952866>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ChaosMarshallingManager.cpp"
                         ,0xa2,"CallbackToRemove->bPendingDelete");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)*puVar3)(puVar3);
    pFVar6 = pFVar6 + 8;
  }
  ClearSimCommands(this);
  FDirtySet::Reset(&this->DirtyProxiesDataBuffer);
  (this->SimCallbackObjectsToAdd).ArrayNum = 0;
  if ((this->SimCallbackObjectsToAdd).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SimCallbackObjectsToAdd).AllocatorInstance,0,
               &(this->SimCallbackObjectsToAdd).ArrayMax);
  }
  (this->SimCallbackObjectsToRemove).ArrayNum = 0;
  if ((this->SimCallbackObjectsToRemove).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SimCallbackObjectsToRemove).AllocatorInstance,0,
               &(this->SimCallbackObjectsToRemove).ArrayMax);
  }
  return;
}

// ResetDirtyProxiesBuffer @ 1438d0430

void __thiscall Chaos::FPushPhysicsData::ResetDirtyProxiesBuffer(FPushPhysicsData *this)

{
  int iVar1;
  FShapeDirtyData *pFVar2;
  FDirtyProxy *this_00;
  int iVar3;
  FDirtyProxy *pFVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  pFVar2 = (FShapeDirtyData *)(this->DirtyProxiesDataBuffer).ShapesData.AllocatorInstance.Data;
  piVar5 = &(this->DirtyProxiesDataBuffer).DirtyProxyBuckets[0].ProxiesData.ArrayNum;
  lVar6 = 0xd;
  do {
    iVar1 = *piVar5;
    this_00 = (FDirtyProxy *)
              (((TArray<Chaos::FDirtyProxy,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->
              AllocatorInstance).Data;
    pFVar4 = this_00 + iVar1;
    iVar3 = 0;
    while( true ) {
      if (*piVar5 != iVar1) {
        `TCheckedPointerIterator<Chaos::FDirtyProxy,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_00 == pFVar4) break;
      FDirtyProxy::Clear(this_00,&this->DirtyPropertiesManager,iVar3,pFVar2);
      this_00 = this_00 + 1;
      iVar3 = iVar3 + 1;
    }
    piVar5 = piVar5 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

// ResetForHistory @ 1438d04e0

void __thiscall Chaos::FPushPhysicsData::ResetForHistory(FPushPhysicsData *this)

{
  if (!bCachePushDataDirtyProxies) {
    ResetDirtyProxiesBuffer(this);
    FDirtySet::Reset(&this->DirtyProxiesDataBuffer);
  }
  if (bCachePushDataAsyncInputs == false) {
    ClearAsyncInputs(this);
  }
  if (bCachePushDataSimCommands == false) {
    ClearSimCommands(this);
  }
  (this->SimCallbackObjectsToAdd).ArrayNum = 0;
  if ((this->SimCallbackObjectsToAdd).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SimCallbackObjectsToAdd).AllocatorInstance,0,
               &(this->SimCallbackObjectsToAdd).ArrayMax);
  }
  return;
}

