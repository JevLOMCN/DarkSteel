// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// TGuardValue<FRigVMExecuteContext,FRigVMExecuteContext> @ 14a079310

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TGuardValue<FRigVMExecuteContext,FRigVMExecuteContext> * __thiscall
TGuardValue<FRigVMExecuteContext,FRigVMExecuteContext>::
TGuardValue<FRigVMExecuteContext,FRigVMExecuteContext>
          (TGuardValue<FRigVMExecuteContext,FRigVMExecuteContext> *this,
          FRigVMExecuteContext *param_1,FRigVMExecuteContext *param_2)

{
  int *piVar1;
  TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  
  this->RefValue = param_1;
  (this->OriginalValue)._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  (this->OriginalValue).EventName = param_1->EventName;
  (this->OriginalValue).FunctionName = param_1->FunctionName;
  (this->OriginalValue).InstructionIndex = param_1->InstructionIndex;
  (this->OriginalValue).NumExecutions = param_1->NumExecutions;
  (this->OriginalValue).DeltaTime = param_1->DeltaTime;
  (this->OriginalValue).AbsoluteTime = param_1->AbsoluteTime;
  (this->OriginalValue).FramesPerSecond = param_1->FramesPerSecond;
  (this->OriginalValue).RuntimeSettings.MaximumArraySize =
       (param_1->RuntimeSettings).MaximumArraySize;
  (this->OriginalValue).RuntimeSettings.LogFunction.Object =
       (param_1->RuntimeSettings).LogFunction.Object;
  pTVar5 = (param_1->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
  (this->OriginalValue).RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController =
       pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &(this->OriginalValue).Traits;
  (this->OriginalValue).NameCache = param_1->NameCache;
  (this->OriginalValue).DrawInterfacePtr = param_1->DrawInterfacePtr;
  (this->OriginalValue).DrawContainerPtr = param_1->DrawContainerPtr;
  dVar7 = (param_1->ToWorldSpaceTransform).Rotation.XY.m128d_f64[1];
  (this->OriginalValue).ToWorldSpaceTransform.Rotation.XY.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Rotation.XY.m128d_f64[0];
  (this->OriginalValue).ToWorldSpaceTransform.Rotation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[1];
  (this->OriginalValue).ToWorldSpaceTransform.Rotation.ZW.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[0];
  (this->OriginalValue).ToWorldSpaceTransform.Rotation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ToWorldSpaceTransform).Translation.XY.m128d_f64[1];
  (this->OriginalValue).ToWorldSpaceTransform.Translation.XY.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Translation.XY.m128d_f64[0];
  (this->OriginalValue).ToWorldSpaceTransform.Translation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ToWorldSpaceTransform).Translation.ZW.m128d_f64[1];
  (this->OriginalValue).ToWorldSpaceTransform.Translation.ZW.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0];
  (this->OriginalValue).ToWorldSpaceTransform.Translation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[1];
  (this->OriginalValue).ToWorldSpaceTransform.Scale3D.XY.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[0];
  (this->OriginalValue).ToWorldSpaceTransform.Scale3D.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[1];
  (this->OriginalValue).ToWorldSpaceTransform.Scale3D.ZW.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[0];
  (this->OriginalValue).ToWorldSpaceTransform.Scale3D.ZW.m128d_f64[1] = dVar7;
  (this->OriginalValue).OwningObject = param_1->OwningObject;
  (this->OriginalValue).OwningActor = param_1->OwningActor;
  (this->OriginalValue).World = param_1->World;
  piVar1 = &(this->OriginalValue).Traits.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Traits).ArrayNum;
  pFVar6 = (param_1->Traits).AllocatorInstance.Data;
  (this->OriginalValue).Traits.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 5);
  }
  pTVar3 = &(this->OriginalValue).AdditionalTraitMemoryHandles;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OriginalValue).AdditionalTraitMemoryHandles.ArrayMax;
  iVar4 = (param_1->AdditionalTraitMemoryHandles).ArrayNum;
  pFVar6 = (param_1->AdditionalTraitMemoryHandles).AllocatorInstance.Data;
  (this->OriginalValue).AdditionalTraitMemoryHandles.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 5);
  }
  (this->OriginalValue).ExtendedExecuteContext = param_1->ExtendedExecuteContext;
  FRigVMExecuteContext::operator=(this->RefValue,param_2);
  return this;
}

