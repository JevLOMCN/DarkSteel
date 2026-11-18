// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// GetOwningComponent @ 14a416a00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall FRigVMExecuteContext::GetOwningComponent(FRigVMExecuteContext *this)

{
  int iVar1;
  USceneComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (USceneComponent *)this->OwningObject;
  if (pUVar2 != (USceneComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USceneComponent *)0x0;
}

// FRigVMExecuteContext @ 14a517910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRigVMExecuteContext * __thiscall
FRigVMExecuteContext::FRigVMExecuteContext(FRigVMExecuteContext *this,FRigVMExecuteContext *param_1)

{
  int *piVar1;
  TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  
  this->_padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  this->EventName = param_1->EventName;
  this->FunctionName = param_1->FunctionName;
  this->InstructionIndex = param_1->InstructionIndex;
  this->NumExecutions = param_1->NumExecutions;
  this->DeltaTime = param_1->DeltaTime;
  this->AbsoluteTime = param_1->AbsoluteTime;
  this->FramesPerSecond = param_1->FramesPerSecond;
  (this->RuntimeSettings).MaximumArraySize = (param_1->RuntimeSettings).MaximumArraySize;
  (this->RuntimeSettings).LogFunction.Object = (param_1->RuntimeSettings).LogFunction.Object;
  pTVar5 = (param_1->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
  (this->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->Traits;
  this->NameCache = param_1->NameCache;
  this->DrawInterfacePtr = param_1->DrawInterfacePtr;
  this->DrawContainerPtr = param_1->DrawContainerPtr;
  dVar7 = (param_1->ToWorldSpaceTransform).Rotation.XY.m128d_f64[1];
  (this->ToWorldSpaceTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Rotation.XY.m128d_f64[0];
  (this->ToWorldSpaceTransform).Rotation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[1];
  (this->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[0];
  (this->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ToWorldSpaceTransform).Translation.XY.m128d_f64[1];
  (this->ToWorldSpaceTransform).Translation.XY.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Translation.XY.m128d_f64[0];
  (this->ToWorldSpaceTransform).Translation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ToWorldSpaceTransform).Translation.ZW.m128d_f64[1];
  (this->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0];
  (this->ToWorldSpaceTransform).Translation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[1];
  (this->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[0];
  (this->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[1];
  (this->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[0];
  (this->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar7;
  this->OwningObject = param_1->OwningObject;
  this->OwningActor = param_1->OwningActor;
  this->World = param_1->World;
  piVar1 = &(this->Traits).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Traits).ArrayNum;
  pFVar6 = (param_1->Traits).AllocatorInstance.Data;
  (this->Traits).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 5);
  }
  pTVar3 = &this->AdditionalTraitMemoryHandles;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->AdditionalTraitMemoryHandles).ArrayMax;
  iVar4 = (param_1->AdditionalTraitMemoryHandles).ArrayNum;
  pFVar6 = (param_1->AdditionalTraitMemoryHandles).AllocatorInstance.Data;
  (this->AdditionalTraitMemoryHandles).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 5);
  }
  this->ExtendedExecuteContext = param_1->ExtendedExecuteContext;
  return this;
}

